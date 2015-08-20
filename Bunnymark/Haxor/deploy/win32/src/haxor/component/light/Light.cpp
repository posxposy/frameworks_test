#include <hxcpp.h>

#ifndef INCLUDED_haxor_component_Behaviour
#include <haxor/component/Behaviour.h>
#endif
#ifndef INCLUDED_haxor_component_Component
#include <haxor/component/Component.h>
#endif
#ifndef INCLUDED_haxor_component_light_Light
#include <haxor/component/light/Light.h>
#endif
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_math_Color
#include <haxor/math/Color.h>
#endif
namespace haxor{
namespace component{
namespace light{

Void Light_obj::__construct()
{
HX_STACK_FRAME("haxor.component.light.Light","new",0x7af46433,"haxor.component.light.Light.new","haxor/component/light/Light.hx",66,0xc79aa660)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(67)
	Array< ::Dynamic > tmp = ::haxor::component::light::Light_obj::m_list;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(67)
	if ((tmp1)){
		HX_STACK_LINE(67)
		Array< ::Dynamic > tmp2 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(67)
		::haxor::component::light::Light_obj::m_list = tmp2;
	}
	HX_STACK_LINE(68)
	Array< Float > tmp2 = ::haxor::component::light::Light_obj::m_buffer;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(68)
	int tmp3 = tmp2->length;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(68)
	bool tmp4 = (tmp3 <= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(68)
	if ((tmp4)){
		HX_STACK_LINE(68)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(68)
		int tmp5 = ::haxor::component::light::Light_obj::max;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(68)
		int tmp6 = ((int)12 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(68)
		int _g = tmp6;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(68)
		while((true)){
			HX_STACK_LINE(68)
			bool tmp7 = (_g1 < _g);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(68)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(68)
			if ((tmp8)){
				HX_STACK_LINE(68)
				break;
			}
			HX_STACK_LINE(68)
			int tmp9 = (_g1)++;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(68)
			int i = tmp9;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(68)
			Array< Float > tmp10 = ::haxor::component::light::Light_obj::m_buffer;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(68)
			tmp10->push(((Float)0.0));
		}
	}
	HX_STACK_LINE(69)
	Array< ::Dynamic > tmp5 = ::haxor::component::light::Light_obj::m_list;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(69)
	tmp5->push(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(70)
	super::__construct(null());
}
;
	return null();
}

//Light_obj::~Light_obj() { }

Dynamic Light_obj::__CreateEmpty() { return  new Light_obj; }
hx::ObjectPtr< Light_obj > Light_obj::__new()
{  hx::ObjectPtr< Light_obj > _result_ = new Light_obj();
	_result_->__construct();
	return _result_;}

Dynamic Light_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Light_obj > _result_ = new Light_obj();
	_result_->__construct();
	return _result_;}

Void Light_obj::OnBuild( ){
{
		HX_STACK_FRAME("haxor.component.light.Light","OnBuild",0xcdec1ac2,"haxor.component.light.Light.OnBuild","haxor/component/light/Light.hx",74,0xc79aa660)
		HX_STACK_THIS(this)
		HX_STACK_LINE(75)
		this->super::OnBuild();
		HX_STACK_LINE(76)
		::haxor::math::Color tmp = ::haxor::math::Color_obj::__new((int)1,(int)1,(int)1,(int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(76)
		this->color = tmp;
		HX_STACK_LINE(77)
		this->intensity = ((Float)1.0);
	}
return null();
}


Void Light_obj::OnDestroy( ){
{
		HX_STACK_FRAME("haxor.component.light.Light","OnDestroy",0xea05798e,"haxor.component.light.Light.OnDestroy","haxor/component/light/Light.hx",84,0xc79aa660)
		HX_STACK_THIS(this)
		HX_STACK_LINE(85)
		this->super::OnDestroy();
		HX_STACK_LINE(86)
		Array< ::Dynamic > tmp = ::haxor::component::light::Light_obj::m_list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(86)
		tmp->remove(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


::haxor::math::Color Light_obj::ambient;

int Light_obj::max;

Array< Float > Light_obj::m_buffer;

Array< ::Dynamic > Light_obj::list;

Array< ::Dynamic > Light_obj::m_list;

Array< ::Dynamic > Light_obj::get_list( ){
	HX_STACK_FRAME("haxor.component.light.Light","get_list",0x9c258734,"haxor.component.light.Light.get_list","haxor/component/light/Light.hx",48,0xc79aa660)
	HX_STACK_LINE(49)
	Array< ::Dynamic > tmp = ::haxor::component::light::Light_obj::m_list;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	Array< ::Dynamic > tmp1 = tmp->copy();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(49)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Light_obj,get_list,return )

Void Light_obj::SetLightData( int p_id,Float p_type,Float p_intensity,Float p_radius,Float p_atten,Float p_x,Float p_y,Float p_z,Float p_r,Float p_g,Float p_b,Float p_a){
{
		HX_STACK_FRAME("haxor.component.light.Light","SetLightData",0x19791c0b,"haxor.component.light.Light.SetLightData","haxor/component/light/Light.hx",105,0xc79aa660)
		HX_STACK_ARG(p_id,"p_id")
		HX_STACK_ARG(p_type,"p_type")
		HX_STACK_ARG(p_intensity,"p_intensity")
		HX_STACK_ARG(p_radius,"p_radius")
		HX_STACK_ARG(p_atten,"p_atten")
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_ARG(p_z,"p_z")
		HX_STACK_ARG(p_r,"p_r")
		HX_STACK_ARG(p_g,"p_g")
		HX_STACK_ARG(p_b,"p_b")
		HX_STACK_ARG(p_a,"p_a")
		HX_STACK_LINE(106)
		int tmp = (p_id * (int)12);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(106)
		int pos = tmp;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(107)
		Array< Float > tmp1 = ::haxor::component::light::Light_obj::m_buffer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(107)
		int tmp2 = pos;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(107)
		Float tmp3 = p_type;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(107)
		tmp1[tmp2] = tmp3;
		HX_STACK_LINE(108)
		Array< Float > tmp4 = ::haxor::component::light::Light_obj::m_buffer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(108)
		int tmp5 = (pos + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(108)
		Float tmp6 = p_intensity;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(108)
		tmp4[tmp5] = tmp6;
		HX_STACK_LINE(109)
		Array< Float > tmp7 = ::haxor::component::light::Light_obj::m_buffer;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(109)
		int tmp8 = (pos + (int)2);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(109)
		Float tmp9 = p_radius;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(109)
		tmp7[tmp8] = tmp9;
		HX_STACK_LINE(110)
		Array< Float > tmp10 = ::haxor::component::light::Light_obj::m_buffer;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(110)
		int tmp11 = (pos + (int)3);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(110)
		Float tmp12 = p_atten;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(110)
		tmp10[tmp11] = tmp12;
		HX_STACK_LINE(112)
		Array< Float > tmp13 = ::haxor::component::light::Light_obj::m_buffer;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(112)
		int tmp14 = (pos + (int)4);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(112)
		Float tmp15 = p_x;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(112)
		tmp13[tmp14] = tmp15;
		HX_STACK_LINE(113)
		Array< Float > tmp16 = ::haxor::component::light::Light_obj::m_buffer;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(113)
		int tmp17 = (pos + (int)5);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(113)
		Float tmp18 = p_y;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(113)
		tmp16[tmp17] = tmp18;
		HX_STACK_LINE(114)
		Array< Float > tmp19 = ::haxor::component::light::Light_obj::m_buffer;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(114)
		int tmp20 = (pos + (int)6);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(114)
		Float tmp21 = p_z;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(114)
		tmp19[tmp20] = tmp21;
		HX_STACK_LINE(117)
		Array< Float > tmp22 = ::haxor::component::light::Light_obj::m_buffer;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(117)
		int tmp23 = (pos + (int)8);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(117)
		Float tmp24 = p_r;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(117)
		tmp22[tmp23] = tmp24;
		HX_STACK_LINE(118)
		Array< Float > tmp25 = ::haxor::component::light::Light_obj::m_buffer;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(118)
		int tmp26 = (pos + (int)9);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(118)
		Float tmp27 = p_g;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(118)
		tmp25[tmp26] = tmp27;
		HX_STACK_LINE(119)
		Array< Float > tmp28 = ::haxor::component::light::Light_obj::m_buffer;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(119)
		int tmp29 = (pos + (int)10);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(119)
		Float tmp30 = p_b;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(119)
		tmp28[tmp29] = tmp30;
		HX_STACK_LINE(120)
		Array< Float > tmp31 = ::haxor::component::light::Light_obj::m_buffer;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(120)
		int tmp32 = (pos + (int)11);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(120)
		Float tmp33 = p_a;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(120)
		tmp31[tmp32] = tmp33;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC12(Light_obj,SetLightData,(void))


Light_obj::Light_obj()
{
}

void Light_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Light);
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(intensity,"intensity");
	::haxor::component::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Light_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(intensity,"intensity");
	::haxor::component::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Light_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"OnBuild") ) { return OnBuild_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"intensity") ) { return intensity; }
		if (HX_FIELD_EQ(inName,"OnDestroy") ) { return OnDestroy_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Light_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"max") ) { outValue = max; return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { outValue = inCallProp == hx::paccAlways ? get_list() : list; return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_list") ) { outValue = m_list; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ambient") ) { outValue = ambient; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_buffer") ) { outValue = m_buffer; return true;  }
		if (HX_FIELD_EQ(inName,"get_list") ) { outValue = get_list_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"SetLightData") ) { outValue = SetLightData_dyn(); return true;  }
	}
	return false;
}

Dynamic Light_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< ::haxor::math::Color >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"intensity") ) { intensity=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Light_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"max") ) { max=ioValue.Cast< int >(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_list") ) { m_list=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ambient") ) { ambient=ioValue.Cast< ::haxor::math::Color >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_buffer") ) { m_buffer=ioValue.Cast< Array< Float > >(); return true; }
	}
	return false;
}

void Light_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("intensity","\xb3","\xc6","\xdd","\xf4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::math::Color*/ ,(int)offsetof(Light_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsFloat,(int)offsetof(Light_obj,intensity),HX_HCSTRING("intensity","\xb3","\xc6","\xdd","\xf4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxor::math::Color*/ ,(void *) &Light_obj::ambient,HX_HCSTRING("ambient","\x18","\x98","\x81","\x09")},
	{hx::fsInt,(void *) &Light_obj::max,HX_HCSTRING("max","\xa4","\x0a","\x53","\x00")},
	{hx::fsObject /*Array< Float >*/ ,(void *) &Light_obj::m_buffer,HX_HCSTRING("m_buffer","\xd2","\x65","\x86","\x99")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Light_obj::list,HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Light_obj::m_list,HX_HCSTRING("m_list","\xb0","\x8c","\xaa","\x8f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("intensity","\xb3","\xc6","\xdd","\xf4"),
	HX_HCSTRING("OnBuild","\x6f","\xa1","\x79","\x1e"),
	HX_HCSTRING("OnDestroy","\x7b","\xc5","\x03","\x9e"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Light_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Light_obj::ambient,"ambient");
	HX_MARK_MEMBER_NAME(Light_obj::max,"max");
	HX_MARK_MEMBER_NAME(Light_obj::m_buffer,"m_buffer");
	HX_MARK_MEMBER_NAME(Light_obj::list,"list");
	HX_MARK_MEMBER_NAME(Light_obj::m_list,"m_list");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Light_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Light_obj::ambient,"ambient");
	HX_VISIT_MEMBER_NAME(Light_obj::max,"max");
	HX_VISIT_MEMBER_NAME(Light_obj::m_buffer,"m_buffer");
	HX_VISIT_MEMBER_NAME(Light_obj::list,"list");
	HX_VISIT_MEMBER_NAME(Light_obj::m_list,"m_list");
};

#endif

hx::Class Light_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("ambient","\x18","\x98","\x81","\x09"),
	HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"),
	HX_HCSTRING("m_buffer","\xd2","\x65","\x86","\x99"),
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("m_list","\xb0","\x8c","\xaa","\x8f"),
	HX_HCSTRING("get_list","\xe7","\xd7","\x6d","\xc7"),
	HX_HCSTRING("SetLightData","\x3e","\x42","\xe3","\xa7"),
	String(null()) };

void Light_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.component.light.Light","\xc1","\xce","\xe3","\x02");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Light_obj::__GetStatic;
	__mClass->mSetStaticField = &Light_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Light_obj >;
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

void Light_obj::__boot()
{
	ambient= ::haxor::math::Color_obj::__new(((Float)0.0),((Float)0.0),((Float)0.0),((Float)1.0));
	max= (int)8;
	m_buffer= Array_obj< Float >::__new().Add((int)-1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)-1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)-1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)-1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)-1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)-1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)-1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)-1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0);
	m_list= Array_obj< ::Dynamic >::__new();
}

} // end namespace haxor
} // end namespace component
} // end namespace light
