#ifndef INCLUDED_haxor_core_Resource
#define INCLUDED_haxor_core_Resource

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
HX_DECLARE_CLASS2(haxor,component,Behaviour)
HX_DECLARE_CLASS2(haxor,component,Component)
HX_DECLARE_CLASS2(haxor,core,Application)
HX_DECLARE_CLASS2(haxor,core,BaseApplication)
HX_DECLARE_CLASS2(haxor,core,Entity)
HX_DECLARE_CLASS2(haxor,core,IDisposable)
HX_DECLARE_CLASS2(haxor,core,Resource)
HX_DECLARE_CLASS3(haxor,io,serialization,Formatter)
HX_DECLARE_CLASS3(haxor,io,serialization,ISerializable)
HX_DECLARE_CLASS4(haxor,io,serialization,haxor,HaxorFormatter)
HX_DECLARE_CLASS3(haxor,platform,windows,WinApplication)
namespace haxor{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  Resource_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Resource_obj OBJ_;
		Resource_obj();
		Void __construct(::String __o_p_name);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.core.Resource")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Resource_obj > __new(::String __o_p_name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Resource_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::haxor::core::IDisposable_obj *();
		::String __ToString() const { return HX_HCSTRING("Resource","\xee","\x18","\x52","\xec"); }

		static void __boot();
		::haxor::core::Application application;
		virtual ::haxor::core::Application get_application( );
		Dynamic get_application_dyn();

		virtual ::String get_guid( );
		Dynamic get_guid_dyn();

		virtual ::String set_guid( ::String v);
		Dynamic set_guid_dyn();

		::String m_guid;
		int uid;
		virtual int get_uid( );
		Dynamic get_uid_dyn();

		int m_uid;
		virtual ::String get_name( );
		Dynamic get_name_dyn();

		virtual ::String set_name( ::String v);
		Dynamic set_name_dyn();

		::String m_name;
		bool destroyed;
		virtual bool get_destroyed( );
		Dynamic get_destroyed_dyn();

		bool m_destroyed;
		int __cid;
		::String __db;
		Array< int > __pid;
		::String m_type_name;
		::String m_type_full_name;
		::hx::Class m_type_class;
		bool m_is_behaviour;
		virtual ::hx::Class GetType( );
		Dynamic GetType_dyn();

		virtual ::String GetTypeName( );
		Dynamic GetTypeName_dyn();

		virtual ::String GetTypeFullName( );
		Dynamic GetTypeFullName_dyn();

		virtual Void OnDestroy( );
		Dynamic OnDestroy_dyn();

		static Dynamic __meta__;
		static Dynamic Instantiate( ::haxor::core::Resource p_resource);
		static Dynamic Instantiate_dyn();

		static ::haxor::core::Entity InstantiateStep( ::haxor::core::Entity p,::haxor::core::Entity e,::haxor::io::serialization::haxor::HaxorFormatter f);
		static Dynamic InstantiateStep_dyn();

		static Void Destroy( ::haxor::core::Resource p_target);
		static Dynamic Destroy_dyn();

		static ::haxor::core::Resource FindByGUID( ::String p_guid);
		static Dynamic FindByGUID_dyn();

		static ::String GenerateGUID( );
		static Dynamic GenerateGUID_dyn();

};

} // end namespace haxor
} // end namespace core

#endif /* INCLUDED_haxor_core_Resource */ 