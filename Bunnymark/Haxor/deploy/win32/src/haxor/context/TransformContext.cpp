#include <hxcpp.h>

#ifndef INCLUDED_haxor_component_Component
#include <haxor/component/Component.h>
#endif
#ifndef INCLUDED_haxor_component_Transform
#include <haxor/component/Transform.h>
#endif
#ifndef INCLUDED_haxor_context_TransformContext
#include <haxor/context/TransformContext.h>
#endif
#ifndef INCLUDED_haxor_context_UID
#include <haxor/context/UID.h>
#endif
#ifndef INCLUDED_haxor_core_Entity
#include <haxor/core/Entity.h>
#endif
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_ISerializable
#include <haxor/io/serialization/ISerializable.h>
#endif
namespace haxor{
namespace context{

Void TransformContext_obj::__construct()
{
HX_STACK_FRAME("haxor.context.TransformContext","new",0xd328a300,"haxor.context.TransformContext.new","haxor/context/TransformContext.hx",23,0x797e3cae)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(24)
	::haxor::context::UID tmp = ::haxor::context::UID_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	this->tid = tmp;
}
;
	return null();
}

//TransformContext_obj::~TransformContext_obj() { }

Dynamic TransformContext_obj::__CreateEmpty() { return  new TransformContext_obj; }
hx::ObjectPtr< TransformContext_obj > TransformContext_obj::__new()
{  hx::ObjectPtr< TransformContext_obj > _result_ = new TransformContext_obj();
	_result_->__construct();
	return _result_;}

Dynamic TransformContext_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TransformContext_obj > _result_ = new TransformContext_obj();
	_result_->__construct();
	return _result_;}

Void TransformContext_obj::Initialize( ){
{
		HX_STACK_FRAME("haxor.context.TransformContext","Initialize",0xf43cf6d0,"haxor.context.TransformContext.Initialize","haxor/context/TransformContext.hx",31,0x797e3cae)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TransformContext_obj,Initialize,(void))

Void TransformContext_obj::OnChange( ::haxor::component::Transform t){
{
		HX_STACK_FRAME("haxor.context.TransformContext","OnChange",0xc85ced6f,"haxor.context.TransformContext.OnChange","haxor/context/TransformContext.hx",40,0x797e3cae)
		HX_STACK_THIS(this)
		HX_STACK_ARG(t,"t")
		HX_STACK_LINE(41)
		t->m_uniform_dirty = true;
		HX_STACK_LINE(42)
		Array< ::Dynamic > tmp = t->m_entity->m_components;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(42)
		Array< ::Dynamic > cl = tmp;		HX_STACK_VAR(cl,"cl");
		HX_STACK_LINE(43)
		bool tmp1 = (cl == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(43)
		if ((tmp1)){
			HX_STACK_LINE(43)
			return null();
		}
		HX_STACK_LINE(44)
		{
			HX_STACK_LINE(44)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(44)
			int _g = cl->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(44)
			while((true)){
				HX_STACK_LINE(44)
				bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(44)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(44)
				if ((tmp3)){
					HX_STACK_LINE(44)
					break;
				}
				HX_STACK_LINE(44)
				int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(44)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(44)
				::haxor::component::Component tmp5 = cl->__get(i).StaticCast< ::haxor::component::Component >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(44)
				tmp5->OnTransformUpdate(false);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TransformContext_obj,OnChange,(void))

Void TransformContext_obj::OnHierarchyChange( ::haxor::component::Transform t){
{
		HX_STACK_FRAME("haxor.context.TransformContext","OnHierarchyChange",0x89163ce6,"haxor.context.TransformContext.OnHierarchyChange","haxor/context/TransformContext.hx",52,0x797e3cae)
		HX_STACK_THIS(this)
		HX_STACK_ARG(t,"t")
		HX_STACK_LINE(53)
		Array< ::Dynamic > tmp = t->m_entity->m_components;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(53)
		Array< ::Dynamic > cl = tmp;		HX_STACK_VAR(cl,"cl");
		HX_STACK_LINE(54)
		bool tmp1 = (cl == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(54)
		if ((tmp1)){
			HX_STACK_LINE(54)
			return null();
		}
		HX_STACK_LINE(55)
		{
			HX_STACK_LINE(55)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(55)
			int _g = cl->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(55)
			while((true)){
				HX_STACK_LINE(55)
				bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(55)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(55)
				if ((tmp3)){
					HX_STACK_LINE(55)
					break;
				}
				HX_STACK_LINE(55)
				int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(55)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(55)
				::haxor::component::Component tmp5 = cl->__get(i).StaticCast< ::haxor::component::Component >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(55)
				tmp5->OnTransformUpdate(true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TransformContext_obj,OnHierarchyChange,(void))


TransformContext_obj::TransformContext_obj()
{
}

void TransformContext_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TransformContext);
	HX_MARK_MEMBER_NAME(tid,"tid");
	HX_MARK_END_CLASS();
}

void TransformContext_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tid,"tid");
}

Dynamic TransformContext_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"tid") ) { return tid; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"OnChange") ) { return OnChange_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"Initialize") ) { return Initialize_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"OnHierarchyChange") ) { return OnHierarchyChange_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TransformContext_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"tid") ) { tid=inValue.Cast< ::haxor::context::UID >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TransformContext_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void TransformContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("tid","\x4f","\x61","\x58","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::context::UID*/ ,(int)offsetof(TransformContext_obj,tid),HX_HCSTRING("tid","\x4f","\x61","\x58","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("tid","\x4f","\x61","\x58","\x00"),
	HX_HCSTRING("Initialize","\x70","\x35","\x6c","\xe3"),
	HX_HCSTRING("OnChange","\x0f","\x44","\xd1","\x70"),
	HX_HCSTRING("OnHierarchyChange","\x46","\x12","\xf2","\x64"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TransformContext_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TransformContext_obj::__mClass,"__mClass");
};

#endif

hx::Class TransformContext_obj::__mClass;

void TransformContext_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.context.TransformContext","\x0e","\x63","\xe3","\xcb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &TransformContext_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TransformContext_obj >;
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
