#include <hxcpp.h>

#ifndef INCLUDED_haxor_core_ShaderFeature
#include <haxor/core/ShaderFeature.h>
#endif
namespace haxor{
namespace core{

Void ShaderFeature_obj::__construct()
{
	return null();
}

//ShaderFeature_obj::~ShaderFeature_obj() { }

Dynamic ShaderFeature_obj::__CreateEmpty() { return  new ShaderFeature_obj; }
hx::ObjectPtr< ShaderFeature_obj > ShaderFeature_obj::__new()
{  hx::ObjectPtr< ShaderFeature_obj > _result_ = new ShaderFeature_obj();
	_result_->__construct();
	return _result_;}

Dynamic ShaderFeature_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ShaderFeature_obj > _result_ = new ShaderFeature_obj();
	_result_->__construct();
	return _result_;}

int ShaderFeature_obj::Empty;

int ShaderFeature_obj::Texture;

int ShaderFeature_obj::Tint;

int ShaderFeature_obj::VertexColor;

int ShaderFeature_obj::Skinning;

int ShaderFeature_obj::ReflectionVertex;

int ShaderFeature_obj::ReflectionPixel;

int ShaderFeature_obj::ReflectionTexture;

int ShaderFeature_obj::FalloffVertex;

int ShaderFeature_obj::FalloffPixel;

int ShaderFeature_obj::Bump;

int ShaderFeature_obj::LightingVertex;

int ShaderFeature_obj::LightingPixel;

int ShaderFeature_obj::Specular;

int ShaderFeature_obj::SpecularTexture;

int ShaderFeature_obj::SpecularAlpha;

int ShaderFeature_obj::Lightmap;

int ShaderFeature_obj::FogVertex;

int ShaderFeature_obj::FogPixel;

int ShaderFeature_obj::Toon;

int ShaderFeature_obj::Cutoff;

int ShaderFeature_obj::Particle;

int ShaderFeature_obj::UVScroll;

int ShaderFeature_obj::Random;

int ShaderFeature_obj::AlphaTexture;

int ShaderFeature_obj::Emissive;

int ShaderFeature_obj::EmissiveTexture;


ShaderFeature_obj::ShaderFeature_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &ShaderFeature_obj::Empty,HX_HCSTRING("Empty","\x6d","\xaa","\x07","\x03")},
	{hx::fsInt,(void *) &ShaderFeature_obj::Texture,HX_HCSTRING("Texture","\xbb","\xf0","\x31","\x6c")},
	{hx::fsInt,(void *) &ShaderFeature_obj::Tint,HX_HCSTRING("Tint","\x1b","\xf9","\xd5","\x37")},
	{hx::fsInt,(void *) &ShaderFeature_obj::VertexColor,HX_HCSTRING("VertexColor","\x3f","\xd3","\xca","\x42")},
	{hx::fsInt,(void *) &ShaderFeature_obj::Skinning,HX_HCSTRING("Skinning","\x51","\xda","\x65","\x87")},
	{hx::fsInt,(void *) &ShaderFeature_obj::ReflectionVertex,HX_HCSTRING("ReflectionVertex","\x8f","\x4b","\x38","\x81")},
	{hx::fsInt,(void *) &ShaderFeature_obj::ReflectionPixel,HX_HCSTRING("ReflectionPixel","\xbb","\xc4","\xf1","\xa6")},
	{hx::fsInt,(void *) &ShaderFeature_obj::ReflectionTexture,HX_HCSTRING("ReflectionTexture","\x50","\x7e","\x52","\xb1")},
	{hx::fsInt,(void *) &ShaderFeature_obj::FalloffVertex,HX_HCSTRING("FalloffVertex","\x38","\x4c","\x9a","\x21")},
	{hx::fsInt,(void *) &ShaderFeature_obj::FalloffPixel,HX_HCSTRING("FalloffPixel","\x32","\x4c","\x86","\x68")},
	{hx::fsInt,(void *) &ShaderFeature_obj::Bump,HX_HCSTRING("Bump","\x16","\x3c","\xf9","\x2b")},
	{hx::fsInt,(void *) &ShaderFeature_obj::LightingVertex,HX_HCSTRING("LightingVertex","\x70","\x6a","\x37","\x01")},
	{hx::fsInt,(void *) &ShaderFeature_obj::LightingPixel,HX_HCSTRING("LightingPixel","\xfa","\xdc","\x47","\x12")},
	{hx::fsInt,(void *) &ShaderFeature_obj::Specular,HX_HCSTRING("Specular","\xe3","\x12","\x1e","\x6d")},
	{hx::fsInt,(void *) &ShaderFeature_obj::SpecularTexture,HX_HCSTRING("SpecularTexture","\x38","\x50","\x95","\x42")},
	{hx::fsInt,(void *) &ShaderFeature_obj::SpecularAlpha,HX_HCSTRING("SpecularAlpha","\x7b","\xad","\x67","\x2a")},
	{hx::fsInt,(void *) &ShaderFeature_obj::Lightmap,HX_HCSTRING("Lightmap","\xa6","\xdf","\xb5","\x66")},
	{hx::fsInt,(void *) &ShaderFeature_obj::FogVertex,HX_HCSTRING("FogVertex","\xe2","\x48","\xe1","\x0b")},
	{hx::fsInt,(void *) &ShaderFeature_obj::FogPixel,HX_HCSTRING("FogPixel","\xc8","\x12","\x2d","\x30")},
	{hx::fsInt,(void *) &ShaderFeature_obj::Toon,HX_HCSTRING("Toon","\x7a","\x87","\xda","\x37")},
	{hx::fsInt,(void *) &ShaderFeature_obj::Cutoff,HX_HCSTRING("Cutoff","\x4d","\x5f","\xcc","\x74")},
	{hx::fsInt,(void *) &ShaderFeature_obj::Particle,HX_HCSTRING("Particle","\x66","\xfa","\x42","\x46")},
	{hx::fsInt,(void *) &ShaderFeature_obj::UVScroll,HX_HCSTRING("UVScroll","\x4e","\x15","\xef","\x71")},
	{hx::fsInt,(void *) &ShaderFeature_obj::Random,HX_HCSTRING("Random","\x23","\x96","\x23","\xec")},
	{hx::fsInt,(void *) &ShaderFeature_obj::AlphaTexture,HX_HCSTRING("AlphaTexture","\x3d","\x5d","\x66","\xfa")},
	{hx::fsInt,(void *) &ShaderFeature_obj::Emissive,HX_HCSTRING("Emissive","\xb7","\x88","\x1d","\x9e")},
	{hx::fsInt,(void *) &ShaderFeature_obj::EmissiveTexture,HX_HCSTRING("EmissiveTexture","\xe4","\xfc","\x64","\x2b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShaderFeature_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ShaderFeature_obj::Empty,"Empty");
	HX_MARK_MEMBER_NAME(ShaderFeature_obj::Texture,"Texture");
	HX_MARK_MEMBER_NAME(ShaderFeature_obj::Tint,"Tint");
	HX_MARK_MEMBER_NAME(ShaderFeature_obj::VertexColor,"VertexColor");
	HX_MARK_MEMBER_NAME(ShaderFeature_obj::Skinning,"Skinning");
	HX_MARK_MEMBER_NAME(ShaderFeature_obj::ReflectionVertex,"ReflectionVertex");
	HX_MARK_MEMBER_NAME(ShaderFeature_obj::ReflectionPixel,"ReflectionPixel");
	HX_MARK_MEMBER_NAME(ShaderFeature_obj::ReflectionTexture,"ReflectionTexture");
	HX_MARK_MEMBER_NAME(ShaderFeature_obj::FalloffVertex,"FalloffVertex");
	HX_MARK_MEMBER_NAME(ShaderFeature_obj::FalloffPixel,"FalloffPixel");
	HX_MARK_MEMBER_NAME(ShaderFeature_obj::Bump,"Bump");
	HX_MARK_MEMBER_NAME(ShaderFeature_obj::LightingVertex,"LightingVertex");
	HX_MARK_MEMBER_NAME(ShaderFeature_obj::LightingPixel,"LightingPixel");
	HX_MARK_MEMBER_NAME(ShaderFeature_obj::Specular,"Specular");
	HX_MARK_MEMBER_NAME(ShaderFeature_obj::SpecularTexture,"SpecularTexture");
	HX_MARK_MEMBER_NAME(ShaderFeature_obj::SpecularAlpha,"SpecularAlpha");
	HX_MARK_MEMBER_NAME(ShaderFeature_obj::Lightmap,"Lightmap");
	HX_MARK_MEMBER_NAME(ShaderFeature_obj::FogVertex,"FogVertex");
	HX_MARK_MEMBER_NAME(ShaderFeature_obj::FogPixel,"FogPixel");
	HX_MARK_MEMBER_NAME(ShaderFeature_obj::Toon,"Toon");
	HX_MARK_MEMBER_NAME(ShaderFeature_obj::Cutoff,"Cutoff");
	HX_MARK_MEMBER_NAME(ShaderFeature_obj::Particle,"Particle");
	HX_MARK_MEMBER_NAME(ShaderFeature_obj::UVScroll,"UVScroll");
	HX_MARK_MEMBER_NAME(ShaderFeature_obj::Random,"Random");
	HX_MARK_MEMBER_NAME(ShaderFeature_obj::AlphaTexture,"AlphaTexture");
	HX_MARK_MEMBER_NAME(ShaderFeature_obj::Emissive,"Emissive");
	HX_MARK_MEMBER_NAME(ShaderFeature_obj::EmissiveTexture,"EmissiveTexture");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShaderFeature_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ShaderFeature_obj::Empty,"Empty");
	HX_VISIT_MEMBER_NAME(ShaderFeature_obj::Texture,"Texture");
	HX_VISIT_MEMBER_NAME(ShaderFeature_obj::Tint,"Tint");
	HX_VISIT_MEMBER_NAME(ShaderFeature_obj::VertexColor,"VertexColor");
	HX_VISIT_MEMBER_NAME(ShaderFeature_obj::Skinning,"Skinning");
	HX_VISIT_MEMBER_NAME(ShaderFeature_obj::ReflectionVertex,"ReflectionVertex");
	HX_VISIT_MEMBER_NAME(ShaderFeature_obj::ReflectionPixel,"ReflectionPixel");
	HX_VISIT_MEMBER_NAME(ShaderFeature_obj::ReflectionTexture,"ReflectionTexture");
	HX_VISIT_MEMBER_NAME(ShaderFeature_obj::FalloffVertex,"FalloffVertex");
	HX_VISIT_MEMBER_NAME(ShaderFeature_obj::FalloffPixel,"FalloffPixel");
	HX_VISIT_MEMBER_NAME(ShaderFeature_obj::Bump,"Bump");
	HX_VISIT_MEMBER_NAME(ShaderFeature_obj::LightingVertex,"LightingVertex");
	HX_VISIT_MEMBER_NAME(ShaderFeature_obj::LightingPixel,"LightingPixel");
	HX_VISIT_MEMBER_NAME(ShaderFeature_obj::Specular,"Specular");
	HX_VISIT_MEMBER_NAME(ShaderFeature_obj::SpecularTexture,"SpecularTexture");
	HX_VISIT_MEMBER_NAME(ShaderFeature_obj::SpecularAlpha,"SpecularAlpha");
	HX_VISIT_MEMBER_NAME(ShaderFeature_obj::Lightmap,"Lightmap");
	HX_VISIT_MEMBER_NAME(ShaderFeature_obj::FogVertex,"FogVertex");
	HX_VISIT_MEMBER_NAME(ShaderFeature_obj::FogPixel,"FogPixel");
	HX_VISIT_MEMBER_NAME(ShaderFeature_obj::Toon,"Toon");
	HX_VISIT_MEMBER_NAME(ShaderFeature_obj::Cutoff,"Cutoff");
	HX_VISIT_MEMBER_NAME(ShaderFeature_obj::Particle,"Particle");
	HX_VISIT_MEMBER_NAME(ShaderFeature_obj::UVScroll,"UVScroll");
	HX_VISIT_MEMBER_NAME(ShaderFeature_obj::Random,"Random");
	HX_VISIT_MEMBER_NAME(ShaderFeature_obj::AlphaTexture,"AlphaTexture");
	HX_VISIT_MEMBER_NAME(ShaderFeature_obj::Emissive,"Emissive");
	HX_VISIT_MEMBER_NAME(ShaderFeature_obj::EmissiveTexture,"EmissiveTexture");
};

#endif

hx::Class ShaderFeature_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("Empty","\x6d","\xaa","\x07","\x03"),
	HX_HCSTRING("Texture","\xbb","\xf0","\x31","\x6c"),
	HX_HCSTRING("Tint","\x1b","\xf9","\xd5","\x37"),
	HX_HCSTRING("VertexColor","\x3f","\xd3","\xca","\x42"),
	HX_HCSTRING("Skinning","\x51","\xda","\x65","\x87"),
	HX_HCSTRING("ReflectionVertex","\x8f","\x4b","\x38","\x81"),
	HX_HCSTRING("ReflectionPixel","\xbb","\xc4","\xf1","\xa6"),
	HX_HCSTRING("ReflectionTexture","\x50","\x7e","\x52","\xb1"),
	HX_HCSTRING("FalloffVertex","\x38","\x4c","\x9a","\x21"),
	HX_HCSTRING("FalloffPixel","\x32","\x4c","\x86","\x68"),
	HX_HCSTRING("Bump","\x16","\x3c","\xf9","\x2b"),
	HX_HCSTRING("LightingVertex","\x70","\x6a","\x37","\x01"),
	HX_HCSTRING("LightingPixel","\xfa","\xdc","\x47","\x12"),
	HX_HCSTRING("Specular","\xe3","\x12","\x1e","\x6d"),
	HX_HCSTRING("SpecularTexture","\x38","\x50","\x95","\x42"),
	HX_HCSTRING("SpecularAlpha","\x7b","\xad","\x67","\x2a"),
	HX_HCSTRING("Lightmap","\xa6","\xdf","\xb5","\x66"),
	HX_HCSTRING("FogVertex","\xe2","\x48","\xe1","\x0b"),
	HX_HCSTRING("FogPixel","\xc8","\x12","\x2d","\x30"),
	HX_HCSTRING("Toon","\x7a","\x87","\xda","\x37"),
	HX_HCSTRING("Cutoff","\x4d","\x5f","\xcc","\x74"),
	HX_HCSTRING("Particle","\x66","\xfa","\x42","\x46"),
	HX_HCSTRING("UVScroll","\x4e","\x15","\xef","\x71"),
	HX_HCSTRING("Random","\x23","\x96","\x23","\xec"),
	HX_HCSTRING("AlphaTexture","\x3d","\x5d","\x66","\xfa"),
	HX_HCSTRING("Emissive","\xb7","\x88","\x1d","\x9e"),
	HX_HCSTRING("EmissiveTexture","\xe4","\xfc","\x64","\x2b"),
	String(null()) };

void ShaderFeature_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.core.ShaderFeature","\x4e","\x29","\x71","\xd3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ShaderFeature_obj >;
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

void ShaderFeature_obj::__boot()
{
	Empty= (int)0;
	Texture= (int)1;
	Tint= (int)2;
	VertexColor= (int)4;
	Skinning= (int)8;
	ReflectionVertex= (int)32;
	ReflectionPixel= (int)64;
	ReflectionTexture= (int)128;
	FalloffVertex= (int)256;
	FalloffPixel= (int)512;
	Bump= (int)1024;
	LightingVertex= (int)2048;
	LightingPixel= (int)4096;
	Specular= (int)16384;
	SpecularTexture= (int)32768;
	SpecularAlpha= (int)65536;
	Lightmap= (int)131072;
	FogVertex= (int)262144;
	FogPixel= (int)262144;
	Toon= (int)524288;
	Cutoff= (int)1048576;
	Particle= (int)2097152;
	UVScroll= (int)4194304;
	Random= (int)8388608;
	AlphaTexture= (int)16777216;
	Emissive= (int)33554432;
	EmissiveTexture= (int)67108864;
}

} // end namespace haxor
} // end namespace core
