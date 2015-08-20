#ifndef INCLUDED_haxor_io_file_ColladaNode
#define INCLUDED_haxor_io_file_ColladaNode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxor,io,file,ColladaInstance)
HX_DECLARE_CLASS3(haxor,io,file,ColladaNode)
HX_DECLARE_CLASS3(haxor,io,file,ColladaVisualScene)
HX_DECLARE_CLASS2(haxor,math,Matrix4)
HX_DECLARE_CLASS2(haxor,math,Quaternion)
HX_DECLARE_CLASS2(haxor,math,Vector3)
namespace haxor{
namespace io{
namespace file{


class HXCPP_CLASS_ATTRIBUTES  ColladaNode_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ColladaNode_obj OBJ_;
		ColladaNode_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.io.file.ColladaNode")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ColladaNode_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ColladaNode_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ColladaNode","\x74","\x0c","\xb4","\x04"); }

		::String type;
		::String id;
		::String sid;
		::String name;
		Array< Float > matrix;
		::haxor::io::file::ColladaVisualScene scene;
		::haxor::io::file::ColladaNode parent;
		Array< ::Dynamic > children;
		::String data;
		::haxor::math::Matrix4 local;
		virtual ::haxor::math::Matrix4 get_world( );
		Dynamic get_world_dyn();

		::haxor::math::Matrix4 m_world;
		::haxor::math::Vector3 position;
		::haxor::math::Quaternion rotation;
		::haxor::math::Vector3 scale;
		Array< ::Dynamic > instances;
		virtual Void GenerateTranform( );
		Dynamic GenerateTranform_dyn();

};

} // end namespace haxor
} // end namespace io
} // end namespace file

#endif /* INCLUDED_haxor_io_file_ColladaNode */ 
