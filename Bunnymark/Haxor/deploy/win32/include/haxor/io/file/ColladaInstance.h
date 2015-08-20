#ifndef INCLUDED_haxor_io_file_ColladaInstance
#define INCLUDED_haxor_io_file_ColladaInstance

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxor,io,file,ColladaInstance)
namespace haxor{
namespace io{
namespace file{


class HXCPP_CLASS_ATTRIBUTES  ColladaInstance_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ColladaInstance_obj OBJ_;
		ColladaInstance_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.io.file.ColladaInstance")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ColladaInstance_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ColladaInstance_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ColladaInstance","\x07","\x43","\x62","\xa3"); }

		::String type;
		::String target;
		Array< ::String > materials;
};

} // end namespace haxor
} // end namespace io
} // end namespace file

#endif /* INCLUDED_haxor_io_file_ColladaInstance */ 