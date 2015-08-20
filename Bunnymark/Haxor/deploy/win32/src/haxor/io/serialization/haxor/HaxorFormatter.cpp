#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_format_JsonPrinter
#include <haxe/format/JsonPrinter.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_Formatter
#include <haxor/io/serialization/Formatter.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_SerializedData
#include <haxor/io/serialization/SerializedData.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_SerializedField
#include <haxor/io/serialization/SerializedField.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_haxor_HaxorFormatter
#include <haxor/io/serialization/haxor/HaxorFormatter.h>
#endif
namespace haxor{
namespace io{
namespace serialization{
namespace haxor{

Void HaxorFormatter_obj::__construct(hx::Null< bool >  __o_p_has_tabs)
{
HX_STACK_FRAME("haxor.io.serialization.haxor.HaxorFormatter","new",0x02842900,"haxor.io.serialization.haxor.HaxorFormatter.new","haxor/io/serialization/haxor/HaxorFormatter.hx",50,0x33f70ace)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_p_has_tabs,"p_has_tabs")
bool p_has_tabs = __o_p_has_tabs.Default(false);
{
	HX_STACK_LINE(51)
	super::__construct();
	HX_STACK_LINE(52)
	this->m_has_tabs = p_has_tabs;
}
;
	return null();
}

//HaxorFormatter_obj::~HaxorFormatter_obj() { }

Dynamic HaxorFormatter_obj::__CreateEmpty() { return  new HaxorFormatter_obj; }
hx::ObjectPtr< HaxorFormatter_obj > HaxorFormatter_obj::__new(hx::Null< bool >  __o_p_has_tabs)
{  hx::ObjectPtr< HaxorFormatter_obj > _result_ = new HaxorFormatter_obj();
	_result_->__construct(__o_p_has_tabs);
	return _result_;}

Dynamic HaxorFormatter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HaxorFormatter_obj > _result_ = new HaxorFormatter_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Dynamic HaxorFormatter_obj::Deserialize( ::String p_data){
	HX_STACK_FRAME("haxor.io.serialization.haxor.HaxorFormatter","Deserialize",0x92921ebf,"haxor.io.serialization.haxor.HaxorFormatter.Deserialize","haxor/io/serialization/haxor/HaxorFormatter.hx",60,0x33f70ace)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_data,"p_data")
	HX_STACK_LINE(60)
	::haxe::format::JsonParser tmp = ::haxe::format::JsonParser_obj::__new(p_data);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(60)
	Dynamic tmp1 = tmp->parseRec();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(60)
	Dynamic tmp2 = this->DeserializeData(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(60)
	return tmp2;
}


::String HaxorFormatter_obj::OnSerialize( ::haxor::io::serialization::SerializedData p_root){
	HX_STACK_FRAME("haxor.io.serialization.haxor.HaxorFormatter","OnSerialize",0x8091d141,"haxor.io.serialization.haxor.HaxorFormatter.OnSerialize","haxor/io/serialization/haxor/HaxorFormatter.hx",68,0x33f70ace)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_root,"p_root")
	HX_STACK_LINE(69)
	::haxor::io::serialization::SerializedData tmp = p_root;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	this->Clean(tmp);
	HX_STACK_LINE(70)
	::haxor::io::serialization::SerializedData tmp1 = p_root;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(70)
	bool tmp2 = this->m_has_tabs;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(70)
	::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(70)
	if ((tmp2)){
		HX_STACK_LINE(70)
		tmp3 = HX_HCSTRING(" ","\x20","\x00","\x00","\x00");
	}
	else{
		HX_STACK_LINE(70)
		tmp3 = null();
	}

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 2; }
	Dynamic run(Dynamic k,Dynamic v){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxor/io/serialization/haxor/HaxorFormatter.hx",70,0x33f70ace)
		HX_STACK_ARG(k,"k")
		HX_STACK_ARG(v,"v")
		{
			HX_STACK_LINE(70)
			Dynamic tmp4 = v;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(70)
			return tmp4;
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_STACK_LINE(70)
	::String tmp4 = ::haxe::format::JsonPrinter_obj::print(tmp1, Dynamic(new _Function_1_1()),tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(70)
	return tmp4;
}


Void HaxorFormatter_obj::Clean( ::haxor::io::serialization::SerializedData n){
{
		HX_STACK_FRAME("haxor.io.serialization.haxor.HaxorFormatter","Clean",0x0cf8a209,"haxor.io.serialization.haxor.HaxorFormatter.Clean","haxor/io/serialization/haxor/HaxorFormatter.hx",78,0x33f70ace)
		HX_STACK_THIS(this)
		HX_STACK_ARG(n,"n")
		HX_STACK_LINE(79)
		::haxor::io::serialization::SerializedData tmp = n;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(79)
		bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::haxor::io::serialization::SerializedData >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(79)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(79)
		if ((tmp2)){
			HX_STACK_LINE(79)
			return null();
		}
		HX_STACK_LINE(85)
		{
			HX_STACK_LINE(85)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(85)
			int tmp3 = n->fields->length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(85)
			int _g = tmp3;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(85)
			while((true)){
				HX_STACK_LINE(85)
				bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(85)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(85)
				if ((tmp5)){
					HX_STACK_LINE(85)
					break;
				}
				HX_STACK_LINE(85)
				int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(85)
				int i = tmp6;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(87)
				::haxor::io::serialization::SerializedField tmp7 = n->fields->__get(i).StaticCast< ::haxor::io::serialization::SerializedField >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(87)
				::haxor::io::serialization::SerializedField f = tmp7;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(94)
				Dynamic tmp8 = f->value;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(94)
				bool tmp9 = ::Std_obj::is(tmp8,hx::ClassOf< Array<int> >());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(94)
				if ((tmp9)){
					HX_STACK_LINE(96)
					Array< ::Dynamic > nl = ((Array< ::Dynamic >)(f->value));		HX_STACK_VAR(nl,"nl");
					HX_STACK_LINE(97)
					{
						HX_STACK_LINE(97)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(97)
						int _g2 = nl->length;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(97)
						while((true)){
							HX_STACK_LINE(97)
							bool tmp10 = (_g3 < _g2);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(97)
							bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(97)
							if ((tmp11)){
								HX_STACK_LINE(97)
								break;
							}
							HX_STACK_LINE(97)
							int tmp12 = (_g3)++;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(97)
							int i1 = tmp12;		HX_STACK_VAR(i1,"i1");
							HX_STACK_LINE(97)
							::haxor::io::serialization::SerializedData tmp13 = nl->__get(i1).StaticCast< ::haxor::io::serialization::SerializedData >();		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(97)
							::haxor::io::serialization::SerializedData tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(97)
							this->Clean(tmp14);
						}
					}
					HX_STACK_LINE(98)
					return null();
				}
				HX_STACK_LINE(100)
				Dynamic tmp10 = f->value;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(100)
				this->Clean(tmp10);
			}
		}
		HX_STACK_LINE(102)
		{
			HX_STACK_LINE(102)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(102)
			int tmp3 = n->children->length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(102)
			int _g = tmp3;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(102)
			while((true)){
				HX_STACK_LINE(102)
				bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(102)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(102)
				if ((tmp5)){
					HX_STACK_LINE(102)
					break;
				}
				HX_STACK_LINE(102)
				int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(102)
				int i = tmp6;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(102)
				::haxor::io::serialization::SerializedData tmp7 = n->children->__get(i).StaticCast< ::haxor::io::serialization::SerializedData >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(102)
				::haxor::io::serialization::SerializedData tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(102)
				this->Clean(tmp8);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HaxorFormatter_obj,Clean,(void))

Dynamic HaxorFormatter_obj::Parse( ::String p_data){
	HX_STACK_FRAME("haxor.io.serialization.haxor.HaxorFormatter","Parse",0x81f2c0b3,"haxor.io.serialization.haxor.HaxorFormatter.Parse","haxor/io/serialization/haxor/HaxorFormatter.hx",29,0x33f70ace)
	HX_STACK_ARG(p_data,"p_data")
	HX_STACK_LINE(29)
	::haxor::io::serialization::haxor::HaxorFormatter tmp = ::haxor::io::serialization::haxor::HaxorFormatter_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	::haxor::io::serialization::haxor::HaxorFormatter fmt = tmp;		HX_STACK_VAR(fmt,"fmt");
	HX_STACK_LINE(29)
	::String tmp1 = p_data;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	Dynamic tmp2 = fmt->Deserialize(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(29)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HaxorFormatter_obj,Parse,return )

::String HaxorFormatter_obj::ToString( Dynamic p_target,hx::Null< bool >  __o_p_has_tabs){
bool p_has_tabs = __o_p_has_tabs.Default(false);
	HX_STACK_FRAME("haxor.io.serialization.haxor.HaxorFormatter","ToString",0x82caf02c,"haxor.io.serialization.haxor.HaxorFormatter.ToString","haxor/io/serialization/haxor/HaxorFormatter.hx",37,0x33f70ace)
	HX_STACK_ARG(p_target,"p_target")
	HX_STACK_ARG(p_has_tabs,"p_has_tabs")
{
		HX_STACK_LINE(37)
		::haxor::io::serialization::haxor::HaxorFormatter tmp = ::haxor::io::serialization::haxor::HaxorFormatter_obj::__new(p_has_tabs);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(37)
		::haxor::io::serialization::haxor::HaxorFormatter fmt = tmp;		HX_STACK_VAR(fmt,"fmt");
		HX_STACK_LINE(37)
		Dynamic tmp1 = p_target;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(37)
		::String tmp2 = fmt->Serialize(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(37)
		return tmp2;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HaxorFormatter_obj,ToString,return )


HaxorFormatter_obj::HaxorFormatter_obj()
{
}

Dynamic HaxorFormatter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"Clean") ) { return Clean_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_has_tabs") ) { return m_has_tabs; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"Deserialize") ) { return Deserialize_dyn(); }
		if (HX_FIELD_EQ(inName,"OnSerialize") ) { return OnSerialize_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool HaxorFormatter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"Parse") ) { outValue = Parse_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ToString") ) { outValue = ToString_dyn(); return true;  }
	}
	return false;
}

Dynamic HaxorFormatter_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"m_has_tabs") ) { m_has_tabs=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool HaxorFormatter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void HaxorFormatter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("m_has_tabs","\x15","\xa8","\x7d","\x20"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(HaxorFormatter_obj,m_has_tabs),HX_HCSTRING("m_has_tabs","\x15","\xa8","\x7d","\x20")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("m_has_tabs","\x15","\xa8","\x7d","\x20"),
	HX_HCSTRING("Deserialize","\x1f","\x26","\x68","\x0d"),
	HX_HCSTRING("OnSerialize","\xa1","\xd8","\x67","\xfb"),
	HX_HCSTRING("Clean","\x69","\xe1","\x88","\xdb"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HaxorFormatter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HaxorFormatter_obj::__mClass,"__mClass");
};

#endif

hx::Class HaxorFormatter_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("Parse","\x13","\x00","\x83","\x50"),
	HX_HCSTRING("ToString","\xcc","\x8c","\x20","\x12"),
	String(null()) };

void HaxorFormatter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.io.serialization.haxor.HaxorFormatter","\x0e","\xe9","\x83","\xf9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HaxorFormatter_obj::__GetStatic;
	__mClass->mSetStaticField = &HaxorFormatter_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HaxorFormatter_obj >;
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
} // end namespace serialization
} // end namespace haxor
