#include <hxcpp.h>

#ifndef INCLUDED_haxor_io_file_ColladaMaterial
#include <haxor/io/file/ColladaMaterial.h>
#endif
namespace haxor{
namespace io{
namespace file{

Void ColladaMaterial_obj::__construct()
{
HX_STACK_FRAME("haxor.io.file.ColladaMaterial","new",0xfc037bf5,"haxor.io.file.ColladaMaterial.new","haxor/io/file/ColladaFile.hx",1612,0xa1888587)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(1616)
	this->name = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(1614)
	this->id = HX_HCSTRING("","\x00","\x00","\x00","\x00");
}
;
	return null();
}

//ColladaMaterial_obj::~ColladaMaterial_obj() { }

Dynamic ColladaMaterial_obj::__CreateEmpty() { return  new ColladaMaterial_obj; }
hx::ObjectPtr< ColladaMaterial_obj > ColladaMaterial_obj::__new()
{  hx::ObjectPtr< ColladaMaterial_obj > _result_ = new ColladaMaterial_obj();
	_result_->__construct();
	return _result_;}

Dynamic ColladaMaterial_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ColladaMaterial_obj > _result_ = new ColladaMaterial_obj();
	_result_->__construct();
	return _result_;}


ColladaMaterial_obj::ColladaMaterial_obj()
{
}

void ColladaMaterial_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ColladaMaterial);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_END_CLASS();
}

void ColladaMaterial_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(name,"name");
}

Dynamic ColladaMaterial_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ColladaMaterial_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ColladaMaterial_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ColladaMaterial_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(ColladaMaterial_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsString,(int)offsetof(ColladaMaterial_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColladaMaterial_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColladaMaterial_obj::__mClass,"__mClass");
};

#endif

hx::Class ColladaMaterial_obj::__mClass;

void ColladaMaterial_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.io.file.ColladaMaterial","\x83","\x5d","\x57","\xb4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ColladaMaterial_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ColladaMaterial_obj >;
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
