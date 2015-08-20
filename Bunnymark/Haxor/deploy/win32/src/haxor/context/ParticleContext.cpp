#include <hxcpp.h>

#ifndef INCLUDED_haxor_context_ParticleContext
#include <haxor/context/ParticleContext.h>
#endif
namespace haxor{
namespace context{

Void ParticleContext_obj::__construct()
{
HX_STACK_FRAME("haxor.context.ParticleContext","new",0xe608ad70,"haxor.context.ParticleContext.new","haxor/context/ParticleContext.hx",37,0x442ba182)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//ParticleContext_obj::~ParticleContext_obj() { }

Dynamic ParticleContext_obj::__CreateEmpty() { return  new ParticleContext_obj; }
hx::ObjectPtr< ParticleContext_obj > ParticleContext_obj::__new()
{  hx::ObjectPtr< ParticleContext_obj > _result_ = new ParticleContext_obj();
	_result_->__construct();
	return _result_;}

Dynamic ParticleContext_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ParticleContext_obj > _result_ = new ParticleContext_obj();
	_result_->__construct();
	return _result_;}

Void ParticleContext_obj::Initialize( ){
{
		HX_STACK_FRAME("haxor.context.ParticleContext","Initialize",0xfbe41a60,"haxor.context.ParticleContext.Initialize","haxor/context/ParticleContext.hx",45,0x442ba182)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleContext_obj,Initialize,(void))


ParticleContext_obj::ParticleContext_obj()
{
}

Dynamic ParticleContext_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"Initialize") ) { return Initialize_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("Initialize","\x70","\x35","\x6c","\xe3"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ParticleContext_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ParticleContext_obj::__mClass,"__mClass");
};

#endif

hx::Class ParticleContext_obj::__mClass;

void ParticleContext_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.context.ParticleContext","\x7e","\x75","\x71","\xcc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ParticleContext_obj >;
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
} // end namespace context
