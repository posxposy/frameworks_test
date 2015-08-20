#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxor_core_Console
#include <haxor/core/Console.h>
#endif
#ifndef INCLUDED_haxor_core_Time
#include <haxor/core/Time.h>
#endif
namespace haxor{
namespace core{

Void Time_obj::__construct()
{
	return null();
}

//Time_obj::~Time_obj() { }

Dynamic Time_obj::__CreateEmpty() { return  new Time_obj; }
hx::ObjectPtr< Time_obj > Time_obj::__new()
{  hx::ObjectPtr< Time_obj > _result_ = new Time_obj();
	_result_->__construct();
	return _result_;}

Dynamic Time_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Time_obj > _result_ = new Time_obj();
	_result_->__construct();
	return _result_;}

Float Time_obj::_system;

Float Time_obj::get_system( ){
	HX_STACK_FRAME("haxor.core.Time","get_system",0xd67409f6,"haxor.core.Time.get_system","haxor/core/Time.hx",22,0xdc68dfee)
	HX_STACK_LINE(33)
	Float tmp = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	Float tmp1 = (tmp * ((Float)1000.0));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(33)
	Float tmp2 = ::haxor::core::Time_obj::m_clock_0;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(33)
	Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(33)
	Float tmp4 = ::haxor::core::Time_obj::m_system = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(33)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Time_obj,get_system,return )

Float Time_obj::m_system;

Float Time_obj::clock;

Float Time_obj::get_clock( ){
	HX_STACK_FRAME("haxor.core.Time","get_clock",0x2ddb14a7,"haxor.core.Time.get_clock","haxor/core/Time.hx",43,0xdc68dfee)
	HX_STACK_LINE(43)
	Float tmp = ::haxor::core::Time_obj::m_clock;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Time_obj,get_clock,return )

Float Time_obj::m_clock;

Float Time_obj::m_clock_dt;

Float Time_obj::m_clock_0;

Float Time_obj::delta;

Float Time_obj::get_delta( ){
	HX_STACK_FRAME("haxor.core.Time","get_delta",0xbc9ef2d1,"haxor.core.Time.get_delta","haxor/core/Time.hx",52,0xdc68dfee)
	HX_STACK_LINE(52)
	Float tmp = ::haxor::core::Time_obj::m_delta;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Time_obj,get_delta,return )

Float Time_obj::m_delta;

Float Time_obj::frameDelta;

Float Time_obj::get_frameDelta( ){
	HX_STACK_FRAME("haxor.core.Time","get_frameDelta",0x56e21f12,"haxor.core.Time.get_frameDelta","haxor/core/Time.hx",59,0xdc68dfee)
	HX_STACK_LINE(59)
	Float tmp = ::haxor::core::Time_obj::m_frame_delta;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Time_obj,get_frameDelta,return )

Float Time_obj::m_frame_delta;

Float Time_obj::get_fixedDelta( ){
	HX_STACK_FRAME("haxor.core.Time","get_fixedDelta",0x5ce69c6b,"haxor.core.Time.get_fixedDelta","haxor/core/Time.hx",66,0xdc68dfee)
	HX_STACK_LINE(66)
	Float tmp = ::haxor::core::Time_obj::m_fixedDelta;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Time_obj,get_fixedDelta,return )

Float Time_obj::set_fixedDelta( Float v){
	HX_STACK_FRAME("haxor.core.Time","set_fixedDelta",0x7d0684df,"haxor.core.Time.set_fixedDelta","haxor/core/Time.hx",67,0xdc68dfee)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(67)
	::haxor::core::Time_obj::m_fixedDelta = v;
	HX_STACK_LINE(67)
	Float tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Time_obj,set_fixedDelta,return )

Float Time_obj::m_fixedDelta;

Float Time_obj::elapsed;

Float Time_obj::get_elapsed( ){
	HX_STACK_FRAME("haxor.core.Time","get_elapsed",0xf673cb55,"haxor.core.Time.get_elapsed","haxor/core/Time.hx",74,0xdc68dfee)
	HX_STACK_LINE(74)
	Float tmp = ::haxor::core::Time_obj::m_elapsed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(74)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Time_obj,get_elapsed,return )

Float Time_obj::m_elapsed;

int Time_obj::fps;

int Time_obj::get_fps( ){
	HX_STACK_FRAME("haxor.core.Time","get_fps",0xd8113a82,"haxor.core.Time.get_fps","haxor/core/Time.hx",81,0xdc68dfee)
	HX_STACK_LINE(81)
	int tmp = ::haxor::core::Time_obj::m_fps;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Time_obj,get_fps,return )

int Time_obj::m_fps;

int Time_obj::ups;

int Time_obj::get_ups( ){
	HX_STACK_FRAME("haxor.core.Time","get_ups",0xd81c9c51,"haxor.core.Time.get_ups","haxor/core/Time.hx",88,0xdc68dfee)
	HX_STACK_LINE(88)
	int tmp = ::haxor::core::Time_obj::m_ups;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Time_obj,get_ups,return )

int Time_obj::m_ups;

int Time_obj::frame;

int Time_obj::get_frame( ){
	HX_STACK_FRAME("haxor.core.Time","get_frame",0xebfb8306,"haxor.core.Time.get_frame","haxor/core/Time.hx",95,0xdc68dfee)
	HX_STACK_LINE(95)
	int tmp = ::haxor::core::Time_obj::m_frame;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(95)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Time_obj,get_frame,return )

int Time_obj::m_frame;

Float Time_obj::m_frame_count;

Float Time_obj::m_updates;

Float Time_obj::m_stats_clock;

Float Time_obj::m_start_clock;

Float Time_obj::m_last_clock;

Float Time_obj::m_last_frame_clock;

Void Time_obj::Initialize( ){
{
		HX_STACK_FRAME("haxor.core.Time","Initialize",0xd67638ae,"haxor.core.Time.Initialize","haxor/core/Time.hx",115,0xdc68dfee)
		HX_STACK_LINE(116)
		::haxor::core::Time_obj::m_system = ((Float)0.0);
		HX_STACK_LINE(117)
		::haxor::core::Time_obj::m_clock_0 = ((Float)0.0);
		HX_STACK_LINE(118)
		Float tmp = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(118)
		Float tmp1 = (tmp * ((Float)1000.0));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(118)
		Float tmp2 = ::haxor::core::Time_obj::m_clock_0;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(118)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(118)
		Float tmp4 = ::haxor::core::Time_obj::m_system = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(118)
		::haxor::core::Time_obj::m_clock_0 = tmp4;
		HX_STACK_LINE(120)
		Float tmp5 = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(120)
		Float tmp6 = (tmp5 * ((Float)1000.0));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(120)
		Float tmp7 = ::haxor::core::Time_obj::m_clock_0;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(120)
		Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(120)
		Float tmp9 = ::haxor::core::Time_obj::m_system = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(120)
		::haxor::core::Time_obj::m_clock = tmp9;
		HX_STACK_LINE(121)
		::haxor::core::Time_obj::m_clock_dt = ((Float)0.0);
		HX_STACK_LINE(122)
		Float tmp10 = ::haxor::core::Time_obj::m_clock;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(122)
		::haxor::core::Time_obj::m_start_clock = tmp10;
		HX_STACK_LINE(123)
		Float tmp11 = ::haxor::core::Time_obj::m_clock;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(123)
		::haxor::core::Time_obj::m_last_clock = tmp11;
		HX_STACK_LINE(124)
		Float tmp12 = ::haxor::core::Time_obj::m_clock;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(124)
		::haxor::core::Time_obj::m_last_frame_clock = tmp12;
		HX_STACK_LINE(125)
		Float tmp13 = ::haxor::core::Time_obj::m_clock;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(125)
		::haxor::core::Time_obj::m_stats_clock = tmp13;
		HX_STACK_LINE(126)
		::haxor::core::Time_obj::m_elapsed = ((Float)0.0);
		HX_STACK_LINE(127)
		::haxor::core::Time_obj::m_delta = ((Float)0.0);
		HX_STACK_LINE(128)
		::haxor::core::Time_obj::m_frame_delta = ((Float)0.0);
		HX_STACK_LINE(129)
		::haxor::core::Time_obj::m_ups = (int)0;
		HX_STACK_LINE(130)
		::haxor::core::Time_obj::m_fps = (int)0;
		HX_STACK_LINE(131)
		::haxor::core::Time_obj::m_updates = ((Float)0.0);
		HX_STACK_LINE(132)
		::haxor::core::Time_obj::m_frame_count = ((Float)0.0);
		HX_STACK_LINE(133)
		::haxor::core::Time_obj::m_frame = (int)0;
		HX_STACK_LINE(134)
		Float tmp14 = ((Float)0.01);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(134)
		::haxor::core::Time_obj::m_fixedDelta = tmp14;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Time_obj,Initialize,(void))

Void Time_obj::Update( ){
{
		HX_STACK_FRAME("haxor.core.Time","Update",0xded60667,"haxor.core.Time.Update","haxor/core/Time.hx",138,0xdc68dfee)
		HX_STACK_LINE(139)
		Float tmp = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(139)
		Float tmp1 = (tmp * ((Float)1000.0));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(139)
		Float tmp2 = ::haxor::core::Time_obj::m_clock_0;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(139)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(139)
		Float tmp4 = ::haxor::core::Time_obj::m_system = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(139)
		::haxor::core::Time_obj::m_clock = tmp4;
		HX_STACK_LINE(140)
		Float tmp5 = ::haxor::core::Time_obj::m_clock;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(140)
		Float tmp6 = ::haxor::core::Time_obj::m_last_clock;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(140)
		Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(140)
		::haxor::core::Time_obj::m_clock_dt = tmp7;
		HX_STACK_LINE(141)
		Float tmp8 = ::haxor::core::Time_obj::m_clock_dt;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(141)
		bool tmp9 = (tmp8 <= (int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(141)
		if ((tmp9)){
			HX_STACK_LINE(141)
			::haxor::core::Time_obj::m_clock_dt = ((Float)1.0);
		}
		HX_STACK_LINE(142)
		Float tmp10 = ::haxor::core::Time_obj::m_clock;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(142)
		::haxor::core::Time_obj::m_last_clock = tmp10;
		HX_STACK_LINE(143)
		Float tmp11 = ::haxor::core::Time_obj::m_clock_dt;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(143)
		Float tmp12 = (tmp11 * ((Float)0.001));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(143)
		::haxor::core::Time_obj::m_delta = tmp12;
		HX_STACK_LINE(144)
		Float tmp13 = ::haxor::core::Time_obj::m_delta;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(144)
		bool tmp14 = (tmp13 > ((Float)0.1));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(144)
		Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(144)
		if ((tmp14)){
			HX_STACK_LINE(144)
			tmp15 = ((Float)0.1);
		}
		else{
			HX_STACK_LINE(144)
			Float tmp16 = ::haxor::core::Time_obj::m_delta;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(144)
			bool tmp17 = (tmp16 <= ((Float)0.0));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(144)
			if ((tmp17)){
				HX_STACK_LINE(144)
				tmp15 = ((Float)0.01);
			}
			else{
				HX_STACK_LINE(144)
				tmp15 = ::haxor::core::Time_obj::m_delta;
			}
		}
		HX_STACK_LINE(144)
		::haxor::core::Time_obj::m_delta = tmp15;
		HX_STACK_LINE(146)
		Float tmp16 = ::haxor::core::Time_obj::m_delta;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(146)
		hx::AddEq(::haxor::core::Time_obj::m_elapsed,tmp16);
		HX_STACK_LINE(147)
		hx::AddEq(::haxor::core::Time_obj::m_updates,((Float)1.0));
		HX_STACK_LINE(149)
		Float tmp17 = ::haxor::core::Time_obj::m_clock;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(149)
		Float tmp18 = ::haxor::core::Time_obj::m_stats_clock;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(149)
		Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(149)
		bool tmp20 = (tmp19 >= ((Float)1000.0));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(149)
		if ((tmp20)){
			HX_STACK_LINE(151)
			Float tmp21 = ::haxor::core::Time_obj::m_clock;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(151)
			Float tmp22 = ::haxor::core::Time_obj::m_stats_clock;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(151)
			Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(151)
			hx::AddEq(::haxor::core::Time_obj::m_stats_clock,tmp23);
			HX_STACK_LINE(152)
			Float tmp24 = ::haxor::core::Time_obj::m_updates;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(152)
			::haxor::core::Time_obj::m_ups = ((int)(tmp24));
			HX_STACK_LINE(153)
			Float tmp25 = ::haxor::core::Time_obj::m_frame_count;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(153)
			::haxor::core::Time_obj::m_fps = ((int)(tmp25));
			HX_STACK_LINE(154)
			::haxor::core::Time_obj::m_updates = ((Float)0.0);
			HX_STACK_LINE(155)
			::haxor::core::Time_obj::m_frame_count = ((Float)0.0);
			HX_STACK_LINE(156)
			{
				HX_STACK_LINE(156)
				int tmp26 = ::haxor::core::Console_obj::verbose;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(156)
				bool tmp27 = (tmp26 >= (int)7);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(156)
				if ((tmp27)){
					HX_STACK_LINE(156)
					int tmp28 = ::haxor::core::Time_obj::m_fps;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(156)
					::String tmp29 = (HX_HCSTRING("FPS: ","\xaf","\xda","\x2c","\x83") + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(156)
					::cpp::Lib_obj::println(tmp29);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Time_obj,Update,(void))

Void Time_obj::Render( ){
{
		HX_STACK_FRAME("haxor.core.Time","Render",0x5cf9ebb4,"haxor.core.Time.Render","haxor/core/Time.hx",164,0xdc68dfee)
		HX_STACK_LINE(165)
		hx::AddEq(::haxor::core::Time_obj::m_frame_count,((Float)1.0));
		HX_STACK_LINE(166)
		(::haxor::core::Time_obj::m_frame)++;
		HX_STACK_LINE(167)
		Float tmp = ::haxor::core::Time_obj::m_clock;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(167)
		Float tmp1 = ::haxor::core::Time_obj::m_last_frame_clock;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(167)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(167)
		Float tmp3 = (tmp2 * ((Float)0.001));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(167)
		::haxor::core::Time_obj::m_frame_delta = tmp3;
		HX_STACK_LINE(168)
		Float tmp4 = ::haxor::core::Time_obj::m_frame_delta;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(168)
		bool tmp5 = (tmp4 > ((Float)0.1));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(168)
		Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(168)
		if ((tmp5)){
			HX_STACK_LINE(168)
			tmp6 = ((Float)0.1);
		}
		else{
			HX_STACK_LINE(168)
			Float tmp7 = ::haxor::core::Time_obj::m_frame_delta;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(168)
			bool tmp8 = (tmp7 <= ((Float)0.0));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(168)
			if ((tmp8)){
				HX_STACK_LINE(168)
				tmp6 = ((Float)0.01);
			}
			else{
				HX_STACK_LINE(168)
				tmp6 = ::haxor::core::Time_obj::m_frame_delta;
			}
		}
		HX_STACK_LINE(168)
		::haxor::core::Time_obj::m_frame_delta = tmp6;
		HX_STACK_LINE(169)
		Float tmp7 = ::haxor::core::Time_obj::m_clock;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(169)
		Float tmp8 = ::haxor::core::Time_obj::m_last_frame_clock;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(169)
		bool tmp9 = (tmp7 > tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(169)
		if ((tmp9)){
			HX_STACK_LINE(169)
			Float tmp10 = ::haxor::core::Time_obj::m_clock;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(169)
			::haxor::core::Time_obj::m_last_frame_clock = tmp10;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Time_obj,Render,(void))


Time_obj::Time_obj()
{
}

bool Time_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"fps") ) { outValue = inCallProp == hx::paccAlways ? get_fps() : fps; return true; }
		if (HX_FIELD_EQ(inName,"ups") ) { outValue = inCallProp == hx::paccAlways ? get_ups() : ups; return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clock") ) { outValue = inCallProp == hx::paccAlways ? get_clock() : clock; return true; }
		if (HX_FIELD_EQ(inName,"delta") ) { outValue = inCallProp == hx::paccAlways ? get_delta() : delta; return true; }
		if (HX_FIELD_EQ(inName,"m_fps") ) { outValue = m_fps; return true;  }
		if (HX_FIELD_EQ(inName,"m_ups") ) { outValue = m_ups; return true;  }
		if (HX_FIELD_EQ(inName,"frame") ) { outValue = inCallProp == hx::paccAlways ? get_frame() : frame; return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"system") ) { outValue = inCallProp == hx::paccAlways ? get_system() : _system; return true; }
		if (HX_FIELD_EQ(inName,"Update") ) { outValue = Update_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Render") ) { outValue = Render_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_clock") ) { outValue = m_clock; return true;  }
		if (HX_FIELD_EQ(inName,"m_delta") ) { outValue = m_delta; return true;  }
		if (HX_FIELD_EQ(inName,"elapsed") ) { outValue = inCallProp == hx::paccAlways ? get_elapsed() : elapsed; return true; }
		if (HX_FIELD_EQ(inName,"get_fps") ) { outValue = get_fps_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_ups") ) { outValue = get_ups_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"m_frame") ) { outValue = m_frame; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_system") ) { outValue = m_system; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_clock") ) { outValue = get_clock_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"m_clock_0") ) { outValue = m_clock_0; return true;  }
		if (HX_FIELD_EQ(inName,"get_delta") ) { outValue = get_delta_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"m_elapsed") ) { outValue = m_elapsed; return true;  }
		if (HX_FIELD_EQ(inName,"get_frame") ) { outValue = get_frame_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"m_updates") ) { outValue = m_updates; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_system") ) { outValue = get_system_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"m_clock_dt") ) { outValue = m_clock_dt; return true;  }
		if (HX_FIELD_EQ(inName,"frameDelta") ) { outValue = inCallProp == hx::paccAlways ? get_frameDelta() : frameDelta; return true; }
		if (HX_FIELD_EQ(inName,"fixedDelta") ) { if (inCallProp == hx::paccAlways) { outValue = get_fixedDelta(); return true; } }
		if (HX_FIELD_EQ(inName,"Initialize") ) { outValue = Initialize_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_elapsed") ) { outValue = get_elapsed_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"m_fixedDelta") ) { outValue = m_fixedDelta; return true;  }
		if (HX_FIELD_EQ(inName,"m_last_clock") ) { outValue = m_last_clock; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"m_frame_delta") ) { outValue = m_frame_delta; return true;  }
		if (HX_FIELD_EQ(inName,"m_frame_count") ) { outValue = m_frame_count; return true;  }
		if (HX_FIELD_EQ(inName,"m_stats_clock") ) { outValue = m_stats_clock; return true;  }
		if (HX_FIELD_EQ(inName,"m_start_clock") ) { outValue = m_start_clock; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_frameDelta") ) { outValue = get_frameDelta_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_fixedDelta") ) { outValue = get_fixedDelta_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_fixedDelta") ) { outValue = set_fixedDelta_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"m_last_frame_clock") ) { outValue = m_last_frame_clock; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &Time_obj::_system,HX_HCSTRING("system","\xef","\x96","\xe2","\xf2")},
	{hx::fsFloat,(void *) &Time_obj::m_system,HX_HCSTRING("m_system","\xc1","\x3f","\xd4","\xbb")},
	{hx::fsFloat,(void *) &Time_obj::clock,HX_HCSTRING("clock","\xce","\x09","\x63","\x48")},
	{hx::fsFloat,(void *) &Time_obj::m_clock,HX_HCSTRING("m_clock","\x3c","\xe1","\xed","\xf8")},
	{hx::fsFloat,(void *) &Time_obj::m_clock_dt,HX_HCSTRING("m_clock_dt","\xf3","\xf9","\x25","\x7a")},
	{hx::fsFloat,(void *) &Time_obj::m_clock_0,HX_HCSTRING("m_clock_0","\x2d","\xfb","\x15","\x79")},
	{hx::fsFloat,(void *) &Time_obj::delta,HX_HCSTRING("delta","\xf8","\xe7","\x26","\xd7")},
	{hx::fsFloat,(void *) &Time_obj::m_delta,HX_HCSTRING("m_delta","\x66","\xbf","\xb1","\x87")},
	{hx::fsFloat,(void *) &Time_obj::frameDelta,HX_HCSTRING("frameDelta","\x8b","\x1c","\x4d","\xba")},
	{hx::fsFloat,(void *) &Time_obj::m_frame_delta,HX_HCSTRING("m_frame_delta","\x14","\xa5","\xc0","\x95")},
	{hx::fsFloat,(void *) &Time_obj::m_fixedDelta,HX_HCSTRING("m_fixedDelta","\xb6","\x13","\x5d","\x91")},
	{hx::fsFloat,(void *) &Time_obj::elapsed,HX_HCSTRING("elapsed","\x3c","\x98","\xc0","\xba")},
	{hx::fsFloat,(void *) &Time_obj::m_elapsed,HX_HCSTRING("m_elapsed","\x2a","\xa7","\x42","\xc5")},
	{hx::fsInt,(void *) &Time_obj::fps,HX_HCSTRING("fps","\xe9","\xc7","\x4d","\x00")},
	{hx::fsInt,(void *) &Time_obj::m_fps,HX_HCSTRING("m_fps","\xd7","\x47","\xc6","\x01")},
	{hx::fsInt,(void *) &Time_obj::ups,HX_HCSTRING("ups","\xb8","\x29","\x59","\x00")},
	{hx::fsInt,(void *) &Time_obj::m_ups,HX_HCSTRING("m_ups","\xa6","\xa9","\xd1","\x01")},
	{hx::fsInt,(void *) &Time_obj::frame,HX_HCSTRING("frame","\x2d","\x78","\x83","\x06")},
	{hx::fsInt,(void *) &Time_obj::m_frame,HX_HCSTRING("m_frame","\x9b","\x4f","\x0e","\xb7")},
	{hx::fsFloat,(void *) &Time_obj::m_frame_count,HX_HCSTRING("m_frame_count","\xeb","\x01","\xfd","\x08")},
	{hx::fsFloat,(void *) &Time_obj::m_updates,HX_HCSTRING("m_updates","\x38","\xd1","\x51","\xa8")},
	{hx::fsFloat,(void *) &Time_obj::m_stats_clock,HX_HCSTRING("m_stats_clock","\x5c","\xc6","\x6a","\xe9")},
	{hx::fsFloat,(void *) &Time_obj::m_start_clock,HX_HCSTRING("m_start_clock","\xdf","\x58","\x9b","\xa0")},
	{hx::fsFloat,(void *) &Time_obj::m_last_clock,HX_HCSTRING("m_last_clock","\xb7","\x39","\x9c","\xab")},
	{hx::fsFloat,(void *) &Time_obj::m_last_frame_clock,HX_HCSTRING("m_last_frame_clock","\xa5","\x2d","\xcd","\x4b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Time_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Time_obj::_system,"system");
	HX_MARK_MEMBER_NAME(Time_obj::m_system,"m_system");
	HX_MARK_MEMBER_NAME(Time_obj::clock,"clock");
	HX_MARK_MEMBER_NAME(Time_obj::m_clock,"m_clock");
	HX_MARK_MEMBER_NAME(Time_obj::m_clock_dt,"m_clock_dt");
	HX_MARK_MEMBER_NAME(Time_obj::m_clock_0,"m_clock_0");
	HX_MARK_MEMBER_NAME(Time_obj::delta,"delta");
	HX_MARK_MEMBER_NAME(Time_obj::m_delta,"m_delta");
	HX_MARK_MEMBER_NAME(Time_obj::frameDelta,"frameDelta");
	HX_MARK_MEMBER_NAME(Time_obj::m_frame_delta,"m_frame_delta");
	HX_MARK_MEMBER_NAME(Time_obj::m_fixedDelta,"m_fixedDelta");
	HX_MARK_MEMBER_NAME(Time_obj::elapsed,"elapsed");
	HX_MARK_MEMBER_NAME(Time_obj::m_elapsed,"m_elapsed");
	HX_MARK_MEMBER_NAME(Time_obj::fps,"fps");
	HX_MARK_MEMBER_NAME(Time_obj::m_fps,"m_fps");
	HX_MARK_MEMBER_NAME(Time_obj::ups,"ups");
	HX_MARK_MEMBER_NAME(Time_obj::m_ups,"m_ups");
	HX_MARK_MEMBER_NAME(Time_obj::frame,"frame");
	HX_MARK_MEMBER_NAME(Time_obj::m_frame,"m_frame");
	HX_MARK_MEMBER_NAME(Time_obj::m_frame_count,"m_frame_count");
	HX_MARK_MEMBER_NAME(Time_obj::m_updates,"m_updates");
	HX_MARK_MEMBER_NAME(Time_obj::m_stats_clock,"m_stats_clock");
	HX_MARK_MEMBER_NAME(Time_obj::m_start_clock,"m_start_clock");
	HX_MARK_MEMBER_NAME(Time_obj::m_last_clock,"m_last_clock");
	HX_MARK_MEMBER_NAME(Time_obj::m_last_frame_clock,"m_last_frame_clock");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Time_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Time_obj::_system,"system");
	HX_VISIT_MEMBER_NAME(Time_obj::m_system,"m_system");
	HX_VISIT_MEMBER_NAME(Time_obj::clock,"clock");
	HX_VISIT_MEMBER_NAME(Time_obj::m_clock,"m_clock");
	HX_VISIT_MEMBER_NAME(Time_obj::m_clock_dt,"m_clock_dt");
	HX_VISIT_MEMBER_NAME(Time_obj::m_clock_0,"m_clock_0");
	HX_VISIT_MEMBER_NAME(Time_obj::delta,"delta");
	HX_VISIT_MEMBER_NAME(Time_obj::m_delta,"m_delta");
	HX_VISIT_MEMBER_NAME(Time_obj::frameDelta,"frameDelta");
	HX_VISIT_MEMBER_NAME(Time_obj::m_frame_delta,"m_frame_delta");
	HX_VISIT_MEMBER_NAME(Time_obj::m_fixedDelta,"m_fixedDelta");
	HX_VISIT_MEMBER_NAME(Time_obj::elapsed,"elapsed");
	HX_VISIT_MEMBER_NAME(Time_obj::m_elapsed,"m_elapsed");
	HX_VISIT_MEMBER_NAME(Time_obj::fps,"fps");
	HX_VISIT_MEMBER_NAME(Time_obj::m_fps,"m_fps");
	HX_VISIT_MEMBER_NAME(Time_obj::ups,"ups");
	HX_VISIT_MEMBER_NAME(Time_obj::m_ups,"m_ups");
	HX_VISIT_MEMBER_NAME(Time_obj::frame,"frame");
	HX_VISIT_MEMBER_NAME(Time_obj::m_frame,"m_frame");
	HX_VISIT_MEMBER_NAME(Time_obj::m_frame_count,"m_frame_count");
	HX_VISIT_MEMBER_NAME(Time_obj::m_updates,"m_updates");
	HX_VISIT_MEMBER_NAME(Time_obj::m_stats_clock,"m_stats_clock");
	HX_VISIT_MEMBER_NAME(Time_obj::m_start_clock,"m_start_clock");
	HX_VISIT_MEMBER_NAME(Time_obj::m_last_clock,"m_last_clock");
	HX_VISIT_MEMBER_NAME(Time_obj::m_last_frame_clock,"m_last_frame_clock");
};

#endif

hx::Class Time_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("system","\xef","\x96","\xe2","\xf2"),
	HX_HCSTRING("get_system","\xb8","\x06","\x6a","\xe3"),
	HX_HCSTRING("m_system","\xc1","\x3f","\xd4","\xbb"),
	HX_HCSTRING("clock","\xce","\x09","\x63","\x48"),
	HX_HCSTRING("get_clock","\x25","\x66","\x0c","\x8c"),
	HX_HCSTRING("m_clock","\x3c","\xe1","\xed","\xf8"),
	HX_HCSTRING("m_clock_dt","\xf3","\xf9","\x25","\x7a"),
	HX_HCSTRING("m_clock_0","\x2d","\xfb","\x15","\x79"),
	HX_HCSTRING("delta","\xf8","\xe7","\x26","\xd7"),
	HX_HCSTRING("get_delta","\x4f","\x44","\xd0","\x1a"),
	HX_HCSTRING("m_delta","\x66","\xbf","\xb1","\x87"),
	HX_HCSTRING("frameDelta","\x8b","\x1c","\x4d","\xba"),
	HX_HCSTRING("get_frameDelta","\xd4","\xa4","\x42","\x30"),
	HX_HCSTRING("m_frame_delta","\x14","\xa5","\xc0","\x95"),
	HX_HCSTRING("get_fixedDelta","\x2d","\x22","\x47","\x36"),
	HX_HCSTRING("set_fixedDelta","\xa1","\x0a","\x67","\x56"),
	HX_HCSTRING("m_fixedDelta","\xb6","\x13","\x5d","\x91"),
	HX_HCSTRING("elapsed","\x3c","\x98","\xc0","\xba"),
	HX_HCSTRING("get_elapsed","\x53","\xf8","\xba","\x40"),
	HX_HCSTRING("m_elapsed","\x2a","\xa7","\x42","\xc5"),
	HX_HCSTRING("fps","\xe9","\xc7","\x4d","\x00"),
	HX_HCSTRING("get_fps","\x80","\x90","\xc2","\x26"),
	HX_HCSTRING("m_fps","\xd7","\x47","\xc6","\x01"),
	HX_HCSTRING("ups","\xb8","\x29","\x59","\x00"),
	HX_HCSTRING("get_ups","\x4f","\xf2","\xcd","\x26"),
	HX_HCSTRING("m_ups","\xa6","\xa9","\xd1","\x01"),
	HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"),
	HX_HCSTRING("get_frame","\x84","\xd4","\x2c","\x4a"),
	HX_HCSTRING("m_frame","\x9b","\x4f","\x0e","\xb7"),
	HX_HCSTRING("m_frame_count","\xeb","\x01","\xfd","\x08"),
	HX_HCSTRING("m_updates","\x38","\xd1","\x51","\xa8"),
	HX_HCSTRING("m_stats_clock","\x5c","\xc6","\x6a","\xe9"),
	HX_HCSTRING("m_start_clock","\xdf","\x58","\x9b","\xa0"),
	HX_HCSTRING("m_last_clock","\xb7","\x39","\x9c","\xab"),
	HX_HCSTRING("m_last_frame_clock","\xa5","\x2d","\xcd","\x4b"),
	HX_HCSTRING("Initialize","\x70","\x35","\x6c","\xe3"),
	HX_HCSTRING("Update","\x29","\xfa","\x99","\xbb"),
	HX_HCSTRING("Render","\x76","\xdf","\xbd","\x39"),
	String(null()) };

void Time_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.core.Time","\x70","\x38","\xa8","\x69");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Time_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Time_obj >;
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
} // end namespace core
