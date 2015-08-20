#include <hxcpp.h>

#ifndef INCLUDED_haxor_graphics_material_ShaderCompilation
#include <haxor/graphics/material/ShaderCompilation.h>
#endif
#ifndef INCLUDED_haxor_graphics_material_ShaderError
#include <haxor/graphics/material/ShaderError.h>
#endif
namespace haxor{
namespace graphics{
namespace material{

Void ShaderCompilation_obj::__construct()
{
HX_STACK_FRAME("haxor.graphics.material.ShaderCompilation","new",0x7eb5b680,"haxor.graphics.material.ShaderCompilation.new","haxor/graphics/material/Shader.hx",167,0x97658f68)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(167)
	this->source = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(167)
	this->offset = (int)0;
	HX_STACK_LINE(167)
	Array< ::Dynamic > tmp = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(167)
	this->errors = tmp;
}
;
	return null();
}

//ShaderCompilation_obj::~ShaderCompilation_obj() { }

Dynamic ShaderCompilation_obj::__CreateEmpty() { return  new ShaderCompilation_obj; }
hx::ObjectPtr< ShaderCompilation_obj > ShaderCompilation_obj::__new()
{  hx::ObjectPtr< ShaderCompilation_obj > _result_ = new ShaderCompilation_obj();
	_result_->__construct();
	return _result_;}

Dynamic ShaderCompilation_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ShaderCompilation_obj > _result_ = new ShaderCompilation_obj();
	_result_->__construct();
	return _result_;}

bool ShaderCompilation_obj::get_success( ){
	HX_STACK_FRAME("haxor.graphics.material.ShaderCompilation","get_success",0xc82d8bfa,"haxor.graphics.material.ShaderCompilation.get_success","haxor/graphics/material/Shader.hx",166,0x97658f68)
	HX_STACK_THIS(this)
	HX_STACK_LINE(166)
	Array< ::Dynamic > tmp = this->errors;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(166)
	int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(166)
	bool tmp2 = (tmp1 <= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(166)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompilation_obj,get_success,return )

::String ShaderCompilation_obj::ErrorString( ){
	HX_STACK_FRAME("haxor.graphics.material.ShaderCompilation","ErrorString",0x6db50cb9,"haxor.graphics.material.ShaderCompilation.ErrorString","haxor/graphics/material/Shader.hx",170,0x97658f68)
	HX_STACK_THIS(this)
	HX_STACK_LINE(171)
	::String s = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(172)
	{
		HX_STACK_LINE(172)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(172)
		Array< ::Dynamic > tmp = this->errors;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(172)
		Array< ::Dynamic > _g1 = tmp;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(172)
		while((true)){
			HX_STACK_LINE(172)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(172)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(172)
			if ((tmp2)){
				HX_STACK_LINE(172)
				break;
			}
			HX_STACK_LINE(172)
			::haxor::graphics::material::ShaderError tmp3 = _g1->__get(_g).StaticCast< ::haxor::graphics::material::ShaderError >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(172)
			::haxor::graphics::material::ShaderError e = tmp3;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(172)
			++(_g);
			HX_STACK_LINE(172)
			::String tmp4 = (e->message + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(172)
			hx::AddEq(s,tmp4);
		}
	}
	HX_STACK_LINE(173)
	::String tmp = s;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(173)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompilation_obj,ErrorString,return )


ShaderCompilation_obj::ShaderCompilation_obj()
{
}

void ShaderCompilation_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShaderCompilation);
	HX_MARK_MEMBER_NAME(source,"source");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(errors,"errors");
	HX_MARK_END_CLASS();
}

void ShaderCompilation_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(source,"source");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(errors,"errors");
}

Dynamic ShaderCompilation_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"source") ) { return source; }
		if (HX_FIELD_EQ(inName,"offset") ) { return offset; }
		if (HX_FIELD_EQ(inName,"errors") ) { return errors; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"success") ) { if (inCallProp == hx::paccAlways) return get_success(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_success") ) { return get_success_dyn(); }
		if (HX_FIELD_EQ(inName,"ErrorString") ) { return ErrorString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ShaderCompilation_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"source") ) { source=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"errors") ) { errors=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ShaderCompilation_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ShaderCompilation_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"));
	outFields->push(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"));
	outFields->push(HX_HCSTRING("errors","\xab","\x83","\x68","\x51"));
	outFields->push(HX_HCSTRING("success","\xc3","\x25","\x4e","\xb8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(ShaderCompilation_obj,source),HX_HCSTRING("source","\xdb","\xb0","\x31","\x32")},
	{hx::fsInt,(int)offsetof(ShaderCompilation_obj,offset),HX_HCSTRING("offset","\x93","\x97","\x3f","\x60")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ShaderCompilation_obj,errors),HX_HCSTRING("errors","\xab","\x83","\x68","\x51")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"),
	HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"),
	HX_HCSTRING("errors","\xab","\x83","\x68","\x51"),
	HX_HCSTRING("get_success","\xda","\x85","\x48","\x3e"),
	HX_HCSTRING("ErrorString","\x99","\x06","\xd0","\xe3"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShaderCompilation_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShaderCompilation_obj::__mClass,"__mClass");
};

#endif

hx::Class ShaderCompilation_obj::__mClass;

void ShaderCompilation_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.graphics.material.ShaderCompilation","\x8e","\xb6","\x80","\xef");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ShaderCompilation_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ShaderCompilation_obj >;
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
