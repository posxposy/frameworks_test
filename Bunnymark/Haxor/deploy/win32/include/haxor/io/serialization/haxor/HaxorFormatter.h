#ifndef INCLUDED_haxor_io_serialization_haxor_HaxorFormatter
#define INCLUDED_haxor_io_serialization_haxor_HaxorFormatter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxor_io_serialization_Formatter
#include <haxor/io/serialization/Formatter.h>
#endif
HX_DECLARE_CLASS3(haxor,io,serialization,Formatter)
HX_DECLARE_CLASS3(haxor,io,serialization,SerializedData)
HX_DECLARE_CLASS4(haxor,io,serialization,haxor,HaxorFormatter)
namespace haxor{
namespace io{
namespace serialization{
namespace haxor{


class HXCPP_CLASS_ATTRIBUTES  HaxorFormatter_obj : public ::haxor::io::serialization::Formatter_obj{
	public:
		typedef ::haxor::io::serialization::Formatter_obj super;
		typedef HaxorFormatter_obj OBJ_;
		HaxorFormatter_obj();
		Void __construct(hx::Null< bool >  __o_p_has_tabs);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxor.io.serialization.haxor.HaxorFormatter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< HaxorFormatter_obj > __new(hx::Null< bool >  __o_p_has_tabs);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HaxorFormatter_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("HaxorFormatter","\x88","\x10","\x3f","\x3d"); }

		bool m_has_tabs;
		virtual Dynamic Deserialize( ::String p_data);

		virtual ::String OnSerialize( ::haxor::io::serialization::SerializedData p_root);

		virtual Void Clean( ::haxor::io::serialization::SerializedData n);
		Dynamic Clean_dyn();

		static Dynamic Parse( ::String p_data);
		static Dynamic Parse_dyn();

		static ::String ToString( Dynamic p_target,hx::Null< bool >  p_has_tabs);
		static Dynamic ToString_dyn();

};

} // end namespace haxor
} // end namespace io
} // end namespace serialization
} // end namespace haxor

#endif /* INCLUDED_haxor_io_serialization_haxor_HaxorFormatter */ 
