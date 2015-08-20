#include <hxcpp.h>

#ifndef INCLUDED_haxor_graphics_material_ShaderError
#include <haxor/graphics/material/ShaderError.h>
#endif
namespace haxor{
namespace graphics{
namespace material{

Void ShaderError_obj::__construct()
{
HX_STACK_FRAME("haxor.graphics.material.ShaderError","new",0x9526b7c5,"haxor.graphics.material.ShaderError.new","haxor/graphics/material/Shader.hx",154,0x97658f68)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(154)
	this->message = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(154)
	this->line = (int)0;
	HX_STACK_LINE(154)
	this->text = HX_HCSTRING("","\x00","\x00","\x00","\x00");
}
;
	return null();
}

//ShaderError_obj::~ShaderError_obj() { }

Dynamic ShaderError_obj::__CreateEmpty() { return  new ShaderError_obj; }
hx::ObjectPtr< ShaderError_obj > ShaderError_obj::__new()
{  hx::ObjectPtr< ShaderError_obj > _result_ = new ShaderError_obj();
	_result_->__construct();
	return _result_;}

Dynamic ShaderError_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ShaderError_obj > _result_ = new ShaderError_obj();
	_result_->__construct();
	return _result_;}


ShaderError_obj::ShaderError_obj()
{
}

void ShaderError_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShaderError);
	HX_MARK_MEMBER_NAME(message,"message");
	HX_MARK_MEMBER_NAME(line,"line");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_END_CLASS();
}

void ShaderError_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(message,"message");
	HX_VISIT_MEMBER_NAME(line,"line");
	HX_VISIT_MEMBER_NAME(text,"text");
}

Dynamic ShaderError_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"line") ) { return line; }
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { return message; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ShaderError_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"line") ) { line=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { message=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ShaderError_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ShaderError_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("message","\xc7","\x35","\x11","\x9a"));
	outFields->push(HX_HCSTRING("line","\xf4","\x17","\xb3","\x47"));
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(ShaderError_obj,message),HX_HCSTRING("message","\xc7","\x35","\x11","\x9a")},
	{hx::fsInt,(int)offsetof(ShaderError_obj,line),HX_HCSTRING("line","\xf4","\x17","\xb3","\x47")},
	{hx::fsString,(int)offsetof(ShaderError_obj,text),HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("message","\xc7","\x35","\x11","\x9a"),
	HX_HCSTRING("line","\xf4","\x17","\xb3","\x47"),
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShaderError_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShaderError_obj::__mClass,"__mClass");
};

#endif

hx::Class ShaderError_obj::__mClass;

void ShaderError_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.graphics.material.ShaderError","\x53","\x71","\x9c","\xe6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ShaderError_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ShaderError_obj >;
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
