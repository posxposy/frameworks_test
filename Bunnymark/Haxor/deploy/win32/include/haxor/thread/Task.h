#ifndef INCLUDED_haxor_thread_Task
#define INCLUDED_haxor_thread_Task

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxor_thread_Activity
#include <haxor/thread/Activity.h>
#endif
HX_DECLARE_CLASS2(haxor,core,IDisposable)
HX_DECLARE_CLASS2(haxor,core,IRenderable)
HX_DECLARE_CLASS2(haxor,core,IUpdateable)
HX_DECLARE_CLASS2(haxor,core,Resource)
HX_DECLARE_CLASS2(haxor,thread,Activity)
HX_DECLARE_CLASS2(haxor,thread,Task)
namespace haxor{
namespace thread{


class HXCPP_CLASS_ATTRIBUTES  Task_obj : public ::haxor::thread::Activity_obj{
	public:
		typedef ::haxor::thread::Activity_obj super;
		typedef Task_obj OBJ_;
		Task_obj();
		Void __construct(hx::Null< bool >  __o_p_threaded,Dynamic p_callback);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.thread.Task")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Task_obj > __new(hx::Null< bool >  __o_p_threaded,Dynamic p_callback);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Task_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Task","\x65","\xeb","\xcf","\x37"); }

		virtual Float get_progress( );
		Dynamic get_progress_dyn();

		virtual Float set_progress( Float v);
		Dynamic set_progress_dyn();

		Float m_progress;
		bool m_has_progress;
		bool active;
		virtual bool get_active( );
		Dynamic get_active_dyn();

		bool m_active;
		virtual Void OnStart( );
		Dynamic OnStart_dyn();

		virtual Void OnStep( );
		Dynamic OnStep_dyn();

		virtual Void OnComplete( );
		Dynamic OnComplete_dyn();

		virtual Void OnProgress( );
		Dynamic OnProgress_dyn();

		virtual bool OnExecute( Float p_time);
		Dynamic OnExecute_dyn();

};

} // end namespace haxor
} // end namespace thread

#endif /* INCLUDED_haxor_thread_Task */ 
