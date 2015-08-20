#ifndef INCLUDED_haxor_ds_SAPInterval
#define INCLUDED_haxor_ds_SAPInterval

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxor,ds,SAPInterval)
namespace haxor{
namespace ds{


class HXCPP_CLASS_ATTRIBUTES  SAPInterval_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SAPInterval_obj OBJ_;
		SAPInterval_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.ds.SAPInterval")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SAPInterval_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SAPInterval_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("SAPInterval","\x67","\x3b","\xa4","\x88"); }

		int id;
		Float min;
		Float max;
		::haxor::ds::SAPInterval next;
		::haxor::ds::SAPInterval prev;
		Dynamic data;
		virtual Void Set( Float p_min,Float p_max);
		Dynamic Set_dyn();

		virtual bool Overlap( ::haxor::ds::SAPInterval p_interval);
		Dynamic Overlap_dyn();

		virtual ::String ToString( hx::Null< int >  p_places);
		Dynamic ToString_dyn();

};

} // end namespace haxor
} // end namespace ds

#endif /* INCLUDED_haxor_ds_SAPInterval */ 
