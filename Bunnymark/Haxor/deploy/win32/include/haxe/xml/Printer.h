#ifndef INCLUDED_haxe_xml_Printer
#define INCLUDED_haxe_xml_Printer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(StringBuf)
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS2(haxe,xml,Printer)
namespace haxe{
namespace xml{


class HXCPP_CLASS_ATTRIBUTES  Printer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Printer_obj OBJ_;
		Printer_obj();
		Void __construct(bool pretty);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.xml.Printer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Printer_obj > __new(bool pretty);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Printer_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Printer","\xba","\xfd","\x84","\x51"); }

		::StringBuf output;
		bool pretty;
		virtual Void writeNode( ::Xml value,::String tabs);
		Dynamic writeNode_dyn();

		virtual bool hasChildren( ::Xml value);
		Dynamic hasChildren_dyn();

		static ::String print( ::Xml xml,Dynamic pretty);
		static Dynamic print_dyn();

};

} // end namespace haxe
} // end namespace xml

#endif /* INCLUDED_haxe_xml_Printer */ 
