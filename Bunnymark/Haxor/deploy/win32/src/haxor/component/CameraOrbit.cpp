#include <hxcpp.h>

#ifndef INCLUDED_haxor_component_Behaviour
#include <haxor/component/Behaviour.h>
#endif
#ifndef INCLUDED_haxor_component_Camera
#include <haxor/component/Camera.h>
#endif
#ifndef INCLUDED_haxor_component_CameraOrbit
#include <haxor/component/CameraOrbit.h>
#endif
#ifndef INCLUDED_haxor_component_Component
#include <haxor/component/Component.h>
#endif
#ifndef INCLUDED_haxor_component_Transform
#include <haxor/component/Transform.h>
#endif
#ifndef INCLUDED_haxor_context_DataContext
#include <haxor/context/DataContext.h>
#endif
#ifndef INCLUDED_haxor_context_EngineContext
#include <haxor/context/EngineContext.h>
#endif
#ifndef INCLUDED_haxor_core_Entity
#include <haxor/core/Entity.h>
#endif
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_IResizeable
#include <haxor/core/IResizeable.h>
#endif
#ifndef INCLUDED_haxor_core_IUpdateable
#include <haxor/core/IUpdateable.h>
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
#ifndef INCLUDED_haxor_math_Color
#include <haxor/math/Color.h>
#endif
#ifndef INCLUDED_haxor_math_Quaternion
#include <haxor/math/Quaternion.h>
#endif
#ifndef INCLUDED_haxor_math_Vector2
#include <haxor/math/Vector2.h>
#endif
#ifndef INCLUDED_haxor_math_Vector3
#include <haxor/math/Vector3.h>
#endif
namespace haxor{
namespace component{

Void CameraOrbit_obj::__construct(::String __o_p_name)
{
HX_STACK_FRAME("haxor.component.CameraOrbit","new",0xc5a52f1a,"haxor.component.CameraOrbit.new","haxor/component/CameraOrbit.hx",21,0xdbbd8c58)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_p_name,"p_name")
::String p_name = __o_p_name.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(21)
	::String tmp = p_name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	super::__construct(tmp);
}
;
	return null();
}

//CameraOrbit_obj::~CameraOrbit_obj() { }

Dynamic CameraOrbit_obj::__CreateEmpty() { return  new CameraOrbit_obj; }
hx::ObjectPtr< CameraOrbit_obj > CameraOrbit_obj::__new(::String __o_p_name)
{  hx::ObjectPtr< CameraOrbit_obj > _result_ = new CameraOrbit_obj();
	_result_->__construct(__o_p_name);
	return _result_;}

Dynamic CameraOrbit_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CameraOrbit_obj > _result_ = new CameraOrbit_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *CameraOrbit_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxor::core::IUpdateable_obj)) return operator ::haxor::core::IUpdateable_obj *();
	return super::__ToInterface(inType);
}

CameraOrbit_obj::operator ::haxor::core::IUpdateable_obj *()
	{ return new ::haxor::core::IUpdateable_delegate_< CameraOrbit_obj >(this); }
::haxor::component::Transform CameraOrbit_obj::get_pivot( ){
	HX_STACK_FRAME("haxor.component.CameraOrbit","get_pivot",0x368fcd53,"haxor.component.CameraOrbit.get_pivot","haxor/component/CameraOrbit.hx",38,0xdbbd8c58)
	HX_STACK_THIS(this)
	HX_STACK_LINE(39)
	::haxor::component::Transform tmp = this->m_pivot;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(39)
	if ((tmp1)){
		HX_STACK_LINE(41)
		::haxor::core::Entity tmp2 = ::haxor::core::Entity_obj::__new(null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(41)
		::haxor::core::Entity e = tmp2;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(42)
		this->m_pivot = e->m_transform;
		HX_STACK_LINE(43)
		::haxor::component::Transform tmp3 = this->m_pivot;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(43)
		::haxor::core::Entity tmp4 = this->m_entity;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(43)
		::String tmp5 = tmp4->get_name();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(43)
		tmp3->set_name(tmp5);
		HX_STACK_LINE(44)
		::haxor::component::Transform tmp6 = this->m_pivot;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(44)
		::haxor::core::Entity tmp7 = this->m_entity;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(44)
		::haxor::component::Transform tmp8 = tmp7->m_transform->m_parent;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(44)
		tmp6->set_parent(tmp8);
		HX_STACK_LINE(45)
		::haxor::core::Entity tmp9 = this->m_entity;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(45)
		::haxor::component::Transform tmp10 = this->m_pivot;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(45)
		tmp9->m_transform->set_parent(tmp10);
		HX_STACK_LINE(46)
		::haxor::core::Entity tmp11 = this->m_entity;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(46)
		tmp11->set_name(HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7"));
		HX_STACK_LINE(47)
		::haxor::component::Transform tmp12 = this->m_pivot;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(47)
		::haxor::core::Entity tmp13 = this->m_entity;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(47)
		::haxor::math::Vector3 tmp14 = tmp13->m_transform->get_position();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(47)
		tmp12->set_position(tmp14);
	}
	HX_STACK_LINE(49)
	::haxor::component::Transform tmp2 = this->m_pivot;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(49)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(CameraOrbit_obj,get_pivot,return )

Void CameraOrbit_obj::OnBuild( ){
{
		HX_STACK_FRAME("haxor.component.CameraOrbit","OnBuild",0x2359e529,"haxor.component.CameraOrbit.OnBuild","haxor/component/CameraOrbit.hx",78,0xdbbd8c58)
		HX_STACK_THIS(this)
		HX_STACK_LINE(79)
		::haxor::math::Vector2 tmp = this->angle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(79)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(79)
		if ((tmp1)){
			HX_STACK_LINE(79)
			::haxor::math::Vector2 tmp2 = ::haxor::math::Vector2_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(79)
			this->angle = tmp2;
		}
		HX_STACK_LINE(80)
		this->distance = ((Float)0.0);
		HX_STACK_LINE(81)
		this->follow = false;
		HX_STACK_LINE(82)
		this->super::OnBuild();
	}
return null();
}


Void CameraOrbit_obj::OnStart( ){
{
		HX_STACK_FRAME("haxor.component.CameraOrbit","OnStart",0xec7a7e5d,"haxor.component.CameraOrbit.OnStart","haxor/component/CameraOrbit.hx",89,0xdbbd8c58)
		HX_STACK_THIS(this)
		HX_STACK_LINE(90)
		::haxor::component::Transform tmp = this->get_pivot();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(90)
		this->m_pivot = tmp;
		HX_STACK_LINE(91)
		Float tmp1 = this->distance;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(91)
		this->m_distance = tmp1;
		HX_STACK_LINE(92)
		::haxor::math::Vector2 tmp2 = this->angle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(92)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(92)
		::haxor::math::Vector2 tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(92)
		if ((tmp3)){
			HX_STACK_LINE(92)
			tmp4 = ::haxor::math::Vector2_obj::__new((int)0,(int)0);
		}
		else{
			HX_STACK_LINE(92)
			::haxor::math::Vector2 tmp5 = this->angle;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(92)
			::haxor::math::Vector2 _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(92)
			tmp4 = ::haxor::math::Vector2_obj::__new(_this->x,_this->y);
		}
		HX_STACK_LINE(92)
		this->m_angle = tmp4;
		HX_STACK_LINE(93)
		::haxor::math::Quaternion tmp5 = ::haxor::math::Quaternion_obj::__new((int)0,(int)0,(int)0,((Float)1.0));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(93)
		this->m_rotation = tmp5;
		HX_STACK_LINE(95)
		::haxor::math::Vector3 tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(95)
		{
			HX_STACK_LINE(95)
			::haxor::context::DataContext tmp7 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(95)
			::haxor::context::DataContext _this = tmp7;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(95)
			Array< ::Dynamic > tmp8 = _this->m_v3;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(95)
			int tmp9 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(95)
			int tmp10 = _this->m_v3->length;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(95)
			int tmp11 = hx::Mod(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(95)
			int tmp12 = _this->m_nv3 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(95)
			tmp6 = tmp8->__get(tmp12).StaticCast< ::haxor::math::Vector3 >();
		}
		HX_STACK_LINE(95)
		::haxor::math::Vector3 p = tmp6;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(96)
		Float tmp7 = this->m_distance;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(96)
		p->Set((int)0,(int)0,tmp7);
		HX_STACK_LINE(97)
		::haxor::core::Entity tmp8 = this->m_entity;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(97)
		::haxor::math::Vector3 tmp9 = p;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(97)
		tmp8->m_transform->set_localPosition(tmp9);
	}
return null();
}


Void CameraOrbit_obj::OnUpdate( ){
{
		HX_STACK_FRAME("haxor.component.CameraOrbit","OnUpdate",0x7fbf37ae,"haxor.component.CameraOrbit.OnUpdate","haxor/component/CameraOrbit.hx",102,0xdbbd8c58)
		HX_STACK_THIS(this)
		HX_STACK_LINE(103)
		Float tmp = this->smooth;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(103)
		bool tmp1 = (tmp <= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(103)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(103)
		if ((tmp1)){
			HX_STACK_LINE(103)
			tmp2 = ((Float)1.0);
		}
		else{
			HX_STACK_LINE(103)
			Float tmp3 = ::haxor::core::Time_obj::m_delta;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(103)
			Float tmp4 = this->smooth;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(103)
			tmp2 = (tmp3 * tmp4);
		}
		HX_STACK_LINE(103)
		Float blend = tmp2;		HX_STACK_VAR(blend,"blend");
		HX_STACK_LINE(104)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(104)
		{
			HX_STACK_LINE(104)
			::haxor::math::Vector2 tmp4 = this->m_angle;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(104)
			Float p_a = tmp4->x;		HX_STACK_VAR(p_a,"p_a");
			HX_STACK_LINE(104)
			Float tmp5 = p_a;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(104)
			::haxor::math::Vector2 tmp6 = this->angle;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(104)
			Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(104)
			Float tmp8 = p_a;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(104)
			Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(104)
			Float tmp10 = blend;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(104)
			Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(104)
			tmp3 = (tmp5 + tmp11);
		}
		HX_STACK_LINE(104)
		::haxor::math::Vector2 tmp4 = this->m_angle;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(104)
		tmp4->x = tmp3;
		HX_STACK_LINE(105)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(105)
		{
			HX_STACK_LINE(105)
			::haxor::math::Vector2 tmp6 = this->m_angle;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(105)
			Float p_a = tmp6->y;		HX_STACK_VAR(p_a,"p_a");
			HX_STACK_LINE(105)
			Float tmp7 = p_a;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(105)
			::haxor::math::Vector2 tmp8 = this->angle;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(105)
			Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(105)
			Float tmp10 = p_a;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(105)
			Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(105)
			Float tmp12 = blend;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(105)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(105)
			tmp5 = (tmp7 + tmp13);
		}
		HX_STACK_LINE(105)
		::haxor::math::Vector2 tmp6 = this->m_angle;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(105)
		tmp6->y = tmp5;
		HX_STACK_LINE(106)
		Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(106)
		{
			HX_STACK_LINE(106)
			Float tmp8 = this->m_distance;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(106)
			Float p_a = tmp8;		HX_STACK_VAR(p_a,"p_a");
			HX_STACK_LINE(106)
			Float tmp9 = p_a;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(106)
			Float tmp10 = this->distance;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(106)
			Float tmp11 = p_a;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(106)
			Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(106)
			Float tmp13 = blend;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(106)
			Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(106)
			tmp7 = (tmp9 + tmp14);
		}
		HX_STACK_LINE(106)
		this->m_distance = tmp7;
		HX_STACK_LINE(108)
		::haxor::math::Quaternion tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(108)
		{
			HX_STACK_LINE(108)
			::haxor::context::DataContext tmp9 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(108)
			::haxor::context::DataContext _this = tmp9;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(108)
			Array< ::Dynamic > tmp10 = _this->m_q;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(108)
			int tmp11 = (_this->m_nq + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(108)
			int tmp12 = _this->m_q->length;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(108)
			int tmp13 = hx::Mod(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(108)
			int tmp14 = _this->m_nq = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(108)
			tmp8 = tmp10->__get(tmp14).StaticCast< ::haxor::math::Quaternion >();
		}
		HX_STACK_LINE(108)
		::haxor::math::Quaternion q = tmp8;		HX_STACK_VAR(q,"q");
		HX_STACK_LINE(109)
		::haxor::math::Vector3 tmp9 = ::haxor::math::Vector3_obj::__new((int)0,(int)1,(int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(109)
		::haxor::math::Vector2 tmp10 = this->m_angle;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(109)
		Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(109)
		q->SetAxisAngle(tmp9,tmp11);
		HX_STACK_LINE(110)
		::haxor::math::Quaternion tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(110)
		{
			HX_STACK_LINE(110)
			::haxor::context::DataContext tmp13 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(110)
			::haxor::context::DataContext _this = tmp13;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(110)
			Array< ::Dynamic > tmp14 = _this->m_q;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(110)
			int tmp15 = (_this->m_nq + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(110)
			int tmp16 = _this->m_q->length;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(110)
			int tmp17 = hx::Mod(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(110)
			int tmp18 = _this->m_nq = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(110)
			tmp12 = tmp14->__get(tmp18).StaticCast< ::haxor::math::Quaternion >();
		}
		HX_STACK_LINE(110)
		::haxor::math::Vector3 tmp13 = ::haxor::math::Vector3_obj::__new((int)1,(int)0,(int)0);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(110)
		::haxor::math::Vector2 tmp14 = this->m_angle;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(110)
		Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(110)
		Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(110)
		::haxor::math::Quaternion tmp17 = tmp12->SetAxisAngle(tmp13,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(110)
		q->Multiply(tmp17,null());
		HX_STACK_LINE(111)
		::haxor::component::Transform tmp18 = this->get_pivot();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(111)
		::haxor::math::Quaternion tmp19 = q;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(111)
		tmp18->set_localRotation(tmp19);
		HX_STACK_LINE(113)
		::haxor::math::Vector3 tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(113)
		{
			HX_STACK_LINE(113)
			::haxor::context::DataContext tmp21 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(113)
			::haxor::context::DataContext _this = tmp21;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(113)
			Array< ::Dynamic > tmp22 = _this->m_v3;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(113)
			int tmp23 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(113)
			int tmp24 = _this->m_v3->length;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(113)
			int tmp25 = hx::Mod(tmp23,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(113)
			int tmp26 = _this->m_nv3 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(113)
			tmp20 = tmp22->__get(tmp26).StaticCast< ::haxor::math::Vector3 >();
		}
		HX_STACK_LINE(113)
		::haxor::math::Vector3 p = tmp20;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(114)
		Float tmp21 = this->m_distance;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(114)
		p->Set((int)0,(int)0,tmp21);
		HX_STACK_LINE(115)
		::haxor::core::Entity tmp22 = this->m_entity;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(115)
		::haxor::math::Vector3 tmp23 = p;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(115)
		tmp22->m_transform->set_localPosition(tmp23);
		HX_STACK_LINE(117)
		::haxor::component::Transform tmp24 = this->target;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(117)
		bool tmp25 = (tmp24 != null());		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(117)
		if ((tmp25)){
			HX_STACK_LINE(119)
			bool tmp26 = this->follow;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(119)
			if ((tmp26)){
				HX_STACK_LINE(121)
				::haxor::component::Transform tmp27 = this->get_pivot();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(121)
				::haxor::math::Vector3 tmp28 = tmp27->get_localPosition();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(121)
				::haxor::math::Vector3 p1 = tmp28;		HX_STACK_VAR(p1,"p1");
				HX_STACK_LINE(122)
				::haxor::math::Vector3 tmp29 = p1;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(122)
				::haxor::component::Transform tmp30 = this->target;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(122)
				::haxor::math::Vector3 tmp31 = tmp30->get_localPosition();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(122)
				Float tmp32 = ::haxor::core::Time_obj::m_delta;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(122)
				Float tmp33 = this->smooth;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(122)
				Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(122)
				::haxor::math::Vector3 tmp35 = ::haxor::math::Vector3_obj::Lerp(tmp29,tmp31,tmp34,null());		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(122)
				p1 = tmp35;
				HX_STACK_LINE(123)
				::haxor::component::Transform tmp36 = this->get_pivot();		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(123)
				::haxor::math::Vector3 tmp37 = p1;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(123)
				tmp36->set_localPosition(tmp37);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CameraOrbit_obj,OnUpdate,(void))

::haxor::component::CameraOrbit CameraOrbit_obj::Create( hx::Null< Float >  __o_p_distance,hx::Null< Float >  __o_p_angle_x,hx::Null< Float >  __o_p_angle_y){
Float p_distance = __o_p_distance.Default(1);
Float p_angle_x = __o_p_angle_x.Default(0);
Float p_angle_y = __o_p_angle_y.Default(0);
	HX_STACK_FRAME("haxor.component.CameraOrbit","Create",0xf0f2eca2,"haxor.component.CameraOrbit.Create","haxor/component/CameraOrbit.hx",24,0xdbbd8c58)
	HX_STACK_ARG(p_distance,"p_distance")
	HX_STACK_ARG(p_angle_x,"p_angle_x")
	HX_STACK_ARG(p_angle_y,"p_angle_y")
{
		HX_STACK_LINE(25)
		::haxor::core::Entity tmp = ::haxor::core::Entity_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(25)
		::haxor::core::Entity e = tmp;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(26)
		e->set_name(HX_HCSTRING("camera_orbit","\x30","\x07","\x61","\xc5"));
		HX_STACK_LINE(27)
		Dynamic tmp1 = e->AddComponent(hx::ClassOf< ::haxor::component::Camera >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(27)
		::haxor::component::Camera c = ((::haxor::component::Camera)(tmp1));		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(28)
		::haxor::math::Color tmp2 = ::haxor::math::Color_obj::__new((int)0,(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(28)
		c->background = tmp2;
		HX_STACK_LINE(29)
		Dynamic tmp3 = e->AddComponent(hx::ClassOf< ::haxor::component::CameraOrbit >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(29)
		::haxor::component::CameraOrbit orbit = ((::haxor::component::CameraOrbit)(tmp3));		HX_STACK_VAR(orbit,"orbit");
		HX_STACK_LINE(30)
		orbit->distance = p_distance;
		HX_STACK_LINE(31)
		orbit->smooth = (int)0;
		HX_STACK_LINE(32)
		::haxor::math::Vector2 tmp4 = ::haxor::math::Vector2_obj::__new(p_angle_x,p_angle_y);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(32)
		orbit->angle = tmp4;
		HX_STACK_LINE(33)
		::haxor::component::CameraOrbit tmp5 = orbit;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(33)
		return tmp5;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CameraOrbit_obj,Create,return )


CameraOrbit_obj::CameraOrbit_obj()
{
}

void CameraOrbit_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CameraOrbit);
	HX_MARK_MEMBER_NAME(m_pivot,"m_pivot");
	HX_MARK_MEMBER_NAME(distance,"distance");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(smooth,"smooth");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(follow,"follow");
	HX_MARK_MEMBER_NAME(m_angle,"m_angle");
	HX_MARK_MEMBER_NAME(m_distance,"m_distance");
	HX_MARK_MEMBER_NAME(m_rotation,"m_rotation");
	::haxor::component::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CameraOrbit_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_pivot,"m_pivot");
	HX_VISIT_MEMBER_NAME(distance,"distance");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(smooth,"smooth");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(follow,"follow");
	HX_VISIT_MEMBER_NAME(m_angle,"m_angle");
	HX_VISIT_MEMBER_NAME(m_distance,"m_distance");
	HX_VISIT_MEMBER_NAME(m_rotation,"m_rotation");
	::haxor::component::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CameraOrbit_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"pivot") ) { if (inCallProp == hx::paccAlways) return get_pivot(); }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"smooth") ) { return smooth; }
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		if (HX_FIELD_EQ(inName,"follow") ) { return follow; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_pivot") ) { return m_pivot; }
		if (HX_FIELD_EQ(inName,"m_angle") ) { return m_angle; }
		if (HX_FIELD_EQ(inName,"OnBuild") ) { return OnBuild_dyn(); }
		if (HX_FIELD_EQ(inName,"OnStart") ) { return OnStart_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { return distance; }
		if (HX_FIELD_EQ(inName,"OnUpdate") ) { return OnUpdate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_pivot") ) { return get_pivot_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_distance") ) { return m_distance; }
		if (HX_FIELD_EQ(inName,"m_rotation") ) { return m_rotation; }
	}
	return super::__Field(inName,inCallProp);
}

bool CameraOrbit_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"Create") ) { outValue = Create_dyn(); return true;  }
	}
	return false;
}

Dynamic CameraOrbit_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< ::haxor::math::Vector2 >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"smooth") ) { smooth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< ::haxor::component::Transform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"follow") ) { follow=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_pivot") ) { m_pivot=inValue.Cast< ::haxor::component::Transform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_angle") ) { m_angle=inValue.Cast< ::haxor::math::Vector2 >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { distance=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_distance") ) { m_distance=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_rotation") ) { m_rotation=inValue.Cast< ::haxor::math::Quaternion >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool CameraOrbit_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void CameraOrbit_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("pivot","\xc2","\x4a","\xa2","\xc2"));
	outFields->push(HX_HCSTRING("m_pivot","\x30","\x22","\x2d","\x73"));
	outFields->push(HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b"));
	outFields->push(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"));
	outFields->push(HX_HCSTRING("smooth","\x2e","\x08","\x6b","\x07"));
	outFields->push(HX_HCSTRING("target","\x51","\xf3","\xec","\x86"));
	outFields->push(HX_HCSTRING("follow","\x71","\x91","\x96","\xf9"));
	outFields->push(HX_HCSTRING("m_angle","\x41","\x1b","\x6d","\xd3"));
	outFields->push(HX_HCSTRING("m_distance","\x87","\x94","\x44","\x93"));
	outFields->push(HX_HCSTRING("m_rotation","\x90","\x3e","\xd1","\x2f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::component::Transform*/ ,(int)offsetof(CameraOrbit_obj,m_pivot),HX_HCSTRING("m_pivot","\x30","\x22","\x2d","\x73")},
	{hx::fsFloat,(int)offsetof(CameraOrbit_obj,distance),HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b")},
	{hx::fsObject /*::haxor::math::Vector2*/ ,(int)offsetof(CameraOrbit_obj,angle),HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22")},
	{hx::fsFloat,(int)offsetof(CameraOrbit_obj,smooth),HX_HCSTRING("smooth","\x2e","\x08","\x6b","\x07")},
	{hx::fsObject /*::haxor::component::Transform*/ ,(int)offsetof(CameraOrbit_obj,target),HX_HCSTRING("target","\x51","\xf3","\xec","\x86")},
	{hx::fsBool,(int)offsetof(CameraOrbit_obj,follow),HX_HCSTRING("follow","\x71","\x91","\x96","\xf9")},
	{hx::fsObject /*::haxor::math::Vector2*/ ,(int)offsetof(CameraOrbit_obj,m_angle),HX_HCSTRING("m_angle","\x41","\x1b","\x6d","\xd3")},
	{hx::fsFloat,(int)offsetof(CameraOrbit_obj,m_distance),HX_HCSTRING("m_distance","\x87","\x94","\x44","\x93")},
	{hx::fsObject /*::haxor::math::Quaternion*/ ,(int)offsetof(CameraOrbit_obj,m_rotation),HX_HCSTRING("m_rotation","\x90","\x3e","\xd1","\x2f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get_pivot","\x19","\xa7","\x4b","\x06"),
	HX_HCSTRING("m_pivot","\x30","\x22","\x2d","\x73"),
	HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b"),
	HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"),
	HX_HCSTRING("smooth","\x2e","\x08","\x6b","\x07"),
	HX_HCSTRING("target","\x51","\xf3","\xec","\x86"),
	HX_HCSTRING("follow","\x71","\x91","\x96","\xf9"),
	HX_HCSTRING("m_angle","\x41","\x1b","\x6d","\xd3"),
	HX_HCSTRING("m_distance","\x87","\x94","\x44","\x93"),
	HX_HCSTRING("m_rotation","\x90","\x3e","\xd1","\x2f"),
	HX_HCSTRING("OnBuild","\x6f","\xa1","\x79","\x1e"),
	HX_HCSTRING("OnStart","\xa3","\x3a","\x9a","\xe7"),
	HX_HCSTRING("OnUpdate","\xa8","\x38","\x64","\x40"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CameraOrbit_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CameraOrbit_obj::__mClass,"__mClass");
};

#endif

hx::Class CameraOrbit_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("Create","\x1c","\xdb","\xa3","\xb0"),
	String(null()) };

void CameraOrbit_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.component.CameraOrbit","\x28","\x5a","\x2d","\x74");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CameraOrbit_obj::__GetStatic;
	__mClass->mSetStaticField = &CameraOrbit_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CameraOrbit_obj >;
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

void CameraOrbit_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/component/CameraOrbit.hx",21,0xdbbd8c58)
		{
			hx::Anon __result = hx::Anon_obj::Create();
			struct _Function_1_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/component/CameraOrbit.hx",21,0xdbbd8c58)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						struct _Function_2_1{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/component/CameraOrbit.hx",21,0xdbbd8c58)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b") , _Function_2_1::Block(),false);
						struct _Function_2_2{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/component/CameraOrbit.hx",21,0xdbbd8c58)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22") , _Function_2_2::Block(),false);
						struct _Function_2_3{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/component/CameraOrbit.hx",21,0xdbbd8c58)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("smooth","\x2e","\x08","\x6b","\x07") , _Function_2_3::Block(),false);
						struct _Function_2_4{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/component/CameraOrbit.hx",21,0xdbbd8c58)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("target","\x51","\xf3","\xec","\x86") , _Function_2_4::Block(),false);
						struct _Function_2_5{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/component/CameraOrbit.hx",21,0xdbbd8c58)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("follow","\x71","\x91","\x96","\xf9") , _Function_2_5::Block(),false);
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
