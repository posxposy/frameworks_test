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
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_graphics_CursorMode
#include <haxor/graphics/CursorMode.h>
#endif
#ifndef INCLUDED_haxor_graphics_Screen
#include <haxor/graphics/Screen.h>
#endif
namespace haxor{
namespace graphics{

Void Screen_obj::__construct()
{
	return null();
}

//Screen_obj::~Screen_obj() { }

Dynamic Screen_obj::__CreateEmpty() { return  new Screen_obj; }
hx::ObjectPtr< Screen_obj > Screen_obj::__new()
{  hx::ObjectPtr< Screen_obj > _result_ = new Screen_obj();
	_result_->__construct();
	return _result_;}

Dynamic Screen_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Screen_obj > _result_ = new Screen_obj();
	_result_->__construct();
	return _result_;}

Float Screen_obj::width;

Float Screen_obj::get_width( ){
	HX_STACK_FRAME("haxor.graphics.Screen","get_width",0x9765f0d2,"haxor.graphics.Screen.get_width","haxor/graphics/Screen.hx",21,0x29014c1b)
	HX_STACK_LINE(21)
	Float tmp = ::haxor::graphics::Screen_obj::m_width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,get_width,return )

Float Screen_obj::m_width;

Float Screen_obj::height;

Float Screen_obj::get_height( ){
	HX_STACK_FRAME("haxor.graphics.Screen","get_height",0x981c3f9b,"haxor.graphics.Screen.get_height","haxor/graphics/Screen.hx",28,0x29014c1b)
	HX_STACK_LINE(28)
	Float tmp = ::haxor::graphics::Screen_obj::m_height;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,get_height,return )

Float Screen_obj::m_height;

bool Screen_obj::get_fullscreen( ){
	HX_STACK_FRAME("haxor.graphics.Screen","get_fullscreen",0x658c5bef,"haxor.graphics.Screen.get_fullscreen","haxor/graphics/Screen.hx",35,0x29014c1b)
	HX_STACK_LINE(35)
	bool tmp = ::haxor::graphics::Screen_obj::m_fullscreen;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,get_fullscreen,return )

bool Screen_obj::set_fullscreen( bool v){
	HX_STACK_FRAME("haxor.graphics.Screen","set_fullscreen",0x85ac4463,"haxor.graphics.Screen.set_fullscreen","haxor/graphics/Screen.hx",36,0x29014c1b)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(36)
	::haxor::core::BaseApplication tmp = ::haxor::graphics::Screen_obj::m_application;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	bool tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(36)
	bool tmp2 = tmp->OnFullscreenRequest(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(36)
	::haxor::graphics::Screen_obj::m_fullscreen = tmp2;
	HX_STACK_LINE(36)
	bool tmp3 = ::haxor::graphics::Screen_obj::m_fullscreen;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(36)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,set_fullscreen,return )

bool Screen_obj::m_fullscreen;

::haxor::graphics::CursorMode Screen_obj::get_cursor( ){
	HX_STACK_FRAME("haxor.graphics.Screen","get_cursor",0xd4b8c68a,"haxor.graphics.Screen.get_cursor","haxor/graphics/Screen.hx",43,0x29014c1b)
	HX_STACK_LINE(43)
	::haxor::graphics::CursorMode tmp = ::haxor::graphics::Screen_obj::m_cursor;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,get_cursor,return )

::haxor::graphics::CursorMode Screen_obj::set_cursor( ::haxor::graphics::CursorMode v){
	HX_STACK_FRAME("haxor.graphics.Screen","set_cursor",0xd83664fe,"haxor.graphics.Screen.set_cursor","haxor/graphics/Screen.hx",45,0x29014c1b)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(46)
	bool tmp = (v == ::haxor::graphics::CursorMode_obj::Lock);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	if ((tmp)){
		HX_STACK_LINE(48)
		::haxor::core::BaseApplication tmp1 = ::haxor::graphics::Screen_obj::m_application;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(48)
		bool tmp2 = tmp1->OnPointerLockRequest(true);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(48)
		bool is_locked = tmp2;		HX_STACK_VAR(is_locked,"is_locked");
		HX_STACK_LINE(49)
		bool tmp3 = is_locked;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(49)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(49)
		if ((tmp4)){
			HX_STACK_LINE(49)
			::haxor::graphics::CursorMode tmp5 = ::haxor::graphics::Screen_obj::m_cursor = ::haxor::graphics::CursorMode_obj::Show;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(49)
			return tmp5;
		}
		HX_STACK_LINE(50)
		::haxor::core::BaseApplication tmp5 = ::haxor::graphics::Screen_obj::m_application;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(50)
		tmp5->OnPointerVisibilityRequest(false);
		HX_STACK_LINE(51)
		::haxor::graphics::CursorMode tmp6 = ::haxor::graphics::Screen_obj::m_cursor = ::haxor::graphics::CursorMode_obj::Lock;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(51)
		return tmp6;
	}
	HX_STACK_LINE(53)
	::haxor::core::BaseApplication tmp1 = ::haxor::graphics::Screen_obj::m_application;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(53)
	tmp1->OnPointerLockRequest(false);
	HX_STACK_LINE(54)
	::haxor::core::BaseApplication tmp2 = ::haxor::graphics::Screen_obj::m_application;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(54)
	bool tmp3 = (v == ::haxor::graphics::CursorMode_obj::Show);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(54)
	bool tmp4 = tmp2->OnPointerVisibilityRequest(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(54)
	bool is_visible = tmp4;		HX_STACK_VAR(is_visible,"is_visible");
	HX_STACK_LINE(55)
	bool tmp5 = is_visible;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(55)
	::haxor::graphics::CursorMode tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(55)
	if ((tmp5)){
		HX_STACK_LINE(55)
		tmp6 = ::haxor::graphics::CursorMode_obj::Show;
	}
	else{
		HX_STACK_LINE(55)
		tmp6 = ::haxor::graphics::CursorMode_obj::Hide;
	}
	HX_STACK_LINE(55)
	::haxor::graphics::CursorMode tmp7 = ::haxor::graphics::Screen_obj::m_cursor = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(55)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,set_cursor,return )

::haxor::graphics::CursorMode Screen_obj::m_cursor;

::haxor::core::BaseApplication Screen_obj::m_application;

Void Screen_obj::Initialize( ::haxor::core::BaseApplication p_application){
{
		HX_STACK_FRAME("haxor.graphics.Screen","Initialize",0x88b4fd5b,"haxor.graphics.Screen.Initialize","haxor/graphics/Screen.hx",69,0x29014c1b)
		HX_STACK_ARG(p_application,"p_application")
		HX_STACK_LINE(70)
		::haxor::graphics::Screen_obj::m_application = p_application;
		HX_STACK_LINE(71)
		::haxor::graphics::Screen_obj::m_width = (int)0;
		HX_STACK_LINE(72)
		::haxor::graphics::Screen_obj::m_height = (int)0;
		HX_STACK_LINE(73)
		::haxor::graphics::Screen_obj::m_fullscreen = false;
		HX_STACK_LINE(74)
		::haxor::graphics::Screen_obj::m_cursor = ::haxor::graphics::CursorMode_obj::Show;
		HX_STACK_LINE(75)
		::haxor::graphics::Screen_obj::m_application = null();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,Initialize,(void))


Screen_obj::Screen_obj()
{
}

bool Screen_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { outValue = inCallProp == hx::paccAlways ? get_width() : width; return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { outValue = inCallProp == hx::paccAlways ? get_height() : height; return true; }
		if (HX_FIELD_EQ(inName,"cursor") ) { if (inCallProp == hx::paccAlways) { outValue = get_cursor(); return true; } }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_width") ) { outValue = m_width; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_height") ) { outValue = m_height; return true;  }
		if (HX_FIELD_EQ(inName,"m_cursor") ) { outValue = m_cursor; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { outValue = get_width_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { outValue = get_height_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fullscreen") ) { if (inCallProp == hx::paccAlways) { outValue = get_fullscreen(); return true; } }
		if (HX_FIELD_EQ(inName,"get_cursor") ) { outValue = get_cursor_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_cursor") ) { outValue = set_cursor_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Initialize") ) { outValue = Initialize_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"m_fullscreen") ) { outValue = m_fullscreen; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"m_application") ) { outValue = m_application; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_fullscreen") ) { outValue = get_fullscreen_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_fullscreen") ) { outValue = set_fullscreen_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &Screen_obj::width,HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsFloat,(void *) &Screen_obj::m_width,HX_HCSTRING("m_width","\x74","\x8d","\xed","\x7a")},
	{hx::fsFloat,(void *) &Screen_obj::height,HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsFloat,(void *) &Screen_obj::m_height,HX_HCSTRING("m_height","\xb9","\xb0","\x3d","\xcb")},
	{hx::fsBool,(void *) &Screen_obj::m_fullscreen,HX_HCSTRING("m_fullscreen","\x0d","\xb4","\xbf","\xca")},
	{hx::fsObject /*::haxor::graphics::CursorMode*/ ,(void *) &Screen_obj::m_cursor,HX_HCSTRING("m_cursor","\xa8","\x37","\xda","\x07")},
	{hx::fsObject /*::haxor::core::BaseApplication*/ ,(void *) &Screen_obj::m_application,HX_HCSTRING("m_application","\x3e","\xc9","\x3d","\x43")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Screen_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Screen_obj::width,"width");
	HX_MARK_MEMBER_NAME(Screen_obj::m_width,"m_width");
	HX_MARK_MEMBER_NAME(Screen_obj::height,"height");
	HX_MARK_MEMBER_NAME(Screen_obj::m_height,"m_height");
	HX_MARK_MEMBER_NAME(Screen_obj::m_fullscreen,"m_fullscreen");
	HX_MARK_MEMBER_NAME(Screen_obj::m_cursor,"m_cursor");
	HX_MARK_MEMBER_NAME(Screen_obj::m_application,"m_application");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Screen_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Screen_obj::width,"width");
	HX_VISIT_MEMBER_NAME(Screen_obj::m_width,"m_width");
	HX_VISIT_MEMBER_NAME(Screen_obj::height,"height");
	HX_VISIT_MEMBER_NAME(Screen_obj::m_height,"m_height");
	HX_VISIT_MEMBER_NAME(Screen_obj::m_fullscreen,"m_fullscreen");
	HX_VISIT_MEMBER_NAME(Screen_obj::m_cursor,"m_cursor");
	HX_VISIT_MEMBER_NAME(Screen_obj::m_application,"m_application");
};

#endif

hx::Class Screen_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("m_width","\x74","\x8d","\xed","\x7a"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("m_height","\xb9","\xb0","\x3d","\xcb"),
	HX_HCSTRING("get_fullscreen","\x84","\xc2","\xa9","\x6f"),
	HX_HCSTRING("set_fullscreen","\xf8","\xaa","\xc9","\x8f"),
	HX_HCSTRING("m_fullscreen","\x0d","\xb4","\xbf","\xca"),
	HX_HCSTRING("get_cursor","\x9f","\xfe","\x6f","\x2f"),
	HX_HCSTRING("set_cursor","\x13","\x9d","\xed","\x32"),
	HX_HCSTRING("m_cursor","\xa8","\x37","\xda","\x07"),
	HX_HCSTRING("m_application","\x3e","\xc9","\x3d","\x43"),
	HX_HCSTRING("Initialize","\x70","\x35","\x6c","\xe3"),
	String(null()) };

void Screen_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.graphics.Screen","\xa3","\x8a","\x49","\xb3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Screen_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Screen_obj >;
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
} // end namespace graphics
