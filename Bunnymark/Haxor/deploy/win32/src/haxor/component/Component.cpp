#include <hxcpp.h>

#ifndef INCLUDED_haxor_component_Behaviour
#include <haxor/component/Behaviour.h>
#endif
#ifndef INCLUDED_haxor_component_Camera
#include <haxor/component/Camera.h>
#endif
#ifndef INCLUDED_haxor_component_Component
#include <haxor/component/Component.h>
#endif
#ifndef INCLUDED_haxor_component_Renderer
#include <haxor/component/Renderer.h>
#endif
#ifndef INCLUDED_haxor_component_Transform
#include <haxor/component/Transform.h>
#endif
#ifndef INCLUDED_haxor_component_physics_RigidBody
#include <haxor/component/physics/RigidBody.h>
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
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_ISerializable
#include <haxor/io/serialization/ISerializable.h>
#endif
namespace haxor{
namespace component{

Void Component_obj::__construct(::String __o_p_name)
{
HX_STACK_FRAME("haxor.component.Component","new",0x57da5272,"haxor.component.Component.new","haxor/component/Component.hx",15,0x10f68780)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_p_name,"p_name")
::String p_name = __o_p_name.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(15)
	::String tmp = p_name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	super::__construct(tmp);
}
;
	return null();
}

//Component_obj::~Component_obj() { }

Dynamic Component_obj::__CreateEmpty() { return  new Component_obj; }
hx::ObjectPtr< Component_obj > Component_obj::__new(::String __o_p_name)
{  hx::ObjectPtr< Component_obj > _result_ = new Component_obj();
	_result_->__construct(__o_p_name);
	return _result_;}

Dynamic Component_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Component_obj > _result_ = new Component_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::String Component_obj::get_name( ){
	HX_STACK_FRAME("haxor.component.Component","get_name",0x02c8ea82,"haxor.component.Component.get_name","haxor/component/Component.hx",22,0x10f68780)
	HX_STACK_THIS(this)
	HX_STACK_LINE(22)
	::haxor::core::Entity tmp = this->m_entity;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(22)
	if ((tmp1)){
		HX_STACK_LINE(22)
		tmp2 = this->super::get_name();
	}
	else{
		HX_STACK_LINE(22)
		::haxor::core::Entity tmp3 = this->m_entity;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(22)
		tmp2 = tmp3->get_name();
	}
	HX_STACK_LINE(22)
	return tmp2;
}


::String Component_obj::set_name( ::String v){
	HX_STACK_FRAME("haxor.component.Component","set_name",0xb12643f6,"haxor.component.Component.set_name","haxor/component/Component.hx",28,0x10f68780)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(28)
	::haxor::core::Entity tmp = this->m_entity;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	if ((tmp1)){
		HX_STACK_LINE(28)
		::haxor::core::Entity tmp2 = this->m_entity;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(28)
		::String tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(28)
		tmp2->set_name(tmp3);
	}
	HX_STACK_LINE(28)
	::String tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(28)
	return tmp2;
}


::haxor::core::Entity Component_obj::get_entity( ){
	HX_STACK_FRAME("haxor.component.Component","get_entity",0xde5d471a,"haxor.component.Component.get_entity","haxor/component/Component.hx",34,0x10f68780)
	HX_STACK_THIS(this)
	HX_STACK_LINE(34)
	::haxor::core::Entity tmp = this->m_entity;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_entity,return )

int Component_obj::get_layer( ){
	HX_STACK_FRAME("haxor.component.Component","get_layer",0x464039ba,"haxor.component.Component.get_layer","haxor/component/Component.hx",41,0x10f68780)
	HX_STACK_THIS(this)
	HX_STACK_LINE(41)
	::haxor::core::Entity tmp = this->m_entity;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	int tmp1 = tmp->m_layer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(41)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_layer,return )

int Component_obj::set_layer( int v){
	HX_STACK_FRAME("haxor.component.Component","set_layer",0x299125c6,"haxor.component.Component.set_layer","haxor/component/Component.hx",42,0x10f68780)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(42)
	::haxor::core::Entity tmp = this->m_entity;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	int tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	tmp->set_layer(tmp1);
	HX_STACK_LINE(42)
	int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(42)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_layer,return )

::haxor::component::Transform Component_obj::get_transform( ){
	HX_STACK_FRAME("haxor.component.Component","get_transform",0x44178dd5,"haxor.component.Component.get_transform","haxor/component/Component.hx",48,0x10f68780)
	HX_STACK_THIS(this)
	HX_STACK_LINE(48)
	::haxor::core::Entity tmp = this->m_entity;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	::haxor::component::Transform tmp1 = tmp->m_transform;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(48)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_transform,return )

::haxor::component::Camera Component_obj::get_camera( ){
	HX_STACK_FRAME("haxor.component.Component","get_camera",0x90cd7a9c,"haxor.component.Component.get_camera","haxor/component/Component.hx",55,0x10f68780)
	HX_STACK_THIS(this)
	HX_STACK_LINE(55)
	::haxor::core::Entity tmp = this->m_entity;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	::haxor::component::Camera tmp1 = tmp->get_camera();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(55)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_camera,return )

::haxor::component::Renderer Component_obj::get_renderer( ){
	HX_STACK_FRAME("haxor.component.Component","get_renderer",0x45cb24fa,"haxor.component.Component.get_renderer","haxor/component/Component.hx",61,0x10f68780)
	HX_STACK_THIS(this)
	HX_STACK_LINE(61)
	::haxor::core::Entity tmp = this->m_entity;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	::haxor::component::Renderer tmp1 = tmp->get_renderer();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(61)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_renderer,return )

::haxor::component::physics::RigidBody Component_obj::get_rigidbody( ){
	HX_STACK_FRAME("haxor.component.Component","get_rigidbody",0xef7f1936,"haxor.component.Component.get_rigidbody","haxor/component/Component.hx",67,0x10f68780)
	HX_STACK_THIS(this)
	HX_STACK_LINE(67)
	::haxor::core::Entity tmp = this->m_entity;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	::haxor::component::physics::RigidBody tmp1 = tmp->get_rigidbody();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(67)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_rigidbody,return )

Dynamic Component_obj::AddComponent( ::hx::Class p_type){
	HX_STACK_FRAME("haxor.component.Component","AddComponent",0xb4900a2a,"haxor.component.Component.AddComponent","haxor/component/Component.hx",74,0x10f68780)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_type,"p_type")
	HX_STACK_LINE(74)
	::haxor::core::Entity tmp = this->m_entity;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(74)
	::hx::Class tmp1 = p_type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(74)
	Dynamic tmp2 = tmp->AddComponent(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(74)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,AddComponent,return )

Dynamic Component_obj::GetComponent( ::hx::Class p_type){
	HX_STACK_FRAME("haxor.component.Component","GetComponent",0xc4928515,"haxor.component.Component.GetComponent","haxor/component/Component.hx",81,0x10f68780)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_type,"p_type")
	HX_STACK_LINE(81)
	::haxor::core::Entity tmp = this->m_entity;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	::hx::Class tmp1 = p_type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(81)
	Dynamic tmp2 = tmp->GetComponent(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(81)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,GetComponent,return )

Dynamic Component_obj::GetComponents( ::hx::Class p_type){
	HX_STACK_FRAME("haxor.component.Component","GetComponents",0x3ba1edbe,"haxor.component.Component.GetComponents","haxor/component/Component.hx",88,0x10f68780)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_type,"p_type")
	HX_STACK_LINE(88)
	::haxor::core::Entity tmp = this->m_entity;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	::hx::Class tmp1 = p_type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(88)
	Dynamic tmp2 = tmp->GetComponents(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(88)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,GetComponents,return )

Dynamic Component_obj::GetComponentInChildren( ::hx::Class p_type){
	HX_STACK_FRAME("haxor.component.Component","GetComponentInChildren",0xd21cb3b9,"haxor.component.Component.GetComponentInChildren","haxor/component/Component.hx",95,0x10f68780)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_type,"p_type")
	HX_STACK_LINE(95)
	::haxor::core::Entity tmp = this->m_entity;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(95)
	::hx::Class tmp1 = p_type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(95)
	Dynamic tmp2 = tmp->GetComponentInChildren(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(95)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,GetComponentInChildren,return )

Dynamic Component_obj::GetComponentsInChildren( ::hx::Class p_type){
	HX_STACK_FRAME("haxor.component.Component","GetComponentsInChildren",0xc052e9a2,"haxor.component.Component.GetComponentsInChildren","haxor/component/Component.hx",102,0x10f68780)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_type,"p_type")
	HX_STACK_LINE(102)
	::haxor::core::Entity tmp = this->m_entity;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(102)
	::hx::Class tmp1 = p_type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(102)
	Dynamic tmp2 = tmp->GetComponentsInChildren(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(102)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,GetComponentsInChildren,return )

Void Component_obj::OnBuild( ){
{
		HX_STACK_FRAME("haxor.component.Component","OnBuild",0x259f9481,"haxor.component.Component.OnBuild","haxor/component/Component.hx",107,0x10f68780)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,OnBuild,(void))

Void Component_obj::OnTransformUpdate( bool p_hierarchy){
{
		HX_STACK_FRAME("haxor.component.Component","OnTransformUpdate",0x99adbfa8,"haxor.component.Component.OnTransformUpdate","haxor/component/Component.hx",112,0x10f68780)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_hierarchy,"p_hierarchy")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,OnTransformUpdate,(void))

Void Component_obj::OnVisibilityChange( bool p_visible){
{
		HX_STACK_FRAME("haxor.component.Component","OnVisibilityChange",0xb5c44e6f,"haxor.component.Component.OnVisibilityChange","haxor/component/Component.hx",117,0x10f68780)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_visible,"p_visible")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,OnVisibilityChange,(void))


Component_obj::Component_obj()
{
}

void Component_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Component);
	HX_MARK_MEMBER_NAME(entity,"entity");
	HX_MARK_MEMBER_NAME(m_entity,"m_entity");
	HX_MARK_MEMBER_NAME(transform,"transform");
	::haxor::core::Resource_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Component_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(entity,"entity");
	HX_VISIT_MEMBER_NAME(m_entity,"m_entity");
	HX_VISIT_MEMBER_NAME(transform,"transform");
	::haxor::core::Resource_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Component_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"layer") ) { if (inCallProp == hx::paccAlways) return get_layer(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"entity") ) { return inCallProp == hx::paccAlways ? get_entity() : entity; }
		if (HX_FIELD_EQ(inName,"camera") ) { if (inCallProp == hx::paccAlways) return get_camera(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"OnBuild") ) { return OnBuild_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_name") ) { return get_name_dyn(); }
		if (HX_FIELD_EQ(inName,"set_name") ) { return set_name_dyn(); }
		if (HX_FIELD_EQ(inName,"m_entity") ) { return m_entity; }
		if (HX_FIELD_EQ(inName,"renderer") ) { if (inCallProp == hx::paccAlways) return get_renderer(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_layer") ) { return get_layer_dyn(); }
		if (HX_FIELD_EQ(inName,"set_layer") ) { return set_layer_dyn(); }
		if (HX_FIELD_EQ(inName,"transform") ) { return inCallProp == hx::paccAlways ? get_transform() : transform; }
		if (HX_FIELD_EQ(inName,"rigidbody") ) { if (inCallProp == hx::paccAlways) return get_rigidbody(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_entity") ) { return get_entity_dyn(); }
		if (HX_FIELD_EQ(inName,"get_camera") ) { return get_camera_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_renderer") ) { return get_renderer_dyn(); }
		if (HX_FIELD_EQ(inName,"AddComponent") ) { return AddComponent_dyn(); }
		if (HX_FIELD_EQ(inName,"GetComponent") ) { return GetComponent_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_transform") ) { return get_transform_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rigidbody") ) { return get_rigidbody_dyn(); }
		if (HX_FIELD_EQ(inName,"GetComponents") ) { return GetComponents_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"OnTransformUpdate") ) { return OnTransformUpdate_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"OnVisibilityChange") ) { return OnVisibilityChange_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"GetComponentInChildren") ) { return GetComponentInChildren_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"GetComponentsInChildren") ) { return GetComponentsInChildren_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Component_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"layer") ) { if (inCallProp == hx::paccAlways) return set_layer(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"entity") ) { entity=inValue.Cast< ::haxor::core::Entity >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_entity") ) { m_entity=inValue.Cast< ::haxor::core::Entity >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { transform=inValue.Cast< ::haxor::component::Transform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Component_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Component_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("entity","\x23","\x13","\x1c","\x05"));
	outFields->push(HX_HCSTRING("m_entity","\xf5","\xbb","\x0d","\xce"));
	outFields->push(HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f"));
	outFields->push(HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"));
	outFields->push(HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7"));
	outFields->push(HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"));
	outFields->push(HX_HCSTRING("rigidbody","\xcd","\xb8","\xfa","\xf0"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::core::Entity*/ ,(int)offsetof(Component_obj,entity),HX_HCSTRING("entity","\x23","\x13","\x1c","\x05")},
	{hx::fsObject /*::haxor::core::Entity*/ ,(int)offsetof(Component_obj,m_entity),HX_HCSTRING("m_entity","\xf5","\xbb","\x0d","\xce")},
	{hx::fsObject /*::haxor::component::Transform*/ ,(int)offsetof(Component_obj,transform),HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get_name","\xd4","\x2d","\xba","\xc8"),
	HX_HCSTRING("set_name","\x48","\x87","\x17","\x77"),
	HX_HCSTRING("entity","\x23","\x13","\x1c","\x05"),
	HX_HCSTRING("get_entity","\xec","\x82","\xa3","\xf5"),
	HX_HCSTRING("m_entity","\xf5","\xbb","\x0d","\xce"),
	HX_HCSTRING("get_layer","\x28","\xde","\x69","\xb3"),
	HX_HCSTRING("set_layer","\x34","\xca","\xba","\x96"),
	HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"),
	HX_HCSTRING("get_transform","\x43","\x01","\xf7","\x06"),
	HX_HCSTRING("get_camera","\x6e","\xb6","\x13","\xa8"),
	HX_HCSTRING("get_renderer","\x4c","\x79","\xf5","\x67"),
	HX_HCSTRING("get_rigidbody","\xa4","\x8c","\x5e","\xb2"),
	HX_HCSTRING("AddComponent","\x7c","\x5e","\xba","\xd6"),
	HX_HCSTRING("GetComponent","\x67","\xd9","\xbc","\xe6"),
	HX_HCSTRING("GetComponents","\x2c","\x61","\x81","\xfe"),
	HX_HCSTRING("GetComponentInChildren","\x8b","\x62","\x36","\x4f"),
	HX_HCSTRING("GetComponentsInChildren","\x90","\x32","\xb2","\xb9"),
	HX_HCSTRING("OnBuild","\x6f","\xa1","\x79","\x1e"),
	HX_HCSTRING("OnTransformUpdate","\x16","\x82","\xd6","\x22"),
	HX_HCSTRING("OnVisibilityChange","\x41","\xac","\x45","\x30"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Component_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Component_obj::__mClass,"__mClass");
};

#endif

hx::Class Component_obj::__mClass;

void Component_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.component.Component","\x80","\xf1","\x87","\xa4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Component_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Component_obj >;
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
