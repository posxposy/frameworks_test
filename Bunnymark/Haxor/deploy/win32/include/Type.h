#ifndef INCLUDED_Type
#define INCLUDED_Type

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Type)
HX_DECLARE_CLASS0(ValueType)


class HXCPP_CLASS_ATTRIBUTES  Type_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Type_obj OBJ_;
		Type_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="Type")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Type_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Type_obj();

		HX_DO_RTTI_ALL;
static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Type","\xda","\x1e","\xe2","\x37"); }

		static ::hx::Class getClass( Dynamic o);
		static Dynamic getClass_dyn();

		static ::hx::Class getSuperClass( ::hx::Class c);
		static Dynamic getSuperClass_dyn();

		static ::String getClassName( ::hx::Class c);
		static Dynamic getClassName_dyn();

		static ::hx::Class resolveClass( ::String name);
		static Dynamic resolveClass_dyn();

		static Dynamic createInstance( ::hx::Class cl,Dynamic args);
		static Dynamic createInstance_dyn();

		static ::ValueType _typeof( Dynamic v);
		static Dynamic _typeof_dyn();

};


#endif /* INCLUDED_Type */ 
