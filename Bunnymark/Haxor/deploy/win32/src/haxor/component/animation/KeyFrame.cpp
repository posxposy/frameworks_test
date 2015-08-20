#include <hxcpp.h>

#ifndef INCLUDED_haxor_component_animation_KeyFrame
#include <haxor/component/animation/KeyFrame.h>
#endif
namespace haxor{
namespace component{
namespace animation{

Void KeyFrame_obj::__construct()
{
HX_STACK_FRAME("haxor.component.animation.KeyFrame","new",0xf7c78307,"haxor.component.animation.KeyFrame.new","haxor/component/animation/KeyFrame.hx",25,0xae9e4966)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(25)
	this->time = (int)0;
	HX_STACK_LINE(25)
	this->changed = false;
}
;
	return null();
}

//KeyFrame_obj::~KeyFrame_obj() { }

Dynamic KeyFrame_obj::__CreateEmpty() { return  new KeyFrame_obj; }
hx::ObjectPtr< KeyFrame_obj > KeyFrame_obj::__new()
{  hx::ObjectPtr< KeyFrame_obj > _result_ = new KeyFrame_obj();
	_result_->__construct();
	return _result_;}

Dynamic KeyFrame_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< KeyFrame_obj > _result_ = new KeyFrame_obj();
	_result_->__construct();
	return _result_;}

::haxor::component::animation::KeyFrame KeyFrame_obj::Blend( ::haxor::component::animation::KeyFrame b,Float r){
	HX_STACK_FRAME("haxor.component.animation.KeyFrame","Blend",0xc9e54298,"haxor.component.animation.KeyFrame.Blend","haxor/component/animation/KeyFrame.hx",33,0xae9e4966)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(r,"r")
	HX_STACK_LINE(33)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(KeyFrame_obj,Blend,return )

Dynamic KeyFrame_obj::Sample( Dynamic v,hx::Null< Float >  __o_w){
Float w = __o_w.Default(((Float)1.0));
	HX_STACK_FRAME("haxor.component.animation.KeyFrame","Sample",0x5aa90403,"haxor.component.animation.KeyFrame.Sample","haxor/component/animation/KeyFrame.hx",41,0xae9e4966)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_ARG(w,"w")
{
		HX_STACK_LINE(41)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC2(KeyFrame_obj,Sample,return )


KeyFrame_obj::KeyFrame_obj()
{
}

Dynamic KeyFrame_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { return time; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"Blend") ) { return Blend_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"Sample") ) { return Sample_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"changed") ) { return changed; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic KeyFrame_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"changed") ) { changed=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool KeyFrame_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void KeyFrame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"));
	outFields->push(HX_HCSTRING("changed","\xf4","\xb0","\xcc","\xcc"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(KeyFrame_obj,time),HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c")},
	{hx::fsBool,(int)offsetof(KeyFrame_obj,changed),HX_HCSTRING("changed","\xf4","\xb0","\xcc","\xcc")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"),
	HX_HCSTRING("changed","\xf4","\xb0","\xcc","\xcc"),
	HX_HCSTRING("Blend","\x31","\x58","\x22","\x48"),
	HX_HCSTRING("Sample","\x4a","\xd4","\xde","\x51"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(KeyFrame_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(KeyFrame_obj::__mClass,"__mClass");
};

#endif

hx::Class KeyFrame_obj::__mClass;

void KeyFrame_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.component.animation.KeyFrame","\x95","\xf3","\xe1","\x2a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &KeyFrame_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< KeyFrame_obj >;
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
} // end namespace component
} // end namespace animation
