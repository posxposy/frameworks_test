#ifndef INCLUDED_haxor_io_serialization_Formatter
#define INCLUDED_haxor_io_serialization_Formatter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxor,io,serialization,Formatter)
HX_DECLARE_CLASS3(haxor,io,serialization,SerializedData)
HX_DECLARE_CLASS3(haxor,io,serialization,SerializedField)
namespace haxor{
namespace io{
namespace serialization{


class HXCPP_CLASS_ATTRIBUTES  Formatter_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Formatter_obj OBJ_;
		Formatter_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxor.io.serialization.Formatter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Formatter_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Formatter_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Formatter","\xea","\xca","\x3a","\xbb"); }

		virtual ::String Serialize( Dynamic p_target);
		Dynamic Serialize_dyn();

		virtual ::haxor::io::serialization::SerializedData GetSerializedData( Dynamic p_target);
		Dynamic GetSerializedData_dyn();

		virtual ::haxor::io::serialization::SerializedData SerializeStep( ::haxor::io::serialization::SerializedData p_parent,Dynamic p_target);
		Dynamic SerializeStep_dyn();

		virtual Dynamic Deserialize( ::String p_data);
		Dynamic Deserialize_dyn();

		virtual Dynamic DeserializeField( ::haxor::io::serialization::SerializedField p_field,Dynamic p_target);
		Dynamic DeserializeField_dyn();

		virtual Dynamic DeserializeData( ::haxor::io::serialization::SerializedData p_data);
		Dynamic DeserializeData_dyn();

		virtual ::haxor::io::serialization::SerializedField GetField( ::haxor::io::serialization::SerializedData p_node,::String p_name);
		Dynamic GetField_dyn();

		virtual Array< ::Dynamic > GetClassPath( Dynamic p_var);
		Dynamic GetClassPath_dyn();

		virtual ::String OnField( ::haxor::io::serialization::SerializedField p_field);
		Dynamic OnField_dyn();

		virtual ::String OnSerialize( ::haxor::io::serialization::SerializedData p_root);
		Dynamic OnSerialize_dyn();

		static ::String ToString( Dynamic p_v);
		static Dynamic ToString_dyn();

		static Dynamic FromString( ::String p_v,::String p_t);
		static Dynamic FromString_dyn();

};

} // end namespace haxor
} // end namespace io
} // end namespace serialization

#endif /* INCLUDED_haxor_io_serialization_Formatter */ 
