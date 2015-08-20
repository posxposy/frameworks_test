#ifndef INCLUDED_haxor_graphics_GraphicAPI
#define INCLUDED_haxor_graphics_GraphicAPI

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxor,graphics,GraphicAPI)
namespace haxor{
namespace graphics{


class GraphicAPI_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef GraphicAPI_obj OBJ_;

	public:
		GraphicAPI_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("haxor.graphics.GraphicAPI","\x89","\x0d","\x94","\x9b"); }
		::String __ToString() const { return HX_HCSTRING("GraphicAPI.","\xfc","\x38","\x74","\x5e") + tag; }

		static ::haxor::graphics::GraphicAPI None;
		static inline ::haxor::graphics::GraphicAPI None_dyn() { return None; }
		static ::haxor::graphics::GraphicAPI OpenGL;
		static inline ::haxor::graphics::GraphicAPI OpenGL_dyn() { return OpenGL; }
		static ::haxor::graphics::GraphicAPI OpenGLES;
		static inline ::haxor::graphics::GraphicAPI OpenGLES_dyn() { return OpenGLES; }
		static ::haxor::graphics::GraphicAPI WebGL;
		static inline ::haxor::graphics::GraphicAPI WebGL_dyn() { return WebGL; }
};

} // end namespace haxor
} // end namespace graphics

#endif /* INCLUDED_haxor_graphics_GraphicAPI */ 
