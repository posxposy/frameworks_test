#include <hxcpp.h>

#ifndef INCLUDED_haxor_component_Behaviour
#include <haxor/component/Behaviour.h>
#endif
#ifndef INCLUDED_haxor_component_Component
#include <haxor/component/Component.h>
#endif
#ifndef INCLUDED_haxor_context_EngineContext
#include <haxor/context/EngineContext.h>
#endif
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
namespace haxor{
namespace component{

Void Behaviour_obj::__construct(::String __o_p_name)
{
HX_STACK_FRAME("haxor.component.Behaviour","new",0xa41113f2,"haxor.component.Behaviour.new","haxor/component/Behaviour.hx",13,0x6f707600)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_p_name,"p_name")
::String p_name = __o_p_name.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(13)
	::String tmp = p_name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	super::__construct(tmp);
}
;
	return null();
}

//Behaviour_obj::~Behaviour_obj() { }

Dynamic Behaviour_obj::__CreateEmpty() { return  new Behaviour_obj; }
hx::ObjectPtr< Behaviour_obj > Behaviour_obj::__new(::String __o_p_name)
{  hx::ObjectPtr< Behaviour_obj > _result_ = new Behaviour_obj();
	_result_->__construct(__o_p_name);
	return _result_;}

Dynamic Behaviour_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Behaviour_obj > _result_ = new Behaviour_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

bool Behaviour_obj::get_enabled( ){
	HX_STACK_FRAME("haxor.component.Behaviour","get_enabled",0xa9118a2a,"haxor.component.Behaviour.get_enabled","haxor/component/Behaviour.hx",19,0x6f707600)
	HX_STACK_THIS(this)
	HX_STACK_LINE(19)
	bool tmp = this->m_enabled;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	if ((tmp)){
		HX_STACK_LINE(19)
		bool tmp2 = this->m_destroyed;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(19)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(19)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(19)
		tmp1 = !(tmp4);
	}
	else{
		HX_STACK_LINE(19)
		tmp1 = false;
	}
	HX_STACK_LINE(19)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Behaviour_obj,get_enabled,return )

bool Behaviour_obj::set_enabled( bool v){
	HX_STACK_FRAME("haxor.component.Behaviour","set_enabled",0xb37e9136,"haxor.component.Behaviour.set_enabled","haxor/component/Behaviour.hx",21,0x6f707600)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(22)
	bool tmp = this->m_destroyed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	if ((tmp)){
		HX_STACK_LINE(22)
		return false;
	}
	HX_STACK_LINE(23)
	bool tmp1 = this->m_enabled;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	bool tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(23)
	bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(23)
	if ((tmp3)){
		HX_STACK_LINE(23)
		bool tmp4 = v;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(23)
		return tmp4;
	}
	HX_STACK_LINE(24)
	this->m_enabled = v;
	HX_STACK_LINE(25)
	bool tmp4 = v;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(25)
	if ((tmp4)){
		HX_STACK_LINE(25)
		::haxor::context::EngineContext_obj::Enable(hx::ObjectPtr<OBJ_>(this));
	}
	else{
		HX_STACK_LINE(25)
		::haxor::context::EngineContext_obj::Disable(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(26)
	bool tmp5 = v;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(26)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Behaviour_obj,set_enabled,return )

Void Behaviour_obj::OnBuild( ){
{
		HX_STACK_FRAME("haxor.component.Behaviour","OnBuild",0xce151601,"haxor.component.Behaviour.OnBuild","haxor/component/Behaviour.hx",44,0x6f707600)
		HX_STACK_THIS(this)
		HX_STACK_LINE(45)
		this->super::OnBuild();
		HX_STACK_LINE(46)
		this->m_enabled = true;
		HX_STACK_LINE(47)
		this->m_is_behaviour = true;
		HX_STACK_LINE(48)
		this->m_is_awake = false;
		HX_STACK_LINE(49)
		this->m_is_start = false;
		HX_STACK_LINE(50)
		::haxor::context::EngineContext_obj::Enable(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(51)
		Array< ::Dynamic > tmp = ::haxor::context::EngineContext_obj::awake;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(51)
		tmp->push(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(52)
		Array< ::Dynamic > tmp1 = ::haxor::context::EngineContext_obj::start;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		tmp1->push(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


Void Behaviour_obj::OnAwake( ){
{
		HX_STACK_FRAME("haxor.component.Behaviour","OnAwake",0x3bfadbd8,"haxor.component.Behaviour.OnAwake","haxor/component/Behaviour.hx",58,0x6f707600)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Behaviour_obj,OnAwake,(void))

Void Behaviour_obj::OnStart( ){
{
		HX_STACK_FRAME("haxor.component.Behaviour","OnStart",0x9735af35,"haxor.component.Behaviour.OnStart","haxor/component/Behaviour.hx",63,0x6f707600)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Behaviour_obj,OnStart,(void))


Behaviour_obj::Behaviour_obj()
{
}

Dynamic Behaviour_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { if (inCallProp == hx::paccAlways) return get_enabled(); }
		if (HX_FIELD_EQ(inName,"OnBuild") ) { return OnBuild_dyn(); }
		if (HX_FIELD_EQ(inName,"OnAwake") ) { return OnAwake_dyn(); }
		if (HX_FIELD_EQ(inName,"OnStart") ) { return OnStart_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"m_enabled") ) { return m_enabled; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_is_awake") ) { return m_is_awake; }
		if (HX_FIELD_EQ(inName,"m_is_start") ) { return m_is_start; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_enabled") ) { return get_enabled_dyn(); }
		if (HX_FIELD_EQ(inName,"set_enabled") ) { return set_enabled_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Behaviour_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { if (inCallProp == hx::paccAlways) return set_enabled(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"m_enabled") ) { m_enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_is_awake") ) { m_is_awake=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_is_start") ) { m_is_start=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Behaviour_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Behaviour_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"));
	outFields->push(HX_HCSTRING("m_enabled","\x6f","\x13","\xb3","\x88"));
	outFields->push(HX_HCSTRING("m_is_awake","\x02","\x11","\xd8","\x6f"));
	outFields->push(HX_HCSTRING("m_is_start","\x5f","\xe4","\x12","\xcb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Behaviour_obj,m_enabled),HX_HCSTRING("m_enabled","\x6f","\x13","\xb3","\x88")},
	{hx::fsBool,(int)offsetof(Behaviour_obj,m_is_awake),HX_HCSTRING("m_is_awake","\x02","\x11","\xd8","\x6f")},
	{hx::fsBool,(int)offsetof(Behaviour_obj,m_is_start),HX_HCSTRING("m_is_start","\x5f","\xe4","\x12","\xcb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get_enabled","\x98","\x64","\x2b","\x04"),
	HX_HCSTRING("set_enabled","\xa4","\x6b","\x98","\x0e"),
	HX_HCSTRING("m_enabled","\x6f","\x13","\xb3","\x88"),
	HX_HCSTRING("m_is_awake","\x02","\x11","\xd8","\x6f"),
	HX_HCSTRING("m_is_start","\x5f","\xe4","\x12","\xcb"),
	HX_HCSTRING("OnBuild","\x6f","\xa1","\x79","\x1e"),
	HX_HCSTRING("OnAwake","\x46","\x67","\x5f","\x8c"),
	HX_HCSTRING("OnStart","\xa3","\x3a","\x9a","\xe7"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Behaviour_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Behaviour_obj::__mClass,"__mClass");
};

#endif

hx::Class Behaviour_obj::__mClass;

void Behaviour_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.component.Behaviour","\x00","\xf3","\xdf","\xca");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Behaviour_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Behaviour_obj >;
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
