#ifndef INCLUDED_haxor_context_DataContext
#define INCLUDED_haxor_context_DataContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxor,context,DataContext)
HX_DECLARE_CLASS2(haxor,ds,IUSetItem)
HX_DECLARE_CLASS2(haxor,math,AABB2)
HX_DECLARE_CLASS2(haxor,math,AABB3)
HX_DECLARE_CLASS2(haxor,math,Color)
HX_DECLARE_CLASS2(haxor,math,Matrix4)
HX_DECLARE_CLASS2(haxor,math,Quaternion)
HX_DECLARE_CLASS2(haxor,math,Vector2)
HX_DECLARE_CLASS2(haxor,math,Vector3)
HX_DECLARE_CLASS2(haxor,math,Vector4)
HX_DECLARE_CLASS2(haxor,physics,Collision)
namespace haxor{
namespace context{


class HXCPP_CLASS_ATTRIBUTES  DataContext_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DataContext_obj OBJ_;
		DataContext_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.context.DataContext")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DataContext_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DataContext_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("DataContext","\xc5","\x78","\x95","\x3f"); }

		static void __boot();
		Array< int > i;
		Array< Float > v;
		::haxor::math::Vector2 v2;
		virtual ::haxor::math::Vector2 get_v2( );
		Dynamic get_v2_dyn();

		Array< ::Dynamic > m_v2;
		int m_nv2;
		::haxor::math::Vector3 v3;
		virtual ::haxor::math::Vector3 get_v3( );
		Dynamic get_v3_dyn();

		Array< ::Dynamic > m_v3;
		int m_nv3;
		::haxor::math::Vector4 v4;
		virtual ::haxor::math::Vector4 get_v4( );
		Dynamic get_v4_dyn();

		Array< ::Dynamic > m_v4;
		int m_nv4;
		::haxor::math::Color c;
		virtual ::haxor::math::Color get_c( );
		Dynamic get_c_dyn();

		Array< ::Dynamic > m_c;
		int m_nc;
		::haxor::math::Quaternion q;
		virtual ::haxor::math::Quaternion get_q( );
		Dynamic get_q_dyn();

		Array< ::Dynamic > m_q;
		int m_nq;
		::haxor::math::AABB3 aabb3;
		virtual ::haxor::math::AABB3 get_aabb3( );
		Dynamic get_aabb3_dyn();

		Array< ::Dynamic > m_aabb3;
		int m_naabb3;
		::haxor::math::AABB2 aabb2;
		virtual ::haxor::math::AABB2 get_aabb2( );
		Dynamic get_aabb2_dyn();

		Array< ::Dynamic > m_aabb2;
		int m_naabb2;
		::haxor::physics::Collision collision;
		virtual ::haxor::physics::Collision get_collision( );
		Dynamic get_collision_dyn();

		Array< ::Dynamic > m_collision;
		int m_ncollision;
		::haxor::math::Matrix4 m4;
		virtual ::haxor::math::Matrix4 get_m4( );
		Dynamic get_m4_dyn();

		Array< ::Dynamic > m_m4;
		int m_nm4;
		Array< Float > m4l;
		static int MAX_TEMP;
};

} // end namespace haxor
} // end namespace context

#endif /* INCLUDED_haxor_context_DataContext */ 
