#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_haxor_component_Behaviour
#include <haxor/component/Behaviour.h>
#endif
#ifndef INCLUDED_haxor_component_CameraOrbit
#include <haxor/component/CameraOrbit.h>
#endif
#ifndef INCLUDED_haxor_component_CameraOrbitInput
#include <haxor/component/CameraOrbitInput.h>
#endif
#ifndef INCLUDED_haxor_component_Component
#include <haxor/component/Component.h>
#endif
#ifndef INCLUDED_haxor_core_Entity
#include <haxor/core/Entity.h>
#endif
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_IUpdateable
#include <haxor/core/IUpdateable.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_input_Input
#include <haxor/input/Input.h>
#endif
#ifndef INCLUDED_haxor_input_KeyCode
#include <haxor/input/KeyCode.h>
#endif
#ifndef INCLUDED_haxor_input_Touch
#include <haxor/input/Touch.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_ISerializable
#include <haxor/io/serialization/ISerializable.h>
#endif
#ifndef INCLUDED_haxor_math_Vector2
#include <haxor/math/Vector2.h>
#endif
namespace haxor{
namespace component{

Void CameraOrbitInput_obj::__construct(::String __o_p_name)
{
HX_STACK_FRAME("haxor.component.CameraOrbitInput","new",0xf4da32b4,"haxor.component.CameraOrbitInput.new","haxor/component/CameraOrbit.hx",131,0xdbbd8c58)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_p_name,"p_name")
::String p_name = __o_p_name.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(143)
	this->rotateSpeed = ((Float)0.5);
	HX_STACK_LINE(140)
	this->zoomSpeed = ((Float)0.5);
	HX_STACK_LINE(137)
	this->zoom = true;
	HX_STACK_LINE(134)
	this->rotate = true;
	HX_STACK_LINE(131)
	::String tmp = p_name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(131)
	super::__construct(tmp);
}
;
	return null();
}

//CameraOrbitInput_obj::~CameraOrbitInput_obj() { }

Dynamic CameraOrbitInput_obj::__CreateEmpty() { return  new CameraOrbitInput_obj; }
hx::ObjectPtr< CameraOrbitInput_obj > CameraOrbitInput_obj::__new(::String __o_p_name)
{  hx::ObjectPtr< CameraOrbitInput_obj > _result_ = new CameraOrbitInput_obj();
	_result_->__construct(__o_p_name);
	return _result_;}

Dynamic CameraOrbitInput_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CameraOrbitInput_obj > _result_ = new CameraOrbitInput_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *CameraOrbitInput_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxor::core::IUpdateable_obj)) return operator ::haxor::core::IUpdateable_obj *();
	return super::__ToInterface(inType);
}

CameraOrbitInput_obj::operator ::haxor::core::IUpdateable_obj *()
	{ return new ::haxor::core::IUpdateable_delegate_< CameraOrbitInput_obj >(this); }
Void CameraOrbitInput_obj::OnStart( ){
{
		HX_STACK_FRAME("haxor.component.CameraOrbitInput","OnStart",0x39a256f7,"haxor.component.CameraOrbitInput.OnStart","haxor/component/CameraOrbit.hx",149,0xdbbd8c58)
		HX_STACK_THIS(this)
		HX_STACK_LINE(150)
		::haxor::core::Entity tmp = this->m_entity;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(150)
		Dynamic tmp1 = tmp->GetComponent(hx::ClassOf< ::haxor::component::CameraOrbit >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(150)
		this->m_orbit = tmp1;
	}
return null();
}


Void CameraOrbitInput_obj::OnUpdate( ){
{
		HX_STACK_FRAME("haxor.component.CameraOrbitInput","OnUpdate",0xb574e5d4,"haxor.component.CameraOrbitInput.OnUpdate","haxor/component/CameraOrbit.hx",154,0xdbbd8c58)
		HX_STACK_THIS(this)
		HX_STACK_LINE(155)
		Array< ::Dynamic > tmp = ::haxor::input::Input_obj::get_touches();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(155)
		int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(155)
		bool tmp2 = (tmp1 == (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(155)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(155)
		if ((tmp2)){
			HX_STACK_LINE(155)
			Array< ::Dynamic > tmp4 = ::haxor::input::Input_obj::get_touches();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(155)
			::haxor::input::Touch tmp5 = tmp4->__get((int)0).StaticCast< ::haxor::input::Touch >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(155)
			tmp3 = tmp5->delta->x;
		}
		else{
			HX_STACK_LINE(155)
			::haxor::math::Vector2 tmp4 = ::haxor::input::Input_obj::deltaMouse;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(155)
			tmp3 = tmp4->x;
		}
		HX_STACK_LINE(155)
		Float dx = tmp3;		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(156)
		Array< ::Dynamic > tmp4 = ::haxor::input::Input_obj::get_touches();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(156)
		int tmp5 = tmp4->length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(156)
		bool tmp6 = (tmp5 == (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(156)
		Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(156)
		if ((tmp6)){
			HX_STACK_LINE(156)
			Array< ::Dynamic > tmp8 = ::haxor::input::Input_obj::get_touches();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(156)
			::haxor::input::Touch tmp9 = tmp8->__get((int)0).StaticCast< ::haxor::input::Touch >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(156)
			tmp7 = tmp9->delta->y;
		}
		else{
			HX_STACK_LINE(156)
			::haxor::math::Vector2 tmp8 = ::haxor::input::Input_obj::deltaMouse;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(156)
			tmp7 = tmp8->y;
		}
		HX_STACK_LINE(156)
		Float dy = tmp7;		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(158)
		bool tmp8 = this->rotate;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(158)
		if ((tmp8)){
			HX_STACK_LINE(161)
			int tmp9 = ::haxor::input::KeyCode_obj::Mouse0;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(161)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(161)
			bool tmp11 = ::haxor::input::Input_obj::Pressed(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(161)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(161)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(161)
			if ((tmp12)){
				HX_STACK_LINE(161)
				Array< ::Dynamic > tmp14 = ::haxor::input::Input_obj::get_touches();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(161)
				Array< ::Dynamic > tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(161)
				int tmp16 = tmp15->length;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(161)
				tmp13 = (tmp16 == (int)1);
			}
			else{
				HX_STACK_LINE(161)
				tmp13 = true;
			}
			HX_STACK_LINE(161)
			bool is_rotate = tmp13;		HX_STACK_VAR(is_rotate,"is_rotate");
			HX_STACK_LINE(163)
			bool tmp14 = is_rotate;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(163)
			if ((tmp14)){
				HX_STACK_LINE(165)
				Float tmp15 = dx;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(165)
				Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(165)
				Float tmp17 = this->rotateSpeed;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(165)
				Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(165)
				::haxor::component::CameraOrbit tmp19 = this->m_orbit;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(165)
				hx::AddEq(tmp19->angle->x,tmp18);
				HX_STACK_LINE(166)
				Float tmp20 = dy;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(166)
				Float tmp21 = this->rotateSpeed;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(166)
				Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(166)
				::haxor::component::CameraOrbit tmp23 = this->m_orbit;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(166)
				hx::AddEq(tmp23->angle->y,tmp22);
			}
		}
		HX_STACK_LINE(170)
		bool tmp9 = this->zoom;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(170)
		if ((tmp9)){
			HX_STACK_LINE(172)
			Float tmp10 = ::haxor::input::Input_obj::wheel;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(172)
			Float tmp11 = ::Math_obj::abs(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(172)
			bool tmp12 = (tmp11 > (int)0);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(172)
			if ((tmp12)){
				HX_STACK_LINE(174)
				Float tmp13 = ::haxor::input::Input_obj::wheel;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(174)
				bool tmp14 = (tmp13 < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(174)
				Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(174)
				if ((tmp14)){
					HX_STACK_LINE(174)
					tmp15 = this->zoomSpeed;
				}
				else{
					HX_STACK_LINE(174)
					Float tmp16 = this->zoomSpeed;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(174)
					tmp15 = -(tmp16);
				}
				HX_STACK_LINE(174)
				::haxor::component::CameraOrbit tmp16 = this->m_orbit;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(174)
				hx::AddEq(tmp16->distance,tmp15);
			}
			HX_STACK_LINE(177)
			Array< ::Dynamic > tmp13 = ::haxor::input::Input_obj::get_touches();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(177)
			int tmp14 = tmp13->length;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(177)
			bool tmp15 = (tmp14 == (int)2);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(177)
			if ((tmp15)){
				HX_STACK_LINE(179)
				Array< ::Dynamic > tmp16 = ::haxor::input::Input_obj::get_touches();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(179)
				::haxor::input::Touch tmp17 = tmp16->__get((int)0).StaticCast< ::haxor::input::Touch >();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(179)
				Float tmp18 = tmp17->delta->y;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(179)
				Float tmp19 = this->zoomSpeed;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(179)
				Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(179)
				Float tmp21 = (tmp20 * ((Float)0.05));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(179)
				::haxor::component::CameraOrbit tmp22 = this->m_orbit;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(179)
				hx::AddEq(tmp22->distance,tmp21);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CameraOrbitInput_obj,OnUpdate,(void))


CameraOrbitInput_obj::CameraOrbitInput_obj()
{
}

void CameraOrbitInput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CameraOrbitInput);
	HX_MARK_MEMBER_NAME(rotate,"rotate");
	HX_MARK_MEMBER_NAME(zoom,"zoom");
	HX_MARK_MEMBER_NAME(zoomSpeed,"zoomSpeed");
	HX_MARK_MEMBER_NAME(rotateSpeed,"rotateSpeed");
	HX_MARK_MEMBER_NAME(m_orbit,"m_orbit");
	::haxor::component::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CameraOrbitInput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(rotate,"rotate");
	HX_VISIT_MEMBER_NAME(zoom,"zoom");
	HX_VISIT_MEMBER_NAME(zoomSpeed,"zoomSpeed");
	HX_VISIT_MEMBER_NAME(rotateSpeed,"rotateSpeed");
	HX_VISIT_MEMBER_NAME(m_orbit,"m_orbit");
	::haxor::component::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CameraOrbitInput_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { return zoom; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_orbit") ) { return m_orbit; }
		if (HX_FIELD_EQ(inName,"OnStart") ) { return OnStart_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"OnUpdate") ) { return OnUpdate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zoomSpeed") ) { return zoomSpeed; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"rotateSpeed") ) { return rotateSpeed; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CameraOrbitInput_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { zoom=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"rotate") ) { rotate=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_orbit") ) { m_orbit=inValue.Cast< ::haxor::component::CameraOrbit >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zoomSpeed") ) { zoomSpeed=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"rotateSpeed") ) { rotateSpeed=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool CameraOrbitInput_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void CameraOrbitInput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("rotate","\x5b","\x46","\x20","\xcb"));
	outFields->push(HX_HCSTRING("zoom","\x13","\xa3","\xf8","\x50"));
	outFields->push(HX_HCSTRING("zoomSpeed","\x74","\x5f","\x37","\x05"));
	outFields->push(HX_HCSTRING("rotateSpeed","\x2c","\xd7","\x32","\x53"));
	outFields->push(HX_HCSTRING("m_orbit","\xf8","\x46","\xaa","\xe5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(CameraOrbitInput_obj,rotate),HX_HCSTRING("rotate","\x5b","\x46","\x20","\xcb")},
	{hx::fsBool,(int)offsetof(CameraOrbitInput_obj,zoom),HX_HCSTRING("zoom","\x13","\xa3","\xf8","\x50")},
	{hx::fsFloat,(int)offsetof(CameraOrbitInput_obj,zoomSpeed),HX_HCSTRING("zoomSpeed","\x74","\x5f","\x37","\x05")},
	{hx::fsFloat,(int)offsetof(CameraOrbitInput_obj,rotateSpeed),HX_HCSTRING("rotateSpeed","\x2c","\xd7","\x32","\x53")},
	{hx::fsObject /*::haxor::component::CameraOrbit*/ ,(int)offsetof(CameraOrbitInput_obj,m_orbit),HX_HCSTRING("m_orbit","\xf8","\x46","\xaa","\xe5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("rotate","\x5b","\x46","\x20","\xcb"),
	HX_HCSTRING("zoom","\x13","\xa3","\xf8","\x50"),
	HX_HCSTRING("zoomSpeed","\x74","\x5f","\x37","\x05"),
	HX_HCSTRING("rotateSpeed","\x2c","\xd7","\x32","\x53"),
	HX_HCSTRING("m_orbit","\xf8","\x46","\xaa","\xe5"),
	HX_HCSTRING("OnStart","\xa3","\x3a","\x9a","\xe7"),
	HX_HCSTRING("OnUpdate","\xa8","\x38","\x64","\x40"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CameraOrbitInput_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CameraOrbitInput_obj::__mClass,"__mClass");
};

#endif

hx::Class CameraOrbitInput_obj::__mClass;

void CameraOrbitInput_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.component.CameraOrbitInput","\xc2","\x08","\xbe","\xb6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &CameraOrbitInput_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CameraOrbitInput_obj >;
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

void CameraOrbitInput_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/component/CameraOrbit.hx",131,0xdbbd8c58)
		{
			hx::Anon __result = hx::Anon_obj::Create();
			struct _Function_1_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/component/CameraOrbit.hx",131,0xdbbd8c58)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						struct _Function_2_1{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/component/CameraOrbit.hx",131,0xdbbd8c58)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("rotate","\x5b","\x46","\x20","\xcb") , _Function_2_1::Block(),false);
						struct _Function_2_2{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/component/CameraOrbit.hx",131,0xdbbd8c58)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("zoom","\x13","\xa3","\xf8","\x50") , _Function_2_2::Block(),false);
						struct _Function_2_3{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/component/CameraOrbit.hx",131,0xdbbd8c58)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("zoomSpeed","\x74","\x5f","\x37","\x05") , _Function_2_3::Block(),false);
						struct _Function_2_4{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/component/CameraOrbit.hx",131,0xdbbd8c58)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("rotateSpeed","\x2c","\xd7","\x32","\x53") , _Function_2_4::Block(),false);
						struct _Function_2_5{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/component/CameraOrbit.hx",131,0xdbbd8c58)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("m_orbit","\xf8","\x46","\xaa","\xe5") , _Function_2_5::Block(),false);
						return __result;
					}
					return null();
				}
			};
			__result->Add(HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80") , _Function_1_1::Block(),false);
			return __result;
		}
		return null();
	}
};
	__mClass->__meta__=_Function_0_1::Block();
}

} // end namespace haxor
} // end namespace component
