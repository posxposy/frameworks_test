#include <hxcpp.h>

#ifndef INCLUDED_haxor_core_TextureType
#include <haxor/core/TextureType.h>
#endif
namespace haxor{
namespace core{

::haxor::core::TextureType TextureType_obj::Compute;

::haxor::core::TextureType TextureType_obj::None;

::haxor::core::TextureType TextureType_obj::RenderTexture;

::haxor::core::TextureType TextureType_obj::Texture2D;

::haxor::core::TextureType TextureType_obj::TextureCube;

HX_DEFINE_CREATE_ENUM(TextureType_obj)

int TextureType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("Compute","\x57","\x6f","\xc9","\x50")) return 4;
	if (inName==HX_HCSTRING("None","\xd8","\x3e","\xe3","\x33")) return 0;
	if (inName==HX_HCSTRING("RenderTexture","\x05","\x8c","\xbe","\xe2")) return 3;
	if (inName==HX_HCSTRING("Texture2D","\x4d","\x01","\x1c","\x51")) return 1;
	if (inName==HX_HCSTRING("TextureCube","\x50","\xd3","\x7a","\xdc")) return 2;
	return super::__FindIndex(inName);
}

int TextureType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("Compute","\x57","\x6f","\xc9","\x50")) return 0;
	if (inName==HX_HCSTRING("None","\xd8","\x3e","\xe3","\x33")) return 0;
	if (inName==HX_HCSTRING("RenderTexture","\x05","\x8c","\xbe","\xe2")) return 0;
	if (inName==HX_HCSTRING("Texture2D","\x4d","\x01","\x1c","\x51")) return 0;
	if (inName==HX_HCSTRING("TextureCube","\x50","\xd3","\x7a","\xdc")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic TextureType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("Compute","\x57","\x6f","\xc9","\x50")) return Compute;
	if (inName==HX_HCSTRING("None","\xd8","\x3e","\xe3","\x33")) return None;
	if (inName==HX_HCSTRING("RenderTexture","\x05","\x8c","\xbe","\xe2")) return RenderTexture;
	if (inName==HX_HCSTRING("Texture2D","\x4d","\x01","\x1c","\x51")) return Texture2D;
	if (inName==HX_HCSTRING("TextureCube","\x50","\xd3","\x7a","\xdc")) return TextureCube;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("None","\xd8","\x3e","\xe3","\x33"),
	HX_HCSTRING("Texture2D","\x4d","\x01","\x1c","\x51"),
	HX_HCSTRING("TextureCube","\x50","\xd3","\x7a","\xdc"),
	HX_HCSTRING("RenderTexture","\x05","\x8c","\xbe","\xe2"),
	HX_HCSTRING("Compute","\x57","\x6f","\xc9","\x50"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextureType_obj::Compute,"Compute");
	HX_MARK_MEMBER_NAME(TextureType_obj::None,"None");
	HX_MARK_MEMBER_NAME(TextureType_obj::RenderTexture,"RenderTexture");
	HX_MARK_MEMBER_NAME(TextureType_obj::Texture2D,"Texture2D");
	HX_MARK_MEMBER_NAME(TextureType_obj::TextureCube,"TextureCube");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextureType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextureType_obj::Compute,"Compute");
	HX_VISIT_MEMBER_NAME(TextureType_obj::None,"None");
	HX_VISIT_MEMBER_NAME(TextureType_obj::RenderTexture,"RenderTexture");
	HX_VISIT_MEMBER_NAME(TextureType_obj::Texture2D,"Texture2D");
	HX_VISIT_MEMBER_NAME(TextureType_obj::TextureCube,"TextureCube");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class TextureType_obj::__mClass;

Dynamic __Create_TextureType_obj() { return new TextureType_obj; }

void TextureType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("haxor.core.TextureType","\x32","\x27","\xe4","\x08"), hx::TCanCast< TextureType_obj >,sStaticFields,sMemberFields,
	&__Create_TextureType_obj, &__Create,
	&super::__SGetClass(), &CreateTextureType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void TextureType_obj::__boot()
{
hx::Static(Compute) = hx::CreateEnum< TextureType_obj >(HX_HCSTRING("Compute","\x57","\x6f","\xc9","\x50"),4);
hx::Static(None) = hx::CreateEnum< TextureType_obj >(HX_HCSTRING("None","\xd8","\x3e","\xe3","\x33"),0);
hx::Static(RenderTexture) = hx::CreateEnum< TextureType_obj >(HX_HCSTRING("RenderTexture","\x05","\x8c","\xbe","\xe2"),3);
hx::Static(Texture2D) = hx::CreateEnum< TextureType_obj >(HX_HCSTRING("Texture2D","\x4d","\x01","\x1c","\x51"),1);
hx::Static(TextureCube) = hx::CreateEnum< TextureType_obj >(HX_HCSTRING("TextureCube","\x50","\xd3","\x7a","\xdc"),2);
}


} // end namespace haxor
} // end namespace core
