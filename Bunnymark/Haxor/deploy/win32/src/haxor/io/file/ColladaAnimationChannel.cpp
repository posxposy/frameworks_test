#include <hxcpp.h>

#ifndef INCLUDED_haxor_io_file_ColladaAnimationChannel
#include <haxor/io/file/ColladaAnimationChannel.h>
#endif
#ifndef INCLUDED_haxor_io_file_ColladaAnimationKeyFrame
#include <haxor/io/file/ColladaAnimationKeyFrame.h>
#endif
namespace haxor{
namespace io{
namespace file{

Void ColladaAnimationChannel_obj::__construct()
{
HX_STACK_FRAME("haxor.io.file.ColladaAnimationChannel","new",0xf7a2596d,"haxor.io.file.ColladaAnimationChannel.new","haxor/io/file/ColladaFile.hx",1638,0xa1888587)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(1642)
	this->target = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(1640)
	this->source = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(1648)
	Array< ::Dynamic > tmp = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1648)
	this->keyframes = tmp;
}
;
	return null();
}

//ColladaAnimationChannel_obj::~ColladaAnimationChannel_obj() { }

Dynamic ColladaAnimationChannel_obj::__CreateEmpty() { return  new ColladaAnimationChannel_obj; }
hx::ObjectPtr< ColladaAnimationChannel_obj > ColladaAnimationChannel_obj::__new()
{  hx::ObjectPtr< ColladaAnimationChannel_obj > _result_ = new ColladaAnimationChannel_obj();
	_result_->__construct();
	return _result_;}

Dynamic ColladaAnimationChannel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ColladaAnimationChannel_obj > _result_ = new ColladaAnimationChannel_obj();
	_result_->__construct();
	return _result_;}


ColladaAnimationChannel_obj::ColladaAnimationChannel_obj()
{
}

void ColladaAnimationChannel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ColladaAnimationChannel);
	HX_MARK_MEMBER_NAME(source,"source");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(keyframes,"keyframes");
	HX_MARK_END_CLASS();
}

void ColladaAnimationChannel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(source,"source");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(keyframes,"keyframes");
}

Dynamic ColladaAnimationChannel_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"source") ) { return source; }
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"keyframes") ) { return keyframes; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ColladaAnimationChannel_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"source") ) { source=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"keyframes") ) { keyframes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ColladaAnimationChannel_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ColladaAnimationChannel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"));
	outFields->push(HX_HCSTRING("target","\x51","\xf3","\xec","\x86"));
	outFields->push(HX_HCSTRING("keyframes","\x85","\xba","\xf8","\x0f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(ColladaAnimationChannel_obj,source),HX_HCSTRING("source","\xdb","\xb0","\x31","\x32")},
	{hx::fsString,(int)offsetof(ColladaAnimationChannel_obj,target),HX_HCSTRING("target","\x51","\xf3","\xec","\x86")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ColladaAnimationChannel_obj,keyframes),HX_HCSTRING("keyframes","\x85","\xba","\xf8","\x0f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"),
	HX_HCSTRING("target","\x51","\xf3","\xec","\x86"),
	HX_HCSTRING("keyframes","\x85","\xba","\xf8","\x0f"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColladaAnimationChannel_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColladaAnimationChannel_obj::__mClass,"__mClass");
};

#endif

hx::Class ColladaAnimationChannel_obj::__mClass;

void ColladaAnimationChannel_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.io.file.ColladaAnimationChannel","\xfb","\x1e","\xec","\xe7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ColladaAnimationChannel_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ColladaAnimationChannel_obj >;
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
