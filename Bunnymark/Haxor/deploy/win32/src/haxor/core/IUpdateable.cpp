#include <hxcpp.h>

#ifndef INCLUDED_haxor_core_IUpdateable
#include <haxor/core/IUpdateable.h>
#endif
namespace haxor{
namespace core{


static ::String sMemberFields[] = {
	HX_HCSTRING("OnUpdate","\xa8","\x38","\x64","\x40"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IUpdateable_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IUpdateable_obj::__mClass,"__mClass");
};

#endif

hx::Class IUpdateable_obj::__mClass;

void IUpdateable_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.core.IUpdateable","\xe9","\x63","\x8b","\xe5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IUpdateable_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxor
} // end namespace core
