#include <hxcpp.h>

#ifndef INCLUDED_haxor_component_Behaviour
#include <haxor/component/Behaviour.h>
#endif
#ifndef INCLUDED_haxor_component_Component
#include <haxor/component/Component.h>
#endif
#ifndef INCLUDED_haxor_core_BaseApplication
#include <haxor/core/BaseApplication.h>
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
#ifndef INCLUDED_haxor_platform_OSWindow
#include <haxor/platform/OSWindow.h>
#endif
#ifndef INCLUDED_haxor_platform_windows_WinApplication
#include <haxor/platform/windows/WinApplication.h>
#endif
#ifndef INCLUDED_haxor_platform_windows_Window
#include <haxor/platform/windows/Window.h>
#endif
namespace haxor{
namespace platform{
namespace windows{

Void WinApplication_obj::__construct()
{
HX_STACK_FRAME("haxor.platform.windows.WinApplication","new",0xe4507a60,"haxor.platform.windows.WinApplication.new","haxor/platform/windows/WinApplication.hx",38,0x94d4ac0f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(38)
	super::__construct(null());
}
;
	return null();
}

//WinApplication_obj::~WinApplication_obj() { }

Dynamic WinApplication_obj::__CreateEmpty() { return  new WinApplication_obj; }
hx::ObjectPtr< WinApplication_obj > WinApplication_obj::__new()
{  hx::ObjectPtr< WinApplication_obj > _result_ = new WinApplication_obj();
	_result_->__construct();
	return _result_;}

Dynamic WinApplication_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WinApplication_obj > _result_ = new WinApplication_obj();
	_result_->__construct();
	return _result_;}

::haxor::platform::windows::Window WinApplication_obj::get_window( ){
	HX_STACK_FRAME("haxor.platform.windows.WinApplication","get_window",0x966099b9,"haxor.platform.windows.WinApplication.get_window","haxor/platform/windows/WinApplication.hx",24,0x94d4ac0f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(24)
	::haxor::platform::windows::Window tmp = this->m_window;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(WinApplication_obj,get_window,return )

::haxor::core::Platform WinApplication_obj::get_platform( ){
	HX_STACK_FRAME("haxor.platform.windows.WinApplication","get_platform",0x4d317cbc,"haxor.platform.windows.WinApplication.get_platform","haxor/platform/windows/WinApplication.hx",31,0x94d4ac0f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(31)
	return ::haxor::core::Platform_obj::Windows;
}


Float WinApplication_obj::GetContainerWidth( ){
	HX_STACK_FRAME("haxor.platform.windows.WinApplication","GetContainerWidth",0x0cb29e1b,"haxor.platform.windows.WinApplication.GetContainerWidth","haxor/platform/windows/WinApplication.hx",41,0x94d4ac0f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(41)
	::haxor::platform::windows::Window tmp = this->get_window();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	int tmp1 = tmp->get_width();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(41)
	Float tmp2 = ((Float)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(41)
	return tmp2;
}


Float WinApplication_obj::GetContainerHeight( ){
	HX_STACK_FRAME("haxor.platform.windows.WinApplication","GetContainerHeight",0xc5e73232,"haxor.platform.windows.WinApplication.GetContainerHeight","haxor/platform/windows/WinApplication.hx",43,0x94d4ac0f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(43)
	::haxor::platform::windows::Window tmp = this->get_window();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	int tmp1 = tmp->get_height();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(43)
	Float tmp2 = ((Float)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(43)
	return tmp2;
}


Void WinApplication_obj::OnMessage( int p_msg,int p_wp,int p_lp){
{
		HX_STACK_FRAME("haxor.platform.windows.WinApplication","OnMessage",0x5d66f848,"haxor.platform.windows.WinApplication.OnMessage","haxor/platform/windows/WinApplication.hx",52,0x94d4ac0f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_msg,"p_msg")
		HX_STACK_ARG(p_wp,"p_wp")
		HX_STACK_ARG(p_lp,"p_lp")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(WinApplication_obj,OnMessage,(void))

bool WinApplication_obj::OnFullscreenRequest( bool v){
	HX_STACK_FRAME("haxor.platform.windows.WinApplication","OnFullscreenRequest",0xb00da815,"haxor.platform.windows.WinApplication.OnFullscreenRequest","haxor/platform/windows/WinApplication.hx",59,0x94d4ac0f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(60)
	::haxor::platform::windows::Window tmp = this->get_window();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(60)
	bool tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(60)
	tmp->set_fullscreen(tmp1);
	HX_STACK_LINE(61)
	bool tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(61)
	return tmp2;
}


bool WinApplication_obj::OnPointerLockRequest( bool v){
	HX_STACK_FRAME("haxor.platform.windows.WinApplication","OnPointerLockRequest",0x71f71006,"haxor.platform.windows.WinApplication.OnPointerLockRequest","haxor/platform/windows/WinApplication.hx",69,0x94d4ac0f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(70)
	bool tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(70)
	if ((tmp)){
		HX_STACK_LINE(72)
		::haxor::platform::windows::Window tmp1 = this->get_window();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(72)
		tmp1->LockCursor();
	}
	else{
		HX_STACK_LINE(76)
		::haxor::platform::windows::Window tmp1 = this->get_window();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(76)
		tmp1->EnableCursor();
	}
	HX_STACK_LINE(79)
	bool tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(79)
	return tmp1;
}


bool WinApplication_obj::OnPointerVisibilityRequest( bool v){
	HX_STACK_FRAME("haxor.platform.windows.WinApplication","OnPointerVisibilityRequest",0x1b884e7f,"haxor.platform.windows.WinApplication.OnPointerVisibilityRequest","haxor/platform/windows/WinApplication.hx",87,0x94d4ac0f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(88)
	bool tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	if ((tmp)){
		HX_STACK_LINE(88)
		::haxor::platform::windows::Window tmp1 = this->get_window();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(88)
		tmp1->EnableCursor();
	}
	else{
		HX_STACK_LINE(88)
		::haxor::platform::windows::Window tmp1 = this->get_window();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(88)
		tmp1->DisableCursor();
	}
	HX_STACK_LINE(89)
	bool tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(89)
	return tmp1;
}



WinApplication_obj::WinApplication_obj()
{
}

void WinApplication_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WinApplication);
	HX_MARK_MEMBER_NAME(window,"window");
	HX_MARK_MEMBER_NAME(m_window,"m_window");
	::haxor::core::BaseApplication_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void WinApplication_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(window,"window");
	HX_VISIT_MEMBER_NAME(m_window,"m_window");
	::haxor::core::BaseApplication_obj::__Visit(HX_VISIT_ARG);
}

Dynamic WinApplication_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { return inCallProp == hx::paccAlways ? get_window() : window; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_window") ) { return m_window; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"OnMessage") ) { return OnMessage_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_window") ) { return get_window_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_platform") ) { return get_platform_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"GetContainerWidth") ) { return GetContainerWidth_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"GetContainerHeight") ) { return GetContainerHeight_dyn(); }
		break;
	case 19:
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

Dynamic WinApplication_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { window=inValue.Cast< ::haxor::platform::windows::Window >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_window") ) { m_window=inValue.Cast< ::haxor::platform::windows::Window >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool WinApplication_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void WinApplication_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"));
	outFields->push(HX_HCSTRING("m_window","\xc2","\x3c","\x7e","\x1b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::platform::windows::Window*/ ,(int)offsetof(WinApplication_obj,window),HX_HCSTRING("window","\xf0","\x93","\x8c","\x52")},
	{hx::fsObject /*::haxor::platform::windows::Window*/ ,(int)offsetof(WinApplication_obj,m_window),HX_HCSTRING("m_window","\xc2","\x3c","\x7e","\x1b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"),
	HX_HCSTRING("get_window","\xb9","\x03","\x14","\x43"),
	HX_HCSTRING("m_window","\xc2","\x3c","\x7e","\x1b"),
	HX_HCSTRING("get_platform","\xbc","\x66","\x13","\x1d"),
	HX_HCSTRING("GetContainerWidth","\x1b","\x74","\xa0","\x8f"),
	HX_HCSTRING("GetContainerHeight","\x32","\x9c","\x14","\xd3"),
	HX_HCSTRING("OnMessage","\x48","\xce","\x8e","\x13"),
	HX_HCSTRING("OnFullscreenRequest","\x15","\xfe","\x9c","\x2a"),
	HX_HCSTRING("OnPointerLockRequest","\x06","\xfa","\xd2","\x34"),
	HX_HCSTRING("OnPointerVisibilityRequest","\x7f","\xb8","\x2f","\x93"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WinApplication_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WinApplication_obj::__mClass,"__mClass");
};

#endif

hx::Class WinApplication_obj::__mClass;

void WinApplication_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.platform.windows.WinApplication","\x6e","\x0a","\xb4","\x83");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &WinApplication_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< WinApplication_obj >;
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
