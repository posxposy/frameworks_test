#include <hxcpp.h>

#ifndef INCLUDED_haxor_component_animation_AnimationEvent
#include <haxor/component/animation/AnimationEvent.h>
#endif
namespace haxor{
namespace component{
namespace animation{

Void AnimationEvent_obj::__construct(int p_frame,Dynamic p_listener,hx::Null< int >  __o_p_repeat,Dynamic p_args)
{
HX_STACK_FRAME("haxor.component.animation.AnimationEvent","new",0x979d12af,"haxor.component.animation.AnimationEvent.new","haxor/component/animation/AnimationEvent.hx",38,0x40761a7e)
HX_STACK_THIS(this)
HX_STACK_ARG(p_frame,"p_frame")
HX_STACK_ARG(p_listener,"p_listener")
HX_STACK_ARG(__o_p_repeat,"p_repeat")
HX_STACK_ARG(p_args,"p_args")
int p_repeat = __o_p_repeat.Default(0);
{
	HX_STACK_LINE(39)
	this->frame = p_frame;
	HX_STACK_LINE(40)
	this->listener = p_listener;
	HX_STACK_LINE(41)
	bool tmp = (p_args == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(41)
	if ((tmp)){
		HX_STACK_LINE(41)
		tmp1 = Dynamic( Array_obj<Dynamic>::__new());
	}
	else{
		HX_STACK_LINE(41)
		tmp1 = p_args;
	}
	HX_STACK_LINE(41)
	this->args = tmp1;
	HX_STACK_LINE(42)
	this->repeat = p_repeat;
}
;
	return null();
}

//AnimationEvent_obj::~AnimationEvent_obj() { }

Dynamic AnimationEvent_obj::__CreateEmpty() { return  new AnimationEvent_obj; }
hx::ObjectPtr< AnimationEvent_obj > AnimationEvent_obj::__new(int p_frame,Dynamic p_listener,hx::Null< int >  __o_p_repeat,Dynamic p_args)
{  hx::ObjectPtr< AnimationEvent_obj > _result_ = new AnimationEvent_obj();
	_result_->__construct(p_frame,p_listener,__o_p_repeat,p_args);
	return _result_;}

Dynamic AnimationEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AnimationEvent_obj > _result_ = new AnimationEvent_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

bool AnimationEvent_obj::Dispatch( ){
	HX_STACK_FRAME("haxor.component.animation.AnimationEvent","Dispatch",0x7c2e8a2b,"haxor.component.animation.AnimationEvent.Dispatch","haxor/component/animation/AnimationEvent.hx",50,0x40761a7e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(51)
	Dynamic tmp = this->listener_dyn();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(51)
	if ((tmp1)){
		HX_STACK_LINE(53)
		this->listener(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(54)
		int tmp2 = this->repeat;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(54)
		bool tmp3 = (tmp2 <= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(54)
		if ((tmp3)){
			HX_STACK_LINE(54)
			return true;
		}
		HX_STACK_LINE(55)
		(this->repeat)--;
		HX_STACK_LINE(56)
		int tmp4 = this->repeat;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(56)
		bool tmp5 = (tmp4 <= (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(56)
		if ((tmp5)){
			HX_STACK_LINE(56)
			return false;
		}
		HX_STACK_LINE(57)
		return true;
	}
	HX_STACK_LINE(59)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationEvent_obj,Dispatch,return )


AnimationEvent_obj::AnimationEvent_obj()
{
}

void AnimationEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnimationEvent);
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_MEMBER_NAME(args,"args");
	HX_MARK_MEMBER_NAME(listener,"listener");
	HX_MARK_MEMBER_NAME(repeat,"repeat");
	HX_MARK_END_CLASS();
}

void AnimationEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frame,"frame");
	HX_VISIT_MEMBER_NAME(args,"args");
	HX_VISIT_MEMBER_NAME(listener,"listener");
	HX_VISIT_MEMBER_NAME(repeat,"repeat");
}

Dynamic AnimationEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"args") ) { return args; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { return frame; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"repeat") ) { return repeat; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"listener") ) { return listener; }
		if (HX_FIELD_EQ(inName,"Dispatch") ) { return Dispatch_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AnimationEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"args") ) { args=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { frame=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"repeat") ) { repeat=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"listener") ) { listener=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool AnimationEvent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void AnimationEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"));
	outFields->push(HX_HCSTRING("args","\x5d","\x8d","\x74","\x40"));
	outFields->push(HX_HCSTRING("repeat","\x5b","\x97","\x7c","\x06"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(AnimationEvent_obj,frame),HX_HCSTRING("frame","\x2d","\x78","\x83","\x06")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AnimationEvent_obj,args),HX_HCSTRING("args","\x5d","\x8d","\x74","\x40")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AnimationEvent_obj,listener),HX_HCSTRING("listener","\x74","\x00","\x32","\x38")},
	{hx::fsInt,(int)offsetof(AnimationEvent_obj,repeat),HX_HCSTRING("repeat","\x5b","\x97","\x7c","\x06")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"),
	HX_HCSTRING("args","\x5d","\x8d","\x74","\x40"),
	HX_HCSTRING("listener","\x74","\x00","\x32","\x38"),
	HX_HCSTRING("repeat","\x5b","\x97","\x7c","\x06"),
	HX_HCSTRING("Dispatch","\xda","\x8a","\x15","\xf8"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AnimationEvent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AnimationEvent_obj::__mClass,"__mClass");
};

#endif

hx::Class AnimationEvent_obj::__mClass;

void AnimationEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.component.animation.AnimationEvent","\x3d","\x8f","\x7c","\x1e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &AnimationEvent_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AnimationEvent_obj >;
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
