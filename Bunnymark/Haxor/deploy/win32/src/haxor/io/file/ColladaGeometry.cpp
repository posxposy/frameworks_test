#include <hxcpp.h>

#ifndef INCLUDED_haxor_io_file_ColladaGeometry
#include <haxor/io/file/ColladaGeometry.h>
#endif
#ifndef INCLUDED_haxor_io_file_ColladaMesh
#include <haxor/io/file/ColladaMesh.h>
#endif
namespace haxor{
namespace io{
namespace file{

Void ColladaGeometry_obj::__construct()
{
HX_STACK_FRAME("haxor.io.file.ColladaGeometry","new",0x753a8380,"haxor.io.file.ColladaGeometry.new","haxor/io/file/ColladaFile.hx",1181,0xa1888587)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(1185)
	this->mesh = null();
	HX_STACK_LINE(1184)
	this->name = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(1183)
	this->id = HX_HCSTRING("","\x00","\x00","\x00","\x00");
}
;
	return null();
}

//ColladaGeometry_obj::~ColladaGeometry_obj() { }

Dynamic ColladaGeometry_obj::__CreateEmpty() { return  new ColladaGeometry_obj; }
hx::ObjectPtr< ColladaGeometry_obj > ColladaGeometry_obj::__new()
{  hx::ObjectPtr< ColladaGeometry_obj > _result_ = new ColladaGeometry_obj();
	_result_->__construct();
	return _result_;}

Dynamic ColladaGeometry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ColladaGeometry_obj > _result_ = new ColladaGeometry_obj();
	_result_->__construct();
	return _result_;}


ColladaGeometry_obj::ColladaGeometry_obj()
{
}

void ColladaGeometry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ColladaGeometry);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(mesh,"mesh");
	HX_MARK_END_CLASS();
}

void ColladaGeometry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(mesh,"mesh");
}

Dynamic ColladaGeometry_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"mesh") ) { return mesh; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ColladaGeometry_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mesh") ) { mesh=inValue.Cast< ::haxor::io::file::ColladaMesh >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ColladaGeometry_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ColladaGeometry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("mesh","\xed","\x49","\x59","\x48"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(ColladaGeometry_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsString,(int)offsetof(ColladaGeometry_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsObject /*::haxor::io::file::ColladaMesh*/ ,(int)offsetof(ColladaGeometry_obj,mesh),HX_HCSTRING("mesh","\xed","\x49","\x59","\x48")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("mesh","\xed","\x49","\x59","\x48"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColladaGeometry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColladaGeometry_obj::__mClass,"__mClass");
};

#endif

hx::Class ColladaGeometry_obj::__mClass;

void ColladaGeometry_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.io.file.ColladaGeometry","\x8e","\x03","\x5b","\x96");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ColladaGeometry_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ColladaGeometry_obj >;
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
