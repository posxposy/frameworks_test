#include <hxcpp.h>

#ifndef INCLUDED_haxor_io_file_ColladaAssetData
#include <haxor/io/file/ColladaAssetData.h>
#endif
namespace haxor{
namespace io{
namespace file{

Void ColladaAssetData_obj::__construct()
{
HX_STACK_FRAME("haxor.io.file.ColladaAssetData","new",0x28364bd0,"haxor.io.file.ColladaAssetData.new","haxor/io/file/ColladaFile.hx",1167,0xa1888587)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(1176)
	this->axis = HX_HCSTRING("y_up","\xa1","\x4d","\x43","\x50");
	HX_STACK_LINE(1175)
	this->unitValue = ((Float)0.0);
	HX_STACK_LINE(1174)
	this->unitName = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(1173)
	this->modification = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(1172)
	this->creation = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(1171)
	this->source = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(1170)
	this->tool = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(1169)
	this->author = HX_HCSTRING("","\x00","\x00","\x00","\x00");
}
;
	return null();
}

//ColladaAssetData_obj::~ColladaAssetData_obj() { }

Dynamic ColladaAssetData_obj::__CreateEmpty() { return  new ColladaAssetData_obj; }
hx::ObjectPtr< ColladaAssetData_obj > ColladaAssetData_obj::__new()
{  hx::ObjectPtr< ColladaAssetData_obj > _result_ = new ColladaAssetData_obj();
	_result_->__construct();
	return _result_;}

Dynamic ColladaAssetData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ColladaAssetData_obj > _result_ = new ColladaAssetData_obj();
	_result_->__construct();
	return _result_;}


ColladaAssetData_obj::ColladaAssetData_obj()
{
}

void ColladaAssetData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ColladaAssetData);
	HX_MARK_MEMBER_NAME(author,"author");
	HX_MARK_MEMBER_NAME(tool,"tool");
	HX_MARK_MEMBER_NAME(source,"source");
	HX_MARK_MEMBER_NAME(creation,"creation");
	HX_MARK_MEMBER_NAME(modification,"modification");
	HX_MARK_MEMBER_NAME(unitName,"unitName");
	HX_MARK_MEMBER_NAME(unitValue,"unitValue");
	HX_MARK_MEMBER_NAME(axis,"axis");
	HX_MARK_END_CLASS();
}

void ColladaAssetData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(author,"author");
	HX_VISIT_MEMBER_NAME(tool,"tool");
	HX_VISIT_MEMBER_NAME(source,"source");
	HX_VISIT_MEMBER_NAME(creation,"creation");
	HX_VISIT_MEMBER_NAME(modification,"modification");
	HX_VISIT_MEMBER_NAME(unitName,"unitName");
	HX_VISIT_MEMBER_NAME(unitValue,"unitValue");
	HX_VISIT_MEMBER_NAME(axis,"axis");
}

Dynamic ColladaAssetData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"tool") ) { return tool; }
		if (HX_FIELD_EQ(inName,"axis") ) { return axis; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"author") ) { return author; }
		if (HX_FIELD_EQ(inName,"source") ) { return source; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"creation") ) { return creation; }
		if (HX_FIELD_EQ(inName,"unitName") ) { return unitName; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"unitValue") ) { return unitValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"modification") ) { return modification; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ColladaAssetData_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"tool") ) { tool=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"axis") ) { axis=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"author") ) { author=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"source") ) { source=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"creation") ) { creation=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"unitName") ) { unitName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"unitValue") ) { unitValue=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"modification") ) { modification=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ColladaAssetData_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ColladaAssetData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("author","\x8b","\xea","\x7b","\x73"));
	outFields->push(HX_HCSTRING("tool","\x58","\x5b","\x01","\x4d"));
	outFields->push(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"));
	outFields->push(HX_HCSTRING("creation","\x1f","\x88","\xf7","\x2b"));
	outFields->push(HX_HCSTRING("modification","\x5c","\x0b","\xa4","\x15"));
	outFields->push(HX_HCSTRING("unitName","\xef","\xfa","\x13","\xfc"));
	outFields->push(HX_HCSTRING("unitValue","\x4d","\x86","\x9b","\x30"));
	outFields->push(HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(ColladaAssetData_obj,author),HX_HCSTRING("author","\x8b","\xea","\x7b","\x73")},
	{hx::fsString,(int)offsetof(ColladaAssetData_obj,tool),HX_HCSTRING("tool","\x58","\x5b","\x01","\x4d")},
	{hx::fsString,(int)offsetof(ColladaAssetData_obj,source),HX_HCSTRING("source","\xdb","\xb0","\x31","\x32")},
	{hx::fsString,(int)offsetof(ColladaAssetData_obj,creation),HX_HCSTRING("creation","\x1f","\x88","\xf7","\x2b")},
	{hx::fsString,(int)offsetof(ColladaAssetData_obj,modification),HX_HCSTRING("modification","\x5c","\x0b","\xa4","\x15")},
	{hx::fsString,(int)offsetof(ColladaAssetData_obj,unitName),HX_HCSTRING("unitName","\xef","\xfa","\x13","\xfc")},
	{hx::fsFloat,(int)offsetof(ColladaAssetData_obj,unitValue),HX_HCSTRING("unitValue","\x4d","\x86","\x9b","\x30")},
	{hx::fsString,(int)offsetof(ColladaAssetData_obj,axis),HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("author","\x8b","\xea","\x7b","\x73"),
	HX_HCSTRING("tool","\x58","\x5b","\x01","\x4d"),
	HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"),
	HX_HCSTRING("creation","\x1f","\x88","\xf7","\x2b"),
	HX_HCSTRING("modification","\x5c","\x0b","\xa4","\x15"),
	HX_HCSTRING("unitName","\xef","\xfa","\x13","\xfc"),
	HX_HCSTRING("unitValue","\x4d","\x86","\x9b","\x30"),
	HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColladaAssetData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColladaAssetData_obj::__mClass,"__mClass");
};

#endif

hx::Class ColladaAssetData_obj::__mClass;

void ColladaAssetData_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.io.file.ColladaAssetData","\xde","\x63","\x18","\x1f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ColladaAssetData_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ColladaAssetData_obj >;
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
