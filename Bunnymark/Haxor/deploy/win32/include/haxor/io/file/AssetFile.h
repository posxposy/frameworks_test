#ifndef INCLUDED_haxor_io_file_AssetFile
#define INCLUDED_haxor_io_file_AssetFile

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
HX_DECLARE_CLASS2(haxor,core,IDisposable)
HX_DECLARE_CLASS2(haxor,core,Resource)
HX_DECLARE_CLASS3(haxor,io,file,AssetFile)
namespace haxor{
namespace io{
namespace file{


class HXCPP_CLASS_ATTRIBUTES  AssetFile_obj : public ::haxor::core::Resource_obj{
	public:
		typedef ::haxor::core::Resource_obj super;
		typedef AssetFile_obj OBJ_;
		AssetFile_obj();
		Void __construct(::String p_name);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.io.file.AssetFile")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AssetFile_obj > __new(::String p_name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssetFile_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("AssetFile","\x6c","\xfc","\x34","\x4a"); }

		Dynamic asset;
		virtual Dynamic get_asset( );
		Dynamic get_asset_dyn();

		virtual Array< Float > stof32a( ::String v,::String sep);
		Dynamic stof32a_dyn();

		virtual Array< int > stoi16a( ::String v,::String sep);
		Dynamic stoi16a_dyn();

		virtual Array< ::Dynamic > stoi16ta( ::String v,int s,::String sep);
		Dynamic stoi16ta_dyn();

};

} // end namespace haxor
} // end namespace io
} // end namespace file

#endif /* INCLUDED_haxor_io_file_AssetFile */ 
