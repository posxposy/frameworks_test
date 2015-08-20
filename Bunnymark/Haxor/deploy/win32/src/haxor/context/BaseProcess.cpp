#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxor_context_BaseProcess
#include <haxor/context/BaseProcess.h>
#endif
#ifndef INCLUDED_haxor_core_Console
#include <haxor/core/Console.h>
#endif
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
namespace haxor{
namespace context{

Void BaseProcess_obj::__construct(::String p_name,hx::Null< bool >  __o_p_update_cid)
{
HX_STACK_FRAME("haxor.context.BaseProcess","new",0x99559f85,"haxor.context.BaseProcess.new","haxor/context/Process.hx",181,0x5f329a1c)
HX_STACK_THIS(this)
HX_STACK_ARG(p_name,"p_name")
HX_STACK_ARG(__o_p_update_cid,"p_update_cid")
bool p_update_cid = __o_p_update_cid.Default(true);
{
	HX_STACK_LINE(182)
	this->name = p_name;
	HX_STACK_LINE(183)
	int tmp = ::haxor::context::BaseProcess_obj::m_cid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(183)
	this->__cid = tmp;
	HX_STACK_LINE(184)
	{
		HX_STACK_LINE(184)
		int tmp1 = ::haxor::core::Console_obj::verbose;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(184)
		bool tmp2 = (tmp1 >= (int)8);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(184)
		if ((tmp2)){
			HX_STACK_LINE(184)
			::String tmp3 = (HX_HCSTRING("\tProcess [","\x21","\x8f","\x7c","\x37") + p_name);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(184)
			::String tmp4 = (tmp3 + HX_HCSTRING("][","\x5e","\x51","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(184)
			int tmp5 = this->__cid;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(184)
			::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(184)
			::String tmp7 = (tmp6 + HX_HCSTRING("] created.","\x69","\x21","\x2f","\x65"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(184)
			::cpp::Lib_obj::println(tmp7);
		}
	}
	HX_STACK_LINE(185)
	bool tmp1 = p_update_cid;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(185)
	if ((tmp1)){
		HX_STACK_LINE(185)
		(::haxor::context::BaseProcess_obj::m_cid)++;
	}
}
;
	return null();
}

//BaseProcess_obj::~BaseProcess_obj() { }

Dynamic BaseProcess_obj::__CreateEmpty() { return  new BaseProcess_obj; }
hx::ObjectPtr< BaseProcess_obj > BaseProcess_obj::__new(::String p_name,hx::Null< bool >  __o_p_update_cid)
{  hx::ObjectPtr< BaseProcess_obj > _result_ = new BaseProcess_obj();
	_result_->__construct(p_name,__o_p_update_cid);
	return _result_;}

Dynamic BaseProcess_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BaseProcess_obj > _result_ = new BaseProcess_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

int BaseProcess_obj::get_length( ){
	HX_STACK_FRAME("haxor.context.BaseProcess","get_length",0x973f942a,"haxor.context.BaseProcess.get_length","haxor/context/Process.hx",174,0x5f329a1c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(174)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(BaseProcess_obj,get_length,return )

Void BaseProcess_obj::Add( ::haxor::core::Resource p_item){
{
		HX_STACK_FRAME("haxor.context.BaseProcess","Add",0x99337926,"haxor.context.BaseProcess.Add","haxor/context/Process.hx",192,0x5f329a1c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_item,"p_item")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BaseProcess_obj,Add,(void))

Void BaseProcess_obj::Remove( ::haxor::core::Resource p_item){
{
		HX_STACK_FRAME("haxor.context.BaseProcess","Remove",0x625b865f,"haxor.context.BaseProcess.Remove","haxor/context/Process.hx",199,0x5f329a1c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_item,"p_item")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BaseProcess_obj,Remove,(void))

Void BaseProcess_obj::Clear( ){
{
		HX_STACK_FRAME("haxor.context.BaseProcess","Clear",0x13f883d2,"haxor.context.BaseProcess.Clear","haxor/context/Process.hx",204,0x5f329a1c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BaseProcess_obj,Clear,(void))

int BaseProcess_obj::m_cid;


BaseProcess_obj::BaseProcess_obj()
{
}

void BaseProcess_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BaseProcess);
	HX_MARK_MEMBER_NAME(__cid,"__cid");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void BaseProcess_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__cid,"__cid");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic BaseProcess_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"Add") ) { return Add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"__cid") ) { return __cid; }
		if (HX_FIELD_EQ(inName,"Clear") ) { return Clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return inCallProp == hx::paccAlways ? get_length() : length; }
		if (HX_FIELD_EQ(inName,"Remove") ) { return Remove_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool BaseProcess_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"m_cid") ) { outValue = m_cid; return true;  }
	}
	return false;
}

Dynamic BaseProcess_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"__cid") ) { __cid=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BaseProcess_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"m_cid") ) { m_cid=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void BaseProcess_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__cid","\xde","\xdb","\x27","\xf2"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(BaseProcess_obj,__cid),HX_HCSTRING("__cid","\xde","\xdb","\x27","\xf2")},
	{hx::fsString,(int)offsetof(BaseProcess_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsInt,(int)offsetof(BaseProcess_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &BaseProcess_obj::m_cid,HX_HCSTRING("m_cid","\xec","\xfa","\xc3","\x01")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__cid","\xde","\xdb","\x27","\xf2"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("Add","\x01","\xaa","\x31","\x00"),
	HX_HCSTRING("Remove","\x64","\x10","\x1d","\x39"),
	HX_HCSTRING("Clear","\x6d","\xe1","\x88","\xdb"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BaseProcess_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BaseProcess_obj::m_cid,"m_cid");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BaseProcess_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BaseProcess_obj::m_cid,"m_cid");
};

#endif

hx::Class BaseProcess_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("m_cid","\xec","\xfa","\xc3","\x01"),
	String(null()) };

void BaseProcess_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.context.BaseProcess","\x13","\x79","\xcc","\x37");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BaseProcess_obj::__GetStatic;
	__mClass->mSetStaticField = &BaseProcess_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BaseProcess_obj >;
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

void BaseProcess_obj::__boot()
{
	m_cid= (int)0;
}

} // end namespace haxor
} // end namespace context
