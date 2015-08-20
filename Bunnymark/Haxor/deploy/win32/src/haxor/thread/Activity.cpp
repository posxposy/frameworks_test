#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_cpp_vm_Thread
#include <cpp/vm/Thread.h>
#endif
#ifndef INCLUDED_haxor_context_BaseProcess
#include <haxor/context/BaseProcess.h>
#endif
#ifndef INCLUDED_haxor_context_EngineContext
#include <haxor/context/EngineContext.h>
#endif
#ifndef INCLUDED_haxor_context_Process
#include <haxor/context/Process.h>
#endif
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_IRenderable
#include <haxor/core/IRenderable.h>
#endif
#ifndef INCLUDED_haxor_core_IUpdateable
#include <haxor/core/IUpdateable.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_core_Time
#include <haxor/core/Time.h>
#endif
#ifndef INCLUDED_haxor_thread_Activity
#include <haxor/thread/Activity.h>
#endif
namespace haxor{
namespace thread{

Void Activity_obj::__construct(Dynamic p_callback,hx::Null< bool >  __o_p_threaded,hx::Null< bool >  __o_p_graphics_context)
{
HX_STACK_FRAME("haxor.thread.Activity","new",0x9e73c259,"haxor.thread.Activity.new","haxor/thread/Activity.hx",128,0x19970d17)
HX_STACK_THIS(this)
HX_STACK_ARG(p_callback,"p_callback")
HX_STACK_ARG(__o_p_threaded,"p_threaded")
HX_STACK_ARG(__o_p_graphics_context,"p_graphics_context")
bool p_threaded = __o_p_threaded.Default(false);
bool p_graphics_context = __o_p_graphics_context.Default(false);
{
	HX_STACK_LINE(127)
	::haxor::thread::Activity _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(129)
	super::__construct(null());
	HX_STACK_LINE(130)
	bool tmp = (p_callback == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(130)
	if ((tmp)){
		HX_STACK_LINE(130)
		return null();
	}
	HX_STACK_LINE(132)
	Float tmp1 = ::haxor::core::Time_obj::m_elapsed;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(132)
	this->m_time_start = tmp1;
	HX_STACK_LINE(133)
	this->m_elapsed = ((Float)0.0);
	HX_STACK_LINE(134)
	this->m_callback = p_callback;
	HX_STACK_LINE(135)
	this->m_cancelled = false;
	HX_STACK_LINE(141)
	bool tmp2 = p_graphics_context;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(141)
	if ((tmp2)){
		HX_STACK_LINE(141)
		p_threaded = false;
	}
	HX_STACK_LINE(143)
	bool tmp3 = p_threaded;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(143)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(143)
	if ((tmp4)){
		HX_STACK_LINE(145)
		bool tmp5 = p_graphics_context;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(145)
		if ((tmp5)){
			HX_STACK_LINE(147)
			::haxor::context::Process tmp6 = ::haxor::context::EngineContext_obj::render;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(147)
			tmp6->Add(hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(151)
			::haxor::context::Process tmp6 = ::haxor::context::EngineContext_obj::update;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(151)
			tmp6->Add(hx::ObjectPtr<OBJ_>(this));
		}
	}
	else{

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::haxor::thread::Activity,_g,Dynamic,p_callback)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","haxor/thread/Activity.hx",159,0x19970d17)
			{
				HX_STACK_LINE(159)
				while((true)){
					HX_STACK_LINE(161)
					bool tmp5 = _g->m_cancelled;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(161)
					if ((tmp5)){
						HX_STACK_LINE(161)
						break;
					}
					HX_STACK_LINE(162)
					Float tmp6 = _g->m_elapsed;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(162)
					bool tmp7 = p_callback(tmp6).Cast< bool >();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(162)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(162)
					if ((tmp8)){
						HX_STACK_LINE(162)
						break;
					}
					HX_STACK_LINE(163)
					hx::AddEq(_g->m_elapsed,((Float)0.0001));
					HX_STACK_LINE(164)
					::Sys_obj::sleep(((Float)0.0001));
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(157)
		::cpp::vm::Thread_obj::create( Dynamic(new _Function_2_1(_g,p_callback)));
	}
}
;
	return null();
}

//Activity_obj::~Activity_obj() { }

Dynamic Activity_obj::__CreateEmpty() { return  new Activity_obj; }
hx::ObjectPtr< Activity_obj > Activity_obj::__new(Dynamic p_callback,hx::Null< bool >  __o_p_threaded,hx::Null< bool >  __o_p_graphics_context)
{  hx::ObjectPtr< Activity_obj > _result_ = new Activity_obj();
	_result_->__construct(p_callback,__o_p_threaded,__o_p_graphics_context);
	return _result_;}

Dynamic Activity_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Activity_obj > _result_ = new Activity_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

hx::Object *Activity_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxor::core::IUpdateable_obj)) return operator ::haxor::core::IUpdateable_obj *();
	if (inType==typeid( ::haxor::core::IRenderable_obj)) return operator ::haxor::core::IRenderable_obj *();
	return super::__ToInterface(inType);
}

Activity_obj::operator ::haxor::core::IUpdateable_obj *()
	{ return new ::haxor::core::IUpdateable_delegate_< Activity_obj >(this); }
Activity_obj::operator ::haxor::core::IRenderable_obj *()
	{ return new ::haxor::core::IRenderable_delegate_< Activity_obj >(this); }
Float Activity_obj::get_elapsed( ){
	HX_STACK_FRAME("haxor.thread.Activity","get_elapsed",0x06830b4c,"haxor.thread.Activity.get_elapsed","haxor/thread/Activity.hx",116,0x19970d17)
	HX_STACK_THIS(this)
	HX_STACK_LINE(116)
	Float tmp = this->m_elapsed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(116)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Activity_obj,get_elapsed,return )

Void Activity_obj::Cancel( ){
{
		HX_STACK_FRAME("haxor.thread.Activity","Cancel",0x9d0b3141,"haxor.thread.Activity.Cancel","haxor/thread/Activity.hx",181,0x19970d17)
		HX_STACK_THIS(this)
		HX_STACK_LINE(181)
		this->m_cancelled = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Activity_obj,Cancel,(void))

Void Activity_obj::OnUpdate( ){
{
		HX_STACK_FRAME("haxor.thread.Activity","OnUpdate",0xa2b7800f,"haxor.thread.Activity.OnUpdate","haxor/thread/Activity.hx",187,0x19970d17)
		HX_STACK_THIS(this)
		HX_STACK_LINE(187)
		this->OnRun();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Activity_obj,OnUpdate,(void))

Void Activity_obj::OnRender( ){
{
		HX_STACK_FRAME("haxor.thread.Activity","OnRender",0x20db655c,"haxor.thread.Activity.OnRender","haxor/thread/Activity.hx",192,0x19970d17)
		HX_STACK_THIS(this)
		HX_STACK_LINE(192)
		this->OnRun();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Activity_obj,OnRender,(void))

Void Activity_obj::OnRun( ){
{
		HX_STACK_FRAME("haxor.thread.Activity","OnRun",0x21170d85,"haxor.thread.Activity.OnRun","haxor/thread/Activity.hx",198,0x19970d17)
		HX_STACK_THIS(this)
		HX_STACK_LINE(199)
		bool tmp = this->m_cancelled;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(199)
		if ((tmp)){
			HX_STACK_LINE(199)
			::haxor::core::Resource_obj::Destroy(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(199)
			return null();
		}
		HX_STACK_LINE(200)
		Float tmp1 = ::haxor::core::Time_obj::m_elapsed;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(200)
		Float tmp2 = this->m_time_start;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(200)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(200)
		this->m_elapsed = tmp3;
		HX_STACK_LINE(201)
		Float tmp4 = this->m_elapsed;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(201)
		bool tmp5 = this->m_callback(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(201)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(201)
		if ((tmp6)){
			HX_STACK_LINE(203)
			::haxor::core::Resource_obj::Destroy(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Activity_obj,OnRun,(void))

::haxor::thread::Activity Activity_obj::Iterate( int p_offset,int p_length,Dynamic p_callback,hx::Null< int >  __o_p_step,hx::Null< bool >  __o_p_threaded,hx::Null< bool >  __o_p_graphics_context){
int p_step = __o_p_step.Default(1);
bool p_threaded = __o_p_threaded.Default(false);
bool p_graphics_context = __o_p_graphics_context.Default(false);
	HX_STACK_FRAME("haxor.thread.Activity","Iterate",0x3a548453,"haxor.thread.Activity.Iterate","haxor/thread/Activity.hx",40,0x19970d17)
	HX_STACK_ARG(p_offset,"p_offset")
	HX_STACK_ARG(p_length,"p_length")
	HX_STACK_ARG(p_callback,"p_callback")
	HX_STACK_ARG(p_step,"p_step")
	HX_STACK_ARG(p_threaded,"p_threaded")
	HX_STACK_ARG(p_graphics_context,"p_graphics_context")
{
		HX_STACK_LINE(41)
		Array< int > it = Array_obj< int >::__new().Add(p_offset);		HX_STACK_VAR(it,"it");

		HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_1_1,int,p_step,Array< int >,it,int,p_length,Dynamic,p_callback)
		int __ArgCount() const { return 1; }
		bool run(Float t){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxor/thread/Activity.hx",44,0x19970d17)
			HX_STACK_ARG(t,"t")
			{
				HX_STACK_LINE(45)
				bool finished = false;		HX_STACK_VAR(finished,"finished");
				HX_STACK_LINE(46)
				{
					HX_STACK_LINE(46)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(46)
					while((true)){
						HX_STACK_LINE(46)
						bool tmp = (_g < p_step);		HX_STACK_VAR(tmp,"tmp");
						HX_STACK_LINE(46)
						bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(46)
						if ((tmp1)){
							HX_STACK_LINE(46)
							break;
						}
						HX_STACK_LINE(46)
						int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(46)
						int i = tmp2;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(48)
						bool tmp3 = (it->__get((int)0) >= p_length);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(48)
						if ((tmp3)){
							HX_STACK_LINE(48)
							return false;
						}
						HX_STACK_LINE(49)
						int tmp4 = it->__get((int)0);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(49)
						bool tmp5 = p_callback(tmp4).Cast< bool >();		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(49)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(49)
						if ((tmp6)){
							HX_STACK_LINE(49)
							finished = true;
							HX_STACK_LINE(49)
							break;
						}
						HX_STACK_LINE(50)
						(it[(int)0])++;
					}
				}
				HX_STACK_LINE(52)
				bool tmp = finished;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(52)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(52)
				return tmp1;
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(43)
		::haxor::thread::Activity tmp = ::haxor::thread::Activity_obj::__new( Dynamic(new _Function_1_1(p_step,it,p_length,p_callback)),p_threaded,p_graphics_context);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(43)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Activity_obj,Iterate,return )

::haxor::thread::Activity Activity_obj::Delay( Float p_time,Dynamic p_callback,hx::Null< bool >  __o_p_threaded,hx::Null< bool >  __o_p_graphics_context){
bool p_threaded = __o_p_threaded.Default(false);
bool p_graphics_context = __o_p_graphics_context.Default(false);
	HX_STACK_FRAME("haxor.thread.Activity","Delay",0xc5cf699c,"haxor.thread.Activity.Delay","haxor/thread/Activity.hx",63,0x19970d17)
	HX_STACK_ARG(p_time,"p_time")
	HX_STACK_ARG(p_callback,"p_callback")
	HX_STACK_ARG(p_threaded,"p_threaded")
	HX_STACK_ARG(p_graphics_context,"p_graphics_context")
{

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,Float,p_time,Dynamic,p_callback)
		int __ArgCount() const { return 1; }
		bool run(Float t){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxor/thread/Activity.hx",65,0x19970d17)
			HX_STACK_ARG(t,"t")
			{
				HX_STACK_LINE(67)
				bool tmp = (t >= p_time);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(67)
				if ((tmp)){
					HX_STACK_LINE(69)
					p_callback().Cast< Void >();
					HX_STACK_LINE(70)
					return false;
				}
				HX_STACK_LINE(72)
				return true;
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(64)
		::haxor::thread::Activity tmp = ::haxor::thread::Activity_obj::__new( Dynamic(new _Function_1_1(p_time,p_callback)),p_threaded,p_graphics_context);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(64)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Activity_obj,Delay,return )

::haxor::thread::Activity Activity_obj::Run( Dynamic p_callback,hx::Null< bool >  __o_p_threaded,hx::Null< bool >  __o_p_graphics_context){
bool p_threaded = __o_p_threaded.Default(false);
bool p_graphics_context = __o_p_graphics_context.Default(false);
	HX_STACK_FRAME("haxor.thread.Activity","Run",0x9e5e9124,"haxor.thread.Activity.Run","haxor/thread/Activity.hx",82,0x19970d17)
	HX_STACK_ARG(p_callback,"p_callback")
	HX_STACK_ARG(p_threaded,"p_threaded")
	HX_STACK_ARG(p_graphics_context,"p_graphics_context")
{
		HX_STACK_LINE(83)
		::haxor::thread::Activity tmp = ::haxor::thread::Activity_obj::__new(p_callback,p_threaded,p_graphics_context);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(83)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Activity_obj,Run,return )

::haxor::thread::Activity Activity_obj::RunOnce( Dynamic p_callback,hx::Null< bool >  __o_p_threaded,hx::Null< bool >  __o_p_graphics_context){
bool p_threaded = __o_p_threaded.Default(false);
bool p_graphics_context = __o_p_graphics_context.Default(false);
	HX_STACK_FRAME("haxor.thread.Activity","RunOnce",0x2e739cc5,"haxor.thread.Activity.RunOnce","haxor/thread/Activity.hx",94,0x19970d17)
	HX_STACK_ARG(p_callback,"p_callback")
	HX_STACK_ARG(p_threaded,"p_threaded")
	HX_STACK_ARG(p_graphics_context,"p_graphics_context")
{

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Dynamic,p_callback)
		int __ArgCount() const { return 1; }
		bool run(Float t){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxor/thread/Activity.hx",96,0x19970d17)
			HX_STACK_ARG(t,"t")
			{
				HX_STACK_LINE(97)
				p_callback().Cast< Void >();
				HX_STACK_LINE(98)
				return false;
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(95)
		::haxor::thread::Activity tmp = ::haxor::thread::Activity_obj::__new( Dynamic(new _Function_1_1(p_callback)),p_threaded,p_graphics_context);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(95)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Activity_obj,RunOnce,return )


Activity_obj::Activity_obj()
{
}

void Activity_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Activity);
	HX_MARK_MEMBER_NAME(m_callback,"m_callback");
	HX_MARK_MEMBER_NAME(m_time_start,"m_time_start");
	HX_MARK_MEMBER_NAME(elapsed,"elapsed");
	HX_MARK_MEMBER_NAME(m_elapsed,"m_elapsed");
	HX_MARK_MEMBER_NAME(m_cancelled,"m_cancelled");
	::haxor::core::Resource_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Activity_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_callback,"m_callback");
	HX_VISIT_MEMBER_NAME(m_time_start,"m_time_start");
	HX_VISIT_MEMBER_NAME(elapsed,"elapsed");
	HX_VISIT_MEMBER_NAME(m_elapsed,"m_elapsed");
	HX_VISIT_MEMBER_NAME(m_cancelled,"m_cancelled");
	::haxor::core::Resource_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Activity_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"OnRun") ) { return OnRun_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"Cancel") ) { return Cancel_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"elapsed") ) { return inCallProp == hx::paccAlways ? get_elapsed() : elapsed; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"OnUpdate") ) { return OnUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"OnRender") ) { return OnRender_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"m_elapsed") ) { return m_elapsed; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_callback") ) { return m_callback; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_elapsed") ) { return get_elapsed_dyn(); }
		if (HX_FIELD_EQ(inName,"m_cancelled") ) { return m_cancelled; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"m_time_start") ) { return m_time_start; }
	}
	return super::__Field(inName,inCallProp);
}

bool Activity_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"Run") ) { outValue = Run_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"Delay") ) { outValue = Delay_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"Iterate") ) { outValue = Iterate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"RunOnce") ) { outValue = RunOnce_dyn(); return true;  }
	}
	return false;
}

Dynamic Activity_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"elapsed") ) { elapsed=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"m_elapsed") ) { m_elapsed=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_callback") ) { m_callback=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"m_cancelled") ) { m_cancelled=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"m_time_start") ) { m_time_start=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Activity_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Activity_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("m_time_start","\x42","\x09","\x33","\xba"));
	outFields->push(HX_HCSTRING("elapsed","\x3c","\x98","\xc0","\xba"));
	outFields->push(HX_HCSTRING("m_elapsed","\x2a","\xa7","\x42","\xc5"));
	outFields->push(HX_HCSTRING("m_cancelled","\xff","\xac","\x8a","\x5c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Activity_obj,m_callback),HX_HCSTRING("m_callback","\x17","\x9b","\x51","\xa6")},
	{hx::fsFloat,(int)offsetof(Activity_obj,m_time_start),HX_HCSTRING("m_time_start","\x42","\x09","\x33","\xba")},
	{hx::fsFloat,(int)offsetof(Activity_obj,elapsed),HX_HCSTRING("elapsed","\x3c","\x98","\xc0","\xba")},
	{hx::fsFloat,(int)offsetof(Activity_obj,m_elapsed),HX_HCSTRING("m_elapsed","\x2a","\xa7","\x42","\xc5")},
	{hx::fsBool,(int)offsetof(Activity_obj,m_cancelled),HX_HCSTRING("m_cancelled","\xff","\xac","\x8a","\x5c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("m_callback","\x17","\x9b","\x51","\xa6"),
	HX_HCSTRING("m_time_start","\x42","\x09","\x33","\xba"),
	HX_HCSTRING("elapsed","\x3c","\x98","\xc0","\xba"),
	HX_HCSTRING("get_elapsed","\x53","\xf8","\xba","\x40"),
	HX_HCSTRING("m_elapsed","\x2a","\xa7","\x42","\xc5"),
	HX_HCSTRING("m_cancelled","\xff","\xac","\x8a","\x5c"),
	HX_HCSTRING("Cancel","\x9a","\x61","\xc8","\xec"),
	HX_HCSTRING("OnUpdate","\xa8","\x38","\x64","\x40"),
	HX_HCSTRING("OnRender","\xf5","\x1d","\x88","\xbe"),
	HX_HCSTRING("OnRun","\x4c","\xeb","\x9b","\xc5"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Activity_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Activity_obj::__mClass,"__mClass");
};

#endif

hx::Class Activity_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("Iterate","\xda","\xa1","\x21","\xb0"),
	HX_HCSTRING("Delay","\x63","\x47","\x54","\x6a"),
	HX_HCSTRING("Run","\x2b","\x9f","\x3e","\x00"),
	HX_HCSTRING("RunOnce","\x4c","\xba","\x40","\xa4"),
	String(null()) };

void Activity_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.thread.Activity","\xe7","\xa1","\x43","\x9d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Activity_obj::__GetStatic;
	__mClass->mSetStaticField = &Activity_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Activity_obj >;
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
} // end namespace thread
