#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxor_ds_Pool
#include <haxor/ds/Pool.h>
#endif
namespace haxor{
namespace ds{

Void Pool_obj::__construct(::hx::Class p_type,hx::Null< int >  __o_p_count)
{
HX_STACK_FRAME("haxor.ds.Pool","new",0x026c9c81,"haxor.ds.Pool.new","haxor/ds/Pool.hx",30,0xbfd10b6f)
HX_STACK_THIS(this)
HX_STACK_ARG(p_type,"p_type")
HX_STACK_ARG(__o_p_count,"p_count")
int p_count = __o_p_count.Default(0);
{
	HX_STACK_LINE(31)
	this->m_type = p_type;
	HX_STACK_LINE(32)
	this->m_top = (int)0;
	HX_STACK_LINE(33)
	Dynamic tmp = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	this->m_list = tmp;
	HX_STACK_LINE(34)
	{
		HX_STACK_LINE(34)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(34)
		while((true)){
			HX_STACK_LINE(34)
			bool tmp1 = (_g < p_count);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(34)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(34)
			if ((tmp2)){
				HX_STACK_LINE(34)
				break;
			}
			HX_STACK_LINE(34)
			int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(34)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(34)
			this->Generate();
		}
	}
}
;
	return null();
}

//Pool_obj::~Pool_obj() { }

Dynamic Pool_obj::__CreateEmpty() { return  new Pool_obj; }
hx::ObjectPtr< Pool_obj > Pool_obj::__new(::hx::Class p_type,hx::Null< int >  __o_p_count)
{  hx::ObjectPtr< Pool_obj > _result_ = new Pool_obj();
	_result_->__construct(p_type,__o_p_count);
	return _result_;}

Dynamic Pool_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Pool_obj > _result_ = new Pool_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Dynamic Pool_obj::Get( ){
	HX_STACK_FRAME("haxor.ds.Pool","Get",0x024f0497,"haxor.ds.Pool.Get","haxor/ds/Pool.hx",41,0xbfd10b6f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(41)
	int tmp = this->m_top;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	bool tmp1 = (tmp <= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(41)
	if ((tmp1)){
		HX_STACK_LINE(41)
		this->Generate();
	}
	HX_STACK_LINE(41)
	Dynamic tmp2 = this->m_list;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(41)
	int tmp3 = --(this->m_top);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(41)
	Dynamic tmp4 = tmp2->__GetItem(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(41)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Pool_obj,Get,return )

Void Pool_obj::Put( Dynamic v){
{
		HX_STACK_FRAME("haxor.ds.Pool","Put",0x0255e6d0,"haxor.ds.Pool.Put","haxor/ds/Pool.hx",47,0xbfd10b6f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(47)
		Dynamic tmp = this->m_list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(47)
		int tmp1 = (this->m_top)++;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(47)
		Dynamic tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(47)
		hx::IndexRef((tmp).mPtr,tmp1) = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Pool_obj,Put,(void))

Void Pool_obj::Generate( ){
{
		HX_STACK_FRAME("haxor.ds.Pool","Generate",0x199eb794,"haxor.ds.Pool.Generate","haxor/ds/Pool.hx",54,0xbfd10b6f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(55)
		::hx::Class tmp = this->m_type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		Dynamic tmp1 = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(55)
		Dynamic tmp2 = ::Type_obj::createInstance(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(55)
		Dynamic d = tmp2;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(56)
		Dynamic tmp3 = this->m_list;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(56)
		Dynamic tmp4 = d;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(56)
		tmp3->__Field(HX_HCSTRING("unshift","\x89","\xe3","\xb3","\x78"), hx::paccDynamic )(tmp4);
		HX_STACK_LINE(57)
		(this->m_top)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Pool_obj,Generate,(void))


Pool_obj::Pool_obj()
{
}

void Pool_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Pool);
	HX_MARK_MEMBER_NAME(m_list,"m_list");
	HX_MARK_MEMBER_NAME(m_top,"m_top");
	HX_MARK_MEMBER_NAME(m_type,"m_type");
	HX_MARK_END_CLASS();
}

void Pool_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_list,"m_list");
	HX_VISIT_MEMBER_NAME(m_top,"m_top");
	HX_VISIT_MEMBER_NAME(m_type,"m_type");
}

Dynamic Pool_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"Get") ) { return Get_dyn(); }
		if (HX_FIELD_EQ(inName,"Put") ) { return Put_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"m_top") ) { return m_top; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_list") ) { return m_list; }
		if (HX_FIELD_EQ(inName,"m_type") ) { return m_type; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"Generate") ) { return Generate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Pool_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"m_top") ) { m_top=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_list") ) { m_list=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_type") ) { m_type=inValue.Cast< ::hx::Class >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Pool_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Pool_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("m_list","\xb0","\x8c","\xaa","\x8f"));
	outFields->push(HX_HCSTRING("m_top","\x83","\xe6","\xd0","\x01"));
	outFields->push(HX_HCSTRING("m_type","\x0c","\x63","\x00","\x95"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Pool_obj,m_list),HX_HCSTRING("m_list","\xb0","\x8c","\xaa","\x8f")},
	{hx::fsInt,(int)offsetof(Pool_obj,m_top),HX_HCSTRING("m_top","\x83","\xe6","\xd0","\x01")},
	{hx::fsObject /*::hx::Class*/ ,(int)offsetof(Pool_obj,m_type),HX_HCSTRING("m_type","\x0c","\x63","\x00","\x95")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("m_list","\xb0","\x8c","\xaa","\x8f"),
	HX_HCSTRING("m_top","\x83","\xe6","\xd0","\x01"),
	HX_HCSTRING("m_type","\x0c","\x63","\x00","\x95"),
	HX_HCSTRING("Get","\x76","\x38","\x36","\x00"),
	HX_HCSTRING("Put","\xaf","\x1a","\x3d","\x00"),
	HX_HCSTRING("Generate","\x55","\x1b","\x54","\xb3"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Pool_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Pool_obj::__mClass,"__mClass");
};

#endif

hx::Class Pool_obj::__mClass;

void Pool_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.ds.Pool","\x0f","\x48","\xea","\x29");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Pool_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Pool_obj >;
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
} // end namespace ds
