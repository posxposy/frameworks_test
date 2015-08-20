#include <hxcpp.h>

#ifndef INCLUDED_haxor_context_EngineContext
#include <haxor/context/EngineContext.h>
#endif
#ifndef INCLUDED_haxor_context_RendererContext
#include <haxor/context/RendererContext.h>
#endif
#ifndef INCLUDED_haxor_context_UID
#include <haxor/context/UID.h>
#endif
#ifndef INCLUDED_haxor_core_RenderStats
#include <haxor/core/RenderStats.h>
#endif
namespace haxor{
namespace core{

Void RenderStats_obj::__construct()
{
	return null();
}

//RenderStats_obj::~RenderStats_obj() { }

Dynamic RenderStats_obj::__CreateEmpty() { return  new RenderStats_obj; }
hx::ObjectPtr< RenderStats_obj > RenderStats_obj::__new()
{  hx::ObjectPtr< RenderStats_obj > _result_ = new RenderStats_obj();
	_result_->__construct();
	return _result_;}

Dynamic RenderStats_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RenderStats_obj > _result_ = new RenderStats_obj();
	_result_->__construct();
	return _result_;}

int RenderStats_obj::visible;

int RenderStats_obj::culled;

int RenderStats_obj::triangles;

int RenderStats_obj::total;

int RenderStats_obj::get_total( ){
	HX_STACK_FRAME("haxor.core.RenderStats","get_total",0xfaa86e93,"haxor.core.RenderStats.get_total","haxor/core/RenderStats.hx",30,0x4388c1f8)
	HX_STACK_LINE(30)
	int tmp = ::haxor::core::RenderStats_obj::visible;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	int tmp1 = ::haxor::core::RenderStats_obj::culled;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(30)
	int tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(30)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(RenderStats_obj,get_total,return )

int RenderStats_obj::renderers;

Void RenderStats_obj::Initialize( ){
{
		HX_STACK_FRAME("haxor.core.RenderStats","Initialize",0xb3c61ff8,"haxor.core.RenderStats.Initialize","haxor/core/RenderStats.hx",38,0x4388c1f8)
		HX_STACK_LINE(39)
		::haxor::core::RenderStats_obj::visible = (int)0;
		HX_STACK_LINE(40)
		::haxor::core::RenderStats_obj::culled = (int)0;
		HX_STACK_LINE(41)
		::haxor::core::RenderStats_obj::triangles = (int)0;
		HX_STACK_LINE(42)
		::haxor::core::RenderStats_obj::renderers = (int)0;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(RenderStats_obj,Initialize,(void))

Void RenderStats_obj::BeginRender( ){
{
		HX_STACK_FRAME("haxor.core.RenderStats","BeginRender",0x01d532b7,"haxor.core.RenderStats.BeginRender","haxor/core/RenderStats.hx",46,0x4388c1f8)
		HX_STACK_LINE(47)
		::haxor::core::RenderStats_obj::visible = (int)0;
		HX_STACK_LINE(48)
		::haxor::core::RenderStats_obj::culled = (int)0;
		HX_STACK_LINE(49)
		::haxor::core::RenderStats_obj::triangles = (int)0;
		HX_STACK_LINE(50)
		::haxor::context::RendererContext tmp = ::haxor::context::EngineContext_obj::renderer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(50)
		int tmp1 = tmp->rid->get_next();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(50)
		::haxor::core::RenderStats_obj::renderers = tmp1;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(RenderStats_obj,BeginRender,(void))


RenderStats_obj::RenderStats_obj()
{
}

bool RenderStats_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"total") ) { outValue = inCallProp == hx::paccAlways ? get_total() : total; return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"culled") ) { outValue = culled; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { outValue = visible; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"triangles") ) { outValue = triangles; return true;  }
		if (HX_FIELD_EQ(inName,"get_total") ) { outValue = get_total_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"renderers") ) { outValue = renderers; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"Initialize") ) { outValue = Initialize_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"BeginRender") ) { outValue = BeginRender_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &RenderStats_obj::visible,HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{hx::fsInt,(void *) &RenderStats_obj::culled,HX_HCSTRING("culled","\x91","\xee","\xeb","\x3a")},
	{hx::fsInt,(void *) &RenderStats_obj::triangles,HX_HCSTRING("triangles","\xab","\x30","\x41","\x7f")},
	{hx::fsInt,(void *) &RenderStats_obj::total,HX_HCSTRING("total","\xc4","\x53","\x32","\x14")},
	{hx::fsInt,(void *) &RenderStats_obj::renderers,HX_HCSTRING("renderers","\xd0","\xd5","\x70","\xcd")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RenderStats_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(RenderStats_obj::visible,"visible");
	HX_MARK_MEMBER_NAME(RenderStats_obj::culled,"culled");
	HX_MARK_MEMBER_NAME(RenderStats_obj::triangles,"triangles");
	HX_MARK_MEMBER_NAME(RenderStats_obj::total,"total");
	HX_MARK_MEMBER_NAME(RenderStats_obj::renderers,"renderers");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RenderStats_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(RenderStats_obj::visible,"visible");
	HX_VISIT_MEMBER_NAME(RenderStats_obj::culled,"culled");
	HX_VISIT_MEMBER_NAME(RenderStats_obj::triangles,"triangles");
	HX_VISIT_MEMBER_NAME(RenderStats_obj::total,"total");
	HX_VISIT_MEMBER_NAME(RenderStats_obj::renderers,"renderers");
};

#endif

hx::Class RenderStats_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("culled","\x91","\xee","\xeb","\x3a"),
	HX_HCSTRING("triangles","\xab","\x30","\x41","\x7f"),
	HX_HCSTRING("total","\xc4","\x53","\x32","\x14"),
	HX_HCSTRING("get_total","\x1b","\xb0","\xdb","\x57"),
	HX_HCSTRING("renderers","\xd0","\xd5","\x70","\xcd"),
	HX_HCSTRING("Initialize","\x70","\x35","\x6c","\xe3"),
	HX_HCSTRING("BeginRender","\x3f","\xe6","\x81","\x83"),
	String(null()) };

void RenderStats_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.core.RenderStats","\xe6","\xd8","\x18","\x55");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &RenderStats_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< RenderStats_obj >;
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
} // end namespace core
