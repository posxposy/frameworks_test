#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_io_file_AssetFile
#include <haxor/io/file/AssetFile.h>
#endif
namespace haxor{
namespace io{
namespace file{

Void AssetFile_obj::__construct(::String p_name)
{
HX_STACK_FRAME("haxor.io.file.AssetFile","new",0x9fd51248,"haxor.io.file.AssetFile.new","haxor/io/file/AssetFile.hx",23,0xfd53a109)
HX_STACK_THIS(this)
HX_STACK_ARG(p_name,"p_name")
{
	HX_STACK_LINE(24)
	::String tmp = p_name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	super::__construct(tmp);
}
;
	return null();
}

//AssetFile_obj::~AssetFile_obj() { }

Dynamic AssetFile_obj::__CreateEmpty() { return  new AssetFile_obj; }
hx::ObjectPtr< AssetFile_obj > AssetFile_obj::__new(::String p_name)
{  hx::ObjectPtr< AssetFile_obj > _result_ = new AssetFile_obj();
	_result_->__construct(p_name);
	return _result_;}

Dynamic AssetFile_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetFile_obj > _result_ = new AssetFile_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Dynamic AssetFile_obj::get_asset( ){
	HX_STACK_FRAME("haxor.io.file.AssetFile","get_asset",0xc2be662f,"haxor.io.file.AssetFile.get_asset","haxor/io/file/AssetFile.hx",16,0xfd53a109)
	HX_STACK_THIS(this)
	HX_STACK_LINE(16)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AssetFile_obj,get_asset,return )

Array< Float > AssetFile_obj::stof32a( ::String v,::String __o_sep){
::String sep = __o_sep.Default(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
	HX_STACK_FRAME("haxor.io.file.AssetFile","stof32a",0xd1438fd2,"haxor.io.file.AssetFile.stof32a","haxor/io/file/AssetFile.hx",34,0xfd53a109)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_ARG(sep,"sep")
{
		HX_STACK_LINE(35)
		::String tmp = v;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(35)
		::String tmp1 = ::StringTools_obj::replace(tmp,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"),HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(35)
		::String tmp2 = ::StringTools_obj::trim(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(35)
		::String tmp3 = sep;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(35)
		Array< ::String > tmp4 = tmp2.split(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(35)
		Array< ::String > l = tmp4;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(36)
		Array< Float > tmp5 = Array_obj< Float >::__new();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(36)
		Array< Float > a = tmp5;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(37)
		{
			HX_STACK_LINE(37)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(37)
			int _g = l->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(37)
			while((true)){
				HX_STACK_LINE(37)
				bool tmp6 = (_g1 < _g);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(37)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(37)
				if ((tmp7)){
					HX_STACK_LINE(37)
					break;
				}
				HX_STACK_LINE(37)
				int tmp8 = (_g1)++;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(37)
				int i = tmp8;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(37)
				::String tmp9 = l->__get(i);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(37)
				Float tmp10 = ::Std_obj::parseFloat(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(37)
				a->push(tmp10);
			}
		}
		HX_STACK_LINE(38)
		Array< Float > tmp6 = a;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(38)
		return tmp6;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(AssetFile_obj,stof32a,return )

Array< int > AssetFile_obj::stoi16a( ::String v,::String __o_sep){
::String sep = __o_sep.Default(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
	HX_STACK_FRAME("haxor.io.file.AssetFile","stoi16a",0xd33db2a9,"haxor.io.file.AssetFile.stoi16a","haxor/io/file/AssetFile.hx",48,0xfd53a109)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_ARG(sep,"sep")
{
		HX_STACK_LINE(49)
		::String tmp = v;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(49)
		::String tmp1 = ::StringTools_obj::replace(tmp,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"),HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(49)
		::String tmp2 = ::StringTools_obj::trim(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(49)
		::String tmp3 = sep;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(49)
		Array< ::String > tmp4 = tmp2.split(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(49)
		Array< ::String > l = tmp4;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(50)
		Array< int > tmp5 = Array_obj< int >::__new();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(50)
		Array< int > a = tmp5;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(51)
		{
			HX_STACK_LINE(51)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(51)
			int _g = l->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(51)
			while((true)){
				HX_STACK_LINE(51)
				bool tmp6 = (_g1 < _g);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(51)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(51)
				if ((tmp7)){
					HX_STACK_LINE(51)
					break;
				}
				HX_STACK_LINE(51)
				int tmp8 = (_g1)++;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(51)
				int i = tmp8;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(51)
				::String tmp9 = l->__get(i);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(51)
				Dynamic tmp10 = ::Std_obj::parseInt(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(51)
				a->push(tmp10);
			}
		}
		HX_STACK_LINE(52)
		Array< int > tmp6 = a;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(52)
		return tmp6;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(AssetFile_obj,stoi16a,return )

Array< ::Dynamic > AssetFile_obj::stoi16ta( ::String v,int s,::String __o_sep){
::String sep = __o_sep.Default(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
	HX_STACK_FRAME("haxor.io.file.AssetFile","stoi16ta",0x02beb225,"haxor.io.file.AssetFile.stoi16ta","haxor/io/file/AssetFile.hx",63,0xfd53a109)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(sep,"sep")
{
		HX_STACK_LINE(64)
		::String tmp = v;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(64)
		::String tmp1 = ::StringTools_obj::replace(tmp,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"),HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(64)
		::String tmp2 = ::StringTools_obj::trim(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(64)
		::String tmp3 = sep;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(64)
		Array< ::String > tmp4 = tmp2.split(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(64)
		Array< ::String > l = tmp4;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(65)
		::String tl = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(tl,"tl");
		HX_STACK_LINE(66)
		Array< ::Dynamic > tmp5 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(66)
		Array< ::Dynamic > a = tmp5;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(67)
		Array< int > bf;		HX_STACK_VAR(bf,"bf");
		HX_STACK_LINE(68)
		int k = (int)0;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(70)
		while((true)){
			HX_STACK_LINE(70)
			bool tmp6 = (k < l->length);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(70)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(70)
			if ((tmp7)){
				HX_STACK_LINE(70)
				break;
			}
			HX_STACK_LINE(72)
			Array< int > tmp8 = Array_obj< int >::__new();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(72)
			bf = tmp8;
			HX_STACK_LINE(73)
			{
				HX_STACK_LINE(73)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(73)
				while((true)){
					HX_STACK_LINE(73)
					bool tmp9 = (_g < s);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(73)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(73)
					if ((tmp10)){
						HX_STACK_LINE(73)
						break;
					}
					HX_STACK_LINE(73)
					int tmp11 = (_g)++;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(73)
					int j = tmp11;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(73)
					Array< ::String > tmp12 = l;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(73)
					int tmp13 = (k)++;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(73)
					::String tmp14 = tmp12->__get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(73)
					Dynamic tmp15 = ::Std_obj::parseInt(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(73)
					bf->push(tmp15);
				}
			}
			HX_STACK_LINE(74)
			Array< int > tmp9 = bf;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(74)
			a->push(tmp9);
		}
		HX_STACK_LINE(76)
		Array< ::Dynamic > tmp6 = a;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(76)
		return tmp6;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(AssetFile_obj,stoi16ta,return )


AssetFile_obj::AssetFile_obj()
{
}

void AssetFile_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetFile);
	HX_MARK_MEMBER_NAME(asset,"asset");
	::haxor::core::Resource_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AssetFile_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(asset,"asset");
	::haxor::core::Resource_obj::__Visit(HX_VISIT_ARG);
}

Dynamic AssetFile_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"asset") ) { return inCallProp == hx::paccAlways ? get_asset() : asset; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"stof32a") ) { return stof32a_dyn(); }
		if (HX_FIELD_EQ(inName,"stoi16a") ) { return stoi16a_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"stoi16ta") ) { return stoi16ta_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_asset") ) { return get_asset_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AssetFile_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"asset") ) { asset=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool AssetFile_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void AssetFile_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("asset","\xf0","\x69","\x39","\x26"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AssetFile_obj,asset),HX_HCSTRING("asset","\xf0","\x69","\x39","\x26")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("asset","\xf0","\x69","\x39","\x26"),
	HX_HCSTRING("get_asset","\x47","\xc6","\xe2","\x69"),
	HX_HCSTRING("stof32a","\xea","\x39","\x97","\x3c"),
	HX_HCSTRING("stoi16a","\xc1","\x5c","\x91","\x3e"),
	HX_HCSTRING("stoi16ta","\x0d","\xdd","\x9f","\x80"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetFile_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetFile_obj::__mClass,"__mClass");
};

#endif

hx::Class AssetFile_obj::__mClass;

void AssetFile_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.io.file.AssetFile","\x56","\x8e","\x44","\xa4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &AssetFile_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AssetFile_obj >;
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
