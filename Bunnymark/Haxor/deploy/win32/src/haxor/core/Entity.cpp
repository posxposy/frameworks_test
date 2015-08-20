#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxor_component_Behaviour
#include <haxor/component/Behaviour.h>
#endif
#ifndef INCLUDED_haxor_component_Camera
#include <haxor/component/Camera.h>
#endif
#ifndef INCLUDED_haxor_component_Component
#include <haxor/component/Component.h>
#endif
#ifndef INCLUDED_haxor_component_DataComponent
#include <haxor/component/DataComponent.h>
#endif
#ifndef INCLUDED_haxor_component_Renderer
#include <haxor/component/Renderer.h>
#endif
#ifndef INCLUDED_haxor_component_Transform
#include <haxor/component/Transform.h>
#endif
#ifndef INCLUDED_haxor_component_animation_Animation
#include <haxor/component/animation/Animation.h>
#endif
#ifndef INCLUDED_haxor_component_physics_RigidBody
#include <haxor/component/physics/RigidBody.h>
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
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_Formatter
#include <haxor/io/serialization/Formatter.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_ISerializable
#include <haxor/io/serialization/ISerializable.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_SerializedData
#include <haxor/io/serialization/SerializedData.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_SerializedField
#include <haxor/io/serialization/SerializedField.h>
#endif
namespace haxor{
namespace core{

Void Entity_obj::__construct(::String __o_p_name)
{
HX_STACK_FRAME("haxor.core.Entity","new",0x37b4da38,"haxor.core.Entity.new","haxor/core/Entity.hx",117,0x47bf6bd8)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_p_name,"p_name")
::String p_name = __o_p_name.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(119)
	::String tmp = p_name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(119)
	super::__construct(tmp);
	HX_STACK_LINE(120)
	this->m_enabled = true;
	HX_STACK_LINE(121)
	Array< ::Dynamic > tmp1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(121)
	this->m_components = tmp1;
	HX_STACK_LINE(122)
	this->m_layer = (int)1;
	HX_STACK_LINE(124)
	Dynamic tmp2 = this->AddComponent(hx::ClassOf< ::haxor::component::Transform >());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(124)
	this->m_transform = ((::haxor::component::Transform)(tmp2));
}
;
	return null();
}

//Entity_obj::~Entity_obj() { }

Dynamic Entity_obj::__CreateEmpty() { return  new Entity_obj; }
hx::ObjectPtr< Entity_obj > Entity_obj::__new(::String __o_p_name)
{  hx::ObjectPtr< Entity_obj > _result_ = new Entity_obj();
	_result_->__construct(__o_p_name);
	return _result_;}

Dynamic Entity_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Entity_obj > _result_ = new Entity_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *Entity_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxor::io::serialization::ISerializable_obj)) return operator ::haxor::io::serialization::ISerializable_obj *();
	return super::__ToInterface(inType);
}

Entity_obj::operator ::haxor::io::serialization::ISerializable_obj *()
	{ return new ::haxor::io::serialization::ISerializable_delegate_< Entity_obj >(this); }
bool Entity_obj::get_enabled( ){
	HX_STACK_FRAME("haxor.core.Entity","get_enabled",0x7cee0670,"haxor.core.Entity.get_enabled","haxor/core/Entity.hx",31,0x47bf6bd8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(31)
	bool tmp = this->m_enabled;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	if ((tmp)){
		HX_STACK_LINE(31)
		bool tmp2 = this->m_destroyed;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(31)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(31)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(31)
		tmp1 = !(tmp4);
	}
	else{
		HX_STACK_LINE(31)
		tmp1 = false;
	}
	HX_STACK_LINE(31)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_enabled,return )

bool Entity_obj::set_enabled( bool v){
	HX_STACK_FRAME("haxor.core.Entity","set_enabled",0x875b0d7c,"haxor.core.Entity.set_enabled","haxor/core/Entity.hx",33,0x47bf6bd8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(34)
	bool tmp = this->m_destroyed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	if ((tmp)){
		HX_STACK_LINE(34)
		return false;
	}
	HX_STACK_LINE(35)
	bool tmp1 = this->m_enabled;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(35)
	bool tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(35)
	bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(35)
	if ((tmp3)){
		HX_STACK_LINE(35)
		bool tmp4 = v;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(35)
		return tmp4;
	}
	HX_STACK_LINE(36)
	this->m_enabled = v;
	HX_STACK_LINE(37)
	{
		HX_STACK_LINE(37)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(37)
		Array< ::Dynamic > tmp4 = this->m_components;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(37)
		int _g = tmp4->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(37)
		while((true)){
			HX_STACK_LINE(37)
			bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(37)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(37)
			if ((tmp6)){
				HX_STACK_LINE(37)
				break;
			}
			HX_STACK_LINE(37)
			int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(37)
			int i = tmp7;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(39)
			Array< ::Dynamic > tmp8 = this->m_components;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(39)
			int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(39)
			::haxor::component::Component tmp10 = tmp8->__get(tmp9).StaticCast< ::haxor::component::Component >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(39)
			::haxor::component::Component c = tmp10;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(40)
			bool tmp11 = c->m_is_behaviour;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(40)
			if ((tmp11)){
				HX_STACK_LINE(42)
				::haxor::component::Behaviour b = ((::haxor::component::Behaviour)(c));		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(43)
				bool tmp12 = v;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(43)
				b->set_enabled(tmp12);
			}
		}
	}
	HX_STACK_LINE(46)
	bool tmp4 = v;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(46)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_enabled,return )

::haxor::component::Transform Entity_obj::get_transform( ){
	HX_STACK_FRAME("haxor.core.Entity","get_transform",0x2f07c91b,"haxor.core.Entity.get_transform","haxor/core/Entity.hx",54,0x47bf6bd8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(54)
	::haxor::component::Transform tmp = this->m_transform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_transform,return )

::haxor::component::Camera Entity_obj::get_camera( ){
	HX_STACK_FRAME("haxor.core.Entity","get_camera",0x97661796,"haxor.core.Entity.get_camera","haxor/core/Entity.hx",61,0x47bf6bd8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(61)
	Dynamic tmp = this->GetComponent(hx::ClassOf< ::haxor::component::Camera >());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	::haxor::component::Camera tmp1 = ((::haxor::component::Camera)(tmp));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(61)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_camera,return )

::haxor::component::DataComponent Entity_obj::get_data( ){
	HX_STACK_FRAME("haxor.core.Entity","get_data",0xbe7258db,"haxor.core.Entity.get_data","haxor/core/Entity.hx",68,0x47bf6bd8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(68)
	Dynamic tmp = this->GetComponent(hx::ClassOf< ::haxor::component::DataComponent >());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	::haxor::component::DataComponent tmp1 = ((::haxor::component::DataComponent)(tmp));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(68)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_data,return )

::haxor::component::animation::Animation Entity_obj::get_animation( ){
	HX_STACK_FRAME("haxor.core.Entity","get_animation",0x34a98ab3,"haxor.core.Entity.get_animation","haxor/core/Entity.hx",74,0x47bf6bd8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(74)
	Dynamic tmp = this->GetComponent(hx::ClassOf< ::haxor::component::animation::Animation >());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(74)
	::haxor::component::animation::Animation tmp1 = ((::haxor::component::animation::Animation)(tmp));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(74)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_animation,return )

::haxor::component::Renderer Entity_obj::get_renderer( ){
	HX_STACK_FRAME("haxor.core.Entity","get_renderer",0x99807474,"haxor.core.Entity.get_renderer","haxor/core/Entity.hx",80,0x47bf6bd8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(80)
	Dynamic tmp = this->GetComponent(hx::ClassOf< ::haxor::component::Renderer >());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(80)
	::haxor::component::Renderer tmp1 = ((::haxor::component::Renderer)(tmp));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(80)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_renderer,return )

::haxor::component::physics::RigidBody Entity_obj::get_rigidbody( ){
	HX_STACK_FRAME("haxor.core.Entity","get_rigidbody",0xda6f547c,"haxor.core.Entity.get_rigidbody","haxor/core/Entity.hx",86,0x47bf6bd8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(86)
	Dynamic tmp = this->GetComponent(hx::ClassOf< ::haxor::component::physics::RigidBody >());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(86)
	::haxor::component::physics::RigidBody tmp1 = ((::haxor::component::physics::RigidBody)(tmp));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(86)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_rigidbody,return )

int Entity_obj::get_layer( ){
	HX_STACK_FRAME("haxor.core.Entity","get_layer",0x80d3da00,"haxor.core.Entity.get_layer","haxor/core/Entity.hx",93,0x47bf6bd8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(93)
	int tmp = this->m_layer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(93)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_layer,return )

int Entity_obj::set_layer( int v){
	HX_STACK_FRAME("haxor.core.Entity","set_layer",0x6424c60c,"haxor.core.Entity.set_layer","haxor/core/Entity.hx",95,0x47bf6bd8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(96)
	bool tmp = (v <= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(96)
	if ((tmp)){
		HX_STACK_LINE(96)
		v = (int)1;
	}
	HX_STACK_LINE(97)
	int tmp1 = this->m_layer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(97)
	int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(97)
	bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(97)
	if ((tmp3)){
		HX_STACK_LINE(97)
		int tmp4 = v;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(97)
		return tmp4;
	}
	HX_STACK_LINE(98)
	int tmp4 = this->m_layer;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(98)
	int ll = tmp4;		HX_STACK_VAR(ll,"ll");
	HX_STACK_LINE(99)
	this->m_layer = v;
	HX_STACK_LINE(100)
	int tmp5 = ll;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(100)
	int tmp6 = this->m_layer;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(100)
	::haxor::context::EngineContext_obj::OnEntiyLayerChange(hx::ObjectPtr<OBJ_>(this),tmp5,tmp6);
	HX_STACK_LINE(101)
	int tmp7 = this->m_layer;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(101)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_layer,return )

Dynamic Entity_obj::AddComponent( ::hx::Class p_type){
	HX_STACK_FRAME("haxor.core.Entity","AddComponent",0x084559a4,"haxor.core.Entity.AddComponent","haxor/core/Entity.hx",136,0x47bf6bd8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_type,"p_type")
	HX_STACK_LINE(137)
	bool tmp = this->m_destroyed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(137)
	if ((tmp)){
		HX_STACK_LINE(137)
		return null();
	}
	HX_STACK_LINE(138)
	::haxor::component::Transform tmp1 = this->m_transform;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(138)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(138)
	if ((tmp2)){
		HX_STACK_LINE(138)
		bool tmp3 = (p_type == hx::ClassOf< ::haxor::component::Transform >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(138)
		if ((tmp3)){
			HX_STACK_LINE(138)
			::haxor::component::Transform tmp4 = this->m_transform;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(138)
			return tmp4;
		}
	}
	HX_STACK_LINE(139)
	::haxor::component::Component c = null();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(140)
	::hx::Class tmp3 = p_type;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(140)
	Dynamic tmp4 = Dynamic( Array_obj<Dynamic>::__new().Add(HX_HCSTRING("","\x00","\x00","\x00","\x00")));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(140)
	::haxor::component::Component tmp5 = ::Type_obj::createInstance(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(140)
	c = tmp5;
	HX_STACK_LINE(141)
	bool tmp6 = (c == null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(141)
	if ((tmp6)){
		HX_STACK_LINE(141)
		return null();
	}
	HX_STACK_LINE(142)
	c->m_entity = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(143)
	c->OnBuild();
	HX_STACK_LINE(144)
	bool tmp7 = c->m_is_behaviour;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(144)
	if ((tmp7)){
		HX_STACK_LINE(146)
		::haxor::component::Behaviour b = ((::haxor::component::Behaviour)(c));		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(147)
		bool tmp8 = this->m_enabled;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(147)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(147)
		if ((tmp8)){
			HX_STACK_LINE(147)
			bool tmp10 = this->m_destroyed;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(147)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(147)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(147)
			tmp9 = !(tmp12);
		}
		else{
			HX_STACK_LINE(147)
			tmp9 = false;
		}
		HX_STACK_LINE(147)
		b->set_enabled(tmp9);
	}
	HX_STACK_LINE(149)
	Array< ::Dynamic > tmp8 = this->m_components;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(149)
	::haxor::component::Component tmp9 = c;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(149)
	tmp8->push(tmp9);
	HX_STACK_LINE(150)
	::haxor::component::Component tmp10 = c;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(150)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,AddComponent,return )

Dynamic Entity_obj::GetComponent( ::hx::Class p_type){
	HX_STACK_FRAME("haxor.core.Entity","GetComponent",0x1847d48f,"haxor.core.Entity.GetComponent","haxor/core/Entity.hx",159,0x47bf6bd8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_type,"p_type")
	HX_STACK_LINE(160)
	{
		HX_STACK_LINE(160)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(160)
		Array< ::Dynamic > tmp = this->m_components;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(160)
		int _g = tmp->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(160)
		while((true)){
			HX_STACK_LINE(160)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(160)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(160)
			if ((tmp2)){
				HX_STACK_LINE(160)
				break;
			}
			HX_STACK_LINE(160)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(160)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(160)
			Array< ::Dynamic > tmp4 = this->m_components;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(160)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(160)
			::haxor::component::Component tmp6 = tmp4->__get(tmp5).StaticCast< ::haxor::component::Component >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(160)
			::hx::Class tmp7 = p_type;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(160)
			bool tmp8 = ::Std_obj::is(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(160)
			if ((tmp8)){
				HX_STACK_LINE(160)
				Array< ::Dynamic > tmp9 = this->m_components;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(160)
				int tmp10 = i;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(160)
				::haxor::component::Component tmp11 = tmp9->__get(tmp10).StaticCast< ::haxor::component::Component >();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(160)
				return tmp11;
			}
		}
	}
	HX_STACK_LINE(161)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,GetComponent,return )

Dynamic Entity_obj::GetComponents( ::hx::Class p_type){
	HX_STACK_FRAME("haxor.core.Entity","GetComponents",0x26922904,"haxor.core.Entity.GetComponents","haxor/core/Entity.hx",170,0x47bf6bd8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_type,"p_type")
	HX_STACK_LINE(171)
	Array< ::Dynamic > tmp = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(171)
	Array< ::Dynamic > res = tmp;		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(172)
	{
		HX_STACK_LINE(172)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(172)
		Array< ::Dynamic > tmp1 = this->m_components;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(172)
		int _g = tmp1->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(172)
		while((true)){
			HX_STACK_LINE(172)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(172)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(172)
			if ((tmp3)){
				HX_STACK_LINE(172)
				break;
			}
			HX_STACK_LINE(172)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(172)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(172)
			Array< ::Dynamic > tmp5 = this->m_components;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(172)
			int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(172)
			::haxor::component::Component tmp7 = tmp5->__get(tmp6).StaticCast< ::haxor::component::Component >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(172)
			::hx::Class tmp8 = p_type;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(172)
			bool tmp9 = ::Std_obj::is(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(172)
			if ((tmp9)){
				HX_STACK_LINE(172)
				Array< ::Dynamic > tmp10 = this->m_components;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(172)
				int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(172)
				::haxor::component::Component tmp12 = tmp10->__get(tmp11).StaticCast< ::haxor::component::Component >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(172)
				res->push(tmp12);
			}
		}
	}
	HX_STACK_LINE(173)
	Array< ::Dynamic > tmp1 = res;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(173)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,GetComponents,return )

Dynamic Entity_obj::GetComponentInChildren( ::hx::Class p_type){
	HX_STACK_FRAME("haxor.core.Entity","GetComponentInChildren",0xc729dfb3,"haxor.core.Entity.GetComponentInChildren","haxor/core/Entity.hx",182,0x47bf6bd8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_type,"p_type")
	HX_STACK_LINE(183)
	Array< ::Dynamic > tmp = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(183)
	Array< ::Dynamic > res = tmp;		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(184)
	Array< ::Dynamic > res1 = Array_obj< ::Dynamic >::__new().Add(null());		HX_STACK_VAR(res1,"res1");
	HX_STACK_LINE(185)
	::haxor::component::Transform tmp1 = this->m_transform;		HX_STACK_VAR(tmp1,"tmp1");

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,res1,::hx::Class,p_type)
	int __ArgCount() const { return 2; }
	bool run(::haxor::component::Transform t,int d){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxor/core/Entity.hx",186,0x47bf6bd8)
		HX_STACK_ARG(t,"t")
		HX_STACK_ARG(d,"d")
		{
			HX_STACK_LINE(187)
			bool tmp2 = (res1->__get((int)0).StaticCast< ::haxor::component::Component >() != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(187)
			if ((tmp2)){
				HX_STACK_LINE(187)
				return true;
			}
			HX_STACK_LINE(188)
			::hx::Class tmp3 = p_type;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(188)
			Dynamic tmp4 = t->m_entity->GetComponents(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(188)
			Dynamic l = tmp4;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(189)
			bool tmp5 = (l->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(189)
			if ((tmp5)){
				HX_STACK_LINE(189)
				Dynamic tmp6 = l->__GetItem((int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(189)
				res1[(int)0] = tmp6;
				HX_STACK_LINE(189)
				return true;
			}
			HX_STACK_LINE(190)
			return true;
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_STACK_LINE(185)
	tmp1->Traverse( Dynamic(new _Function_1_1(res1,p_type)));
	HX_STACK_LINE(192)
	::haxor::component::Component tmp2 = res1->__get((int)0).StaticCast< ::haxor::component::Component >();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(192)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,GetComponentInChildren,return )

Dynamic Entity_obj::GetComponentsInChildren( ::hx::Class p_type){
	HX_STACK_FRAME("haxor.core.Entity","GetComponentsInChildren",0x36cc3868,"haxor.core.Entity.GetComponentsInChildren","haxor/core/Entity.hx",201,0x47bf6bd8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_type,"p_type")
	HX_STACK_LINE(202)
	Dynamic tmp = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(202)
	Dynamic res = tmp;		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(203)
	::haxor::component::Transform tmp1 = this->m_transform;		HX_STACK_VAR(tmp1,"tmp1");

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,Dynamic,res,::hx::Class,p_type)
	int __ArgCount() const { return 2; }
	bool run(::haxor::component::Transform t,int d){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxor/core/Entity.hx",204,0x47bf6bd8)
		HX_STACK_ARG(t,"t")
		HX_STACK_ARG(d,"d")
		{
			HX_STACK_LINE(205)
			::hx::Class tmp2 = p_type;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(205)
			Dynamic tmp3 = t->m_entity->GetComponents(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(205)
			Dynamic l = tmp3;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(206)
			{
				HX_STACK_LINE(206)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(206)
				int _g = l->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(206)
				while((true)){
					HX_STACK_LINE(206)
					bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(206)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(206)
					if ((tmp5)){
						HX_STACK_LINE(206)
						break;
					}
					HX_STACK_LINE(206)
					int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(206)
					int i = tmp6;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(206)
					Dynamic tmp7 = l->__GetItem(i);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(206)
					res->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp7);
				}
			}
			HX_STACK_LINE(207)
			return true;
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_STACK_LINE(203)
	tmp1->Traverse( Dynamic(new _Function_1_1(res,p_type)));
	HX_STACK_LINE(209)
	Dynamic tmp2 = res;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(209)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,GetComponentsInChildren,return )

Void Entity_obj::OnDestroy( ){
{
		HX_STACK_FRAME("haxor.core.Entity","OnDestroy",0x6b6dc153,"haxor.core.Entity.OnDestroy","haxor/core/Entity.hx",216,0x47bf6bd8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(217)
		{
			HX_STACK_LINE(217)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(217)
			Array< ::Dynamic > tmp = this->m_components;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(217)
			int _g = tmp->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(217)
			while((true)){
				HX_STACK_LINE(217)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(217)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(217)
				if ((tmp2)){
					HX_STACK_LINE(217)
					break;
				}
				HX_STACK_LINE(217)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(217)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(219)
				Array< ::Dynamic > tmp4 = this->m_components;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(219)
				int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(219)
				::haxor::component::Component tmp6 = tmp4->__get(tmp5).StaticCast< ::haxor::component::Component >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(219)
				tmp6->OnDestroy();
			}
		}
		HX_STACK_LINE(221)
		this->m_components = null();
	}
return null();
}


::String Entity_obj::OnSerializeField( ::haxor::io::serialization::SerializedField p_field,::haxor::io::serialization::Formatter p_fmt){
	HX_STACK_FRAME("haxor.core.Entity","OnSerializeField",0xb28af381,"haxor.core.Entity.OnSerializeField","haxor/core/Entity.hx",231,0x47bf6bd8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_field,"p_field")
	HX_STACK_ARG(p_fmt,"p_fmt")
	HX_STACK_LINE(231)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Entity_obj,OnSerializeField,return )

bool Entity_obj::OnDeserializeField( ::haxor::io::serialization::SerializedField p_field,::haxor::io::serialization::Formatter p_fmt){
	HX_STACK_FRAME("haxor.core.Entity","OnDeserializeField",0xd38e0a82,"haxor.core.Entity.OnDeserializeField","haxor/core/Entity.hx",241,0x47bf6bd8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_field,"p_field")
	HX_STACK_ARG(p_fmt,"p_fmt")
	HX_STACK_LINE(242)
	::haxor::io::serialization::SerializedField mcf = p_field;		HX_STACK_VAR(mcf,"mcf");
	HX_STACK_LINE(243)
	{
		HX_STACK_LINE(243)
		::String _g = p_field->name;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(243)
		::String tmp = _g;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(243)
		::String _switch_1 = (tmp);
		if (  ( _switch_1==HX_HCSTRING("m_components","\xe8","\x2e","\x2a","\x2b"))){
			HX_STACK_LINE(247)
			Array< ::Dynamic > cnl = ((Array< ::Dynamic >)(mcf->value));		HX_STACK_VAR(cnl,"cnl");
			HX_STACK_LINE(248)
			{
				HX_STACK_LINE(248)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(248)
				int _g1 = cnl->length;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(248)
				while((true)){
					HX_STACK_LINE(248)
					bool tmp1 = (_g2 < _g1);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(248)
					bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(248)
					if ((tmp2)){
						HX_STACK_LINE(248)
						break;
					}
					HX_STACK_LINE(248)
					int tmp3 = (_g2)++;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(248)
					int i = tmp3;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(250)
					::haxor::io::serialization::SerializedData tmp4 = cnl->__get(i).StaticCast< ::haxor::io::serialization::SerializedData >();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(250)
					::haxor::io::serialization::SerializedData cn = tmp4;		HX_STACK_VAR(cn,"cn");
					HX_STACK_LINE(251)
					::String tmp5 = cn->type;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(251)
					::hx::Class tmp6 = ::Type_obj::resolveClass(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(251)
					::hx::Class ct = tmp6;		HX_STACK_VAR(ct,"ct");
					HX_STACK_LINE(252)
					bool tmp7 = (ct == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(252)
					if ((tmp7)){
						HX_STACK_LINE(252)
						continue;
					}
					HX_STACK_LINE(253)
					::hx::Class tmp8 = ct;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(253)
					Dynamic tmp9 = this->AddComponent(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(253)
					::haxor::component::Component c = tmp9;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(254)
					Array< ::Dynamic > cfl = cn->fields;		HX_STACK_VAR(cfl,"cfl");
					HX_STACK_LINE(255)
					{
						HX_STACK_LINE(255)
						int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(255)
						int _g3 = cfl->length;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(255)
						while((true)){
							HX_STACK_LINE(255)
							bool tmp10 = (_g4 < _g3);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(255)
							bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(255)
							if ((tmp11)){
								HX_STACK_LINE(255)
								break;
							}
							HX_STACK_LINE(255)
							int tmp12 = (_g4)++;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(255)
							int j = tmp12;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(257)
							::haxor::io::serialization::SerializedField tmp13 = cfl->__get(j).StaticCast< ::haxor::io::serialization::SerializedField >();		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(257)
							::haxor::io::serialization::SerializedField cf = tmp13;		HX_STACK_VAR(cf,"cf");
							HX_STACK_LINE(258)
							::haxor::io::serialization::SerializedField tmp14 = cf;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(258)
							::haxor::component::Component tmp15 = c;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(258)
							p_fmt->DeserializeField(tmp14,tmp15);
						}
					}
					HX_STACK_LINE(261)
					::haxor::component::Component tmp10 = c;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(261)
					bool tmp11 = ::Std_obj::is(tmp10,hx::ClassOf< ::haxor::component::Transform >());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(261)
					if ((tmp11)){
						HX_STACK_LINE(261)
						::haxor::component::Transform t = ((::haxor::component::Transform)(c));		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(261)
						t->set_parent(null());
					}
				}
			}
			HX_STACK_LINE(263)
			return true;
		}
	}
	HX_STACK_LINE(266)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(Entity_obj,OnDeserializeField,return )


Entity_obj::Entity_obj()
{
}

void Entity_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Entity);
	HX_MARK_MEMBER_NAME(m_enabled,"m_enabled");
	HX_MARK_MEMBER_NAME(transform,"transform");
	HX_MARK_MEMBER_NAME(m_transform,"m_transform");
	HX_MARK_MEMBER_NAME(m_layer,"m_layer");
	HX_MARK_MEMBER_NAME(m_components,"m_components");
	::haxor::core::Resource_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Entity_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_enabled,"m_enabled");
	HX_VISIT_MEMBER_NAME(transform,"transform");
	HX_VISIT_MEMBER_NAME(m_transform,"m_transform");
	HX_VISIT_MEMBER_NAME(m_layer,"m_layer");
	HX_VISIT_MEMBER_NAME(m_components,"m_components");
	::haxor::core::Resource_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Entity_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp == hx::paccAlways) return get_data(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"layer") ) { if (inCallProp == hx::paccAlways) return get_layer(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"camera") ) { if (inCallProp == hx::paccAlways) return get_camera(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { if (inCallProp == hx::paccAlways) return get_enabled(); }
		if (HX_FIELD_EQ(inName,"m_layer") ) { return m_layer; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_data") ) { return get_data_dyn(); }
		if (HX_FIELD_EQ(inName,"renderer") ) { if (inCallProp == hx::paccAlways) return get_renderer(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"m_enabled") ) { return m_enabled; }
		if (HX_FIELD_EQ(inName,"transform") ) { return inCallProp == hx::paccAlways ? get_transform() : transform; }
		if (HX_FIELD_EQ(inName,"animation") ) { if (inCallProp == hx::paccAlways) return get_animation(); }
		if (HX_FIELD_EQ(inName,"rigidbody") ) { if (inCallProp == hx::paccAlways) return get_rigidbody(); }
		if (HX_FIELD_EQ(inName,"get_layer") ) { return get_layer_dyn(); }
		if (HX_FIELD_EQ(inName,"set_layer") ) { return set_layer_dyn(); }
		if (HX_FIELD_EQ(inName,"OnDestroy") ) { return OnDestroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_camera") ) { return get_camera_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_enabled") ) { return get_enabled_dyn(); }
		if (HX_FIELD_EQ(inName,"set_enabled") ) { return set_enabled_dyn(); }
		if (HX_FIELD_EQ(inName,"m_transform") ) { return m_transform; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_renderer") ) { return get_renderer_dyn(); }
		if (HX_FIELD_EQ(inName,"m_components") ) { return m_components; }
		if (HX_FIELD_EQ(inName,"AddComponent") ) { return AddComponent_dyn(); }
		if (HX_FIELD_EQ(inName,"GetComponent") ) { return GetComponent_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_transform") ) { return get_transform_dyn(); }
		if (HX_FIELD_EQ(inName,"get_animation") ) { return get_animation_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rigidbody") ) { return get_rigidbody_dyn(); }
		if (HX_FIELD_EQ(inName,"GetComponents") ) { return GetComponents_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"OnSerializeField") ) { return OnSerializeField_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"OnDeserializeField") ) { return OnDeserializeField_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"GetComponentInChildren") ) { return GetComponentInChildren_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"GetComponentsInChildren") ) { return GetComponentsInChildren_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Entity_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"layer") ) { if (inCallProp == hx::paccAlways) return set_layer(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { if (inCallProp == hx::paccAlways) return set_enabled(inValue); }
		if (HX_FIELD_EQ(inName,"m_layer") ) { m_layer=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"m_enabled") ) { m_enabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"transform") ) { transform=inValue.Cast< ::haxor::component::Transform >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"m_transform") ) { m_transform=inValue.Cast< ::haxor::component::Transform >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"m_components") ) { m_components=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Entity_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Entity_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"));
	outFields->push(HX_HCSTRING("m_enabled","\x6f","\x13","\xb3","\x88"));
	outFields->push(HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"));
	outFields->push(HX_HCSTRING("m_transform","\xda","\x53","\xe9","\x7f"));
	outFields->push(HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("animation","\x04","\xef","\x34","\x4b"));
	outFields->push(HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"));
	outFields->push(HX_HCSTRING("rigidbody","\xcd","\xb8","\xfa","\xf0"));
	outFields->push(HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f"));
	outFields->push(HX_HCSTRING("m_layer","\x3f","\x59","\x4b","\x20"));
	outFields->push(HX_HCSTRING("m_components","\xe8","\x2e","\x2a","\x2b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Entity_obj,m_enabled),HX_HCSTRING("m_enabled","\x6f","\x13","\xb3","\x88")},
	{hx::fsObject /*::haxor::component::Transform*/ ,(int)offsetof(Entity_obj,transform),HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45")},
	{hx::fsObject /*::haxor::component::Transform*/ ,(int)offsetof(Entity_obj,m_transform),HX_HCSTRING("m_transform","\xda","\x53","\xe9","\x7f")},
	{hx::fsInt,(int)offsetof(Entity_obj,m_layer),HX_HCSTRING("m_layer","\x3f","\x59","\x4b","\x20")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Entity_obj,m_components),HX_HCSTRING("m_components","\xe8","\x2e","\x2a","\x2b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get_enabled","\x98","\x64","\x2b","\x04"),
	HX_HCSTRING("set_enabled","\xa4","\x6b","\x98","\x0e"),
	HX_HCSTRING("m_enabled","\x6f","\x13","\xb3","\x88"),
	HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"),
	HX_HCSTRING("get_transform","\x43","\x01","\xf7","\x06"),
	HX_HCSTRING("m_transform","\xda","\x53","\xe9","\x7f"),
	HX_HCSTRING("get_camera","\x6e","\xb6","\x13","\xa8"),
	HX_HCSTRING("get_data","\xb3","\x11","\x1e","\xc2"),
	HX_HCSTRING("get_animation","\xdb","\xc2","\x98","\x0c"),
	HX_HCSTRING("get_renderer","\x4c","\x79","\xf5","\x67"),
	HX_HCSTRING("get_rigidbody","\xa4","\x8c","\x5e","\xb2"),
	HX_HCSTRING("get_layer","\x28","\xde","\x69","\xb3"),
	HX_HCSTRING("set_layer","\x34","\xca","\xba","\x96"),
	HX_HCSTRING("m_layer","\x3f","\x59","\x4b","\x20"),
	HX_HCSTRING("m_components","\xe8","\x2e","\x2a","\x2b"),
	HX_HCSTRING("AddComponent","\x7c","\x5e","\xba","\xd6"),
	HX_HCSTRING("GetComponent","\x67","\xd9","\xbc","\xe6"),
	HX_HCSTRING("GetComponents","\x2c","\x61","\x81","\xfe"),
	HX_HCSTRING("GetComponentInChildren","\x8b","\x62","\x36","\x4f"),
	HX_HCSTRING("GetComponentsInChildren","\x90","\x32","\xb2","\xb9"),
	HX_HCSTRING("OnDestroy","\x7b","\xc5","\x03","\x9e"),
	HX_HCSTRING("OnSerializeField","\x59","\x44","\x5f","\x58"),
	HX_HCSTRING("OnDeserializeField","\x5a","\x41","\xba","\xd3"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Entity_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Entity_obj::__mClass,"__mClass");
};

#endif

hx::Class Entity_obj::__mClass;

void Entity_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.core.Entity","\x46","\x9e","\xc5","\x34");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Entity_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Entity_obj >;
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

void Entity_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/core/Entity.hx",23,0x47bf6bd8)
		{
			hx::Anon __result = hx::Anon_obj::Create();
			struct _Function_1_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/core/Entity.hx",23,0x47bf6bd8)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						struct _Function_2_1{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/core/Entity.hx",23,0x47bf6bd8)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e") , _Function_2_1::Block(),false);
						struct _Function_2_2{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/core/Entity.hx",23,0x47bf6bd8)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f") , _Function_2_2::Block(),false);
						struct _Function_2_3{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/core/Entity.hx",23,0x47bf6bd8)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("m_components","\xe8","\x2e","\x2a","\x2b") , _Function_2_3::Block(),false);
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
} // end namespace core
