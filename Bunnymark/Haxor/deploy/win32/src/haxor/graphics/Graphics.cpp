#include <hxcpp.h>

#ifndef INCLUDED_haxor_component_Behaviour
#include <haxor/component/Behaviour.h>
#endif
#ifndef INCLUDED_haxor_component_Camera
#include <haxor/component/Camera.h>
#endif
#ifndef INCLUDED_haxor_component_Component
#include <haxor/component/Component.h>
#endif
#ifndef INCLUDED_haxor_component_Transform
#include <haxor/component/Transform.h>
#endif
#ifndef INCLUDED_haxor_context_CameraContext
#include <haxor/context/CameraContext.h>
#endif
#ifndef INCLUDED_haxor_context_DataContext
#include <haxor/context/DataContext.h>
#endif
#ifndef INCLUDED_haxor_context_EngineContext
#include <haxor/context/EngineContext.h>
#endif
#ifndef INCLUDED_haxor_context_GizmoContext
#include <haxor/context/GizmoContext.h>
#endif
#ifndef INCLUDED_haxor_context_MaterialContext
#include <haxor/context/MaterialContext.h>
#endif
#ifndef INCLUDED_haxor_context_MeshContext
#include <haxor/context/MeshContext.h>
#endif
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_IResizeable
#include <haxor/core/IResizeable.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_graphics_GL
#include <haxor/graphics/GL.h>
#endif
#ifndef INCLUDED_haxor_graphics_GraphicContext
#include <haxor/graphics/GraphicContext.h>
#endif
#ifndef INCLUDED_haxor_graphics_Graphics
#include <haxor/graphics/Graphics.h>
#endif
#ifndef INCLUDED_haxor_graphics_Screen
#include <haxor/graphics/Screen.h>
#endif
#ifndef INCLUDED_haxor_graphics_material_Material
#include <haxor/graphics/material/Material.h>
#endif
#ifndef INCLUDED_haxor_graphics_mesh_Mesh
#include <haxor/graphics/mesh/Mesh.h>
#endif
#ifndef INCLUDED_haxor_graphics_mesh_Model
#include <haxor/graphics/mesh/Model.h>
#endif
#ifndef INCLUDED_haxor_graphics_texture_Texture
#include <haxor/graphics/texture/Texture.h>
#endif
#ifndef INCLUDED_haxor_graphics_texture_TextureCube
#include <haxor/graphics/texture/TextureCube.h>
#endif
#ifndef INCLUDED_haxor_io_Buffer
#include <haxor/io/Buffer.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_ISerializable
#include <haxor/io/serialization/ISerializable.h>
#endif
#ifndef INCLUDED_haxor_math_AABB2
#include <haxor/math/AABB2.h>
#endif
#ifndef INCLUDED_haxor_math_Color
#include <haxor/math/Color.h>
#endif
#ifndef INCLUDED_haxor_math_Matrix4
#include <haxor/math/Matrix4.h>
#endif
#ifndef INCLUDED_haxor_platform_graphics_OpenGL
#include <haxor/platform/graphics/OpenGL.h>
#endif
#ifndef INCLUDED_haxor_platform_windows_graphics_WinGL
#include <haxor/platform/windows/graphics/WinGL.h>
#endif
namespace haxor{
namespace graphics{

Void Graphics_obj::__construct()
{
	return null();
}

//Graphics_obj::~Graphics_obj() { }

Dynamic Graphics_obj::__CreateEmpty() { return  new Graphics_obj; }
hx::ObjectPtr< Graphics_obj > Graphics_obj::__new()
{  hx::ObjectPtr< Graphics_obj > _result_ = new Graphics_obj();
	_result_->__construct();
	return _result_;}

Dynamic Graphics_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Graphics_obj > _result_ = new Graphics_obj();
	_result_->__construct();
	return _result_;}

::haxor::math::AABB2 Graphics_obj::m_last_viewport;

Void Graphics_obj::Viewport( ::haxor::math::AABB2 p_viewport){
{
		HX_STACK_FRAME("haxor.graphics.Graphics","Viewport",0x9c269ab2,"haxor.graphics.Graphics.Viewport","haxor/graphics/Graphics.hx",33,0x1a55985c)
		HX_STACK_ARG(p_viewport,"p_viewport")
		HX_STACK_LINE(34)
		::haxor::math::AABB2 vp = p_viewport;		HX_STACK_VAR(vp,"vp");
		HX_STACK_LINE(35)
		bool dirty = false;		HX_STACK_VAR(dirty,"dirty");
		HX_STACK_LINE(36)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		{
			HX_STACK_LINE(36)
			Float tmp1 = vp->get_xMin();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(36)
			::haxor::math::AABB2 tmp2 = ::haxor::graphics::Graphics_obj::m_last_viewport;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(36)
			Float tmp3 = tmp2->get_xMin();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(36)
			Float tmp4 = (tmp1 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(36)
			Float p_a = tmp4;		HX_STACK_VAR(p_a,"p_a");
			HX_STACK_LINE(36)
			bool tmp5 = (p_a < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(36)
			if ((tmp5)){
				HX_STACK_LINE(36)
				Float tmp6 = p_a;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(36)
				tmp = -(tmp6);
			}
			else{
				HX_STACK_LINE(36)
				tmp = p_a;
			}
		}
		HX_STACK_LINE(36)
		bool tmp1 = (tmp > ((Float)0.0));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(36)
		if ((tmp1)){
			HX_STACK_LINE(36)
			dirty = true;
		}
		else{
			HX_STACK_LINE(37)
			Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(37)
			{
				HX_STACK_LINE(37)
				Float tmp3 = vp->get_yMin();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(37)
				::haxor::math::AABB2 tmp4 = ::haxor::graphics::Graphics_obj::m_last_viewport;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(37)
				Float tmp5 = tmp4->get_yMin();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(37)
				Float tmp6 = (tmp3 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(37)
				Float p_a = tmp6;		HX_STACK_VAR(p_a,"p_a");
				HX_STACK_LINE(37)
				bool tmp7 = (p_a < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(37)
				if ((tmp7)){
					HX_STACK_LINE(37)
					Float tmp8 = p_a;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(37)
					tmp2 = -(tmp8);
				}
				else{
					HX_STACK_LINE(37)
					tmp2 = p_a;
				}
			}
			HX_STACK_LINE(37)
			bool tmp3 = (tmp2 > ((Float)0.0));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(37)
			if ((tmp3)){
				HX_STACK_LINE(37)
				dirty = true;
			}
			else{
				HX_STACK_LINE(38)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(38)
				{
					HX_STACK_LINE(38)
					Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(38)
					{
						HX_STACK_LINE(38)
						Float tmp6 = vp->get_xMax();		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(38)
						Float tmp7 = vp->get_xMin();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(38)
						Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(38)
						Float p_a = tmp8;		HX_STACK_VAR(p_a,"p_a");
						HX_STACK_LINE(38)
						bool tmp9 = (p_a < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(38)
						if ((tmp9)){
							HX_STACK_LINE(38)
							Float tmp10 = p_a;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(38)
							tmp5 = -(tmp10);
						}
						else{
							HX_STACK_LINE(38)
							tmp5 = p_a;
						}
					}
					HX_STACK_LINE(38)
					Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(38)
					{
						HX_STACK_LINE(38)
						::haxor::math::AABB2 tmp7 = ::haxor::graphics::Graphics_obj::m_last_viewport;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(38)
						::haxor::math::AABB2 _this = tmp7;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(38)
						{
							HX_STACK_LINE(38)
							Float tmp8 = _this->get_xMax();		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(38)
							Float tmp9 = _this->get_xMin();		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(38)
							Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(38)
							Float p_a = tmp10;		HX_STACK_VAR(p_a,"p_a");
							HX_STACK_LINE(38)
							bool tmp11 = (p_a < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(38)
							if ((tmp11)){
								HX_STACK_LINE(38)
								Float tmp12 = p_a;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(38)
								tmp6 = -(tmp12);
							}
							else{
								HX_STACK_LINE(38)
								tmp6 = p_a;
							}
						}
					}
					HX_STACK_LINE(38)
					Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(38)
					Float p_a = tmp7;		HX_STACK_VAR(p_a,"p_a");
					HX_STACK_LINE(38)
					bool tmp8 = (p_a < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(38)
					if ((tmp8)){
						HX_STACK_LINE(38)
						Float tmp9 = p_a;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(38)
						tmp4 = -(tmp9);
					}
					else{
						HX_STACK_LINE(38)
						tmp4 = p_a;
					}
				}
				HX_STACK_LINE(38)
				bool tmp5 = (tmp4 > ((Float)0.0));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(38)
				if ((tmp5)){
					HX_STACK_LINE(38)
					dirty = true;
				}
				else{
					HX_STACK_LINE(39)
					Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(39)
					{
						HX_STACK_LINE(39)
						Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(39)
						{
							HX_STACK_LINE(39)
							Float tmp8 = vp->get_yMax();		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(39)
							Float tmp9 = vp->get_yMin();		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(39)
							Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(39)
							Float p_a = tmp10;		HX_STACK_VAR(p_a,"p_a");
							HX_STACK_LINE(39)
							bool tmp11 = (p_a < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(39)
							if ((tmp11)){
								HX_STACK_LINE(39)
								Float tmp12 = p_a;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(39)
								tmp7 = -(tmp12);
							}
							else{
								HX_STACK_LINE(39)
								tmp7 = p_a;
							}
						}
						HX_STACK_LINE(39)
						Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(39)
						{
							HX_STACK_LINE(39)
							::haxor::math::AABB2 tmp9 = ::haxor::graphics::Graphics_obj::m_last_viewport;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(39)
							::haxor::math::AABB2 _this = tmp9;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(39)
							{
								HX_STACK_LINE(39)
								Float tmp10 = _this->get_yMax();		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(39)
								Float tmp11 = _this->get_yMin();		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(39)
								Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(39)
								Float p_a = tmp12;		HX_STACK_VAR(p_a,"p_a");
								HX_STACK_LINE(39)
								bool tmp13 = (p_a < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(39)
								if ((tmp13)){
									HX_STACK_LINE(39)
									Float tmp14 = p_a;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(39)
									tmp8 = -(tmp14);
								}
								else{
									HX_STACK_LINE(39)
									tmp8 = p_a;
								}
							}
						}
						HX_STACK_LINE(39)
						Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(39)
						Float p_a = tmp9;		HX_STACK_VAR(p_a,"p_a");
						HX_STACK_LINE(39)
						bool tmp10 = (p_a < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(39)
						if ((tmp10)){
							HX_STACK_LINE(39)
							Float tmp11 = p_a;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(39)
							tmp6 = -(tmp11);
						}
						else{
							HX_STACK_LINE(39)
							tmp6 = p_a;
						}
					}
					HX_STACK_LINE(39)
					bool tmp7 = (tmp6 > ((Float)0.0));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(39)
					if ((tmp7)){
						HX_STACK_LINE(39)
						dirty = true;
					}
				}
			}
		}
		HX_STACK_LINE(41)
		bool tmp2 = dirty;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(41)
		if ((tmp2)){
			HX_STACK_LINE(43)
			::haxor::math::AABB2 tmp3 = ::haxor::graphics::Graphics_obj::m_last_viewport;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(43)
			::haxor::math::AABB2 tmp4 = vp;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(43)
			tmp3->SetAABB2(tmp4);
			HX_STACK_LINE(44)
			{
				HX_STACK_LINE(44)
				Float tmp5 = vp->get_xMin();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(44)
				int p_x = ((int)(tmp5));		HX_STACK_VAR(p_x,"p_x");
				HX_STACK_LINE(44)
				Float tmp6 = vp->get_yMin();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(44)
				int p_y = ((int)(tmp6));		HX_STACK_VAR(p_y,"p_y");
				HX_STACK_LINE(44)
				Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(44)
				{
					HX_STACK_LINE(44)
					Float tmp8 = vp->get_xMax();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(44)
					Float tmp9 = vp->get_xMin();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(44)
					Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(44)
					Float p_a = tmp10;		HX_STACK_VAR(p_a,"p_a");
					HX_STACK_LINE(44)
					bool tmp11 = (p_a < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(44)
					if ((tmp11)){
						HX_STACK_LINE(44)
						Float tmp12 = p_a;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(44)
						tmp7 = -(tmp12);
					}
					else{
						HX_STACK_LINE(44)
						tmp7 = p_a;
					}
				}
				HX_STACK_LINE(44)
				int p_width = ((int)(tmp7));		HX_STACK_VAR(p_width,"p_width");
				HX_STACK_LINE(44)
				Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(44)
				{
					HX_STACK_LINE(44)
					Float tmp9 = vp->get_yMax();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(44)
					Float tmp10 = vp->get_yMin();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(44)
					Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(44)
					Float p_a = tmp11;		HX_STACK_VAR(p_a,"p_a");
					HX_STACK_LINE(44)
					bool tmp12 = (p_a < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(44)
					if ((tmp12)){
						HX_STACK_LINE(44)
						Float tmp13 = p_a;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(44)
						tmp8 = -(tmp13);
					}
					else{
						HX_STACK_LINE(44)
						tmp8 = p_a;
					}
				}
				HX_STACK_LINE(44)
				int p_height = ((int)(tmp8));		HX_STACK_VAR(p_height,"p_height");
				HX_STACK_LINE(44)
				::haxor::platform::graphics::OpenGL tmp9 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(44)
				int tmp10 = p_x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(44)
				int tmp11 = p_y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(44)
				int tmp12 = p_width;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(44)
				int tmp13 = p_height;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(44)
				tmp9->Viewport(tmp10,tmp11,tmp12,tmp13);
			}
			HX_STACK_LINE(45)
			{
				HX_STACK_LINE(45)
				Float tmp5 = vp->get_xMin();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(45)
				int p_x = ((int)(tmp5));		HX_STACK_VAR(p_x,"p_x");
				HX_STACK_LINE(45)
				Float tmp6 = vp->get_yMin();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(45)
				int p_y = ((int)(tmp6));		HX_STACK_VAR(p_y,"p_y");
				HX_STACK_LINE(45)
				Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(45)
				{
					HX_STACK_LINE(45)
					Float tmp8 = vp->get_xMax();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(45)
					Float tmp9 = vp->get_xMin();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(45)
					Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(45)
					Float p_a = tmp10;		HX_STACK_VAR(p_a,"p_a");
					HX_STACK_LINE(45)
					bool tmp11 = (p_a < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(45)
					if ((tmp11)){
						HX_STACK_LINE(45)
						Float tmp12 = p_a;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(45)
						tmp7 = -(tmp12);
					}
					else{
						HX_STACK_LINE(45)
						tmp7 = p_a;
					}
				}
				HX_STACK_LINE(45)
				int p_width = ((int)(tmp7));		HX_STACK_VAR(p_width,"p_width");
				HX_STACK_LINE(45)
				Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(45)
				{
					HX_STACK_LINE(45)
					Float tmp9 = vp->get_yMax();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(45)
					Float tmp10 = vp->get_yMin();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(45)
					Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(45)
					Float p_a = tmp11;		HX_STACK_VAR(p_a,"p_a");
					HX_STACK_LINE(45)
					bool tmp12 = (p_a < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(45)
					if ((tmp12)){
						HX_STACK_LINE(45)
						Float tmp13 = p_a;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(45)
						tmp8 = -(tmp13);
					}
					else{
						HX_STACK_LINE(45)
						tmp8 = p_a;
					}
				}
				HX_STACK_LINE(45)
				int p_height = ((int)(tmp8));		HX_STACK_VAR(p_height,"p_height");
				HX_STACK_LINE(45)
				::haxor::platform::graphics::OpenGL tmp9 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(45)
				int tmp10 = p_x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(45)
				int tmp11 = p_y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(45)
				int tmp12 = p_width;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(45)
				int tmp13 = p_height;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(45)
				tmp9->Scissor(tmp10,tmp11,tmp12,tmp13);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,Viewport,(void))

Void Graphics_obj::Clear( ::haxor::component::Camera p_camera){
{
		HX_STACK_FRAME("haxor.graphics.Graphics","Clear",0x675b7bc1,"haxor.graphics.Graphics.Clear","haxor/graphics/Graphics.hx",54,0x1a55985c)
		HX_STACK_ARG(p_camera,"p_camera")
		HX_STACK_LINE(55)
		::haxor::component::Camera c = p_camera;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(56)
		::haxor::math::AABB2 tmp = p_camera->m_pixelViewport;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(56)
		::haxor::graphics::Graphics_obj::Viewport(tmp);
		HX_STACK_LINE(57)
		bool tmp1 = (c->clear != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(57)
		if ((tmp1)){
			HX_STACK_LINE(59)
			int flag = (int)0;		HX_STACK_VAR(flag,"flag");
			HX_STACK_LINE(60)
			int tmp2 = (int(c->clear) & int((int)1));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(60)
			bool tmp3 = (tmp2 != (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(60)
			if ((tmp3)){
				HX_STACK_LINE(60)
				hx::OrEq(flag,(int)16384);
			}
			HX_STACK_LINE(61)
			int tmp4 = (int(c->clear) & int((int)4));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(61)
			bool tmp5 = (tmp4 != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(61)
			if ((tmp5)){
				HX_STACK_LINE(61)
				hx::OrEq(flag,(int)16384);
			}
			HX_STACK_LINE(62)
			int tmp6 = (int(c->clear) & int((int)2));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(62)
			bool tmp7 = (tmp6 != (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(62)
			if ((tmp7)){
				HX_STACK_LINE(62)
				hx::OrEq(flag,(int)256);
			}
			HX_STACK_LINE(63)
			{
				HX_STACK_LINE(63)
				::haxor::platform::graphics::OpenGL tmp8 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(63)
				Float tmp9 = c->background->r;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(63)
				Float tmp10 = c->background->g;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(63)
				Float tmp11 = c->background->b;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(63)
				Float tmp12 = c->background->a;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(63)
				tmp8->ClearColor(tmp9,tmp10,tmp11,tmp12);
			}
			HX_STACK_LINE(64)
			{
				HX_STACK_LINE(64)
				::haxor::platform::graphics::OpenGL tmp8 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(64)
				tmp8->ClearDepth(((Float)1.0));
			}
			HX_STACK_LINE(65)
			{
				HX_STACK_LINE(65)
				::haxor::platform::graphics::OpenGL tmp8 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(65)
				int tmp9 = flag;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(65)
				tmp8->Clear(tmp9);
			}
			HX_STACK_LINE(66)
			int tmp8 = (int(c->clear) & int((int)4));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(66)
			bool tmp9 = (tmp8 != (int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(66)
			if ((tmp9)){
				HX_STACK_LINE(68)
				bool tmp10 = (c->skybox != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(68)
				if ((tmp10)){
					HX_STACK_LINE(70)
					::haxor::context::CameraContext tmp11 = ::haxor::context::EngineContext_obj::camera;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(70)
					::haxor::graphics::material::Material sbm = tmp11->skybox_material;		HX_STACK_VAR(sbm,"sbm");
					HX_STACK_LINE(71)
					::haxor::graphics::texture::TextureCube tmp12 = c->skybox;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(71)
					sbm->SetTexture(HX_HCSTRING("SkyboxTexture","\x11","\x0e","\x92","\x50"),tmp12);
					HX_STACK_LINE(72)
					::haxor::math::Matrix4 tmp13 = c->m_skyboxProjectionInverse;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(72)
					sbm->SetMatrix4(HX_HCSTRING("SkyboxProjectionMatrixInverse","\x96","\xe2","\xb6","\x58"),tmp13,null());
					HX_STACK_LINE(73)
					::haxor::graphics::mesh::Mesh tmp14 = ::haxor::graphics::mesh::Model_obj::get_screen();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(73)
					::haxor::graphics::material::Material tmp15 = sbm;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(73)
					::haxor::component::Camera tmp16 = c;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(73)
					::haxor::graphics::Graphics_obj::Render(tmp14,tmp15,null(),tmp16);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,Clear,(void))

Void Graphics_obj::Render( ::haxor::graphics::mesh::Mesh p_mesh,::haxor::graphics::material::Material p_material,::haxor::component::Transform p_transform,::haxor::component::Camera p_camera){
{
		HX_STACK_FRAME("haxor.graphics.Graphics","Render",0x06324ea2,"haxor.graphics.Graphics.Render","haxor/graphics/Graphics.hx",88,0x1a55985c)
		HX_STACK_ARG(p_mesh,"p_mesh")
		HX_STACK_ARG(p_material,"p_material")
		HX_STACK_ARG(p_transform,"p_transform")
		HX_STACK_ARG(p_camera,"p_camera")
		HX_STACK_LINE(89)
		::haxor::context::MaterialContext tmp = ::haxor::context::EngineContext_obj::material;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(89)
		::haxor::graphics::material::Material tmp1 = p_material;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(89)
		::haxor::component::Transform tmp2 = p_transform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(89)
		::haxor::component::Camera tmp3 = p_camera;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(89)
		::haxor::graphics::mesh::Mesh tmp4 = p_mesh;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(89)
		tmp->Bind(tmp1,tmp2,tmp3,tmp4);
		HX_STACK_LINE(90)
		::haxor::context::MeshContext tmp5 = ::haxor::context::EngineContext_obj::mesh;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(90)
		::haxor::graphics::mesh::Mesh tmp6 = p_mesh;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(90)
		tmp5->Bind(tmp6);
		HX_STACK_LINE(91)
		::haxor::context::MeshContext tmp7 = ::haxor::context::EngineContext_obj::mesh;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(91)
		::haxor::graphics::mesh::Mesh tmp8 = p_mesh;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(91)
		tmp7->Draw(tmp8);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,Render,(void))

Void Graphics_obj::DrawTexture( ::haxor::graphics::texture::Texture p_texture,hx::Null< Float >  __o_p_x,hx::Null< Float >  __o_p_y,hx::Null< Float >  __o_p_width,hx::Null< Float >  __o_p_height,::haxor::math::Color p_color){
Float p_x = __o_p_x.Default(((Float)0.0));
Float p_y = __o_p_y.Default(((Float)0.0));
Float p_width = __o_p_width.Default(256);
Float p_height = __o_p_height.Default(256);
	HX_STACK_FRAME("haxor.graphics.Graphics","DrawTexture",0x9028b66b,"haxor.graphics.Graphics.DrawTexture","haxor/graphics/Graphics.hx",104,0x1a55985c)
	HX_STACK_ARG(p_texture,"p_texture")
	HX_STACK_ARG(p_x,"p_x")
	HX_STACK_ARG(p_y,"p_y")
	HX_STACK_ARG(p_width,"p_width")
	HX_STACK_ARG(p_height,"p_height")
	HX_STACK_ARG(p_color,"p_color")
{
		HX_STACK_LINE(105)
		bool tmp = (p_texture == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(105)
		if ((tmp)){
			HX_STACK_LINE(105)
			return null();
		}
		HX_STACK_LINE(106)
		::haxor::context::GizmoContext tmp1 = ::haxor::context::EngineContext_obj::gizmo;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(106)
		::haxor::graphics::material::Material mat = tmp1->texture_material;		HX_STACK_VAR(mat,"mat");
		HX_STACK_LINE(107)
		Float tmp2 = ::haxor::graphics::Screen_obj::m_width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(107)
		Float tmp3 = ::haxor::graphics::Screen_obj::m_height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(107)
		mat->SetFloat2(HX_HCSTRING("Screen","\x8c","\xaf","\xf1","\x7b"),tmp2,tmp3);
		HX_STACK_LINE(108)
		Float tmp4 = p_x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(108)
		Float tmp5 = p_y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(108)
		Float tmp6 = p_width;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(108)
		Float tmp7 = p_height;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(108)
		mat->SetFloat4(HX_HCSTRING("Rect","\x44","\x79","\x80","\x36"),tmp4,tmp5,tmp6,tmp7);
		HX_STACK_LINE(109)
		::haxor::graphics::texture::Texture tmp8 = p_texture;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(109)
		mat->SetTexture(HX_HCSTRING("DiffuseTexture","\xb9","\xf3","\x75","\x7e"),tmp8);
		HX_STACK_LINE(110)
		bool tmp9 = (p_color == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(110)
		::haxor::math::Color tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(110)
		if ((tmp9)){
			HX_STACK_LINE(110)
			::haxor::math::Color tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(110)
			{
				HX_STACK_LINE(110)
				::haxor::context::DataContext tmp12 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(110)
				::haxor::context::DataContext _this = tmp12;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(110)
				Array< ::Dynamic > tmp13 = _this->m_c;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(110)
				int tmp14 = (_this->m_nc + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(110)
				int tmp15 = _this->m_c->length;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(110)
				int tmp16 = hx::Mod(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(110)
				int tmp17 = _this->m_nc = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(110)
				tmp11 = tmp13->__get(tmp17).StaticCast< ::haxor::math::Color >();
			}
			HX_STACK_LINE(110)
			tmp10 = tmp11->Set((int)1,(int)1,(int)1,(int)1);
		}
		else{
			HX_STACK_LINE(110)
			tmp10 = p_color;
		}
		HX_STACK_LINE(110)
		::haxor::math::Color c = tmp10;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(111)
		{
			HX_STACK_LINE(111)
			Float tmp11 = c->r;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(111)
			Float tmp12 = c->g;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(111)
			Float tmp13 = c->b;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(111)
			Float tmp14 = c->a;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(111)
			mat->SetFloat4(HX_HCSTRING("Tint","\x1b","\xf9","\xd5","\x37"),tmp11,tmp12,tmp13,tmp14);
		}
		HX_STACK_LINE(112)
		::haxor::context::GizmoContext tmp11 = ::haxor::context::EngineContext_obj::gizmo;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(112)
		::haxor::graphics::mesh::Mesh tmp12 = tmp11->texture;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(112)
		::haxor::graphics::material::Material tmp13 = mat;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(112)
		::haxor::graphics::Graphics_obj::Render(tmp12,tmp13,null(),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Graphics_obj,DrawTexture,(void))

Void Graphics_obj::ReadPixels( int p_x,int p_y,int p_width,int p_height,::haxor::io::Buffer p_buffer){
{
		HX_STACK_FRAME("haxor.graphics.Graphics","ReadPixels",0x63504c6f,"haxor.graphics.Graphics.ReadPixels","haxor/graphics/Graphics.hx",125,0x1a55985c)
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_ARG(p_width,"p_width")
		HX_STACK_ARG(p_height,"p_height")
		HX_STACK_ARG(p_buffer,"p_buffer")
		HX_STACK_LINE(125)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(125)
		int tmp1 = p_x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(125)
		int tmp2 = p_y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(125)
		int tmp3 = p_width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(125)
		int tmp4 = p_height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(125)
		::haxor::io::Buffer tmp5 = p_buffer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(125)
		tmp->ReadPixels(tmp1,tmp2,tmp3,tmp4,(int)6408,(int)5121,tmp5);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Graphics_obj,ReadPixels,(void))


Graphics_obj::Graphics_obj()
{
}

bool Graphics_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"Clear") ) { outValue = Clear_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"Render") ) { outValue = Render_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"Viewport") ) { outValue = Viewport_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"ReadPixels") ) { outValue = ReadPixels_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"DrawTexture") ) { outValue = DrawTexture_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"m_last_viewport") ) { outValue = m_last_viewport; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxor::math::AABB2*/ ,(void *) &Graphics_obj::m_last_viewport,HX_HCSTRING("m_last_viewport","\x1d","\x34","\x16","\xee")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Graphics_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Graphics_obj::m_last_viewport,"m_last_viewport");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Graphics_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Graphics_obj::m_last_viewport,"m_last_viewport");
};

#endif

hx::Class Graphics_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("m_last_viewport","\x1d","\x34","\x16","\xee"),
	HX_HCSTRING("Viewport","\x86","\x08","\x57","\x76"),
	HX_HCSTRING("Clear","\x6d","\xe1","\x88","\xdb"),
	HX_HCSTRING("Render","\x76","\xdf","\xbd","\x39"),
	HX_HCSTRING("DrawTexture","\x17","\xa5","\x5b","\xcc"),
	HX_HCSTRING("ReadPixels","\x43","\xd7","\xd6","\x7c"),
	String(null()) };

void Graphics_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.graphics.Graphics","\xc2","\xc3","\x6f","\x8d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Graphics_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Graphics_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

void Graphics_obj::__boot()
{
	m_last_viewport= ::haxor::math::AABB2_obj::get_empty();
}

} // end namespace haxor
} // end namespace graphics
