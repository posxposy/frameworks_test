#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxor_ds_SAPInterval
#include <haxor/ds/SAPInterval.h>
#endif
namespace haxor{
namespace ds{

Void SAPInterval_obj::__construct()
{
HX_STACK_FRAME("haxor.ds.SAPInterval","new",0x243f83a6,"haxor.ds.SAPInterval.new","haxor/ds/SAP.hx",425,0xbaeeb06f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(426)
	this->min = ((Float)0.0);
	HX_STACK_LINE(427)
	this->max = ((Float)0.0);
	HX_STACK_LINE(428)
	this->id = (int)0;
}
;
	return null();
}

//SAPInterval_obj::~SAPInterval_obj() { }

Dynamic SAPInterval_obj::__CreateEmpty() { return  new SAPInterval_obj; }
hx::ObjectPtr< SAPInterval_obj > SAPInterval_obj::__new()
{  hx::ObjectPtr< SAPInterval_obj > _result_ = new SAPInterval_obj();
	_result_->__construct();
	return _result_;}

Dynamic SAPInterval_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SAPInterval_obj > _result_ = new SAPInterval_obj();
	_result_->__construct();
	return _result_;}

Void SAPInterval_obj::Set( Float p_min,Float p_max){
{
		HX_STACK_FRAME("haxor.ds.SAPInterval","Set",0x242b06c8,"haxor.ds.SAPInterval.Set","haxor/ds/SAP.hx",436,0xbaeeb06f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_min,"p_min")
		HX_STACK_ARG(p_max,"p_max")
		HX_STACK_LINE(436)
		this->min = p_min;
		HX_STACK_LINE(436)
		this->max = p_max;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SAPInterval_obj,Set,(void))

bool SAPInterval_obj::Overlap( ::haxor::ds::SAPInterval p_interval){
	HX_STACK_FRAME("haxor.ds.SAPInterval","Overlap",0x73af39ad,"haxor.ds.SAPInterval.Overlap","haxor/ds/SAP.hx",443,0xbaeeb06f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_interval,"p_interval")
	HX_STACK_LINE(443)
	Float tmp = p_interval->min;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(443)
	Float tmp1 = this->min;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(443)
	bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(443)
	if ((tmp2)){
		HX_STACK_LINE(443)
		Float tmp3 = p_interval->min;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(443)
		Float tmp4 = this->max;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(443)
		bool tmp5 = (tmp3 <= tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(443)
		return tmp5;
	}
	HX_STACK_LINE(443)
	Float tmp3 = p_interval->max;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(443)
	Float tmp4 = this->min;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(443)
	bool tmp5 = (tmp3 >= tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(443)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(SAPInterval_obj,Overlap,return )

::String SAPInterval_obj::ToString( hx::Null< int >  __o_p_places){
int p_places = __o_p_places.Default(2);
	HX_STACK_FRAME("haxor.ds.SAPInterval","ToString",0xb8e73bc6,"haxor.ds.SAPInterval.ToString","haxor/ds/SAP.hx",449,0xbaeeb06f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_places,"p_places")
{
		HX_STACK_LINE(449)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(449)
		{
			HX_STACK_LINE(449)
			int tmp1 = p_places;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(449)
			Float tmp2 = ::Math_obj::pow((int)10,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(449)
			Float d = tmp2;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(449)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(449)
			{
				HX_STACK_LINE(449)
				Float tmp4 = this->min;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(449)
				Float tmp5 = d;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(449)
				Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(449)
				Float p_v = tmp6;		HX_STACK_VAR(p_v,"p_v");
				HX_STACK_LINE(449)
				Float tmp7 = p_v;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(449)
				bool tmp8 = (p_v < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(449)
				Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(449)
				if ((tmp8)){
					HX_STACK_LINE(449)
					tmp9 = ((Float)-0.5);
				}
				else{
					HX_STACK_LINE(449)
					tmp9 = ((Float)0.5);
				}
				HX_STACK_LINE(449)
				Float tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(449)
				int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(449)
				tmp3 = ((Float)(tmp11));
			}
			HX_STACK_LINE(449)
			Float tmp4 = d;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(449)
			tmp = (Float(tmp3) / Float(tmp4));
		}
		HX_STACK_LINE(449)
		::String tmp1 = (HX_HCSTRING("[","\x5b","\x00","\x00","\x00") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(449)
		::String tmp2 = (tmp1 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(449)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(449)
		{
			HX_STACK_LINE(449)
			int tmp4 = p_places;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(449)
			Float tmp5 = ::Math_obj::pow((int)10,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(449)
			Float d = tmp5;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(449)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(449)
			{
				HX_STACK_LINE(449)
				Float tmp7 = this->max;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(449)
				Float tmp8 = d;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(449)
				Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(449)
				Float p_v = tmp9;		HX_STACK_VAR(p_v,"p_v");
				HX_STACK_LINE(449)
				Float tmp10 = p_v;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(449)
				bool tmp11 = (p_v < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(449)
				Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(449)
				if ((tmp11)){
					HX_STACK_LINE(449)
					tmp12 = ((Float)-0.5);
				}
				else{
					HX_STACK_LINE(449)
					tmp12 = ((Float)0.5);
				}
				HX_STACK_LINE(449)
				Float tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(449)
				int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(449)
				tmp6 = ((Float)(tmp14));
			}
			HX_STACK_LINE(449)
			Float tmp7 = d;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(449)
			tmp3 = (Float(tmp6) / Float(tmp7));
		}
		HX_STACK_LINE(449)
		::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(449)
		::String tmp5 = (tmp4 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(449)
		return tmp5;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(SAPInterval_obj,ToString,return )


SAPInterval_obj::SAPInterval_obj()
{
}

void SAPInterval_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SAPInterval);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(min,"min");
	HX_MARK_MEMBER_NAME(max,"max");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_END_CLASS();
}

void SAPInterval_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(min,"min");
	HX_VISIT_MEMBER_NAME(max,"max");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(data,"data");
}

Dynamic SAPInterval_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { return min; }
		if (HX_FIELD_EQ(inName,"max") ) { return max; }
		if (HX_FIELD_EQ(inName,"Set") ) { return Set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"prev") ) { return prev; }
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"Overlap") ) { return Overlap_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ToString") ) { return ToString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SAPInterval_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { min=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"max") ) { max=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::haxor::ds::SAPInterval >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast< ::haxor::ds::SAPInterval >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SAPInterval_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void SAPInterval_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("min","\x92","\x11","\x53","\x00"));
	outFields->push(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	outFields->push(HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(SAPInterval_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(SAPInterval_obj,min),HX_HCSTRING("min","\x92","\x11","\x53","\x00")},
	{hx::fsFloat,(int)offsetof(SAPInterval_obj,max),HX_HCSTRING("max","\xa4","\x0a","\x53","\x00")},
	{hx::fsObject /*::haxor::ds::SAPInterval*/ ,(int)offsetof(SAPInterval_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsObject /*::haxor::ds::SAPInterval*/ ,(int)offsetof(SAPInterval_obj,prev),HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(SAPInterval_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("min","\x92","\x11","\x53","\x00"),
	HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("Set","\x82","\x53","\x3f","\x00"),
	HX_HCSTRING("Overlap","\x67","\x6b","\x61","\x76"),
	HX_HCSTRING("ToString","\xcc","\x8c","\x20","\x12"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SAPInterval_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SAPInterval_obj::__mClass,"__mClass");
};

#endif

hx::Class SAPInterval_obj::__mClass;

void SAPInterval_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.ds.SAPInterval","\xb4","\x78","\x47","\x1c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &SAPInterval_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SAPInterval_obj >;
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
