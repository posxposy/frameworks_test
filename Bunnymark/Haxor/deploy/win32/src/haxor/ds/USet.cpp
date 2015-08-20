#include <hxcpp.h>

#ifndef INCLUDED_haxor_ds_USet
#include <haxor/ds/USet.h>
#endif
namespace haxor{
namespace ds{

Void USet_obj::__construct()
{
HX_STACK_FRAME("haxor.ds.USet","new",0x2fb2e252,"haxor.ds.USet.new","haxor/ds/USet.hx",36,0xa1062abe)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(37)
	Dynamic tmp = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	this->m_list = tmp;
	HX_STACK_LINE(38)
	this->m_length = (int)0;
}
;
	return null();
}

//USet_obj::~USet_obj() { }

Dynamic USet_obj::__CreateEmpty() { return  new USet_obj; }
hx::ObjectPtr< USet_obj > USet_obj::__new()
{  hx::ObjectPtr< USet_obj > _result_ = new USet_obj();
	_result_->__construct();
	return _result_;}

Dynamic USet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< USet_obj > _result_ = new USet_obj();
	_result_->__construct();
	return _result_;}

int USet_obj::get_length( ){
	HX_STACK_FRAME("haxor.ds.USet","get_length",0x0553f4fd,"haxor.ds.USet.get_length","haxor/ds/USet.hx",22,0xa1062abe)
	HX_STACK_THIS(this)
	HX_STACK_LINE(22)
	int tmp = this->m_length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(USet_obj,get_length,return )

Void USet_obj::Add( Dynamic p_item){
{
		HX_STACK_FRAME("haxor.ds.USet","Add",0x2f90bbf3,"haxor.ds.USet.Add","haxor/ds/USet.hx",46,0xa1062abe)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_item,"p_item")
		HX_STACK_LINE(47)
		bool tmp = (p_item->__Field(HX_HCSTRING("usid","\xb9","\x95","\xad","\x4d"), hx::paccDynamic ) >= (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(47)
		if ((tmp)){
			HX_STACK_LINE(47)
			return null();
		}
		HX_STACK_LINE(49)
		int tmp1 = this->m_length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(49)
		Dynamic tmp2 = this->m_list;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(49)
		int tmp3 = tmp2->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(49)
		bool tmp4 = (tmp1 >= tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(49)
		if ((tmp4)){
			HX_STACK_LINE(51)
			Dynamic tmp5 = this->m_list;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(51)
			Dynamic tmp6 = p_item;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(51)
			tmp5->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp6);
		}
		else{
			HX_STACK_LINE(55)
			Dynamic tmp5 = this->m_list;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(55)
			int tmp6 = this->m_length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(55)
			Dynamic tmp7 = p_item;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(55)
			hx::IndexRef((tmp5).mPtr,tmp6) = tmp7;
		}
		HX_STACK_LINE(57)
		int tmp5 = (this->m_length)++;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(57)
		p_item->__FieldRef(HX_HCSTRING("usid","\xb9","\x95","\xad","\x4d")) = tmp5;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(USet_obj,Add,(void))

Void USet_obj::Remove( Dynamic p_item){
{
		HX_STACK_FRAME("haxor.ds.USet","Remove",0x8bb441b2,"haxor.ds.USet.Remove","haxor/ds/USet.hx",65,0xa1062abe)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_item,"p_item")
		HX_STACK_LINE(66)
		int oid = p_item->__Field(HX_HCSTRING("usid","\xb9","\x95","\xad","\x4d"), hx::paccDynamic );		HX_STACK_VAR(oid,"oid");
		HX_STACK_LINE(67)
		bool tmp = (oid < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(67)
		if ((tmp)){
			HX_STACK_LINE(67)
			return null();
		}
		HX_STACK_LINE(68)
		int tmp1 = this->m_length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(68)
		bool tmp2 = (tmp1 <= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(68)
		if ((tmp2)){
			HX_STACK_LINE(68)
			return null();
		}
		HX_STACK_LINE(69)
		Dynamic tmp3 = this->m_list;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(69)
		int tmp4 = this->m_length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(69)
		int tmp5 = (tmp4 - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(69)
		Dynamic tmp6 = tmp3->__GetItem(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(69)
		Dynamic last = tmp6;		HX_STACK_VAR(last,"last");
		HX_STACK_LINE(70)
		Dynamic tmp7 = this->m_list;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(70)
		int tmp8 = oid;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(70)
		Dynamic tmp9 = last;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(70)
		hx::IndexRef((tmp7).mPtr,tmp8) = tmp9;
		HX_STACK_LINE(71)
		last->__FieldRef(HX_HCSTRING("usid","\xb9","\x95","\xad","\x4d")) = oid;
		HX_STACK_LINE(72)
		p_item->__FieldRef(HX_HCSTRING("usid","\xb9","\x95","\xad","\x4d")) = (int)-1;
		HX_STACK_LINE(73)
		(this->m_length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(USet_obj,Remove,(void))

Dynamic USet_obj::Get( int p_index){
	HX_STACK_FRAME("haxor.ds.USet","Get",0x2f954a68,"haxor.ds.USet.Get","haxor/ds/USet.hx",81,0xa1062abe)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_index,"p_index")
	HX_STACK_LINE(81)
	Dynamic tmp = this->m_list;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	int tmp1 = p_index;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(81)
	Dynamic tmp2 = tmp->__GetItem(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(81)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(USet_obj,Get,return )

Void USet_obj::Clear( ){
{
		HX_STACK_FRAME("haxor.ds.USet","Clear",0xee45d3df,"haxor.ds.USet.Clear","haxor/ds/USet.hx",86,0xa1062abe)
		HX_STACK_THIS(this)
		HX_STACK_LINE(86)
		this->m_length = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(USet_obj,Clear,(void))


USet_obj::USet_obj()
{
}

void USet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(USet);
	HX_MARK_MEMBER_NAME(m_length,"m_length");
	HX_MARK_MEMBER_NAME(m_list,"m_list");
	HX_MARK_END_CLASS();
}

void USet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_length,"m_length");
	HX_VISIT_MEMBER_NAME(m_list,"m_list");
}

Dynamic USet_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"Add") ) { return Add_dyn(); }
		if (HX_FIELD_EQ(inName,"Get") ) { return Get_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"Clear") ) { return Clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return get_length(); }
		if (HX_FIELD_EQ(inName,"m_list") ) { return m_list; }
		if (HX_FIELD_EQ(inName,"Remove") ) { return Remove_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_length") ) { return m_length; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic USet_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"m_list") ) { m_list=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_length") ) { m_length=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool USet_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void USet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("m_length","\xb8","\x3d","\xf9","\x67"));
	outFields->push(HX_HCSTRING("m_list","\xb0","\x8c","\xaa","\x8f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(USet_obj,m_length),HX_HCSTRING("m_length","\xb8","\x3d","\xf9","\x67")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(USet_obj,m_list),HX_HCSTRING("m_list","\xb0","\x8c","\xaa","\x8f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("m_length","\xb8","\x3d","\xf9","\x67"),
	HX_HCSTRING("m_list","\xb0","\x8c","\xaa","\x8f"),
	HX_HCSTRING("Add","\x01","\xaa","\x31","\x00"),
	HX_HCSTRING("Remove","\x64","\x10","\x1d","\x39"),
	HX_HCSTRING("Get","\x76","\x38","\x36","\x00"),
	HX_HCSTRING("Clear","\x6d","\xe1","\x88","\xdb"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(USet_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(USet_obj::__mClass,"__mClass");
};

#endif

hx::Class USet_obj::__mClass;

void USet_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.ds.USet","\x60","\x11","\x23","\x2d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &USet_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< USet_obj >;
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
