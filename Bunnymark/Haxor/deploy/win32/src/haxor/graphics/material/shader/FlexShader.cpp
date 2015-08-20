#include <hxcpp.h>

#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_graphics_material_Shader
#include <haxor/graphics/material/Shader.h>
#endif
#ifndef INCLUDED_haxor_graphics_material_shader_FlexShader
#include <haxor/graphics/material/shader/FlexShader.h>
#endif
namespace haxor{
namespace graphics{
namespace material{
namespace shader{

Void FlexShader_obj::__construct(::String __o_p_vs,::String __o_p_fs)
{
HX_STACK_FRAME("haxor.graphics.material.shader.FlexShader","new",0xfe7d3d89,"haxor.graphics.material.shader.FlexShader.new","haxor/graphics/material/shader/FlexShader.hx",10,0xaf279c07)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_p_vs,"p_vs")
HX_STACK_ARG(__o_p_fs,"p_fs")
::String p_vs = __o_p_vs.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
::String p_fs = __o_p_fs.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(10)
	::String tmp = p_vs;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10)
	::String tmp1 = p_fs;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(10)
	super::__construct(tmp,tmp1);
}
;
	return null();
}

//FlexShader_obj::~FlexShader_obj() { }

Dynamic FlexShader_obj::__CreateEmpty() { return  new FlexShader_obj; }
hx::ObjectPtr< FlexShader_obj > FlexShader_obj::__new(::String __o_p_vs,::String __o_p_fs)
{  hx::ObjectPtr< FlexShader_obj > _result_ = new FlexShader_obj();
	_result_->__construct(__o_p_vs,__o_p_fs);
	return _result_;}

Dynamic FlexShader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlexShader_obj > _result_ = new FlexShader_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}


FlexShader_obj::FlexShader_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlexShader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlexShader_obj::__mClass,"__mClass");
};

#endif

hx::Class FlexShader_obj::__mClass;

void FlexShader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.graphics.material.shader.FlexShader","\x17","\xc5","\xc3","\x13");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlexShader_obj >;
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
} // end namespace material
} // end namespace shader
