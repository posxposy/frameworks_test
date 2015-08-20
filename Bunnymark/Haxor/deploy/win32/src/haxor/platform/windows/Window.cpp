#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxor_component_Behaviour
#include <haxor/component/Behaviour.h>
#endif
#ifndef INCLUDED_haxor_component_Component
#include <haxor/component/Component.h>
#endif
#ifndef INCLUDED_haxor_core_Application
#include <haxor/core/Application.h>
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
#ifndef INCLUDED_haxor_input_Input
#include <haxor/input/Input.h>
#endif
#ifndef INCLUDED_haxor_input_InputHandler
#include <haxor/input/InputHandler.h>
#endif
#ifndef INCLUDED_haxor_platform_OSWindow
#include <haxor/platform/OSWindow.h>
#endif
#ifndef INCLUDED_haxor_platform_windows_WinApplication
#include <haxor/platform/windows/WinApplication.h>
#endif
#ifndef INCLUDED_haxor_platform_windows_Window
#include <haxor/platform/windows/Window.h>
#endif
#ifndef INCLUDED_haxor_platform_windows_input_WinInputHandler
#include <haxor/platform/windows/input/WinInputHandler.h>
#endif

HWND hwnd;

namespace haxor{
namespace platform{
namespace windows{



int k = 0;

LRESULT CALLBACK haxor::platform::windows::Window_obj::WndProc(HWND p_hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	
	m_application->OnMessage(msg,wParam,lParam);
	
	RECT * wr; 
	
	
	
    switch(msg)
    {
		case WM_CREATE:
			{
				
			}
			break;
		case WM_PAINT:
			{			
				POINT mp;
				GetCursorPos( & mp);
				ScreenToClient(p_hwnd, & mp);			
				if (m_instance-> m_cursor_lock)
				{				
					POINT lp; lp.x = 300; lp.y = 300;
					if (m_instance-> m_cursor_flag == 0) SetCursorPos(lp.x, lp.y);								
					ScreenToClient(p_hwnd, &lp);
					if (m_instance-> m_cursor_flag == 0)
					{
						mp.x = lp.x;
						mp.y = lp.y;
					}												
					m_instance-> m_cursor_flag = (m_instance-> m_cursor_flag + 1) % 5;
				}			
				m_instance-> m_mouseX = mp.x;
				m_instance-> m_mouseY = mp.y;
				
				if (m_build)
				{
					input->OnMouseMove(mp.x, mp.y);
					m_application->Update();
					m_application->Render();
				}
				
				
				
				return true;
			}
			
		case WM_SETFOCUS:
			m_instance->m_focused = true;
			if (m_build)m_application->OnFocus();
			break;
			
		case WM_KILLFOCUS:
			m_instance->m_focused = false;
			if (m_build)m_application->OnUnfocus();
			break;
			
		case WM_MOUSEMOVE:
			{
				POINT mp;
				GetCursorPos( & mp);				
			}
			break;
			
		case WM_LBUTTONDOWN: if (m_build) input->OnMouseButton(0, true); break;			
		case WM_LBUTTONUP: 	 if (m_build) input->OnMouseButton(0, false); break;		
		case WM_MBUTTONDOWN: if (m_build) input->OnMouseButton(1, true); break;			
		case WM_MBUTTONUP: 	 if (m_build) input->OnMouseButton(1, false); break;
		case WM_RBUTTONDOWN: if (m_build) input->OnMouseButton(2, true); break;			
		case WM_RBUTTONUP: 	 if (m_build) input->OnMouseButton(2, false); break;
		
		case WM_MOUSEWHEEL:		
		if (m_build)
		{
			float wheel = ((float) GET_WHEEL_DELTA_WPARAM(wParam)) / ((float) WHEEL_DELTA);
			input->OnMouseWheel(wheel);
		}
		break;
		
		case WM_KEYUP:
			
			if (m_build) input->OnKey(wParam, false);
			break;
			
		case WM_KEYDOWN:			
			if (m_build) input->OnKey(wParam, true);
			//printf("%d\n", wParam);
			
			if (wParam == VK_SPACE)
			{
				//bool b = m_instance-> get_fullscreen();
				//m_instance->set_fullscreen(!b);			
				//m_instance-> m_cursor_lock = !m_instance-> m_cursor_lock;
				
			}
			
			break;
		
		case WM_MOVING:
			{
				
				wr = (RECT * ) lParam;
				m_instance-> m_x 	  = wr->left;			
				m_instance-> m_y 	  = wr->top;
				
			}			
			break;
			
		case WM_SIZE:
			{
				//if (m_application->m_build)
				//{
				int fwSizeType    = wParam; 
				if(fwSizeType == SIZE_MINIMIZED) break;					
				m_instance-> m_width  = LOWORD(lParam); 
				m_instance-> m_height = HIWORD(lParam);				
				m_instance-> OnResize();
				//}
				
			}			
			break;
			
		case WM_SIZING:
			{
				
				wr = (RECT * ) lParam;
				m_instance-> m_x 	  = wr->left;			
				m_instance-> m_y 	  = wr->top;
				m_instance-> m_width  = wr->right - wr->left;
				m_instance-> m_height = wr->bottom - wr->top;
				m_instance-> OnResize();
				
			}
			break;
        
		case WM_CLOSE:			
            DestroyWindow(p_hwnd);
        break;
		
		case WM_DESTROY:		
			m_application->OnQuit();
            PostQuitMessage(0);			
        break;
		
    }
    return DefWindowProc(p_hwnd, msg, wParam, lParam);
}


Void Window_obj::__construct(::haxor::core::Application p_application,::String p_title,int p_x,int p_y,int p_width,int p_height)
{
HX_STACK_FRAME("haxor.platform.windows.Window","new",0x242ce9bc,"haxor.platform.windows.Window.new","haxor/platform/windows/Window.hx",244,0xdc1fc533)
HX_STACK_THIS(this)
HX_STACK_ARG(p_application,"p_application")
HX_STACK_ARG(p_title,"p_title")
HX_STACK_ARG(p_x,"p_x")
HX_STACK_ARG(p_y,"p_y")
HX_STACK_ARG(p_width,"p_width")
HX_STACK_ARG(p_height,"p_height")
{
	HX_STACK_LINE(245)
	::haxor::platform::windows::Window_obj::m_instance = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(246)
	::haxor::platform::windows::Window_obj::m_application = p_application;
	HX_STACK_LINE(247)
	::haxor::core::Application tmp = ::haxor::platform::windows::Window_obj::m_application;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(247)
	tmp->m_window = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(248)
	::haxor::platform::windows::Window_obj::m_build = false;
	HX_STACK_LINE(249)
	::haxor::platform::windows::input::WinInputHandler tmp1 = ::haxor::platform::windows::input::WinInputHandler_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(249)
	::haxor::platform::windows::Window_obj::input = tmp1;
	HX_STACK_LINE(250)
	::haxor::platform::windows::input::WinInputHandler tmp2 = ::haxor::platform::windows::Window_obj::input;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(250)
	::haxor::input::Input_obj::m_handler = tmp2;
	HX_STACK_LINE(253)
	::String tmp3 = p_title;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(253)
	int tmp4 = p_x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(253)
	int tmp5 = p_y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(253)
	int tmp6 = p_width;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(253)
	int tmp7 = p_height;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(253)
	super::__construct(tmp3,tmp4,tmp5,tmp6,tmp7);
	HX_STACK_LINE(255)
	
		
		
		
		HINSTANCE hInstance 		= GetModuleHandle(NULL);
		HINSTANCE hPrevInstance		= NULL;
		LPSTR lpCmdLine 			= GetCommandLine();
		int nCmdShow 				= SW_SHOWNORMAL;		
		
		WNDCLASSEX wc;
		wc.cbSize        = sizeof(WNDCLASSEX);
		wc.style         = 0;
		wc.lpfnWndProc   = WndProc;
		wc.cbClsExtra    = 0;
		wc.cbWndExtra    = 0;
		wc.hInstance     = hInstance;
		wc.hIcon         = (HICON)LoadImage((HINSTANCE) NULL, "icon.ico", IMAGE_ICON, 0, 0, LR_LOADFROMFILE);
		wc.hIconSm       = (HICON)LoadImage((HINSTANCE)NULL, "icon.ico",IMAGE_ICON,0,0,LR_LOADFROMFILE);
		wc.hCursor       = LoadCursor(NULL, IDC_ARROW);
		wc.hbrBackground = (HBRUSH)(COLOR_WINDOW+1);
		wc.lpszMenuName  = NULL;
		wc.lpszClassName = "HaxeWindow";
		
		
		if (!RegisterClassEx( & wc)) 
		{ 
			printf("Window> Failed to register window.\n"); 
			return null();
		}
		
		hwnd = CreateWindowEx(WS_EX_CLIENTEDGE, "HaxeWindow", p_title.__CStr(), WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, p_width, p_height, NULL, NULL, hInstance, NULL);
		
		if (hwnd == NULL) 
		{ 
			printf("Window> Failed to create window.\n"); 
			return null(); 
		}		
		
		ShowWindow(hwnd, nCmdShow);		
		UpdateWindow(hwnd);
		
		SetWindowPos(hwnd, NULL, m_x, m_y, m_width, m_height, SWP_SHOWWINDOW | SWP_DRAWFRAME);
		
		printf("Window> hwnd[%d]\n",hwnd); 
		
		;
	HX_STACK_LINE(302)
	::haxor::platform::windows::Window_obj::m_build = true;
}
;
	return null();
}

//Window_obj::~Window_obj() { }

Dynamic Window_obj::__CreateEmpty() { return  new Window_obj; }
hx::ObjectPtr< Window_obj > Window_obj::__new(::haxor::core::Application p_application,::String p_title,int p_x,int p_y,int p_width,int p_height)
{  hx::ObjectPtr< Window_obj > _result_ = new Window_obj();
	_result_->__construct(p_application,p_title,p_x,p_y,p_width,p_height);
	return _result_;}

Dynamic Window_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Window_obj > _result_ = new Window_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

bool Window_obj::get_border( ){
	HX_STACK_FRAME("haxor.platform.windows.Window","get_border",0xc92ec6d9,"haxor.platform.windows.Window.get_border","haxor/platform/windows/Window.hx",211,0xdc1fc533)
	HX_STACK_THIS(this)
	HX_STACK_LINE(211)
	bool tmp = this->m_border;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(211)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_border,return )

bool Window_obj::set_border( bool v){
	HX_STACK_FRAME("haxor.platform.windows.Window","set_border",0xccac654d,"haxor.platform.windows.Window.set_border","haxor/platform/windows/Window.hx",212,0xdc1fc533)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(212)
	this->m_border = v;
	HX_STACK_LINE(212)
	this->OnStyle();
	HX_STACK_LINE(212)
	bool tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(212)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_border,return )

Void Window_obj::Run( ){
{
		HX_STACK_FRAME("haxor.platform.windows.Window","Run",0x2417b887,"haxor.platform.windows.Window.Run","haxor/platform/windows/Window.hx",309,0xdc1fc533)
		HX_STACK_THIS(this)
		HX_STACK_LINE(310)
		int res = (int)0;		HX_STACK_VAR(res,"res");
		HX_STACK_LINE(311)
		while((true)){
			HX_STACK_LINE(313)
			
				MSG Msg;
				res = GetMessage( & Msg, NULL, 0, 0);				
				DispatchMessage( & Msg);
				if (res <= 0) break;
			;
			HX_STACK_LINE(320)
			::Sys_obj::sleep(((Float)0.002));
		}
	}
return null();
}


Void Window_obj::EnableCursor( ){
{
		HX_STACK_FRAME("haxor.platform.windows.Window","EnableCursor",0x2b081cfd,"haxor.platform.windows.Window.EnableCursor","haxor/platform/windows/Window.hx",327,0xdc1fc533)
		HX_STACK_THIS(this)
		HX_STACK_LINE(327)
		while (ShowCursor(true) < 0);
	}
return null();
}


Void Window_obj::DisableCursor( ){
{
		HX_STACK_FRAME("haxor.platform.windows.Window","DisableCursor",0xd16eff1a,"haxor.platform.windows.Window.DisableCursor","haxor/platform/windows/Window.hx",332,0xdc1fc533)
		HX_STACK_THIS(this)
		HX_STACK_LINE(332)
		while (ShowCursor(false) >= 0);
	}
return null();
}


Void Window_obj::OnResize( ){
{
		HX_STACK_FRAME("haxor.platform.windows.Window","OnResize",0xc03b85b7,"haxor.platform.windows.Window.OnResize","haxor/platform/windows/Window.hx",339,0xdc1fc533)
		HX_STACK_THIS(this)
	}
return null();
}


Void Window_obj::OnStyle( ){
{
		HX_STACK_FRAME("haxor.platform.windows.Window","OnStyle",0x696362ce,"haxor.platform.windows.Window.OnStyle","haxor/platform/windows/Window.hx",348,0xdc1fc533)
		HX_STACK_THIS(this)
		HX_STACK_LINE(348)
		
			LONG lStyle = GetWindowLong(hwnd, GWL_STYLE);
			if (!m_border) lStyle &= ~(WS_CAPTION | WS_THICKFRAME | WS_SYSMENU);
			else lStyle |= (WS_CAPTION  | WS_THICKFRAME | WS_SYSMENU);			
			SetWindowLong(hwnd, GWL_STYLE, lStyle);
			
			LONG lExStyle = GetWindowLong(hwnd, GWL_EXSTYLE);
			if (!m_border)
			{
				lExStyle &= ~(WS_EX_DLGMODALFRAME | WS_EX_CLIENTEDGE | WS_EX_STATICEDGE);
			}
			else
			{
				lExStyle |= (WS_EX_DLGMODALFRAME | WS_EX_CLIENTEDGE | WS_EX_STATICEDGE);
			}
			SetWindowLong(hwnd, GWL_EXSTYLE, lExStyle);
		;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,OnStyle,(void))

Void Window_obj::OnTitleChange( ){
{
		HX_STACK_FRAME("haxor.platform.windows.Window","OnTitleChange",0xce59ae85,"haxor.platform.windows.Window.OnTitleChange","haxor/platform/windows/Window.hx",376,0xdc1fc533)
		HX_STACK_THIS(this)
		HX_STACK_LINE(376)
		SetWindowText(hwnd, m_title.__CStr());
	}
return null();
}


Void Window_obj::OnFullscreen( ){
{
		HX_STACK_FRAME("haxor.platform.windows.Window","OnFullscreen",0x1389037e,"haxor.platform.windows.Window.OnFullscreen","haxor/platform/windows/Window.hx",384,0xdc1fc533)
		HX_STACK_THIS(this)
		HX_STACK_LINE(384)
				
			if (m_fullscreen)
			{
				set_border(false);
				HWND desktop = GetDesktopWindow(); 
				RECT dr;
				GetWindowRect(desktop, & dr);
				m_fs_x 		= m_x;
				m_fs_y 	    = m_y;
				m_fs_width  = m_width;
				m_fs_height = m_height;
				SetWindowPos(hwnd, NULL, dr.left, dr.top, dr.right - dr.left, dr.bottom - dr.top, SWP_SHOWWINDOW | SWP_DRAWFRAME);
				m_application->OnFullscreenEnter();
			}
			else
			{				
				m_x 		= m_fs_x;
				m_y 	    = m_fs_y;
				m_width  	= m_fs_width;
				m_height 	= m_fs_height;
				SetWindowPos(hwnd,NULL,m_x,m_y,m_width,m_height,SWP_SHOWWINDOW | SWP_DRAWFRAME);
				set_border(true);
				m_application->OnFullscreenExit();
			}
		;
	}
return null();
}


::haxor::platform::windows::input::WinInputHandler Window_obj::input;

::haxor::core::Application Window_obj::m_application;

::haxor::platform::windows::Window Window_obj::m_instance;

bool Window_obj::m_build;


Window_obj::Window_obj()
{
}

Dynamic Window_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"Run") ) { return Run_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { if (inCallProp == hx::paccAlways) return get_border(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"OnStyle") ) { return OnStyle_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_border") ) { return m_border; }
		if (HX_FIELD_EQ(inName,"OnResize") ) { return OnResize_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_border") ) { return get_border_dyn(); }
		if (HX_FIELD_EQ(inName,"set_border") ) { return set_border_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"EnableCursor") ) { return EnableCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"OnFullscreen") ) { return OnFullscreen_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"DisableCursor") ) { return DisableCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"OnTitleChange") ) { return OnTitleChange_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Window_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { outValue = input; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_build") ) { outValue = m_build; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_instance") ) { outValue = m_instance; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"m_application") ) { outValue = m_application; return true;  }
	}
	return false;
}

Dynamic Window_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { if (inCallProp == hx::paccAlways) return set_border(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_border") ) { m_border=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Window_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { input=ioValue.Cast< ::haxor::platform::windows::input::WinInputHandler >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_build") ) { m_build=ioValue.Cast< bool >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_instance") ) { m_instance=ioValue.Cast< ::haxor::platform::windows::Window >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"m_application") ) { m_application=ioValue.Cast< ::haxor::core::Application >(); return true; }
	}
	return false;
}

void Window_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("border","\xec","\x4c","\x1a","\x64"));
	outFields->push(HX_HCSTRING("m_border","\xbe","\xf5","\x0b","\x2d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Window_obj,m_border),HX_HCSTRING("m_border","\xbe","\xf5","\x0b","\x2d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxor::platform::windows::input::WinInputHandler*/ ,(void *) &Window_obj::input,HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe")},
	{hx::fsObject /*::haxor::core::Application*/ ,(void *) &Window_obj::m_application,HX_HCSTRING("m_application","\x3e","\xc9","\x3d","\x43")},
	{hx::fsObject /*::haxor::platform::windows::Window*/ ,(void *) &Window_obj::m_instance,HX_HCSTRING("m_instance","\xe7","\x20","\x2c","\x81")},
	{hx::fsBool,(void *) &Window_obj::m_build,HX_HCSTRING("m_build","\x9c","\xb2","\x75","\x6b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get_border","\xb5","\xbc","\xa1","\x54"),
	HX_HCSTRING("set_border","\x29","\x5b","\x1f","\x58"),
	HX_HCSTRING("m_border","\xbe","\xf5","\x0b","\x2d"),
	HX_HCSTRING("Run","\x2b","\x9f","\x3e","\x00"),
	HX_HCSTRING("EnableCursor","\xd9","\x41","\x89","\xb1"),
	HX_HCSTRING("DisableCursor","\xbe","\x1a","\xee","\xfb"),
	HX_HCSTRING("OnResize","\x93","\x0c","\xda","\xc1"),
	HX_HCSTRING("OnStyle","\x72","\x6b","\xac","\xe7"),
	HX_HCSTRING("OnTitleChange","\x29","\xca","\xd8","\xf8"),
	HX_HCSTRING("OnFullscreen","\x5a","\x28","\x0a","\x9a"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Window_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Window_obj::input,"input");
	HX_MARK_MEMBER_NAME(Window_obj::m_application,"m_application");
	HX_MARK_MEMBER_NAME(Window_obj::m_instance,"m_instance");
	HX_MARK_MEMBER_NAME(Window_obj::m_build,"m_build");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Window_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Window_obj::input,"input");
	HX_VISIT_MEMBER_NAME(Window_obj::m_application,"m_application");
	HX_VISIT_MEMBER_NAME(Window_obj::m_instance,"m_instance");
	HX_VISIT_MEMBER_NAME(Window_obj::m_build,"m_build");
};

#endif

hx::Class Window_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"),
	HX_HCSTRING("m_application","\x3e","\xc9","\x3d","\x43"),
	HX_HCSTRING("m_instance","\xe7","\x20","\x2c","\x81"),
	HX_HCSTRING("m_build","\x9c","\xb2","\x75","\x6b"),
	String(null()) };

void Window_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.platform.windows.Window","\xca","\x9b","\x96","\x17");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Window_obj::__GetStatic;
	__mClass->mSetStaticField = &Window_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Window_obj >;
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
