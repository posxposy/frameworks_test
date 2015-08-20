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
#ifndef INCLUDED_haxor_graphics_texture_Texture
#include <haxor/graphics/texture/Texture.h>
#endif
#ifndef INCLUDED_haxor_graphics_texture_Texture2D
#include <haxor/graphics/texture/Texture2D.h>
#endif
#ifndef INCLUDED_haxor_net_HTTPRequestTask
#include <haxor/net/HTTPRequestTask.h>
#endif
#ifndef INCLUDED_haxor_net_Texture2DLoader
#include <haxor/net/Texture2DLoader.h>
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

Void Texture2DLoader_obj::__construct(::String p_url,bool p_apply,Dynamic p_callback)
{
HX_STACK_FRAME("haxor.net.Texture2DLoader","new",0xbec50975,"haxor.net.Texture2DLoader.new","haxor/net/Texture2DLoader.hx",42,0x3127789d)
HX_STACK_THIS(this)
HX_STACK_ARG(p_url,"p_url")
HX_STACK_ARG(p_apply,"p_apply")
HX_STACK_ARG(p_callback,"p_callback")
{
	HX_STACK_LINE(43)
	::String tmp = p_url;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	Dynamic tmp1 = this->OnBitmapCallback_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(43)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(44)
	this->m_t2d_callback = p_callback;
	HX_STACK_LINE(45)
	this->m_apply = p_apply;
}
;
	return null();
}

//Texture2DLoader_obj::~Texture2DLoader_obj() { }

Dynamic Texture2DLoader_obj::__CreateEmpty() { return  new Texture2DLoader_obj; }
hx::ObjectPtr< Texture2DLoader_obj > Texture2DLoader_obj::__new(::String p_url,bool p_apply,Dynamic p_callback)
{  hx::ObjectPtr< Texture2DLoader_obj > _result_ = new Texture2DLoader_obj();
	_result_->__construct(p_url,p_apply,p_callback);
	return _result_;}

Dynamic Texture2DLoader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Texture2DLoader_obj > _result_ = new Texture2DLoader_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void Texture2DLoader_obj::OnBitmapCallback( ::haxor::graphics::Bitmap p_data,Float p_progress){
{
		HX_STACK_FRAME("haxor.net.Texture2DLoader","OnBitmapCallback",0x4f54543e,"haxor.net.Texture2DLoader.OnBitmapCallback","haxor/net/Texture2DLoader.hx",54,0x3127789d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_data,"p_data")
		HX_STACK_ARG(p_progress,"p_progress")
		HX_STACK_LINE(53)
		::haxor::net::Texture2DLoader _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(55)
		Float tmp = this->m_progress;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		bool tmp1 = (tmp < ((Float)1.0));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(55)
		if ((tmp1)){
			HX_STACK_LINE(57)
			Dynamic tmp2 = this->m_t2d_callback_dyn();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(57)
			bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(57)
			if ((tmp3)){
				HX_STACK_LINE(57)
				Float tmp4 = this->m_progress;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(57)
				this->m_t2d_callback(null(),tmp4);
			}
		}
		else{
			HX_STACK_LINE(61)
			bool tmp2 = (p_data == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(61)
			if ((tmp2)){
				HX_STACK_LINE(61)
				return null();
			}

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::haxor::net::Texture2DLoader,_g,::haxor::graphics::Bitmap,p_data)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","haxor/net/Texture2DLoader.hx",64,0x3127789d)
				{
					HX_STACK_LINE(65)
					::haxor::graphics::Bitmap tmp3 = p_data;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(65)
					bool tmp4 = _g->m_apply;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(65)
					::haxor::graphics::texture::Texture2D tmp5 = ::haxor::graphics::texture::Texture2D_obj::FromBitmap(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(65)
					::haxor::graphics::texture::Texture2D t = tmp5;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(66)
					::haxor::graphics::texture::Texture2D tmp6 = t;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(66)
					_g->m_t2d_callback(tmp6,((Float)1.0));
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(63)
			::haxor::thread::Activity_obj::RunOnce( Dynamic(new _Function_2_1(_g,p_data)),false,true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Texture2DLoader_obj,OnBitmapCallback,(void))

Void Texture2DLoader_obj::OnError( ){
{
		HX_STACK_FRAME("haxor.net.Texture2DLoader","OnError",0x1024799e,"haxor.net.Texture2DLoader.OnError","haxor/net/Texture2DLoader.hx",72,0x3127789d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(72)
		this->super::OnError();
		HX_STACK_LINE(72)
		Dynamic tmp = this->m_t2d_callback_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(72)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(72)
		if ((tmp1)){
			HX_STACK_LINE(72)
			this->m_bitmap_callback(null(),((Float)1.0));
		}
	}
return null();
}



Texture2DLoader_obj::Texture2DLoader_obj()
{
}

void Texture2DLoader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Texture2DLoader);
	HX_MARK_MEMBER_NAME(m_t2d_callback,"m_t2d_callback");
	HX_MARK_MEMBER_NAME(m_apply,"m_apply");
	::haxor::platform::windows::net::BitmapLoader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Texture2DLoader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_t2d_callback,"m_t2d_callback");
	HX_VISIT_MEMBER_NAME(m_apply,"m_apply");
	::haxor::platform::windows::net::BitmapLoader_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Texture2DLoader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"m_apply") ) { return m_apply; }
		if (HX_FIELD_EQ(inName,"OnError") ) { return OnError_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"m_t2d_callback") ) { return m_t2d_callback; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"OnBitmapCallback") ) { return OnBitmapCallback_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Texture2DLoader_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"m_apply") ) { m_apply=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"m_t2d_callback") ) { m_t2d_callback=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Texture2DLoader_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Texture2DLoader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("m_apply","\xdc","\x5c","\xc6","\xd4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Texture2DLoader_obj,m_t2d_callback),HX_HCSTRING("m_t2d_callback","\x50","\x15","\x1d","\xa0")},
	{hx::fsBool,(int)offsetof(Texture2DLoader_obj,m_apply),HX_HCSTRING("m_apply","\xdc","\x5c","\xc6","\xd4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("m_t2d_callback","\x50","\x15","\x1d","\xa0"),
	HX_HCSTRING("m_apply","\xdc","\x5c","\xc6","\xd4"),
	HX_HCSTRING("OnBitmapCallback","\x73","\x56","\x9d","\x70"),
	HX_HCSTRING("OnError","\x09","\x92","\xb8","\xd6"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Texture2DLoader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Texture2DLoader_obj::__mClass,"__mClass");
};

#endif

hx::Class Texture2DLoader_obj::__mClass;

void Texture2DLoader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.net.Texture2DLoader","\x03","\x2b","\xe4","\x68");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Texture2DLoader_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Texture2DLoader_obj >;
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
} // end namespace net
