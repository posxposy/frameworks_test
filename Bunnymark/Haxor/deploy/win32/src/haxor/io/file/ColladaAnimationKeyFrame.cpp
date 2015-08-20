#include <hxcpp.h>

#ifndef INCLUDED_haxor_io_file_ColladaAnimationKeyFrame
#include <haxor/io/file/ColladaAnimationKeyFrame.h>
#endif
namespace haxor{
namespace io{
namespace file{

Void ColladaAnimationKeyFrame_obj::__construct()
{
HX_STACK_FRAME("haxor.io.file.ColladaAnimationKeyFrame","new",0x78a134c8,"haxor.io.file.ColladaAnimationKeyFrame.new","haxor/io/file/ColladaFile.hx",1661,0xa1888587)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(1662)
	this->time = ((Float)0.0);
	HX_STACK_LINE(1663)
	Array< Float > tmp = Array_obj< Float >::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1663)
	this->values = tmp;
}
;
	return null();
}

//ColladaAnimationKeyFrame_obj::~ColladaAnimationKeyFrame_obj() { }

Dynamic ColladaAnimationKeyFrame_obj::__CreateEmpty() { return  new ColladaAnimationKeyFrame_obj; }
hx::ObjectPtr< ColladaAnimationKeyFrame_obj > ColladaAnimationKeyFrame_obj::__new()
{  hx::ObjectPtr< ColladaAnimationKeyFrame_obj > _result_ = new ColladaAnimationKeyFrame_obj();
	_result_->__construct();
	return _result_;}

Dynamic ColladaAnimationKeyFrame_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ColladaAnimationKeyFrame_obj > _result_ = new ColladaAnimationKeyFrame_obj();
	_result_->__construct();
	return _result_;}


ColladaAnimationKeyFrame_obj::ColladaAnimationKeyFrame_obj()
{
}

void ColladaAnimationKeyFrame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ColladaAnimationKeyFrame);
	HX_MARK_MEMBER_NAME(time,"time");
	HX_MARK_MEMBER_NAME(values,"values");
	HX_MARK_END_CLASS();
}

void ColladaAnimationKeyFrame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(time,"time");
	HX_VISIT_MEMBER_NAME(values,"values");
}

Dynamic ColladaAnimationKeyFrame_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { return time; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"values") ) { return values; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ColladaAnimationKeyFrame_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"values") ) { values=inValue.Cast< Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ColladaAnimationKeyFrame_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ColladaAnimationKeyFrame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"));
	outFields->push(HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ColladaAnimationKeyFrame_obj,time),HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(ColladaAnimationKeyFrame_obj,values),HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"),
	HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColladaAnimationKeyFrame_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColladaAnimationKeyFrame_obj::__mClass,"__mClass");
};

#endif

hx::Class ColladaAnimationKeyFrame_obj::__mClass;

void ColladaAnimationKeyFrame_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.io.file.ColladaAnimationKeyFrame","\xd6","\x70","\xad","\xe6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ColladaAnimationKeyFrame_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ColladaAnimationKeyFrame_obj >;
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
