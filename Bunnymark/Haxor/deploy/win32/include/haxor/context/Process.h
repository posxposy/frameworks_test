#ifndef INCLUDED_haxor_context_Process
#define INCLUDED_haxor_context_Process

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxor_context_BaseProcess
#include <haxor/context/BaseProcess.h>
#endif
HX_DECLARE_CLASS2(haxor,context,BaseProcess)
HX_DECLARE_CLASS2(haxor,context,Process)
HX_DECLARE_CLASS2(haxor,core,IDisposable)
HX_DECLARE_CLASS2(haxor,core,Resource)
namespace haxor{
namespace context{


class HXCPP_CLASS_ATTRIBUTES  Process_obj : public ::haxor::context::BaseProcess_obj{
	public:
		typedef ::haxor::context::BaseProcess_obj super;
		typedef Process_obj OBJ_;
		Process_obj();
		Void __construct(::String p_name,int p_size,hx::Null< bool >  __o_p_update_cid);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.context.Process")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Process_obj > __new(::String p_name,int p_size,hx::Null< bool >  __o_p_update_cid);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Process_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Process","\x4f","\xca","\x9b","\xbe"); }

		Dynamic list;
		virtual int get_length( );

		int m_length;
		virtual Void Add( ::haxor::core::Resource p_item);

		virtual Void Remove( ::haxor::core::Resource p_item);

		virtual Void Swap( Dynamic p_a,Dynamic p_b,hx::Null< bool >  p_index_only);
		Dynamic Swap_dyn();

		virtual Void Clear( );

		virtual Void Sort( Dynamic p_method);
		Dynamic Sort_dyn();

		virtual ::String ToString( );
		Dynamic ToString_dyn();

};

} // end namespace haxor
} // end namespace context

#endif /* INCLUDED_haxor_context_Process */ 
