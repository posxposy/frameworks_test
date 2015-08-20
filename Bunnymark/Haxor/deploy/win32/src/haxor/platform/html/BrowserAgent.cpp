#include <hxcpp.h>

#ifndef INCLUDED_haxor_platform_html_BrowserAgent
#include <haxor/platform/html/BrowserAgent.h>
#endif
namespace haxor{
namespace platform{
namespace html{

Void BrowserAgent_obj::__construct()
{
HX_STACK_FRAME("haxor.platform.html.BrowserAgent","new",0xd34432a3,"haxor.platform.html.BrowserAgent.new","haxor/platform/html/BrowserAgent.hx",156,0x7686032c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(157)
	this->agent = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(158)
	this->name = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(159)
	this->version = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(160)
	this->OSVersion = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(161)
	this->OSMajorVersion = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(162)
	this->phone = false;
	HX_STACK_LINE(163)
	this->tablet = false;
	HX_STACK_LINE(164)
	this->opera = false;
	HX_STACK_LINE(165)
	this->ie = false;
	HX_STACK_LINE(166)
	this->windowsPhone = false;
	HX_STACK_LINE(167)
	this->chrome = false;
	HX_STACK_LINE(168)
	this->sailfish = false;
	HX_STACK_LINE(169)
	this->seamonkey = false;
	HX_STACK_LINE(170)
	this->silk = false;
	HX_STACK_LINE(171)
	this->phantom = false;
	HX_STACK_LINE(172)
	this->blackberry = false;
	HX_STACK_LINE(173)
	this->webOS = false;
	HX_STACK_LINE(174)
	this->bada = false;
	HX_STACK_LINE(175)
	this->tizen = false;
	HX_STACK_LINE(176)
	this->safari = false;
	HX_STACK_LINE(177)
	this->webkit = false;
	HX_STACK_LINE(178)
	this->gecko = false;
	HX_STACK_LINE(179)
	this->android = false;
	HX_STACK_LINE(180)
	this->ios = false;
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/platform/html/BrowserAgent.hx",182,0x7686032c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(182)
	Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(182)
	this->iosdevice = tmp;
}
;
	return null();
}

//BrowserAgent_obj::~BrowserAgent_obj() { }

Dynamic BrowserAgent_obj::__CreateEmpty() { return  new BrowserAgent_obj; }
hx::ObjectPtr< BrowserAgent_obj > BrowserAgent_obj::__new()
{  hx::ObjectPtr< BrowserAgent_obj > _result_ = new BrowserAgent_obj();
	_result_->__construct();
	return _result_;}

Dynamic BrowserAgent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BrowserAgent_obj > _result_ = new BrowserAgent_obj();
	_result_->__construct();
	return _result_;}


BrowserAgent_obj::BrowserAgent_obj()
{
}

void BrowserAgent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BrowserAgent);
	HX_MARK_MEMBER_NAME(agent,"agent");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(version,"version");
	HX_MARK_MEMBER_NAME(OSVersion,"OSVersion");
	HX_MARK_MEMBER_NAME(OSMajorVersion,"OSMajorVersion");
	HX_MARK_MEMBER_NAME(iosdevice,"iosdevice");
	HX_MARK_MEMBER_NAME(tablet,"tablet");
	HX_MARK_MEMBER_NAME(phone,"phone");
	HX_MARK_MEMBER_NAME(mobile,"mobile");
	HX_MARK_MEMBER_NAME(opera,"opera");
	HX_MARK_MEMBER_NAME(ie,"ie");
	HX_MARK_MEMBER_NAME(windowsPhone,"windowsPhone");
	HX_MARK_MEMBER_NAME(chrome,"chrome");
	HX_MARK_MEMBER_NAME(firefox,"firefox");
	HX_MARK_MEMBER_NAME(sailfish,"sailfish");
	HX_MARK_MEMBER_NAME(seamonkey,"seamonkey");
	HX_MARK_MEMBER_NAME(silk,"silk");
	HX_MARK_MEMBER_NAME(phantom,"phantom");
	HX_MARK_MEMBER_NAME(blackberry,"blackberry");
	HX_MARK_MEMBER_NAME(webOS,"webOS");
	HX_MARK_MEMBER_NAME(bada,"bada");
	HX_MARK_MEMBER_NAME(tizen,"tizen");
	HX_MARK_MEMBER_NAME(safari,"safari");
	HX_MARK_MEMBER_NAME(webkit,"webkit");
	HX_MARK_MEMBER_NAME(gecko,"gecko");
	HX_MARK_MEMBER_NAME(android,"android");
	HX_MARK_MEMBER_NAME(ios,"ios");
	HX_MARK_END_CLASS();
}

void BrowserAgent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(agent,"agent");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(version,"version");
	HX_VISIT_MEMBER_NAME(OSVersion,"OSVersion");
	HX_VISIT_MEMBER_NAME(OSMajorVersion,"OSMajorVersion");
	HX_VISIT_MEMBER_NAME(iosdevice,"iosdevice");
	HX_VISIT_MEMBER_NAME(tablet,"tablet");
	HX_VISIT_MEMBER_NAME(phone,"phone");
	HX_VISIT_MEMBER_NAME(mobile,"mobile");
	HX_VISIT_MEMBER_NAME(opera,"opera");
	HX_VISIT_MEMBER_NAME(ie,"ie");
	HX_VISIT_MEMBER_NAME(windowsPhone,"windowsPhone");
	HX_VISIT_MEMBER_NAME(chrome,"chrome");
	HX_VISIT_MEMBER_NAME(firefox,"firefox");
	HX_VISIT_MEMBER_NAME(sailfish,"sailfish");
	HX_VISIT_MEMBER_NAME(seamonkey,"seamonkey");
	HX_VISIT_MEMBER_NAME(silk,"silk");
	HX_VISIT_MEMBER_NAME(phantom,"phantom");
	HX_VISIT_MEMBER_NAME(blackberry,"blackberry");
	HX_VISIT_MEMBER_NAME(webOS,"webOS");
	HX_VISIT_MEMBER_NAME(bada,"bada");
	HX_VISIT_MEMBER_NAME(tizen,"tizen");
	HX_VISIT_MEMBER_NAME(safari,"safari");
	HX_VISIT_MEMBER_NAME(webkit,"webkit");
	HX_VISIT_MEMBER_NAME(gecko,"gecko");
	HX_VISIT_MEMBER_NAME(android,"android");
	HX_VISIT_MEMBER_NAME(ios,"ios");
}

Dynamic BrowserAgent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ie") ) { return ie; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ios") ) { return ios; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"silk") ) { return silk; }
		if (HX_FIELD_EQ(inName,"bada") ) { return bada; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"agent") ) { return agent; }
		if (HX_FIELD_EQ(inName,"phone") ) { return phone; }
		if (HX_FIELD_EQ(inName,"opera") ) { return opera; }
		if (HX_FIELD_EQ(inName,"webOS") ) { return webOS; }
		if (HX_FIELD_EQ(inName,"tizen") ) { return tizen; }
		if (HX_FIELD_EQ(inName,"gecko") ) { return gecko; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"tablet") ) { return tablet; }
		if (HX_FIELD_EQ(inName,"mobile") ) { return mobile; }
		if (HX_FIELD_EQ(inName,"chrome") ) { return chrome; }
		if (HX_FIELD_EQ(inName,"safari") ) { return safari; }
		if (HX_FIELD_EQ(inName,"webkit") ) { return webkit; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { return version; }
		if (HX_FIELD_EQ(inName,"firefox") ) { return firefox; }
		if (HX_FIELD_EQ(inName,"phantom") ) { return phantom; }
		if (HX_FIELD_EQ(inName,"android") ) { return android; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"sailfish") ) { return sailfish; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"OSVersion") ) { return OSVersion; }
		if (HX_FIELD_EQ(inName,"iosdevice") ) { return iosdevice; }
		if (HX_FIELD_EQ(inName,"seamonkey") ) { return seamonkey; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"blackberry") ) { return blackberry; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"windowsPhone") ) { return windowsPhone; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"OSMajorVersion") ) { return OSMajorVersion; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BrowserAgent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ie") ) { ie=inValue.Cast< bool >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ios") ) { ios=inValue.Cast< bool >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"silk") ) { silk=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bada") ) { bada=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"agent") ) { agent=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"phone") ) { phone=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"opera") ) { opera=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"webOS") ) { webOS=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tizen") ) { tizen=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gecko") ) { gecko=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"tablet") ) { tablet=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mobile") ) { mobile=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"chrome") ) { chrome=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"safari") ) { safari=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"webkit") ) { webkit=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"firefox") ) { firefox=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"phantom") ) { phantom=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"android") ) { android=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"sailfish") ) { sailfish=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"OSVersion") ) { OSVersion=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iosdevice") ) { iosdevice=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"seamonkey") ) { seamonkey=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"blackberry") ) { blackberry=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"windowsPhone") ) { windowsPhone=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"OSMajorVersion") ) { OSMajorVersion=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BrowserAgent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void BrowserAgent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("agent","\xc5","\x42","\x40","\x1e"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"));
	outFields->push(HX_HCSTRING("OSVersion","\x54","\x76","\x1d","\xee"));
	outFields->push(HX_HCSTRING("OSMajorVersion","\x23","\x12","\xfc","\x23"));
	outFields->push(HX_HCSTRING("iosdevice","\x23","\xc2","\x7f","\x71"));
	outFields->push(HX_HCSTRING("tablet","\xa6","\x54","\x5d","\x7c"));
	outFields->push(HX_HCSTRING("phone","\x6e","\xc3","\xf3","\xc1"));
	outFields->push(HX_HCSTRING("mobile","\x62","\xac","\x77","\xbf"));
	outFields->push(HX_HCSTRING("opera","\xd3","\x50","\xcf","\x33"));
	outFields->push(HX_HCSTRING("ie","\xdc","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("windowsPhone","\xeb","\xd9","\x07","\xe3"));
	outFields->push(HX_HCSTRING("chrome","\x7a","\xf9","\xaf","\xc2"));
	outFields->push(HX_HCSTRING("firefox","\x19","\xa9","\xc4","\x73"));
	outFields->push(HX_HCSTRING("sailfish","\x09","\xa1","\xc6","\xe1"));
	outFields->push(HX_HCSTRING("seamonkey","\x22","\xeb","\x62","\xdc"));
	outFields->push(HX_HCSTRING("silk","\x95","\x94","\x53","\x4c"));
	outFields->push(HX_HCSTRING("phantom","\xcd","\x9e","\x6d","\xe9"));
	outFields->push(HX_HCSTRING("blackberry","\xb7","\x40","\xd2","\xd3"));
	outFields->push(HX_HCSTRING("webOS","\xb8","\x36","\xbc","\xc7"));
	outFields->push(HX_HCSTRING("bada","\xfc","\xda","\x10","\x41"));
	outFields->push(HX_HCSTRING("tizen","\x0e","\x9d","\x3f","\x10"));
	outFields->push(HX_HCSTRING("safari","\x40","\x85","\x9e","\x18"));
	outFields->push(HX_HCSTRING("webkit","\x02","\xfd","\x08","\xfd"));
	outFields->push(HX_HCSTRING("gecko","\x69","\xc9","\x53","\x91"));
	outFields->push(HX_HCSTRING("android","\x2f","\x9b","\xa4","\x9c"));
	outFields->push(HX_HCSTRING("ios","\xcd","\x0d","\x50","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(BrowserAgent_obj,agent),HX_HCSTRING("agent","\xc5","\x42","\x40","\x1e")},
	{hx::fsString,(int)offsetof(BrowserAgent_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsString,(int)offsetof(BrowserAgent_obj,version),HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c")},
	{hx::fsString,(int)offsetof(BrowserAgent_obj,OSVersion),HX_HCSTRING("OSVersion","\x54","\x76","\x1d","\xee")},
	{hx::fsString,(int)offsetof(BrowserAgent_obj,OSMajorVersion),HX_HCSTRING("OSMajorVersion","\x23","\x12","\xfc","\x23")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BrowserAgent_obj,iosdevice),HX_HCSTRING("iosdevice","\x23","\xc2","\x7f","\x71")},
	{hx::fsBool,(int)offsetof(BrowserAgent_obj,tablet),HX_HCSTRING("tablet","\xa6","\x54","\x5d","\x7c")},
	{hx::fsBool,(int)offsetof(BrowserAgent_obj,phone),HX_HCSTRING("phone","\x6e","\xc3","\xf3","\xc1")},
	{hx::fsBool,(int)offsetof(BrowserAgent_obj,mobile),HX_HCSTRING("mobile","\x62","\xac","\x77","\xbf")},
	{hx::fsBool,(int)offsetof(BrowserAgent_obj,opera),HX_HCSTRING("opera","\xd3","\x50","\xcf","\x33")},
	{hx::fsBool,(int)offsetof(BrowserAgent_obj,ie),HX_HCSTRING("ie","\xdc","\x5b","\x00","\x00")},
	{hx::fsBool,(int)offsetof(BrowserAgent_obj,windowsPhone),HX_HCSTRING("windowsPhone","\xeb","\xd9","\x07","\xe3")},
	{hx::fsBool,(int)offsetof(BrowserAgent_obj,chrome),HX_HCSTRING("chrome","\x7a","\xf9","\xaf","\xc2")},
	{hx::fsBool,(int)offsetof(BrowserAgent_obj,firefox),HX_HCSTRING("firefox","\x19","\xa9","\xc4","\x73")},
	{hx::fsBool,(int)offsetof(BrowserAgent_obj,sailfish),HX_HCSTRING("sailfish","\x09","\xa1","\xc6","\xe1")},
	{hx::fsBool,(int)offsetof(BrowserAgent_obj,seamonkey),HX_HCSTRING("seamonkey","\x22","\xeb","\x62","\xdc")},
	{hx::fsBool,(int)offsetof(BrowserAgent_obj,silk),HX_HCSTRING("silk","\x95","\x94","\x53","\x4c")},
	{hx::fsBool,(int)offsetof(BrowserAgent_obj,phantom),HX_HCSTRING("phantom","\xcd","\x9e","\x6d","\xe9")},
	{hx::fsBool,(int)offsetof(BrowserAgent_obj,blackberry),HX_HCSTRING("blackberry","\xb7","\x40","\xd2","\xd3")},
	{hx::fsBool,(int)offsetof(BrowserAgent_obj,webOS),HX_HCSTRING("webOS","\xb8","\x36","\xbc","\xc7")},
	{hx::fsBool,(int)offsetof(BrowserAgent_obj,bada),HX_HCSTRING("bada","\xfc","\xda","\x10","\x41")},
	{hx::fsBool,(int)offsetof(BrowserAgent_obj,tizen),HX_HCSTRING("tizen","\x0e","\x9d","\x3f","\x10")},
	{hx::fsBool,(int)offsetof(BrowserAgent_obj,safari),HX_HCSTRING("safari","\x40","\x85","\x9e","\x18")},
	{hx::fsBool,(int)offsetof(BrowserAgent_obj,webkit),HX_HCSTRING("webkit","\x02","\xfd","\x08","\xfd")},
	{hx::fsBool,(int)offsetof(BrowserAgent_obj,gecko),HX_HCSTRING("gecko","\x69","\xc9","\x53","\x91")},
	{hx::fsBool,(int)offsetof(BrowserAgent_obj,android),HX_HCSTRING("android","\x2f","\x9b","\xa4","\x9c")},
	{hx::fsBool,(int)offsetof(BrowserAgent_obj,ios),HX_HCSTRING("ios","\xcd","\x0d","\x50","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("agent","\xc5","\x42","\x40","\x1e"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"),
	HX_HCSTRING("OSVersion","\x54","\x76","\x1d","\xee"),
	HX_HCSTRING("OSMajorVersion","\x23","\x12","\xfc","\x23"),
	HX_HCSTRING("iosdevice","\x23","\xc2","\x7f","\x71"),
	HX_HCSTRING("tablet","\xa6","\x54","\x5d","\x7c"),
	HX_HCSTRING("phone","\x6e","\xc3","\xf3","\xc1"),
	HX_HCSTRING("mobile","\x62","\xac","\x77","\xbf"),
	HX_HCSTRING("opera","\xd3","\x50","\xcf","\x33"),
	HX_HCSTRING("ie","\xdc","\x5b","\x00","\x00"),
	HX_HCSTRING("windowsPhone","\xeb","\xd9","\x07","\xe3"),
	HX_HCSTRING("chrome","\x7a","\xf9","\xaf","\xc2"),
	HX_HCSTRING("firefox","\x19","\xa9","\xc4","\x73"),
	HX_HCSTRING("sailfish","\x09","\xa1","\xc6","\xe1"),
	HX_HCSTRING("seamonkey","\x22","\xeb","\x62","\xdc"),
	HX_HCSTRING("silk","\x95","\x94","\x53","\x4c"),
	HX_HCSTRING("phantom","\xcd","\x9e","\x6d","\xe9"),
	HX_HCSTRING("blackberry","\xb7","\x40","\xd2","\xd3"),
	HX_HCSTRING("webOS","\xb8","\x36","\xbc","\xc7"),
	HX_HCSTRING("bada","\xfc","\xda","\x10","\x41"),
	HX_HCSTRING("tizen","\x0e","\x9d","\x3f","\x10"),
	HX_HCSTRING("safari","\x40","\x85","\x9e","\x18"),
	HX_HCSTRING("webkit","\x02","\xfd","\x08","\xfd"),
	HX_HCSTRING("gecko","\x69","\xc9","\x53","\x91"),
	HX_HCSTRING("android","\x2f","\x9b","\xa4","\x9c"),
	HX_HCSTRING("ios","\xcd","\x0d","\x50","\x00"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BrowserAgent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BrowserAgent_obj::__mClass,"__mClass");
};

#endif

hx::Class BrowserAgent_obj::__mClass;

void BrowserAgent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.platform.html.BrowserAgent","\x31","\xa5","\xaf","\xdc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &BrowserAgent_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BrowserAgent_obj >;
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
} // end namespace platform
} // end namespace html
