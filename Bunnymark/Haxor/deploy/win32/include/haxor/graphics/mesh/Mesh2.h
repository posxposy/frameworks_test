#ifndef INCLUDED_haxor_graphics_mesh_Mesh2
#define INCLUDED_haxor_graphics_mesh_Mesh2

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxor_graphics_mesh_MeshLayout
#include <haxor/graphics/mesh/MeshLayout.h>
#endif
HX_DECLARE_CLASS2(haxor,core,IDisposable)
HX_DECLARE_CLASS2(haxor,core,Resource)
HX_DECLARE_CLASS3(haxor,graphics,mesh,Mesh)
HX_DECLARE_CLASS3(haxor,graphics,mesh,Mesh2)
HX_DECLARE_CLASS3(haxor,graphics,mesh,MeshLayout)
namespace haxor{
namespace graphics{
namespace mesh{


class HXCPP_CLASS_ATTRIBUTES  Mesh2_obj : public ::haxor::graphics::mesh::MeshLayout_obj{
	public:
		typedef ::haxor::graphics::mesh::MeshLayout_obj super;
		typedef Mesh2_obj OBJ_;
		Mesh2_obj();
		Void __construct(::String __o_p_name);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.graphics.mesh.Mesh2")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Mesh2_obj > __new(::String __o_p_name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Mesh2_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Mesh2","\x85","\xd5","\xf4","\x98"); }

};

} // end namespace haxor
} // end namespace graphics
} // end namespace mesh

#endif /* INCLUDED_haxor_graphics_mesh_Mesh2 */ 
