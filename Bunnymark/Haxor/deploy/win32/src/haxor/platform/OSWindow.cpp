#include <hxcpp.h>

#ifndef INCLUDED_haxor_platform_OSWindow
#include <haxor/platform/OSWindow.h>
#endif
namespace haxor{
namespace platform{

Void OSWindow_obj::__construct(::String p_title,int p_x,int p_y,int p_width,int p_height)
{
HX_STACK_FRAME("haxor.platform.OSWindow","new",0xa5578695,"haxor.platform.OSWindow.new","haxor/platform/OSWindow.hx",102,0x2bd5f69b)
HX_STACK_THIS(this)
HX_STACK_ARG(p_title,"p_title")
HX_STACK_ARG(p_x,"p_x")
HX_STACK_ARG(p_y,"p_y")
HX_STACK_ARG(p_width,"p_width")
HX_STACK_ARG(p_height,"p_height")
{
	HX_STACK_LINE(103)
	this->m_x = p_x;
	HX_STACK_LINE(104)
	this->m_y = p_y;
	HX_STACK_LINE(105)
	this->m_width = p_width;
	HX_STACK_LINE(106)
	this->m_height = p_height;
	HX_STACK_LINE(107)
	this->m_title = p_title;
	HX_STACK_LINE(108)
	this->m_focused = true;
	HX_STACK_LINE(109)
	this->m_fullscreen = false;
	HX_STACK_LINE(110)
	this->m_cursor_lock = false;
	HX_STACK_LINE(111)
	this->m_cursor_flag = (int)0;
	HX_STACK_LINE(112)
	this->m_mouseX = (int)0;
	HX_STACK_LINE(113)
	this->m_mouseY = (int)0;
}
;
	return null();
}

//OSWindow_obj::~OSWindow_obj() { }

Dynamic OSWindow_obj::__CreateEmpty() { return  new OSWindow_obj; }
hx::ObjectPtr< OSWindow_obj > OSWindow_obj::__new(::String p_title,int p_x,int p_y,int p_width,int p_height)
{  hx::ObjectPtr< OSWindow_obj > _result_ = new OSWindow_obj();
	_result_->__construct(p_title,p_x,p_y,p_width,p_height);
	return _result_;}

Dynamic OSWindow_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OSWindow_obj > _result_ = new OSWindow_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

int OSWindow_obj::get_x( ){
	HX_STACK_FRAME("haxor.platform.OSWindow","get_x",0x476612c4,"haxor.platform.OSWindow.get_x","haxor/platform/OSWindow.hx",14,0x2bd5f69b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(14)
	int tmp = this->m_x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(OSWindow_obj,get_x,return )

int OSWindow_obj::set_x( int v){
	HX_STACK_FRAME("haxor.platform.OSWindow","set_x",0x303508d0,"haxor.platform.OSWindow.set_x","haxor/platform/OSWindow.hx",15,0x2bd5f69b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(15)
	this->m_x = v;
	HX_STACK_LINE(15)
	this->OnResize();
	HX_STACK_LINE(15)
	int tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(OSWindow_obj,set_x,return )

int OSWindow_obj::get_y( ){
	HX_STACK_FRAME("haxor.platform.OSWindow","get_y",0x476612c5,"haxor.platform.OSWindow.get_y","haxor/platform/OSWindow.hx",23,0x2bd5f69b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(23)
	int tmp = this->m_y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(OSWindow_obj,get_y,return )

int OSWindow_obj::set_y( int v){
	HX_STACK_FRAME("haxor.platform.OSWindow","set_y",0x303508d1,"haxor.platform.OSWindow.set_y","haxor/platform/OSWindow.hx",24,0x2bd5f69b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(24)
	this->m_y = v;
	HX_STACK_LINE(24)
	this->OnResize();
	HX_STACK_LINE(24)
	int tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(OSWindow_obj,set_y,return )

int OSWindow_obj::get_width( ){
	HX_STACK_FRAME("haxor.platform.OSWindow","get_width",0xb5adde52,"haxor.platform.OSWindow.get_width","haxor/platform/OSWindow.hx",32,0x2bd5f69b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(32)
	int tmp = this->m_width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(OSWindow_obj,get_width,return )

int OSWindow_obj::set_width( int v){
	HX_STACK_FRAME("haxor.platform.OSWindow","set_width",0x98feca5e,"haxor.platform.OSWindow.set_width","haxor/platform/OSWindow.hx",33,0x2bd5f69b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(33)
	this->m_width = v;
	HX_STACK_LINE(33)
	this->OnResize();
	HX_STACK_LINE(33)
	int tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(OSWindow_obj,set_width,return )

int OSWindow_obj::get_height( ){
	HX_STACK_FRAME("haxor.platform.OSWindow","get_height",0xf8c4221b,"haxor.platform.OSWindow.get_height","haxor/platform/OSWindow.hx",41,0x2bd5f69b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(41)
	int tmp = this->m_height;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(OSWindow_obj,get_height,return )

int OSWindow_obj::set_height( int v){
	HX_STACK_FRAME("haxor.platform.OSWindow","set_height",0xfc41c08f,"haxor.platform.OSWindow.set_height","haxor/platform/OSWindow.hx",42,0x2bd5f69b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(42)
	this->m_height = v;
	HX_STACK_LINE(42)
	this->OnResize();
	HX_STACK_LINE(42)
	int tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(OSWindow_obj,set_height,return )

::String OSWindow_obj::get_title( ){
	HX_STACK_FRAME("haxor.platform.OSWindow","get_title",0xfb863de4,"haxor.platform.OSWindow.get_title","haxor/platform/OSWindow.hx",51,0x2bd5f69b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(51)
	::String tmp = this->m_title;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(OSWindow_obj,get_title,return )

::String OSWindow_obj::set_title( ::String v){
	HX_STACK_FRAME("haxor.platform.OSWindow","set_title",0xded729f0,"haxor.platform.OSWindow.set_title","haxor/platform/OSWindow.hx",53,0x2bd5f69b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(54)
	this->m_title = v;
	HX_STACK_LINE(55)
	this->OnTitleChange();
	HX_STACK_LINE(56)
	::String tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(OSWindow_obj,set_title,return )

bool OSWindow_obj::get_focused( ){
	HX_STACK_FRAME("haxor.platform.OSWindow","get_focused",0xf4223183,"haxor.platform.OSWindow.get_focused","haxor/platform/OSWindow.hx",64,0x2bd5f69b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(64)
	bool tmp = this->m_focused;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(OSWindow_obj,get_focused,return )

bool OSWindow_obj::get_fullscreen( ){
	HX_STACK_FRAME("haxor.platform.OSWindow","get_fullscreen",0xe8177e6f,"haxor.platform.OSWindow.get_fullscreen","haxor/platform/OSWindow.hx",71,0x2bd5f69b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(71)
	bool tmp = this->m_fullscreen;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(71)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(OSWindow_obj,get_fullscreen,return )

bool OSWindow_obj::set_fullscreen( bool v){
	HX_STACK_FRAME("haxor.platform.OSWindow","set_fullscreen",0x083766e3,"haxor.platform.OSWindow.set_fullscreen","haxor/platform/OSWindow.hx",72,0x2bd5f69b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(72)
	bool tmp = this->m_fullscreen;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	bool tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(72)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(72)
	if ((tmp2)){
		HX_STACK_LINE(72)
		bool tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(72)
		return tmp3;
	}
	HX_STACK_LINE(72)
	this->m_fullscreen = v;
	HX_STACK_LINE(72)
	this->OnFullscreen();
	HX_STACK_LINE(72)
	bool tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(72)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(OSWindow_obj,set_fullscreen,return )

int OSWindow_obj::get_mouseX( ){
	HX_STACK_FRAME("haxor.platform.OSWindow","get_mouseX",0xc28664c7,"haxor.platform.OSWindow.get_mouseX","haxor/platform/OSWindow.hx",79,0x2bd5f69b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(79)
	int tmp = this->m_mouseX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(79)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(OSWindow_obj,get_mouseX,return )

int OSWindow_obj::get_mouseY( ){
	HX_STACK_FRAME("haxor.platform.OSWindow","get_mouseY",0xc28664c8,"haxor.platform.OSWindow.get_mouseY","haxor/platform/OSWindow.hx",86,0x2bd5f69b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(86)
	int tmp = this->m_mouseY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(86)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(OSWindow_obj,get_mouseY,return )

Void OSWindow_obj::Run( ){
{
		HX_STACK_FRAME("haxor.platform.OSWindow","Run",0xa5425560,"haxor.platform.OSWindow.Run","haxor/platform/OSWindow.hx",120,0x2bd5f69b)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OSWindow_obj,Run,(void))

Void OSWindow_obj::EnableCursor( ){
{
		HX_STACK_FRAME("haxor.platform.OSWindow","EnableCursor",0x94c99d04,"haxor.platform.OSWindow.EnableCursor","haxor/platform/OSWindow.hx",125,0x2bd5f69b)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OSWindow_obj,EnableCursor,(void))

Void OSWindow_obj::DisableCursor( ){
{
		HX_STACK_FRAME("haxor.platform.OSWindow","DisableCursor",0xf0fd8533,"haxor.platform.OSWindow.DisableCursor","haxor/platform/OSWindow.hx",130,0x2bd5f69b)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OSWindow_obj,DisableCursor,(void))

Void OSWindow_obj::LockCursor( ){
{
		HX_STACK_FRAME("haxor.platform.OSWindow","LockCursor",0x86308fac,"haxor.platform.OSWindow.LockCursor","haxor/platform/OSWindow.hx",135,0x2bd5f69b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(135)
		this->m_cursor_lock = true;
		HX_STACK_LINE(135)
		this->m_cursor_flag = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OSWindow_obj,LockCursor,(void))

Void OSWindow_obj::UnlockCursor( ){
{
		HX_STACK_FRAME("haxor.platform.OSWindow","UnlockCursor",0xa0f0b805,"haxor.platform.OSWindow.UnlockCursor","haxor/platform/OSWindow.hx",140,0x2bd5f69b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(140)
		this->m_cursor_lock = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OSWindow_obj,UnlockCursor,(void))

Void OSWindow_obj::OnResize( ){
{
		HX_STACK_FRAME("haxor.platform.OSWindow","OnResize",0x368cb63e,"haxor.platform.OSWindow.OnResize","haxor/platform/OSWindow.hx",145,0x2bd5f69b)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OSWindow_obj,OnResize,(void))

Void OSWindow_obj::OnFullscreen( ){
{
		HX_STACK_FRAME("haxor.platform.OSWindow","OnFullscreen",0x7d4a8385,"haxor.platform.OSWindow.OnFullscreen","haxor/platform/OSWindow.hx",150,0x2bd5f69b)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OSWindow_obj,OnFullscreen,(void))

Void OSWindow_obj::OnTitleChange( ){
{
		HX_STACK_FRAME("haxor.platform.OSWindow","OnTitleChange",0xede8349e,"haxor.platform.OSWindow.OnTitleChange","haxor/platform/OSWindow.hx",155,0x2bd5f69b)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OSWindow_obj,OnTitleChange,(void))


OSWindow_obj::OSWindow_obj()
{
}

void OSWindow_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OSWindow);
	HX_MARK_MEMBER_NAME(m_x,"m_x");
	HX_MARK_MEMBER_NAME(m_fs_x,"m_fs_x");
	HX_MARK_MEMBER_NAME(m_y,"m_y");
	HX_MARK_MEMBER_NAME(m_fs_y,"m_fs_y");
	HX_MARK_MEMBER_NAME(m_width,"m_width");
	HX_MARK_MEMBER_NAME(m_fs_width,"m_fs_width");
	HX_MARK_MEMBER_NAME(m_height,"m_height");
	HX_MARK_MEMBER_NAME(m_fs_height,"m_fs_height");
	HX_MARK_MEMBER_NAME(m_title,"m_title");
	HX_MARK_MEMBER_NAME(focused,"focused");
	HX_MARK_MEMBER_NAME(m_focused,"m_focused");
	HX_MARK_MEMBER_NAME(m_fullscreen,"m_fullscreen");
	HX_MARK_MEMBER_NAME(mouseX,"mouseX");
	HX_MARK_MEMBER_NAME(m_mouseX,"m_mouseX");
	HX_MARK_MEMBER_NAME(mouseY,"mouseY");
	HX_MARK_MEMBER_NAME(m_mouseY,"m_mouseY");
	HX_MARK_MEMBER_NAME(m_cursor_lock,"m_cursor_lock");
	HX_MARK_MEMBER_NAME(m_cursor_flag,"m_cursor_flag");
	HX_MARK_END_CLASS();
}

void OSWindow_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_x,"m_x");
	HX_VISIT_MEMBER_NAME(m_fs_x,"m_fs_x");
	HX_VISIT_MEMBER_NAME(m_y,"m_y");
	HX_VISIT_MEMBER_NAME(m_fs_y,"m_fs_y");
	HX_VISIT_MEMBER_NAME(m_width,"m_width");
	HX_VISIT_MEMBER_NAME(m_fs_width,"m_fs_width");
	HX_VISIT_MEMBER_NAME(m_height,"m_height");
	HX_VISIT_MEMBER_NAME(m_fs_height,"m_fs_height");
	HX_VISIT_MEMBER_NAME(m_title,"m_title");
	HX_VISIT_MEMBER_NAME(focused,"focused");
	HX_VISIT_MEMBER_NAME(m_focused,"m_focused");
	HX_VISIT_MEMBER_NAME(m_fullscreen,"m_fullscreen");
	HX_VISIT_MEMBER_NAME(mouseX,"mouseX");
	HX_VISIT_MEMBER_NAME(m_mouseX,"m_mouseX");
	HX_VISIT_MEMBER_NAME(mouseY,"mouseY");
	HX_VISIT_MEMBER_NAME(m_mouseY,"m_mouseY");
	HX_VISIT_MEMBER_NAME(m_cursor_lock,"m_cursor_lock");
	HX_VISIT_MEMBER_NAME(m_cursor_flag,"m_cursor_flag");
}

Dynamic OSWindow_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return get_x(); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return get_y(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"m_x") ) { return m_x; }
		if (HX_FIELD_EQ(inName,"m_y") ) { return m_y; }
		if (HX_FIELD_EQ(inName,"Run") ) { return Run_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return get_width(); }
		if (HX_FIELD_EQ(inName,"title") ) { if (inCallProp == hx::paccAlways) return get_title(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_fs_x") ) { return m_fs_x; }
		if (HX_FIELD_EQ(inName,"m_fs_y") ) { return m_fs_y; }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return get_height(); }
		if (HX_FIELD_EQ(inName,"mouseX") ) { return inCallProp == hx::paccAlways ? get_mouseX() : mouseX; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { return inCallProp == hx::paccAlways ? get_mouseY() : mouseY; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_width") ) { return m_width; }
		if (HX_FIELD_EQ(inName,"m_title") ) { return m_title; }
		if (HX_FIELD_EQ(inName,"focused") ) { return inCallProp == hx::paccAlways ? get_focused() : focused; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_height") ) { return m_height; }
		if (HX_FIELD_EQ(inName,"m_mouseX") ) { return m_mouseX; }
		if (HX_FIELD_EQ(inName,"m_mouseY") ) { return m_mouseY; }
		if (HX_FIELD_EQ(inName,"OnResize") ) { return OnResize_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		if (HX_FIELD_EQ(inName,"get_title") ) { return get_title_dyn(); }
		if (HX_FIELD_EQ(inName,"set_title") ) { return set_title_dyn(); }
		if (HX_FIELD_EQ(inName,"m_focused") ) { return m_focused; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_fs_width") ) { return m_fs_width; }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		if (HX_FIELD_EQ(inName,"fullscreen") ) { if (inCallProp == hx::paccAlways) return get_fullscreen(); }
		if (HX_FIELD_EQ(inName,"get_mouseX") ) { return get_mouseX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseY") ) { return get_mouseY_dyn(); }
		if (HX_FIELD_EQ(inName,"LockCursor") ) { return LockCursor_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"m_fs_height") ) { return m_fs_height; }
		if (HX_FIELD_EQ(inName,"get_focused") ) { return get_focused_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"m_fullscreen") ) { return m_fullscreen; }
		if (HX_FIELD_EQ(inName,"EnableCursor") ) { return EnableCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"UnlockCursor") ) { return UnlockCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"OnFullscreen") ) { return OnFullscreen_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"m_cursor_lock") ) { return m_cursor_lock; }
		if (HX_FIELD_EQ(inName,"m_cursor_flag") ) { return m_cursor_flag; }
		if (HX_FIELD_EQ(inName,"DisableCursor") ) { return DisableCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"OnTitleChange") ) { return OnTitleChange_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_fullscreen") ) { return get_fullscreen_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fullscreen") ) { return set_fullscreen_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic OSWindow_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return set_x(inValue); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return set_y(inValue); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"m_x") ) { m_x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_y") ) { m_y=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return set_width(inValue); }
		if (HX_FIELD_EQ(inName,"title") ) { if (inCallProp == hx::paccAlways) return set_title(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_fs_x") ) { m_fs_x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_fs_y") ) { m_fs_y=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return set_height(inValue); }
		if (HX_FIELD_EQ(inName,"mouseX") ) { mouseX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { mouseY=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_width") ) { m_width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_title") ) { m_title=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"focused") ) { focused=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_height") ) { m_height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_mouseX") ) { m_mouseX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_mouseY") ) { m_mouseY=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"m_focused") ) { m_focused=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_fs_width") ) { m_fs_width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fullscreen") ) { if (inCallProp == hx::paccAlways) return set_fullscreen(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"m_fs_height") ) { m_fs_height=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"m_fullscreen") ) { m_fullscreen=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"m_cursor_lock") ) { m_cursor_lock=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_cursor_flag") ) { m_cursor_flag=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool OSWindow_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void OSWindow_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("m_x","\xe6","\x08","\x53","\x00"));
	outFields->push(HX_HCSTRING("m_fs_x","\x18","\xca","\xba","\x8b"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("m_y","\xe7","\x08","\x53","\x00"));
	outFields->push(HX_HCSTRING("m_fs_y","\x19","\xca","\xba","\x8b"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("m_width","\x74","\x8d","\xed","\x7a"));
	outFields->push(HX_HCSTRING("m_fs_width","\xa6","\xcf","\xd2","\x65"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("m_height","\xb9","\xb0","\x3d","\xcb"));
	outFields->push(HX_HCSTRING("m_fs_height","\x47","\x5a","\xf2","\x68"));
	outFields->push(HX_HCSTRING("title","\x98","\x15","\x3b","\x10"));
	outFields->push(HX_HCSTRING("m_title","\x06","\xed","\xc5","\xc0"));
	outFields->push(HX_HCSTRING("focused","\x37","\x5e","\x83","\x41"));
	outFields->push(HX_HCSTRING("m_focused","\x25","\x6d","\x05","\x4c"));
	outFields->push(HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9"));
	outFields->push(HX_HCSTRING("m_fullscreen","\x0d","\xb4","\xbf","\xca"));
	outFields->push(HX_HCSTRING("mouseX","\x93","\x4a","\x0e","\xcc"));
	outFields->push(HX_HCSTRING("m_mouseX","\x65","\xf3","\xff","\x94"));
	outFields->push(HX_HCSTRING("mouseY","\x94","\x4a","\x0e","\xcc"));
	outFields->push(HX_HCSTRING("m_mouseY","\x66","\xf3","\xff","\x94"));
	outFields->push(HX_HCSTRING("m_cursor_lock","\x22","\xbf","\x7b","\x09"));
	outFields->push(HX_HCSTRING("m_cursor_flag","\xe3","\x2e","\x82","\x05"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(OSWindow_obj,m_x),HX_HCSTRING("m_x","\xe6","\x08","\x53","\x00")},
	{hx::fsInt,(int)offsetof(OSWindow_obj,m_fs_x),HX_HCSTRING("m_fs_x","\x18","\xca","\xba","\x8b")},
	{hx::fsInt,(int)offsetof(OSWindow_obj,m_y),HX_HCSTRING("m_y","\xe7","\x08","\x53","\x00")},
	{hx::fsInt,(int)offsetof(OSWindow_obj,m_fs_y),HX_HCSTRING("m_fs_y","\x19","\xca","\xba","\x8b")},
	{hx::fsInt,(int)offsetof(OSWindow_obj,m_width),HX_HCSTRING("m_width","\x74","\x8d","\xed","\x7a")},
	{hx::fsInt,(int)offsetof(OSWindow_obj,m_fs_width),HX_HCSTRING("m_fs_width","\xa6","\xcf","\xd2","\x65")},
	{hx::fsInt,(int)offsetof(OSWindow_obj,m_height),HX_HCSTRING("m_height","\xb9","\xb0","\x3d","\xcb")},
	{hx::fsInt,(int)offsetof(OSWindow_obj,m_fs_height),HX_HCSTRING("m_fs_height","\x47","\x5a","\xf2","\x68")},
	{hx::fsString,(int)offsetof(OSWindow_obj,m_title),HX_HCSTRING("m_title","\x06","\xed","\xc5","\xc0")},
	{hx::fsBool,(int)offsetof(OSWindow_obj,focused),HX_HCSTRING("focused","\x37","\x5e","\x83","\x41")},
	{hx::fsBool,(int)offsetof(OSWindow_obj,m_focused),HX_HCSTRING("m_focused","\x25","\x6d","\x05","\x4c")},
	{hx::fsBool,(int)offsetof(OSWindow_obj,m_fullscreen),HX_HCSTRING("m_fullscreen","\x0d","\xb4","\xbf","\xca")},
	{hx::fsInt,(int)offsetof(OSWindow_obj,mouseX),HX_HCSTRING("mouseX","\x93","\x4a","\x0e","\xcc")},
	{hx::fsInt,(int)offsetof(OSWindow_obj,m_mouseX),HX_HCSTRING("m_mouseX","\x65","\xf3","\xff","\x94")},
	{hx::fsInt,(int)offsetof(OSWindow_obj,mouseY),HX_HCSTRING("mouseY","\x94","\x4a","\x0e","\xcc")},
	{hx::fsInt,(int)offsetof(OSWindow_obj,m_mouseY),HX_HCSTRING("m_mouseY","\x66","\xf3","\xff","\x94")},
	{hx::fsBool,(int)offsetof(OSWindow_obj,m_cursor_lock),HX_HCSTRING("m_cursor_lock","\x22","\xbf","\x7b","\x09")},
	{hx::fsInt,(int)offsetof(OSWindow_obj,m_cursor_flag),HX_HCSTRING("m_cursor_flag","\xe3","\x2e","\x82","\x05")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("m_x","\xe6","\x08","\x53","\x00"),
	HX_HCSTRING("m_fs_x","\x18","\xca","\xba","\x8b"),
	HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	HX_HCSTRING("m_y","\xe7","\x08","\x53","\x00"),
	HX_HCSTRING("m_fs_y","\x19","\xca","\xba","\x8b"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	HX_HCSTRING("m_width","\x74","\x8d","\xed","\x7a"),
	HX_HCSTRING("m_fs_width","\xa6","\xcf","\xd2","\x65"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("m_height","\xb9","\xb0","\x3d","\xcb"),
	HX_HCSTRING("m_fs_height","\x47","\x5a","\xf2","\x68"),
	HX_HCSTRING("get_title","\xef","\x71","\xe4","\x53"),
	HX_HCSTRING("set_title","\xfb","\x5d","\x35","\x37"),
	HX_HCSTRING("m_title","\x06","\xed","\xc5","\xc0"),
	HX_HCSTRING("focused","\x37","\x5e","\x83","\x41"),
	HX_HCSTRING("get_focused","\x4e","\xbe","\x7d","\xc7"),
	HX_HCSTRING("m_focused","\x25","\x6d","\x05","\x4c"),
	HX_HCSTRING("get_fullscreen","\x84","\xc2","\xa9","\x6f"),
	HX_HCSTRING("set_fullscreen","\xf8","\xaa","\xc9","\x8f"),
	HX_HCSTRING("m_fullscreen","\x0d","\xb4","\xbf","\xca"),
	HX_HCSTRING("mouseX","\x93","\x4a","\x0e","\xcc"),
	HX_HCSTRING("get_mouseX","\x5c","\xba","\x95","\xbc"),
	HX_HCSTRING("m_mouseX","\x65","\xf3","\xff","\x94"),
	HX_HCSTRING("mouseY","\x94","\x4a","\x0e","\xcc"),
	HX_HCSTRING("get_mouseY","\x5d","\xba","\x95","\xbc"),
	HX_HCSTRING("m_mouseY","\x66","\xf3","\xff","\x94"),
	HX_HCSTRING("m_cursor_lock","\x22","\xbf","\x7b","\x09"),
	HX_HCSTRING("m_cursor_flag","\xe3","\x2e","\x82","\x05"),
	HX_HCSTRING("Run","\x2b","\x9f","\x3e","\x00"),
	HX_HCSTRING("EnableCursor","\xd9","\x41","\x89","\xb1"),
	HX_HCSTRING("DisableCursor","\xbe","\x1a","\xee","\xfb"),
	HX_HCSTRING("LockCursor","\x41","\xe5","\x3f","\x80"),
	HX_HCSTRING("UnlockCursor","\xda","\x5c","\xb0","\xbd"),
	HX_HCSTRING("OnResize","\x93","\x0c","\xda","\xc1"),
	HX_HCSTRING("OnFullscreen","\x5a","\x28","\x0a","\x9a"),
	HX_HCSTRING("OnTitleChange","\x29","\xca","\xd8","\xf8"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OSWindow_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OSWindow_obj::__mClass,"__mClass");
};

#endif

hx::Class OSWindow_obj::__mClass;

void OSWindow_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.platform.OSWindow","\x23","\x98","\xe9","\x4e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &OSWindow_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OSWindow_obj >;
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
