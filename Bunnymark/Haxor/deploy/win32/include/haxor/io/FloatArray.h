#ifndef INCLUDED_haxor_io_FloatArray
#define INCLUDED_haxor_io_FloatArray

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxor_io_Buffer
#include <haxor/io/Buffer.h>
#endif
HX_DECLARE_CLASS2(haxor,io,Buffer)
HX_DECLARE_CLASS2(haxor,io,FloatArray)
namespace haxor{
namespace io{


class HXCPP_CLASS_ATTRIBUTES  FloatArray_obj : public ::haxor::io::Buffer_obj{
	public:
		typedef ::haxor::io::Buffer_obj super;
		typedef FloatArray_obj OBJ_;
		FloatArray_obj();
		Void __construct(int p_length);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.io.FloatArray")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FloatArray_obj > __new(int p_length);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FloatArray_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FloatArray","\x7d","\x46","\xd9","\x3a"); }

		virtual int get_bytesPerElement( );

		virtual Void Resize( int p_length);

		virtual Float Get( int p_index);
		Dynamic Get_dyn();

		virtual Void Set( int p_index,Float p_value);
		Dynamic Set_dyn();

		virtual Void SetRange( Array< Float > p_data,hx::Null< int >  p_offset);
		Dynamic SetRange_dyn();

		virtual Array< Float > ToArray( );
		Dynamic ToArray_dyn();

		virtual Void SetViewSlice( int p_start,int p_length);

		static ::haxor::io::FloatArray Alloc( Array< Float > p_data);
		static Dynamic Alloc_dyn();

		static ::haxor::io::FloatArray FromBase64( ::String p_data);
		static Dynamic FromBase64_dyn();

		static ::haxor::io::FloatArray Parse( ::String p_data,::String p_delimiter,hx::Null< bool >  p_is_byte);
		static Dynamic Parse_dyn();

};

} // end namespace haxor
} // end namespace io

#endif /* INCLUDED_haxor_io_FloatArray */ 
