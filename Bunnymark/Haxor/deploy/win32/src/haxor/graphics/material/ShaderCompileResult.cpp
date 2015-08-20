#include <hxcpp.h>

#ifndef INCLUDED_haxor_graphics_material_ShaderCompilation
#include <haxor/graphics/material/ShaderCompilation.h>
#endif
#ifndef INCLUDED_haxor_graphics_material_ShaderCompileResult
#include <haxor/graphics/material/ShaderCompileResult.h>
#endif
namespace haxor{
namespace graphics{
namespace material{

Void ShaderCompileResult_obj::__construct()
{
HX_STACK_FRAME("haxor.graphics.material.ShaderCompileResult","new",0x30471dad,"haxor.graphics.material.ShaderCompileResult.new","haxor/graphics/material/Shader.hx",187,0x97658f68)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(187)
	::haxor::graphics::material::ShaderCompilation tmp = ::haxor::graphics::material::ShaderCompilation_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(187)
	this->vertex = tmp;
	HX_STACK_LINE(187)
	::haxor::graphics::material::ShaderCompilation tmp1 = ::haxor::graphics::material::ShaderCompilation_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(187)
	this->fragment = tmp1;
}
;
	return null();
}

//ShaderCompileResult_obj::~ShaderCompileResult_obj() { }

Dynamic ShaderCompileResult_obj::__CreateEmpty() { return  new ShaderCompileResult_obj; }
hx::ObjectPtr< ShaderCompileResult_obj > ShaderCompileResult_obj::__new()
{  hx::ObjectPtr< ShaderCompileResult_obj > _result_ = new ShaderCompileResult_obj();
	_result_->__construct();
	return _result_;}

Dynamic ShaderCompileResult_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ShaderCompileResult_obj > _result_ = new ShaderCompileResult_obj();
	_result_->__construct();
	return _result_;}

bool ShaderCompileResult_obj::get_success( ){
	HX_STACK_FRAME("haxor.graphics.material.ShaderCompileResult","get_success",0x286d6827,"haxor.graphics.material.ShaderCompileResult.get_success","haxor/graphics/material/Shader.hx",186,0x97658f68)
	HX_STACK_THIS(this)
	HX_STACK_LINE(186)
	::haxor::graphics::material::ShaderCompilation tmp = this->vertex;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(186)
	bool tmp1 = tmp->get_success();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(186)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(186)
	if ((tmp1)){
		HX_STACK_LINE(186)
		::haxor::graphics::material::ShaderCompilation tmp3 = this->fragment;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(186)
		::haxor::graphics::material::ShaderCompilation tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(186)
		tmp2 = tmp4->get_success();
	}
	else{
		HX_STACK_LINE(186)
		tmp2 = false;
	}
	HX_STACK_LINE(186)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompileResult_obj,get_success,return )

::String ShaderCompileResult_obj::ErrorString( ){
	HX_STACK_FRAME("haxor.graphics.material.ShaderCompileResult","ErrorString",0xcdf4e8e6,"haxor.graphics.material.ShaderCompileResult.ErrorString","haxor/graphics/material/Shader.hx",189,0x97658f68)
	HX_STACK_THIS(this)
	HX_STACK_LINE(190)
	::String s = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(191)
	::String e;		HX_STACK_VAR(e,"e");
	HX_STACK_LINE(192)
	::haxor::graphics::material::ShaderCompilation tmp = this->vertex;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(192)
	::String tmp1 = tmp->ErrorString();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(192)
	e = tmp1;
	HX_STACK_LINE(192)
	bool tmp2 = (e != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(192)
	if ((tmp2)){
		HX_STACK_LINE(192)
		::String tmp3 = (HX_HCSTRING("=== [vertex shader] ===\n","\xf9","\x9a","\xbd","\x60") + e);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(192)
		hx::AddEq(s,tmp3);
	}
	HX_STACK_LINE(193)
	::haxor::graphics::material::ShaderCompilation tmp3 = this->fragment;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(193)
	::String tmp4 = tmp3->ErrorString();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(193)
	e = tmp4;
	HX_STACK_LINE(193)
	bool tmp5 = (e != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(193)
	if ((tmp5)){
		HX_STACK_LINE(193)
		::String tmp6 = (HX_HCSTRING("=== [fragment shader] ===\n","\x0d","\xbd","\x42","\x38") + e);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(193)
		hx::AddEq(s,tmp6);
	}
	HX_STACK_LINE(194)
	::String tmp6 = s;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(194)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompileResult_obj,ErrorString,return )


ShaderCompileResult_obj::ShaderCompileResult_obj()
{
}

void ShaderCompileResult_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShaderCompileResult);
	HX_MARK_MEMBER_NAME(vertex,"vertex");
	HX_MARK_MEMBER_NAME(fragment,"fragment");
	HX_MARK_END_CLASS();
}

void ShaderCompileResult_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(vertex,"vertex");
	HX_VISIT_MEMBER_NAME(fragment,"fragment");
}

Dynamic ShaderCompileResult_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"vertex") ) { return vertex; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"success") ) { if (inCallProp == hx::paccAlways) return get_success(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fragment") ) { return fragment; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_success") ) { return get_success_dyn(); }
		if (HX_FIELD_EQ(inName,"ErrorString") ) { return ErrorString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ShaderCompileResult_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"vertex") ) { vertex=inValue.Cast< ::haxor::graphics::material::ShaderCompilation >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fragment") ) { fragment=inValue.Cast< ::haxor::graphics::material::ShaderCompilation >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ShaderCompileResult_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ShaderCompileResult_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1"));
	outFields->push(HX_HCSTRING("fragment","\xd0","\x5f","\xe5","\xad"));
	outFields->push(HX_HCSTRING("success","\xc3","\x25","\x4e","\xb8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::graphics::material::ShaderCompilation*/ ,(int)offsetof(ShaderCompileResult_obj,vertex),HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1")},
	{hx::fsObject /*::haxor::graphics::material::ShaderCompilation*/ ,(int)offsetof(ShaderCompileResult_obj,fragment),HX_HCSTRING("fragment","\xd0","\x5f","\xe5","\xad")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1"),
	HX_HCSTRING("fragment","\xd0","\x5f","\xe5","\xad"),
	HX_HCSTRING("get_success","\xda","\x85","\x48","\x3e"),
	HX_HCSTRING("ErrorString","\x99","\x06","\xd0","\xe3"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShaderCompileResult_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShaderCompileResult_obj::__mClass,"__mClass");
};

#endif

hx::Class ShaderCompileResult_obj::__mClass;

void ShaderCompileResult_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.graphics.material.ShaderCompileResult","\x3b","\xc3","\x49","\x1d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ShaderCompileResult_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ShaderCompileResult_obj >;
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
