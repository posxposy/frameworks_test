#ifndef INCLUDED_haxor_io_serialization_SerializedData
#define INCLUDED_haxor_io_serialization_SerializedData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxor,io,serialization,SerializedData)
HX_DECLARE_CLASS3(haxor,io,serialization,SerializedField)
namespace haxor{
namespace io{
namespace serialization{


class HXCPP_CLASS_ATTRIBUTES  SerializedData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SerializedData_obj OBJ_;
		SerializedData_obj();
		Void __construct(Dynamic p_target);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.io.serialization.SerializedData")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SerializedData_obj > __new(Dynamic p_target);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SerializedData_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("SerializedData","\xee","\x6e","\xf1","\x09"); }

		Dynamic target;
		::String type;
		Array< ::Dynamic > fields;
		Array< ::Dynamic > children;
};

} // end namespace haxor
} // end namespace io
} // end namespace serialization

#endif /* INCLUDED_haxor_io_serialization_SerializedData */ 
