#ifndef INCLUDED_haxor_thread_Activity
#define INCLUDED_haxor_thread_Activity

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_core_IRenderable
#include <haxor/core/IRenderable.h>
#endif
#ifndef INCLUDED_haxor_core_IUpdateable
#include <haxor/core/IUpdateable.h>
#endif
HX_DECLARE_CLASS2(haxor,core,IDisposable)
HX_DECLARE_CLASS2(haxor,core,IRenderable)
HX_DECLARE_CLASS2(haxor,core,IUpdateable)
HX_DECLARE_CLASS2(haxor,core,Resource)
HX_DECLARE_CLASS2(haxor,thread,Activity)
namespace haxor{
namespace thread{


class HXCPP_CLASS_ATTRIBUTES  Activity_obj : public ::haxor::core::Resource_obj{
	public:
		typedef ::haxor::core::Resource_obj super;
		typedef Activity_obj OBJ_;
		Activity_obj();
		Void __construct(Dynamic p_callback,hx::Null< bool >  __o_p_threaded,hx::Null< bool >  __o_p_graphics_context);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.thread.Activity")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Activity_obj > __new(Dynamic p_callback,hx::Null< bool >  __o_p_threaded,hx::Null< bool >  __o_p_graphics_context);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Activity_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::haxor::core::IUpdateable_obj *();
		operator ::haxor::core::IRenderable_obj *();
		::String __ToString() const { return HX_HCSTRING("Activity","\xef","\xe9","\x63","\xbf"); }

		Dynamic m_callback;
		Dynamic &m_callback_dyn() { return m_callback;}
		Float m_time_start;
		Float elapsed;
		virtual Float get_elapsed( );
		Dynamic get_elapsed_dyn();

		Float m_elapsed;
		bool m_cancelled;
		virtual Void Cancel( );
		Dynamic Cancel_dyn();

		virtual Void OnUpdate( );
		Dynamic OnUpdate_dyn();

		virtual Void OnRender( );
		Dynamic OnRender_dyn();

		virtual Void OnRun( );
		Dynamic OnRun_dyn();

		static ::haxor::thread::Activity Iterate( int p_offset,int p_length,Dynamic p_callback,hx::Null< int >  p_step,hx::Null< bool >  p_threaded,hx::Null< bool >  p_graphics_context);
		static Dynamic Iterate_dyn();

		static ::haxor::thread::Activity Delay( Float p_time,Dynamic p_callback,hx::Null< bool >  p_threaded,hx::Null< bool >  p_graphics_context);
		static Dynamic Delay_dyn();

		static ::haxor::thread::Activity Run( Dynamic p_callback,hx::Null< bool >  p_threaded,hx::Null< bool >  p_graphics_context);
		static Dynamic Run_dyn();

		static ::haxor::thread::Activity RunOnce( Dynamic p_callback,hx::Null< bool >  p_threaded,hx::Null< bool >  p_graphics_context);
		static Dynamic RunOnce_dyn();

};

} // end namespace haxor
} // end namespace thread

#endif /* INCLUDED_haxor_thread_Activity */ 
