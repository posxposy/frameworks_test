#ifndef INCLUDED_haxor_math_Random
#define INCLUDED_haxor_math_Random

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxor,core,IDisposable)
HX_DECLARE_CLASS2(haxor,core,Resource)
HX_DECLARE_CLASS3(haxor,graphics,mesh,Mesh)
HX_DECLARE_CLASS2(haxor,math,Quaternion)
HX_DECLARE_CLASS2(haxor,math,Random)
HX_DECLARE_CLASS2(haxor,math,Vector2)
HX_DECLARE_CLASS2(haxor,math,Vector3)
HX_DECLARE_CLASS2(haxor,math,Vector4)
namespace haxor{
namespace math{


class HXCPP_CLASS_ATTRIBUTES  Random_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Random_obj OBJ_;
		Random_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxor.math.Random")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Random_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Random_obj();

		HX_DO_RTTI_ALL;
static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Random","\x23","\x96","\x23","\xec"); }

		static Float value;
		static Float get_value( );
		static Dynamic get_value_dyn();

		static Float interval;
		static Float get_interval( );
		static Dynamic get_interval_dyn();

		static ::haxor::math::Quaternion rotation;
		static ::haxor::math::Quaternion get_rotation( );
		static Dynamic get_rotation_dyn();

		static ::haxor::math::Vector3 box;
		static ::haxor::math::Vector3 get_box( );
		static Dynamic get_box_dyn();

		static ::haxor::math::Vector3 onBox;
		static ::haxor::math::Vector3 get_onBox( );
		static Dynamic get_onBox_dyn();

		static ::haxor::math::Vector2 square;
		static ::haxor::math::Vector2 get_square( );
		static Dynamic get_square_dyn();

		static ::haxor::math::Vector2 onSquare;
		static ::haxor::math::Vector2 get_onSquare( );
		static Dynamic get_onSquare_dyn();

		static ::haxor::math::Vector3 sphere;
		static ::haxor::math::Vector3 get_sphere( );
		static Dynamic get_sphere_dyn();

		static ::haxor::math::Vector3 onSphere;
		static ::haxor::math::Vector3 get_onSphere( );
		static Dynamic get_onSphere_dyn();

		static ::haxor::math::Vector2 circle;
		static ::haxor::math::Vector2 get_circle( );
		static Dynamic get_circle_dyn();

		static ::haxor::math::Vector2 onCircle;
		static ::haxor::math::Vector2 get_onCircle( );
		static Dynamic get_onCircle_dyn();

		static int Length( int v);
		static Dynamic Length_dyn();

		static Float Range( Float p_min,Float p_max);
		static Dynamic Range_dyn();

		static int RangeInt( int p_min,int p_max);
		static Dynamic RangeInt_dyn();

		static Dynamic Item( Dynamic p_list);
		static Dynamic Item_dyn();

		static Void Shuffle( Dynamic p_list);
		static Dynamic Shuffle_dyn();

		static ::haxor::math::Quaternion GetRotation( ::haxor::math::Quaternion p_result);
		static Dynamic GetRotation_dyn();

		static ::haxor::math::Vector3 GetBox( ::haxor::math::Vector3 p_result);
		static Dynamic GetBox_dyn();

		static ::haxor::math::Vector3 GetOnBox( ::haxor::math::Vector3 p_result);
		static Dynamic GetOnBox_dyn();

		static ::haxor::math::Vector2 GetSquare( ::haxor::math::Vector2 p_result);
		static Dynamic GetSquare_dyn();

		static ::haxor::math::Vector2 GetOnSquare( ::haxor::math::Vector2 p_result);
		static Dynamic GetOnSquare_dyn();

		static ::haxor::math::Vector3 GetOnSphere( ::haxor::math::Vector3 p_result);
		static Dynamic GetOnSphere_dyn();

		static ::haxor::math::Vector3 GetSphere( ::haxor::math::Vector3 p_result);
		static Dynamic GetSphere_dyn();

		static ::haxor::math::Vector2 GetOnCircle( ::haxor::math::Vector2 p_result);
		static Dynamic GetOnCircle_dyn();

		static ::haxor::math::Vector2 GetCircle( ::haxor::math::Vector2 p_result);
		static Dynamic GetCircle_dyn();

		static ::haxor::math::Vector3 GetOnCone( ::haxor::math::Vector3 p_result,hx::Null< Float >  p_height,hx::Null< Float >  p_angle);
		static Dynamic GetOnCone_dyn();

		static ::haxor::math::Vector3 GetCone( ::haxor::math::Vector3 p_result,hx::Null< Float >  p_height,hx::Null< Float >  p_angle);
		static Dynamic GetCone_dyn();

		static ::haxor::math::Vector3 GetOnCylinder( ::haxor::math::Vector3 p_result,hx::Null< Float >  p_height,hx::Null< Float >  p_radius);
		static Dynamic GetOnCylinder_dyn();

		static ::haxor::math::Vector3 GetCylinder( ::haxor::math::Vector3 p_result,hx::Null< Float >  p_height,hx::Null< Float >  p_radius);
		static Dynamic GetCylinder_dyn();

		static ::haxor::math::Vector4 GetMeshAttrib( ::haxor::graphics::mesh::Mesh p_mesh,::haxor::math::Vector4 p_result,::String p_attrib);
		static Dynamic GetMeshAttrib_dyn();

		static int GetMeshPrimitive( ::haxor::graphics::mesh::Mesh p_mesh,::haxor::math::Vector4 p_v0,::haxor::math::Vector4 p_v1,::haxor::math::Vector4 p_v2,::String p_attrib);
		static Dynamic GetMeshPrimitive_dyn();

		static ::haxor::math::Vector4 GetAttribOnMesh( ::haxor::graphics::mesh::Mesh p_mesh,::haxor::math::Vector4 p_result,::String p_attrib);
		static Dynamic GetAttribOnMesh_dyn();

};

} // end namespace haxor
} // end namespace math

#endif /* INCLUDED_haxor_math_Random */ 
