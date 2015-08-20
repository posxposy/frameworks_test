#include <hxcpp.h>

#ifndef INCLUDED_haxor_io_serialization_Formatter
#include <haxor/io/serialization/Formatter.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_ISerializable
#include <haxor/io/serialization/ISerializable.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_SerializedField
#include <haxor/io/serialization/SerializedField.h>
#endif
namespace haxor{
namespace io{
namespace serialization{


static ::String sMemberFields[] = {
	HX_HCSTRING("OnSerializeField","\x59","\x44","\x5f","\x58"),
	HX_HCSTRING("OnDeserializeField","\x5a","\x41","\xba","\xd3"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ISerializable_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ISerializable_obj::__mClass,"__mClass");
};

#endif

hx::Class ISerializable_obj::__mClass;

void ISerializable_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.io.serialization.ISerializable","\xce","\xcd","\xe8","\x9e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ISerializable_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxor
} // end namespace io
} // end namespace serialization
