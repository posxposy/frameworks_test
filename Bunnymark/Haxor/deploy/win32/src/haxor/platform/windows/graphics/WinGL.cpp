#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_haxor_core_BaseApplication
#include <haxor/core/BaseApplication.h>
#endif
#ifndef INCLUDED_haxor_core_Console
#include <haxor/core/Console.h>
#endif
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_graphics_GraphicContext
#include <haxor/graphics/GraphicContext.h>
#endif
#ifndef INCLUDED_haxor_platform_OSWindow
#include <haxor/platform/OSWindow.h>
#endif
#ifndef INCLUDED_haxor_platform_windows_Window
#include <haxor/platform/windows/Window.h>
#endif
#ifndef INCLUDED_haxor_platform_windows_graphics_WinGL
#include <haxor/platform/windows/graphics/WinGL.h>
#endif

HGLRC   hrc;                           // Permanent Rendering Context
HDC     hdc;                           // Private GDI Device Context
PIXELFORMATDESCRIPTOR pfd;			   // pfd Tells Windows How We Want Things To Be
int     pf;

namespace haxor{
namespace platform{
namespace windows{
namespace graphics{

Void WinGL_obj::__construct(::haxor::core::BaseApplication p_application)
{
HX_STACK_FRAME("haxor.platform.windows.graphics.WinGL","new",0x592aabea,"haxor.platform.windows.graphics.WinGL.new","haxor/platform/windows/graphics/WinGL.hx",42,0xf57fe2c6)
HX_STACK_THIS(this)
HX_STACK_ARG(p_application,"p_application")
{
	HX_STACK_LINE(42)
	::haxor::core::BaseApplication tmp = p_application;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	super::__construct(tmp);
}
;
	return null();
}

//WinGL_obj::~WinGL_obj() { }

Dynamic WinGL_obj::__CreateEmpty() { return  new WinGL_obj; }
hx::ObjectPtr< WinGL_obj > WinGL_obj::__new(::haxor::core::BaseApplication p_application)
{  hx::ObjectPtr< WinGL_obj > _result_ = new WinGL_obj();
	_result_->__construct(p_application);
	return _result_;}

Dynamic WinGL_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WinGL_obj > _result_ = new WinGL_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::haxor::platform::windows::Window WinGL_obj::get_window( ){
	HX_STACK_FRAME("haxor.platform.windows.graphics.WinGL","get_window",0x4dd00d6f,"haxor.platform.windows.graphics.WinGL.get_window","haxor/platform/windows/graphics/WinGL.hx",49,0xf57fe2c6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(49)
	::haxor::platform::OSWindow tmp = this->m_window;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	::haxor::platform::windows::Window tmp1 = ((::haxor::platform::windows::Window)(tmp));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(49)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(WinGL_obj,get_window,return )

bool WinGL_obj::Initialize( ::haxor::platform::windows::Window p_window){
	HX_STACK_FRAME("haxor.platform.windows.graphics.WinGL","Initialize",0xee283f26,"haxor.platform.windows.graphics.WinGL.Initialize","haxor/platform/windows/graphics/WinGL.hx",56,0xf57fe2c6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_window,"p_window")
	HX_STACK_LINE(57)
	{
		HX_STACK_LINE(57)
		int tmp = ::haxor::core::Console_obj::verbose;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(57)
		bool tmp1 = (tmp >= (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(57)
		if ((tmp1)){
			HX_STACK_LINE(57)
			::haxor::platform::windows::Window tmp2 = p_window;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(57)
			::String tmp3 = ::Std_obj::string(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(57)
			::String tmp4 = (HX_HCSTRING("Graphics> Initialize. hwnd[","\x67","\x70","\x08","\x7e") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(57)
			::String tmp5 = (tmp4 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(57)
			::cpp::Lib_obj::println(tmp5);
		}
	}
	HX_STACK_LINE(59)
			
		{
			if (p_window->hwnd == NULL) 
			{ 
				printf("Graphics> Invalid Window Handler."); 
				return false; 
			}
			printf("  Window Handler [0x%x]\n", p_window->hwnd);
			hdc  = GetDC(p_window->hwnd);
			printf("  Device Context [0x%x]\n", hdc);
			if (hdc == NULL) 
			{ 
				printf("Graphics> Could not create Device Context!\n"); 
				return false; 
			}
			
			PIXELFORMATDESCRIPTOR l_pfd =                  
			{
				sizeof(PIXELFORMATDESCRIPTOR),  // Size Of This Pixel Format Descriptor
				1,                              // Version Number
				PFD_DRAW_TO_WINDOW |            // Format Must Support Window
				PFD_SUPPORT_OPENGL |            // Format Must Support OpenGL
				PFD_DOUBLEBUFFER,               // Must Support Double Buffering
				PFD_TYPE_RGBA,                  // Request An RGBA Format
				32,                             // Select Our Color Depth
				0, 0, 0, 0, 0, 0,               // Color Bits Ignored
				0,                              // No Alpha Buffer
				0,                              // Shift Bit Ignored
				0,                              // No Accumulation Buffer
				0, 0, 0, 0,                     // Accumulation Bits Ignored
				16,                             // 16Bit Z-Buffer (Depth Buffer)
				0,                              // No Stencil Buffer
				0,                              // No Auxiliary Buffer
				PFD_MAIN_PLANE,                 // Main Drawing Layer
				0,                              // Reserved
				0, 0, 0                         // Layer Masks Ignored
			};
			
			pf = ChoosePixelFormat(hdc, &l_pfd);
			
			pfd = l_pfd;
			
			if (!pf) 
			{ 
				printf("Graphics> Failed to choose pixel format!\n"); 
				return false; 
			}
			
			printf("  Pixel Format [%d]\n", pf);
			
			if (!SetPixelFormat(hdc, pf, & pfd)) 
			{ 
				printf("Graphics> Failed to set pixel format!\n"); 
				return false;
			}
			
			hrc = wglCreateContext(hdc);
			int  err = GetLastError();
			
			if (!hrc)
			{ 
				printf("Graphics> Failed to create Rendering context !\n"); 				
				return false; 
			}
			
			printf("  Rendering Context [0x%x]\n", hrc);
			
			//Make current to init glew.
			Focus();
			
			//glewExperimental = GL_TRUE;
			GLenum glerr = glewInit();
			if (glerr != GLEW_OK)
			{
				fprintf(stderr, "Graphics> GLEW Error: %s\n", glewGetErrorString(glerr));
				return false;
			}
			
		}
		;
	HX_STACK_LINE(140)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(WinGL_obj,Initialize,return )

Void WinGL_obj::CheckExtensions( ){
{
		HX_STACK_FRAME("haxor.platform.windows.graphics.WinGL","CheckExtensions",0xea4ced66,"haxor.platform.windows.graphics.WinGL.CheckExtensions","haxor/platform/windows/graphics/WinGL.hx",148,0xf57fe2c6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(149)
		
		if (hdc == NULL) return null();
		;
		HX_STACK_LINE(152)
		{
			HX_STACK_LINE(152)
			int tmp = ::haxor::core::Console_obj::verbose;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(152)
			bool tmp1 = (tmp >= (int)1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(152)
			if ((tmp1)){
				HX_STACK_LINE(152)
				::cpp::Lib_obj::println(HX_HCSTRING("Graphics> Available Extensions:","\xa2","\x67","\x0b","\x76"));
			}
		}
	}
return null();
}


Void WinGL_obj::Focus( ){
{
		HX_STACK_FRAME("haxor.platform.windows.graphics.WinGL","Focus",0xf8a321c2,"haxor.platform.windows.graphics.WinGL.Focus","haxor/platform/windows/graphics/WinGL.hx",160,0xf57fe2c6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(160)
		
		wglMakeCurrent(hdc, hrc);
		;
	}
return null();
}


Void WinGL_obj::Flush( ){
{
		HX_STACK_FRAME("haxor.platform.windows.graphics.WinGL","Flush",0xf6b524ae,"haxor.platform.windows.graphics.WinGL.Flush","haxor/platform/windows/graphics/WinGL.hx",170,0xf57fe2c6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(170)
		
		SwapBuffers(hdc);
		;
	}
return null();
}



WinGL_obj::WinGL_obj()
{
}

void WinGL_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WinGL);
	HX_MARK_MEMBER_NAME(window,"window");
	HX_MARK_MEMBER_NAME(m_window,"m_window");
	::haxor::graphics::GraphicContext_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void WinGL_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(window,"window");
	HX_VISIT_MEMBER_NAME(m_window,"m_window");
	::haxor::graphics::GraphicContext_obj::__Visit(HX_VISIT_ARG);
}

Dynamic WinGL_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"Focus") ) { return Focus_dyn(); }
		if (HX_FIELD_EQ(inName,"Flush") ) { return Flush_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { return inCallProp == hx::paccAlways ? get_window() : window; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_window") ) { return m_window; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_window") ) { return get_window_dyn(); }
		if (HX_FIELD_EQ(inName,"Initialize") ) { return Initialize_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"CheckExtensions") ) { return CheckExtensions_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic WinGL_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { window=inValue.Cast< ::haxor::platform::windows::Window >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_window") ) { m_window=inValue.Cast< ::haxor::platform::OSWindow >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool WinGL_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void WinGL_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"));
	outFields->push(HX_HCSTRING("m_window","\xc2","\x3c","\x7e","\x1b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::platform::windows::Window*/ ,(int)offsetof(WinGL_obj,window),HX_HCSTRING("window","\xf0","\x93","\x8c","\x52")},
	{hx::fsObject /*::haxor::platform::OSWindow*/ ,(int)offsetof(WinGL_obj,m_window),HX_HCSTRING("m_window","\xc2","\x3c","\x7e","\x1b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"),
	HX_HCSTRING("get_window","\xb9","\x03","\x14","\x43"),
	HX_HCSTRING("m_window","\xc2","\x3c","\x7e","\x1b"),
	HX_HCSTRING("Initialize","\x70","\x35","\x6c","\xe3"),
	HX_HCSTRING("CheckExtensions","\xdc","\xea","\x55","\x63"),
	HX_HCSTRING("Focus","\xb8","\xcf","\xb6","\x97"),
	HX_HCSTRING("Flush","\xa4","\xd2","\xc8","\x95"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WinGL_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WinGL_obj::__mClass,"__mClass");
};

#endif

hx::Class WinGL_obj::__mClass;

void WinGL_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.platform.windows.graphics.WinGL","\xf8","\x2e","\x60","\x50");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &WinGL_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< WinGL_obj >;
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
} // end namespace graphics
