#ifndef INCLUDED_haxor_input_InputLog
#define INCLUDED_haxor_input_InputLog

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxor,input,InputLog)
namespace haxor{
namespace input{


class HXCPP_CLASS_ATTRIBUTES  InputLog_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef InputLog_obj OBJ_;
		InputLog_obj();
		Void __construct(int k,Float t);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxor.input.InputLog")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< InputLog_obj > __new(int k,Float t);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~InputLog_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("InputLog","\xba","\xa6","\x5c","\xa0"); }

		int key;
		Float time;
};

} // end namespace haxor
} // end namespace input

#endif /* INCLUDED_haxor_input_InputLog */ 
