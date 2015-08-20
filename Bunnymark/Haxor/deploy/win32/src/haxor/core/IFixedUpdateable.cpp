#include <hxcpp.h>

#ifndef INCLUDED_haxor_core_IFixedUpdateable
#include <haxor/core/IFixedUpdateable.h>
#endif
namespace haxor{
namespace core{


static ::String sMemberFields[] = {
	HX_HCSTRING("OnFixedUpdate","\x9e","\xef","\x10","\x4e"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IFixedUpdateable_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IFixedUpdateable_obj::__mClass,"__mClass");
};

#endif

hx::Class IFixedUpdateable_obj::__mClass;

void IFixedUpdateable_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.core.IFixedUpdateable","\x31","\xdd","\xcb","\x66");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IFixedUpdateable_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxor
} // end namespace core
