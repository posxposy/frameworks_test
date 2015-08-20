#include <hxcpp.h>

#ifndef INCLUDED_haxor_graphics_GraphicAPI
#include <haxor/graphics/GraphicAPI.h>
#endif
namespace haxor{
namespace graphics{

::haxor::graphics::GraphicAPI GraphicAPI_obj::None;

::haxor::graphics::GraphicAPI GraphicAPI_obj::OpenGL;

::haxor::graphics::GraphicAPI GraphicAPI_obj::OpenGLES;

::haxor::graphics::GraphicAPI GraphicAPI_obj::WebGL;

HX_DEFINE_CREATE_ENUM(GraphicAPI_obj)

int GraphicAPI_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("None","\xd8","\x3e","\xe3","\x33")) return 0;
	if (inName==HX_HCSTRING("OpenGL","\x8f","\xbc","\x28","\x56")) return 1;
	if (inName==HX_HCSTRING("OpenGLES","\xbd","\x7a","\x3c","\xbf")) return 2;
	if (inName==HX_HCSTRING("WebGL","\x99","\x9f","\xe9","\x5a")) return 3;
	return super::__FindIndex(inName);
}

int GraphicAPI_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("None","\xd8","\x3e","\xe3","\x33")) return 0;
	if (inName==HX_HCSTRING("OpenGL","\x8f","\xbc","\x28","\x56")) return 0;
	if (inName==HX_HCSTRING("OpenGLES","\xbd","\x7a","\x3c","\xbf")) return 0;
	if (inName==HX_HCSTRING("WebGL","\x99","\x9f","\xe9","\x5a")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic GraphicAPI_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("None","\xd8","\x3e","\xe3","\x33")) return None;
	if (inName==HX_HCSTRING("OpenGL","\x8f","\xbc","\x28","\x56")) return OpenGL;
	if (inName==HX_HCSTRING("OpenGLES","\xbd","\x7a","\x3c","\xbf")) return OpenGLES;
	if (inName==HX_HCSTRING("WebGL","\x99","\x9f","\xe9","\x5a")) return WebGL;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("None","\xd8","\x3e","\xe3","\x33"),
	HX_HCSTRING("OpenGL","\x8f","\xbc","\x28","\x56"),
	HX_HCSTRING("OpenGLES","\xbd","\x7a","\x3c","\xbf"),
	HX_HCSTRING("WebGL","\x99","\x9f","\xe9","\x5a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicAPI_obj::None,"None");
	HX_MARK_MEMBER_NAME(GraphicAPI_obj::OpenGL,"OpenGL");
	HX_MARK_MEMBER_NAME(GraphicAPI_obj::OpenGLES,"OpenGLES");
	HX_MARK_MEMBER_NAME(GraphicAPI_obj::WebGL,"WebGL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicAPI_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GraphicAPI_obj::None,"None");
	HX_VISIT_MEMBER_NAME(GraphicAPI_obj::OpenGL,"OpenGL");
	HX_VISIT_MEMBER_NAME(GraphicAPI_obj::OpenGLES,"OpenGLES");
	HX_VISIT_MEMBER_NAME(GraphicAPI_obj::WebGL,"WebGL");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class GraphicAPI_obj::__mClass;

Dynamic __Create_GraphicAPI_obj() { return new GraphicAPI_obj; }

void GraphicAPI_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("haxor.graphics.GraphicAPI","\x89","\x0d","\x94","\x9b"), hx::TCanCast< GraphicAPI_obj >,sStaticFields,sMemberFields,
	&__Create_GraphicAPI_obj, &__Create,
	&super::__SGetClass(), &CreateGraphicAPI_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void GraphicAPI_obj::__boot()
{
hx::Static(None) = hx::CreateEnum< GraphicAPI_obj >(HX_HCSTRING("None","\xd8","\x3e","\xe3","\x33"),0);
hx::Static(OpenGL) = hx::CreateEnum< GraphicAPI_obj >(HX_HCSTRING("OpenGL","\x8f","\xbc","\x28","\x56"),1);
hx::Static(OpenGLES) = hx::CreateEnum< GraphicAPI_obj >(HX_HCSTRING("OpenGLES","\xbd","\x7a","\x3c","\xbf"),2);
hx::Static(WebGL) = hx::CreateEnum< GraphicAPI_obj >(HX_HCSTRING("WebGL","\x99","\x9f","\xe9","\x5a"),3);
}


} // end namespace haxor
} // end namespace graphics
