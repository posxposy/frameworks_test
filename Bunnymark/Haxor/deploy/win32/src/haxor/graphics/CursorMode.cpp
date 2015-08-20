#include <hxcpp.h>

#ifndef INCLUDED_haxor_graphics_CursorMode
#include <haxor/graphics/CursorMode.h>
#endif
namespace haxor{
namespace graphics{

::haxor::graphics::CursorMode CursorMode_obj::Hide;

::haxor::graphics::CursorMode CursorMode_obj::Lock;

::haxor::graphics::CursorMode CursorMode_obj::Show;

HX_DEFINE_CREATE_ENUM(CursorMode_obj)

int CursorMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("Hide","\xe2","\x60","\xe7","\x2f")) return 1;
	if (inName==HX_HCSTRING("Lock","\x0b","\xc8","\x90","\x32")) return 2;
	if (inName==HX_HCSTRING("Show","\x1d","\x01","\x2c","\x37")) return 0;
	return super::__FindIndex(inName);
}

int CursorMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("Hide","\xe2","\x60","\xe7","\x2f")) return 0;
	if (inName==HX_HCSTRING("Lock","\x0b","\xc8","\x90","\x32")) return 0;
	if (inName==HX_HCSTRING("Show","\x1d","\x01","\x2c","\x37")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic CursorMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("Hide","\xe2","\x60","\xe7","\x2f")) return Hide;
	if (inName==HX_HCSTRING("Lock","\x0b","\xc8","\x90","\x32")) return Lock;
	if (inName==HX_HCSTRING("Show","\x1d","\x01","\x2c","\x37")) return Show;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("Show","\x1d","\x01","\x2c","\x37"),
	HX_HCSTRING("Hide","\xe2","\x60","\xe7","\x2f"),
	HX_HCSTRING("Lock","\x0b","\xc8","\x90","\x32"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CursorMode_obj::Hide,"Hide");
	HX_MARK_MEMBER_NAME(CursorMode_obj::Lock,"Lock");
	HX_MARK_MEMBER_NAME(CursorMode_obj::Show,"Show");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CursorMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CursorMode_obj::Hide,"Hide");
	HX_VISIT_MEMBER_NAME(CursorMode_obj::Lock,"Lock");
	HX_VISIT_MEMBER_NAME(CursorMode_obj::Show,"Show");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class CursorMode_obj::__mClass;

Dynamic __Create_CursorMode_obj() { return new CursorMode_obj; }

void CursorMode_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("haxor.graphics.CursorMode","\x10","\x68","\x0b","\x49"), hx::TCanCast< CursorMode_obj >,sStaticFields,sMemberFields,
	&__Create_CursorMode_obj, &__Create,
	&super::__SGetClass(), &CreateCursorMode_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void CursorMode_obj::__boot()
{
hx::Static(Hide) = hx::CreateEnum< CursorMode_obj >(HX_HCSTRING("Hide","\xe2","\x60","\xe7","\x2f"),1);
hx::Static(Lock) = hx::CreateEnum< CursorMode_obj >(HX_HCSTRING("Lock","\x0b","\xc8","\x90","\x32"),2);
hx::Static(Show) = hx::CreateEnum< CursorMode_obj >(HX_HCSTRING("Show","\x1d","\x01","\x2c","\x37"),0);
}


} // end namespace haxor
} // end namespace graphics
