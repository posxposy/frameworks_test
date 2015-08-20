#include <hxcpp.h>

#include "hxMath.h"
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
#ifndef INCLUDED_haxor_context_TransformContext
#include <haxor/context/TransformContext.h>
#endif
#ifndef INCLUDED_haxor_context_UID
#include <haxor/context/UID.h>
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
#ifndef INCLUDED_haxor_math_Matrix4
#include <haxor/math/Matrix4.h>
#endif
#ifndef INCLUDED_haxor_math_Quaternion
#include <haxor/math/Quaternion.h>
#endif
#ifndef INCLUDED_haxor_math_Vector3
#include <haxor/math/Vector3.h>
#endif
namespace haxor{
namespace component{

Void Transform_obj::__construct(::String __o_p_name)
{
HX_STACK_FRAME("haxor.component.Transform","new",0xe78712a1,"haxor.component.Transform.new","haxor/component/Transform.hx",19,0x28912231)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_p_name,"p_name")
::String p_name = __o_p_name.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(19)
	::String tmp = p_name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	super::__construct(tmp);
}
;
	return null();
}

//Transform_obj::~Transform_obj() { }

Dynamic Transform_obj::__CreateEmpty() { return  new Transform_obj; }
hx::ObjectPtr< Transform_obj > Transform_obj::__new(::String __o_p_name)
{  hx::ObjectPtr< Transform_obj > _result_ = new Transform_obj();
	_result_->__construct(__o_p_name);
	return _result_;}

Dynamic Transform_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Transform_obj > _result_ = new Transform_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::haxor::math::Vector3 Transform_obj::get_right( ){
	HX_STACK_FRAME("haxor.component.Transform","get_right",0x14115134,"haxor.component.Transform.get_right","haxor/component/Transform.hx",63,0x28912231)
	HX_STACK_THIS(this)
	HX_STACK_LINE(63)
	this->UpdateWorldMatrix();
	HX_STACK_LINE(63)
	::haxor::math::Vector3 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	{
		HX_STACK_LINE(63)
		::haxor::math::Vector3 tmp1 = this->m_right;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(63)
		::haxor::math::Vector3 _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(63)
		tmp = ::haxor::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
	}
	HX_STACK_LINE(63)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_right,return )

::haxor::math::Vector3 Transform_obj::set_right( ::haxor::math::Vector3 v){
	HX_STACK_FRAME("haxor.component.Transform","set_right",0xf7623d40,"haxor.component.Transform.set_right","haxor/component/Transform.hx",64,0x28912231)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(64)
	::haxor::math::Vector3 tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_right,return )

::haxor::math::Vector3 Transform_obj::get_up( ){
	HX_STACK_FRAME("haxor.component.Transform","get_up",0xc8e8da03,"haxor.component.Transform.get_up","haxor/component/Transform.hx",71,0x28912231)
	HX_STACK_THIS(this)
	HX_STACK_LINE(71)
	this->UpdateWorldMatrix();
	HX_STACK_LINE(71)
	::haxor::math::Vector3 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(71)
	{
		HX_STACK_LINE(71)
		::haxor::math::Vector3 tmp1 = this->m_up;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(71)
		::haxor::math::Vector3 _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(71)
		tmp = ::haxor::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
	}
	HX_STACK_LINE(71)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_up,return )

::haxor::math::Vector3 Transform_obj::set_up( ::haxor::math::Vector3 v){
	HX_STACK_FRAME("haxor.component.Transform","set_up",0x95312e77,"haxor.component.Transform.set_up","haxor/component/Transform.hx",72,0x28912231)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(72)
	::haxor::math::Vector3 tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_up,return )

::haxor::math::Vector3 Transform_obj::get_forward( ){
	HX_STACK_FRAME("haxor.component.Transform","get_forward",0x0a562d1d,"haxor.component.Transform.get_forward","haxor/component/Transform.hx",79,0x28912231)
	HX_STACK_THIS(this)
	HX_STACK_LINE(79)
	this->UpdateWorldMatrix();
	HX_STACK_LINE(79)
	::haxor::math::Vector3 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(79)
	{
		HX_STACK_LINE(79)
		::haxor::math::Vector3 tmp1 = this->m_forward;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(79)
		::haxor::math::Vector3 _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(79)
		::haxor::math::Vector3 tmp2 = ::haxor::math::Vector3_obj::__new(_this->x,_this->y,_this->z);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(79)
		tmp = tmp2->Invert();
	}
	HX_STACK_LINE(79)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_forward,return )

::haxor::math::Vector3 Transform_obj::set_forward( ::haxor::math::Vector3 v){
	HX_STACK_FRAME("haxor.component.Transform","set_forward",0x14c33429,"haxor.component.Transform.set_forward","haxor/component/Transform.hx",80,0x28912231)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(80)
	::haxor::math::Vector3 tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(80)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_forward,return )

::haxor::component::Transform Transform_obj::get_parent( ){
	HX_STACK_FRAME("haxor.component.Transform","get_parent",0x1a6d6cd2,"haxor.component.Transform.get_parent","haxor/component/Transform.hx",89,0x28912231)
	HX_STACK_THIS(this)
	HX_STACK_LINE(89)
	::haxor::component::Transform tmp = this->m_parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(89)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_parent,return )

::haxor::component::Transform Transform_obj::set_parent( ::haxor::component::Transform v){
	HX_STACK_FRAME("haxor.component.Transform","set_parent",0x1deb0b46,"haxor.component.Transform.set_parent","haxor/component/Transform.hx",91,0x28912231)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(93)
	::haxor::math::Vector3 tmp = this->get_position();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(93)
	::haxor::math::Vector3 wp = tmp;		HX_STACK_VAR(wp,"wp");
	HX_STACK_LINE(94)
	::haxor::math::Quaternion tmp1 = this->get_rotation();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(94)
	::haxor::math::Quaternion wr = tmp1;		HX_STACK_VAR(wr,"wr");
	HX_STACK_LINE(95)
	::haxor::math::Vector3 tmp2 = this->get_scale();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(95)
	::haxor::math::Vector3 ws = tmp2;		HX_STACK_VAR(ws,"ws");
	HX_STACK_LINE(97)
	::haxor::component::Transform tmp3 = this->m_parent;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(97)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(97)
	if ((tmp4)){
		HX_STACK_LINE(97)
		::haxor::component::Transform tmp5 = this->m_parent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(97)
		tmp5->m_hierarchy->remove(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(98)
	bool tmp5 = (v == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(98)
	::haxor::component::Transform tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(98)
	if ((tmp5)){
		HX_STACK_LINE(98)
		tmp6 = ::haxor::component::Transform_obj::m_root;
	}
	else{
		HX_STACK_LINE(98)
		tmp6 = v;
	}
	HX_STACK_LINE(98)
	this->m_parent = tmp6;
	HX_STACK_LINE(99)
	::haxor::component::Transform tmp7 = this->m_parent;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(99)
	tmp7->m_hierarchy->push(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(105)
	this->Invalidate();
	HX_STACK_LINE(107)
	::haxor::component::Transform tmp8 = this->m_parent;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(107)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_parent,return )

int Transform_obj::get_childCount( ){
	HX_STACK_FRAME("haxor.component.Transform","get_childCount",0xba5f113b,"haxor.component.Transform.get_childCount","haxor/component/Transform.hx",115,0x28912231)
	HX_STACK_THIS(this)
	HX_STACK_LINE(115)
	Array< ::Dynamic > tmp = this->m_hierarchy;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(115)
	int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(115)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_childCount,return )

::haxor::math::Vector3 Transform_obj::get_localPosition( ){
	HX_STACK_FRAME("haxor.component.Transform","get_localPosition",0xf7eb668c,"haxor.component.Transform.get_localPosition","haxor/component/Transform.hx",122,0x28912231)
	HX_STACK_THIS(this)
	HX_STACK_LINE(122)
	::haxor::math::Vector3 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(122)
	{
		HX_STACK_LINE(122)
		::haxor::math::Vector3 tmp1 = this->m_localPosition;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(122)
		::haxor::math::Vector3 _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(122)
		tmp = ::haxor::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
	}
	HX_STACK_LINE(122)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_localPosition,return )

::haxor::math::Vector3 Transform_obj::set_localPosition( ::haxor::math::Vector3 v){
	HX_STACK_FRAME("haxor.component.Transform","set_localPosition",0x1b593e98,"haxor.component.Transform.set_localPosition","haxor/component/Transform.hx",124,0x28912231)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(125)
	Float tmp = v->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(125)
	::haxor::math::Vector3 tmp1 = this->m_localPosition;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(125)
	Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(125)
	Float tmp3 = (tmp - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(125)
	Float dx = tmp3;		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(125)
	Float tmp4 = v->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(125)
	::haxor::math::Vector3 tmp5 = this->m_localPosition;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(125)
	Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(125)
	Float tmp7 = (tmp4 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(125)
	Float dy = tmp7;		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(125)
	Float tmp8 = v->z;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(125)
	::haxor::math::Vector3 tmp9 = this->m_localPosition;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(125)
	Float tmp10 = tmp9->z;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(125)
	Float tmp11 = (tmp8 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(125)
	Float dz = tmp11;		HX_STACK_VAR(dz,"dz");
	HX_STACK_LINE(126)
	Float tmp12 = dx;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(126)
	Float tmp13 = ::Math_obj::abs(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(126)
	bool tmp14 = (tmp13 < ((Float)0.0001));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(126)
	if ((tmp14)){
		HX_STACK_LINE(126)
		Float tmp15 = dy;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(126)
		Float tmp16 = ::Math_obj::abs(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(126)
		bool tmp17 = (tmp16 < ((Float)0.0001));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(126)
		if ((tmp17)){
			HX_STACK_LINE(126)
			Float tmp18 = dz;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(126)
			Float tmp19 = ::Math_obj::abs(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(126)
			bool tmp20 = (tmp19 < ((Float)0.0001));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(126)
			if ((tmp20)){
				HX_STACK_LINE(126)
				::haxor::math::Vector3 tmp21 = v;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(126)
				return tmp21;
			}
		}
	}
	HX_STACK_LINE(127)
	::haxor::math::Vector3 tmp15 = this->m_localPosition;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(127)
	::haxor::math::Vector3 tmp16 = v;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(127)
	tmp15->Set3(tmp16);
	HX_STACK_LINE(127)
	this->m_lmt_dirty = true;
	HX_STACK_LINE(128)
	this->Invalidate();
	HX_STACK_LINE(129)
	::haxor::math::Vector3 tmp17 = v;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(129)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_localPosition,return )

::haxor::math::Quaternion Transform_obj::get_localRotation( ){
	HX_STACK_FRAME("haxor.component.Transform","get_localRotation",0x35770321,"haxor.component.Transform.get_localRotation","haxor/component/Transform.hx",137,0x28912231)
	HX_STACK_THIS(this)
	HX_STACK_LINE(137)
	::haxor::math::Quaternion tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(137)
	{
		HX_STACK_LINE(137)
		::haxor::math::Quaternion tmp1 = this->m_localRotation;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(137)
		::haxor::math::Quaternion _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(137)
		tmp = ::haxor::math::Quaternion_obj::__new(_this->x,_this->y,_this->z,_this->w);
	}
	HX_STACK_LINE(137)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_localRotation,return )

::haxor::math::Quaternion Transform_obj::set_localRotation( ::haxor::math::Quaternion v){
	HX_STACK_FRAME("haxor.component.Transform","set_localRotation",0x58e4db2d,"haxor.component.Transform.set_localRotation","haxor/component/Transform.hx",139,0x28912231)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(140)
	Float tmp = v->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(140)
	::haxor::math::Quaternion tmp1 = this->m_localRotation;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(140)
	Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(140)
	Float tmp3 = (tmp - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(140)
	Float dx = tmp3;		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(140)
	Float tmp4 = v->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(140)
	::haxor::math::Quaternion tmp5 = this->m_localRotation;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(140)
	Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(140)
	Float tmp7 = (tmp4 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(140)
	Float dy = tmp7;		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(140)
	Float tmp8 = v->z;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(140)
	::haxor::math::Quaternion tmp9 = this->m_localRotation;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(140)
	Float tmp10 = tmp9->z;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(140)
	Float tmp11 = (tmp8 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(140)
	Float dz = tmp11;		HX_STACK_VAR(dz,"dz");
	HX_STACK_LINE(140)
	Float tmp12 = v->w;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(140)
	::haxor::math::Quaternion tmp13 = this->m_localRotation;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(140)
	Float tmp14 = tmp13->w;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(140)
	Float tmp15 = (tmp12 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(140)
	Float dw = tmp15;		HX_STACK_VAR(dw,"dw");
	HX_STACK_LINE(141)
	bool tmp16 = (dx < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(141)
	Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(141)
	if ((tmp16)){
		HX_STACK_LINE(141)
		Float tmp18 = dx;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(141)
		tmp17 = -(tmp18);
	}
	else{
		HX_STACK_LINE(141)
		tmp17 = dx;
	}
	HX_STACK_LINE(141)
	bool tmp18 = (tmp17 < ((Float)0.0001));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(141)
	if ((tmp18)){
		HX_STACK_LINE(141)
		bool tmp19 = (dy < (int)0);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(141)
		Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(141)
		if ((tmp19)){
			HX_STACK_LINE(141)
			Float tmp21 = dy;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(141)
			tmp20 = -(tmp21);
		}
		else{
			HX_STACK_LINE(141)
			tmp20 = dy;
		}
		HX_STACK_LINE(141)
		bool tmp21 = (tmp20 < ((Float)0.0001));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(141)
		if ((tmp21)){
			HX_STACK_LINE(141)
			bool tmp22 = (dz < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(141)
			Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(141)
			if ((tmp22)){
				HX_STACK_LINE(141)
				Float tmp24 = dz;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(141)
				tmp23 = -(tmp24);
			}
			else{
				HX_STACK_LINE(141)
				tmp23 = dz;
			}
			HX_STACK_LINE(141)
			bool tmp24 = (tmp23 < ((Float)0.0001));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(141)
			if ((tmp24)){
				HX_STACK_LINE(141)
				bool tmp25 = (dw < (int)0);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(141)
				Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(141)
				if ((tmp25)){
					HX_STACK_LINE(141)
					Float tmp27 = dw;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(141)
					tmp26 = -(tmp27);
				}
				else{
					HX_STACK_LINE(141)
					tmp26 = dw;
				}
				HX_STACK_LINE(141)
				bool tmp27 = (tmp26 < ((Float)0.0001));		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(141)
				if ((tmp27)){
					HX_STACK_LINE(141)
					::haxor::math::Quaternion tmp28 = v;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(141)
					return tmp28;
				}
			}
		}
	}
	HX_STACK_LINE(142)
	::haxor::math::Quaternion tmp19 = this->m_localRotation;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(142)
	::haxor::math::Quaternion tmp20 = v;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(142)
	tmp19->SetQuaternion(tmp20);
	HX_STACK_LINE(142)
	this->m_lmrs_dirty = true;
	HX_STACK_LINE(143)
	this->Invalidate();
	HX_STACK_LINE(144)
	::haxor::math::Quaternion tmp21 = v;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(144)
	return tmp21;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_localRotation,return )

::haxor::math::Vector3 Transform_obj::get_localEuler( ){
	HX_STACK_FRAME("haxor.component.Transform","get_localEuler",0x7e94d7a6,"haxor.component.Transform.get_localEuler","haxor/component/Transform.hx",153,0x28912231)
	HX_STACK_THIS(this)
	HX_STACK_LINE(153)
	::haxor::math::Quaternion tmp = this->m_localRotation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(153)
	::haxor::math::Vector3 tmp1 = tmp->get_euler();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(153)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_localEuler,return )

::haxor::math::Vector3 Transform_obj::set_localEuler( ::haxor::math::Vector3 v){
	HX_STACK_FRAME("haxor.component.Transform","set_localEuler",0x9eb4c01a,"haxor.component.Transform.set_localEuler","haxor/component/Transform.hx",154,0x28912231)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(154)
	::haxor::math::Vector3 tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(154)
	::haxor::math::Quaternion tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(154)
	{
		HX_STACK_LINE(154)
		::haxor::context::DataContext tmp2 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(154)
		::haxor::context::DataContext _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(154)
		Array< ::Dynamic > tmp3 = _this->m_q;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(154)
		int tmp4 = (_this->m_nq + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(154)
		int tmp5 = _this->m_q->length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(154)
		int tmp6 = hx::Mod(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(154)
		int tmp7 = _this->m_nq = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(154)
		tmp1 = tmp3->__get(tmp7).StaticCast< ::haxor::math::Quaternion >();
	}
	HX_STACK_LINE(154)
	::haxor::math::Quaternion tmp2 = ::haxor::math::Quaternion_obj::FromEuler(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(154)
	this->set_localRotation(tmp2);
	HX_STACK_LINE(154)
	::haxor::math::Vector3 tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(154)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_localEuler,return )

::haxor::math::Vector3 Transform_obj::get_localScale( ){
	HX_STACK_FRAME("haxor.component.Transform","get_localScale",0x8242ccc7,"haxor.component.Transform.get_localScale","haxor/component/Transform.hx",162,0x28912231)
	HX_STACK_THIS(this)
	HX_STACK_LINE(162)
	::haxor::math::Vector3 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(162)
	{
		HX_STACK_LINE(162)
		::haxor::math::Vector3 tmp1 = this->m_localScale;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(162)
		::haxor::math::Vector3 _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(162)
		tmp = ::haxor::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
	}
	HX_STACK_LINE(162)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_localScale,return )

::haxor::math::Vector3 Transform_obj::set_localScale( ::haxor::math::Vector3 v){
	HX_STACK_FRAME("haxor.component.Transform","set_localScale",0xa262b53b,"haxor.component.Transform.set_localScale","haxor/component/Transform.hx",164,0x28912231)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(165)
	Float tmp = v->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(165)
	::haxor::math::Vector3 tmp1 = this->m_localScale;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(165)
	Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(165)
	Float tmp3 = (tmp - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(165)
	Float dx = tmp3;		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(165)
	Float tmp4 = v->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(165)
	::haxor::math::Vector3 tmp5 = this->m_localScale;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(165)
	Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(165)
	Float tmp7 = (tmp4 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(165)
	Float dy = tmp7;		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(165)
	Float tmp8 = v->z;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(165)
	::haxor::math::Vector3 tmp9 = this->m_localScale;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(165)
	Float tmp10 = tmp9->z;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(165)
	Float tmp11 = (tmp8 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(165)
	Float dz = tmp11;		HX_STACK_VAR(dz,"dz");
	HX_STACK_LINE(166)
	Float tmp12 = dx;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(166)
	Float tmp13 = ::Math_obj::abs(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(166)
	bool tmp14 = (tmp13 < ((Float)0.0001));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(166)
	if ((tmp14)){
		HX_STACK_LINE(166)
		Float tmp15 = dy;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(166)
		Float tmp16 = ::Math_obj::abs(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(166)
		bool tmp17 = (tmp16 < ((Float)0.0001));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(166)
		if ((tmp17)){
			HX_STACK_LINE(166)
			Float tmp18 = dz;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(166)
			Float tmp19 = ::Math_obj::abs(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(166)
			bool tmp20 = (tmp19 < ((Float)0.0001));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(166)
			if ((tmp20)){
				HX_STACK_LINE(166)
				::haxor::math::Vector3 tmp21 = v;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(166)
				return tmp21;
			}
		}
	}
	HX_STACK_LINE(167)
	::haxor::math::Vector3 tmp15 = this->m_localScale;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(167)
	::haxor::math::Vector3 tmp16 = v;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(167)
	tmp15->Set3(tmp16);
	HX_STACK_LINE(167)
	this->m_lmrs_dirty = true;
	HX_STACK_LINE(168)
	this->Invalidate();
	HX_STACK_LINE(169)
	::haxor::math::Vector3 tmp17 = v;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(169)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_localScale,return )

::haxor::math::Vector3 Transform_obj::get_position( ){
	HX_STACK_FRAME("haxor.component.Transform","get_position",0xa0514251,"haxor.component.Transform.get_position","haxor/component/Transform.hx",177,0x28912231)
	HX_STACK_THIS(this)
	HX_STACK_LINE(177)
	this->UpdateWorldMatrix();
	HX_STACK_LINE(177)
	this->UpdateWSP();
	HX_STACK_LINE(177)
	::haxor::math::Vector3 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(177)
	{
		HX_STACK_LINE(177)
		::haxor::math::Vector3 tmp1 = this->m_position;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(177)
		::haxor::math::Vector3 _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(177)
		tmp = ::haxor::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
	}
	HX_STACK_LINE(177)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_position,return )

::haxor::math::Vector3 Transform_obj::set_position( ::haxor::math::Vector3 v){
	HX_STACK_FRAME("haxor.component.Transform","set_position",0xb54a65c5,"haxor.component.Transform.set_position","haxor/component/Transform.hx",178,0x28912231)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(178)
	::haxor::math::Vector3 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(178)
	{
		HX_STACK_LINE(178)
		::haxor::component::Transform tmp1 = this->m_parent;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(178)
		::haxor::math::Matrix4 tmp2 = tmp1->get_WorldMatrixInverse();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(178)
		::haxor::math::Matrix4 _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(178)
		::haxor::math::Vector3 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(178)
		{
			HX_STACK_LINE(178)
			::haxor::context::DataContext tmp4 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(178)
			::haxor::context::DataContext _this1 = tmp4;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(178)
			Array< ::Dynamic > tmp5 = _this1->m_v3;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(178)
			int tmp6 = (_this1->m_nv3 + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(178)
			int tmp7 = _this1->m_v3->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(178)
			int tmp8 = hx::Mod(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(178)
			int tmp9 = _this1->m_nv3 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(178)
			tmp3 = tmp5->__get(tmp9).StaticCast< ::haxor::math::Vector3 >();
		}
		HX_STACK_LINE(178)
		::haxor::math::Vector3 tmp4 = v;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(178)
		::haxor::math::Vector3 tmp5 = tmp3->Set3(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(178)
		::haxor::math::Vector3 p_point = tmp5;		HX_STACK_VAR(p_point,"p_point");
		HX_STACK_LINE(178)
		Float tmp6 = (_this->m00 * p_point->x);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(178)
		Float tmp7 = (_this->m01 * p_point->y);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(178)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(178)
		Float tmp9 = (_this->m02 * p_point->z);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(178)
		Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(178)
		Float tmp11 = _this->m03;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(178)
		Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(178)
		Float vx = tmp12;		HX_STACK_VAR(vx,"vx");
		HX_STACK_LINE(178)
		Float tmp13 = (_this->m10 * p_point->x);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(178)
		Float tmp14 = (_this->m11 * p_point->y);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(178)
		Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(178)
		Float tmp16 = (_this->m12 * p_point->z);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(178)
		Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(178)
		Float tmp18 = _this->m13;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(178)
		Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(178)
		Float vy = tmp19;		HX_STACK_VAR(vy,"vy");
		HX_STACK_LINE(178)
		Float tmp20 = (_this->m20 * p_point->x);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(178)
		Float tmp21 = (_this->m21 * p_point->y);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(178)
		Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(178)
		Float tmp23 = (_this->m22 * p_point->z);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(178)
		Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(178)
		Float tmp25 = _this->m23;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(178)
		Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(178)
		Float vz = tmp26;		HX_STACK_VAR(vz,"vz");
		HX_STACK_LINE(178)
		p_point->x = vx;
		HX_STACK_LINE(178)
		p_point->y = vy;
		HX_STACK_LINE(178)
		p_point->z = vz;
		HX_STACK_LINE(178)
		tmp = p_point;
	}
	HX_STACK_LINE(178)
	this->set_localPosition(tmp);
	HX_STACK_LINE(178)
	::haxor::math::Vector3 tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(178)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_position,return )

::haxor::math::Quaternion Transform_obj::get_rotation( ){
	HX_STACK_FRAME("haxor.component.Transform","get_rotation",0xdddcdee6,"haxor.component.Transform.get_rotation","haxor/component/Transform.hx",185,0x28912231)
	HX_STACK_THIS(this)
	HX_STACK_LINE(185)
	this->UpdateWorldMatrix();
	HX_STACK_LINE(185)
	this->UpdateWSRS();
	HX_STACK_LINE(185)
	::haxor::math::Quaternion tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(185)
	{
		HX_STACK_LINE(185)
		::haxor::math::Quaternion tmp1 = this->m_rotation;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(185)
		::haxor::math::Quaternion _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(185)
		tmp = ::haxor::math::Quaternion_obj::__new(_this->x,_this->y,_this->z,_this->w);
	}
	HX_STACK_LINE(185)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_rotation,return )

::haxor::math::Quaternion Transform_obj::set_rotation( ::haxor::math::Quaternion v){
	HX_STACK_FRAME("haxor.component.Transform","set_rotation",0xf2d6025a,"haxor.component.Transform.set_rotation","haxor/component/Transform.hx",187,0x28912231)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(188)
	this->UpdateWorldMatrix();
	HX_STACK_LINE(189)
	this->UpdateWSRS();
	HX_STACK_LINE(190)
	::haxor::math::Quaternion tmp = this->m_rotation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(190)
	::haxor::math::Quaternion tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(190)
	{
		HX_STACK_LINE(190)
		::haxor::context::DataContext tmp2 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(190)
		::haxor::context::DataContext _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(190)
		Array< ::Dynamic > tmp3 = _this->m_q;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(190)
		int tmp4 = (_this->m_nq + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(190)
		int tmp5 = _this->m_q->length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(190)
		int tmp6 = hx::Mod(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(190)
		int tmp7 = _this->m_nq = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(190)
		tmp1 = tmp3->__get(tmp7).StaticCast< ::haxor::math::Quaternion >();
	}
	HX_STACK_LINE(190)
	::haxor::math::Quaternion tmp2 = ::haxor::math::Quaternion_obj::Inverse(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(190)
	::haxor::math::Quaternion iq = tmp2;		HX_STACK_VAR(iq,"iq");
	HX_STACK_LINE(191)
	::haxor::math::Quaternion tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(191)
	{
		HX_STACK_LINE(191)
		::haxor::context::DataContext tmp4 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(191)
		::haxor::context::DataContext _this = tmp4;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(191)
		Array< ::Dynamic > tmp5 = _this->m_q;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(191)
		int tmp6 = (_this->m_nq + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(191)
		int tmp7 = _this->m_q->length;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(191)
		int tmp8 = hx::Mod(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(191)
		int tmp9 = _this->m_nq = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(191)
		tmp3 = tmp5->__get(tmp9).StaticCast< ::haxor::math::Quaternion >();
	}
	HX_STACK_LINE(191)
	::haxor::math::Quaternion tmp4 = v;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(191)
	::haxor::math::Quaternion tmp5 = tmp3->SetQuaternion(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(191)
	::haxor::math::Quaternion tmp6 = iq;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(191)
	::haxor::math::Quaternion tmp7 = tmp5->Multiply(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(191)
	this->set_localRotation(tmp7);
	HX_STACK_LINE(192)
	::haxor::math::Quaternion tmp8 = v;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(192)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_rotation,return )

::haxor::math::Vector3 Transform_obj::get_euler( ){
	HX_STACK_FRAME("haxor.component.Transform","get_euler",0x9fce1ec1,"haxor.component.Transform.get_euler","haxor/component/Transform.hx",200,0x28912231)
	HX_STACK_THIS(this)
	HX_STACK_LINE(200)
	::haxor::math::Quaternion tmp = this->get_rotation();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(200)
	::haxor::math::Vector3 tmp1 = tmp->get_euler();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(200)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_euler,return )

::haxor::math::Vector3 Transform_obj::set_euler( ::haxor::math::Vector3 v){
	HX_STACK_FRAME("haxor.component.Transform","set_euler",0x831f0acd,"haxor.component.Transform.set_euler","haxor/component/Transform.hx",201,0x28912231)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(201)
	::haxor::math::Vector3 tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(201)
	::haxor::math::Quaternion tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(201)
	{
		HX_STACK_LINE(201)
		::haxor::context::DataContext tmp2 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(201)
		::haxor::context::DataContext _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(201)
		Array< ::Dynamic > tmp3 = _this->m_q;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(201)
		int tmp4 = (_this->m_nq + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(201)
		int tmp5 = _this->m_q->length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(201)
		int tmp6 = hx::Mod(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(201)
		int tmp7 = _this->m_nq = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(201)
		tmp1 = tmp3->__get(tmp7).StaticCast< ::haxor::math::Quaternion >();
	}
	HX_STACK_LINE(201)
	::haxor::math::Quaternion tmp2 = ::haxor::math::Quaternion_obj::FromEuler(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(201)
	this->set_rotation(tmp2);
	HX_STACK_LINE(201)
	::haxor::math::Vector3 tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(201)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_euler,return )

::haxor::math::Vector3 Transform_obj::get_scale( ){
	HX_STACK_FRAME("haxor.component.Transform","get_scale",0xa37c13e2,"haxor.component.Transform.get_scale","haxor/component/Transform.hx",207,0x28912231)
	HX_STACK_THIS(this)
	HX_STACK_LINE(207)
	this->UpdateWorldMatrix();
	HX_STACK_LINE(207)
	this->UpdateWSRS();
	HX_STACK_LINE(207)
	::haxor::math::Vector3 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(207)
	{
		HX_STACK_LINE(207)
		::haxor::math::Vector3 tmp1 = this->m_scale;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(207)
		::haxor::math::Vector3 _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(207)
		tmp = ::haxor::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
	}
	HX_STACK_LINE(207)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_scale,return )

::haxor::math::Matrix4 Transform_obj::get_WorldMatrix( ){
	HX_STACK_FRAME("haxor.component.Transform","get_WorldMatrix",0xea38396b,"haxor.component.Transform.get_WorldMatrix","haxor/component/Transform.hx",214,0x28912231)
	HX_STACK_THIS(this)
	HX_STACK_LINE(214)
	this->UpdateWorldMatrix();
	HX_STACK_LINE(214)
	::haxor::math::Matrix4 tmp = this->m_worldMatrix;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(214)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_WorldMatrix,return )

::haxor::math::Matrix4 Transform_obj::get_WorldMatrixInverse( ){
	HX_STACK_FRAME("haxor.component.Transform","get_WorldMatrixInverse",0x7b890d85,"haxor.component.Transform.get_WorldMatrixInverse","haxor/component/Transform.hx",221,0x28912231)
	HX_STACK_THIS(this)
	HX_STACK_LINE(221)
	this->UpdateWorldMatrix();
	HX_STACK_LINE(221)
	bool tmp = this->m_inverse_dirty;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(221)
	if ((tmp)){
		HX_STACK_LINE(221)
		::haxor::math::Matrix4 tmp1 = this->m_worldMatrix;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(221)
		::haxor::math::Matrix4 tmp2 = this->m_worldMatrixInverse;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(221)
		::haxor::math::Matrix4_obj::GetInverseTransform(tmp1,tmp2);
		HX_STACK_LINE(221)
		this->m_inverse_dirty = false;
	}
	HX_STACK_LINE(221)
	::haxor::math::Matrix4 tmp1 = this->m_worldMatrixInverse;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(221)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_WorldMatrixInverse,return )

Void Transform_obj::OnBuild( ){
{
		HX_STACK_FRAME("haxor.component.Transform","OnBuild",0xfa819830,"haxor.component.Transform.OnBuild","haxor/component/Transform.hx",279,0x28912231)
		HX_STACK_THIS(this)
		HX_STACK_LINE(280)
		this->super::OnBuild();
		HX_STACK_LINE(282)
		int tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(282)
		{
			HX_STACK_LINE(282)
			::haxor::context::TransformContext tmp1 = ::haxor::context::EngineContext_obj::transform;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(282)
			::haxor::context::UID _this = tmp1->tid;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(282)
			int tmp2 = _this->m_cache->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(282)
			bool tmp3 = (tmp2 <= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(282)
			if ((tmp3)){
				HX_STACK_LINE(282)
				tmp = (_this->m_id)++;
			}
			else{
				HX_STACK_LINE(282)
				tmp = _this->m_cache->shift();
			}
		}
		HX_STACK_LINE(282)
		this->__cid = tmp;
		HX_STACK_LINE(283)
		::haxor::math::Vector3 tmp1 = ::haxor::math::Vector3_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(283)
		this->m_localPosition = tmp1;
		HX_STACK_LINE(284)
		::haxor::math::Quaternion tmp2 = ::haxor::math::Quaternion_obj::__new((int)0,(int)0,(int)0,((Float)1.0));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(284)
		this->m_localRotation = tmp2;
		HX_STACK_LINE(285)
		::haxor::math::Vector3 tmp3 = ::haxor::math::Vector3_obj::__new((int)1,(int)1,(int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(285)
		this->m_localScale = tmp3;
		HX_STACK_LINE(287)
		::haxor::math::Vector3 tmp4 = ::haxor::math::Vector3_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(287)
		this->m_position = tmp4;
		HX_STACK_LINE(288)
		::haxor::math::Quaternion tmp5 = ::haxor::math::Quaternion_obj::__new((int)0,(int)0,(int)0,((Float)1.0));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(288)
		this->m_rotation = tmp5;
		HX_STACK_LINE(289)
		::haxor::math::Vector3 tmp6 = ::haxor::math::Vector3_obj::__new((int)1,(int)1,(int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(289)
		this->m_scale = tmp6;
		HX_STACK_LINE(291)
		this->m_lmt_dirty = false;
		HX_STACK_LINE(292)
		this->m_lmrs_dirty = false;
		HX_STACK_LINE(293)
		this->m_dirty = false;
		HX_STACK_LINE(294)
		this->m_inverse_dirty = false;
		HX_STACK_LINE(295)
		this->m_wsp_dirty = false;
		HX_STACK_LINE(296)
		this->m_wsrs_dirty = false;
		HX_STACK_LINE(298)
		this->m_locked = false;
		HX_STACK_LINE(300)
		this->m_uniform_dirty = true;
		HX_STACK_LINE(302)
		::haxor::math::Vector3 tmp7 = ::haxor::math::Vector3_obj::__new((int)1,(int)0,(int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(302)
		this->m_right = tmp7;
		HX_STACK_LINE(303)
		::haxor::math::Vector3 tmp8 = ::haxor::math::Vector3_obj::__new((int)0,(int)1,(int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(303)
		this->m_up = tmp8;
		HX_STACK_LINE(304)
		::haxor::math::Vector3 tmp9 = ::haxor::math::Vector3_obj::get_forward();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(304)
		this->m_forward = tmp9;
		HX_STACK_LINE(305)
		::haxor::math::Matrix4 tmp10 = ::haxor::math::Matrix4_obj::__new((int)1,(int)0,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(305)
		this->m_localMatrix = tmp10;
		HX_STACK_LINE(306)
		::haxor::math::Matrix4 tmp11 = ::haxor::math::Matrix4_obj::__new((int)1,(int)0,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(306)
		this->m_worldMatrixInverse = tmp11;
		HX_STACK_LINE(307)
		::haxor::math::Matrix4 tmp12 = ::haxor::math::Matrix4_obj::__new((int)1,(int)0,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(307)
		this->m_worldMatrix = tmp12;
		HX_STACK_LINE(308)
		Array< ::Dynamic > tmp13 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(308)
		this->m_hierarchy = tmp13;
		HX_STACK_LINE(309)
		::haxor::component::Transform tmp14 = ::haxor::component::Transform_obj::m_root;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(309)
		bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(309)
		if ((tmp15)){
			HX_STACK_LINE(309)
			this->set_parent(null());
		}
		else{
			HX_STACK_LINE(309)
			::haxor::component::Transform_obj::m_root = hx::ObjectPtr<OBJ_>(this);
		}
	}
return null();
}


Void Transform_obj::UpdateLMT( ){
{
		HX_STACK_FRAME("haxor.component.Transform","UpdateLMT",0x0bb5dd2b,"haxor.component.Transform.UpdateLMT","haxor/component/Transform.hx",316,0x28912231)
		HX_STACK_THIS(this)
		HX_STACK_LINE(317)
		::haxor::math::Vector3 tmp = this->m_localPosition;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(317)
		::haxor::math::Matrix4 tmp1 = this->m_localMatrix;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(317)
		tmp1->m03 = tmp->x;
		HX_STACK_LINE(318)
		::haxor::math::Vector3 tmp2 = this->m_localPosition;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(318)
		::haxor::math::Matrix4 tmp3 = this->m_localMatrix;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(318)
		tmp3->m13 = tmp2->y;
		HX_STACK_LINE(319)
		::haxor::math::Vector3 tmp4 = this->m_localPosition;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(319)
		::haxor::math::Matrix4 tmp5 = this->m_localMatrix;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(319)
		tmp5->m23 = tmp4->z;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,UpdateLMT,(void))

Void Transform_obj::UpdateWSP( ){
{
		HX_STACK_FRAME("haxor.component.Transform","UpdateWSP",0x0bbe3b2c,"haxor.component.Transform.UpdateWSP","haxor/component/Transform.hx",326,0x28912231)
		HX_STACK_THIS(this)
		HX_STACK_LINE(327)
		bool tmp = this->m_wsp_dirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(327)
		if ((tmp)){
			HX_STACK_LINE(329)
			::haxor::math::Matrix4 tmp1 = this->m_worldMatrix;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(329)
			::haxor::math::Vector3 tmp2 = this->m_position;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(329)
			tmp2->x = tmp1->m03;
			HX_STACK_LINE(330)
			::haxor::math::Matrix4 tmp3 = this->m_worldMatrix;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(330)
			::haxor::math::Vector3 tmp4 = this->m_position;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(330)
			tmp4->y = tmp3->m13;
			HX_STACK_LINE(331)
			::haxor::math::Matrix4 tmp5 = this->m_worldMatrix;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(331)
			::haxor::math::Vector3 tmp6 = this->m_position;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(331)
			tmp6->z = tmp5->m23;
			HX_STACK_LINE(332)
			this->m_wsp_dirty = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,UpdateWSP,(void))

Void Transform_obj::UpdateLMRS( ){
{
		HX_STACK_FRAME("haxor.component.Transform","UpdateLMRS",0x336ba70a,"haxor.component.Transform.UpdateLMRS","haxor/component/Transform.hx",340,0x28912231)
		HX_STACK_THIS(this)
		HX_STACK_LINE(341)
		::haxor::math::Vector3 tmp = this->m_localScale;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(341)
		Float sx = tmp->x;		HX_STACK_VAR(sx,"sx");
		HX_STACK_LINE(342)
		::haxor::math::Vector3 tmp1 = this->m_localScale;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(342)
		Float sy = tmp1->y;		HX_STACK_VAR(sy,"sy");
		HX_STACK_LINE(343)
		::haxor::math::Vector3 tmp2 = this->m_localScale;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(343)
		Float sz = tmp2->z;		HX_STACK_VAR(sz,"sz");
		HX_STACK_LINE(344)
		::haxor::math::Quaternion tmp3 = this->m_localRotation;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(344)
		::haxor::math::Matrix4 tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(344)
		{
			HX_STACK_LINE(344)
			::haxor::context::DataContext tmp5 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(344)
			::haxor::context::DataContext _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(344)
			Array< ::Dynamic > tmp6 = _this->m_m4;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(344)
			int tmp7 = (_this->m_nm4 + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(344)
			int tmp8 = _this->m_m4->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(344)
			int tmp9 = hx::Mod(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(344)
			int tmp10 = _this->m_nq = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(344)
			tmp4 = tmp6->__get(tmp10).StaticCast< ::haxor::math::Matrix4 >();
		}
		HX_STACK_LINE(344)
		::haxor::math::Matrix4 tmp5 = ::haxor::math::Matrix4_obj::FromQuaternion(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(344)
		::haxor::math::Matrix4 r = tmp5;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(345)
		::haxor::math::Matrix4 tmp6 = this->m_localMatrix;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(345)
		::haxor::math::Matrix4 l = tmp6;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(346)
		Float tmp7 = (r->m00 * sx);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(346)
		l->m00 = tmp7;
		HX_STACK_LINE(346)
		Float tmp8 = (r->m01 * sy);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(346)
		l->m01 = tmp8;
		HX_STACK_LINE(346)
		Float tmp9 = (r->m02 * sz);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(346)
		l->m02 = tmp9;
		HX_STACK_LINE(347)
		Float tmp10 = (r->m10 * sx);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(347)
		l->m10 = tmp10;
		HX_STACK_LINE(347)
		Float tmp11 = (r->m11 * sy);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(347)
		l->m11 = tmp11;
		HX_STACK_LINE(347)
		Float tmp12 = (r->m12 * sz);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(347)
		l->m12 = tmp12;
		HX_STACK_LINE(348)
		Float tmp13 = (r->m20 * sx);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(348)
		l->m20 = tmp13;
		HX_STACK_LINE(348)
		Float tmp14 = (r->m21 * sy);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(348)
		l->m21 = tmp14;
		HX_STACK_LINE(348)
		Float tmp15 = (r->m22 * sz);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(348)
		l->m22 = tmp15;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,UpdateLMRS,(void))

Void Transform_obj::UpdateWSRS( ){
{
		HX_STACK_FRAME("haxor.component.Transform","UpdateWSRS",0x3ab58d65,"haxor.component.Transform.UpdateWSRS","haxor/component/Transform.hx",355,0x28912231)
		HX_STACK_THIS(this)
		HX_STACK_LINE(356)
		bool tmp = this->m_wsrs_dirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(356)
		if ((tmp)){
			HX_STACK_LINE(358)
			::haxor::math::Matrix4 tmp1 = this->m_worldMatrix;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(358)
			::haxor::math::Matrix4 m = tmp1;		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(360)
			::haxor::math::Vector3 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(360)
			{
				HX_STACK_LINE(360)
				::haxor::context::DataContext tmp3 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(360)
				::haxor::context::DataContext _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(360)
				Array< ::Dynamic > tmp4 = _this->m_v3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(360)
				int tmp5 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(360)
				int tmp6 = _this->m_v3->length;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(360)
				int tmp7 = hx::Mod(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(360)
				int tmp8 = _this->m_nv3 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(360)
				tmp2 = tmp4->__get(tmp8).StaticCast< ::haxor::math::Vector3 >();
			}
			HX_STACK_LINE(360)
			Float tmp3 = m->m00;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(360)
			Float tmp4 = m->m10;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(360)
			Float tmp5 = m->m20;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(360)
			::haxor::math::Vector3 tmp6 = tmp2->Set(tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(360)
			::haxor::math::Vector3 c0 = tmp6;		HX_STACK_VAR(c0,"c0");
			HX_STACK_LINE(361)
			::haxor::math::Vector3 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(361)
			{
				HX_STACK_LINE(361)
				::haxor::context::DataContext tmp8 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(361)
				::haxor::context::DataContext _this = tmp8;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(361)
				Array< ::Dynamic > tmp9 = _this->m_v3;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(361)
				int tmp10 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(361)
				int tmp11 = _this->m_v3->length;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(361)
				int tmp12 = hx::Mod(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(361)
				int tmp13 = _this->m_nv3 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(361)
				tmp7 = tmp9->__get(tmp13).StaticCast< ::haxor::math::Vector3 >();
			}
			HX_STACK_LINE(361)
			Float tmp8 = m->m01;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(361)
			Float tmp9 = m->m11;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(361)
			Float tmp10 = m->m21;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(361)
			::haxor::math::Vector3 tmp11 = tmp7->Set(tmp8,tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(361)
			::haxor::math::Vector3 c1 = tmp11;		HX_STACK_VAR(c1,"c1");
			HX_STACK_LINE(362)
			::haxor::math::Vector3 tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(362)
			{
				HX_STACK_LINE(362)
				::haxor::context::DataContext tmp13 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(362)
				::haxor::context::DataContext _this = tmp13;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(362)
				Array< ::Dynamic > tmp14 = _this->m_v3;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(362)
				int tmp15 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(362)
				int tmp16 = _this->m_v3->length;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(362)
				int tmp17 = hx::Mod(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(362)
				int tmp18 = _this->m_nv3 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(362)
				tmp12 = tmp14->__get(tmp18).StaticCast< ::haxor::math::Vector3 >();
			}
			HX_STACK_LINE(362)
			Float tmp13 = m->m02;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(362)
			Float tmp14 = m->m12;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(362)
			Float tmp15 = m->m22;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(362)
			::haxor::math::Vector3 tmp16 = tmp12->Set(tmp13,tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(362)
			::haxor::math::Vector3 c2 = tmp16;		HX_STACK_VAR(c2,"c2");
			HX_STACK_LINE(364)
			Float tmp17 = (c0->x * c0->x);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(364)
			Float tmp18 = (c0->y * c0->y);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(364)
			Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(364)
			Float tmp20 = (c0->z * c0->z);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(364)
			Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(364)
			Float tmp22 = ::Math_obj::sqrt(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(364)
			Float l0 = tmp22;		HX_STACK_VAR(l0,"l0");
			HX_STACK_LINE(364)
			Float tmp23 = (c1->x * c1->x);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(364)
			Float tmp24 = (c1->y * c1->y);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(364)
			Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(364)
			Float tmp26 = (c1->z * c1->z);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(364)
			Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(364)
			Float tmp28 = ::Math_obj::sqrt(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(364)
			Float l1 = tmp28;		HX_STACK_VAR(l1,"l1");
			HX_STACK_LINE(364)
			Float tmp29 = (c2->x * c2->x);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(364)
			Float tmp30 = (c2->y * c2->y);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(364)
			Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(364)
			Float tmp32 = (c2->z * c2->z);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(364)
			Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(364)
			Float tmp34 = ::Math_obj::sqrt(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(364)
			Float l2 = tmp34;		HX_STACK_VAR(l2,"l2");
			HX_STACK_LINE(366)
			::haxor::math::Vector3 tmp35 = this->m_scale;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(366)
			tmp35->x = l0;
			HX_STACK_LINE(366)
			::haxor::math::Vector3 tmp36 = this->m_scale;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(366)
			tmp36->y = l1;
			HX_STACK_LINE(366)
			::haxor::math::Vector3 tmp37 = this->m_scale;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(366)
			tmp37->z = l2;
			HX_STACK_LINE(368)
			bool tmp38 = (l0 <= ((Float)0.0));		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(368)
			Float tmp39;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(368)
			if ((tmp38)){
				HX_STACK_LINE(368)
				tmp39 = ((Float)0.0);
			}
			else{
				HX_STACK_LINE(368)
				tmp39 = (Float(((Float)1.0)) / Float(l0));
			}
			HX_STACK_LINE(368)
			l0 = tmp39;
			HX_STACK_LINE(368)
			bool tmp40 = (l1 <= ((Float)0.0));		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(368)
			Float tmp41;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(368)
			if ((tmp40)){
				HX_STACK_LINE(368)
				tmp41 = ((Float)0.0);
			}
			else{
				HX_STACK_LINE(368)
				tmp41 = (Float(((Float)1.0)) / Float(l1));
			}
			HX_STACK_LINE(368)
			l1 = tmp41;
			HX_STACK_LINE(368)
			bool tmp42 = (l2 <= ((Float)0.0));		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(368)
			Float tmp43;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(368)
			if ((tmp42)){
				HX_STACK_LINE(368)
				tmp43 = ((Float)0.0);
			}
			else{
				HX_STACK_LINE(368)
				tmp43 = (Float(((Float)1.0)) / Float(l2));
			}
			HX_STACK_LINE(368)
			l2 = tmp43;
			HX_STACK_LINE(370)
			Float tmp44 = l0;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(370)
			c0->Scale(tmp44);
			HX_STACK_LINE(370)
			Float tmp45 = l1;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(370)
			c1->Scale(tmp45);
			HX_STACK_LINE(370)
			Float tmp46 = l2;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(370)
			c2->Scale(tmp46);
			HX_STACK_LINE(372)
			::haxor::math::Matrix4 tmp47;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(372)
			{
				HX_STACK_LINE(372)
				::haxor::context::DataContext tmp48 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(372)
				::haxor::context::DataContext _this = tmp48;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(372)
				Array< ::Dynamic > tmp49 = _this->m_m4;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(372)
				int tmp50 = (_this->m_nm4 + (int)1);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(372)
				int tmp51 = _this->m_m4->length;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(372)
				int tmp52 = hx::Mod(tmp50,tmp51);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(372)
				int tmp53 = _this->m_nq = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(372)
				tmp47 = tmp49->__get(tmp53).StaticCast< ::haxor::math::Matrix4 >();
			}
			HX_STACK_LINE(373)
			Float tmp48 = c0->x;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(373)
			Float tmp49 = c1->x;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(373)
			Float tmp50 = c2->x;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(374)
			Float tmp51 = c0->y;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(374)
			Float tmp52 = c1->y;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(374)
			Float tmp53 = c2->y;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(375)
			Float tmp54 = c0->z;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(375)
			Float tmp55 = c1->z;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(375)
			Float tmp56 = c2->z;		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(372)
			::haxor::math::Matrix4 tmp57 = tmp47->Set(tmp48,tmp49,tmp50,((Float)0.0),tmp51,tmp52,tmp53,((Float)0.0),tmp54,tmp55,tmp56,((Float)0.0),((Float)0.0),((Float)0.0),((Float)0.0),((Float)1.0));		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(372)
			::haxor::math::Matrix4 r = tmp57;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(378)
			::haxor::math::Matrix4 tmp58 = r;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(378)
			::haxor::math::Quaternion tmp59 = this->m_rotation;		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(378)
			::haxor::math::Quaternion_obj::FromMatrix4(tmp58,tmp59);
			HX_STACK_LINE(380)
			this->m_wsrs_dirty = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,UpdateWSRS,(void))

Void Transform_obj::UpdateWorldMatrix( ){
{
		HX_STACK_FRAME("haxor.component.Transform","UpdateWorldMatrix",0x3aab888b,"haxor.component.Transform.UpdateWorldMatrix","haxor/component/Transform.hx",388,0x28912231)
		HX_STACK_THIS(this)
		HX_STACK_LINE(389)
		bool tmp = this->m_dirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(389)
		bool need_concat = tmp;		HX_STACK_VAR(need_concat,"need_concat");
		HX_STACK_LINE(391)
		bool tmp1 = this->m_lmt_dirty;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(391)
		if ((tmp1)){
			HX_STACK_LINE(391)
			this->UpdateLMT();
			HX_STACK_LINE(391)
			this->m_lmt_dirty = false;
			HX_STACK_LINE(391)
			need_concat = true;
		}
		HX_STACK_LINE(392)
		bool tmp2 = this->m_lmrs_dirty;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(392)
		if ((tmp2)){
			HX_STACK_LINE(392)
			this->UpdateLMRS();
			HX_STACK_LINE(392)
			this->m_lmrs_dirty = false;
			HX_STACK_LINE(392)
			need_concat = true;
		}
		HX_STACK_LINE(394)
		::haxor::component::Transform tmp3 = this->m_parent;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(394)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(394)
		if ((tmp4)){
			HX_STACK_LINE(396)
			bool tmp5 = this->m_dirty;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(396)
			if ((tmp5)){
				HX_STACK_LINE(396)
				::haxor::component::Transform tmp6 = this->m_parent;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(396)
				tmp6->UpdateWorldMatrix();
			}
			HX_STACK_LINE(397)
			this->m_dirty = false;
			HX_STACK_LINE(398)
			bool tmp6 = need_concat;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(398)
			if ((tmp6)){
				HX_STACK_LINE(398)
				::haxor::component::Transform_obj::TransformConcat(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,UpdateWorldMatrix,(void))

Void Transform_obj::Invalidate( ){
{
		HX_STACK_FRAME("haxor.component.Transform","Invalidate",0xba43157a,"haxor.component.Transform.Invalidate","haxor/component/Transform.hx",406,0x28912231)
		HX_STACK_THIS(this)
		HX_STACK_LINE(407)
		bool tmp = this->m_locked;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(407)
		if ((tmp)){
			HX_STACK_LINE(407)
			return null();
		}
		HX_STACK_LINE(408)
		bool tmp1 = this->m_dirty;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(408)
		if ((tmp1)){
			HX_STACK_LINE(408)
			return null();
		}
		HX_STACK_LINE(410)
		this->m_uniform_dirty = true;
		HX_STACK_LINE(411)
		this->m_dirty = true;
		HX_STACK_LINE(414)
		::haxor::context::TransformContext tmp2 = ::haxor::context::EngineContext_obj::transform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(414)
		tmp2->OnChange(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(417)
		{
			HX_STACK_LINE(417)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(417)
			Array< ::Dynamic > tmp3 = this->m_hierarchy;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(417)
			int _g = tmp3->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(417)
			while((true)){
				HX_STACK_LINE(417)
				bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(417)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(417)
				if ((tmp5)){
					HX_STACK_LINE(417)
					break;
				}
				HX_STACK_LINE(417)
				int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(417)
				int i = tmp6;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(417)
				Array< ::Dynamic > tmp7 = this->m_hierarchy;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(417)
				int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(417)
				::haxor::component::Transform tmp9 = tmp7->__get(tmp8).StaticCast< ::haxor::component::Transform >();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(417)
				tmp9->Invalidate();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,Invalidate,(void))

Void Transform_obj::LookAt( ::haxor::math::Vector3 p_at,::haxor::math::Vector3 p_up,hx::Null< Float >  __o_p_smooth){
Float p_smooth = __o_p_smooth.Default(((Float)0.0));
	HX_STACK_FRAME("haxor.component.Transform","LookAt",0xbc02c5b1,"haxor.component.Transform.LookAt","haxor/component/Transform.hx",426,0x28912231)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_at,"p_at")
	HX_STACK_ARG(p_up,"p_up")
	HX_STACK_ARG(p_smooth,"p_smooth")
{
		HX_STACK_LINE(427)
		::haxor::core::Entity tmp = this->m_entity;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(427)
		::haxor::math::Vector3 tmp1 = tmp->m_transform->get_position();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(427)
		::haxor::math::Vector3 p = tmp1;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(428)
		::haxor::math::Quaternion tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(428)
		{
			HX_STACK_LINE(428)
			::haxor::context::DataContext tmp3 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(428)
			::haxor::context::DataContext _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(428)
			Array< ::Dynamic > tmp4 = _this->m_q;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(428)
			int tmp5 = (_this->m_nq + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(428)
			int tmp6 = _this->m_q->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(428)
			int tmp7 = hx::Mod(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(428)
			int tmp8 = _this->m_nq = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(428)
			tmp2 = tmp4->__get(tmp8).StaticCast< ::haxor::math::Quaternion >();
		}
		HX_STACK_LINE(428)
		::haxor::math::Quaternion r = tmp2;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(429)
		::haxor::math::Quaternion tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(429)
		{
			HX_STACK_LINE(429)
			::haxor::math::Quaternion tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(429)
			{
				HX_STACK_LINE(429)
				::haxor::context::DataContext tmp5 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(429)
				::haxor::context::DataContext _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(429)
				Array< ::Dynamic > tmp6 = _this->m_q;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(429)
				int tmp7 = (_this->m_nq + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(429)
				int tmp8 = _this->m_q->length;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(429)
				int tmp9 = hx::Mod(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(429)
				int tmp10 = _this->m_nq = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(429)
				tmp4 = tmp6->__get(tmp10).StaticCast< ::haxor::math::Quaternion >();
			}
			HX_STACK_LINE(429)
			::haxor::math::Quaternion p_result = tmp4;		HX_STACK_VAR(p_result,"p_result");
			HX_STACK_LINE(429)
			::haxor::math::Vector3 tmp5 = p;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(429)
			::haxor::math::Vector3 tmp6 = p_at;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(429)
			::haxor::math::Vector3 tmp7 = p_up;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(429)
			::haxor::math::Matrix4 tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(429)
			{
				HX_STACK_LINE(429)
				::haxor::context::DataContext tmp9 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(429)
				::haxor::context::DataContext _this = tmp9;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(429)
				Array< ::Dynamic > tmp10 = _this->m_m4;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(429)
				int tmp11 = (_this->m_nm4 + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(429)
				int tmp12 = _this->m_m4->length;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(429)
				int tmp13 = hx::Mod(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(429)
				int tmp14 = _this->m_nq = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(429)
				tmp8 = tmp10->__get(tmp14).StaticCast< ::haxor::math::Matrix4 >();
			}
			HX_STACK_LINE(429)
			::haxor::math::Matrix4 tmp9 = ::haxor::math::Matrix4_obj::LookAt(tmp5,tmp6,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(429)
			::haxor::math::Quaternion tmp10 = p_result;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(429)
			tmp3 = ::haxor::math::Quaternion_obj::FromMatrix4(tmp9,tmp10);
		}
		HX_STACK_LINE(429)
		::haxor::math::Quaternion q = tmp3;		HX_STACK_VAR(q,"q");
		HX_STACK_LINE(430)
		bool tmp4 = (p_smooth > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(430)
		if ((tmp4)){
			HX_STACK_LINE(432)
			::haxor::math::Quaternion tmp5 = r;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(432)
			::haxor::math::Quaternion tmp6 = q;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(432)
			Float tmp7 = p_smooth;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(432)
			Float tmp8 = ::haxor::core::Time_obj::m_delta;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(432)
			Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(432)
			::haxor::math::Quaternion tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(432)
			{
				HX_STACK_LINE(432)
				::haxor::context::DataContext tmp11 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(432)
				::haxor::context::DataContext _this = tmp11;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(432)
				Array< ::Dynamic > tmp12 = _this->m_q;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(432)
				int tmp13 = (_this->m_nq + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(432)
				int tmp14 = _this->m_q->length;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(432)
				int tmp15 = hx::Mod(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(432)
				int tmp16 = _this->m_nq = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(432)
				tmp10 = tmp12->__get(tmp16).StaticCast< ::haxor::math::Quaternion >();
			}
			HX_STACK_LINE(432)
			::haxor::math::Quaternion tmp11 = ::haxor::math::Quaternion_obj::Lerp(tmp5,tmp6,tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(432)
			r = tmp11;
		}
		else{
			HX_STACK_LINE(436)
			r = q;
		}
		HX_STACK_LINE(438)
		::haxor::core::Entity tmp5 = this->m_entity;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(438)
		::haxor::math::Quaternion tmp6 = r;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(438)
		tmp5->m_transform->set_rotation(tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Transform_obj,LookAt,(void))

::haxor::component::Transform Transform_obj::GetChild( int p_index){
	HX_STACK_FRAME("haxor.component.Transform","GetChild",0x2a326765,"haxor.component.Transform.GetChild","haxor/component/Transform.hx",445,0x28912231)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_index,"p_index")
	HX_STACK_LINE(445)
	Array< ::Dynamic > tmp = this->m_hierarchy;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(445)
	int tmp1 = p_index;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(445)
	::haxor::component::Transform tmp2 = tmp->__get(tmp1).StaticCast< ::haxor::component::Transform >();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(445)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,GetChild,return )

::haxor::component::Transform Transform_obj::GetChildByName( ::String p_name){
	HX_STACK_FRAME("haxor.component.Transform","GetChildByName",0xa9542107,"haxor.component.Transform.GetChildByName","haxor/component/Transform.hx",452,0x28912231)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_name,"p_name")
	HX_STACK_LINE(453)
	{
		HX_STACK_LINE(453)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(453)
		Array< ::Dynamic > tmp = this->m_hierarchy;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(453)
		int _g = tmp->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(453)
		while((true)){
			HX_STACK_LINE(453)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(453)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(453)
			if ((tmp2)){
				HX_STACK_LINE(453)
				break;
			}
			HX_STACK_LINE(453)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(453)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(453)
			Array< ::Dynamic > tmp4 = this->m_hierarchy;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(453)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(453)
			::haxor::component::Transform tmp6 = tmp4->__get(tmp5).StaticCast< ::haxor::component::Transform >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(453)
			::String tmp7 = tmp6->get_name();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(453)
			::String tmp8 = p_name;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(453)
			bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(453)
			if ((tmp9)){
				HX_STACK_LINE(453)
				Array< ::Dynamic > tmp10 = this->m_hierarchy;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(453)
				int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(453)
				::haxor::component::Transform tmp12 = tmp10->__get(tmp11).StaticCast< ::haxor::component::Transform >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(453)
				return tmp12;
			}
		}
	}
	HX_STACK_LINE(454)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,GetChildByName,return )

Void Transform_obj::Lock( ){
{
		HX_STACK_FRAME("haxor.component.Transform","Lock",0x98377eaa,"haxor.component.Transform.Lock","haxor/component/Transform.hx",461,0x28912231)
		HX_STACK_THIS(this)
		HX_STACK_LINE(462)
		this->m_locked = true;
		HX_STACK_LINE(463)
		{
			HX_STACK_LINE(463)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(463)
			Array< ::Dynamic > tmp = this->m_hierarchy;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(463)
			int _g = tmp->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(463)
			while((true)){
				HX_STACK_LINE(463)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(463)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(463)
				if ((tmp2)){
					HX_STACK_LINE(463)
					break;
				}
				HX_STACK_LINE(463)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(463)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(463)
				Array< ::Dynamic > tmp4 = this->m_hierarchy;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(463)
				int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(463)
				::haxor::component::Transform tmp6 = tmp4->__get(tmp5).StaticCast< ::haxor::component::Transform >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(463)
				tmp6->Lock();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,Lock,(void))

Void Transform_obj::Unlock( hx::Null< bool >  __o_p_invalidate){
bool p_invalidate = __o_p_invalidate.Default(true);
	HX_STACK_FRAME("haxor.component.Transform","Unlock",0xbfd9f343,"haxor.component.Transform.Unlock","haxor/component/Transform.hx",471,0x28912231)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_invalidate,"p_invalidate")
{
		HX_STACK_LINE(472)
		this->m_locked = false;
		HX_STACK_LINE(473)
		{
			HX_STACK_LINE(473)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(473)
			Array< ::Dynamic > tmp = this->m_hierarchy;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(473)
			int _g = tmp->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(473)
			while((true)){
				HX_STACK_LINE(473)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(473)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(473)
				if ((tmp2)){
					HX_STACK_LINE(473)
					break;
				}
				HX_STACK_LINE(473)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(473)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(473)
				Array< ::Dynamic > tmp4 = this->m_hierarchy;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(473)
				int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(473)
				::haxor::component::Transform tmp6 = tmp4->__get(tmp5).StaticCast< ::haxor::component::Transform >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(473)
				bool tmp7 = p_invalidate;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(473)
				tmp6->Unlock(tmp7);
			}
		}
		HX_STACK_LINE(474)
		bool tmp = p_invalidate;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(474)
		if ((tmp)){
			HX_STACK_LINE(474)
			this->Invalidate();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,Unlock,(void))

::haxor::component::Transform Transform_obj::Navigate( ::String p_path){
	HX_STACK_FRAME("haxor.component.Transform","Navigate",0xc17f2d70,"haxor.component.Transform.Navigate","haxor/component/Transform.hx",483,0x28912231)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_path,"p_path")
	HX_STACK_LINE(484)
	Array< ::String > tmp = p_path.split(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(484)
	Array< ::String > tk = tmp;		HX_STACK_VAR(tk,"tk");
	HX_STACK_LINE(485)
	::haxor::component::Transform t = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(486)
	while((true)){
		HX_STACK_LINE(486)
		bool tmp1 = (tk->length > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(486)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(486)
		if ((tmp2)){
			HX_STACK_LINE(486)
			break;
		}
		HX_STACK_LINE(488)
		::String tmp3 = tk->shift();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(488)
		::String p = tmp3;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(489)
		::String tmp4 = p;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(489)
		::haxor::component::Transform tmp5 = t->GetChildByName(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(489)
		t = tmp5;
		HX_STACK_LINE(490)
		bool tmp6 = (t == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(490)
		if ((tmp6)){
			HX_STACK_LINE(490)
			return null();
		}
	}
	HX_STACK_LINE(492)
	::haxor::component::Transform tmp1 = t;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(492)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,Navigate,return )

::haxor::component::Transform Transform_obj::Search( ::String p_name,hx::Null< bool >  __o_p_exact){
bool p_exact = __o_p_exact.Default(true);
	HX_STACK_FRAME("haxor.component.Transform","Search",0xbd44efe7,"haxor.component.Transform.Search","haxor/component/Transform.hx",502,0x28912231)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_name,"p_name")
	HX_STACK_ARG(p_exact,"p_exact")
{
		HX_STACK_LINE(501)
		::haxor::component::Transform _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(503)
		Array< ::Dynamic > res = Array_obj< ::Dynamic >::__new().Add(null());		HX_STACK_VAR(res,"res");

		HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_1_1,bool,p_exact,::haxor::component::Transform,_g,Array< ::Dynamic >,res,::String,p_name)
		int __ArgCount() const { return 2; }
		bool run(::haxor::component::Transform it,int d){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxor/component/Transform.hx",505,0x28912231)
			HX_STACK_ARG(it,"it")
			HX_STACK_ARG(d,"d")
			{
				HX_STACK_LINE(506)
				bool tmp = (it == _g);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(506)
				if ((tmp)){
					HX_STACK_LINE(506)
					return true;
				}
				HX_STACK_LINE(507)
				bool tmp1 = (res->__get((int)0).StaticCast< ::haxor::component::Transform >() != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(507)
				if ((tmp1)){
					HX_STACK_LINE(507)
					return true;
				}
				HX_STACK_LINE(508)
				bool tmp2 = p_exact;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(508)
				if ((tmp2)){
					HX_STACK_LINE(510)
					::String tmp3 = it->get_name();		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(510)
					::String tmp4 = p_name;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(510)
					bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(510)
					if ((tmp5)){
						HX_STACK_LINE(510)
						res[(int)0] = it;
					}
				}
				else{
					HX_STACK_LINE(514)
					::String tmp3 = it->get_name();		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(514)
					::String tmp4 = p_name;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(514)
					int tmp5 = tmp3.indexOf(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(514)
					bool tmp6 = (tmp5 >= (int)0);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(514)
					if ((tmp6)){
						HX_STACK_LINE(514)
						res[(int)0] = it;
					}
				}
				HX_STACK_LINE(516)
				return true;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(504)
		this->Traverse( Dynamic(new _Function_1_1(p_exact,_g,res,p_name)));
		HX_STACK_LINE(518)
		::haxor::component::Transform tmp = res->__get((int)0).StaticCast< ::haxor::component::Transform >();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(518)
		return tmp;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Transform_obj,Search,return )

Array< ::Dynamic > Transform_obj::GetPathToRoot( ){
	HX_STACK_FRAME("haxor.component.Transform","GetPathToRoot",0x4d13a659,"haxor.component.Transform.GetPathToRoot","haxor/component/Transform.hx",526,0x28912231)
	HX_STACK_THIS(this)
	HX_STACK_LINE(527)
	::haxor::component::Transform tmp = this->m_parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(527)
	::haxor::component::Transform p = tmp;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(528)
	Array< ::Dynamic > tmp1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(528)
	Array< ::Dynamic > res = tmp1;		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(529)
	while((true)){
		HX_STACK_LINE(529)
		bool tmp2 = (p != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(529)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(529)
		if ((tmp3)){
			HX_STACK_LINE(529)
			break;
		}
		HX_STACK_LINE(531)
		::haxor::component::Transform tmp4 = p;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(531)
		res->push(tmp4);
		HX_STACK_LINE(532)
		p = p->m_parent;
	}
	HX_STACK_LINE(534)
	res->reverse();
	HX_STACK_LINE(535)
	Array< ::Dynamic > tmp2 = res;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(535)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,GetPathToRoot,return )

::String Transform_obj::OutputHierarchy( hx::Null< bool >  __o_p_show_transform,hx::Null< bool >  __o_p_show_world){
bool p_show_transform = __o_p_show_transform.Default(true);
bool p_show_world = __o_p_show_world.Default(false);
	HX_STACK_FRAME("haxor.component.Transform","OutputHierarchy",0x02eb15d5,"haxor.component.Transform.OutputHierarchy","haxor/component/Transform.hx",543,0x28912231)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_show_transform,"p_show_transform")
	HX_STACK_ARG(p_show_world,"p_show_world")
{
		HX_STACK_LINE(544)
		int d0 = (int)0;		HX_STACK_VAR(d0,"d0");
		HX_STACK_LINE(545)
		Array< ::String > hs = Array_obj< ::String >::__new().Add(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(hs,"hs");

		HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_1_1,bool,p_show_transform,Array< ::String >,hs,bool,p_show_world,int,d0)
		int __ArgCount() const { return 2; }
		bool run(::haxor::component::Transform t,int d){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxor/component/Transform.hx",547,0x28912231)
			HX_STACK_ARG(t,"t")
			HX_STACK_ARG(d,"d")
			{
				HX_STACK_LINE(548)
				::String tab = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(tab,"tab");
				HX_STACK_LINE(549)
				int td = d;		HX_STACK_VAR(td,"td");
				HX_STACK_LINE(550)
				int tmp = (td - d0);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(550)
				Float tmp1 = ((Float)(tmp));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(550)
				Float tmp2 = ::Math_obj::max(((Float)((int)0)),tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(550)
				int d1 = ((int)(tmp2));		HX_STACK_VAR(d1,"d1");
				HX_STACK_LINE(551)
				{
					HX_STACK_LINE(551)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(551)
					while((true)){
						HX_STACK_LINE(551)
						bool tmp3 = (_g < d1);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(551)
						bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(551)
						if ((tmp4)){
							HX_STACK_LINE(551)
							break;
						}
						HX_STACK_LINE(551)
						int tmp5 = (_g)++;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(551)
						int i = tmp5;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(551)
						hx::AddEq(tab,HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
					}
				}
				HX_STACK_LINE(552)
				::String tmp3 = tab;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(552)
				::String tmp4 = t->get_name();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(552)
				::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(552)
				::String tmp6 = (tmp5 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(552)
				hx::AddEq(hs[(int)0],tmp6);
				HX_STACK_LINE(553)
				bool tmp7 = p_show_transform;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(553)
				if ((tmp7)){
					HX_STACK_LINE(553)
					::haxor::math::Vector3 tmp8 = t->get_position();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(553)
					::String tmp9 = tmp8->ToString(null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(553)
					::haxor::math::Quaternion tmp10 = t->get_rotation();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(553)
					::String tmp11 = tmp10->ToString(null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(553)
					::String tmp12 = (tmp9 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(553)
					::haxor::math::Vector3 tmp13 = t->get_scale();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(553)
					::String tmp14 = tmp13->ToString(null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(553)
					::String tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(553)
					hx::AddEq(hs[(int)0],tmp15);
				}
				HX_STACK_LINE(554)
				bool tmp8 = p_show_world;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(554)
				if ((tmp8)){
					HX_STACK_LINE(554)
					::haxor::math::Matrix4 tmp9 = t->get_WorldMatrix();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(554)
					::String tmp10 = tmp9->ToString(true,(int)3);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(554)
					hx::AddEq(hs[(int)0],tmp10);
				}
				HX_STACK_LINE(555)
				hx::AddEq(hs[(int)0],HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
				HX_STACK_LINE(556)
				return true;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(546)
		this->Traverse( Dynamic(new _Function_1_1(p_show_transform,hs,p_show_world,d0)));
		HX_STACK_LINE(558)
		::String tmp = hs->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(558)
		return tmp;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Transform_obj,OutputHierarchy,return )

Void Transform_obj::Traverse( Dynamic p_callback){
{
		HX_STACK_FRAME("haxor.component.Transform","Traverse",0xf10c2bf1,"haxor.component.Transform.Traverse","haxor/component/Transform.hx",566,0x28912231)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_callback,"p_callback")
		HX_STACK_LINE(566)
		Dynamic tmp = p_callback;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(566)
		this->TraverseStep(hx::ObjectPtr<OBJ_>(this),(int)0,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,Traverse,(void))

Void Transform_obj::TraverseStep( ::haxor::component::Transform p_child,int p_depth,Dynamic p_callback){
{
		HX_STACK_FRAME("haxor.component.Transform","TraverseStep",0x9cc48bdd,"haxor.component.Transform.TraverseStep","haxor/component/Transform.hx",573,0x28912231)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_child,"p_child")
		HX_STACK_ARG(p_depth,"p_depth")
		HX_STACK_ARG(p_callback,"p_callback")
		HX_STACK_LINE(573)
		::haxor::component::Transform tmp = p_child;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(573)
		int tmp1 = p_depth;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(573)
		bool tmp2 = p_callback(tmp,tmp1).Cast< bool >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(573)
		if ((tmp2)){
			HX_STACK_LINE(573)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(573)
			int tmp3 = p_child->m_hierarchy->length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(573)
			int _g = tmp3;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(573)
			while((true)){
				HX_STACK_LINE(573)
				bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(573)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(573)
				if ((tmp5)){
					HX_STACK_LINE(573)
					break;
				}
				HX_STACK_LINE(573)
				int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(573)
				int i = tmp6;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(573)
				int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(573)
				::haxor::component::Transform tmp8 = p_child->GetChild(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(573)
				int tmp9 = (p_depth + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(573)
				Dynamic tmp10 = p_callback;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(573)
				this->TraverseStep(tmp8,tmp9,tmp10);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Transform_obj,TraverseStep,(void))

Void Transform_obj::OnDestroy( ){
{
		HX_STACK_FRAME("haxor.component.Transform","OnDestroy",0x8507ae7c,"haxor.component.Transform.OnDestroy","haxor/component/Transform.hx",580,0x28912231)
		HX_STACK_THIS(this)
		HX_STACK_LINE(580)
		int tmp = this->__cid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(580)
		int v = tmp;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(580)
		::haxor::context::TransformContext tmp1 = ::haxor::context::EngineContext_obj::transform;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(580)
		Array< int > tmp2 = tmp1->tid->m_cache;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(580)
		int tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(580)
		tmp2->push(tmp3);
		HX_STACK_LINE(580)
		v;
	}
return null();
}


::String Transform_obj::ToString( hx::Null< bool >  __o_p_use_local,hx::Null< int >  __o_p_places){
bool p_use_local = __o_p_use_local.Default(false);
int p_places = __o_p_places.Default(2);
	HX_STACK_FRAME("haxor.component.Transform","ToString",0xbd107eeb,"haxor.component.Transform.ToString","haxor/component/Transform.hx",589,0x28912231)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_use_local,"p_use_local")
	HX_STACK_ARG(p_places,"p_places")
{
		HX_STACK_LINE(590)
		bool tmp = p_use_local;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(590)
		::haxor::math::Vector3 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(590)
		if ((tmp)){
			HX_STACK_LINE(590)
			tmp1 = this->get_localPosition();
		}
		else{
			HX_STACK_LINE(590)
			tmp1 = this->get_position();
		}
		HX_STACK_LINE(590)
		::haxor::math::Vector3 p = tmp1;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(591)
		bool tmp2 = p_use_local;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(591)
		::haxor::math::Vector3 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(591)
		if ((tmp2)){
			HX_STACK_LINE(591)
			tmp3 = this->get_localEuler();
		}
		else{
			HX_STACK_LINE(591)
			tmp3 = this->get_euler();
		}
		HX_STACK_LINE(591)
		::haxor::math::Vector3 e = tmp3;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(592)
		bool tmp4 = p_use_local;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(592)
		::haxor::math::Vector3 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(592)
		if ((tmp4)){
			HX_STACK_LINE(592)
			tmp5 = this->get_localScale();
		}
		else{
			HX_STACK_LINE(592)
			tmp5 = this->get_scale();
		}
		HX_STACK_LINE(592)
		::haxor::math::Vector3 s = tmp5;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(593)
		::String tmp6 = this->get_name();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(593)
		::String tmp7 = (tmp6 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(593)
		int tmp8 = p_places;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(593)
		::String tmp9 = p->ToString(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(593)
		::String tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(593)
		::String tmp11 = (tmp10 + HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(593)
		int tmp12 = p_places;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(593)
		::String tmp13 = e->ToString(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(593)
		::String tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(593)
		::String tmp15 = (tmp14 + HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(593)
		int tmp16 = p_places;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(593)
		::String tmp17 = s->ToString(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(593)
		::String tmp18 = (tmp15 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(593)
		return tmp18;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Transform_obj,ToString,return )

Void Transform_obj::TransformConcat( ::haxor::component::Transform t){
{
		HX_STACK_FRAME("haxor.component.Transform","TransformConcat",0x219fab41,"haxor.component.Transform.TransformConcat","haxor/component/Transform.hx",27,0x28912231)
		HX_STACK_ARG(t,"t")
		HX_STACK_LINE(29)
		::haxor::math::Matrix4 tmp = t->m_parent->m_worldMatrix;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(29)
		::haxor::math::Matrix4 v = tmp;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(32)
		::haxor::math::Matrix4 m = t->m_worldMatrix;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(33)
		m->m00 = v->m00;
		HX_STACK_LINE(33)
		m->m01 = v->m01;
		HX_STACK_LINE(33)
		m->m02 = v->m02;
		HX_STACK_LINE(33)
		m->m03 = v->m03;
		HX_STACK_LINE(34)
		m->m10 = v->m10;
		HX_STACK_LINE(34)
		m->m11 = v->m11;
		HX_STACK_LINE(34)
		m->m12 = v->m12;
		HX_STACK_LINE(34)
		m->m13 = v->m13;
		HX_STACK_LINE(35)
		m->m20 = v->m20;
		HX_STACK_LINE(35)
		m->m21 = v->m21;
		HX_STACK_LINE(35)
		m->m22 = v->m22;
		HX_STACK_LINE(35)
		m->m23 = v->m23;
		HX_STACK_LINE(37)
		::haxor::math::Matrix4 tmp1 = t->m_localMatrix;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(37)
		m->MultiplyTransform(tmp1);
		HX_STACK_LINE(40)
		t->m_wsp_dirty = true;
		HX_STACK_LINE(41)
		t->m_wsrs_dirty = true;
		HX_STACK_LINE(44)
		Float tmp2 = m->m00;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(44)
		Float tmp3 = m->m10;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(44)
		Float tmp4 = m->m20;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(44)
		::haxor::math::Vector3 tmp5 = t->m_right->Set(tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(44)
		tmp5->Normalize();
		HX_STACK_LINE(45)
		Float tmp6 = m->m01;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(45)
		Float tmp7 = m->m11;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(45)
		Float tmp8 = m->m21;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(45)
		::haxor::math::Vector3 tmp9 = t->m_up->Set(tmp6,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(45)
		tmp9->Normalize();
		HX_STACK_LINE(46)
		Float tmp10 = m->m02;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(46)
		Float tmp11 = m->m12;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(46)
		Float tmp12 = m->m22;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(46)
		::haxor::math::Vector3 tmp13 = t->m_forward->Set(tmp10,tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(46)
		tmp13->Normalize();
		HX_STACK_LINE(49)
		t->m_inverse_dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,TransformConcat,(void))

::haxor::component::Transform Transform_obj::get_root( ){
	HX_STACK_FRAME("haxor.component.Transform","get_root",0x76599bca,"haxor.component.Transform.get_root","haxor/component/Transform.hx",56,0x28912231)
	HX_STACK_LINE(56)
	::haxor::component::Transform tmp = ::haxor::component::Transform_obj::m_root;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_root,return )

::haxor::component::Transform Transform_obj::m_root;


Transform_obj::Transform_obj()
{
}

void Transform_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Transform);
	HX_MARK_MEMBER_NAME(m_right,"m_right");
	HX_MARK_MEMBER_NAME(m_up,"m_up");
	HX_MARK_MEMBER_NAME(m_forward,"m_forward");
	HX_MARK_MEMBER_NAME(m_parent,"m_parent");
	HX_MARK_MEMBER_NAME(childCount,"childCount");
	HX_MARK_MEMBER_NAME(m_localPosition,"m_localPosition");
	HX_MARK_MEMBER_NAME(m_localRotation,"m_localRotation");
	HX_MARK_MEMBER_NAME(m_localScale,"m_localScale");
	HX_MARK_MEMBER_NAME(m_position,"m_position");
	HX_MARK_MEMBER_NAME(m_rotation,"m_rotation");
	HX_MARK_MEMBER_NAME(m_scale,"m_scale");
	HX_MARK_MEMBER_NAME(m_worldMatrix,"m_worldMatrix");
	HX_MARK_MEMBER_NAME(m_worldMatrixInverse,"m_worldMatrixInverse");
	HX_MARK_MEMBER_NAME(m_localMatrix,"m_localMatrix");
	HX_MARK_MEMBER_NAME(m_lmt_dirty,"m_lmt_dirty");
	HX_MARK_MEMBER_NAME(m_lmrs_dirty,"m_lmrs_dirty");
	HX_MARK_MEMBER_NAME(m_uniform_dirty,"m_uniform_dirty");
	HX_MARK_MEMBER_NAME(m_dirty,"m_dirty");
	HX_MARK_MEMBER_NAME(m_inverse_dirty,"m_inverse_dirty");
	HX_MARK_MEMBER_NAME(m_wsp_dirty,"m_wsp_dirty");
	HX_MARK_MEMBER_NAME(m_wsrs_dirty,"m_wsrs_dirty");
	HX_MARK_MEMBER_NAME(m_locked,"m_locked");
	HX_MARK_MEMBER_NAME(m_hierarchy,"m_hierarchy");
	::haxor::component::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Transform_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_right,"m_right");
	HX_VISIT_MEMBER_NAME(m_up,"m_up");
	HX_VISIT_MEMBER_NAME(m_forward,"m_forward");
	HX_VISIT_MEMBER_NAME(m_parent,"m_parent");
	HX_VISIT_MEMBER_NAME(childCount,"childCount");
	HX_VISIT_MEMBER_NAME(m_localPosition,"m_localPosition");
	HX_VISIT_MEMBER_NAME(m_localRotation,"m_localRotation");
	HX_VISIT_MEMBER_NAME(m_localScale,"m_localScale");
	HX_VISIT_MEMBER_NAME(m_position,"m_position");
	HX_VISIT_MEMBER_NAME(m_rotation,"m_rotation");
	HX_VISIT_MEMBER_NAME(m_scale,"m_scale");
	HX_VISIT_MEMBER_NAME(m_worldMatrix,"m_worldMatrix");
	HX_VISIT_MEMBER_NAME(m_worldMatrixInverse,"m_worldMatrixInverse");
	HX_VISIT_MEMBER_NAME(m_localMatrix,"m_localMatrix");
	HX_VISIT_MEMBER_NAME(m_lmt_dirty,"m_lmt_dirty");
	HX_VISIT_MEMBER_NAME(m_lmrs_dirty,"m_lmrs_dirty");
	HX_VISIT_MEMBER_NAME(m_uniform_dirty,"m_uniform_dirty");
	HX_VISIT_MEMBER_NAME(m_dirty,"m_dirty");
	HX_VISIT_MEMBER_NAME(m_inverse_dirty,"m_inverse_dirty");
	HX_VISIT_MEMBER_NAME(m_wsp_dirty,"m_wsp_dirty");
	HX_VISIT_MEMBER_NAME(m_wsrs_dirty,"m_wsrs_dirty");
	HX_VISIT_MEMBER_NAME(m_locked,"m_locked");
	HX_VISIT_MEMBER_NAME(m_hierarchy,"m_hierarchy");
	::haxor::component::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Transform_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"up") ) { if (inCallProp == hx::paccAlways) return get_up(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"m_up") ) { return m_up; }
		if (HX_FIELD_EQ(inName,"Lock") ) { return Lock_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { if (inCallProp == hx::paccAlways) return get_right(); }
		if (HX_FIELD_EQ(inName,"euler") ) { if (inCallProp == hx::paccAlways) return get_euler(); }
		if (HX_FIELD_EQ(inName,"scale") ) { if (inCallProp == hx::paccAlways) return get_scale(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_up") ) { return get_up_dyn(); }
		if (HX_FIELD_EQ(inName,"set_up") ) { return set_up_dyn(); }
		if (HX_FIELD_EQ(inName,"parent") ) { if (inCallProp == hx::paccAlways) return get_parent(); }
		if (HX_FIELD_EQ(inName,"LookAt") ) { return LookAt_dyn(); }
		if (HX_FIELD_EQ(inName,"Unlock") ) { return Unlock_dyn(); }
		if (HX_FIELD_EQ(inName,"Search") ) { return Search_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_right") ) { return m_right; }
		if (HX_FIELD_EQ(inName,"forward") ) { if (inCallProp == hx::paccAlways) return get_forward(); }
		if (HX_FIELD_EQ(inName,"m_scale") ) { return m_scale; }
		if (HX_FIELD_EQ(inName,"m_dirty") ) { return m_dirty; }
		if (HX_FIELD_EQ(inName,"OnBuild") ) { return OnBuild_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_parent") ) { return m_parent; }
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == hx::paccAlways) return get_position(); }
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp == hx::paccAlways) return get_rotation(); }
		if (HX_FIELD_EQ(inName,"m_locked") ) { return m_locked; }
		if (HX_FIELD_EQ(inName,"GetChild") ) { return GetChild_dyn(); }
		if (HX_FIELD_EQ(inName,"Navigate") ) { return Navigate_dyn(); }
		if (HX_FIELD_EQ(inName,"Traverse") ) { return Traverse_dyn(); }
		if (HX_FIELD_EQ(inName,"ToString") ) { return ToString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_right") ) { return get_right_dyn(); }
		if (HX_FIELD_EQ(inName,"set_right") ) { return set_right_dyn(); }
		if (HX_FIELD_EQ(inName,"m_forward") ) { return m_forward; }
		if (HX_FIELD_EQ(inName,"get_euler") ) { return get_euler_dyn(); }
		if (HX_FIELD_EQ(inName,"set_euler") ) { return set_euler_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scale") ) { return get_scale_dyn(); }
		if (HX_FIELD_EQ(inName,"UpdateLMT") ) { return UpdateLMT_dyn(); }
		if (HX_FIELD_EQ(inName,"UpdateWSP") ) { return UpdateWSP_dyn(); }
		if (HX_FIELD_EQ(inName,"OnDestroy") ) { return OnDestroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_parent") ) { return get_parent_dyn(); }
		if (HX_FIELD_EQ(inName,"set_parent") ) { return set_parent_dyn(); }
		if (HX_FIELD_EQ(inName,"childCount") ) { return inCallProp == hx::paccAlways ? get_childCount() : childCount; }
		if (HX_FIELD_EQ(inName,"localEuler") ) { if (inCallProp == hx::paccAlways) return get_localEuler(); }
		if (HX_FIELD_EQ(inName,"localScale") ) { if (inCallProp == hx::paccAlways) return get_localScale(); }
		if (HX_FIELD_EQ(inName,"m_position") ) { return m_position; }
		if (HX_FIELD_EQ(inName,"m_rotation") ) { return m_rotation; }
		if (HX_FIELD_EQ(inName,"UpdateLMRS") ) { return UpdateLMRS_dyn(); }
		if (HX_FIELD_EQ(inName,"UpdateWSRS") ) { return UpdateWSRS_dyn(); }
		if (HX_FIELD_EQ(inName,"Invalidate") ) { return Invalidate_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_forward") ) { return get_forward_dyn(); }
		if (HX_FIELD_EQ(inName,"set_forward") ) { return set_forward_dyn(); }
		if (HX_FIELD_EQ(inName,"WorldMatrix") ) { if (inCallProp == hx::paccAlways) return get_WorldMatrix(); }
		if (HX_FIELD_EQ(inName,"m_lmt_dirty") ) { return m_lmt_dirty; }
		if (HX_FIELD_EQ(inName,"m_wsp_dirty") ) { return m_wsp_dirty; }
		if (HX_FIELD_EQ(inName,"m_hierarchy") ) { return m_hierarchy; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"m_localScale") ) { return m_localScale; }
		if (HX_FIELD_EQ(inName,"get_position") ) { return get_position_dyn(); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return set_position_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rotation") ) { return get_rotation_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rotation") ) { return set_rotation_dyn(); }
		if (HX_FIELD_EQ(inName,"m_lmrs_dirty") ) { return m_lmrs_dirty; }
		if (HX_FIELD_EQ(inName,"m_wsrs_dirty") ) { return m_wsrs_dirty; }
		if (HX_FIELD_EQ(inName,"TraverseStep") ) { return TraverseStep_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"localPosition") ) { if (inCallProp == hx::paccAlways) return get_localPosition(); }
		if (HX_FIELD_EQ(inName,"localRotation") ) { if (inCallProp == hx::paccAlways) return get_localRotation(); }
		if (HX_FIELD_EQ(inName,"m_worldMatrix") ) { return m_worldMatrix; }
		if (HX_FIELD_EQ(inName,"m_localMatrix") ) { return m_localMatrix; }
		if (HX_FIELD_EQ(inName,"GetPathToRoot") ) { return GetPathToRoot_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_childCount") ) { return get_childCount_dyn(); }
		if (HX_FIELD_EQ(inName,"get_localEuler") ) { return get_localEuler_dyn(); }
		if (HX_FIELD_EQ(inName,"set_localEuler") ) { return set_localEuler_dyn(); }
		if (HX_FIELD_EQ(inName,"get_localScale") ) { return get_localScale_dyn(); }
		if (HX_FIELD_EQ(inName,"set_localScale") ) { return set_localScale_dyn(); }
		if (HX_FIELD_EQ(inName,"GetChildByName") ) { return GetChildByName_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"m_localPosition") ) { return m_localPosition; }
		if (HX_FIELD_EQ(inName,"m_localRotation") ) { return m_localRotation; }
		if (HX_FIELD_EQ(inName,"get_WorldMatrix") ) { return get_WorldMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"m_uniform_dirty") ) { return m_uniform_dirty; }
		if (HX_FIELD_EQ(inName,"m_inverse_dirty") ) { return m_inverse_dirty; }
		if (HX_FIELD_EQ(inName,"OutputHierarchy") ) { return OutputHierarchy_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_localPosition") ) { return get_localPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"set_localPosition") ) { return set_localPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"get_localRotation") ) { return get_localRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"set_localRotation") ) { return set_localRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"UpdateWorldMatrix") ) { return UpdateWorldMatrix_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"WorldMatrixInverse") ) { if (inCallProp == hx::paccAlways) return get_WorldMatrixInverse(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"m_worldMatrixInverse") ) { return m_worldMatrixInverse; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_WorldMatrixInverse") ) { return get_WorldMatrixInverse_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Transform_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { if (inCallProp == hx::paccAlways) { outValue = get_root(); return true; } }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_root") ) { outValue = m_root; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_root") ) { outValue = get_root_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"TransformConcat") ) { outValue = TransformConcat_dyn(); return true;  }
	}
	return false;
}

Dynamic Transform_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"m_up") ) { m_up=inValue.Cast< ::haxor::math::Vector3 >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"euler") ) { if (inCallProp == hx::paccAlways) return set_euler(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { if (inCallProp == hx::paccAlways) return set_parent(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_right") ) { m_right=inValue.Cast< ::haxor::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_scale") ) { m_scale=inValue.Cast< ::haxor::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_dirty") ) { m_dirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_parent") ) { m_parent=inValue.Cast< ::haxor::component::Transform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == hx::paccAlways) return set_position(inValue); }
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp == hx::paccAlways) return set_rotation(inValue); }
		if (HX_FIELD_EQ(inName,"m_locked") ) { m_locked=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"m_forward") ) { m_forward=inValue.Cast< ::haxor::math::Vector3 >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"childCount") ) { childCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localEuler") ) { if (inCallProp == hx::paccAlways) return set_localEuler(inValue); }
		if (HX_FIELD_EQ(inName,"localScale") ) { if (inCallProp == hx::paccAlways) return set_localScale(inValue); }
		if (HX_FIELD_EQ(inName,"m_position") ) { m_position=inValue.Cast< ::haxor::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_rotation") ) { m_rotation=inValue.Cast< ::haxor::math::Quaternion >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"m_lmt_dirty") ) { m_lmt_dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_wsp_dirty") ) { m_wsp_dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_hierarchy") ) { m_hierarchy=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"m_localScale") ) { m_localScale=inValue.Cast< ::haxor::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_lmrs_dirty") ) { m_lmrs_dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_wsrs_dirty") ) { m_wsrs_dirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"localPosition") ) { if (inCallProp == hx::paccAlways) return set_localPosition(inValue); }
		if (HX_FIELD_EQ(inName,"localRotation") ) { if (inCallProp == hx::paccAlways) return set_localRotation(inValue); }
		if (HX_FIELD_EQ(inName,"m_worldMatrix") ) { m_worldMatrix=inValue.Cast< ::haxor::math::Matrix4 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_localMatrix") ) { m_localMatrix=inValue.Cast< ::haxor::math::Matrix4 >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"m_localPosition") ) { m_localPosition=inValue.Cast< ::haxor::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_localRotation") ) { m_localRotation=inValue.Cast< ::haxor::math::Quaternion >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_uniform_dirty") ) { m_uniform_dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_inverse_dirty") ) { m_inverse_dirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"m_worldMatrixInverse") ) { m_worldMatrixInverse=inValue.Cast< ::haxor::math::Matrix4 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Transform_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"m_root") ) { m_root=ioValue.Cast< ::haxor::component::Transform >(); return true; }
	}
	return false;
}

void Transform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));
	outFields->push(HX_HCSTRING("m_right","\x4a","\xe3","\xee","\x99"));
	outFields->push(HX_HCSTRING("up","\x5b","\x66","\x00","\x00"));
	outFields->push(HX_HCSTRING("m_up","\x2d","\xbe","\x54","\x48"));
	outFields->push(HX_HCSTRING("forward","\xc5","\xe1","\xca","\xe5"));
	outFields->push(HX_HCSTRING("m_forward","\xb3","\xf0","\x4c","\xf0"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("m_parent","\xfc","\xad","\x6f","\xb6"));
	outFields->push(HX_HCSTRING("childCount","\x93","\xb5","\xde","\xe8"));
	outFields->push(HX_HCSTRING("localPosition","\x34","\x09","\xf5","\x43"));
	outFields->push(HX_HCSTRING("m_localPosition","\xa2","\xfe","\x69","\xf1"));
	outFields->push(HX_HCSTRING("localRotation","\xc9","\xa5","\x80","\x81"));
	outFields->push(HX_HCSTRING("m_localRotation","\x37","\x9b","\xf5","\x2e"));
	outFields->push(HX_HCSTRING("localEuler","\xfe","\x7b","\x14","\xad"));
	outFields->push(HX_HCSTRING("localScale","\x1f","\x71","\xc2","\xb0"));
	outFields->push(HX_HCSTRING("m_localScale","\xf1","\xea","\xcd","\x81"));
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	outFields->push(HX_HCSTRING("m_position","\xfb","\xa1","\x45","\xf2"));
	outFields->push(HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"));
	outFields->push(HX_HCSTRING("m_rotation","\x90","\x3e","\xd1","\x2f"));
	outFields->push(HX_HCSTRING("euler","\x69","\xd9","\x20","\x75"));
	outFields->push(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"));
	outFields->push(HX_HCSTRING("m_scale","\xf8","\xa5","\x59","\x29"));
	outFields->push(HX_HCSTRING("WorldMatrix","\x13","\x62","\x68","\x6b"));
	outFields->push(HX_HCSTRING("m_worldMatrix","\x21","\xe8","\x34","\xa0"));
	outFields->push(HX_HCSTRING("WorldMatrixInverse","\xdd","\xc9","\x48","\xeb"));
	outFields->push(HX_HCSTRING("m_worldMatrixInverse","\x8f","\x41","\x7b","\xb0"));
	outFields->push(HX_HCSTRING("m_localMatrix","\xfa","\xf3","\x01","\x92"));
	outFields->push(HX_HCSTRING("m_lmt_dirty","\xd4","\x70","\x1a","\x40"));
	outFields->push(HX_HCSTRING("m_lmrs_dirty","\x27","\x83","\x92","\xbd"));
	outFields->push(HX_HCSTRING("m_uniform_dirty","\xf5","\xac","\x13","\xc1"));
	outFields->push(HX_HCSTRING("m_dirty","\x80","\x27","\x5b","\x8a"));
	outFields->push(HX_HCSTRING("m_inverse_dirty","\x71","\xbc","\x69","\xac"));
	outFields->push(HX_HCSTRING("m_wsp_dirty","\x95","\xc5","\x52","\x01"));
	outFields->push(HX_HCSTRING("m_wsrs_dirty","\xc2","\x1f","\x6e","\xf2"));
	outFields->push(HX_HCSTRING("m_locked","\xdc","\xad","\xb8","\x22"));
	outFields->push(HX_HCSTRING("m_hierarchy","\xe3","\xab","\x44","\x84"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::math::Vector3*/ ,(int)offsetof(Transform_obj,m_right),HX_HCSTRING("m_right","\x4a","\xe3","\xee","\x99")},
	{hx::fsObject /*::haxor::math::Vector3*/ ,(int)offsetof(Transform_obj,m_up),HX_HCSTRING("m_up","\x2d","\xbe","\x54","\x48")},
	{hx::fsObject /*::haxor::math::Vector3*/ ,(int)offsetof(Transform_obj,m_forward),HX_HCSTRING("m_forward","\xb3","\xf0","\x4c","\xf0")},
	{hx::fsObject /*::haxor::component::Transform*/ ,(int)offsetof(Transform_obj,m_parent),HX_HCSTRING("m_parent","\xfc","\xad","\x6f","\xb6")},
	{hx::fsInt,(int)offsetof(Transform_obj,childCount),HX_HCSTRING("childCount","\x93","\xb5","\xde","\xe8")},
	{hx::fsObject /*::haxor::math::Vector3*/ ,(int)offsetof(Transform_obj,m_localPosition),HX_HCSTRING("m_localPosition","\xa2","\xfe","\x69","\xf1")},
	{hx::fsObject /*::haxor::math::Quaternion*/ ,(int)offsetof(Transform_obj,m_localRotation),HX_HCSTRING("m_localRotation","\x37","\x9b","\xf5","\x2e")},
	{hx::fsObject /*::haxor::math::Vector3*/ ,(int)offsetof(Transform_obj,m_localScale),HX_HCSTRING("m_localScale","\xf1","\xea","\xcd","\x81")},
	{hx::fsObject /*::haxor::math::Vector3*/ ,(int)offsetof(Transform_obj,m_position),HX_HCSTRING("m_position","\xfb","\xa1","\x45","\xf2")},
	{hx::fsObject /*::haxor::math::Quaternion*/ ,(int)offsetof(Transform_obj,m_rotation),HX_HCSTRING("m_rotation","\x90","\x3e","\xd1","\x2f")},
	{hx::fsObject /*::haxor::math::Vector3*/ ,(int)offsetof(Transform_obj,m_scale),HX_HCSTRING("m_scale","\xf8","\xa5","\x59","\x29")},
	{hx::fsObject /*::haxor::math::Matrix4*/ ,(int)offsetof(Transform_obj,m_worldMatrix),HX_HCSTRING("m_worldMatrix","\x21","\xe8","\x34","\xa0")},
	{hx::fsObject /*::haxor::math::Matrix4*/ ,(int)offsetof(Transform_obj,m_worldMatrixInverse),HX_HCSTRING("m_worldMatrixInverse","\x8f","\x41","\x7b","\xb0")},
	{hx::fsObject /*::haxor::math::Matrix4*/ ,(int)offsetof(Transform_obj,m_localMatrix),HX_HCSTRING("m_localMatrix","\xfa","\xf3","\x01","\x92")},
	{hx::fsBool,(int)offsetof(Transform_obj,m_lmt_dirty),HX_HCSTRING("m_lmt_dirty","\xd4","\x70","\x1a","\x40")},
	{hx::fsBool,(int)offsetof(Transform_obj,m_lmrs_dirty),HX_HCSTRING("m_lmrs_dirty","\x27","\x83","\x92","\xbd")},
	{hx::fsBool,(int)offsetof(Transform_obj,m_uniform_dirty),HX_HCSTRING("m_uniform_dirty","\xf5","\xac","\x13","\xc1")},
	{hx::fsBool,(int)offsetof(Transform_obj,m_dirty),HX_HCSTRING("m_dirty","\x80","\x27","\x5b","\x8a")},
	{hx::fsBool,(int)offsetof(Transform_obj,m_inverse_dirty),HX_HCSTRING("m_inverse_dirty","\x71","\xbc","\x69","\xac")},
	{hx::fsBool,(int)offsetof(Transform_obj,m_wsp_dirty),HX_HCSTRING("m_wsp_dirty","\x95","\xc5","\x52","\x01")},
	{hx::fsBool,(int)offsetof(Transform_obj,m_wsrs_dirty),HX_HCSTRING("m_wsrs_dirty","\xc2","\x1f","\x6e","\xf2")},
	{hx::fsBool,(int)offsetof(Transform_obj,m_locked),HX_HCSTRING("m_locked","\xdc","\xad","\xb8","\x22")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Transform_obj,m_hierarchy),HX_HCSTRING("m_hierarchy","\xe3","\xab","\x44","\x84")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxor::component::Transform*/ ,(void *) &Transform_obj::m_root,HX_HCSTRING("m_root","\x74","\x5e","\xa6","\x93")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get_right","\x33","\x68","\x0d","\x2d"),
	HX_HCSTRING("set_right","\x3f","\x54","\x5e","\x10"),
	HX_HCSTRING("m_right","\x4a","\xe3","\xee","\x99"),
	HX_HCSTRING("get_up","\xa4","\xfd","\x2f","\xa3"),
	HX_HCSTRING("set_up","\x18","\x52","\x78","\x6f"),
	HX_HCSTRING("m_up","\x2d","\xbe","\x54","\x48"),
	HX_HCSTRING("get_forward","\xdc","\x41","\xc5","\x6b"),
	HX_HCSTRING("set_forward","\xe8","\x48","\x32","\x76"),
	HX_HCSTRING("m_forward","\xb3","\xf0","\x4c","\xf0"),
	HX_HCSTRING("get_parent","\xf3","\x74","\x05","\xde"),
	HX_HCSTRING("set_parent","\x67","\x13","\x83","\xe1"),
	HX_HCSTRING("m_parent","\xfc","\xad","\x6f","\xb6"),
	HX_HCSTRING("childCount","\x93","\xb5","\xde","\xe8"),
	HX_HCSTRING("get_childCount","\xdc","\x3d","\xd4","\x5e"),
	HX_HCSTRING("get_localPosition","\x8b","\x14","\x65","\x4a"),
	HX_HCSTRING("set_localPosition","\x97","\xec","\xd2","\x6d"),
	HX_HCSTRING("m_localPosition","\xa2","\xfe","\x69","\xf1"),
	HX_HCSTRING("get_localRotation","\x20","\xb1","\xf0","\x87"),
	HX_HCSTRING("set_localRotation","\x2c","\x89","\x5e","\xab"),
	HX_HCSTRING("m_localRotation","\x37","\x9b","\xf5","\x2e"),
	HX_HCSTRING("get_localEuler","\x47","\x04","\x0a","\x23"),
	HX_HCSTRING("set_localEuler","\xbb","\xec","\x29","\x43"),
	HX_HCSTRING("get_localScale","\x68","\xf9","\xb7","\x26"),
	HX_HCSTRING("set_localScale","\xdc","\xe1","\xd7","\x46"),
	HX_HCSTRING("m_localScale","\xf1","\xea","\xcd","\x81"),
	HX_HCSTRING("get_position","\xb2","\x54","\x14","\x80"),
	HX_HCSTRING("set_position","\x26","\x78","\x0d","\x95"),
	HX_HCSTRING("m_position","\xfb","\xa1","\x45","\xf2"),
	HX_HCSTRING("get_rotation","\x47","\xf1","\x9f","\xbd"),
	HX_HCSTRING("set_rotation","\xbb","\x14","\x99","\xd2"),
	HX_HCSTRING("m_rotation","\x90","\x3e","\xd1","\x2f"),
	HX_HCSTRING("get_euler","\xc0","\x35","\xca","\xb8"),
	HX_HCSTRING("set_euler","\xcc","\x21","\x1b","\x9c"),
	HX_HCSTRING("get_scale","\xe1","\x2a","\x78","\xbc"),
	HX_HCSTRING("m_scale","\xf8","\xa5","\x59","\x29"),
	HX_HCSTRING("get_WorldMatrix","\xaa","\x19","\x4a","\x2c"),
	HX_HCSTRING("m_worldMatrix","\x21","\xe8","\x34","\xa0"),
	HX_HCSTRING("get_WorldMatrixInverse","\x26","\x43","\xdd","\x44"),
	HX_HCSTRING("m_worldMatrixInverse","\x8f","\x41","\x7b","\xb0"),
	HX_HCSTRING("m_localMatrix","\xfa","\xf3","\x01","\x92"),
	HX_HCSTRING("m_lmt_dirty","\xd4","\x70","\x1a","\x40"),
	HX_HCSTRING("m_lmrs_dirty","\x27","\x83","\x92","\xbd"),
	HX_HCSTRING("m_uniform_dirty","\xf5","\xac","\x13","\xc1"),
	HX_HCSTRING("m_dirty","\x80","\x27","\x5b","\x8a"),
	HX_HCSTRING("m_inverse_dirty","\x71","\xbc","\x69","\xac"),
	HX_HCSTRING("m_wsp_dirty","\x95","\xc5","\x52","\x01"),
	HX_HCSTRING("m_wsrs_dirty","\xc2","\x1f","\x6e","\xf2"),
	HX_HCSTRING("m_locked","\xdc","\xad","\xb8","\x22"),
	HX_HCSTRING("m_hierarchy","\xe3","\xab","\x44","\x84"),
	HX_HCSTRING("OnBuild","\x6f","\xa1","\x79","\x1e"),
	HX_HCSTRING("UpdateLMT","\x2a","\xf4","\xb1","\x24"),
	HX_HCSTRING("UpdateWSP","\x2b","\x52","\xba","\x24"),
	HX_HCSTRING("UpdateLMRS","\x2b","\xaf","\x03","\xf7"),
	HX_HCSTRING("UpdateWSRS","\x86","\x95","\x4d","\xfe"),
	HX_HCSTRING("UpdateWorldMatrix","\x8a","\x36","\x25","\x8d"),
	HX_HCSTRING("Invalidate","\x9b","\x1d","\xdb","\x7d"),
	HX_HCSTRING("LookAt","\x52","\xe9","\x49","\x96"),
	HX_HCSTRING("GetChild","\x46","\x75","\x42","\x7f"),
	HX_HCSTRING("GetChildByName","\xa8","\x4d","\xc9","\x4d"),
	HX_HCSTRING("Lock","\x0b","\xc8","\x90","\x32"),
	HX_HCSTRING("Unlock","\xe4","\x16","\x21","\x9a"),
	HX_HCSTRING("Navigate","\x51","\x3b","\x8f","\x16"),
	HX_HCSTRING("Search","\x88","\x13","\x8c","\x97"),
	HX_HCSTRING("GetPathToRoot","\xd8","\xa8","\x00","\x38"),
	HX_HCSTRING("OutputHierarchy","\x14","\xf6","\xfc","\x44"),
	HX_HCSTRING("Traverse","\xd2","\x39","\x1c","\x46"),
	HX_HCSTRING("TraverseStep","\x3e","\x9e","\x87","\x7c"),
	HX_HCSTRING("OnDestroy","\x7b","\xc5","\x03","\x9e"),
	HX_HCSTRING("ToString","\xcc","\x8c","\x20","\x12"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Transform_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Transform_obj::m_root,"m_root");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Transform_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Transform_obj::m_root,"m_root");
};

#endif

hx::Class Transform_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("TransformConcat","\x80","\x8b","\xb1","\x63"),
	HX_HCSTRING("get_root","\xab","\xa9","\x69","\xcb"),
	HX_HCSTRING("m_root","\x74","\x5e","\xa6","\x93"),
	String(null()) };

void Transform_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.component.Transform","\x2f","\x2e","\xc7","\xda");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Transform_obj::__GetStatic;
	__mClass->mSetStaticField = &Transform_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Transform_obj >;
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

void Transform_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/component/Transform.hx",19,0x28912231)
		{
			hx::Anon __result = hx::Anon_obj::Create();
			struct _Function_1_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/component/Transform.hx",19,0x28912231)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						struct _Function_2_1{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/component/Transform.hx",19,0x28912231)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed") , _Function_2_1::Block(),false);
						struct _Function_2_2{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/component/Transform.hx",19,0x28912231)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("localPosition","\x34","\x09","\xf5","\x43") , _Function_2_2::Block(),false);
						struct _Function_2_3{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/component/Transform.hx",19,0x28912231)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("localEuler","\xfe","\x7b","\x14","\xad") , _Function_2_3::Block(),false);
						struct _Function_2_4{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/component/Transform.hx",19,0x28912231)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("localScale","\x1f","\x71","\xc2","\xb0") , _Function_2_4::Block(),false);
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
