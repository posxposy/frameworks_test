#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif

Void Sys_obj::__construct()
{
	return null();
}

//Sys_obj::~Sys_obj() { }

Dynamic Sys_obj::__CreateEmpty() { return  new Sys_obj; }
hx::ObjectPtr< Sys_obj > Sys_obj::__new()
{  hx::ObjectPtr< Sys_obj > _result_ = new Sys_obj();
	_result_->__construct();
	return _result_;}

Dynamic Sys_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sys_obj > _result_ = new Sys_obj();
	_result_->__construct();
	return _result_;}

Array< ::String > Sys_obj::args( ){
	HX_STACK_FRAME("Sys","args",0xeaeddc7e,"Sys.args","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/cpp/_std/Sys.hx",49,0xb33c9981)
	HX_STACK_LINE(50)
	Array< ::String > tmp = ::__get_args();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,args,return )

Void Sys_obj::sleep( Float seconds){
{
		HX_STACK_FRAME("Sys","sleep",0xfe70aad6,"Sys.sleep","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/cpp/_std/Sys.hx",64,0xb33c9981)
		HX_STACK_ARG(seconds,"seconds")
		HX_STACK_LINE(65)
		Float tmp = seconds;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(65)
		::Sys_obj::_sleep(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,sleep,(void))

::String Sys_obj::systemName( ){
	HX_STACK_FRAME("Sys","systemName",0xbea5b6bb,"Sys.systemName","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/cpp/_std/Sys.hx",80,0xb33c9981)
	HX_STACK_LINE(81)
	::String tmp = ::Sys_obj::sys_string();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,systemName,return )

::String Sys_obj::escapeArgument( ::String arg){
	HX_STACK_FRAME("Sys","escapeArgument",0xb9d4397f,"Sys.escapeArgument","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/cpp/_std/Sys.hx",84,0xb33c9981)
	HX_STACK_ARG(arg,"arg")
	HX_STACK_LINE(85)
	bool ok = true;		HX_STACK_VAR(ok,"ok");
	HX_STACK_LINE(86)
	{
		HX_STACK_LINE(86)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(86)
		int _g = arg.length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(86)
		while((true)){
			HX_STACK_LINE(86)
			bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(86)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(86)
			if ((tmp1)){
				HX_STACK_LINE(86)
				break;
			}
			HX_STACK_LINE(86)
			int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(86)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(87)
			int tmp3 = i;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(87)
			Dynamic tmp4 = arg.charCodeAt(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(87)
			Dynamic _g2 = tmp4;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(87)
			bool tmp5 = (_g2 != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(87)
			if ((tmp5)){
				HX_STACK_LINE(87)
				Dynamic tmp6 = _g2;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(87)
				switch( (int)(tmp6)){
					case (int)32: case (int)9: case (int)34: case (int)38: case (int)124: case (int)60: case (int)62: case (int)35: case (int)59: case (int)42: case (int)63: case (int)40: case (int)41: case (int)123: case (int)125: case (int)36: {
						HX_STACK_LINE(89)
						ok = false;
					}
					;break;
					case (int)0: case (int)13: case (int)10: {
						HX_STACK_LINE(91)
						int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(91)
						::String tmp8 = arg.substr((int)0,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(91)
						arg = tmp8;
					}
					;break;
				}
			}
		}
	}
	HX_STACK_LINE(93)
	bool tmp = ok;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(93)
	if ((tmp)){
		HX_STACK_LINE(94)
		::String tmp1 = arg;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(94)
		return tmp1;
	}
	HX_STACK_LINE(95)
	Array< ::String > tmp1 = arg.split(HX_HCSTRING("\\","\x5c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(95)
	::String tmp2 = tmp1->join(HX_HCSTRING("\\\\","\x80","\x50","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(95)
	Array< ::String > tmp3 = tmp2.split(HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(95)
	::String tmp4 = tmp3->join(HX_HCSTRING("\\\"","\x46","\x50","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(95)
	::String tmp5 = (HX_HCSTRING("\"","\x22","\x00","\x00","\x00") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(95)
	::String tmp6 = (tmp5 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(95)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,escapeArgument,return )

int Sys_obj::command( ::String cmd,Array< ::String > args){
	HX_STACK_FRAME("Sys","command",0x363f8cca,"Sys.command","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/cpp/_std/Sys.hx",98,0xb33c9981)
	HX_STACK_ARG(cmd,"cmd")
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(99)
	bool tmp = (args != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(99)
	if ((tmp)){
		HX_STACK_LINE(100)
		::String tmp1 = cmd;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(100)
		::String tmp2 = ::Sys_obj::escapeArgument(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(100)
		cmd = tmp2;
		HX_STACK_LINE(101)
		{
			HX_STACK_LINE(101)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(101)
			while((true)){
				HX_STACK_LINE(101)
				bool tmp3 = (_g < args->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(101)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(101)
				if ((tmp4)){
					HX_STACK_LINE(101)
					break;
				}
				HX_STACK_LINE(101)
				::String tmp5 = args->__get(_g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(101)
				::String a = tmp5;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(101)
				++(_g);
				HX_STACK_LINE(102)
				::String tmp6 = a;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(102)
				::String tmp7 = ::Sys_obj::escapeArgument(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(102)
				::String tmp8 = (HX_HCSTRING(" ","\x20","\x00","\x00","\x00") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(102)
				hx::AddEq(cmd,tmp8);
			}
		}
	}
	HX_STACK_LINE(104)
	::String tmp1 = ::Sys_obj::systemName();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(104)
	bool tmp2 = (tmp1 == HX_HCSTRING("Windows","\x63","\x06","\xc6","\xb5"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(104)
	if ((tmp2)){
		HX_STACK_LINE(104)
		::String tmp3 = (HX_HCSTRING("\"","\x22","\x00","\x00","\x00") + cmd);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(104)
		::String tmp4 = (tmp3 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(104)
		cmd = tmp4;
	}
	HX_STACK_LINE(105)
	::String tmp3 = cmd;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(105)
	int tmp4 = ::Sys_obj::sys_command(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(105)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Sys_obj,command,return )

Dynamic Sys_obj::_sleep;

Dynamic Sys_obj::sys_string;

Dynamic Sys_obj::sys_command;


Sys_obj::Sys_obj()
{
}

bool Sys_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"args") ) { outValue = args_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sleep") ) { outValue = sleep_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_sleep") ) { outValue = _sleep; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"command") ) { outValue = command_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"systemName") ) { outValue = systemName_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sys_string") ) { outValue = sys_string; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sys_command") ) { outValue = sys_command; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"escapeArgument") ) { outValue = escapeArgument_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Sys_obj::_sleep,HX_HCSTRING("_sleep","\x58","\x04","\xac","\x7a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Sys_obj::sys_string,HX_HCSTRING("sys_string","\x03","\xf9","\xde","\x46")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Sys_obj::sys_command,HX_HCSTRING("sys_command","\xd9","\xcc","\xb4","\x44")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sys_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Sys_obj::_sleep,"_sleep");
	HX_MARK_MEMBER_NAME(Sys_obj::sys_string,"sys_string");
	HX_MARK_MEMBER_NAME(Sys_obj::sys_command,"sys_command");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sys_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Sys_obj::_sleep,"_sleep");
	HX_VISIT_MEMBER_NAME(Sys_obj::sys_string,"sys_string");
	HX_VISIT_MEMBER_NAME(Sys_obj::sys_command,"sys_command");
};

#endif

hx::Class Sys_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("args","\x5d","\x8d","\x74","\x40"),
	HX_HCSTRING("sleep","\x17","\xbd","\xc4","\x7e"),
	HX_HCSTRING("systemName","\xda","\xd8","\x82","\xf7"),
	HX_HCSTRING("escapeArgument","\x1e","\x57","\x56","\x9e"),
	HX_HCSTRING("command","\x4b","\x71","\x6d","\x81"),
	HX_HCSTRING("_sleep","\x58","\x04","\xac","\x7a"),
	HX_HCSTRING("sys_string","\x03","\xf9","\xde","\x46"),
	HX_HCSTRING("sys_command","\xd9","\xcc","\xb4","\x44"),
	String(null()) };

void Sys_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Sys","\xed","\x64","\x3f","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Sys_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Sys_obj >;
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

void Sys_obj::__boot()
{
	_sleep= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("sys_sleep","\x25","\x79","\x1a","\xf4"),(int)1);
	sys_string= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("sys_string","\x03","\xf9","\xde","\x46"),(int)0);
	sys_command= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("sys_command","\xd9","\xcc","\xb4","\x44"),(int)1);
}

