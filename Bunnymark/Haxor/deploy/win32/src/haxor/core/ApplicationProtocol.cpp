#include <hxcpp.h>

#ifndef INCLUDED_haxor_core_ApplicationProtocol
#include <haxor/core/ApplicationProtocol.h>
#endif
namespace haxor{
namespace core{

::haxor::core::ApplicationProtocol ApplicationProtocol_obj::File;

::haxor::core::ApplicationProtocol ApplicationProtocol_obj::HTTP;

::haxor::core::ApplicationProtocol ApplicationProtocol_obj::HTTPS;

::haxor::core::ApplicationProtocol ApplicationProtocol_obj::None;

HX_DEFINE_CREATE_ENUM(ApplicationProtocol_obj)

int ApplicationProtocol_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("File","\x9c","\xfa","\x94","\x2e")) return 1;
	if (inName==HX_HCSTRING("HTTP","\x88","\x63","\xd7","\x2f")) return 2;
	if (inName==HX_HCSTRING("HTTPS","\xcb","\xb3","\x9f","\xac")) return 3;
	if (inName==HX_HCSTRING("None","\xd8","\x3e","\xe3","\x33")) return 0;
	return super::__FindIndex(inName);
}

int ApplicationProtocol_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("File","\x9c","\xfa","\x94","\x2e")) return 0;
	if (inName==HX_HCSTRING("HTTP","\x88","\x63","\xd7","\x2f")) return 0;
	if (inName==HX_HCSTRING("HTTPS","\xcb","\xb3","\x9f","\xac")) return 0;
	if (inName==HX_HCSTRING("None","\xd8","\x3e","\xe3","\x33")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic ApplicationProtocol_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("File","\x9c","\xfa","\x94","\x2e")) return File;
	if (inName==HX_HCSTRING("HTTP","\x88","\x63","\xd7","\x2f")) return HTTP;
	if (inName==HX_HCSTRING("HTTPS","\xcb","\xb3","\x9f","\xac")) return HTTPS;
	if (inName==HX_HCSTRING("None","\xd8","\x3e","\xe3","\x33")) return None;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("None","\xd8","\x3e","\xe3","\x33"),
	HX_HCSTRING("File","\x9c","\xfa","\x94","\x2e"),
	HX_HCSTRING("HTTP","\x88","\x63","\xd7","\x2f"),
	HX_HCSTRING("HTTPS","\xcb","\xb3","\x9f","\xac"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ApplicationProtocol_obj::File,"File");
	HX_MARK_MEMBER_NAME(ApplicationProtocol_obj::HTTP,"HTTP");
	HX_MARK_MEMBER_NAME(ApplicationProtocol_obj::HTTPS,"HTTPS");
	HX_MARK_MEMBER_NAME(ApplicationProtocol_obj::None,"None");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ApplicationProtocol_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ApplicationProtocol_obj::File,"File");
	HX_VISIT_MEMBER_NAME(ApplicationProtocol_obj::HTTP,"HTTP");
	HX_VISIT_MEMBER_NAME(ApplicationProtocol_obj::HTTPS,"HTTPS");
	HX_VISIT_MEMBER_NAME(ApplicationProtocol_obj::None,"None");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class ApplicationProtocol_obj::__mClass;

Dynamic __Create_ApplicationProtocol_obj() { return new ApplicationProtocol_obj; }

void ApplicationProtocol_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("haxor.core.ApplicationProtocol","\xc5","\x88","\x95","\xd3"), hx::TCanCast< ApplicationProtocol_obj >,sStaticFields,sMemberFields,
	&__Create_ApplicationProtocol_obj, &__Create,
	&super::__SGetClass(), &CreateApplicationProtocol_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void ApplicationProtocol_obj::__boot()
{
hx::Static(File) = hx::CreateEnum< ApplicationProtocol_obj >(HX_HCSTRING("File","\x9c","\xfa","\x94","\x2e"),1);
hx::Static(HTTP) = hx::CreateEnum< ApplicationProtocol_obj >(HX_HCSTRING("HTTP","\x88","\x63","\xd7","\x2f"),2);
hx::Static(HTTPS) = hx::CreateEnum< ApplicationProtocol_obj >(HX_HCSTRING("HTTPS","\xcb","\xb3","\x9f","\xac"),3);
hx::Static(None) = hx::CreateEnum< ApplicationProtocol_obj >(HX_HCSTRING("None","\xd8","\x3e","\xe3","\x33"),0);
}


} // end namespace haxor
} // end namespace core
