#include <hxcpp.h>

#ifndef INCLUDED_haxor_io_file_ColladaMesh
#include <haxor/io/file/ColladaMesh.h>
#endif
#ifndef INCLUDED_haxor_io_file_ColladaPrimitive
#include <haxor/io/file/ColladaPrimitive.h>
#endif
namespace haxor{
namespace io{
namespace file{

Void ColladaMesh_obj::__construct()
{
HX_STACK_FRAME("haxor.io.file.ColladaMesh","new",0x8196e63b,"haxor.io.file.ColladaMesh.new","haxor/io/file/ColladaFile.hx",1190,0xa1888587)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(1193)
	this->primitives = null();
	HX_STACK_LINE(1192)
	this->type = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(1196)
	Array< ::Dynamic > tmp = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1196)
	this->primitives = tmp;
}
;
	return null();
}

//ColladaMesh_obj::~ColladaMesh_obj() { }

Dynamic ColladaMesh_obj::__CreateEmpty() { return  new ColladaMesh_obj; }
hx::ObjectPtr< ColladaMesh_obj > ColladaMesh_obj::__new()
{  hx::ObjectPtr< ColladaMesh_obj > _result_ = new ColladaMesh_obj();
	_result_->__construct();
	return _result_;}

Dynamic ColladaMesh_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ColladaMesh_obj > _result_ = new ColladaMesh_obj();
	_result_->__construct();
	return _result_;}


ColladaMesh_obj::ColladaMesh_obj()
{
}

void ColladaMesh_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ColladaMesh);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(primitives,"primitives");
	HX_MARK_END_CLASS();
}

void ColladaMesh_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(primitives,"primitives");
}

Dynamic ColladaMesh_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"primitives") ) { return primitives; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ColladaMesh_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"primitives") ) { primitives=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ColladaMesh_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ColladaMesh_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("primitives","\xec","\x09","\x1f","\x46"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(ColladaMesh_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ColladaMesh_obj,primitives),HX_HCSTRING("primitives","\xec","\x09","\x1f","\x46")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("primitives","\xec","\x09","\x1f","\x46"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColladaMesh_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColladaMesh_obj::__mClass,"__mClass");
};

#endif

hx::Class ColladaMesh_obj::__mClass;

void ColladaMesh_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.io.file.ColladaMesh","\xc9","\xac","\x8a","\xae");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ColladaMesh_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ColladaMesh_obj >;
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
