#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxor_component_Behaviour
#include <haxor/component/Behaviour.h>
#endif
#ifndef INCLUDED_haxor_component_Component
#include <haxor/component/Component.h>
#endif
#ifndef INCLUDED_haxor_core_Asset
#include <haxor/core/Asset.h>
#endif
#ifndef INCLUDED_haxor_core_BaseApplication
#include <haxor/core/BaseApplication.h>
#endif
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
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
#ifndef INCLUDED_haxor_net_Web
#include <haxor/net/Web.h>
#endif
namespace haxor{
namespace core{

Void Asset_obj::__construct()
{
	return null();
}

//Asset_obj::~Asset_obj() { }

Dynamic Asset_obj::__CreateEmpty() { return  new Asset_obj; }
hx::ObjectPtr< Asset_obj > Asset_obj::__new()
{  hx::ObjectPtr< Asset_obj > _result_ = new Asset_obj();
	_result_->__construct();
	return _result_;}

Dynamic Asset_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Asset_obj > _result_ = new Asset_obj();
	_result_->__construct();
	return _result_;}

::haxe::ds::StringMap Asset_obj::m_database;

::haxe::ds::StringMap Asset_obj::m_load_progress;

Float Asset_obj::get_progress( ){
	HX_STACK_FRAME("haxor.core.Asset","get_progress",0x9e518c97,"haxor.core.Asset.get_progress","haxor/core/Asset.hx",38,0xf4b04511)
	HX_STACK_LINE(39)
	Float l = ((Float)0.0);		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(40)
	Float t = ((Float)0.0);		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(41)
	::haxe::ds::StringMap tmp = ::haxor::core::Asset_obj::m_load_progress;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(41)
	Dynamic it = tmp1;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(42)
	while((true)){
		HX_STACK_LINE(42)
		bool tmp2 = it->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic )();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(42)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(42)
		if ((tmp3)){
			HX_STACK_LINE(42)
			break;
		}
		HX_STACK_LINE(44)
		::String tmp4 = it->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(44)
		::String k = tmp4;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(45)
		::haxe::ds::StringMap tmp5 = ::haxor::core::Asset_obj::m_load_progress;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(45)
		::String tmp6 = k;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(45)
		bool tmp7 = tmp5->exists(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(45)
		Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(45)
		if ((tmp7)){
			HX_STACK_LINE(45)
			::haxe::ds::StringMap tmp9 = ::haxor::core::Asset_obj::m_load_progress;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(45)
			::String tmp10 = k;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(45)
			Dynamic tmp11 = tmp9->get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(45)
			tmp8 = tmp11;
		}
		else{
			HX_STACK_LINE(45)
			tmp8 = ((Float)0.0);
		}
		HX_STACK_LINE(45)
		hx::AddEq(l,tmp8);
		HX_STACK_LINE(46)
		hx::AddEq(t,((Float)1.0));
	}
	HX_STACK_LINE(48)
	bool tmp2 = (t <= ((Float)0.0));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(48)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(48)
	if ((tmp2)){
		HX_STACK_LINE(48)
		tmp3 = ((Float)0.0);
	}
	else{
		HX_STACK_LINE(48)
		tmp3 = (Float(l) / Float(t));
	}
	HX_STACK_LINE(48)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Asset_obj,get_progress,return )

Dynamic Asset_obj::Get( ::String p_id){
	HX_STACK_FRAME("haxor.core.Asset","Get",0xd02cf7b5,"haxor.core.Asset.Get","haxor/core/Asset.hx",56,0xf4b04511)
	HX_STACK_ARG(p_id,"p_id")
	HX_STACK_LINE(56)
	::haxe::ds::StringMap tmp = ::haxor::core::Asset_obj::m_database;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	::String tmp1 = p_id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(56)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(56)
	Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(56)
	if ((tmp2)){
		HX_STACK_LINE(56)
		::haxe::ds::StringMap tmp4 = ::haxor::core::Asset_obj::m_database;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(56)
		::String tmp5 = p_id;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(56)
		Dynamic tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(56)
		tmp3 = tmp6;
	}
	else{
		HX_STACK_LINE(56)
		tmp3 = null();
	}
	HX_STACK_LINE(56)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Asset_obj,Get,return )

Dynamic Asset_obj::Remove( ::String p_id){
	HX_STACK_FRAME("haxor.core.Asset","Remove",0xb04c2285,"haxor.core.Asset.Remove","haxor/core/Asset.hx",63,0xf4b04511)
	HX_STACK_ARG(p_id,"p_id")
	HX_STACK_LINE(63)
	::haxe::ds::StringMap tmp = ::haxor::core::Asset_obj::m_database;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	::String tmp1 = p_id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(63)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(63)
	if ((tmp2)){
		HX_STACK_LINE(63)
		::haxe::ds::StringMap tmp3 = ::haxor::core::Asset_obj::m_database;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(63)
		::String tmp4 = p_id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(63)
		Dynamic tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(63)
		Dynamic a = tmp5;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(63)
		::haxe::ds::StringMap tmp6 = ::haxor::core::Asset_obj::m_database;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(63)
		::String tmp7 = p_id;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(63)
		tmp6->remove(tmp7);
		HX_STACK_LINE(63)
		Dynamic tmp8 = a;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(63)
		return tmp8;
	}
	HX_STACK_LINE(63)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Asset_obj,Remove,return )

Void Asset_obj::Add( ::String p_id,Dynamic p_asset){
{
		HX_STACK_FRAME("haxor.core.Asset","Add",0xd0286940,"haxor.core.Asset.Add","haxor/core/Asset.hx",71,0xf4b04511)
		HX_STACK_ARG(p_id,"p_id")
		HX_STACK_ARG(p_asset,"p_asset")
		HX_STACK_LINE(71)
		{
			HX_STACK_LINE(71)
			Dynamic value = p_asset;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(71)
			::haxe::ds::StringMap tmp = ::haxor::core::Asset_obj::m_database;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(71)
			::String tmp1 = p_id;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(71)
			Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(71)
			tmp->set(tmp1,tmp2);
		}
		HX_STACK_LINE(71)
		Dynamic tmp = p_asset;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(71)
		bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::haxor::core::Resource >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(71)
		if ((tmp1)){
			HX_STACK_LINE(71)
			::haxor::core::Resource tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(71)
			tmp2 = hx::TCast< ::haxor::core::Resource >::cast(p_asset);
			HX_STACK_LINE(71)
			tmp2->__db = p_id;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Asset_obj,Add,(void))

Void Asset_obj::LoadTexture2D( ::String p_id,::String p_url){
{
		HX_STACK_FRAME("haxor.core.Asset","LoadTexture2D",0xc1d72646,"haxor.core.Asset.LoadTexture2D","haxor/core/Asset.hx",79,0xf4b04511)
		HX_STACK_ARG(p_id,"p_id")
		HX_STACK_ARG(p_url,"p_url")
		HX_STACK_LINE(80)
		::haxe::ds::StringMap tmp = ::haxor::core::Asset_obj::m_load_progress;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(80)
		::String tmp1 = p_id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(80)
		tmp->set(tmp1,((Float)0.0));
		HX_STACK_LINE(81)
		::String tmp2 = p_url;		HX_STACK_VAR(tmp2,"tmp2");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::String,p_id)
		int __ArgCount() const { return 2; }
		Void run(::haxor::graphics::texture::Texture2D d,Float p){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxor/core/Asset.hx",81,0xf4b04511)
			HX_STACK_ARG(d,"d")
			HX_STACK_ARG(p,"p")
			{
				HX_STACK_LINE(81)
				::String tmp3 = p_id;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(81)
				Float tmp4 = p;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(81)
				::haxor::graphics::texture::Texture2D tmp5 = d;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(81)
				::haxor::core::Asset_obj::UpdateProgress(tmp3,tmp4,tmp5);
			}
			return null();
		}
		HX_END_LOCAL_FUNC2((void))

		HX_STACK_LINE(81)
		::haxor::net::Web_obj::LoadTexture2D(tmp2,true, Dynamic(new _Function_1_1(p_id)));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Asset_obj,LoadTexture2D,(void))

Void Asset_obj::LoadTextureCubeCross( ::String p_id,::String p_url){
{
		HX_STACK_FRAME("haxor.core.Asset","LoadTextureCubeCross",0x793f5637,"haxor.core.Asset.LoadTextureCubeCross","haxor/core/Asset.hx",90,0xf4b04511)
		HX_STACK_ARG(p_id,"p_id")
		HX_STACK_ARG(p_url,"p_url")
		HX_STACK_LINE(91)
		::haxe::ds::StringMap tmp = ::haxor::core::Asset_obj::m_load_progress;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(91)
		::String tmp1 = p_id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(91)
		tmp->set(tmp1,((Float)0.0));
		HX_STACK_LINE(92)
		::String tmp2 = p_url;		HX_STACK_VAR(tmp2,"tmp2");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::String,p_id)
		int __ArgCount() const { return 2; }
		Void run(::haxor::graphics::texture::TextureCube d,Float p){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxor/core/Asset.hx",92,0xf4b04511)
			HX_STACK_ARG(d,"d")
			HX_STACK_ARG(p,"p")
			{
				HX_STACK_LINE(92)
				::String tmp3 = p_id;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(92)
				Float tmp4 = p;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(92)
				::haxor::graphics::texture::TextureCube tmp5 = d;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(92)
				::haxor::core::Asset_obj::UpdateProgress(tmp3,tmp4,tmp5);
			}
			return null();
		}
		HX_END_LOCAL_FUNC2((void))

		HX_STACK_LINE(92)
		::haxor::net::Web_obj::LoadTextureCubeCross(tmp2,true, Dynamic(new _Function_1_1(p_id)));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Asset_obj,LoadTextureCubeCross,(void))

Void Asset_obj::LoadCollada( ::String p_id,::String p_url){
{
		HX_STACK_FRAME("haxor.core.Asset","LoadCollada",0x5ee48a0b,"haxor.core.Asset.LoadCollada","haxor/core/Asset.hx",100,0xf4b04511)
		HX_STACK_ARG(p_id,"p_id")
		HX_STACK_ARG(p_url,"p_url")
		HX_STACK_LINE(100)
		::String tmp = p_url;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::String,p_id)
		int __ArgCount() const { return 2; }
		Void run(::haxor::io::file::ColladaFile d,Float p){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxor/core/Asset.hx",100,0xf4b04511)
			HX_STACK_ARG(d,"d")
			HX_STACK_ARG(p,"p")
			{
				HX_STACK_LINE(100)
				::String tmp1 = p_id;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(100)
				Float tmp2 = p;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(100)
				::haxor::io::file::ColladaFile tmp3 = d;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(100)
				::haxor::core::Asset_obj::UpdateProgress(tmp1,tmp2,tmp3);
			}
			return null();
		}
		HX_END_LOCAL_FUNC2((void))

		HX_STACK_LINE(100)
		::haxor::net::Web_obj::LoadCollada(tmp, Dynamic(new _Function_1_1(p_id)));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Asset_obj,LoadCollada,(void))

Void Asset_obj::LoadShader( ::String p_id,::String p_url){
{
		HX_STACK_FRAME("haxor.core.Asset","LoadShader",0x3a5628ac,"haxor.core.Asset.LoadShader","haxor/core/Asset.hx",107,0xf4b04511)
		HX_STACK_ARG(p_id,"p_id")
		HX_STACK_ARG(p_url,"p_url")
		HX_STACK_LINE(107)
		::String tmp = p_url;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::String,p_id)
		int __ArgCount() const { return 2; }
		Void run(::haxor::graphics::material::Shader d,Float p){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxor/core/Asset.hx",107,0xf4b04511)
			HX_STACK_ARG(d,"d")
			HX_STACK_ARG(p,"p")
			{
				HX_STACK_LINE(107)
				::String tmp1 = p_id;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(107)
				Float tmp2 = p;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(107)
				::haxor::graphics::material::Shader tmp3 = d;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(107)
				::haxor::core::Asset_obj::UpdateProgress(tmp1,tmp2,tmp3);
			}
			return null();
		}
		HX_END_LOCAL_FUNC2((void))

		HX_STACK_LINE(107)
		::haxor::net::Web_obj::LoadShader(tmp, Dynamic(new _Function_1_1(p_id)));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Asset_obj,LoadShader,(void))

Void Asset_obj::UpdateProgress( ::String p_id,Float p_progress,Dynamic p_asset){
{
		HX_STACK_FRAME("haxor.core.Asset","UpdateProgress",0x4e5a1a17,"haxor.core.Asset.UpdateProgress","haxor/core/Asset.hx",123,0xf4b04511)
		HX_STACK_ARG(p_id,"p_id")
		HX_STACK_ARG(p_progress,"p_progress")
		HX_STACK_ARG(p_asset,"p_asset")
		HX_STACK_LINE(124)
		::haxor::core::BaseApplication tmp = ::haxor::core::BaseApplication_obj::m_instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(124)
		::haxor::core::BaseApplication app = tmp;		HX_STACK_VAR(app,"app");
		HX_STACK_LINE(126)
		::haxe::ds::StringMap tmp1 = ::haxor::core::Asset_obj::m_load_progress;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(126)
		::String tmp2 = p_id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(126)
		Float tmp3 = p_progress;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(126)
		tmp1->set(tmp2,tmp3);
		HX_STACK_LINE(128)
		::String tmp4 = p_id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(128)
		Float tmp5 = p_progress;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(128)
		app->OnLoadProgress(tmp4,tmp5);
		HX_STACK_LINE(129)
		bool tmp6 = (p_progress >= ((Float)1.0));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(129)
		if ((tmp6)){
			HX_STACK_LINE(131)
			::String tmp7 = p_id;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(131)
			Dynamic tmp8 = p_asset;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(131)
			::haxor::core::Asset_obj::Add(tmp7,tmp8);
			HX_STACK_LINE(132)
			::String tmp9 = p_id;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(132)
			Dynamic tmp10 = p_asset;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(132)
			app->OnLoadComplete(tmp9,tmp10);
			HX_STACK_LINE(133)
			Float tmp11 = ::haxor::core::Asset_obj::get_progress();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(133)
			bool tmp12 = (tmp11 >= ((Float)1.0));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(133)
			if ((tmp12)){
				HX_STACK_LINE(135)
				::haxor::core::BaseApplication tmp13 = ::haxor::core::BaseApplication_obj::m_instance;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(135)
				tmp13->LoadComplete();
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Asset_obj,UpdateProgress,(void))


Asset_obj::Asset_obj()
{
}

bool Asset_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"Get") ) { outValue = Get_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Add") ) { outValue = Add_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"Remove") ) { outValue = Remove_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"progress") ) { if (inCallProp == hx::paccAlways) { outValue = get_progress(); return true; } }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_database") ) { outValue = m_database; return true;  }
		if (HX_FIELD_EQ(inName,"LoadShader") ) { outValue = LoadShader_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"LoadCollada") ) { outValue = LoadCollada_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_progress") ) { outValue = get_progress_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"LoadTexture2D") ) { outValue = LoadTexture2D_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"UpdateProgress") ) { outValue = UpdateProgress_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"m_load_progress") ) { outValue = m_load_progress; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"LoadTextureCubeCross") ) { outValue = LoadTextureCubeCross_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Asset_obj::m_database,HX_HCSTRING("m_database","\x8d","\x9c","\xf6","\xbc")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Asset_obj::m_load_progress,HX_HCSTRING("m_load_progress","\x94","\xd5","\xc8","\x5b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Asset_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Asset_obj::m_database,"m_database");
	HX_MARK_MEMBER_NAME(Asset_obj::m_load_progress,"m_load_progress");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Asset_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Asset_obj::m_database,"m_database");
	HX_VISIT_MEMBER_NAME(Asset_obj::m_load_progress,"m_load_progress");
};

#endif

hx::Class Asset_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("m_database","\x8d","\x9c","\xf6","\xbc"),
	HX_HCSTRING("m_load_progress","\x94","\xd5","\xc8","\x5b"),
	HX_HCSTRING("get_progress","\xb6","\xab","\x44","\x3b"),
	HX_HCSTRING("Get","\x76","\x38","\x36","\x00"),
	HX_HCSTRING("Remove","\x64","\x10","\x1d","\x39"),
	HX_HCSTRING("Add","\x01","\xaa","\x31","\x00"),
	HX_HCSTRING("LoadTexture2D","\x47","\x42","\x9f","\x79"),
	HX_HCSTRING("LoadTextureCubeCross","\x56","\x2c","\x25","\x88"),
	HX_HCSTRING("LoadCollada","\xcc","\xf3","\x2d","\xa2"),
	HX_HCSTRING("LoadShader","\x0b","\xf2","\xfc","\xc8"),
	HX_HCSTRING("UpdateProgress","\xf6","\x7e","\xaa","\x65"),
	String(null()) };

void Asset_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.core.Asset","\x2d","\xd4","\x8c","\x1f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Asset_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Asset_obj >;
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

void Asset_obj::__boot()
{
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/core/Asset.hx",23,0xf4b04511)
		{
			HX_STACK_LINE(23)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(23)
			::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(23)
			return tmp1;
		}
		return null();
	}
};
	m_database= _Function_0_1::Block();
struct _Function_0_2{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/core/Asset.hx",28,0xf4b04511)
		{
			HX_STACK_LINE(28)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(28)
			::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(28)
			return tmp1;
		}
		return null();
	}
};
	m_load_progress= _Function_0_2::Block();
}

} // end namespace haxor
} // end namespace core
