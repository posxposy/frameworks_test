#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxor_component_Behaviour
#include <haxor/component/Behaviour.h>
#endif
#ifndef INCLUDED_haxor_component_Component
#include <haxor/component/Component.h>
#endif
#ifndef INCLUDED_haxor_component_Transform
#include <haxor/component/Transform.h>
#endif
#ifndef INCLUDED_haxor_context_BaseProcess
#include <haxor/context/BaseProcess.h>
#endif
#ifndef INCLUDED_haxor_context_EngineContext
#include <haxor/context/EngineContext.h>
#endif
#ifndef INCLUDED_haxor_context_Process
#include <haxor/context/Process.h>
#endif
#ifndef INCLUDED_haxor_core_Application
#include <haxor/core/Application.h>
#endif
#ifndef INCLUDED_haxor_core_Asset
#include <haxor/core/Asset.h>
#endif
#ifndef INCLUDED_haxor_core_BaseApplication
#include <haxor/core/BaseApplication.h>
#endif
#ifndef INCLUDED_haxor_core_Console
#include <haxor/core/Console.h>
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
#ifndef INCLUDED_haxor_io_serialization_Formatter
#include <haxor/io/serialization/Formatter.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_ISerializable
#include <haxor/io/serialization/ISerializable.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_haxor_HaxorFormatter
#include <haxor/io/serialization/haxor/HaxorFormatter.h>
#endif
#ifndef INCLUDED_haxor_platform_windows_WinApplication
#include <haxor/platform/windows/WinApplication.h>
#endif
namespace haxor{
namespace core{

Void Resource_obj::__construct(::String __o_p_name)
{
HX_STACK_FRAME("haxor.core.Resource","new",0x26988423,"haxor.core.Resource.new","haxor/core/Resource.hx",183,0x735dd04d)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_p_name,"p_name")
::String p_name = __o_p_name.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(184)
	::String tmp = ::haxor::core::Resource_obj::GenerateGUID();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(184)
	this->m_guid = tmp;
	HX_STACK_LINE(185)
	int tmp1 = (::haxor::context::EngineContext_obj::uid)++;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(185)
	this->m_uid = tmp1;
	HX_STACK_LINE(186)
	this->m_destroyed = false;
	HX_STACK_LINE(187)
	this->__cid = (int)0;
	HX_STACK_LINE(188)
	this->__db = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(189)
	Array< int > tmp2 = Array_obj< int >::__new().Add((int)-1).Add((int)-1).Add((int)-1).Add((int)-1).Add((int)-1).Add((int)-1).Add((int)-1).Add((int)-1).Add((int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(189)
	this->__pid = tmp2;
	HX_STACK_LINE(190)
	this->m_name = p_name;
	HX_STACK_LINE(192)
	bool tmp3 = ::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::haxor::component::Behaviour >());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(192)
	this->m_is_behaviour = tmp3;
	HX_STACK_LINE(195)
	::hx::Class tmp4 = ::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(195)
	this->m_type_class = tmp4;
	HX_STACK_LINE(196)
	::hx::Class tmp5 = this->m_type_class;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(196)
	::String tmp6 = ::Type_obj::getClassName(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(196)
	this->m_type_full_name = tmp6;
	HX_STACK_LINE(197)
	::String tmp7 = this->m_type_full_name;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(197)
	Array< ::String > tmp8 = tmp7.split(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(197)
	Array< ::String > nt = tmp8;		HX_STACK_VAR(nt,"nt");
	HX_STACK_LINE(197)
	nt->reverse();
	HX_STACK_LINE(198)
	::String tmp9 = nt->__get((int)0);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(198)
	this->m_type_name = tmp9;
	HX_STACK_LINE(200)
	bool tmp10 = (p_name == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(200)
	::String tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(200)
	if ((tmp10)){
		HX_STACK_LINE(200)
		::String tmp12 = this->m_type_name;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(200)
		int tmp13 = this->m_uid;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(200)
		tmp11 = (tmp12 + tmp13);
	}
	else{
		HX_STACK_LINE(200)
		tmp11 = p_name;
	}
	HX_STACK_LINE(200)
	this->m_name = tmp11;
	HX_STACK_LINE(202)
	::haxor::context::Process tmp12 = ::haxor::context::EngineContext_obj::resources;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(202)
	tmp12->Add(hx::ObjectPtr<OBJ_>(this));
}
;
	return null();
}

//Resource_obj::~Resource_obj() { }

Dynamic Resource_obj::__CreateEmpty() { return  new Resource_obj; }
hx::ObjectPtr< Resource_obj > Resource_obj::__new(::String __o_p_name)
{  hx::ObjectPtr< Resource_obj > _result_ = new Resource_obj();
	_result_->__construct(__o_p_name);
	return _result_;}

Dynamic Resource_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Resource_obj > _result_ = new Resource_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *Resource_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxor::core::IDisposable_obj)) return operator ::haxor::core::IDisposable_obj *();
	return super::__ToInterface(inType);
}

Resource_obj::operator ::haxor::core::IDisposable_obj *()
	{ return new ::haxor::core::IDisposable_delegate_< Resource_obj >(this); }
::haxor::core::Application Resource_obj::get_application( ){
	HX_STACK_FRAME("haxor.core.Resource","get_application",0x20c52f2a,"haxor.core.Resource.get_application","haxor/core/Resource.hx",105,0x735dd04d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(105)
	::haxor::core::BaseApplication tmp = ::haxor::core::BaseApplication_obj::m_instance;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(105)
	::haxor::core::Application tmp1 = ((::haxor::core::Application)(tmp));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(105)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Resource_obj,get_application,return )

::String Resource_obj::get_guid( ){
	HX_STACK_FRAME("haxor.core.Resource","get_guid",0x4092a26f,"haxor.core.Resource.get_guid","haxor/core/Resource.hx",113,0x735dd04d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(113)
	::String tmp = this->m_guid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(113)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Resource_obj,get_guid,return )

::String Resource_obj::set_guid( ::String v){
	HX_STACK_FRAME("haxor.core.Resource","set_guid",0xeeeffbe3,"haxor.core.Resource.set_guid","haxor/core/Resource.hx",114,0x735dd04d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(114)
	bool tmp = (v == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(114)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(114)
	if ((tmp)){
		HX_STACK_LINE(114)
		tmp1 = ::haxor::core::Resource_obj::GenerateGUID();
	}
	else{
		HX_STACK_LINE(114)
		tmp1 = v;
	}
	HX_STACK_LINE(114)
	::String tmp2 = this->m_guid = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(114)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Resource_obj,set_guid,return )

int Resource_obj::get_uid( ){
	HX_STACK_FRAME("haxor.core.Resource","get_uid",0xc00b3d6a,"haxor.core.Resource.get_uid","haxor/core/Resource.hx",122,0x735dd04d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(122)
	int tmp = this->m_uid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(122)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Resource_obj,get_uid,return )

::String Resource_obj::get_name( ){
	HX_STACK_FRAME("haxor.core.Resource","get_name",0x4523f731,"haxor.core.Resource.get_name","haxor/core/Resource.hx",130,0x735dd04d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(130)
	::String tmp = this->m_name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(130)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Resource_obj,get_name,return )

::String Resource_obj::set_name( ::String v){
	HX_STACK_FRAME("haxor.core.Resource","set_name",0xf38150a5,"haxor.core.Resource.set_name","haxor/core/Resource.hx",131,0x735dd04d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(131)
	this->m_name = v;
	HX_STACK_LINE(131)
	::String tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(131)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Resource_obj,set_name,return )

bool Resource_obj::get_destroyed( ){
	HX_STACK_FRAME("haxor.core.Resource","get_destroyed",0x87393133,"haxor.core.Resource.get_destroyed","haxor/core/Resource.hx",138,0x735dd04d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(138)
	bool tmp = this->m_destroyed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(138)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Resource_obj,get_destroyed,return )

::hx::Class Resource_obj::GetType( ){
	HX_STACK_FRAME("haxor.core.Resource","GetType",0x861a1b93,"haxor.core.Resource.GetType","haxor/core/Resource.hx",209,0x735dd04d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(209)
	::hx::Class tmp = this->m_type_class;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(209)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Resource_obj,GetType,return )

::String Resource_obj::GetTypeName( ){
	HX_STACK_FRAME("haxor.core.Resource","GetTypeName",0x44837f7e,"haxor.core.Resource.GetTypeName","haxor/core/Resource.hx",215,0x735dd04d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(215)
	::String tmp = this->m_type_name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(215)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Resource_obj,GetTypeName,return )

::String Resource_obj::GetTypeFullName( ){
	HX_STACK_FRAME("haxor.core.Resource","GetTypeFullName",0xfd911e2d,"haxor.core.Resource.GetTypeFullName","haxor/core/Resource.hx",221,0x735dd04d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(221)
	::String tmp = this->m_type_full_name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(221)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Resource_obj,GetTypeFullName,return )

Void Resource_obj::OnDestroy( ){
{
		HX_STACK_FRAME("haxor.core.Resource","OnDestroy",0xfe2a2d7e,"haxor.core.Resource.OnDestroy","haxor/core/Resource.hx",226,0x735dd04d)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Resource_obj,OnDestroy,(void))

Dynamic Resource_obj::Instantiate( ::haxor::core::Resource p_resource){
	HX_STACK_FRAME("haxor.core.Resource","Instantiate",0x5e5d094d,"haxor.core.Resource.Instantiate","haxor/core/Resource.hx",24,0x735dd04d)
	HX_STACK_ARG(p_resource,"p_resource")
	HX_STACK_LINE(25)
	bool tmp = p_resource->m_destroyed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	if ((tmp)){
		HX_STACK_LINE(25)
		{
			HX_STACK_LINE(25)
			int p_level = (int)0;		HX_STACK_VAR(p_level,"p_level");
			HX_STACK_LINE(25)
			int tmp1 = ::haxor::core::Console_obj::verbose;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(25)
			int tmp2 = p_level;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(25)
			bool tmp3 = (tmp1 >= tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(25)
			if ((tmp3)){
				HX_STACK_LINE(25)
				::String tmp4 = HX_HCSTRING("Resource> Trying to instantiate a destroyed asset!","\xc9","\x03","\xe0","\xbe");		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(25)
				::String tmp5 = (HX_HCSTRING("[W] ","\xbf","\xbf","\x68","\x3c") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(25)
				::cpp::Lib_obj::println(tmp5);
			}
		}
		HX_STACK_LINE(25)
		return null();
	}
	HX_STACK_LINE(26)
	::haxor::io::serialization::haxor::HaxorFormatter tmp1 = ::haxor::io::serialization::haxor::HaxorFormatter_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	::haxor::io::serialization::haxor::HaxorFormatter fmt = tmp1;		HX_STACK_VAR(fmt,"fmt");
	HX_STACK_LINE(27)
	::haxor::core::Resource tmp2 = p_resource;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(27)
	bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::haxor::component::Component >());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(27)
	if ((tmp3)){
		HX_STACK_LINE(29)
		::haxor::component::Component c = ((::haxor::component::Component)(p_resource));		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(30)
		::haxor::core::Entity tmp4 = c->m_entity;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(30)
		::haxor::io::serialization::haxor::HaxorFormatter tmp5 = fmt;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(30)
		::haxor::core::Entity tmp6 = ::haxor::core::Resource_obj::InstantiateStep(null(),tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(30)
		::haxor::core::Entity e = tmp6;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(31)
		::haxor::component::Component tmp7 = c;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(31)
		::hx::Class tmp8 = ::Type_obj::getClass(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(31)
		Dynamic tmp9 = e->GetComponent(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(31)
		return tmp9;
	}
	HX_STACK_LINE(33)
	::haxor::core::Resource tmp4 = p_resource;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(33)
	bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::haxor::core::Entity >());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(33)
	if ((tmp5)){
		HX_STACK_LINE(33)
		::haxor::core::Entity tmp6 = ((::haxor::core::Entity)(p_resource));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(33)
		::haxor::io::serialization::haxor::HaxorFormatter tmp7 = fmt;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(33)
		::haxor::core::Entity tmp8 = ::haxor::core::Resource_obj::InstantiateStep(null(),tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(33)
		return tmp8;
	}
	HX_STACK_LINE(34)
	::haxor::core::Resource tmp6 = p_resource;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(34)
	::String tmp7 = fmt->Serialize(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(34)
	Dynamic tmp8 = fmt->Deserialize(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(34)
	::haxor::core::Resource res = tmp8;		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(35)
	::String tmp9 = res->get_name();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(35)
	::String tmp10 = (tmp9 + HX_HCSTRING("-clone","\x10","\x50","\x72","\x46"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(35)
	res->set_name(tmp10);
	HX_STACK_LINE(36)
	bool tmp11 = true;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(36)
	::String tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(36)
	if ((tmp11)){
		HX_STACK_LINE(36)
		tmp12 = ::haxor::core::Resource_obj::GenerateGUID();
	}
	else{
		HX_STACK_LINE(36)
		tmp12 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	HX_STACK_LINE(36)
	res->m_guid = tmp12;
	HX_STACK_LINE(37)
	::haxor::core::Resource tmp13 = res;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(37)
	return tmp13;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Resource_obj,Instantiate,return )

::haxor::core::Entity Resource_obj::InstantiateStep( ::haxor::core::Entity p,::haxor::core::Entity e,::haxor::io::serialization::haxor::HaxorFormatter f){
	HX_STACK_FRAME("haxor.core.Resource","InstantiateStep",0x79254739,"haxor.core.Resource.InstantiateStep","haxor/core/Resource.hx",47,0x735dd04d)
	HX_STACK_ARG(p,"p")
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(48)
	::haxor::core::Entity tmp = e;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	::String tmp1 = f->Serialize(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(48)
	Dynamic tmp2 = f->Deserialize(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(48)
	::haxor::core::Entity ne = tmp2;		HX_STACK_VAR(ne,"ne");
	HX_STACK_LINE(49)
	bool tmp3 = true;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(49)
	::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(49)
	if ((tmp3)){
		HX_STACK_LINE(49)
		tmp4 = ::haxor::core::Resource_obj::GenerateGUID();
	}
	else{
		HX_STACK_LINE(49)
		tmp4 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	HX_STACK_LINE(49)
	ne->m_guid = tmp4;
	HX_STACK_LINE(50)
	{
		HX_STACK_LINE(50)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(50)
		int tmp5 = ne->m_components->length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(50)
		int _g = tmp5;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(50)
		while((true)){
			HX_STACK_LINE(50)
			bool tmp6 = (_g1 < _g);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(50)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(50)
			if ((tmp7)){
				HX_STACK_LINE(50)
				break;
			}
			HX_STACK_LINE(50)
			int tmp8 = (_g1)++;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(50)
			int i = tmp8;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(50)
			bool tmp9 = true;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(50)
			::String tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(50)
			if ((tmp9)){
				HX_STACK_LINE(50)
				tmp10 = ::haxor::core::Resource_obj::GenerateGUID();
			}
			else{
				HX_STACK_LINE(50)
				tmp10 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			}
			HX_STACK_LINE(50)
			::haxor::component::Component tmp11 = ne->m_components->__get(i).StaticCast< ::haxor::component::Component >();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(50)
			tmp11->m_guid = tmp10;
		}
	}
	HX_STACK_LINE(51)
	bool tmp5 = (p == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(51)
	::haxor::component::Transform tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(51)
	if ((tmp5)){
		HX_STACK_LINE(51)
		tmp6 = e->m_transform->m_parent;
	}
	else{
		HX_STACK_LINE(51)
		tmp6 = p->m_transform;
	}
	HX_STACK_LINE(51)
	ne->m_transform->set_parent(tmp6);
	HX_STACK_LINE(52)
	{
		HX_STACK_LINE(52)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(52)
		Array< ::Dynamic > tmp7 = e->m_transform->m_hierarchy;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(52)
		int _g = tmp7->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(52)
		while((true)){
			HX_STACK_LINE(52)
			bool tmp8 = (_g1 < _g);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(52)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(52)
			if ((tmp9)){
				HX_STACK_LINE(52)
				break;
			}
			HX_STACK_LINE(52)
			int tmp10 = (_g1)++;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(52)
			int i = tmp10;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(54)
			::haxor::core::Entity tmp11 = ne;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(54)
			::haxor::core::Entity tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(54)
			{
				HX_STACK_LINE(54)
				int tmp13 = i;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(54)
				::haxor::component::Transform tmp14 = e->m_transform->GetChild(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(54)
				::haxor::component::Transform _this = tmp14;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(54)
				tmp12 = _this->m_entity;
			}
			HX_STACK_LINE(54)
			::haxor::io::serialization::haxor::HaxorFormatter tmp13 = f;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(54)
			::haxor::core::Resource_obj::InstantiateStep(tmp11,tmp12,tmp13);
		}
	}
	HX_STACK_LINE(56)
	::haxor::core::Entity tmp7 = e;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(56)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Resource_obj,InstantiateStep,return )

Void Resource_obj::Destroy( ::haxor::core::Resource p_target){
{
		HX_STACK_FRAME("haxor.core.Resource","Destroy",0x8b14a61d,"haxor.core.Resource.Destroy","haxor/core/Resource.hx",63,0x735dd04d)
		HX_STACK_ARG(p_target,"p_target")
		HX_STACK_LINE(63)
		bool tmp = (p_target->__db != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(63)
		if ((tmp)){
			HX_STACK_LINE(63)
			::String tmp1 = p_target->__db;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(63)
			::haxor::core::Asset_obj::Remove(tmp1);
		}
		HX_STACK_LINE(63)
		::haxor::core::Resource tmp1 = p_target;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(63)
		::haxor::context::EngineContext_obj::Destroy(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Resource_obj,Destroy,(void))

::haxor::core::Resource Resource_obj::FindByGUID( ::String p_guid){
	HX_STACK_FRAME("haxor.core.Resource","FindByGUID",0xeb1dc6b6,"haxor.core.Resource.FindByGUID","haxor/core/Resource.hx",70,0x735dd04d)
	HX_STACK_ARG(p_guid,"p_guid")
	HX_STACK_LINE(70)
	::String tmp = p_guid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(70)
	::haxor::core::Resource tmp1 = ::haxor::context::EngineContext_obj::FindByGUID(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(70)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Resource_obj,FindByGUID,return )

::String Resource_obj::GenerateGUID( ){
	HX_STACK_FRAME("haxor.core.Resource","GenerateGUID",0x5b020b3b,"haxor.core.Resource.GenerateGUID","haxor/core/Resource.hx",80,0x735dd04d)
	HX_STACK_LINE(84)
	Float tmp = ::Math_obj::random();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(84)
	Float tmp1 = (tmp * (int)268435455);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(84)
	int tmp2 = ::Math_obj::floor(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(84)
	int d = tmp2;		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(86)
	Float tmp3 = ::Math_obj::random();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(86)
	Float tmp4 = (tmp3 * (int)268435455);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(86)
	int tmp5 = ::Math_obj::floor(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(86)
	int r0 = tmp5;		HX_STACK_VAR(r0,"r0");
	HX_STACK_LINE(87)
	Float tmp6 = ::Math_obj::random();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(87)
	Float tmp7 = (tmp6 * (int)268435455);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(87)
	int tmp8 = ::Math_obj::floor(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(87)
	int r1 = tmp8;		HX_STACK_VAR(r1,"r1");
	HX_STACK_LINE(88)
	Float tmp9 = ::Math_obj::random();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(88)
	Float tmp10 = (tmp9 * (int)268435455);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(88)
	int tmp11 = ::Math_obj::floor(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(88)
	int r2 = tmp11;		HX_STACK_VAR(r2,"r2");
	HX_STACK_LINE(89)
	Float tmp12 = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(89)
	int tmp13 = ::Math_obj::floor(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(89)
	int t = tmp13;		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(90)
	int tmp14 = (r0 + t);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(90)
	::String tmp15 = ::StringTools_obj::hex(tmp14,(int)6);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(90)
	::String b0 = tmp15;		HX_STACK_VAR(b0,"b0");
	HX_STACK_LINE(91)
	int tmp16 = r1;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(91)
	::String tmp17 = ::StringTools_obj::hex(tmp16,(int)4);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(91)
	::String b1 = tmp17;		HX_STACK_VAR(b1,"b1");
	HX_STACK_LINE(92)
	int tmp18 = r2;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(92)
	::String tmp19 = ::StringTools_obj::hex(tmp18,(int)6);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(92)
	::String b2 = tmp19;		HX_STACK_VAR(b2,"b2");
	HX_STACK_LINE(93)
	int tmp20 = d;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(93)
	::String tmp21 = ::StringTools_obj::hex(tmp20,(int)8);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(93)
	::String b3 = tmp21;		HX_STACK_VAR(b3,"b3");
	HX_STACK_LINE(94)
	int tmp22 = (b0.length - (int)6);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(94)
	::String tmp23 = b0.substr(tmp22,(int)6);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(94)
	b0 = tmp23;
	HX_STACK_LINE(95)
	int tmp24 = (b1.length - (int)4);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(95)
	::String tmp25 = b1.substr(tmp24,(int)4);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(95)
	b1 = tmp25;
	HX_STACK_LINE(96)
	int tmp26 = (b2.length - (int)6);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(96)
	::String tmp27 = b2.substr(tmp26,(int)6);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(96)
	b2 = tmp27;
	HX_STACK_LINE(97)
	int tmp28 = (b3.length - (int)8);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(97)
	::String tmp29 = b3.substr(tmp28,(int)8);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(97)
	b3 = tmp29;
	HX_STACK_LINE(98)
	::String tmp30 = (b0 + b1);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(98)
	::String tmp31 = b2;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(98)
	::String tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(98)
	::String tmp33 = b3;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(98)
	::String tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(98)
	::String tmp35 = tmp34.toLowerCase();		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(98)
	return tmp35;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Resource_obj,GenerateGUID,return )


Resource_obj::Resource_obj()
{
}

void Resource_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Resource);
	HX_MARK_MEMBER_NAME(application,"application");
	HX_MARK_MEMBER_NAME(m_guid,"m_guid");
	HX_MARK_MEMBER_NAME(uid,"uid");
	HX_MARK_MEMBER_NAME(m_uid,"m_uid");
	HX_MARK_MEMBER_NAME(m_name,"m_name");
	HX_MARK_MEMBER_NAME(destroyed,"destroyed");
	HX_MARK_MEMBER_NAME(m_destroyed,"m_destroyed");
	HX_MARK_MEMBER_NAME(__cid,"__cid");
	HX_MARK_MEMBER_NAME(__db,"__db");
	HX_MARK_MEMBER_NAME(__pid,"__pid");
	HX_MARK_MEMBER_NAME(m_type_name,"m_type_name");
	HX_MARK_MEMBER_NAME(m_type_full_name,"m_type_full_name");
	HX_MARK_MEMBER_NAME(m_type_class,"m_type_class");
	HX_MARK_MEMBER_NAME(m_is_behaviour,"m_is_behaviour");
	HX_MARK_END_CLASS();
}

void Resource_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(application,"application");
	HX_VISIT_MEMBER_NAME(m_guid,"m_guid");
	HX_VISIT_MEMBER_NAME(uid,"uid");
	HX_VISIT_MEMBER_NAME(m_uid,"m_uid");
	HX_VISIT_MEMBER_NAME(m_name,"m_name");
	HX_VISIT_MEMBER_NAME(destroyed,"destroyed");
	HX_VISIT_MEMBER_NAME(m_destroyed,"m_destroyed");
	HX_VISIT_MEMBER_NAME(__cid,"__cid");
	HX_VISIT_MEMBER_NAME(__db,"__db");
	HX_VISIT_MEMBER_NAME(__pid,"__pid");
	HX_VISIT_MEMBER_NAME(m_type_name,"m_type_name");
	HX_VISIT_MEMBER_NAME(m_type_full_name,"m_type_full_name");
	HX_VISIT_MEMBER_NAME(m_type_class,"m_type_class");
	HX_VISIT_MEMBER_NAME(m_is_behaviour,"m_is_behaviour");
}

Dynamic Resource_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"uid") ) { return inCallProp == hx::paccAlways ? get_uid() : uid; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"guid") ) { if (inCallProp == hx::paccAlways) return get_guid(); }
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == hx::paccAlways) return get_name(); }
		if (HX_FIELD_EQ(inName,"__db") ) { return __db; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"m_uid") ) { return m_uid; }
		if (HX_FIELD_EQ(inName,"__cid") ) { return __cid; }
		if (HX_FIELD_EQ(inName,"__pid") ) { return __pid; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_guid") ) { return m_guid; }
		if (HX_FIELD_EQ(inName,"m_name") ) { return m_name; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_uid") ) { return get_uid_dyn(); }
		if (HX_FIELD_EQ(inName,"GetType") ) { return GetType_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_guid") ) { return get_guid_dyn(); }
		if (HX_FIELD_EQ(inName,"set_guid") ) { return set_guid_dyn(); }
		if (HX_FIELD_EQ(inName,"get_name") ) { return get_name_dyn(); }
		if (HX_FIELD_EQ(inName,"set_name") ) { return set_name_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"destroyed") ) { return inCallProp == hx::paccAlways ? get_destroyed() : destroyed; }
		if (HX_FIELD_EQ(inName,"OnDestroy") ) { return OnDestroy_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"application") ) { return inCallProp == hx::paccAlways ? get_application() : application; }
		if (HX_FIELD_EQ(inName,"m_destroyed") ) { return m_destroyed; }
		if (HX_FIELD_EQ(inName,"m_type_name") ) { return m_type_name; }
		if (HX_FIELD_EQ(inName,"GetTypeName") ) { return GetTypeName_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"m_type_class") ) { return m_type_class; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_destroyed") ) { return get_destroyed_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"m_is_behaviour") ) { return m_is_behaviour; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_application") ) { return get_application_dyn(); }
		if (HX_FIELD_EQ(inName,"GetTypeFullName") ) { return GetTypeFullName_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"m_type_full_name") ) { return m_type_full_name; }
	}
	return super::__Field(inName,inCallProp);
}

bool Resource_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"Destroy") ) { outValue = Destroy_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"FindByGUID") ) { outValue = FindByGUID_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"Instantiate") ) { outValue = Instantiate_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"GenerateGUID") ) { outValue = GenerateGUID_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"InstantiateStep") ) { outValue = InstantiateStep_dyn(); return true;  }
	}
	return false;
}

Dynamic Resource_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"uid") ) { uid=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"guid") ) { if (inCallProp == hx::paccAlways) return set_guid(inValue); }
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == hx::paccAlways) return set_name(inValue); }
		if (HX_FIELD_EQ(inName,"__db") ) { __db=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"m_uid") ) { m_uid=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cid") ) { __cid=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__pid") ) { __pid=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_guid") ) { m_guid=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_name") ) { m_name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"destroyed") ) { destroyed=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"application") ) { application=inValue.Cast< ::haxor::core::Application >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_destroyed") ) { m_destroyed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_type_name") ) { m_type_name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"m_type_class") ) { m_type_class=inValue.Cast< ::hx::Class >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"m_is_behaviour") ) { m_is_behaviour=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"m_type_full_name") ) { m_type_full_name=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Resource_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Resource_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("application","\x50","\xab","\x3e","\x2a"));
	outFields->push(HX_HCSTRING("guid","\x89","\x1d","\x6e","\x44"));
	outFields->push(HX_HCSTRING("m_guid","\xdb","\x8d","\x65","\x8c"));
	outFields->push(HX_HCSTRING("uid","\x90","\x23","\x59","\x00"));
	outFields->push(HX_HCSTRING("m_uid","\x7e","\xa3","\xd1","\x01"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("m_name","\x9d","\xe2","\xf6","\x90"));
	outFields->push(HX_HCSTRING("destroyed","\xd9","\x37","\x27","\xf4"));
	outFields->push(HX_HCSTRING("m_destroyed","\x47","\x5e","\x7d","\x2e"));
	outFields->push(HX_HCSTRING("__cid","\xde","\xdb","\x27","\xf2"));
	outFields->push(HX_HCSTRING("__db","\x9e","\xb2","\x13","\x3f"));
	outFields->push(HX_HCSTRING("__pid","\x2b","\xb9","\x31","\xf2"));
	outFields->push(HX_HCSTRING("m_type_name","\x9e","\x9f","\x11","\x68"));
	outFields->push(HX_HCSTRING("m_type_full_name","\x08","\x44","\x71","\x24"));
	outFields->push(HX_HCSTRING("m_type_class","\x85","\xf3","\x2d","\x59"));
	outFields->push(HX_HCSTRING("m_is_behaviour","\xba","\xa4","\xf7","\x32"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::core::Application*/ ,(int)offsetof(Resource_obj,application),HX_HCSTRING("application","\x50","\xab","\x3e","\x2a")},
	{hx::fsString,(int)offsetof(Resource_obj,m_guid),HX_HCSTRING("m_guid","\xdb","\x8d","\x65","\x8c")},
	{hx::fsInt,(int)offsetof(Resource_obj,uid),HX_HCSTRING("uid","\x90","\x23","\x59","\x00")},
	{hx::fsInt,(int)offsetof(Resource_obj,m_uid),HX_HCSTRING("m_uid","\x7e","\xa3","\xd1","\x01")},
	{hx::fsString,(int)offsetof(Resource_obj,m_name),HX_HCSTRING("m_name","\x9d","\xe2","\xf6","\x90")},
	{hx::fsBool,(int)offsetof(Resource_obj,destroyed),HX_HCSTRING("destroyed","\xd9","\x37","\x27","\xf4")},
	{hx::fsBool,(int)offsetof(Resource_obj,m_destroyed),HX_HCSTRING("m_destroyed","\x47","\x5e","\x7d","\x2e")},
	{hx::fsInt,(int)offsetof(Resource_obj,__cid),HX_HCSTRING("__cid","\xde","\xdb","\x27","\xf2")},
	{hx::fsString,(int)offsetof(Resource_obj,__db),HX_HCSTRING("__db","\x9e","\xb2","\x13","\x3f")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Resource_obj,__pid),HX_HCSTRING("__pid","\x2b","\xb9","\x31","\xf2")},
	{hx::fsString,(int)offsetof(Resource_obj,m_type_name),HX_HCSTRING("m_type_name","\x9e","\x9f","\x11","\x68")},
	{hx::fsString,(int)offsetof(Resource_obj,m_type_full_name),HX_HCSTRING("m_type_full_name","\x08","\x44","\x71","\x24")},
	{hx::fsObject /*::hx::Class*/ ,(int)offsetof(Resource_obj,m_type_class),HX_HCSTRING("m_type_class","\x85","\xf3","\x2d","\x59")},
	{hx::fsBool,(int)offsetof(Resource_obj,m_is_behaviour),HX_HCSTRING("m_is_behaviour","\xba","\xa4","\xf7","\x32")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("application","\x50","\xab","\x3e","\x2a"),
	HX_HCSTRING("get_application","\xe7","\x62","\x20","\xeb"),
	HX_HCSTRING("get_guid","\x12","\xd9","\x28","\xc4"),
	HX_HCSTRING("set_guid","\x86","\x32","\x86","\x72"),
	HX_HCSTRING("m_guid","\xdb","\x8d","\x65","\x8c"),
	HX_HCSTRING("uid","\x90","\x23","\x59","\x00"),
	HX_HCSTRING("get_uid","\x27","\xec","\xcd","\x26"),
	HX_HCSTRING("m_uid","\x7e","\xa3","\xd1","\x01"),
	HX_HCSTRING("get_name","\xd4","\x2d","\xba","\xc8"),
	HX_HCSTRING("set_name","\x48","\x87","\x17","\x77"),
	HX_HCSTRING("m_name","\x9d","\xe2","\xf6","\x90"),
	HX_HCSTRING("destroyed","\xd9","\x37","\x27","\xf4"),
	HX_HCSTRING("get_destroyed","\xb0","\x0b","\x8b","\xb5"),
	HX_HCSTRING("m_destroyed","\x47","\x5e","\x7d","\x2e"),
	HX_HCSTRING("__cid","\xde","\xdb","\x27","\xf2"),
	HX_HCSTRING("__db","\x9e","\xb2","\x13","\x3f"),
	HX_HCSTRING("__pid","\x2b","\xb9","\x31","\xf2"),
	HX_HCSTRING("m_type_name","\x9e","\x9f","\x11","\x68"),
	HX_HCSTRING("m_type_full_name","\x08","\x44","\x71","\x24"),
	HX_HCSTRING("m_type_class","\x85","\xf3","\x2d","\x59"),
	HX_HCSTRING("m_is_behaviour","\xba","\xa4","\xf7","\x32"),
	HX_HCSTRING("GetType","\x50","\xca","\xdc","\xec"),
	HX_HCSTRING("GetTypeName","\xbb","\xd0","\xf0","\xbf"),
	HX_HCSTRING("GetTypeFullName","\xea","\x51","\xec","\xc7"),
	HX_HCSTRING("OnDestroy","\x7b","\xc5","\x03","\x9e"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Resource_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Resource_obj::__mClass,"__mClass");
};

#endif

hx::Class Resource_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("Instantiate","\x8a","\x5a","\xca","\xd9"),
	HX_HCSTRING("InstantiateStep","\xf6","\x7a","\x80","\x43"),
	HX_HCSTRING("Destroy","\xda","\x54","\xd7","\xf1"),
	HX_HCSTRING("FindByGUID","\x19","\x2c","\xa9","\x29"),
	HX_HCSTRING("GenerateGUID","\x5e","\xcf","\x3b","\xdf"),
	String(null()) };

void Resource_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.core.Resource","\xb1","\x36","\x1d","\xa8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Resource_obj::__GetStatic;
	__mClass->mSetStaticField = &Resource_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Resource_obj >;
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

void Resource_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/core/Resource.hx",16,0x735dd04d)
		{
			hx::Anon __result = hx::Anon_obj::Create();
			struct _Function_1_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/core/Resource.hx",16,0x735dd04d)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						struct _Function_2_1{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/core/Resource.hx",16,0x735dd04d)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("guid","\x89","\x1d","\x6e","\x44") , _Function_2_1::Block(),false);
						struct _Function_2_2{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/core/Resource.hx",16,0x735dd04d)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , _Function_2_2::Block(),false);
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
