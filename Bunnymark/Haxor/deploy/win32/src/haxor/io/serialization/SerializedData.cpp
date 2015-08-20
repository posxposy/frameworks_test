#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_SerializedData
#include <haxor/io/serialization/SerializedData.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_SerializedField
#include <haxor/io/serialization/SerializedField.h>
#endif
namespace haxor{
namespace io{
namespace serialization{

Void SerializedData_obj::__construct(Dynamic p_target)
{
HX_STACK_FRAME("haxor.io.serialization.SerializedData","new",0x8cf2d43a,"haxor.io.serialization.SerializedData.new","haxor/io/serialization/SerializedData.hx",14,0xcc39fcb5)
HX_STACK_THIS(this)
HX_STACK_ARG(p_target,"p_target")
{
	HX_STACK_LINE(15)
	this->target = p_target;
	HX_STACK_LINE(16)
	Dynamic tmp = this->target;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(16)
	::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(16)
	if ((tmp1)){
		HX_STACK_LINE(16)
		tmp2 = HX_HCSTRING("root","\x22","\xee","\xae","\x4b");
	}
	else{
		HX_STACK_LINE(16)
		Dynamic tmp3 = this->target;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(16)
		::hx::Class tmp4 = ::Type_obj::getClass(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(16)
		tmp2 = ::Type_obj::getClassName(tmp4);
	}
	HX_STACK_LINE(16)
	this->type = tmp2;
	HX_STACK_LINE(17)
	Array< ::Dynamic > tmp3 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(17)
	this->fields = tmp3;
	HX_STACK_LINE(18)
	Array< ::Dynamic > tmp4 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(18)
	this->children = tmp4;
}
;
	return null();
}

//SerializedData_obj::~SerializedData_obj() { }

Dynamic SerializedData_obj::__CreateEmpty() { return  new SerializedData_obj; }
hx::ObjectPtr< SerializedData_obj > SerializedData_obj::__new(Dynamic p_target)
{  hx::ObjectPtr< SerializedData_obj > _result_ = new SerializedData_obj();
	_result_->__construct(p_target);
	return _result_;}

Dynamic SerializedData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SerializedData_obj > _result_ = new SerializedData_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}


SerializedData_obj::SerializedData_obj()
{
}

void SerializedData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SerializedData);
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(fields,"fields");
	HX_MARK_MEMBER_NAME(children,"children");
	HX_MARK_END_CLASS();
}

void SerializedData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(fields,"fields");
	HX_VISIT_MEMBER_NAME(children,"children");
}

Dynamic SerializedData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		if (HX_FIELD_EQ(inName,"fields") ) { return fields; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { return children; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SerializedData_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fields") ) { fields=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { children=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SerializedData_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void SerializedData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("target","\x51","\xf3","\xec","\x86"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80"));
	outFields->push(HX_HCSTRING("children","\x3f","\x19","\x6a","\x70"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(SerializedData_obj,target),HX_HCSTRING("target","\x51","\xf3","\xec","\x86")},
	{hx::fsString,(int)offsetof(SerializedData_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(SerializedData_obj,fields),HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(SerializedData_obj,children),HX_HCSTRING("children","\x3f","\x19","\x6a","\x70")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("target","\x51","\xf3","\xec","\x86"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80"),
	HX_HCSTRING("children","\x3f","\x19","\x6a","\x70"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SerializedData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SerializedData_obj::__mClass,"__mClass");
};

#endif

hx::Class SerializedData_obj::__mClass;

void SerializedData_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.io.serialization.SerializedData","\x48","\xef","\x39","\x24");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &SerializedData_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SerializedData_obj >;
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
} // end namespace io
} // end namespace serialization
