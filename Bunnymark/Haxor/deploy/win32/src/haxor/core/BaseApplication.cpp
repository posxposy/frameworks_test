#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxor_component_Behaviour
#include <haxor/component/Behaviour.h>
#endif
#ifndef INCLUDED_haxor_component_Component
#include <haxor/component/Component.h>
#endif
#ifndef INCLUDED_haxor_core_ApplicationProtocol
#include <haxor/core/ApplicationProtocol.h>
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
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_Platform
#include <haxor/core/Platform.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_core_Scene
#include <haxor/core/Scene.h>
#endif
#ifndef INCLUDED_haxor_core_Time
#include <haxor/core/Time.h>
#endif
#ifndef INCLUDED_haxor_graphics_GL
#include <haxor/graphics/GL.h>
#endif
#ifndef INCLUDED_haxor_graphics_GraphicContext
#include <haxor/graphics/GraphicContext.h>
#endif
#ifndef INCLUDED_haxor_graphics_Screen
#include <haxor/graphics/Screen.h>
#endif
#ifndef INCLUDED_haxor_input_Input
#include <haxor/input/Input.h>
#endif
#ifndef INCLUDED_haxor_input_InputHandler
#include <haxor/input/InputHandler.h>
#endif
#ifndef INCLUDED_haxor_platform_graphics_OpenGL
#include <haxor/platform/graphics/OpenGL.h>
#endif
#ifndef INCLUDED_haxor_platform_html_BrowserAgent
#include <haxor/platform/html/BrowserAgent.h>
#endif
#ifndef INCLUDED_haxor_platform_windows_graphics_WinGL
#include <haxor/platform/windows/graphics/WinGL.h>
#endif
namespace haxor{
namespace core{

Void BaseApplication_obj::__construct(::String __o_p_name)
{
HX_STACK_FRAME("haxor.core.BaseApplication","new",0xbadb0a2e,"haxor.core.BaseApplication.new","haxor/core/BaseApplication.hx",61,0x69cdc962)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_p_name,"p_name")
::String p_name = __o_p_name.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(61)
	::String tmp = p_name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	super::__construct(tmp);
}
;
	return null();
}

//BaseApplication_obj::~BaseApplication_obj() { }

Dynamic BaseApplication_obj::__CreateEmpty() { return  new BaseApplication_obj; }
hx::ObjectPtr< BaseApplication_obj > BaseApplication_obj::__new(::String __o_p_name)
{  hx::ObjectPtr< BaseApplication_obj > _result_ = new BaseApplication_obj();
	_result_->__construct(__o_p_name);
	return _result_;}

Dynamic BaseApplication_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BaseApplication_obj > _result_ = new BaseApplication_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::haxor::core::ApplicationProtocol BaseApplication_obj::get_protocol( ){
	HX_STACK_FRAME("haxor.core.BaseApplication","get_protocol",0x42b326d3,"haxor.core.BaseApplication.get_protocol","haxor/core/BaseApplication.hx",79,0x69cdc962)
	HX_STACK_THIS(this)
	HX_STACK_LINE(79)
	return ::haxor::core::ApplicationProtocol_obj::None;
}


HX_DEFINE_DYNAMIC_FUNC0(BaseApplication_obj,get_protocol,return )

::String BaseApplication_obj::get_vendor( ){
	HX_STACK_FRAME("haxor.core.BaseApplication","get_vendor",0x85781143,"haxor.core.BaseApplication.get_vendor","haxor/core/BaseApplication.hx",87,0x69cdc962)
	HX_STACK_THIS(this)
	HX_STACK_LINE(88)
	::String tmp = this->m_vendor;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(88)
	if ((tmp1)){
		HX_STACK_LINE(88)
		::String tmp2 = this->m_vendor;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(88)
		return tmp2;
	}
	HX_STACK_LINE(97)
	::String tmp2 = this->m_vendor = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(97)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(BaseApplication_obj,get_vendor,return )

int BaseApplication_obj::get_fps( ){
	HX_STACK_FRAME("haxor.core.BaseApplication","get_fps",0xa465c94e,"haxor.core.BaseApplication.get_fps","haxor/core/BaseApplication.hx",105,0x69cdc962)
	HX_STACK_THIS(this)
	HX_STACK_LINE(105)
	int tmp = this->m_fps;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(105)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(BaseApplication_obj,get_fps,return )

int BaseApplication_obj::set_fps( int v){
	HX_STACK_FRAME("haxor.core.BaseApplication","set_fps",0x97675a5a,"haxor.core.BaseApplication.set_fps","haxor/core/BaseApplication.hx",107,0x69cdc962)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(108)
	this->m_fps = v;
	HX_STACK_LINE(109)
	Float f = ((Float)(v));		HX_STACK_VAR(f,"f");
	HX_STACK_LINE(117)
	hx::AddEq(f,((Float)5.0));
	HX_STACK_LINE(128)
	Float tmp = (Float(((Float)1.0)) / Float(f));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(128)
	Float tmp1 = (tmp * ((Float)1000.0));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(128)
	this->m_mspf = tmp1;
	HX_STACK_LINE(129)
	int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(129)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(BaseApplication_obj,set_fps,return )

::haxor::core::Platform BaseApplication_obj::get_platform( ){
	HX_STACK_FRAME("haxor.core.BaseApplication","get_platform",0xaa49832e,"haxor.core.BaseApplication.get_platform","haxor/core/BaseApplication.hx",150,0x69cdc962)
	HX_STACK_THIS(this)
	HX_STACK_LINE(150)
	return ::haxor::core::Platform_obj::Unknown;
}


HX_DEFINE_DYNAMIC_FUNC0(BaseApplication_obj,get_platform,return )

bool BaseApplication_obj::get_mobile( ){
	HX_STACK_FRAME("haxor.core.BaseApplication","get_mobile",0xa658d81d,"haxor.core.BaseApplication.get_mobile","haxor/core/BaseApplication.hx",158,0x69cdc962)
	HX_STACK_THIS(this)
	HX_STACK_LINE(159)
	{
		HX_STACK_LINE(159)
		::haxor::core::Platform tmp = this->get_platform();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(159)
		::haxor::core::Platform _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(159)
		switch( (int)(_g->__Index())){
			case (int)5: {
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(162)
				return true;
			}
			;break;
			case (int)0: {
			}
			;break;
			case (int)7: {
			}
			;break;
			case (int)1: {
			}
			;break;
			case (int)2: {
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(168)
				return false;
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(171)
				::haxor::platform::html::BrowserAgent tmp1 = this->get_browser();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(171)
				bool tmp2 = tmp1->mobile;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(171)
				return tmp2;
			}
			;break;
		}
	}
	HX_STACK_LINE(174)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(BaseApplication_obj,get_mobile,return )

::haxor::platform::html::BrowserAgent BaseApplication_obj::get_browser( ){
	HX_STACK_FRAME("haxor.core.BaseApplication","get_browser",0xd686138d,"haxor.core.BaseApplication.get_browser","haxor/core/BaseApplication.hx",181,0x69cdc962)
	HX_STACK_THIS(this)
	HX_STACK_LINE(181)
	::haxor::platform::html::BrowserAgent tmp = this->m_browser;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(181)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(BaseApplication_obj,get_browser,return )

bool BaseApplication_obj::get_runOnBackground( ){
	HX_STACK_FRAME("haxor.core.BaseApplication","get_runOnBackground",0xbdf4b2bd,"haxor.core.BaseApplication.get_runOnBackground","haxor/core/BaseApplication.hx",188,0x69cdc962)
	HX_STACK_THIS(this)
	HX_STACK_LINE(188)
	bool tmp = this->m_run_on_background;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(188)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(BaseApplication_obj,get_runOnBackground,return )

bool BaseApplication_obj::set_runOnBackground( bool v){
	HX_STACK_FRAME("haxor.core.BaseApplication","set_runOnBackground",0xfa91a5c9,"haxor.core.BaseApplication.set_runOnBackground","haxor/core/BaseApplication.hx",189,0x69cdc962)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(189)
	this->m_run_on_background = v;
	HX_STACK_LINE(189)
	bool tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(189)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(BaseApplication_obj,set_runOnBackground,return )

Void BaseApplication_obj::OnBuild( ){
{
		HX_STACK_FRAME("haxor.core.BaseApplication","OnBuild",0x9c1cda3d,"haxor.core.BaseApplication.OnBuild","haxor/core/BaseApplication.hx",206,0x69cdc962)
		HX_STACK_THIS(this)
		HX_STACK_LINE(207)
		this->super::OnBuild();
		HX_STACK_LINE(208)
		::haxor::core::BaseApplication_obj::m_instance = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(209)
		::haxor::platform::html::BrowserAgent tmp = ::haxor::platform::html::BrowserAgent_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(209)
		this->m_browser = tmp;
		HX_STACK_LINE(210)
		Array< ::Dynamic > tmp1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(210)
		this->m_scenes = tmp1;
		HX_STACK_LINE(211)
		this->set_fps((int)60);
		HX_STACK_LINE(212)
		this->m_frame_ms = ((Float)0.0);
		HX_STACK_LINE(213)
		this->m_init_allowed = false;
		HX_STACK_LINE(214)
		this->m_run_on_background = false;
		HX_STACK_LINE(215)
		::haxor::core::Time_obj::Initialize();
		HX_STACK_LINE(216)
		::haxor::graphics::Screen_obj::Initialize(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(217)
		::haxor::input::Input_obj::Initialize();
	}
return null();
}


Void BaseApplication_obj::LoadScene( ::String p_name){
{
		HX_STACK_FRAME("haxor.core.BaseApplication","LoadScene",0xcd598d74,"haxor.core.BaseApplication.LoadScene","haxor/core/BaseApplication.hx",225,0x69cdc962)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_name,"p_name")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BaseApplication_obj,LoadScene,(void))

Void BaseApplication_obj::DestroyScene( ::String p_name){
{
		HX_STACK_FRAME("haxor.core.BaseApplication","DestroyScene",0xc01a3a84,"haxor.core.BaseApplication.DestroyScene","haxor/core/BaseApplication.hx",234,0x69cdc962)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_name,"p_name")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BaseApplication_obj,DestroyScene,(void))

bool BaseApplication_obj::Load( ){
	HX_STACK_FRAME("haxor.core.BaseApplication","Load",0xae5c20b8,"haxor.core.BaseApplication.Load","haxor/core/BaseApplication.hx",242,0x69cdc962)
	HX_STACK_THIS(this)
	HX_STACK_LINE(242)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(BaseApplication_obj,Load,return )

Void BaseApplication_obj::Initialize( ){
{
		HX_STACK_FRAME("haxor.core.BaseApplication","Initialize",0xd9c5f162,"haxor.core.BaseApplication.Initialize","haxor/core/BaseApplication.hx",250,0x69cdc962)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BaseApplication_obj,Initialize,(void))

Void BaseApplication_obj::LoadComplete( ){
{
		HX_STACK_FRAME("haxor.core.BaseApplication","LoadComplete",0x8e795591,"haxor.core.BaseApplication.LoadComplete","haxor/core/BaseApplication.hx",258,0x69cdc962)
		HX_STACK_THIS(this)
		HX_STACK_LINE(258)
		this->m_init_allowed = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BaseApplication_obj,LoadComplete,(void))

Void BaseApplication_obj::OnLoadProgress( ::String p_id,Float p_progress){
{
		HX_STACK_FRAME("haxor.core.BaseApplication","OnLoadProgress",0xf02474c4,"haxor.core.BaseApplication.OnLoadProgress","haxor/core/BaseApplication.hx",266,0x69cdc962)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_id,"p_id")
		HX_STACK_ARG(p_progress,"p_progress")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BaseApplication_obj,OnLoadProgress,(void))

Void BaseApplication_obj::OnLoadComplete( ::String p_id,Dynamic p_asset){
{
		HX_STACK_FRAME("haxor.core.BaseApplication","OnLoadComplete",0xe9c17dd0,"haxor.core.BaseApplication.OnLoadComplete","haxor/core/BaseApplication.hx",273,0x69cdc962)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_id,"p_id")
		HX_STACK_ARG(p_asset,"p_asset")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BaseApplication_obj,OnLoadComplete,(void))

Void BaseApplication_obj::Update( ){
{
		HX_STACK_FRAME("haxor.core.BaseApplication","Update",0x44c6551b,"haxor.core.BaseApplication.Update","haxor/core/BaseApplication.hx",279,0x69cdc962)
		HX_STACK_THIS(this)
		HX_STACK_LINE(280)
		::haxor::core::Time_obj::Update();
		HX_STACK_LINE(283)
		::haxor::input::InputHandler tmp = ::haxor::input::Input_obj::m_handler;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(283)
		tmp->Update();
		HX_STACK_LINE(284)
		this->CheckResize();
		HX_STACK_LINE(287)
		::haxor::core::Engine_obj::Update();
		HX_STACK_LINE(288)
		::haxor::core::Engine_obj::Collect();
		HX_STACK_LINE(291)
		::haxor::input::InputHandler tmp1 = ::haxor::input::Input_obj::m_handler;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(291)
		tmp1->Clear();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BaseApplication_obj,Update,(void))

Void BaseApplication_obj::Render( ){
{
		HX_STACK_FRAME("haxor.core.BaseApplication","Render",0xc2ea3a68,"haxor.core.BaseApplication.Render","haxor/core/BaseApplication.hx",299,0x69cdc962)
		HX_STACK_THIS(this)
		HX_STACK_LINE(300)
		bool tmp = this->m_init_allowed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(300)
		if ((tmp)){
			HX_STACK_LINE(302)
			{
				HX_STACK_LINE(302)
				int tmp1 = ::haxor::core::Console_obj::verbose;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(302)
				bool tmp2 = (tmp1 >= (int)3);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(302)
				if ((tmp2)){
					HX_STACK_LINE(302)
					::cpp::Lib_obj::println(HX_HCSTRING("Application> Initialize.","\xac","\x24","\x0f","\x14"));
				}
			}
			HX_STACK_LINE(303)
			this->Initialize();
			HX_STACK_LINE(304)
			this->m_init_allowed = false;
		}
		HX_STACK_LINE(307)
		Float tmp1 = ::haxor::core::Time_obj::m_delta;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(307)
		Float tmp2 = (tmp1 * ((Float)1000.0));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(307)
		hx::AddEq(this->m_frame_ms,tmp2);
		HX_STACK_LINE(309)
		Float tmp3 = this->m_frame_ms;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(309)
		Float tmp4 = this->m_mspf;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(309)
		bool tmp5 = (tmp3 >= tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(309)
		if ((tmp5)){
			HX_STACK_LINE(312)
			this->m_frame_ms = ((Float)0.0);
			HX_STACK_LINE(314)
			::haxor::core::Time_obj::Render();
			HX_STACK_LINE(317)
			{
				HX_STACK_LINE(317)
				::haxor::platform::graphics::OpenGL tmp6 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(317)
				tmp6->Focus();
			}
			HX_STACK_LINE(320)
			::haxor::core::Engine_obj::Render();
			HX_STACK_LINE(323)
			{
				HX_STACK_LINE(323)
				::haxor::platform::graphics::OpenGL tmp6 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(323)
				tmp6->Flush();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BaseApplication_obj,Render,(void))

Void BaseApplication_obj::OnQuit( ){
{
		HX_STACK_FRAME("haxor.core.BaseApplication","OnQuit",0xab5517a0,"haxor.core.BaseApplication.OnQuit","haxor/core/BaseApplication.hx",332,0x69cdc962)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BaseApplication_obj,OnQuit,(void))

Void BaseApplication_obj::OnFocus( ){
{
		HX_STACK_FRAME("haxor.core.BaseApplication","OnFocus",0xe5bb5ee7,"haxor.core.BaseApplication.OnFocus","haxor/core/BaseApplication.hx",337,0x69cdc962)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BaseApplication_obj,OnFocus,(void))

Void BaseApplication_obj::OnUnfocus( ){
{
		HX_STACK_FRAME("haxor.core.BaseApplication","OnUnfocus",0x121577ae,"haxor.core.BaseApplication.OnUnfocus","haxor/core/BaseApplication.hx",342,0x69cdc962)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BaseApplication_obj,OnUnfocus,(void))

Void BaseApplication_obj::CheckResize( ){
{
		HX_STACK_FRAME("haxor.core.BaseApplication","CheckResize",0x66ea7c8a,"haxor.core.BaseApplication.CheckResize","haxor/core/BaseApplication.hx",348,0x69cdc962)
		HX_STACK_THIS(this)
		HX_STACK_LINE(349)
		bool has_resize = false;		HX_STACK_VAR(has_resize,"has_resize");
		HX_STACK_LINE(350)
		Float tmp = ::haxor::graphics::Screen_obj::m_width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(350)
		Float tmp1 = this->GetContainerWidth();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(350)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(350)
		Float tmp3 = ::Math_obj::abs(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(350)
		bool tmp4 = (tmp3 > ((Float)0.0));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(350)
		if ((tmp4)){
			HX_STACK_LINE(350)
			Float tmp5 = this->GetContainerWidth();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(350)
			::haxor::graphics::Screen_obj::m_width = tmp5;
			HX_STACK_LINE(350)
			has_resize = true;
		}
		HX_STACK_LINE(351)
		Float tmp5 = ::haxor::graphics::Screen_obj::m_height;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(351)
		Float tmp6 = this->GetContainerHeight();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(351)
		Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(351)
		Float tmp8 = ::Math_obj::abs(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(351)
		bool tmp9 = (tmp8 > ((Float)0.0));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(351)
		if ((tmp9)){
			HX_STACK_LINE(351)
			Float tmp10 = this->GetContainerHeight();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(351)
			::haxor::graphics::Screen_obj::m_height = tmp10;
			HX_STACK_LINE(351)
			has_resize = true;
		}
		HX_STACK_LINE(352)
		bool tmp10 = has_resize;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(352)
		if ((tmp10)){
			HX_STACK_LINE(354)
			this->OnResize();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BaseApplication_obj,CheckResize,(void))

Void BaseApplication_obj::OnResize( ){
{
		HX_STACK_FRAME("haxor.core.BaseApplication","OnResize",0x33088805,"haxor.core.BaseApplication.OnResize","haxor/core/BaseApplication.hx",362,0x69cdc962)
		HX_STACK_THIS(this)
		HX_STACK_LINE(363)
		{
			HX_STACK_LINE(363)
			int tmp = ::haxor::core::Console_obj::verbose;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(363)
			bool tmp1 = (tmp >= (int)6);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(363)
			if ((tmp1)){
				HX_STACK_LINE(363)
				Float tmp2 = ::haxor::graphics::Screen_obj::m_width;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(363)
				::String tmp3 = (HX_HCSTRING("Application> Resize [","\xa1","\xde","\xdb","\xb0") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(363)
				::String tmp4 = (tmp3 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(363)
				Float tmp5 = ::haxor::graphics::Screen_obj::m_height;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(363)
				::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(363)
				::String tmp7 = (tmp6 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(363)
				::cpp::Lib_obj::println(tmp7);
			}
		}
		HX_STACK_LINE(365)
		{
			HX_STACK_LINE(365)
			::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(365)
			tmp->Resize();
		}
		HX_STACK_LINE(367)
		::haxor::core::Engine_obj::Resize();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BaseApplication_obj,OnResize,(void))

Void BaseApplication_obj::OnFullscreenEnter( ){
{
		HX_STACK_FRAME("haxor.core.BaseApplication","OnFullscreenEnter",0x69cab4ac,"haxor.core.BaseApplication.OnFullscreenEnter","haxor/core/BaseApplication.hx",373,0x69cdc962)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BaseApplication_obj,OnFullscreenEnter,(void))

Void BaseApplication_obj::OnFullscreenExit( ){
{
		HX_STACK_FRAME("haxor.core.BaseApplication","OnFullscreenExit",0xaa67be0a,"haxor.core.BaseApplication.OnFullscreenExit","haxor/core/BaseApplication.hx",378,0x69cdc962)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BaseApplication_obj,OnFullscreenExit,(void))

bool BaseApplication_obj::OnFullscreenRequest( bool v){
	HX_STACK_FRAME("haxor.core.BaseApplication","OnFullscreenRequest",0x4d1933e3,"haxor.core.BaseApplication.OnFullscreenRequest","haxor/core/BaseApplication.hx",384,0x69cdc962)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(384)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(BaseApplication_obj,OnFullscreenRequest,return )

bool BaseApplication_obj::OnPointerLockRequest( bool v){
	HX_STACK_FRAME("haxor.core.BaseApplication","OnPointerLockRequest",0x3f05d878,"haxor.core.BaseApplication.OnPointerLockRequest","haxor/core/BaseApplication.hx",390,0x69cdc962)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(390)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(BaseApplication_obj,OnPointerLockRequest,return )

bool BaseApplication_obj::OnPointerVisibilityRequest( bool v){
	HX_STACK_FRAME("haxor.core.BaseApplication","OnPointerVisibilityRequest",0x706bf871,"haxor.core.BaseApplication.OnPointerVisibilityRequest","haxor/core/BaseApplication.hx",396,0x69cdc962)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(396)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(BaseApplication_obj,OnPointerVisibilityRequest,return )

Void BaseApplication_obj::OnMousePosition( Float p_x,Float p_y){
{
		HX_STACK_FRAME("haxor.core.BaseApplication","OnMousePosition",0x27e9c5fd,"haxor.core.BaseApplication.OnMousePosition","haxor/core/BaseApplication.hx",403,0x69cdc962)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BaseApplication_obj,OnMousePosition,(void))

Float BaseApplication_obj::GetContainerWidth( ){
	HX_STACK_FRAME("haxor.core.BaseApplication","GetContainerWidth",0xf173fa69,"haxor.core.BaseApplication.GetContainerWidth","haxor/core/BaseApplication.hx",409,0x69cdc962)
	HX_STACK_THIS(this)
	HX_STACK_LINE(409)
	return ((Float)0.0);
}


HX_DEFINE_DYNAMIC_FUNC0(BaseApplication_obj,GetContainerWidth,return )

Float BaseApplication_obj::GetContainerHeight( ){
	HX_STACK_FRAME("haxor.core.BaseApplication","GetContainerHeight",0x0a569a24,"haxor.core.BaseApplication.GetContainerHeight","haxor/core/BaseApplication.hx",415,0x69cdc962)
	HX_STACK_THIS(this)
	HX_STACK_LINE(415)
	return ((Float)0.0);
}


HX_DEFINE_DYNAMIC_FUNC0(BaseApplication_obj,GetContainerHeight,return )

::haxor::core::BaseApplication BaseApplication_obj::m_instance;


BaseApplication_obj::BaseApplication_obj()
{
}

void BaseApplication_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BaseApplication);
	HX_MARK_MEMBER_NAME(m_vendor,"m_vendor");
	HX_MARK_MEMBER_NAME(m_mspf,"m_mspf");
	HX_MARK_MEMBER_NAME(m_fps,"m_fps");
	HX_MARK_MEMBER_NAME(m_frame_ms,"m_frame_ms");
	HX_MARK_MEMBER_NAME(platform,"platform");
	HX_MARK_MEMBER_NAME(mobile,"mobile");
	HX_MARK_MEMBER_NAME(m_browser,"m_browser");
	HX_MARK_MEMBER_NAME(m_run_on_background,"m_run_on_background");
	HX_MARK_MEMBER_NAME(m_scenes,"m_scenes");
	HX_MARK_MEMBER_NAME(m_init_allowed,"m_init_allowed");
	::haxor::component::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BaseApplication_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_vendor,"m_vendor");
	HX_VISIT_MEMBER_NAME(m_mspf,"m_mspf");
	HX_VISIT_MEMBER_NAME(m_fps,"m_fps");
	HX_VISIT_MEMBER_NAME(m_frame_ms,"m_frame_ms");
	HX_VISIT_MEMBER_NAME(platform,"platform");
	HX_VISIT_MEMBER_NAME(mobile,"mobile");
	HX_VISIT_MEMBER_NAME(m_browser,"m_browser");
	HX_VISIT_MEMBER_NAME(m_run_on_background,"m_run_on_background");
	HX_VISIT_MEMBER_NAME(m_scenes,"m_scenes");
	HX_VISIT_MEMBER_NAME(m_init_allowed,"m_init_allowed");
	::haxor::component::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic BaseApplication_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"fps") ) { if (inCallProp == hx::paccAlways) return get_fps(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"Load") ) { return Load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"m_fps") ) { return m_fps; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"vendor") ) { if (inCallProp == hx::paccAlways) return get_vendor(); }
		if (HX_FIELD_EQ(inName,"m_mspf") ) { return m_mspf; }
		if (HX_FIELD_EQ(inName,"mobile") ) { return inCallProp == hx::paccAlways ? get_mobile() : mobile; }
		if (HX_FIELD_EQ(inName,"Update") ) { return Update_dyn(); }
		if (HX_FIELD_EQ(inName,"Render") ) { return Render_dyn(); }
		if (HX_FIELD_EQ(inName,"OnQuit") ) { return OnQuit_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_fps") ) { return get_fps_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fps") ) { return set_fps_dyn(); }
		if (HX_FIELD_EQ(inName,"browser") ) { if (inCallProp == hx::paccAlways) return get_browser(); }
		if (HX_FIELD_EQ(inName,"OnBuild") ) { return OnBuild_dyn(); }
		if (HX_FIELD_EQ(inName,"OnFocus") ) { return OnFocus_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"protocol") ) { if (inCallProp == hx::paccAlways) return get_protocol(); }
		if (HX_FIELD_EQ(inName,"m_vendor") ) { return m_vendor; }
		if (HX_FIELD_EQ(inName,"platform") ) { return inCallProp == hx::paccAlways ? get_platform() : platform; }
		if (HX_FIELD_EQ(inName,"m_scenes") ) { return m_scenes; }
		if (HX_FIELD_EQ(inName,"OnResize") ) { return OnResize_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"m_browser") ) { return m_browser; }
		if (HX_FIELD_EQ(inName,"LoadScene") ) { return LoadScene_dyn(); }
		if (HX_FIELD_EQ(inName,"OnUnfocus") ) { return OnUnfocus_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_vendor") ) { return get_vendor_dyn(); }
		if (HX_FIELD_EQ(inName,"m_frame_ms") ) { return m_frame_ms; }
		if (HX_FIELD_EQ(inName,"get_mobile") ) { return get_mobile_dyn(); }
		if (HX_FIELD_EQ(inName,"Initialize") ) { return Initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_browser") ) { return get_browser_dyn(); }
		if (HX_FIELD_EQ(inName,"CheckResize") ) { return CheckResize_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_protocol") ) { return get_protocol_dyn(); }
		if (HX_FIELD_EQ(inName,"get_platform") ) { return get_platform_dyn(); }
		if (HX_FIELD_EQ(inName,"DestroyScene") ) { return DestroyScene_dyn(); }
		if (HX_FIELD_EQ(inName,"LoadComplete") ) { return LoadComplete_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"m_init_allowed") ) { return m_init_allowed; }
		if (HX_FIELD_EQ(inName,"OnLoadProgress") ) { return OnLoadProgress_dyn(); }
		if (HX_FIELD_EQ(inName,"OnLoadComplete") ) { return OnLoadComplete_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"runOnBackground") ) { if (inCallProp == hx::paccAlways) return get_runOnBackground(); }
		if (HX_FIELD_EQ(inName,"OnMousePosition") ) { return OnMousePosition_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"OnFullscreenExit") ) { return OnFullscreenExit_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"OnFullscreenEnter") ) { return OnFullscreenEnter_dyn(); }
		if (HX_FIELD_EQ(inName,"GetContainerWidth") ) { return GetContainerWidth_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"GetContainerHeight") ) { return GetContainerHeight_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_runOnBackground") ) { return get_runOnBackground_dyn(); }
		if (HX_FIELD_EQ(inName,"set_runOnBackground") ) { return set_runOnBackground_dyn(); }
		if (HX_FIELD_EQ(inName,"m_run_on_background") ) { return m_run_on_background; }
		if (HX_FIELD_EQ(inName,"OnFullscreenRequest") ) { return OnFullscreenRequest_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"OnPointerLockRequest") ) { return OnPointerLockRequest_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"OnPointerVisibilityRequest") ) { return OnPointerVisibilityRequest_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool BaseApplication_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"m_instance") ) { outValue = m_instance; return true;  }
	}
	return false;
}

Dynamic BaseApplication_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"fps") ) { if (inCallProp == hx::paccAlways) return set_fps(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"m_fps") ) { m_fps=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_mspf") ) { m_mspf=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mobile") ) { mobile=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_vendor") ) { m_vendor=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"platform") ) { platform=inValue.Cast< ::haxor::core::Platform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_scenes") ) { m_scenes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"m_browser") ) { m_browser=inValue.Cast< ::haxor::platform::html::BrowserAgent >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_frame_ms") ) { m_frame_ms=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"m_init_allowed") ) { m_init_allowed=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"runOnBackground") ) { if (inCallProp == hx::paccAlways) return set_runOnBackground(inValue); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"m_run_on_background") ) { m_run_on_background=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BaseApplication_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"m_instance") ) { m_instance=ioValue.Cast< ::haxor::core::BaseApplication >(); return true; }
	}
	return false;
}

void BaseApplication_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("protocol","\x58","\x56","\x63","\x00"));
	outFields->push(HX_HCSTRING("vendor","\x88","\xe5","\x96","\x9e"));
	outFields->push(HX_HCSTRING("m_vendor","\x5a","\x8e","\x88","\x67"));
	outFields->push(HX_HCSTRING("fps","\xe9","\xc7","\x4d","\x00"));
	outFields->push(HX_HCSTRING("m_mspf","\x2e","\x57","\x5b","\x90"));
	outFields->push(HX_HCSTRING("m_fps","\xd7","\x47","\xc6","\x01"));
	outFields->push(HX_HCSTRING("m_frame_ms","\xca","\x98","\x49","\x44"));
	outFields->push(HX_HCSTRING("platform","\xb3","\xb2","\xf9","\x67"));
	outFields->push(HX_HCSTRING("mobile","\x62","\xac","\x77","\xbf"));
	outFields->push(HX_HCSTRING("browser","\xa8","\xfb","\x60","\xb8"));
	outFields->push(HX_HCSTRING("m_browser","\x96","\x0a","\xe3","\xc2"));
	outFields->push(HX_HCSTRING("runOnBackground","\xd8","\xad","\x6d","\x10"));
	outFields->push(HX_HCSTRING("m_run_on_background","\x88","\x0f","\x0d","\x0d"));
	outFields->push(HX_HCSTRING("m_scenes","\x79","\xf2","\xbd","\x07"));
	outFields->push(HX_HCSTRING("m_init_allowed","\x0b","\x28","\x25","\x34"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(BaseApplication_obj,m_vendor),HX_HCSTRING("m_vendor","\x5a","\x8e","\x88","\x67")},
	{hx::fsFloat,(int)offsetof(BaseApplication_obj,m_mspf),HX_HCSTRING("m_mspf","\x2e","\x57","\x5b","\x90")},
	{hx::fsInt,(int)offsetof(BaseApplication_obj,m_fps),HX_HCSTRING("m_fps","\xd7","\x47","\xc6","\x01")},
	{hx::fsFloat,(int)offsetof(BaseApplication_obj,m_frame_ms),HX_HCSTRING("m_frame_ms","\xca","\x98","\x49","\x44")},
	{hx::fsObject /*::haxor::core::Platform*/ ,(int)offsetof(BaseApplication_obj,platform),HX_HCSTRING("platform","\xb3","\xb2","\xf9","\x67")},
	{hx::fsBool,(int)offsetof(BaseApplication_obj,mobile),HX_HCSTRING("mobile","\x62","\xac","\x77","\xbf")},
	{hx::fsObject /*::haxor::platform::html::BrowserAgent*/ ,(int)offsetof(BaseApplication_obj,m_browser),HX_HCSTRING("m_browser","\x96","\x0a","\xe3","\xc2")},
	{hx::fsBool,(int)offsetof(BaseApplication_obj,m_run_on_background),HX_HCSTRING("m_run_on_background","\x88","\x0f","\x0d","\x0d")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(BaseApplication_obj,m_scenes),HX_HCSTRING("m_scenes","\x79","\xf2","\xbd","\x07")},
	{hx::fsBool,(int)offsetof(BaseApplication_obj,m_init_allowed),HX_HCSTRING("m_init_allowed","\x0b","\x28","\x25","\x34")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxor::core::BaseApplication*/ ,(void *) &BaseApplication_obj::m_instance,HX_HCSTRING("m_instance","\xe7","\x20","\x2c","\x81")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get_protocol","\x61","\x0a","\x7d","\xb5"),
	HX_HCSTRING("get_vendor","\x51","\x55","\x1e","\x8f"),
	HX_HCSTRING("m_vendor","\x5a","\x8e","\x88","\x67"),
	HX_HCSTRING("get_fps","\x80","\x90","\xc2","\x26"),
	HX_HCSTRING("set_fps","\x8c","\x21","\xc4","\x19"),
	HX_HCSTRING("m_mspf","\x2e","\x57","\x5b","\x90"),
	HX_HCSTRING("m_fps","\xd7","\x47","\xc6","\x01"),
	HX_HCSTRING("m_frame_ms","\xca","\x98","\x49","\x44"),
	HX_HCSTRING("platform","\xb3","\xb2","\xf9","\x67"),
	HX_HCSTRING("get_platform","\xbc","\x66","\x13","\x1d"),
	HX_HCSTRING("mobile","\x62","\xac","\x77","\xbf"),
	HX_HCSTRING("get_mobile","\x2b","\x1c","\xff","\xaf"),
	HX_HCSTRING("get_browser","\xbf","\x5b","\x5b","\x3e"),
	HX_HCSTRING("m_browser","\x96","\x0a","\xe3","\xc2"),
	HX_HCSTRING("get_runOnBackground","\xef","\x7c","\x78","\x9b"),
	HX_HCSTRING("set_runOnBackground","\xfb","\x6f","\x15","\xd8"),
	HX_HCSTRING("m_run_on_background","\x88","\x0f","\x0d","\x0d"),
	HX_HCSTRING("m_scenes","\x79","\xf2","\xbd","\x07"),
	HX_HCSTRING("m_init_allowed","\x0b","\x28","\x25","\x34"),
	HX_HCSTRING("OnBuild","\x6f","\xa1","\x79","\x1e"),
	HX_HCSTRING("LoadScene","\x26","\x05","\xdc","\x35"),
	HX_HCSTRING("DestroyScene","\x12","\x1e","\xe4","\x32"),
	HX_HCSTRING("Load","\x46","\xc6","\x90","\x32"),
	HX_HCSTRING("Initialize","\x70","\x35","\x6c","\xe3"),
	HX_HCSTRING("LoadComplete","\x1f","\x39","\x43","\x01"),
	HX_HCSTRING("OnLoadProgress","\xd2","\xd7","\xd8","\x13"),
	HX_HCSTRING("OnLoadComplete","\xde","\xe0","\x75","\x0d"),
	HX_HCSTRING("Update","\x29","\xfa","\x99","\xbb"),
	HX_HCSTRING("Render","\x76","\xdf","\xbd","\x39"),
	HX_HCSTRING("OnQuit","\xae","\xbc","\x28","\x22"),
	HX_HCSTRING("OnFocus","\x19","\x26","\x18","\x68"),
	HX_HCSTRING("OnUnfocus","\x60","\xef","\x97","\x7a"),
	HX_HCSTRING("CheckResize","\xbc","\xc4","\xbf","\xce"),
	HX_HCSTRING("OnResize","\x93","\x0c","\xda","\xc1"),
	HX_HCSTRING("OnFullscreenEnter","\x5e","\x2e","\xf7","\x07"),
	HX_HCSTRING("OnFullscreenExit","\x98","\x80","\x45","\x6e"),
	HX_HCSTRING("OnFullscreenRequest","\x15","\xfe","\x9c","\x2a"),
	HX_HCSTRING("OnPointerLockRequest","\x06","\xfa","\xd2","\x34"),
	HX_HCSTRING("OnPointerVisibilityRequest","\x7f","\xb8","\x2f","\x93"),
	HX_HCSTRING("OnMousePosition","\x2f","\x0f","\x0c","\x42"),
	HX_HCSTRING("GetContainerWidth","\x1b","\x74","\xa0","\x8f"),
	HX_HCSTRING("GetContainerHeight","\x32","\x9c","\x14","\xd3"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BaseApplication_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BaseApplication_obj::m_instance,"m_instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BaseApplication_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BaseApplication_obj::m_instance,"m_instance");
};

#endif

hx::Class BaseApplication_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("m_instance","\xe7","\x20","\x2c","\x81"),
	String(null()) };

void BaseApplication_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.core.BaseApplication","\x3c","\x1b","\xeb","\xec");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BaseApplication_obj::__GetStatic;
	__mClass->mSetStaticField = &BaseApplication_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BaseApplication_obj >;
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
} // end namespace core
