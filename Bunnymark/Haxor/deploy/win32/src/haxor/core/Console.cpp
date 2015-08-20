#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxor_core_Console
#include <haxor/core/Console.h>
#endif
namespace haxor{
namespace core{

Void Console_obj::__construct()
{
	return null();
}

//Console_obj::~Console_obj() { }

Dynamic Console_obj::__CreateEmpty() { return  new Console_obj; }
hx::ObjectPtr< Console_obj > Console_obj::__new()
{  hx::ObjectPtr< Console_obj > _result_ = new Console_obj();
	_result_->__construct();
	return _result_;}

Dynamic Console_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Console_obj > _result_ = new Console_obj();
	_result_->__construct();
	return _result_;}

::haxe::ds::StringMap Console_obj::m_benchmarks;

Void Console_obj::Initialize( ){
{
		HX_STACK_FRAME("haxor.core.Console","Initialize",0xd0fce4ca,"haxor.core.Console.Initialize","haxor/core/Console.hx",30,0xc2f3b4ca)
		HX_STACK_LINE(50)
		::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(50)
		{
			HX_STACK_LINE(50)
			::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(50)
			::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(50)
			tmp = tmp2;
		}
		HX_STACK_LINE(50)
		::haxor::core::Console_obj::m_benchmarks = tmp;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Console_obj,Initialize,(void))

int Console_obj::verbose;

Void Console_obj::Breakpoint( ){
{
		HX_STACK_FRAME("haxor.core.Console","Breakpoint",0x518caeab,"haxor.core.Console.Breakpoint","haxor/core/Console.hx",64,0xc2f3b4ca)
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Console_obj,Breakpoint,(void))

Void Console_obj::Log( Dynamic p_msg,hx::Null< int >  __o_p_level){
int p_level = __o_p_level.Default(0);
	HX_STACK_FRAME("haxor.core.Console","Log",0x0d81f5ca,"haxor.core.Console.Log","haxor/core/Console.hx",76,0xc2f3b4ca)
	HX_STACK_ARG(p_msg,"p_msg")
	HX_STACK_ARG(p_level,"p_level")
{
		HX_STACK_LINE(86)
		int tmp = ::haxor::core::Console_obj::verbose;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(86)
		int tmp1 = p_level;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(86)
		bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(86)
		if ((tmp2)){
			HX_STACK_LINE(86)
			Dynamic tmp3 = p_msg;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(86)
			::cpp::Lib_obj::println(tmp3);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Console_obj,Log,(void))

Void Console_obj::LogImage( ::String p_url,int p_height){
{
		HX_STACK_FRAME("haxor.core.Console","LogImage",0xe2f35d31,"haxor.core.Console.LogImage","haxor/core/Console.hx",97,0xc2f3b4ca)
		HX_STACK_ARG(p_url,"p_url")
		HX_STACK_ARG(p_height,"p_height")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Console_obj,LogImage,(void))

Void Console_obj::LogWarning( Dynamic p_msg,Dynamic p_obj){
{
		HX_STACK_FRAME("haxor.core.Console","LogWarning",0x54c1b9b2,"haxor.core.Console.LogWarning","haxor/core/Console.hx",115,0xc2f3b4ca)
		HX_STACK_ARG(p_msg,"p_msg")
		HX_STACK_ARG(p_obj,"p_obj")
		HX_STACK_LINE(115)
		int p_level = (int)0;		HX_STACK_VAR(p_level,"p_level");
		HX_STACK_LINE(115)
		int tmp = ::haxor::core::Console_obj::verbose;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(115)
		int tmp1 = p_level;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(115)
		bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(115)
		if ((tmp2)){
			HX_STACK_LINE(115)
			Dynamic tmp3 = p_msg;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(115)
			::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(115)
			::String tmp5 = (HX_HCSTRING("[W] ","\xbf","\xbf","\x68","\x3c") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(115)
			::cpp::Lib_obj::println(tmp5);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Console_obj,LogWarning,(void))

Void Console_obj::LogError( Dynamic p_msg){
{
		HX_STACK_FRAME("haxor.core.Console","LogError",0x98b4099e,"haxor.core.Console.LogError","haxor/core/Console.hx",128,0xc2f3b4ca)
		HX_STACK_ARG(p_msg,"p_msg")
		HX_STACK_LINE(128)
		int p_level = (int)0;		HX_STACK_VAR(p_level,"p_level");
		HX_STACK_LINE(128)
		int tmp = ::haxor::core::Console_obj::verbose;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(128)
		int tmp1 = p_level;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(128)
		bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(128)
		if ((tmp2)){
			HX_STACK_LINE(128)
			Dynamic tmp3 = p_msg;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(128)
			::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(128)
			::String tmp5 = (HX_HCSTRING("[E] ","\x2d","\x17","\x5b","\x3c") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(128)
			::cpp::Lib_obj::println(tmp5);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Console_obj,LogError,(void))

Void Console_obj::ClearStyle( ){
{
		HX_STACK_FRAME("haxor.core.Console","ClearStyle",0x3d6997de,"haxor.core.Console.ClearStyle","haxor/core/Console.hx",137,0xc2f3b4ca)
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Console_obj,ClearStyle,(void))

Void Console_obj::Clear( ){
{
		HX_STACK_FRAME("haxor.core.Console","Clear",0xb9aa7053,"haxor.core.Console.Clear","haxor/core/Console.hx",147,0xc2f3b4ca)
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Console_obj,Clear,(void))

Void Console_obj::TimeStart( ::String p_id){
{
		HX_STACK_FRAME("haxor.core.Console","TimeStart",0x31f922db,"haxor.core.Console.TimeStart","haxor/core/Console.hx",164,0xc2f3b4ca)
		HX_STACK_ARG(p_id,"p_id")
		HX_STACK_LINE(168)
		::haxe::ds::StringMap tmp = ::haxor::core::Console_obj::m_benchmarks;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(168)
		::String tmp1 = p_id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(168)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(168)
		if ((tmp2)){
			HX_STACK_LINE(168)
			return null();
		}
		HX_STACK_LINE(169)
		{
			HX_STACK_LINE(169)
			Float tmp3 = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(169)
			Float value = tmp3;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(169)
			::haxe::ds::StringMap tmp4 = ::haxor::core::Console_obj::m_benchmarks;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(169)
			::String tmp5 = p_id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(169)
			Float tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(169)
			tmp4->set(tmp5,tmp6);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Console_obj,TimeStart,(void))

Void Console_obj::TimeEnd( ::String p_id){
{
		HX_STACK_FRAME("haxor.core.Console","TimeEnd",0x7af7f214,"haxor.core.Console.TimeEnd","haxor/core/Console.hx",179,0xc2f3b4ca)
		HX_STACK_ARG(p_id,"p_id")
		HX_STACK_LINE(183)
		::haxe::ds::StringMap tmp = ::haxor::core::Console_obj::m_benchmarks;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(183)
		::String tmp1 = p_id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(183)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(183)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(183)
		if ((tmp3)){
			HX_STACK_LINE(183)
			return null();
		}
		HX_STACK_LINE(184)
		::haxe::ds::StringMap tmp4 = ::haxor::core::Console_obj::m_benchmarks;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(184)
		::String tmp5 = p_id;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(184)
		Dynamic tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(184)
		Float t = tmp6;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(185)
		::haxe::ds::StringMap tmp7 = ::haxor::core::Console_obj::m_benchmarks;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(185)
		::String tmp8 = p_id;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(185)
		tmp7->remove(tmp8);
		HX_STACK_LINE(186)
		{
			HX_STACK_LINE(186)
			::String tmp9 = (p_id + HX_HCSTRING(": ","\xa6","\x32","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(186)
			Float tmp10 = (t * ((Float)1000.0));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(186)
			int tmp11 = ::Math_obj::floor(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(186)
			::String tmp12 = (tmp9 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(186)
			::String tmp13 = (tmp12 + HX_HCSTRING("ms","\x66","\x5f","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(186)
			Dynamic p_msg = tmp13;		HX_STACK_VAR(p_msg,"p_msg");
			HX_STACK_LINE(186)
			int p_level = (int)0;		HX_STACK_VAR(p_level,"p_level");
			HX_STACK_LINE(186)
			int tmp14 = ::haxor::core::Console_obj::verbose;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(186)
			int tmp15 = p_level;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(186)
			bool tmp16 = (tmp14 >= tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(186)
			if ((tmp16)){
				HX_STACK_LINE(186)
				Dynamic tmp17 = p_msg;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(186)
				::cpp::Lib_obj::println(tmp17);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Console_obj,TimeEnd,(void))

Void Console_obj::StackTrace( ){
{
		HX_STACK_FRAME("haxor.core.Console","StackTrace",0x0d7fe597,"haxor.core.Console.StackTrace","haxor/core/Console.hx",194,0xc2f3b4ca)
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Console_obj,StackTrace,(void))

Void Console_obj::SetStyle( ::String __o_p_size,::String __o_p_color,::String __o_p_background,::String __o_p_font){
::String p_size = __o_p_size.Default(HX_HCSTRING("12px","\x29","\xc7","\x89","\x20"));
::String p_color = __o_p_color.Default(HX_HCSTRING("rgba(0,0,0,1)","\xc0","\x53","\x96","\x30"));
::String p_background = __o_p_background.Default(HX_HCSTRING("rgba(255,255,255,0)","\xfb","\x4a","\x66","\x9e"));
::String p_font = __o_p_font.Default(HX_HCSTRING("'Lucida Console', Monaco, monospace","\xdd","\x5c","\x1f","\xf3"));
	HX_STACK_FRAME("haxor.core.Console","SetStyle",0xccd60f29,"haxor.core.Console.SetStyle","haxor/core/Console.hx",212,0xc2f3b4ca)
	HX_STACK_ARG(p_size,"p_size")
	HX_STACK_ARG(p_color,"p_color")
	HX_STACK_ARG(p_background,"p_background")
	HX_STACK_ARG(p_font,"p_font")
{
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Console_obj,SetStyle,(void))


Console_obj::Console_obj()
{
}

bool Console_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"Log") ) { outValue = Log_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"Clear") ) { outValue = Clear_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"verbose") ) { outValue = verbose; return true;  }
		if (HX_FIELD_EQ(inName,"TimeEnd") ) { outValue = TimeEnd_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"LogImage") ) { outValue = LogImage_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"LogError") ) { outValue = LogError_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"SetStyle") ) { outValue = SetStyle_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"TimeStart") ) { outValue = TimeStart_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"Initialize") ) { outValue = Initialize_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Breakpoint") ) { outValue = Breakpoint_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"LogWarning") ) { outValue = LogWarning_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"ClearStyle") ) { outValue = ClearStyle_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"StackTrace") ) { outValue = StackTrace_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"m_benchmarks") ) { outValue = m_benchmarks; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Console_obj::m_benchmarks,HX_HCSTRING("m_benchmarks","\xe8","\x12","\x85","\xe7")},
	{hx::fsInt,(void *) &Console_obj::verbose,HX_HCSTRING("verbose","\x82","\xd7","\xb9","\x71")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Console_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Console_obj::m_benchmarks,"m_benchmarks");
	HX_MARK_MEMBER_NAME(Console_obj::verbose,"verbose");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Console_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Console_obj::m_benchmarks,"m_benchmarks");
	HX_VISIT_MEMBER_NAME(Console_obj::verbose,"verbose");
};

#endif

hx::Class Console_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("m_benchmarks","\xe8","\x12","\x85","\xe7"),
	HX_HCSTRING("Initialize","\x70","\x35","\x6c","\xe3"),
	HX_HCSTRING("verbose","\x82","\xd7","\xb9","\x71"),
	HX_HCSTRING("Breakpoint","\x51","\xff","\xfb","\x63"),
	HX_HCSTRING("Log","\x64","\x0c","\x3a","\x00"),
	HX_HCSTRING("LogImage","\x57","\x18","\x21","\x82"),
	HX_HCSTRING("LogWarning","\x58","\x0a","\x31","\x67"),
	HX_HCSTRING("LogError","\xc4","\xc4","\xe1","\x37"),
	HX_HCSTRING("ClearStyle","\x84","\xe8","\xd8","\x4f"),
	HX_HCSTRING("Clear","\x6d","\xe1","\x88","\xdb"),
	HX_HCSTRING("TimeStart","\xf5","\x28","\xcf","\xda"),
	HX_HCSTRING("TimeEnd","\xae","\x5d","\x28","\xa6"),
	HX_HCSTRING("StackTrace","\x3d","\x36","\xef","\x1f"),
	HX_HCSTRING("SetStyle","\x4f","\xca","\x03","\x6c"),
	String(null()) };

void Console_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.core.Console","\xd4","\x1e","\x86","\x9d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Console_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Console_obj >;
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

void Console_obj::__boot()
{
	verbose= (int)0;
}

} // end namespace haxor
} // end namespace core
