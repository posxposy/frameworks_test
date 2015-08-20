#include <hxcpp.h>

#ifndef INCLUDED_bm_Sprite
#include <bm/Sprite.h>
#endif
#ifndef INCLUDED_bm_Stage
#include <bm/Stage.h>
#endif
#ifndef INCLUDED_haxor_component_Behaviour
#include <haxor/component/Behaviour.h>
#endif
#ifndef INCLUDED_haxor_component_Component
#include <haxor/component/Component.h>
#endif
#ifndef INCLUDED_haxor_component_MeshRenderer
#include <haxor/component/MeshRenderer.h>
#endif
#ifndef INCLUDED_haxor_component_Renderer
#include <haxor/component/Renderer.h>
#endif
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_math_Vector2
#include <haxor/math/Vector2.h>
#endif
namespace bm{

Void Sprite_obj::__construct(::String __o_p_name)
{
HX_STACK_FRAME("bm.Sprite","new",0xaa4a655a,"bm.Sprite.new","bm/Sprite.hx",43,0x4f677b35)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_p_name,"p_name")
::String p_name = __o_p_name.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(44)
	::String tmp = p_name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	super::__construct(tmp);
	HX_STACK_LINE(45)
	Float tmp1 = this->m_y = (int)0;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(45)
	this->m_x = tmp1;
	HX_STACK_LINE(46)
	::haxor::math::Vector2 tmp2 = ::haxor::math::Vector2_obj::__new(null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(46)
	this->speed = tmp2;
	HX_STACK_LINE(47)
	::bm::Stage tmp3 = this->get_stage();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(47)
	tmp3->OnSpriteBuild(hx::ObjectPtr<OBJ_>(this));
}
;
	return null();
}

//Sprite_obj::~Sprite_obj() { }

Dynamic Sprite_obj::__CreateEmpty() { return  new Sprite_obj; }
hx::ObjectPtr< Sprite_obj > Sprite_obj::__new(::String __o_p_name)
{  hx::ObjectPtr< Sprite_obj > _result_ = new Sprite_obj();
	_result_->__construct(__o_p_name);
	return _result_;}

Dynamic Sprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sprite_obj > _result_ = new Sprite_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::bm::Stage Sprite_obj::get_stage( ){
	HX_STACK_FRAME("bm.Sprite","get_stage",0x52c8538f,"bm.Sprite.get_stage","bm/Sprite.hx",17,0x4f677b35)
	HX_STACK_THIS(this)
	HX_STACK_LINE(17)
	::bm::Stage tmp = ::bm::Stage_obj::instance;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Sprite_obj,get_stage,return )

Float Sprite_obj::get_x( ){
	HX_STACK_FRAME("bm.Sprite","get_x",0x95e1ecc9,"bm.Sprite.get_x","bm/Sprite.hx",24,0x4f677b35)
	HX_STACK_THIS(this)
	HX_STACK_LINE(24)
	Float tmp = this->m_x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Sprite_obj,get_x,return )

Float Sprite_obj::set_x( Float v){
	HX_STACK_FRAME("bm.Sprite","set_x",0x7eb0e2d5,"bm.Sprite.set_x","bm/Sprite.hx",25,0x4f677b35)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(25)
	this->m_x = v;
	HX_STACK_LINE(25)
	::bm::Stage tmp = this->get_stage();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	tmp->OnSpriteTransform(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(25)
	Float tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Sprite_obj,set_x,return )

Float Sprite_obj::get_y( ){
	HX_STACK_FRAME("bm.Sprite","get_y",0x95e1ecca,"bm.Sprite.get_y","bm/Sprite.hx",32,0x4f677b35)
	HX_STACK_THIS(this)
	HX_STACK_LINE(32)
	Float tmp = this->m_y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Sprite_obj,get_y,return )

Float Sprite_obj::set_y( Float v){
	HX_STACK_FRAME("bm.Sprite","set_y",0x7eb0e2d6,"bm.Sprite.set_y","bm/Sprite.hx",33,0x4f677b35)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(33)
	this->m_y = v;
	HX_STACK_LINE(33)
	::bm::Stage tmp = this->get_stage();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	tmp->OnSpriteTransform(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(33)
	Float tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(33)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Sprite_obj,set_y,return )

Void Sprite_obj::OnDestroy( ){
{
		HX_STACK_FRAME("bm.Sprite","OnDestroy",0x291751f5,"bm.Sprite.OnDestroy","bm/Sprite.hx",50,0x4f677b35)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		::bm::Stage tmp = this->get_stage();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(50)
		tmp->OnSpriteDestroy(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}



Sprite_obj::Sprite_obj()
{
}

void Sprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sprite);
	HX_MARK_MEMBER_NAME(__sdp,"__sdp");
	HX_MARK_MEMBER_NAME(m_x,"m_x");
	HX_MARK_MEMBER_NAME(m_y,"m_y");
	HX_MARK_MEMBER_NAME(speed,"speed");
	::haxor::core::Resource_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Sprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__sdp,"__sdp");
	HX_VISIT_MEMBER_NAME(m_x,"m_x");
	HX_VISIT_MEMBER_NAME(m_y,"m_y");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	::haxor::core::Resource_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Sprite_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return get_x(); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return get_y(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"m_x") ) { return m_x; }
		if (HX_FIELD_EQ(inName,"m_y") ) { return m_y; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stage") ) { if (inCallProp == hx::paccAlways) return get_stage(); }
		if (HX_FIELD_EQ(inName,"__sdp") ) { return __sdp; }
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_stage") ) { return get_stage_dyn(); }
		if (HX_FIELD_EQ(inName,"OnDestroy") ) { return OnDestroy_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Sprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return set_x(inValue); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return set_y(inValue); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"m_x") ) { m_x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_y") ) { m_y=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"__sdp") ) { __sdp=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< ::haxor::math::Vector2 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Sprite_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Sprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("stage","\xbe","\x6a","\x0b","\x84"));
	outFields->push(HX_HCSTRING("__sdp","\x9f","\xfb","\x33","\xf2"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("m_x","\xe6","\x08","\x53","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("m_y","\xe7","\x08","\x53","\x00"));
	outFields->push(HX_HCSTRING("speed","\x87","\x97","\x69","\x81"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Sprite_obj,__sdp),HX_HCSTRING("__sdp","\x9f","\xfb","\x33","\xf2")},
	{hx::fsFloat,(int)offsetof(Sprite_obj,m_x),HX_HCSTRING("m_x","\xe6","\x08","\x53","\x00")},
	{hx::fsFloat,(int)offsetof(Sprite_obj,m_y),HX_HCSTRING("m_y","\xe7","\x08","\x53","\x00")},
	{hx::fsObject /*::haxor::math::Vector2*/ ,(int)offsetof(Sprite_obj,speed),HX_HCSTRING("speed","\x87","\x97","\x69","\x81")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get_stage","\x15","\xc7","\xb4","\xc7"),
	HX_HCSTRING("__sdp","\x9f","\xfb","\x33","\xf2"),
	HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("m_x","\xe6","\x08","\x53","\x00"),
	HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	HX_HCSTRING("m_y","\xe7","\x08","\x53","\x00"),
	HX_HCSTRING("speed","\x87","\x97","\x69","\x81"),
	HX_HCSTRING("OnDestroy","\x7b","\xc5","\x03","\x9e"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sprite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sprite_obj::__mClass,"__mClass");
};

#endif

hx::Class Sprite_obj::__mClass;

void Sprite_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("bm.Sprite","\x68","\x70","\xea","\x8b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Sprite_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Sprite_obj >;
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

} // end namespace bm
