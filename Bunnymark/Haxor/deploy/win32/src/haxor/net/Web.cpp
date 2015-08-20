#include <hxcpp.h>

#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_IRenderable
#include <haxor/core/IRenderable.h>
#endif
#ifndef INCLUDED_haxor_core_IUpdateable
#include <haxor/core/IUpdateable.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_graphics_Bitmap
#include <haxor/graphics/Bitmap.h>
#endif
#ifndef INCLUDED_haxor_graphics_material_Shader
#include <haxor/graphics/material/Shader.h>
#endif
#ifndef INCLUDED_haxor_graphics_texture_Texture
#include <haxor/graphics/texture/Texture.h>
#endif
#ifndef INCLUDED_haxor_graphics_texture_Texture2D
#include <haxor/graphics/texture/Texture2D.h>
#endif
#ifndef INCLUDED_haxor_graphics_texture_TextureCube
#include <haxor/graphics/texture/TextureCube.h>
#endif
#ifndef INCLUDED_haxor_io_file_AssetFile
#include <haxor/io/file/AssetFile.h>
#endif
#ifndef INCLUDED_haxor_io_file_AssetXML
#include <haxor/io/file/AssetXML.h>
#endif
#ifndef INCLUDED_haxor_io_file_ColladaFile
#include <haxor/io/file/ColladaFile.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_Formatter
#include <haxor/io/serialization/Formatter.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_haxor_HaxorFormatter
#include <haxor/io/serialization/haxor/HaxorFormatter.h>
#endif
#ifndef INCLUDED_haxor_net_HTTPRequestTask
#include <haxor/net/HTTPRequestTask.h>
#endif
#ifndef INCLUDED_haxor_net_Texture2DLoader
#include <haxor/net/Texture2DLoader.h>
#endif
#ifndef INCLUDED_haxor_net_Web
#include <haxor/net/Web.h>
#endif
#ifndef INCLUDED_haxor_platform_windows_net_BitmapLoader
#include <haxor/platform/windows/net/BitmapLoader.h>
#endif
#ifndef INCLUDED_haxor_platform_windows_net_HTTPLoader
#include <haxor/platform/windows/net/HTTPLoader.h>
#endif
#ifndef INCLUDED_haxor_platform_windows_net_HTTPRequest
#include <haxor/platform/windows/net/HTTPRequest.h>
#endif
#ifndef INCLUDED_haxor_thread_Activity
#include <haxor/thread/Activity.h>
#endif
#ifndef INCLUDED_haxor_thread_Task
#include <haxor/thread/Task.h>
#endif
namespace haxor{
namespace net{

Void Web_obj::__construct()
{
	return null();
}

//Web_obj::~Web_obj() { }

Dynamic Web_obj::__CreateEmpty() { return  new Web_obj; }
hx::ObjectPtr< Web_obj > Web_obj::__new()
{  hx::ObjectPtr< Web_obj > _result_ = new Web_obj();
	_result_->__construct();
	return _result_;}

Dynamic Web_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Web_obj > _result_ = new Web_obj();
	_result_->__construct();
	return _result_;}

::String Web_obj::root;

Void Web_obj::Load( ::String p_url,Dynamic p_callback){
{
		HX_STACK_FRAME("haxor.net.Web","Load",0x1fa4e45d,"haxor.net.Web.Load","haxor/net/Web.hx",44,0x66abd769)
		HX_STACK_ARG(p_url,"p_url")
		HX_STACK_ARG(p_callback,"p_callback")
		HX_STACK_LINE(44)
		::haxor::platform::windows::net::HTTPLoader tmp = ::haxor::platform::windows::net::HTTPLoader_obj::__new(p_url,false,p_callback);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(44)
		::haxor::platform::windows::net::HTTPLoader ld = tmp;		HX_STACK_VAR(ld,"ld");
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Web_obj,Load,(void))

Void Web_obj::LoadImg( ::String p_url,Dynamic p_callback){
{
		HX_STACK_FRAME("haxor.net.Web","LoadImg",0x313237a6,"haxor.net.Web.LoadImg","haxor/net/Web.hx",51,0x66abd769)
		HX_STACK_ARG(p_url,"p_url")
		HX_STACK_ARG(p_callback,"p_callback")
		HX_STACK_LINE(51)
		::haxor::platform::windows::net::BitmapLoader tmp = ::haxor::platform::windows::net::BitmapLoader_obj::__new(p_url,p_callback);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(51)
		::haxor::platform::windows::net::BitmapLoader ld = tmp;		HX_STACK_VAR(ld,"ld");
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Web_obj,LoadImg,(void))

Void Web_obj::LoadTexture2D( ::String p_url,bool p_apply,Dynamic p_callback){
{
		HX_STACK_FRAME("haxor.net.Web","LoadTexture2D",0x4ac82950,"haxor.net.Web.LoadTexture2D","haxor/net/Web.hx",58,0x66abd769)
		HX_STACK_ARG(p_url,"p_url")
		HX_STACK_ARG(p_apply,"p_apply")
		HX_STACK_ARG(p_callback,"p_callback")
		HX_STACK_LINE(58)
		::haxor::net::Texture2DLoader tmp = ::haxor::net::Texture2DLoader_obj::__new(p_url,p_apply,p_callback);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(58)
		::haxor::net::Texture2DLoader ld = tmp;		HX_STACK_VAR(ld,"ld");
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Web_obj,LoadTexture2D,(void))

Void Web_obj::LoadTextureCubeCross( ::String p_url,bool p_apply,Dynamic p_callback){
{
		HX_STACK_FRAME("haxor.net.Web","LoadTextureCubeCross",0x33bd286d,"haxor.net.Web.LoadTextureCubeCross","haxor/net/Web.hx",67,0x66abd769)
		HX_STACK_ARG(p_url,"p_url")
		HX_STACK_ARG(p_apply,"p_apply")
		HX_STACK_ARG(p_callback,"p_callback")

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Dynamic,p_callback)
		int __ArgCount() const { return 2; }
		Void run(::haxor::graphics::texture::Texture2D t,Float p){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxor/net/Web.hx",69,0x66abd769)
			HX_STACK_ARG(t,"t")
			HX_STACK_ARG(p,"p")
			{
				HX_STACK_LINE(70)
				bool tmp = (p < ((Float)1.0));		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(70)
				if ((tmp)){
					HX_STACK_LINE(70)
					Float tmp1 = p;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(70)
					p_callback(null(),tmp1).Cast< Void >();
				}
				else{
					HX_STACK_LINE(73)
					bool tmp1 = (t == null());		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(73)
					if ((tmp1)){
						HX_STACK_LINE(75)
						p_callback(null(),((Float)1.0)).Cast< Void >();
						HX_STACK_LINE(76)
						return null();
					}
					HX_STACK_LINE(78)
					::haxor::graphics::texture::TextureCube tmp2 = ::haxor::graphics::texture::TextureCube_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(78)
					::haxor::graphics::texture::TextureCube tc = tmp2;		HX_STACK_VAR(tc,"tc");
					HX_STACK_LINE(79)
					::haxor::graphics::texture::Texture2D tmp3 = t;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(79)
					tc->LoadCrossTexture(tmp3);
					HX_STACK_LINE(80)
					::haxor::graphics::texture::Texture2D tmp4 = t;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(80)
					::haxor::core::Resource_obj::Destroy(tmp4);
					HX_STACK_LINE(81)
					::haxor::graphics::texture::TextureCube tmp5 = tc;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(81)
					p_callback(tmp5,((Float)1.0)).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC2((void))

		HX_STACK_LINE(68)
		::haxor::net::Texture2DLoader tmp = ::haxor::net::Texture2DLoader_obj::__new(p_url,true, Dynamic(new _Function_1_1(p_callback)));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(68)
		::haxor::net::Texture2DLoader ld = tmp;		HX_STACK_VAR(ld,"ld");
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Web_obj,LoadTextureCubeCross,(void))

Void Web_obj::LoadCollada( ::String p_url,Dynamic p_callback){
{
		HX_STACK_FRAME("haxor.net.Web","LoadCollada",0x4c81d695,"haxor.net.Web.LoadCollada","haxor/net/Web.hx",92,0x66abd769)
		HX_STACK_ARG(p_url,"p_url")
		HX_STACK_ARG(p_callback,"p_callback")
		HX_STACK_LINE(92)
		::String tmp = p_url;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::String,p_url,Dynamic,p_callback)
		int __ArgCount() const { return 2; }
		Void run(::String d,Float p){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxor/net/Web.hx",92,0x66abd769)
			HX_STACK_ARG(d,"d")
			HX_STACK_ARG(p,"p")
			{
				HX_STACK_LINE(92)
				bool tmp1 = (p < ((Float)1.0));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(92)
				if ((tmp1)){
					HX_STACK_LINE(92)
					Float tmp2 = p;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(92)
					p_callback(null(),tmp2).Cast< Void >();
				}
				else{
					HX_STACK_LINE(92)
					bool tmp2 = (d == null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(92)
					::haxor::io::file::ColladaFile tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(92)
					if ((tmp2)){
						HX_STACK_LINE(92)
						tmp3 = null();
					}
					else{
						HX_STACK_LINE(92)
						tmp3 = ::haxor::io::file::ColladaFile_obj::__new(p_url,d);
					}
					HX_STACK_LINE(92)
					p_callback(tmp3,((Float)1.0)).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC2((void))

		HX_STACK_LINE(92)
		::haxor::net::Web_obj::Load(tmp, Dynamic(new _Function_1_1(p_url,p_callback)));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Web_obj,LoadCollada,(void))

Void Web_obj::LoadShader( ::String p_url,Dynamic p_callback){
{
		HX_STACK_FRAME("haxor.net.Web","LoadShader",0xfd693b62,"haxor.net.Web.LoadShader","haxor/net/Web.hx",99,0x66abd769)
		HX_STACK_ARG(p_url,"p_url")
		HX_STACK_ARG(p_callback,"p_callback")
		HX_STACK_LINE(99)
		::String tmp = p_url;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Dynamic,p_callback)
		int __ArgCount() const { return 2; }
		Void run(::String d,Float p){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxor/net/Web.hx",99,0x66abd769)
			HX_STACK_ARG(d,"d")
			HX_STACK_ARG(p,"p")
			{
				HX_STACK_LINE(99)
				bool tmp1 = (p < ((Float)1.0));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(99)
				if ((tmp1)){
					HX_STACK_LINE(99)
					Float tmp2 = p;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(99)
					p_callback(null(),tmp2).Cast< Void >();
				}
				else{
					HX_STACK_LINE(99)
					bool tmp2 = (d == null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(99)
					::haxor::graphics::material::Shader tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(99)
					if ((tmp2)){
						HX_STACK_LINE(99)
						tmp3 = null();
					}
					else{
						HX_STACK_LINE(99)
						::String tmp4 = d;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(99)
						tmp3 = ::haxor::io::serialization::haxor::HaxorFormatter_obj::Parse(tmp4);
					}
					HX_STACK_LINE(99)
					p_callback(tmp3,((Float)1.0)).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC2((void))

		HX_STACK_LINE(99)
		::haxor::net::Web_obj::Load(tmp, Dynamic(new _Function_1_1(p_callback)));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Web_obj,LoadShader,(void))


Web_obj::Web_obj()
{
}

bool Web_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { outValue = root; return true;  }
		if (HX_FIELD_EQ(inName,"Load") ) { outValue = Load_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"LoadImg") ) { outValue = LoadImg_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"LoadShader") ) { outValue = LoadShader_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"LoadCollada") ) { outValue = LoadCollada_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"LoadTexture2D") ) { outValue = LoadTexture2D_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"LoadTextureCubeCross") ) { outValue = LoadTextureCubeCross_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &Web_obj::root,HX_HCSTRING("root","\x22","\xee","\xae","\x4b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Web_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Web_obj::root,"root");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Web_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Web_obj::root,"root");
};

#endif

hx::Class Web_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("root","\x22","\xee","\xae","\x4b"),
	HX_HCSTRING("Load","\x46","\xc6","\x90","\x32"),
	HX_HCSTRING("LoadImg","\x5d","\xad","\x2b","\xd6"),
	HX_HCSTRING("LoadTexture2D","\x47","\x42","\x9f","\x79"),
	HX_HCSTRING("LoadTextureCubeCross","\x56","\x2c","\x25","\x88"),
	HX_HCSTRING("LoadCollada","\xcc","\xf3","\x2d","\xa2"),
	HX_HCSTRING("LoadShader","\x0b","\xf2","\xfc","\xc8"),
	String(null()) };

void Web_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.net.Web","\xb7","\xf9","\x42","\x68");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Web_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Web_obj >;
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

void Web_obj::__boot()
{
	root= HX_HCSTRING("","\x00","\x00","\x00","\x00");
}

} // end namespace haxor
} // end namespace net
