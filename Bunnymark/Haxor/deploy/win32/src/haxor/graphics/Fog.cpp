#include <hxcpp.h>

#ifndef INCLUDED_haxor_graphics_Fog
#include <haxor/graphics/Fog.h>
#endif
#ifndef INCLUDED_haxor_math_Color
#include <haxor/math/Color.h>
#endif
namespace haxor{
namespace graphics{

Void Fog_obj::__construct()
{
	return null();
}

//Fog_obj::~Fog_obj() { }

Dynamic Fog_obj::__CreateEmpty() { return  new Fog_obj; }
hx::ObjectPtr< Fog_obj > Fog_obj::__new()
{  hx::ObjectPtr< Fog_obj > _result_ = new Fog_obj();
	_result_->__construct();
	return _result_;}

Dynamic Fog_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Fog_obj > _result_ = new Fog_obj();
	_result_->__construct();
	return _result_;}

::haxor::math::Color Fog_obj::color;

Float Fog_obj::density;

Float Fog_obj::exp;

Float Fog_obj::start;

Float Fog_obj::end;


Fog_obj::Fog_obj()
{
}

bool Fog_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"exp") ) { outValue = exp; return true;  }
		if (HX_FIELD_EQ(inName,"end") ) { outValue = end; return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { outValue = color; return true;  }
		if (HX_FIELD_EQ(inName,"start") ) { outValue = start; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"density") ) { outValue = density; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxor::math::Color*/ ,(void *) &Fog_obj::color,HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsFloat,(void *) &Fog_obj::density,HX_HCSTRING("density","\xe8","\x3f","\xd5","\x42")},
	{hx::fsFloat,(void *) &Fog_obj::exp,HX_HCSTRING("exp","\x9d","\x0c","\x4d","\x00")},
	{hx::fsFloat,(void *) &Fog_obj::start,HX_HCSTRING("start","\x62","\x74","\x0b","\x84")},
	{hx::fsFloat,(void *) &Fog_obj::end,HX_HCSTRING("end","\xdb","\x03","\x4d","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Fog_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Fog_obj::color,"color");
	HX_MARK_MEMBER_NAME(Fog_obj::density,"density");
	HX_MARK_MEMBER_NAME(Fog_obj::exp,"exp");
	HX_MARK_MEMBER_NAME(Fog_obj::start,"start");
	HX_MARK_MEMBER_NAME(Fog_obj::end,"end");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Fog_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Fog_obj::color,"color");
	HX_VISIT_MEMBER_NAME(Fog_obj::density,"density");
	HX_VISIT_MEMBER_NAME(Fog_obj::exp,"exp");
	HX_VISIT_MEMBER_NAME(Fog_obj::start,"start");
	HX_VISIT_MEMBER_NAME(Fog_obj::end,"end");
};

#endif

hx::Class Fog_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("density","\xe8","\x3f","\xd5","\x42"),
	HX_HCSTRING("exp","\x9d","\x0c","\x4d","\x00"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"),
	String(null()) };

void Fog_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.graphics.Fog","\x67","\xdf","\x27","\x7b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Fog_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Fog_obj >;
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

void Fog_obj::__boot()
{
	color= ::haxor::math::Color_obj::__new(((Float)0.5),((Float)0.5),((Float)0.5),(int)1);
	density= ((Float)1.0);
	exp= ((Float)1.0);
	start= ((Float)0.0);
	end= ((Float)1.0);
}

} // end namespace haxor
} // end namespace graphics
