#include <hxcpp.h>

#ifndef INCLUDED_haxor_context_UID
#include <haxor/context/UID.h>
#endif
namespace haxor{
namespace context{

Void UID_obj::__construct()
{
HX_STACK_FRAME("haxor.context.UID","new",0x5223f4b7,"haxor.context.UID.new","haxor/context/UID.hx",32,0xa116651b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(33)
	this->m_id = (int)0;
	HX_STACK_LINE(34)
	Array< int > tmp = Array_obj< int >::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	this->m_cache = tmp;
}
;
	return null();
}

//UID_obj::~UID_obj() { }

Dynamic UID_obj::__CreateEmpty() { return  new UID_obj; }
hx::ObjectPtr< UID_obj > UID_obj::__new()
{  hx::ObjectPtr< UID_obj > _result_ = new UID_obj();
	_result_->__construct();
	return _result_;}

Dynamic UID_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UID_obj > _result_ = new UID_obj();
	_result_->__construct();
	return _result_;}

int UID_obj::get_id( ){
	HX_STACK_FRAME("haxor.context.UID","get_id",0x588fdf2d,"haxor.context.UID.get_id","haxor/context/UID.hx",14,0xa116651b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(14)
	Array< int > tmp = this->m_cache;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(14)
	bool tmp2 = (tmp1 <= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(14)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(14)
	if ((tmp2)){
		HX_STACK_LINE(14)
		tmp3 = (this->m_id)++;
	}
	else{
		HX_STACK_LINE(14)
		Array< int > tmp4 = this->m_cache;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(14)
		tmp3 = tmp4->shift();
	}
	HX_STACK_LINE(14)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(UID_obj,get_id,return )

int UID_obj::set_id( int v){
	HX_STACK_FRAME("haxor.context.UID","set_id",0x24d833a1,"haxor.context.UID.set_id","haxor/context/UID.hx",15,0xa116651b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(15)
	Array< int > tmp = this->m_cache;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	int tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(15)
	tmp->push(tmp1);
	HX_STACK_LINE(15)
	int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(15)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(UID_obj,set_id,return )

int UID_obj::get_stored( ){
	HX_STACK_FRAME("haxor.context.UID","get_stored",0x1023e5b5,"haxor.context.UID.get_stored","haxor/context/UID.hx",23,0xa116651b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(23)
	Array< int > tmp = this->m_cache;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(UID_obj,get_stored,return )

int UID_obj::get_next( ){
	HX_STACK_FRAME("haxor.context.UID","get_next",0x86f700c5,"haxor.context.UID.get_next","haxor/context/UID.hx",29,0xa116651b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(29)
	int tmp = this->m_id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(UID_obj,get_next,return )


UID_obj::UID_obj()
{
}

void UID_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UID);
	HX_MARK_MEMBER_NAME(m_id,"m_id");
	HX_MARK_MEMBER_NAME(m_cache,"m_cache");
	HX_MARK_END_CLASS();
}

void UID_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_id,"m_id");
	HX_VISIT_MEMBER_NAME(m_cache,"m_cache");
}

Dynamic UID_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { if (inCallProp == hx::paccAlways) return get_id(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"m_id") ) { return m_id; }
		if (HX_FIELD_EQ(inName,"next") ) { if (inCallProp == hx::paccAlways) return get_next(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_id") ) { return get_id_dyn(); }
		if (HX_FIELD_EQ(inName,"set_id") ) { return set_id_dyn(); }
		if (HX_FIELD_EQ(inName,"stored") ) { if (inCallProp == hx::paccAlways) return get_stored(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_cache") ) { return m_cache; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_next") ) { return get_next_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_stored") ) { return get_stored_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UID_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { if (inCallProp == hx::paccAlways) return set_id(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"m_id") ) { m_id=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_cache") ) { m_cache=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool UID_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void UID_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("m_id","\xad","\xb3","\x54","\x48"));
	outFields->push(HX_HCSTRING("m_cache","\xb0","\x71","\x9f","\xf1"));
	outFields->push(HX_HCSTRING("stored","\x63","\x51","\x3b","\x0f"));
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(UID_obj,m_id),HX_HCSTRING("m_id","\xad","\xb3","\x54","\x48")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(UID_obj,m_cache),HX_HCSTRING("m_cache","\xb0","\x71","\x9f","\xf1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get_id","\x24","\xf3","\x2f","\xa3"),
	HX_HCSTRING("set_id","\x98","\x47","\x78","\x6f"),
	HX_HCSTRING("m_id","\xad","\xb3","\x54","\x48"),
	HX_HCSTRING("m_cache","\xb0","\x71","\x9f","\xf1"),
	HX_HCSTRING("get_stored","\x2c","\xc1","\xc2","\xff"),
	HX_HCSTRING("get_next","\x7c","\x40","\xbd","\xc8"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UID_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UID_obj::__mClass,"__mClass");
};

#endif

hx::Class UID_obj::__mClass;

void UID_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.context.UID","\x45","\xcd","\x57","\xdc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &UID_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< UID_obj >;
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
