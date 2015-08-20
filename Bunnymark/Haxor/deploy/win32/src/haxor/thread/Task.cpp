#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_IRenderable
#include <haxor/core/IRenderable.h>
#endif
#ifndef INCLUDED_haxor_core_IUpdateable
#include <haxor/core/IUpdateable.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_thread_Activity
#include <haxor/thread/Activity.h>
#endif
#ifndef INCLUDED_haxor_thread_Task
#include <haxor/thread/Task.h>
#endif
namespace haxor{
namespace thread{

Void Task_obj::__construct(hx::Null< bool >  __o_p_threaded,Dynamic p_callback)
{
HX_STACK_FRAME("haxor.thread.Task","new",0x19b55acf,"haxor.thread.Task.new","haxor/thread/Task.hx",33,0x512a4561)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_p_threaded,"p_threaded")
HX_STACK_ARG(p_callback,"p_callback")
bool p_threaded = __o_p_threaded.Default(false);
{
	HX_STACK_LINE(34)
	Dynamic cb = p_callback;		HX_STACK_VAR(cb,"cb");
	HX_STACK_LINE(35)
	bool tmp = (cb == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	if ((tmp)){
		HX_STACK_LINE(35)
		Dynamic tmp1 = this->OnExecute_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(35)
		cb = tmp1;
	}
	HX_STACK_LINE(36)
	Dynamic tmp1 = cb;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(36)
	bool tmp2 = p_threaded;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(36)
	super::__construct(tmp1,tmp2,null());
	HX_STACK_LINE(37)
	this->m_active = false;
	HX_STACK_LINE(38)
	this->m_progress = ((Float)0.0);
	HX_STACK_LINE(39)
	this->m_has_progress = false;
}
;
	return null();
}

//Task_obj::~Task_obj() { }

Dynamic Task_obj::__CreateEmpty() { return  new Task_obj; }
hx::ObjectPtr< Task_obj > Task_obj::__new(hx::Null< bool >  __o_p_threaded,Dynamic p_callback)
{  hx::ObjectPtr< Task_obj > _result_ = new Task_obj();
	_result_->__construct(__o_p_threaded,p_callback);
	return _result_;}

Dynamic Task_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Task_obj > _result_ = new Task_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Float Task_obj::get_progress( ){
	HX_STACK_FRAME("haxor.thread.Task","get_progress",0xf2abdb67,"haxor.thread.Task.get_progress","haxor/thread/Task.hx",16,0x512a4561)
	HX_STACK_THIS(this)
	HX_STACK_LINE(16)
	Float tmp = this->m_progress;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Task_obj,get_progress,return )

Float Task_obj::set_progress( Float v){
	HX_STACK_FRAME("haxor.thread.Task","set_progress",0x07a4fedb,"haxor.thread.Task.set_progress","haxor/thread/Task.hx",17,0x512a4561)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(17)
	Float tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	Float tmp1 = this->m_progress;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(17)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(17)
	Float tmp3 = ::Math_obj::abs(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(17)
	bool tmp4 = (tmp3 > ((Float)0.0));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(17)
	if ((tmp4)){
		HX_STACK_LINE(17)
		this->m_progress = v;
		HX_STACK_LINE(17)
		this->m_has_progress = true;
	}
	HX_STACK_LINE(17)
	Float tmp5 = v;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(17)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Task_obj,set_progress,return )

bool Task_obj::get_active( ){
	HX_STACK_FRAME("haxor.thread.Task","get_active",0x49f0e300,"haxor.thread.Task.get_active","haxor/thread/Task.hx",25,0x512a4561)
	HX_STACK_THIS(this)
	HX_STACK_LINE(25)
	bool tmp = this->m_active;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Task_obj,get_active,return )

Void Task_obj::OnStart( ){
{
		HX_STACK_FRAME("haxor.thread.Task","OnStart",0xfb032892,"haxor.thread.Task.OnStart","haxor/thread/Task.hx",45,0x512a4561)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Task_obj,OnStart,(void))

Void Task_obj::OnStep( ){
{
		HX_STACK_FRAME("haxor.thread.Task","OnStep",0xdd89c91c,"haxor.thread.Task.OnStep","haxor/thread/Task.hx",50,0x512a4561)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Task_obj,OnStep,(void))

Void Task_obj::OnComplete( ){
{
		HX_STACK_FRAME("haxor.thread.Task","OnComplete",0x97530a89,"haxor.thread.Task.OnComplete","haxor/thread/Task.hx",55,0x512a4561)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Task_obj,OnComplete,(void))

Void Task_obj::OnProgress( ){
{
		HX_STACK_FRAME("haxor.thread.Task","OnProgress",0x9db6017d,"haxor.thread.Task.OnProgress","haxor/thread/Task.hx",60,0x512a4561)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Task_obj,OnProgress,(void))

bool Task_obj::OnExecute( Float p_time){
	HX_STACK_FRAME("haxor.thread.Task","OnExecute",0xb77e2a65,"haxor.thread.Task.OnExecute","haxor/thread/Task.hx",68,0x512a4561)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_time,"p_time")
	HX_STACK_LINE(69)
	bool tmp = this->m_active;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(69)
	if ((tmp1)){
		HX_STACK_LINE(69)
		this->m_active = true;
		HX_STACK_LINE(69)
		this->OnStart();
	}
	HX_STACK_LINE(70)
	this->OnStep();
	HX_STACK_LINE(71)
	bool tmp2 = this->m_has_progress;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(71)
	if ((tmp2)){
		HX_STACK_LINE(71)
		this->OnProgress();
		HX_STACK_LINE(71)
		this->m_has_progress = false;
	}
	HX_STACK_LINE(72)
	Float tmp3 = this->m_progress;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(72)
	bool tmp4 = (tmp3 >= ((Float)1.0));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(72)
	if ((tmp4)){
		HX_STACK_LINE(72)
		this->OnComplete();
		HX_STACK_LINE(72)
		return false;
	}
	HX_STACK_LINE(73)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Task_obj,OnExecute,return )


Task_obj::Task_obj()
{
}

Dynamic Task_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return inCallProp == hx::paccAlways ? get_active() : active; }
		if (HX_FIELD_EQ(inName,"OnStep") ) { return OnStep_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"OnStart") ) { return OnStart_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"progress") ) { if (inCallProp == hx::paccAlways) return get_progress(); }
		if (HX_FIELD_EQ(inName,"m_active") ) { return m_active; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"OnExecute") ) { return OnExecute_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_progress") ) { return m_progress; }
		if (HX_FIELD_EQ(inName,"get_active") ) { return get_active_dyn(); }
		if (HX_FIELD_EQ(inName,"OnComplete") ) { return OnComplete_dyn(); }
		if (HX_FIELD_EQ(inName,"OnProgress") ) { return OnProgress_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_progress") ) { return get_progress_dyn(); }
		if (HX_FIELD_EQ(inName,"set_progress") ) { return set_progress_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"m_has_progress") ) { return m_has_progress; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Task_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"progress") ) { if (inCallProp == hx::paccAlways) return set_progress(inValue); }
		if (HX_FIELD_EQ(inName,"m_active") ) { m_active=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_progress") ) { m_progress=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"m_has_progress") ) { m_has_progress=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Task_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Task_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86"));
	outFields->push(HX_HCSTRING("m_progress","\xff","\xf8","\x75","\xad"));
	outFields->push(HX_HCSTRING("m_has_progress","\xc4","\x06","\x7b","\x7f"));
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	outFields->push(HX_HCSTRING("m_active","\x98","\xea","\x37","\xdf"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Task_obj,m_progress),HX_HCSTRING("m_progress","\xff","\xf8","\x75","\xad")},
	{hx::fsBool,(int)offsetof(Task_obj,m_has_progress),HX_HCSTRING("m_has_progress","\xc4","\x06","\x7b","\x7f")},
	{hx::fsBool,(int)offsetof(Task_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{hx::fsBool,(int)offsetof(Task_obj,m_active),HX_HCSTRING("m_active","\x98","\xea","\x37","\xdf")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get_progress","\xb6","\xab","\x44","\x3b"),
	HX_HCSTRING("set_progress","\x2a","\xcf","\x3d","\x50"),
	HX_HCSTRING("m_progress","\xff","\xf8","\x75","\xad"),
	HX_HCSTRING("m_has_progress","\xc4","\x06","\x7b","\x7f"),
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("get_active","\x8f","\xb1","\xcd","\x06"),
	HX_HCSTRING("m_active","\x98","\xea","\x37","\xdf"),
	HX_HCSTRING("OnStart","\xa3","\x3a","\x9a","\xe7"),
	HX_HCSTRING("OnStep","\x2b","\x64","\x7a","\x23"),
	HX_HCSTRING("OnComplete","\x18","\xd9","\x2f","\x54"),
	HX_HCSTRING("OnProgress","\x0c","\xd0","\x92","\x5a"),
	HX_HCSTRING("OnExecute","\xb6","\xa2","\x8a","\x45"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Task_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Task_obj::__mClass,"__mClass");
};

#endif

hx::Class Task_obj::__mClass;

void Task_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.thread.Task","\x5d","\x47","\x86","\x40");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Task_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Task_obj >;
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
} // end namespace thread
