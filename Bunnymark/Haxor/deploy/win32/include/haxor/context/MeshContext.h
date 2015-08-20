#ifndef INCLUDED_haxor_context_MeshContext
#define INCLUDED_haxor_context_MeshContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxor,context,MeshContext)
HX_DECLARE_CLASS2(haxor,context,UID)
HX_DECLARE_CLASS2(haxor,core,IDisposable)
HX_DECLARE_CLASS2(haxor,core,Resource)
HX_DECLARE_CLASS3(haxor,graphics,mesh,Mesh)
HX_DECLARE_CLASS3(haxor,graphics,mesh,MeshAttrib)
namespace haxor{
namespace context{


class HXCPP_CLASS_ATTRIBUTES  MeshContext_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MeshContext_obj OBJ_;
		MeshContext_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.context.MeshContext")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MeshContext_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MeshContext_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("MeshContext","\x62","\xd3","\x00","\x86"); }

		::haxor::context::UID aid;
		::haxor::context::UID mid;
		Array< ::String > attribs;
		Array< int > buffers;
		int bound_element;
		Array< int > vao;
		Array< bool > activated;
		int active_max;
		::haxor::graphics::mesh::Mesh current;
		bool m_auto_white;
		virtual Void Initialize( );
		Dynamic Initialize_dyn();

		virtual Void Create( ::haxor::graphics::mesh::Mesh p_mesh);
		Dynamic Create_dyn();

		virtual Void Destroy( ::haxor::graphics::mesh::Mesh p_mesh);
		Dynamic Destroy_dyn();

		virtual Void Bind( ::haxor::graphics::mesh::Mesh p_mesh);
		Dynamic Bind_dyn();

		virtual Void ActivateAttributes( );
		Dynamic ActivateAttributes_dyn();

		virtual Void Unbind( ::haxor::graphics::mesh::Mesh p_next);
		Dynamic Unbind_dyn();

		virtual Void Draw( ::haxor::graphics::mesh::Mesh m);
		Dynamic Draw_dyn();

		virtual Void RemoveAttrib( ::haxor::graphics::mesh::MeshAttrib p_attrib,::haxor::graphics::mesh::Mesh p_mesh);
		Dynamic RemoveAttrib_dyn();

		virtual Void UpdateAttrib( ::haxor::graphics::mesh::MeshAttrib a,int p_mode,bool p_is_index,::haxor::graphics::mesh::Mesh p_mesh);
		Dynamic UpdateAttrib_dyn();

};

} // end namespace haxor
} // end namespace context

#endif /* INCLUDED_haxor_context_MeshContext */ 
