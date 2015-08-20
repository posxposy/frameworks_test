#include <hxcpp.h>

#ifndef INCLUDED_haxor_io_file_ColladaInput
#include <haxor/io/file/ColladaInput.h>
#endif
#ifndef INCLUDED_haxor_math_Color
#include <haxor/math/Color.h>
#endif
#ifndef INCLUDED_haxor_math_Vector2
#include <haxor/math/Vector2.h>
#endif
#ifndef INCLUDED_haxor_math_Vector3
#include <haxor/math/Vector3.h>
#endif
#ifndef INCLUDED_haxor_math_Vector4
#include <haxor/math/Vector4.h>
#endif
namespace haxor{
namespace io{
namespace file{

Void ColladaInput_obj::__construct()
{
HX_STACK_FRAME("haxor.io.file.ColladaInput","new",0x731bf1a0,"haxor.io.file.ColladaInput.new","haxor/io/file/ColladaFile.hx",1311,0xa1888587)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(1317)
	this->stride = (int)0;
	HX_STACK_LINE(1316)
	this->values = null();
	HX_STACK_LINE(1315)
	this->set = (int)-1;
	HX_STACK_LINE(1314)
	this->offset = (int)0;
	HX_STACK_LINE(1313)
	this->semantic = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(1321)
	Dynamic tmp = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1321)
	this->values = tmp;
}
;
	return null();
}

//ColladaInput_obj::~ColladaInput_obj() { }

Dynamic ColladaInput_obj::__CreateEmpty() { return  new ColladaInput_obj; }
hx::ObjectPtr< ColladaInput_obj > ColladaInput_obj::__new()
{  hx::ObjectPtr< ColladaInput_obj > _result_ = new ColladaInput_obj();
	_result_->__construct();
	return _result_;}

Dynamic ColladaInput_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ColladaInput_obj > _result_ = new ColladaInput_obj();
	_result_->__construct();
	return _result_;}

Dynamic ColladaInput_obj::GetVectorArray( ){
	HX_STACK_FRAME("haxor.io.file.ColladaInput","GetVectorArray",0xd88157c0,"haxor.io.file.ColladaInput.GetVectorArray","haxor/io/file/ColladaFile.hx",1325,0xa1888587)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1326)
	int tmp = this->stride;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1326)
	bool tmp1 = (tmp <= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1326)
	if ((tmp1)){
		HX_STACK_LINE(1326)
		Dynamic tmp2 = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1326)
		return tmp2;
	}
	HX_STACK_LINE(1327)
	Dynamic tmp2 = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1327)
	Dynamic res = tmp2;		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(1328)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(1330)
	while((true)){
		HX_STACK_LINE(1330)
		int tmp3 = i;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1330)
		Dynamic tmp4 = this->values;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1330)
		int tmp5 = tmp4->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1330)
		bool tmp6 = (tmp3 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1330)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1330)
		if ((tmp7)){
			HX_STACK_LINE(1330)
			break;
		}
		HX_STACK_LINE(1332)
		Dynamic v = null();		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(1333)
		{
			HX_STACK_LINE(1333)
			int tmp8 = this->stride;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1333)
			int _g = tmp8;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1333)
			int tmp9 = _g;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1333)
			switch( (int)(tmp9)){
				case (int)1: {
					HX_STACK_LINE(1335)
					Dynamic tmp10 = this->values;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1335)
					int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1335)
					Dynamic tmp12 = tmp10->__GetItem(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1335)
					v = tmp12;
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(1336)
					Dynamic tmp10 = this->values;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1336)
					int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1336)
					Dynamic tmp12 = tmp10->__GetItem(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1336)
					Dynamic tmp13 = this->values;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1336)
					int tmp14 = (i + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1336)
					Dynamic tmp15 = tmp13->__GetItem(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1336)
					::haxor::math::Vector2 tmp16 = ::haxor::math::Vector2_obj::__new(tmp12,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1336)
					v = tmp16;
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(1337)
					::String tmp10 = this->semantic;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1337)
					bool tmp11 = (tmp10 == HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1337)
					Dynamic tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1337)
					if ((tmp11)){
						HX_STACK_LINE(1337)
						Dynamic tmp13 = this->values;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1337)
						int tmp14 = i;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1337)
						Dynamic tmp15 = tmp13->__GetItem(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1337)
						Dynamic tmp16 = this->values;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1337)
						int tmp17 = (i + (int)1);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1337)
						Dynamic tmp18 = tmp16->__GetItem(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1337)
						Dynamic tmp19 = this->values;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1337)
						int tmp20 = (i + (int)2);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1337)
						Dynamic tmp21 = tmp19->__GetItem(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1337)
						tmp12 = ::haxor::math::Color_obj::__new(tmp15,tmp18,tmp21,null());
					}
					else{
						HX_STACK_LINE(1337)
						Dynamic tmp13 = this->values;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1337)
						int tmp14 = i;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1337)
						Dynamic tmp15 = tmp13->__GetItem(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1337)
						Dynamic tmp16 = this->values;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1337)
						int tmp17 = (i + (int)1);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1337)
						Dynamic tmp18 = tmp16->__GetItem(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1337)
						Dynamic tmp19 = this->values;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1337)
						int tmp20 = (i + (int)2);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1337)
						Dynamic tmp21 = tmp19->__GetItem(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1337)
						tmp12 = ::haxor::math::Vector3_obj::__new(tmp15,tmp18,tmp21);
					}
					HX_STACK_LINE(1337)
					v = tmp12;
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(1338)
					::String tmp10 = this->semantic;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1338)
					bool tmp11 = (tmp10 == HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1338)
					Dynamic tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1338)
					if ((tmp11)){
						HX_STACK_LINE(1338)
						Dynamic tmp13 = this->values;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1338)
						int tmp14 = i;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1338)
						Dynamic tmp15 = tmp13->__GetItem(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1338)
						Dynamic tmp16 = this->values;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1338)
						int tmp17 = (i + (int)1);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1338)
						Dynamic tmp18 = tmp16->__GetItem(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1338)
						Dynamic tmp19 = this->values;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1338)
						int tmp20 = (i + (int)2);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1338)
						Dynamic tmp21 = tmp19->__GetItem(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1338)
						Dynamic tmp22 = this->values;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1338)
						int tmp23 = (i + (int)3);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1338)
						Dynamic tmp24 = tmp22->__GetItem(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1338)
						tmp12 = ::haxor::math::Color_obj::__new(tmp15,tmp18,tmp21,tmp24);
					}
					else{
						HX_STACK_LINE(1338)
						Dynamic tmp13 = this->values;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1338)
						int tmp14 = i;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1338)
						Dynamic tmp15 = tmp13->__GetItem(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1338)
						Dynamic tmp16 = this->values;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1338)
						int tmp17 = (i + (int)1);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1338)
						Dynamic tmp18 = tmp16->__GetItem(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1338)
						Dynamic tmp19 = this->values;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1338)
						int tmp20 = (i + (int)2);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1338)
						Dynamic tmp21 = tmp19->__GetItem(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1338)
						Dynamic tmp22 = this->values;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1338)
						int tmp23 = (i + (int)3);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1338)
						Dynamic tmp24 = tmp22->__GetItem(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1338)
						tmp12 = ::haxor::math::Vector4_obj::__new(tmp15,tmp18,tmp21,tmp24);
					}
					HX_STACK_LINE(1338)
					v = tmp12;
				}
				;break;
			}
		}
		HX_STACK_LINE(1340)
		bool tmp8 = (v == null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1340)
		if ((tmp8)){
			HX_STACK_LINE(1340)
			continue;
		}
		HX_STACK_LINE(1342)
		res->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(v);
		HX_STACK_LINE(1343)
		int tmp9 = this->stride;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1343)
		hx::AddEq(i,tmp9);
	}
	HX_STACK_LINE(1345)
	Dynamic tmp3 = res;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1345)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(ColladaInput_obj,GetVectorArray,return )


ColladaInput_obj::ColladaInput_obj()
{
}

void ColladaInput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ColladaInput);
	HX_MARK_MEMBER_NAME(semantic,"semantic");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(set,"set");
	HX_MARK_MEMBER_NAME(values,"values");
	HX_MARK_MEMBER_NAME(stride,"stride");
	HX_MARK_END_CLASS();
}

void ColladaInput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(semantic,"semantic");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(set,"set");
	HX_VISIT_MEMBER_NAME(values,"values");
	HX_VISIT_MEMBER_NAME(stride,"stride");
}

Dynamic ColladaInput_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { return offset; }
		if (HX_FIELD_EQ(inName,"values") ) { return values; }
		if (HX_FIELD_EQ(inName,"stride") ) { return stride; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"semantic") ) { return semantic; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"GetVectorArray") ) { return GetVectorArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ColladaInput_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { set=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"values") ) { values=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stride") ) { stride=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"semantic") ) { semantic=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ColladaInput_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ColladaInput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("semantic","\x06","\x91","\x73","\xd1"));
	outFields->push(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"));
	outFields->push(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"));
	outFields->push(HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f"));
	outFields->push(HX_HCSTRING("stride","\x19","\x20","\x30","\x11"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(ColladaInput_obj,semantic),HX_HCSTRING("semantic","\x06","\x91","\x73","\xd1")},
	{hx::fsInt,(int)offsetof(ColladaInput_obj,offset),HX_HCSTRING("offset","\x93","\x97","\x3f","\x60")},
	{hx::fsInt,(int)offsetof(ColladaInput_obj,set),HX_HCSTRING("set","\xa2","\x9b","\x57","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ColladaInput_obj,values),HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f")},
	{hx::fsInt,(int)offsetof(ColladaInput_obj,stride),HX_HCSTRING("stride","\x19","\x20","\x30","\x11")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("semantic","\x06","\x91","\x73","\xd1"),
	HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f"),
	HX_HCSTRING("stride","\x19","\x20","\x30","\x11"),
	HX_HCSTRING("GetVectorArray","\x00","\x71","\x4c","\x49"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColladaInput_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColladaInput_obj::__mClass,"__mClass");
};

#endif

hx::Class ColladaInput_obj::__mClass;

void ColladaInput_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.io.file.ColladaInput","\xae","\xe1","\x22","\xc3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ColladaInput_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ColladaInput_obj >;
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
} // end namespace io
} // end namespace file
