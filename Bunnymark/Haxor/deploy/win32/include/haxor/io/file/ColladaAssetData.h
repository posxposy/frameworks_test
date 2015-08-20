#ifndef INCLUDED_haxor_io_file_ColladaAssetData
#define INCLUDED_haxor_io_file_ColladaAssetData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxor,io,file,ColladaAssetData)
namespace haxor{
namespace io{
namespace file{


class HXCPP_CLASS_ATTRIBUTES  ColladaAssetData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ColladaAssetData_obj OBJ_;
		ColladaAssetData_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.io.file.ColladaAssetData")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ColladaAssetData_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ColladaAssetData_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ColladaAssetData","\x88","\x84","\x87","\xae"); }

		::String author;
		::String tool;
		::String source;
		::String creation;
		::String modification;
		::String unitName;
		Float unitValue;
		::String axis;
};

} // end namespace haxor
} // end namespace io
} // end namespace file

#endif /* INCLUDED_haxor_io_file_ColladaAssetData */ 
