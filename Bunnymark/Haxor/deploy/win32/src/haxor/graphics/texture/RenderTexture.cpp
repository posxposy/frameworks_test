#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxor_context_EngineContext
#include <haxor/context/EngineContext.h>
#endif
#ifndef INCLUDED_haxor_context_TextureContext
#include <haxor/context/TextureContext.h>
#endif
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_PixelFormat
#include <haxor/core/PixelFormat.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_core_TextureType
#include <haxor/core/TextureType.h>
#endif
#ifndef INCLUDED_haxor_graphics_GL
#include <haxor/graphics/GL.h>
#endif
#ifndef INCLUDED_haxor_graphics_texture_RenderTexture
#include <haxor/graphics/texture/RenderTexture.h>
#endif
#ifndef INCLUDED_haxor_graphics_texture_Texture
#include <haxor/graphics/texture/Texture.h>
#endif
#ifndef INCLUDED_haxor_graphics_texture_Texture2D
#include <haxor/graphics/texture/Texture2D.h>
#endif
namespace haxor{
namespace graphics{
namespace texture{

Void RenderTexture_obj::__construct(int p_width,int p_height,int p_format,hx::Null< bool >  __o_p_store_depth)
{
HX_STACK_FRAME("haxor.graphics.texture.RenderTexture","new",0x4870ea6d,"haxor.graphics.texture.RenderTexture.new","haxor/graphics/texture/RenderTexture.hx",36,0x81f3eb84)
HX_STACK_THIS(this)
HX_STACK_ARG(p_width,"p_width")
HX_STACK_ARG(p_height,"p_height")
HX_STACK_ARG(p_format,"p_format")
HX_STACK_ARG(__o_p_store_depth,"p_store_depth")
bool p_store_depth = __o_p_store_depth.Default(false);
{
	HX_STACK_LINE(37)
	super::__construct();
	HX_STACK_LINE(38)
	this->m_format = p_format;
	HX_STACK_LINE(39)
	int tmp = p_width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(39)
	this->m_width = tmp1;
	HX_STACK_LINE(40)
	int tmp2 = p_height;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(40)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(40)
	this->m_height = tmp3;
	HX_STACK_LINE(42)
	bool tmp4 = p_store_depth;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(42)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(42)
	if ((tmp4)){
		HX_STACK_LINE(42)
		tmp5 = ::haxor::graphics::GL_obj::TEXTURE_DEPTH_ENABLED;
	}
	else{
		HX_STACK_LINE(42)
		tmp5 = false;
	}
	HX_STACK_LINE(42)
	bool store_depth = tmp5;		HX_STACK_VAR(store_depth,"store_depth");
	HX_STACK_LINE(44)
	bool tmp6 = store_depth;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(44)
	if ((tmp6)){
		HX_STACK_LINE(46)
		int tmp7 = this->m_width;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(46)
		int tmp8 = this->m_height;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(46)
		int tmp9 = ::haxor::core::PixelFormat_obj::Depth;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(46)
		::haxor::graphics::texture::Texture2D tmp10 = ::haxor::graphics::texture::Texture2D_obj::__new(tmp7,tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(46)
		this->m_depth = tmp10;
	}
	HX_STACK_LINE(49)
	::haxor::context::TextureContext tmp7 = ::haxor::context::EngineContext_obj::texture;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(49)
	tmp7->Create(hx::ObjectPtr<OBJ_>(this));
}
;
	return null();
}

//RenderTexture_obj::~RenderTexture_obj() { }

Dynamic RenderTexture_obj::__CreateEmpty() { return  new RenderTexture_obj; }
hx::ObjectPtr< RenderTexture_obj > RenderTexture_obj::__new(int p_width,int p_height,int p_format,hx::Null< bool >  __o_p_store_depth)
{  hx::ObjectPtr< RenderTexture_obj > _result_ = new RenderTexture_obj();
	_result_->__construct(p_width,p_height,p_format,__o_p_store_depth);
	return _result_;}

Dynamic RenderTexture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RenderTexture_obj > _result_ = new RenderTexture_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::haxor::graphics::texture::Texture2D RenderTexture_obj::get_depth( ){
	HX_STACK_FRAME("haxor.graphics.texture.RenderTexture","get_depth",0x2156ef27,"haxor.graphics.texture.RenderTexture.get_depth","haxor/graphics/texture/RenderTexture.hx",18,0x81f3eb84)
	HX_STACK_THIS(this)
	HX_STACK_LINE(18)
	::haxor::graphics::texture::Texture2D tmp = this->m_depth;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(RenderTexture_obj,get_depth,return )

::haxor::core::TextureType RenderTexture_obj::get_type( ){
	HX_STACK_FRAME("haxor.graphics.texture.RenderTexture","get_type",0x758c0516,"haxor.graphics.texture.RenderTexture.get_type","haxor/graphics/texture/RenderTexture.hx",25,0x81f3eb84)
	HX_STACK_THIS(this)
	HX_STACK_LINE(25)
	return ::haxor::core::TextureType_obj::RenderTexture;
}



RenderTexture_obj::RenderTexture_obj()
{
}

void RenderTexture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RenderTexture);
	HX_MARK_MEMBER_NAME(m_depth,"m_depth");
	::haxor::graphics::texture::Texture_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RenderTexture_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_depth,"m_depth");
	::haxor::graphics::texture::Texture_obj::__Visit(HX_VISIT_ARG);
}

Dynamic RenderTexture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"depth") ) { if (inCallProp == hx::paccAlways) return get_depth(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_depth") ) { return m_depth; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_type") ) { return get_type_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_depth") ) { return get_depth_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RenderTexture_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"m_depth") ) { m_depth=inValue.Cast< ::haxor::graphics::texture::Texture2D >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool RenderTexture_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void RenderTexture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"));
	outFields->push(HX_HCSTRING("m_depth","\x71","\xc8","\xb4","\x87"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::graphics::texture::Texture2D*/ ,(int)offsetof(RenderTexture_obj,m_depth),HX_HCSTRING("m_depth","\x71","\xc8","\xb4","\x87")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get_depth","\x5a","\x4d","\xd3","\x1a"),
	HX_HCSTRING("m_depth","\x71","\xc8","\xb4","\x87"),
	HX_HCSTRING("get_type","\x43","\xae","\xc3","\xcc"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RenderTexture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RenderTexture_obj::__mClass,"__mClass");
};

#endif

hx::Class RenderTexture_obj::__mClass;

void RenderTexture_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.graphics.texture.RenderTexture","\xfb","\x2f","\xde","\x87");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &RenderTexture_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RenderTexture_obj >;
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
} // end namespace texture
