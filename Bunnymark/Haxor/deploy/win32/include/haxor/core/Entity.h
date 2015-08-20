#ifndef INCLUDED_haxor_core_Entity
#define INCLUDED_haxor_core_Entity

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_ISerializable
#include <haxor/io/serialization/ISerializable.h>
#endif
HX_DECLARE_CLASS2(haxor,component,Behaviour)
HX_DECLARE_CLASS2(haxor,component,Camera)
HX_DECLARE_CLASS2(haxor,component,Component)
HX_DECLARE_CLASS2(haxor,component,DataComponent)
HX_DECLARE_CLASS2(haxor,component,Renderer)
HX_DECLARE_CLASS2(haxor,component,Transform)
HX_DECLARE_CLASS3(haxor,component,animation,Animation)
HX_DECLARE_CLASS3(haxor,component,physics,RigidBody)
HX_DECLARE_CLASS2(haxor,core,Entity)
HX_DECLARE_CLASS2(haxor,core,IDisposable)
HX_DECLARE_CLASS2(haxor,core,IResizeable)
HX_DECLARE_CLASS2(haxor,core,Resource)
HX_DECLARE_CLASS3(haxor,io,serialization,Formatter)
HX_DECLARE_CLASS3(haxor,io,serialization,ISerializable)
HX_DECLARE_CLASS3(haxor,io,serialization,SerializedField)
namespace haxor{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  Entity_obj : public ::haxor::core::Resource_obj{
	public:
		typedef ::haxor::core::Resource_obj super;
		typedef Entity_obj OBJ_;
		Entity_obj();
		Void __construct(::String __o_p_name);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.core.Entity")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Entity_obj > __new(::String __o_p_name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Entity_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::haxor::io::serialization::ISerializable_obj *();
		::String __ToString() const { return HX_HCSTRING("Entity","\x43","\x87","\xb0","\x39"); }

		static void __boot();
		virtual bool get_enabled( );
		Dynamic get_enabled_dyn();

		virtual bool set_enabled( bool v);
		Dynamic set_enabled_dyn();

		bool m_enabled;
		::haxor::component::Transform transform;
		virtual ::haxor::component::Transform get_transform( );
		Dynamic get_transform_dyn();

		::haxor::component::Transform m_transform;
		virtual ::haxor::component::Camera get_camera( );
		Dynamic get_camera_dyn();

		virtual ::haxor::component::DataComponent get_data( );
		Dynamic get_data_dyn();

		virtual ::haxor::component::animation::Animation get_animation( );
		Dynamic get_animation_dyn();

		virtual ::haxor::component::Renderer get_renderer( );
		Dynamic get_renderer_dyn();

		virtual ::haxor::component::physics::RigidBody get_rigidbody( );
		Dynamic get_rigidbody_dyn();

		virtual int get_layer( );
		Dynamic get_layer_dyn();

		virtual int set_layer( int v);
		Dynamic set_layer_dyn();

		int m_layer;
		Array< ::Dynamic > m_components;
		virtual Dynamic AddComponent( ::hx::Class p_type);
		Dynamic AddComponent_dyn();

		virtual Dynamic GetComponent( ::hx::Class p_type);
		Dynamic GetComponent_dyn();

		virtual Dynamic GetComponents( ::hx::Class p_type);
		Dynamic GetComponents_dyn();

		virtual Dynamic GetComponentInChildren( ::hx::Class p_type);
		Dynamic GetComponentInChildren_dyn();

		virtual Dynamic GetComponentsInChildren( ::hx::Class p_type);
		Dynamic GetComponentsInChildren_dyn();

		virtual Void OnDestroy( );

		virtual ::String OnSerializeField( ::haxor::io::serialization::SerializedField p_field,::haxor::io::serialization::Formatter p_fmt);
		Dynamic OnSerializeField_dyn();

		virtual bool OnDeserializeField( ::haxor::io::serialization::SerializedField p_field,::haxor::io::serialization::Formatter p_fmt);
		Dynamic OnDeserializeField_dyn();

		static Dynamic __meta__;
};

} // end namespace haxor
} // end namespace core

#endif /* INCLUDED_haxor_core_Entity */ 
