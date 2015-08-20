#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif

Void StringTools_obj::__construct()
{
	return null();
}

//StringTools_obj::~StringTools_obj() { }

Dynamic StringTools_obj::__CreateEmpty() { return  new StringTools_obj; }
hx::ObjectPtr< StringTools_obj > StringTools_obj::__new()
{  hx::ObjectPtr< StringTools_obj > _result_ = new StringTools_obj();
	_result_->__construct();
	return _result_;}

Dynamic StringTools_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StringTools_obj > _result_ = new StringTools_obj();
	_result_->__construct();
	return _result_;}

::String StringTools_obj::urlEncode( ::String s){
	HX_STACK_FRAME("StringTools","urlEncode",0x06afdce1,"StringTools.urlEncode","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/StringTools.hx",39,0x56651b43)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(47)
	::String tmp = s.__URLEncode();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,urlEncode,return )

::String StringTools_obj::htmlEscape( ::String s,Dynamic quotes){
	HX_STACK_FRAME("StringTools","htmlEscape",0x0e1a5dd0,"StringTools.htmlEscape","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/StringTools.hx",100,0x56651b43)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(quotes,"quotes")
	HX_STACK_LINE(101)
	Array< ::String > tmp = s.split(HX_HCSTRING("&","\x26","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(101)
	::String tmp1 = tmp->join(HX_HCSTRING("&amp;","\xdd","\xd4","\xaa","\x21"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(101)
	Array< ::String > tmp2 = tmp1.split(HX_HCSTRING("<","\x3c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(101)
	::String tmp3 = tmp2->join(HX_HCSTRING("&lt;","\x4d","\x74","\x70","\x19"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(101)
	Array< ::String > tmp4 = tmp3.split(HX_HCSTRING(">","\x3e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(101)
	::String tmp5 = tmp4->join(HX_HCSTRING("&gt;","\x08","\xa9","\x6c","\x19"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(101)
	s = tmp5;
	HX_STACK_LINE(102)
	Dynamic tmp6 = quotes;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(102)
	::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(102)
	if ((tmp6)){
		HX_STACK_LINE(102)
		Array< ::String > tmp8 = s.split(HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(102)
		::String tmp9 = tmp8->join(HX_HCSTRING("&quot;","\x2c","\xd9","\x81","\x8f"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(102)
		Array< ::String > tmp10 = tmp9.split(HX_HCSTRING("'","\x27","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(102)
		tmp7 = tmp10->join(HX_HCSTRING("&#039;","\x62","\x26","\x77","\x78"));
	}
	else{
		HX_STACK_LINE(102)
		tmp7 = s;
	}
	HX_STACK_LINE(102)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,htmlEscape,return )

bool StringTools_obj::isSpace( ::String s,int pos){
	HX_STACK_FRAME("StringTools","isSpace",0xe0290778,"StringTools.isSpace","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/StringTools.hx",186,0x56651b43)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(190)
	int tmp = pos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(190)
	Dynamic tmp1 = s.charCodeAt(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(190)
	Dynamic c = tmp1;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(191)
	bool tmp2 = (c > (int)8);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(191)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(191)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(191)
	if ((tmp3)){
		HX_STACK_LINE(191)
		tmp4 = (c < (int)14);
	}
	else{
		HX_STACK_LINE(191)
		tmp4 = false;
	}
	HX_STACK_LINE(191)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(191)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(191)
	if ((tmp5)){
		HX_STACK_LINE(191)
		tmp6 = (c == (int)32);
	}
	else{
		HX_STACK_LINE(191)
		tmp6 = true;
	}
	HX_STACK_LINE(191)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,isSpace,return )

::String StringTools_obj::ltrim( ::String s){
	HX_STACK_FRAME("StringTools","ltrim",0x24d2234a,"StringTools.ltrim","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/StringTools.hx",203,0x56651b43)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(207)
	int l = s.length;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(208)
	int r = (int)0;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(209)
	while((true)){
		HX_STACK_LINE(209)
		bool tmp = (r < l);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(209)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(209)
		if ((tmp)){
			HX_STACK_LINE(209)
			::String tmp2 = s;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(209)
			int tmp3 = r;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(209)
			::String tmp4 = tmp2;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(209)
			int tmp5 = tmp3;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(209)
			tmp1 = ::StringTools_obj::isSpace(tmp4,tmp5);
		}
		else{
			HX_STACK_LINE(209)
			tmp1 = false;
		}
		HX_STACK_LINE(209)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(209)
		if ((tmp2)){
			HX_STACK_LINE(209)
			break;
		}
		HX_STACK_LINE(210)
		(r)++;
	}
	HX_STACK_LINE(212)
	bool tmp = (r > (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(212)
	if ((tmp)){
		HX_STACK_LINE(213)
		int tmp1 = r;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(213)
		int tmp2 = (l - r);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(213)
		::String tmp3 = s.substr(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(213)
		return tmp3;
	}
	else{
		HX_STACK_LINE(215)
		::String tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(215)
		return tmp1;
	}
	HX_STACK_LINE(212)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,ltrim,return )

::String StringTools_obj::rtrim( ::String s){
	HX_STACK_FRAME("StringTools","rtrim",0x99399e50,"StringTools.rtrim","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/StringTools.hx",228,0x56651b43)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(232)
	int l = s.length;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(233)
	int r = (int)0;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(234)
	while((true)){
		HX_STACK_LINE(234)
		bool tmp = (r < l);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(234)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(234)
		if ((tmp)){
			HX_STACK_LINE(234)
			::String tmp2 = s;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(234)
			int tmp3 = (l - r);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(234)
			int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(234)
			int tmp5 = (tmp4 - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(234)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(234)
			::String tmp7 = tmp2;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(234)
			int tmp8 = tmp6;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(234)
			tmp1 = ::StringTools_obj::isSpace(tmp7,tmp8);
		}
		else{
			HX_STACK_LINE(234)
			tmp1 = false;
		}
		HX_STACK_LINE(234)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(234)
		if ((tmp2)){
			HX_STACK_LINE(234)
			break;
		}
		HX_STACK_LINE(235)
		(r)++;
	}
	HX_STACK_LINE(237)
	bool tmp = (r > (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(237)
	if ((tmp)){
		HX_STACK_LINE(238)
		int tmp1 = (l - r);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(238)
		::String tmp2 = s.substr((int)0,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(238)
		return tmp2;
	}
	else{
		HX_STACK_LINE(240)
		::String tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(240)
		return tmp1;
	}
	HX_STACK_LINE(237)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,rtrim,return )

::String StringTools_obj::trim( ::String s){
	HX_STACK_FRAME("StringTools","trim",0x2908d066,"StringTools.trim","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/StringTools.hx",250,0x56651b43)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(256)
	::String tmp = s;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(256)
	::String tmp1 = ::StringTools_obj::rtrim(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(256)
	::String tmp2 = ::StringTools_obj::ltrim(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(256)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,trim,return )

::String StringTools_obj::lpad( ::String s,::String c,int l){
	HX_STACK_FRAME("StringTools","lpad",0x23bd8feb,"StringTools.lpad","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/StringTools.hx",272,0x56651b43)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(l,"l")
	HX_STACK_LINE(273)
	bool tmp = (c.length <= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(273)
	if ((tmp)){
		HX_STACK_LINE(274)
		::String tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(274)
		return tmp1;
	}
	HX_STACK_LINE(276)
	while((true)){
		HX_STACK_LINE(276)
		bool tmp1 = (s.length < l);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(276)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(276)
		if ((tmp2)){
			HX_STACK_LINE(276)
			break;
		}
		HX_STACK_LINE(277)
		::String tmp3 = (c + s);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(277)
		s = tmp3;
	}
	HX_STACK_LINE(279)
	::String tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(279)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StringTools_obj,lpad,return )

::String StringTools_obj::replace( ::String s,::String sub,::String by){
	HX_STACK_FRAME("StringTools","replace",0x6d651f30,"StringTools.replace","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/StringTools.hx",315,0x56651b43)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(sub,"sub")
	HX_STACK_ARG(by,"by")
	HX_STACK_LINE(327)
	::String tmp = sub;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(327)
	Array< ::String > tmp1 = s.split(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(327)
	::String tmp2 = by;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(327)
	::String tmp3 = tmp1->join(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(327)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StringTools_obj,replace,return )

::String StringTools_obj::hex( int n,Dynamic digits){
	HX_STACK_FRAME("StringTools","hex",0xd91debd7,"StringTools.hex","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/StringTools.hx",337,0x56651b43)
	HX_STACK_ARG(n,"n")
	HX_STACK_ARG(digits,"digits")
	HX_STACK_LINE(343)
	::String s = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(344)
	::String hexChars = HX_HCSTRING("0123456789ABCDEF","\x68","\x2a","\x58","\xa2");		HX_STACK_VAR(hexChars,"hexChars");
	HX_STACK_LINE(345)
	while((true)){
		HX_STACK_LINE(346)
		int tmp = (int(n) & int((int)15));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(346)
		::String tmp1 = hexChars.charAt(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(346)
		::String tmp2 = s;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(346)
		::String tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(346)
		s = tmp3;
		HX_STACK_LINE(347)
		hx::UShrEq(n,(int)4);
		HX_STACK_LINE(348)
		bool tmp4 = (n > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(348)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(345)
		if ((tmp5)){
			HX_STACK_LINE(345)
			break;
		}
	}
	HX_STACK_LINE(358)
	bool tmp = (digits != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(358)
	if ((tmp)){
		HX_STACK_LINE(359)
		while((true)){
			HX_STACK_LINE(359)
			bool tmp1 = (s.length < digits);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(359)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(359)
			if ((tmp2)){
				HX_STACK_LINE(359)
				break;
			}
			HX_STACK_LINE(360)
			::String tmp3 = (HX_HCSTRING("0","\x30","\x00","\x00","\x00") + s);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(360)
			s = tmp3;
		}
	}
	HX_STACK_LINE(362)
	::String tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(362)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,hex,return )


StringTools_obj::StringTools_obj()
{
}

bool StringTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"hex") ) { outValue = hex_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"trim") ) { outValue = trim_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lpad") ) { outValue = lpad_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ltrim") ) { outValue = ltrim_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"rtrim") ) { outValue = rtrim_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isSpace") ) { outValue = isSpace_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"replace") ) { outValue = replace_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"urlEncode") ) { outValue = urlEncode_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"htmlEscape") ) { outValue = htmlEscape_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StringTools_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StringTools_obj::__mClass,"__mClass");
};

#endif

hx::Class StringTools_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("urlEncode","\xe5","\x4e","\x52","\x9a"),
	HX_HCSTRING("htmlEscape","\x4c","\xaf","\x9b","\xa8"),
	HX_HCSTRING("isSpace","\x7c","\x30","\xec","\x1d"),
	HX_HCSTRING("ltrim","\x4e","\x43","\x4a","\x7c"),
	HX_HCSTRING("rtrim","\x54","\xbe","\xb1","\xf0"),
	HX_HCSTRING("trim","\xe2","\x9c","\x03","\x4d"),
	HX_HCSTRING("lpad","\x67","\x5c","\xb8","\x47"),
	HX_HCSTRING("replace","\x34","\x48","\x28","\xab"),
	HX_HCSTRING("hex","\xdb","\x42","\x4f","\x00"),
	String(null()) };

void StringTools_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("StringTools","\x6a","\xdb","\x63","\x03");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StringTools_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< StringTools_obj >;
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

