#include <hxcpp.h>

#ifndef INCLUDED_haxor_io_file_ColladaInstance
#include <haxor/io/file/ColladaInstance.h>
#endif
namespace haxor{
namespace io{
namespace file{

Void ColladaInstance_obj::__construct()
{
HX_STACK_FRAME("haxor.io.file.ColladaInstance","new",0xe4a64de3,"haxor.io.file.ColladaInstance.new","haxor/io/file/ColladaFile.hx",1597,0xa1888587)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(1601)
	this->target = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(1599)
	this->type = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(1607)
	Array< ::String > tmp = Array_obj< ::String >::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1607)
	this->materials = tmp;
}
;
	return null();
}

//ColladaInstance_obj::~ColladaInstance_obj() { }

Dynamic ColladaInstance_obj::__CreateEmpty() { return  new ColladaInstance_obj; }
hx::ObjectPtr< ColladaInstance_obj > ColladaInstance_obj::__new()
{  hx::ObjectPtr< ColladaInstance_obj > _result_ = new ColladaInstance_obj();
	_result_->__construct();
	return _result_;}

Dynamic ColladaInstance_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ColladaInstance_obj > _result_ = new ColladaInstance_obj();
	_result_->__construct();
	return _result_;}


ColladaInstance_obj::ColladaInstance_obj()
{
}

void ColladaInstance_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ColladaInstance);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(materials,"materials");
	HX_MARK_END_CLASS();
}

void ColladaInstance_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(materials,"materials");
}

Dynamic ColladaInstance_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"materials") ) { return materials; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ColladaInstance_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"materials") ) { materials=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ColladaInstance_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ColladaInstance_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("target","\x51","\xf3","\xec","\x86"));
	outFields->push(HX_HCSTRING("materials","\xec","\xb5","\x0b","\xa0"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(ColladaInstance_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsString,(int)offsetof(ColladaInstance_obj,target),HX_HCSTRING("target","\x51","\xf3","\xec","\x86")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(ColladaInstance_obj,materials),HX_HCSTRING("materials","\xec","\xb5","\x0b","\xa0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("target","\x51","\xf3","\xec","\x86"),
	HX_HCSTRING("materials","\xec","\xb5","\x0b","\xa0"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColladaInstance_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColladaInstance_obj::__mClass,"__mClass");
};

#endif

hx::Class ColladaInstance_obj::__mClass;

void ColladaInstance_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.io.file.ColladaInstance","\x71","\x20","\x93","\x1d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ColladaInstance_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ColladaInstance_obj >;
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
} // end namespace file
