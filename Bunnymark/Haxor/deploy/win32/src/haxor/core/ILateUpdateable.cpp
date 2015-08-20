#include <hxcpp.h>

#ifndef INCLUDED_haxor_core_ILateUpdateable
#include <haxor/core/ILateUpdateable.h>
#endif
namespace haxor{
namespace core{


static ::String sMemberFields[] = {
	HX_HCSTRING("OnLateUpdate","\xee","\xd3","\xa6","\xbb"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ILateUpdateable_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ILateUpdateable_obj::__mClass,"__mClass");
};

#endif

hx::Class ILateUpdateable_obj::__mClass;

void ILateUpdateable_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.core.ILateUpdateable","\xaf","\x79","\x87","\xc8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ILateUpdateable_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxor
} // end namespace core
