#include <hxcpp.h>

#ifndef INCLUDED_haxor_core_Platform
#include <haxor/core/Platform.h>
#endif
namespace haxor{
namespace core{

::haxor::core::Platform Platform_obj::Android;

::haxor::core::Platform Platform_obj::HTML;

::haxor::core::Platform Platform_obj::Linux;

::haxor::core::Platform Platform_obj::MacOS;

::haxor::core::Platform Platform_obj::NodeJS;

::haxor::core::Platform Platform_obj::Unknown;

::haxor::core::Platform Platform_obj::Windows;

::haxor::core::Platform Platform_obj::iOS;

HX_DEFINE_CREATE_ENUM(Platform_obj)

int Platform_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("Android","\x0f","\xc3","\xf5","\x69")) return 3;
	if (inName==HX_HCSTRING("HTML","\x6b","\x5d","\xd7","\x2f")) return 6;
	if (inName==HX_HCSTRING("Linux","\xd4","\x5b","\x2f","\x08")) return 2;
	if (inName==HX_HCSTRING("MacOS","\x53","\xc1","\x43","\x96")) return 4;
	if (inName==HX_HCSTRING("NodeJS","\x6b","\xc3","\xb6","\x5b")) return 7;
	if (inName==HX_HCSTRING("Unknown","\x6a","\x4b","\xcc","\xae")) return 0;
	if (inName==HX_HCSTRING("Windows","\x63","\x06","\xc6","\xb5")) return 1;
	if (inName==HX_HCSTRING("iOS","\xcd","\xf1","\x4f","\x00")) return 5;
	return super::__FindIndex(inName);
}

int Platform_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("Android","\x0f","\xc3","\xf5","\x69")) return 0;
	if (inName==HX_HCSTRING("HTML","\x6b","\x5d","\xd7","\x2f")) return 0;
	if (inName==HX_HCSTRING("Linux","\xd4","\x5b","\x2f","\x08")) return 0;
	if (inName==HX_HCSTRING("MacOS","\x53","\xc1","\x43","\x96")) return 0;
	if (inName==HX_HCSTRING("NodeJS","\x6b","\xc3","\xb6","\x5b")) return 0;
	if (inName==HX_HCSTRING("Unknown","\x6a","\x4b","\xcc","\xae")) return 0;
	if (inName==HX_HCSTRING("Windows","\x63","\x06","\xc6","\xb5")) return 0;
	if (inName==HX_HCSTRING("iOS","\xcd","\xf1","\x4f","\x00")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Platform_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("Android","\x0f","\xc3","\xf5","\x69")) return Android;
	if (inName==HX_HCSTRING("HTML","\x6b","\x5d","\xd7","\x2f")) return HTML;
	if (inName==HX_HCSTRING("Linux","\xd4","\x5b","\x2f","\x08")) return Linux;
	if (inName==HX_HCSTRING("MacOS","\x53","\xc1","\x43","\x96")) return MacOS;
	if (inName==HX_HCSTRING("NodeJS","\x6b","\xc3","\xb6","\x5b")) return NodeJS;
	if (inName==HX_HCSTRING("Unknown","\x6a","\x4b","\xcc","\xae")) return Unknown;
	if (inName==HX_HCSTRING("Windows","\x63","\x06","\xc6","\xb5")) return Windows;
	if (inName==HX_HCSTRING("iOS","\xcd","\xf1","\x4f","\x00")) return iOS;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("Unknown","\x6a","\x4b","\xcc","\xae"),
	HX_HCSTRING("Windows","\x63","\x06","\xc6","\xb5"),
	HX_HCSTRING("Linux","\xd4","\x5b","\x2f","\x08"),
	HX_HCSTRING("Android","\x0f","\xc3","\xf5","\x69"),
	HX_HCSTRING("MacOS","\x53","\xc1","\x43","\x96"),
	HX_HCSTRING("iOS","\xcd","\xf1","\x4f","\x00"),
	HX_HCSTRING("HTML","\x6b","\x5d","\xd7","\x2f"),
	HX_HCSTRING("NodeJS","\x6b","\xc3","\xb6","\x5b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Platform_obj::Android,"Android");
	HX_MARK_MEMBER_NAME(Platform_obj::HTML,"HTML");
	HX_MARK_MEMBER_NAME(Platform_obj::Linux,"Linux");
	HX_MARK_MEMBER_NAME(Platform_obj::MacOS,"MacOS");
	HX_MARK_MEMBER_NAME(Platform_obj::NodeJS,"NodeJS");
	HX_MARK_MEMBER_NAME(Platform_obj::Unknown,"Unknown");
	HX_MARK_MEMBER_NAME(Platform_obj::Windows,"Windows");
	HX_MARK_MEMBER_NAME(Platform_obj::iOS,"iOS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Platform_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Platform_obj::Android,"Android");
	HX_VISIT_MEMBER_NAME(Platform_obj::HTML,"HTML");
	HX_VISIT_MEMBER_NAME(Platform_obj::Linux,"Linux");
	HX_VISIT_MEMBER_NAME(Platform_obj::MacOS,"MacOS");
	HX_VISIT_MEMBER_NAME(Platform_obj::NodeJS,"NodeJS");
	HX_VISIT_MEMBER_NAME(Platform_obj::Unknown,"Unknown");
	HX_VISIT_MEMBER_NAME(Platform_obj::Windows,"Windows");
	HX_VISIT_MEMBER_NAME(Platform_obj::iOS,"iOS");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class Platform_obj::__mClass;

Dynamic __Create_Platform_obj() { return new Platform_obj; }

void Platform_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("haxor.core.Platform","\x96","\x8c","\x76","\xfd"), hx::TCanCast< Platform_obj >,sStaticFields,sMemberFields,
	&__Create_Platform_obj, &__Create,
	&super::__SGetClass(), &CreatePlatform_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Platform_obj::__boot()
{
hx::Static(Android) = hx::CreateEnum< Platform_obj >(HX_HCSTRING("Android","\x0f","\xc3","\xf5","\x69"),3);
hx::Static(HTML) = hx::CreateEnum< Platform_obj >(HX_HCSTRING("HTML","\x6b","\x5d","\xd7","\x2f"),6);
hx::Static(Linux) = hx::CreateEnum< Platform_obj >(HX_HCSTRING("Linux","\xd4","\x5b","\x2f","\x08"),2);
hx::Static(MacOS) = hx::CreateEnum< Platform_obj >(HX_HCSTRING("MacOS","\x53","\xc1","\x43","\x96"),4);
hx::Static(NodeJS) = hx::CreateEnum< Platform_obj >(HX_HCSTRING("NodeJS","\x6b","\xc3","\xb6","\x5b"),7);
hx::Static(Unknown) = hx::CreateEnum< Platform_obj >(HX_HCSTRING("Unknown","\x6a","\x4b","\xcc","\xae"),0);
hx::Static(Windows) = hx::CreateEnum< Platform_obj >(HX_HCSTRING("Windows","\x63","\x06","\xc6","\xb5"),1);
hx::Static(iOS) = hx::CreateEnum< Platform_obj >(HX_HCSTRING("iOS","\xcd","\xf1","\x4f","\x00"),5);
}


} // end namespace haxor
} // end namespace core
