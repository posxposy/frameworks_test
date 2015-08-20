#ifndef INCLUDED_haxor_io_serialization_SerializedField
#define INCLUDED_haxor_io_serialization_SerializedField

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxor,io,serialization,SerializedField)
namespace haxor{
namespace io{
namespace serialization{


class HXCPP_CLASS_ATTRIBUTES  SerializedField_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SerializedField_obj OBJ_;
		SerializedField_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.io.serialization.SerializedField")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SerializedField_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SerializedField_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("SerializedField","\x76","\x27","\x5b","\xd5"); }

		Dynamic target;
		Dynamic meta;
		::String name;
		::String type;
		Dynamic value;
};

} // end namespace haxor
} // end namespace io
} // end namespace serialization

#endif /* INCLUDED_haxor_io_serialization_SerializedField */ 
