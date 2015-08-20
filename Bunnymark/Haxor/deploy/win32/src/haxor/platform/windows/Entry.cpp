#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxor_component_Behaviour
#include <haxor/component/Behaviour.h>
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
#ifndef INCLUDED_haxor_core_Application
#include <haxor/core/Application.h>
#endif
#ifndef INCLUDED_haxor_core_BaseApplication
#include <haxor/core/BaseApplication.h>
#endif
#ifndef INCLUDED_haxor_core_Console
#include <haxor/core/Console.h>
#endif
#ifndef INCLUDED_haxor_core_Engine
#include <haxor/core/Engine.h>
#endif
#ifndef INCLUDED_haxor_core_Entity
#include <haxor/core/Entity.h>
#endif
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_graphics_GL
#include <haxor/graphics/GL.h>
#endif
#ifndef INCLUDED_haxor_graphics_GraphicContext
#include <haxor/graphics/GraphicContext.h>
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
#ifndef INCLUDED_haxor_io_serialization_ISerializable
#include <haxor/io/serialization/ISerializable.h>
#endif
#ifndef INCLUDED_haxor_math_Vector3
#include <haxor/math/Vector3.h>
#endif
#ifndef INCLUDED_haxor_platform_OSWindow
#include <haxor/platform/OSWindow.h>
#endif
#ifndef INCLUDED_haxor_platform_graphics_OpenGL
#include <haxor/platform/graphics/OpenGL.h>
#endif
#ifndef INCLUDED_haxor_platform_windows_Entry
#include <haxor/platform/windows/Entry.h>
#endif
#ifndef INCLUDED_haxor_platform_windows_WinApplication
#include <haxor/platform/windows/WinApplication.h>
#endif
#ifndef INCLUDED_haxor_platform_windows_Window
#include <haxor/platform/windows/Window.h>
#endif
#ifndef INCLUDED_haxor_platform_windows_graphics_WinGL
#include <haxor/platform/windows/graphics/WinGL.h>
#endif
namespace haxor{
namespace platform{
namespace windows{

Void Entry_obj::__construct()
{
	return null();
}

//Entry_obj::~Entry_obj() { }

Dynamic Entry_obj::__CreateEmpty() { return  new Entry_obj; }
hx::ObjectPtr< Entry_obj > Entry_obj::__new()
{  hx::ObjectPtr< Entry_obj > _result_ = new Entry_obj();
	_result_->__construct();
	return _result_;}

Dynamic Entry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Entry_obj > _result_ = new Entry_obj();
	_result_->__construct();
	return _result_;}

Void Entry_obj::Initialize( ){
{
		HX_STACK_FRAME("haxor.platform.windows.Entry","Initialize",0x071ef046,"haxor.platform.windows.Entry.Initialize","haxor/platform/windows/Entry.hx",39,0x9902f0c7)
		HX_STACK_LINE(40)
		::haxor::core::Console_obj::Initialize();
		HX_STACK_LINE(42)
		::String app_class_type = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(app_class_type,"app_class_type");
		HX_STACK_LINE(44)
		::String app_title = HX_HCSTRING("Haxor","\x22","\xe6","\x52","\xb5");		HX_STACK_VAR(app_title,"app_title");
		HX_STACK_LINE(46)
		Array< ::String > tmp = ::Sys_obj::args();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(46)
		Array< ::String > args = tmp;		HX_STACK_VAR(args,"args");
		HX_STACK_LINE(48)
		{
			HX_STACK_LINE(48)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(48)
			int _g = args->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(48)
			while((true)){
				HX_STACK_LINE(48)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(48)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(48)
				if ((tmp2)){
					HX_STACK_LINE(48)
					break;
				}
				HX_STACK_LINE(48)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(48)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(51)
				::String tmp4 = args->__get(i);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(51)
				::String tmp5 = tmp4.toLowerCase();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(51)
				int tmp6 = tmp5.indexOf(HX_HCSTRING("-v","\xa9","\x27","\x00","\x00"),null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(51)
				bool tmp7 = (tmp6 >= (int)0);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(51)
				if ((tmp7)){
					HX_STACK_LINE(53)
					::String tmp8 = args->__get(i);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(53)
					int tmp9 = tmp8.length;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(53)
					int tmp10 = (tmp9 - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(53)
					int vl = tmp10;		HX_STACK_VAR(vl,"vl");
					HX_STACK_LINE(54)
					::haxor::core::Console_obj::verbose = vl;
				}
				HX_STACK_LINE(57)
				::String tmp8 = args->__get(i);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(57)
				::String tmp9 = tmp8.toLowerCase();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(57)
				bool tmp10 = (tmp9 == HX_HCSTRING("-main","\xe6","\x52","\x5e","\x31"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(57)
				if ((tmp10)){
					HX_STACK_LINE(59)
					int tmp11 = (i + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(59)
					int p = tmp11;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(60)
					bool tmp12 = (p >= args->length);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(60)
					::String tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(60)
					if ((tmp12)){
						HX_STACK_LINE(60)
						tmp13 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
					}
					else{
						HX_STACK_LINE(60)
						tmp13 = args->__get(p);
					}
					HX_STACK_LINE(60)
					app_class_type = tmp13;
				}
				HX_STACK_LINE(63)
				::String tmp11 = args->__get(i);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(63)
				::String tmp12 = tmp11.toLowerCase();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(63)
				bool tmp13 = (tmp12 == HX_HCSTRING("-t","\xa7","\x27","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(63)
				if ((tmp13)){
					HX_STACK_LINE(65)
					int tmp14 = (i + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(65)
					int p = tmp14;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(66)
					bool tmp15 = (p >= args->length);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(66)
					::String tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(66)
					if ((tmp15)){
						HX_STACK_LINE(66)
						tmp16 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
					}
					else{
						HX_STACK_LINE(66)
						tmp16 = args->__get(p);
					}
					HX_STACK_LINE(66)
					app_title = tmp16;
				}
			}
		}
		HX_STACK_LINE(70)
		bool tmp1 = (app_class_type == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(70)
		if ((tmp1)){
			HX_STACK_LINE(72)
			{
				HX_STACK_LINE(72)
				int p_level = (int)0;		HX_STACK_VAR(p_level,"p_level");
				HX_STACK_LINE(72)
				int tmp2 = ::haxor::core::Console_obj::verbose;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(72)
				int tmp3 = p_level;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(72)
				bool tmp4 = (tmp2 >= tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(72)
				if ((tmp4)){
					HX_STACK_LINE(72)
					::cpp::Lib_obj::println(HX_HCSTRING("Haxor> Application type not found. Default to [Main]","\x9a","\xa1","\xc8","\x37"));
				}
			}
			HX_STACK_LINE(73)
			app_class_type = HX_HCSTRING("Main","\x59","\x64","\x2f","\x33");
		}
		HX_STACK_LINE(76)
		{
			HX_STACK_LINE(76)
			int tmp2 = ::haxor::core::Console_obj::verbose;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(76)
			bool tmp3 = (tmp2 >= (int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(76)
			if ((tmp3)){
				HX_STACK_LINE(76)
				int tmp4 = ::haxor::core::Console_obj::verbose;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(76)
				::String tmp5 = (HX_HCSTRING("Haxor> Windows Platform Init verbose[","\x5d","\x11","\x34","\x0c") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(76)
				::String tmp6 = (tmp5 + HX_HCSTRING("] application[","\xae","\x34","\x9e","\x3d"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(76)
				::String tmp7 = app_class_type;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(76)
				::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(76)
				::String tmp9 = (tmp8 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(76)
				::cpp::Lib_obj::println(tmp9);
			}
		}
		HX_STACK_LINE(78)
		::String tmp2 = app_class_type;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(78)
		::hx::Class tmp3 = ::Type_obj::resolveClass(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(78)
		::hx::Class app_class = tmp3;		HX_STACK_VAR(app_class,"app_class");
		HX_STACK_LINE(80)
		bool tmp4 = (app_class == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(80)
		if ((tmp4)){
			HX_STACK_LINE(82)
			{
				HX_STACK_LINE(82)
				int p_level = (int)0;		HX_STACK_VAR(p_level,"p_level");
				HX_STACK_LINE(82)
				int tmp5 = ::haxor::core::Console_obj::verbose;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(82)
				int tmp6 = p_level;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(82)
				bool tmp7 = (tmp5 >= tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(82)
				if ((tmp7)){
					HX_STACK_LINE(82)
					::String tmp8 = (HX_HCSTRING("Haxor> Error. Class [","\x7d","\x23","\x58","\xdf") + app_class_type);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(82)
					::String tmp9 = (tmp8 + HX_HCSTRING("] not found! Try adding 'import ","\xbd","\x7a","\xac","\x89"));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(82)
					::String tmp10 = app_class_type;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(82)
					::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(82)
					::String tmp12 = (tmp11 + HX_HCSTRING("' in your Main file.","\x96","\x4a","\xa6","\xec"));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(82)
					::cpp::Lib_obj::println(tmp12);
				}
			}
			HX_STACK_LINE(83)
			::Sys_obj::command(HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),null());
			HX_STACK_LINE(84)
			return null();
		}
		HX_STACK_LINE(87)
		::haxor::core::Engine_obj::Initialize();
		HX_STACK_LINE(89)
		::haxor::core::Application app;		HX_STACK_VAR(app,"app");
		HX_STACK_LINE(90)
		::haxor::core::Entity tmp5 = ::haxor::core::Entity_obj::__new(HX_HCSTRING("application","\x50","\xab","\x3e","\x2a"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(90)
		::haxor::core::Entity e = tmp5;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(91)
		::hx::Class tmp6 = app_class;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(91)
		Dynamic tmp7 = e->AddComponent(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(91)
		app = tmp7;
		HX_STACK_LINE(93)
		::haxor::core::Application tmp8 = app;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(93)
		bool tmp9 = ::Std_obj::is(tmp8,hx::ClassOf< ::haxor::core::BaseApplication >());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(93)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(93)
		if ((tmp10)){
			HX_STACK_LINE(95)
			{
				HX_STACK_LINE(95)
				int p_level = (int)0;		HX_STACK_VAR(p_level,"p_level");
				HX_STACK_LINE(95)
				int tmp11 = ::haxor::core::Console_obj::verbose;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(95)
				int tmp12 = p_level;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(95)
				bool tmp13 = (tmp11 >= tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(95)
				if ((tmp13)){
					HX_STACK_LINE(95)
					::String tmp14 = (HX_HCSTRING("Haxor> Error. Class [","\x7d","\x23","\x58","\xdf") + app_class_type);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(95)
					::String tmp15 = (tmp14 + HX_HCSTRING("] does not extends Application!","\x89","\x37","\x8a","\x26"));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(95)
					::cpp::Lib_obj::println(tmp15);
				}
			}
			HX_STACK_LINE(96)
			return null();
		}
		HX_STACK_LINE(99)
		::haxor::platform::windows::Window tmp11 = ::haxor::platform::windows::Window_obj::__new(app,app_title,(int)0,(int)0,(int)800,(int)600);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(99)
		::haxor::platform::windows::Window wnd = tmp11;		HX_STACK_VAR(wnd,"wnd");
		HX_STACK_LINE(101)
		::haxor::core::Application tmp12 = app;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(101)
		::haxor::graphics::GL_obj::Initialize(tmp12);
		HX_STACK_LINE(102)
		::haxor::platform::graphics::OpenGL tmp13 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(102)
		::haxor::platform::windows::Window tmp14 = wnd;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(102)
		tmp13->Initialize(tmp14);
		HX_STACK_LINE(103)
		::haxor::platform::graphics::OpenGL tmp15 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(103)
		tmp15->CheckExtensions();
		HX_STACK_LINE(105)
		::haxor::context::EngineContext_obj::Build();
		HX_STACK_LINE(108)
		::haxor::core::Entity tmp16 = ::haxor::core::Entity_obj::__new(HX_HCSTRING("__dummy__","\x28","\x8c","\x87","\x92"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(108)
		Dynamic tmp17 = tmp16->AddComponent(hx::ClassOf< ::haxor::component::MeshRenderer >());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(108)
		::haxor::component::MeshRenderer dummy = tmp17;		HX_STACK_VAR(dummy,"dummy");
		HX_STACK_LINE(109)
		::haxor::graphics::material::Material tmp18 = ::haxor::graphics::material::Material_obj::Opaque(null(),null(),null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(109)
		dummy->set_material(tmp18);
		HX_STACK_LINE(110)
		::haxor::graphics::mesh::Mesh tmp19 = ::haxor::graphics::mesh::Model_obj::get_planeXY();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(110)
		dummy->set_mesh(tmp19);
		HX_STACK_LINE(111)
		::haxor::component::Transform tmp20 = dummy->m_entity->m_transform;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(111)
		::haxor::math::Vector3 tmp21 = ::haxor::math::Vector3_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(111)
		tmp20->set_localScale(tmp21);
		HX_STACK_LINE(113)
		bool tmp22 = app->Load();		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(113)
		if ((tmp22)){
			HX_STACK_LINE(113)
			app->LoadComplete();
		}
		HX_STACK_LINE(115)
		wnd->Run();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Entry_obj,Initialize,(void))


Entry_obj::Entry_obj()
{
}

bool Entry_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"Initialize") ) { outValue = Initialize_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Entry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Entry_obj::__mClass,"__mClass");
};

#endif

hx::Class Entry_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("Initialize","\x70","\x35","\x6c","\xe3"),
	String(null()) };

void Entry_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.platform.windows.Entry","\xd8","\xa9","\x87","\x2c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Entry_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Entry_obj >;
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

} // end namespace haxor
} // end namespace platform
} // end namespace windows
