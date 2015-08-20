#ifndef INCLUDED_haxor_ds_USet
#define INCLUDED_haxor_ds_USet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxor,ds,USet)
namespace haxor{
namespace ds{


class HXCPP_CLASS_ATTRIBUTES  USet_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef USet_obj OBJ_;
		USet_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.ds.USet")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< USet_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~USet_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("USet","\x4d","\x76","\x6e","\x38"); }

		virtual int get_length( );
		Dynamic get_length_dyn();

		int m_length;
		Dynamic m_list;
		virtual Void Add( Dynamic p_item);
		Dynamic Add_dyn();

		virtual Void Remove( Dynamic p_item);
		Dynamic Remove_dyn();

		virtual Dynamic Get( int p_index);
		Dynamic Get_dyn();

		virtual Void Clear( );
		Dynamic Clear_dyn();

};

} // end namespace haxor
} // end namespace ds

#endif /* INCLUDED_haxor_ds_USet */ 
