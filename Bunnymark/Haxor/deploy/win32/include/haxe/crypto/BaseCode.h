#ifndef INCLUDED_haxe_crypto_BaseCode
#define INCLUDED_haxe_crypto_BaseCode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,crypto,BaseCode)
HX_DECLARE_CLASS2(haxe,io,Bytes)
namespace haxe{
namespace crypto{


class HXCPP_CLASS_ATTRIBUTES  BaseCode_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BaseCode_obj OBJ_;
		BaseCode_obj();
		Void __construct(::haxe::io::Bytes base);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.crypto.BaseCode")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BaseCode_obj > __new(::haxe::io::Bytes base);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BaseCode_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("BaseCode","\xfe","\x5d","\xc4","\xcf"); }

		::haxe::io::Bytes base;
		int nbits;
		Array< int > tbl;
		virtual ::haxe::io::Bytes encodeBytes( ::haxe::io::Bytes b);
		Dynamic encodeBytes_dyn();

		virtual Void initTable( );
		Dynamic initTable_dyn();

		virtual ::haxe::io::Bytes decodeBytes( ::haxe::io::Bytes b);
		Dynamic decodeBytes_dyn();

};

} // end namespace haxe
} // end namespace crypto

#endif /* INCLUDED_haxe_crypto_BaseCode */ 
