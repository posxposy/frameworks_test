#include <hxcpp.h>

#ifndef INCLUDED_MainWindows
#include <MainWindows.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxor_component_Behaviour
#include <haxor/component/Behaviour.h>
#endif
#ifndef INCLUDED_haxor_component_Camera
#include <haxor/component/Camera.h>
#endif
#ifndef INCLUDED_haxor_component_CameraOrbit
#include <haxor/component/CameraOrbit.h>
#endif
#ifndef INCLUDED_haxor_component_CameraOrbitInput
#include <haxor/component/CameraOrbitInput.h>
#endif
#ifndef INCLUDED_haxor_component_Component
#include <haxor/component/Component.h>
#endif
#ifndef INCLUDED_haxor_component_MeshRenderer
#include <haxor/component/MeshRenderer.h>
#endif
#ifndef INCLUDED_haxor_component_Renderer
#include <haxor/component/Renderer.h>
#endif
#ifndef INCLUDED_haxor_component_Transform
#include <haxor/component/Transform.h>
#endif
#ifndef INCLUDED_haxor_context_EngineContext
#include <haxor/context/EngineContext.h>
#endif
#ifndef INCLUDED_haxor_context_GizmoContext
#include <haxor/context/GizmoContext.h>
#endif
#ifndef INCLUDED_haxor_core_Application
#include <haxor/core/Application.h>
#endif
#ifndef INCLUDED_haxor_core_BaseApplication
#include <haxor/core/BaseApplication.h>
#endif
#ifndef INCLUDED_haxor_core_Console
#include <haxor/core/Console.h>
#endif
#ifndef INCLUDED_haxor_core_Entity
#include <haxor/core/Entity.h>
#endif
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_IRenderable
#include <haxor/core/IRenderable.h>
#endif
#ifndef INCLUDED_haxor_core_IResizeable
#include <haxor/core/IResizeable.h>
#endif
#ifndef INCLUDED_haxor_core_IUpdateable
#include <haxor/core/IUpdateable.h>
#endif
#ifndef INCLUDED_haxor_core_PixelFormat
#include <haxor/core/PixelFormat.h>
#endif
#ifndef INCLUDED_haxor_core_Platform
#include <haxor/core/Platform.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_graphics_Bitmap
#include <haxor/graphics/Bitmap.h>
#endif
#ifndef INCLUDED_haxor_graphics_material_Material
#include <haxor/graphics/material/Material.h>
#endif
#ifndef INCLUDED_haxor_graphics_mesh_Mesh
#include <haxor/graphics/mesh/Mesh.h>
#endif
#ifndef INCLUDED_haxor_graphics_mesh_Model
#include <haxor/graphics/mesh/Model.h>
#endif
#ifndef INCLUDED_haxor_graphics_texture_Texture
#include <haxor/graphics/texture/Texture.h>
#endif
#ifndef INCLUDED_haxor_graphics_texture_Texture2D
#include <haxor/graphics/texture/Texture2D.h>
#endif
#ifndef INCLUDED_haxor_math_Color
#include <haxor/math/Color.h>
#endif
#ifndef INCLUDED_haxor_math_Vector3
#include <haxor/math/Vector3.h>
#endif
#ifndef INCLUDED_haxor_platform_windows_Entry
#include <haxor/platform/windows/Entry.h>
#endif
#ifndef INCLUDED_haxor_platform_windows_WinApplication
#include <haxor/platform/windows/WinApplication.h>
#endif

Void MainWindows_obj::__construct()
{
HX_STACK_FRAME("MainWindows","new",0x07384d1c,"MainWindows.new","MainWindows.hx",86,0x35fcc9d4)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(86)
	super::__construct();
}
;
	return null();
}

//MainWindows_obj::~MainWindows_obj() { }

Dynamic MainWindows_obj::__CreateEmpty() { return  new MainWindows_obj; }
hx::ObjectPtr< MainWindows_obj > MainWindows_obj::__new()
{  hx::ObjectPtr< MainWindows_obj > _result_ = new MainWindows_obj();
	_result_->__construct();
	return _result_;}

Dynamic MainWindows_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MainWindows_obj > _result_ = new MainWindows_obj();
	_result_->__construct();
	return _result_;}

hx::Object *MainWindows_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxor::core::IRenderable_obj)) return operator ::haxor::core::IRenderable_obj *();
	return super::__ToInterface(inType);
}

MainWindows_obj::operator ::haxor::core::IRenderable_obj *()
	{ return new ::haxor::core::IRenderable_delegate_< MainWindows_obj >(this); }
Void MainWindows_obj::Initialize( ){
{
		HX_STACK_FRAME("MainWindows","Initialize",0xb15b0834,"MainWindows.Initialize","MainWindows.hx",91,0x35fcc9d4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(92)
		::haxor::core::Platform tmp = this->get_platform();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(92)
		::String tmp1 = ::Std_obj::string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(92)
		::String tmp2 = (tmp1 + HX_HCSTRING("> Application Initialize","\x02","\x28","\x15","\x3f"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(92)
		::haxor::core::Console_obj::Log(tmp2,null());
		HX_STACK_LINE(95)
		::haxor::component::CameraOrbit tmp3 = ::haxor::component::CameraOrbit_obj::Create(((Float)4.0),(int)45,(int)45);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(95)
		::haxor::component::CameraOrbit o = tmp3;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(97)
		::haxor::math::Color tmp4 = ::haxor::math::Color_obj::__new(((Float)0.5),((Float)0.5),((Float)0.5),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(97)
		::haxor::component::Camera tmp5 = o->get_camera();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(97)
		tmp5->background = tmp4;
		HX_STACK_LINE(99)
		Dynamic tmp6 = o->m_entity->AddComponent(hx::ClassOf< ::haxor::component::CameraOrbitInput >());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(99)
		::haxor::component::CameraOrbitInput ci = tmp6;		HX_STACK_VAR(ci,"ci");
		HX_STACK_LINE(102)
		int tmp7 = ::haxor::core::PixelFormat_obj::RGBA8;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(102)
		::haxor::graphics::texture::Texture2D tmp8 = ::haxor::graphics::texture::Texture2D_obj::__new((int)2,(int)2,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(102)
		::haxor::graphics::texture::Texture2D tex = tmp8;		HX_STACK_VAR(tex,"tex");
		HX_STACK_LINE(103)
		int tmp9 = tex->set_magFilter((int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(103)
		tex->set_minFilter(tmp9);
		HX_STACK_LINE(104)
		::haxor::math::Color tmp10 = ::haxor::math::Color_obj::__new(((Float)1.0),(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(104)
		tex->m_data->SetPixel((int)0,(int)0,tmp10);
		HX_STACK_LINE(105)
		::haxor::math::Color tmp11 = ::haxor::math::Color_obj::__new((int)0,(int)1,(int)0,(int)1);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(105)
		tex->m_data->SetPixel((int)1,(int)0,tmp11);
		HX_STACK_LINE(106)
		::haxor::math::Color tmp12 = ::haxor::math::Color_obj::__new((int)0,(int)0,(int)1,(int)1);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(106)
		tex->m_data->SetPixel((int)0,(int)1,tmp12);
		HX_STACK_LINE(107)
		::haxor::math::Color tmp13 = ::haxor::math::Color_obj::__new((int)1,(int)1,(int)0,(int)1);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(107)
		tex->m_data->SetPixel((int)1,(int)1,tmp13);
		HX_STACK_LINE(108)
		tex->Apply();
		HX_STACK_LINE(111)
		int tmp14 = ::haxor::core::PixelFormat_obj::Float4;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(111)
		::haxor::graphics::texture::Texture2D tmp15 = ::haxor::graphics::texture::Texture2D_obj::__new((int)2,(int)2,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(111)
		::haxor::graphics::texture::Texture2D tex1 = tmp15;		HX_STACK_VAR(tex1,"tex1");
		HX_STACK_LINE(112)
		int tmp16 = tex1->set_magFilter((int)0);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(112)
		tex1->set_minFilter(tmp16);
		HX_STACK_LINE(113)
		::haxor::math::Color tmp17 = ::haxor::math::Color_obj::__new(((Float)1.0),(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(113)
		tex1->m_data->SetPixel((int)0,(int)0,tmp17);
		HX_STACK_LINE(114)
		::haxor::math::Color tmp18 = ::haxor::math::Color_obj::__new((int)0,(int)1,(int)0,(int)1);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(114)
		tex1->m_data->SetPixel((int)1,(int)0,tmp18);
		HX_STACK_LINE(115)
		::haxor::math::Color tmp19 = ::haxor::math::Color_obj::__new((int)0,(int)0,(int)1,(int)1);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(115)
		tex1->m_data->SetPixel((int)0,(int)1,tmp19);
		HX_STACK_LINE(116)
		::haxor::math::Color tmp20 = ::haxor::math::Color_obj::__new((int)1,(int)1,(int)0,(int)1);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(116)
		tex1->m_data->SetPixel((int)1,(int)1,tmp20);
		HX_STACK_LINE(117)
		tex1->Apply();
		HX_STACK_LINE(121)
		::haxor::core::Entity tmp21 = ::haxor::core::Entity_obj::__new(HX_HCSTRING("MODEL","\x89","\x5b","\x46","\x8a"));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(121)
		Dynamic tmp22 = tmp21->AddComponent(hx::ClassOf< ::haxor::component::MeshRenderer >());		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(121)
		::haxor::component::MeshRenderer mr = tmp22;		HX_STACK_VAR(mr,"mr");
		HX_STACK_LINE(122)
		::haxor::graphics::texture::Texture2D tmp23 = tex1;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(122)
		::haxor::graphics::material::Material tmp24 = ::haxor::graphics::material::Material_obj::Transparent(tmp23,null(),null(),null());		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(122)
		mr->set_material(tmp24);
		HX_STACK_LINE(123)
		::haxor::graphics::mesh::Mesh tmp25 = ::haxor::graphics::mesh::Model_obj::get_cube();		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(123)
		mr->set_mesh(tmp25);
		HX_STACK_LINE(124)
		{
			HX_STACK_LINE(124)
			::haxor::math::Color tmp26 = ::haxor::math::Color_obj::__new(((Float)1.0),((Float)1.0),((Float)1.0),((Float)0.2));		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(124)
			::haxor::math::Color p_color = tmp26;		HX_STACK_VAR(p_color,"p_color");
			HX_STACK_LINE(124)
			Float tmp27 = p_color->r;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(124)
			Float tmp28 = p_color->g;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(124)
			Float tmp29 = p_color->b;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(124)
			Float tmp30 = p_color->a;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(124)
			mr->m_material->SetFloat4(HX_HCSTRING("Tint","\x1b","\xf9","\xd5","\x37"),tmp27,tmp28,tmp29,tmp30);
		}
		HX_STACK_LINE(126)
		::haxor::component::Transform tmp26 = mr->m_entity->m_transform;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(126)
		::haxor::math::Vector3 tmp27 = ::haxor::math::Vector3_obj::__new(((Float)0.0),((Float)0.0),((Float)0.0));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(126)
		tmp26->set_localPosition(tmp27);
		HX_STACK_LINE(127)
		::haxor::component::Transform tmp28 = mr->m_entity->m_transform;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(127)
		::haxor::math::Vector3 tmp29 = ::haxor::math::Vector3_obj::__new((int)1,(int)1,(int)1);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(127)
		tmp28->set_localScale(tmp29);
	}
return null();
}


Void MainWindows_obj::OnRender( ){
{
		HX_STACK_FRAME("MainWindows","OnRender",0xa8f9f7b9,"MainWindows.OnRender","MainWindows.hx",134,0x35fcc9d4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(134)
		::haxor::context::GizmoContext tmp = ::haxor::context::EngineContext_obj::gizmo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(134)
		tmp->DrawGrid(((Float)100.0),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MainWindows_obj,OnRender,(void))

Void MainWindows_obj::main( ){
{
		HX_STACK_FRAME("MainWindows","main",0x495edffd,"MainWindows.main","MainWindows.hx",88,0x35fcc9d4)
		HX_STACK_LINE(88)
		::haxor::platform::windows::Entry_obj::Initialize();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MainWindows_obj,main,(void))


MainWindows_obj::MainWindows_obj()
{
}

Dynamic MainWindows_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"OnRender") ) { return OnRender_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"Initialize") ) { return Initialize_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool MainWindows_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("Initialize","\x70","\x35","\x6c","\xe3"),
	HX_HCSTRING("OnRender","\xf5","\x1d","\x88","\xbe"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MainWindows_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MainWindows_obj::__mClass,"__mClass");
};

#endif

hx::Class MainWindows_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("main","\x39","\x38","\x56","\x48"),
	String(null()) };

void MainWindows_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("MainWindows","\x2a","\xcf","\x94","\x6d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MainWindows_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MainWindows_obj >;
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

