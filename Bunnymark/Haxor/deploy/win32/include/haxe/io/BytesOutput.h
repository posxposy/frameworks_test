#ifndef INCLUDED_haxe_io_BytesOutput
#define INCLUDED_haxe_io_BytesOutput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,io,BytesBuffer)
HX_DECLARE_CLASS2(haxe,io,BytesOutput)
HX_DECLARE_CLASS2(haxe,io,Output)
namespace haxe{
namespace io{


class HXCPP_CLASS_ATTRIBUTES  BytesOutput_obj : public ::haxe::io::Output_obj{
	public:
		typedef ::haxe::io::Output_obj super;
		typedef BytesOutput_obj OBJ_;
		BytesOutput_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.io.BytesOutput")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BytesOutput_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BytesOutput_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("BytesOutput","\xac","\xc5","\x0e","\x32"); }

		::haxe::io::BytesBuffer b;
		virtual Void writeByte( int c);

		virtual int writeBytes( ::haxe::io::Bytes buf,int pos,int len);

		virtual ::haxe::io::Bytes getBytes( );
		Dynamic getBytes_dyn();

};

} // end namespace haxe
} // end namespace io

#endif /* INCLUDED_haxe_io_BytesOutput */ 
