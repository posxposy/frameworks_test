#include <hxcpp.h>

#ifndef INCLUDED_haxor_component_Behaviour
#include <haxor/component/Behaviour.h>
#endif
#ifndef INCLUDED_haxor_component_Component
#include <haxor/component/Component.h>
#endif
#ifndef INCLUDED_haxor_component_physics_Collider
#include <haxor/component/physics/Collider.h>
#endif
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_ds_IUSetItem
#include <haxor/ds/IUSetItem.h>
#endif
#ifndef INCLUDED_haxor_math_Vector3
#include <haxor/math/Vector3.h>
#endif
#ifndef INCLUDED_haxor_physics_Collision
#include <haxor/physics/Collision.h>
#endif
namespace haxor{
namespace physics{

Void Collision_obj::__construct()
{
HX_STACK_FRAME("haxor.physics.Collision","new",0x5d613131,"haxor.physics.Collision.new","haxor/physics/Collision.hx",25,0xa376a361)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(26)
	::haxor::math::Vector3 tmp = ::haxor::math::Vector3_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	this->normal = tmp;
	HX_STACK_LINE(27)
	::haxor::math::Vector3 tmp1 = ::haxor::math::Vector3_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	this->point = tmp1;
	HX_STACK_LINE(28)
	this->depth = ((Float)0.0);
	HX_STACK_LINE(29)
	this->speed = ((Float)0.0);
	HX_STACK_LINE(30)
	this->usid = (int)-1;
}
;
	return null();
}

//Collision_obj::~Collision_obj() { }

Dynamic Collision_obj::__CreateEmpty() { return  new Collision_obj; }
hx::ObjectPtr< Collision_obj > Collision_obj::__new()
{  hx::ObjectPtr< Collision_obj > _result_ = new Collision_obj();
	_result_->__construct();
	return _result_;}

Dynamic Collision_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Collision_obj > _result_ = new Collision_obj();
	_result_->__construct();
	return _result_;}

hx::Object *Collision_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxor::ds::IUSetItem_obj)) return operator ::haxor::ds::IUSetItem_obj *();
	return super::__ToInterface(inType);
}

Collision_obj::operator ::haxor::ds::IUSetItem_obj *()
	{ return new ::haxor::ds::IUSetItem_delegate_< Collision_obj >(this); }
::haxor::physics::Collision Collision_obj::Invert( ){
	HX_STACK_FRAME("haxor.physics.Collision","Invert",0x5c219305,"haxor.physics.Collision.Invert","haxor/physics/Collision.hx",38,0xa376a361)
	HX_STACK_THIS(this)
	HX_STACK_LINE(39)
	::haxor::component::physics::Collider tmp = this->from;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	::haxor::component::physics::Collider tc = tmp;		HX_STACK_VAR(tc,"tc");
	HX_STACK_LINE(40)
	::haxor::component::physics::Collider tmp1 = this->to;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	this->from = tmp1;
	HX_STACK_LINE(41)
	this->to = tc;
	HX_STACK_LINE(42)
	::haxor::math::Vector3 tmp2 = this->normal;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(42)
	tmp2->Invert();
	HX_STACK_LINE(43)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Collision_obj,Invert,return )

Void Collision_obj::Reset( ){
{
		HX_STACK_FRAME("haxor.physics.Collision","Reset",0x3db9b0c0,"haxor.physics.Collision.Reset","haxor/physics/Collision.hx",50,0xa376a361)
		HX_STACK_THIS(this)
		HX_STACK_LINE(51)
		::haxor::math::Vector3 tmp = this->normal;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(51)
		tmp->Set(null(),null(),null());
		HX_STACK_LINE(52)
		::haxor::math::Vector3 tmp1 = this->point;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		tmp1->Set(null(),null(),null());
		HX_STACK_LINE(53)
		this->depth = (int)0;
		HX_STACK_LINE(54)
		this->speed = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Collision_obj,Reset,(void))


Collision_obj::Collision_obj()
{
}

void Collision_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Collision);
	HX_MARK_MEMBER_NAME(usid,"usid");
	HX_MARK_MEMBER_NAME(from,"from");
	HX_MARK_MEMBER_NAME(to,"to");
	HX_MARK_MEMBER_NAME(point,"point");
	HX_MARK_MEMBER_NAME(depth,"depth");
	HX_MARK_MEMBER_NAME(normal,"normal");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_END_CLASS();
}

void Collision_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(usid,"usid");
	HX_VISIT_MEMBER_NAME(from,"from");
	HX_VISIT_MEMBER_NAME(to,"to");
	HX_VISIT_MEMBER_NAME(point,"point");
	HX_VISIT_MEMBER_NAME(depth,"depth");
	HX_VISIT_MEMBER_NAME(normal,"normal");
	HX_VISIT_MEMBER_NAME(speed,"speed");
}

Dynamic Collision_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"to") ) { return to; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"usid") ) { return usid; }
		if (HX_FIELD_EQ(inName,"from") ) { return from; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { return point; }
		if (HX_FIELD_EQ(inName,"depth") ) { return depth; }
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		if (HX_FIELD_EQ(inName,"Reset") ) { return Reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"normal") ) { return normal; }
		if (HX_FIELD_EQ(inName,"Invert") ) { return Invert_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Collision_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"to") ) { to=inValue.Cast< ::haxor::component::physics::Collider >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"usid") ) { usid=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"from") ) { from=inValue.Cast< ::haxor::component::physics::Collider >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { point=inValue.Cast< ::haxor::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"depth") ) { depth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"normal") ) { normal=inValue.Cast< ::haxor::math::Vector3 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Collision_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Collision_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("usid","\xb9","\x95","\xad","\x4d"));
	outFields->push(HX_HCSTRING("from","\x6a","\xa5","\xc2","\x43"));
	outFields->push(HX_HCSTRING("to","\x7b","\x65","\x00","\x00"));
	outFields->push(HX_HCSTRING("point","\x50","\xb4","\x8f","\xc6"));
	outFields->push(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"));
	outFields->push(HX_HCSTRING("normal","\x27","\x72","\x69","\x30"));
	outFields->push(HX_HCSTRING("speed","\x87","\x97","\x69","\x81"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Collision_obj,usid),HX_HCSTRING("usid","\xb9","\x95","\xad","\x4d")},
	{hx::fsObject /*::haxor::component::physics::Collider*/ ,(int)offsetof(Collision_obj,from),HX_HCSTRING("from","\x6a","\xa5","\xc2","\x43")},
	{hx::fsObject /*::haxor::component::physics::Collider*/ ,(int)offsetof(Collision_obj,to),HX_HCSTRING("to","\x7b","\x65","\x00","\x00")},
	{hx::fsObject /*::haxor::math::Vector3*/ ,(int)offsetof(Collision_obj,point),HX_HCSTRING("point","\x50","\xb4","\x8f","\xc6")},
	{hx::fsFloat,(int)offsetof(Collision_obj,depth),HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7")},
	{hx::fsObject /*::haxor::math::Vector3*/ ,(int)offsetof(Collision_obj,normal),HX_HCSTRING("normal","\x27","\x72","\x69","\x30")},
	{hx::fsFloat,(int)offsetof(Collision_obj,speed),HX_HCSTRING("speed","\x87","\x97","\x69","\x81")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("usid","\xb9","\x95","\xad","\x4d"),
	HX_HCSTRING("from","\x6a","\xa5","\xc2","\x43"),
	HX_HCSTRING("to","\x7b","\x65","\x00","\x00"),
	HX_HCSTRING("point","\x50","\xb4","\x8f","\xc6"),
	HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"),
	HX_HCSTRING("normal","\x27","\x72","\x69","\x30"),
	HX_HCSTRING("speed","\x87","\x97","\x69","\x81"),
	HX_HCSTRING("Invert","\x36","\x5b","\x6d","\xd4"),
	HX_HCSTRING("Reset","\xaf","\xb9","\xf5","\x79"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Collision_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Collision_obj::__mClass,"__mClass");
};

#endif

hx::Class Collision_obj::__mClass;

void Collision_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.physics.Collision","\xbf","\xc4","\x6a","\x3e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Collision_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Collision_obj >;
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
} // end namespace physics
