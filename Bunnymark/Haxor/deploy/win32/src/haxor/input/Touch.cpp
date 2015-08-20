#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxor_core_InputState
#include <haxor/core/InputState.h>
#endif
#ifndef INCLUDED_haxor_input_Touch
#include <haxor/input/Touch.h>
#endif
#ifndef INCLUDED_haxor_math_Vector2
#include <haxor/math/Vector2.h>
#endif
namespace haxor{
namespace input{

Void Touch_obj::__construct()
{
HX_STACK_FRAME("haxor.input.Touch","new",0x4c236081,"haxor.input.Touch.new","haxor/input/Touch.hx",82,0x27faf2d1)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(83)
	this->state = ::haxor::core::InputState_obj::None;
	HX_STACK_LINE(84)
	this->id = (int)-1;
	HX_STACK_LINE(85)
	::haxor::math::Vector2 tmp = ::haxor::math::Vector2_obj::__new(null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(85)
	this->position = tmp;
	HX_STACK_LINE(86)
	::haxor::math::Vector2 tmp1 = ::haxor::math::Vector2_obj::__new(null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(86)
	this->delta = tmp1;
	HX_STACK_LINE(87)
	::haxor::math::Vector2 tmp2 = ::haxor::math::Vector2_obj::__new(null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(87)
	this->relativePosition = tmp2;
	HX_STACK_LINE(88)
	this->pressure = (int)0;
	HX_STACK_LINE(89)
	this->hold = (int)0;
	HX_STACK_LINE(90)
	this->angle = (int)0;
	HX_STACK_LINE(91)
	::haxor::math::Vector2 tmp3 = ::haxor::math::Vector2_obj::__new(null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(91)
	this->radius = tmp3;
	HX_STACK_LINE(92)
	this->m_down = false;
}
;
	return null();
}

//Touch_obj::~Touch_obj() { }

Dynamic Touch_obj::__CreateEmpty() { return  new Touch_obj; }
hx::ObjectPtr< Touch_obj > Touch_obj::__new()
{  hx::ObjectPtr< Touch_obj > _result_ = new Touch_obj();
	_result_->__construct();
	return _result_;}

Dynamic Touch_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Touch_obj > _result_ = new Touch_obj();
	_result_->__construct();
	return _result_;}

bool Touch_obj::get_down( ){
	HX_STACK_FRAME("haxor.input.Touch","get_down",0xddb60c2a,"haxor.input.Touch.get_down","haxor/input/Touch.hx",22,0x27faf2d1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(22)
	::haxor::core::InputState tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	bool tmp1 = (tmp == ::haxor::core::InputState_obj::Down);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Touch_obj,get_down,return )

bool Touch_obj::get_pressed( ){
	HX_STACK_FRAME("haxor.input.Touch","get_pressed",0xeedf4bda,"haxor.input.Touch.get_pressed","haxor/input/Touch.hx",28,0x27faf2d1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	bool tmp = this->get_down();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(28)
	if ((tmp1)){
		HX_STACK_LINE(28)
		::haxor::core::InputState tmp3 = this->state;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(28)
		::haxor::core::InputState tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(28)
		tmp2 = (tmp4 == ::haxor::core::InputState_obj::Hold);
	}
	else{
		HX_STACK_LINE(28)
		tmp2 = true;
	}
	HX_STACK_LINE(28)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Touch_obj,get_pressed,return )

bool Touch_obj::get_hit( ){
	HX_STACK_FRAME("haxor.input.Touch","get_hit",0xb9d4c38b,"haxor.input.Touch.get_hit","haxor/input/Touch.hx",34,0x27faf2d1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(34)
	::haxor::core::InputState tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	bool tmp1 = (tmp == ::haxor::core::InputState_obj::Up);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Touch_obj,get_hit,return )

::String Touch_obj::ToString( ){
	HX_STACK_FRAME("haxor.input.Touch","ToString",0x2dade50b,"haxor.input.Touch.ToString","haxor/input/Touch.hx",100,0x27faf2d1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(101)
	int tmp = this->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(101)
	::String tmp1 = (HX_HCSTRING("id[","\x20","\x04","\x50","\x00") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(101)
	::String tmp2 = (tmp1 + HX_HCSTRING("] pos","\x51","\x24","\xc0","\xa1"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(101)
	::haxor::math::Vector2 tmp3 = this->position;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(101)
	::String tmp4 = tmp3->ToString((int)2);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(101)
	::String tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(101)
	::String tmp6 = (tmp5 + HX_HCSTRING("[","\x5b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(101)
	::haxor::core::InputState tmp7 = this->state;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(101)
	::String tmp8 = ::Std_obj::string(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(101)
	::String tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(101)
	::String tmp10 = (tmp9 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(101)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC0(Touch_obj,ToString,return )


Touch_obj::Touch_obj()
{
}

void Touch_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Touch);
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(radius,"radius");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(relativePosition,"relativePosition");
	HX_MARK_MEMBER_NAME(delta,"delta");
	HX_MARK_MEMBER_NAME(pressure,"pressure");
	HX_MARK_MEMBER_NAME(hold,"hold");
	HX_MARK_MEMBER_NAME(m_down,"m_down");
	HX_MARK_END_CLASS();
}

void Touch_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(radius,"radius");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(relativePosition,"relativePosition");
	HX_VISIT_MEMBER_NAME(delta,"delta");
	HX_VISIT_MEMBER_NAME(pressure,"pressure");
	HX_VISIT_MEMBER_NAME(hold,"hold");
	HX_VISIT_MEMBER_NAME(m_down,"m_down");
}

Dynamic Touch_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"hit") ) { if (inCallProp == hx::paccAlways) return get_hit(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"down") ) { if (inCallProp == hx::paccAlways) return get_down(); }
		if (HX_FIELD_EQ(inName,"hold") ) { return hold; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"delta") ) { return delta; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"radius") ) { return radius; }
		if (HX_FIELD_EQ(inName,"m_down") ) { return m_down; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pressed") ) { if (inCallProp == hx::paccAlways) return get_pressed(); }
		if (HX_FIELD_EQ(inName,"get_hit") ) { return get_hit_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_down") ) { return get_down_dyn(); }
		if (HX_FIELD_EQ(inName,"position") ) { return position; }
		if (HX_FIELD_EQ(inName,"pressure") ) { return pressure; }
		if (HX_FIELD_EQ(inName,"ToString") ) { return ToString_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_pressed") ) { return get_pressed_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"relativePosition") ) { return relativePosition; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Touch_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"hold") ) { hold=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< ::haxor::core::InputState >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"delta") ) { delta=inValue.Cast< ::haxor::math::Vector2 >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"radius") ) { radius=inValue.Cast< ::haxor::math::Vector2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_down") ) { m_down=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< ::haxor::math::Vector2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pressure") ) { pressure=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"relativePosition") ) { relativePosition=inValue.Cast< ::haxor::math::Vector2 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Touch_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Touch_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"));
	outFields->push(HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"));
	outFields->push(HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39"));
	outFields->push(HX_HCSTRING("hit","\x53","\x46","\x4f","\x00"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	outFields->push(HX_HCSTRING("radius","\x52","\xd0","\xf6","\xb0"));
	outFields->push(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"));
	outFields->push(HX_HCSTRING("relativePosition","\x95","\xc5","\xfc","\x2f"));
	outFields->push(HX_HCSTRING("delta","\xf8","\xe7","\x26","\xd7"));
	outFields->push(HX_HCSTRING("pressure","\xc5","\xab","\x1d","\x70"));
	outFields->push(HX_HCSTRING("hold","\x3f","\xc9","\x12","\x45"));
	outFields->push(HX_HCSTRING("m_down","\xb4","\x68","\x65","\x8a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::core::InputState*/ ,(int)offsetof(Touch_obj,state),HX_HCSTRING("state","\x11","\x76","\x0b","\x84")},
	{hx::fsInt,(int)offsetof(Touch_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*::haxor::math::Vector2*/ ,(int)offsetof(Touch_obj,position),HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca")},
	{hx::fsObject /*::haxor::math::Vector2*/ ,(int)offsetof(Touch_obj,radius),HX_HCSTRING("radius","\x52","\xd0","\xf6","\xb0")},
	{hx::fsFloat,(int)offsetof(Touch_obj,angle),HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22")},
	{hx::fsObject /*::haxor::math::Vector2*/ ,(int)offsetof(Touch_obj,relativePosition),HX_HCSTRING("relativePosition","\x95","\xc5","\xfc","\x2f")},
	{hx::fsObject /*::haxor::math::Vector2*/ ,(int)offsetof(Touch_obj,delta),HX_HCSTRING("delta","\xf8","\xe7","\x26","\xd7")},
	{hx::fsFloat,(int)offsetof(Touch_obj,pressure),HX_HCSTRING("pressure","\xc5","\xab","\x1d","\x70")},
	{hx::fsFloat,(int)offsetof(Touch_obj,hold),HX_HCSTRING("hold","\x3f","\xc9","\x12","\x45")},
	{hx::fsBool,(int)offsetof(Touch_obj,m_down),HX_HCSTRING("m_down","\xb4","\x68","\x65","\x8a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("state","\x11","\x76","\x0b","\x84"),
	HX_HCSTRING("get_down","\xeb","\xb3","\x28","\xc2"),
	HX_HCSTRING("get_pressed","\xb9","\x32","\xe1","\xbf"),
	HX_HCSTRING("get_hit","\xea","\x0e","\xc4","\x26"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"),
	HX_HCSTRING("radius","\x52","\xd0","\xf6","\xb0"),
	HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"),
	HX_HCSTRING("relativePosition","\x95","\xc5","\xfc","\x2f"),
	HX_HCSTRING("delta","\xf8","\xe7","\x26","\xd7"),
	HX_HCSTRING("pressure","\xc5","\xab","\x1d","\x70"),
	HX_HCSTRING("hold","\x3f","\xc9","\x12","\x45"),
	HX_HCSTRING("m_down","\xb4","\x68","\x65","\x8a"),
	HX_HCSTRING("ToString","\xcc","\x8c","\x20","\x12"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Touch_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Touch_obj::__mClass,"__mClass");
};

#endif

hx::Class Touch_obj::__mClass;

void Touch_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.input.Touch","\x0f","\x0c","\xef","\x97");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Touch_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Touch_obj >;
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
} // end namespace input
