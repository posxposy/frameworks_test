#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
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
#ifndef INCLUDED_haxor_component_light_Light
#include <haxor/component/light/Light.h>
#endif
#ifndef INCLUDED_haxor_component_light_PointLight
#include <haxor/component/light/PointLight.h>
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
#ifndef INCLUDED_haxor_context_TextureContext
#include <haxor/context/TextureContext.h>
#endif
#ifndef INCLUDED_haxor_context_UID
#include <haxor/context/UID.h>
#endif
#ifndef INCLUDED_haxor_core_Console
#include <haxor/core/Console.h>
#endif
#ifndef INCLUDED_haxor_core_Debug
#include <haxor/core/Debug.h>
#endif
#ifndef INCLUDED_haxor_core_Entity
#include <haxor/core/Entity.h>
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
#ifndef INCLUDED_haxor_core_Time
#include <haxor/core/Time.h>
#endif
#ifndef INCLUDED_haxor_graphics_Fog
#include <haxor/graphics/Fog.h>
#endif
#ifndef INCLUDED_haxor_graphics_GL
#include <haxor/graphics/GL.h>
#endif
#ifndef INCLUDED_haxor_graphics_Gizmo
#include <haxor/graphics/Gizmo.h>
#endif
#ifndef INCLUDED_haxor_graphics_GraphicContext
#include <haxor/graphics/GraphicContext.h>
#endif
#ifndef INCLUDED_haxor_graphics_material_Material
#include <haxor/graphics/material/Material.h>
#endif
#ifndef INCLUDED_haxor_graphics_material_MaterialUniform
#include <haxor/graphics/material/MaterialUniform.h>
#endif
#ifndef INCLUDED_haxor_graphics_material_Shader
#include <haxor/graphics/material/Shader.h>
#endif
#ifndef INCLUDED_haxor_graphics_material_ShaderCompilation
#include <haxor/graphics/material/ShaderCompilation.h>
#endif
#ifndef INCLUDED_haxor_graphics_material_ShaderCompileResult
#include <haxor/graphics/material/ShaderCompileResult.h>
#endif
#ifndef INCLUDED_haxor_graphics_material_ShaderError
#include <haxor/graphics/material/ShaderError.h>
#endif
#ifndef INCLUDED_haxor_graphics_material_UniformInfo
#include <haxor/graphics/material/UniformInfo.h>
#endif
#ifndef INCLUDED_haxor_graphics_mesh_Mesh
#include <haxor/graphics/mesh/Mesh.h>
#endif
#ifndef INCLUDED_haxor_graphics_mesh_MeshAttrib
#include <haxor/graphics/mesh/MeshAttrib.h>
#endif
#ifndef INCLUDED_haxor_graphics_texture_Texture
#include <haxor/graphics/texture/Texture.h>
#endif
#ifndef INCLUDED_haxor_graphics_texture_Texture2D
#include <haxor/graphics/texture/Texture2D.h>
#endif
#ifndef INCLUDED_haxor_io_Buffer
#include <haxor/io/Buffer.h>
#endif
#ifndef INCLUDED_haxor_io_FloatArray
#include <haxor/io/FloatArray.h>
#endif
#ifndef INCLUDED_haxor_io_Int32Array
#include <haxor/io/Int32Array.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_ISerializable
#include <haxor/io/serialization/ISerializable.h>
#endif
#ifndef INCLUDED_haxor_math_AABB3
#include <haxor/math/AABB3.h>
#endif
#ifndef INCLUDED_haxor_math_Color
#include <haxor/math/Color.h>
#endif
#ifndef INCLUDED_haxor_math_Matrix4
#include <haxor/math/Matrix4.h>
#endif
#ifndef INCLUDED_haxor_math_Vector3
#include <haxor/math/Vector3.h>
#endif
#ifndef INCLUDED_haxor_platform_graphics_OpenGL
#include <haxor/platform/graphics/OpenGL.h>
#endif
#ifndef INCLUDED_haxor_platform_windows_graphics_WinGL
#include <haxor/platform/windows/graphics/WinGL.h>
#endif
namespace haxor{
namespace context{

Void MaterialContext_obj::__construct()
{
HX_STACK_FRAME("haxor.context.MaterialContext","new",0xcad5d8af,"haxor.context.MaterialContext.new","haxor/context/MaterialContext.hx",43,0x0e17e323)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(45)
	this->uniform_globals = Array_obj< ::String >::__new().Add(HX_HCSTRING("ViewMatrix","\xa6","\x3a","\xc6","\xf3")).Add(HX_HCSTRING("ProjectionMatrix","\x50","\x64","\xb6","\xea")).Add(HX_HCSTRING("WorldMatrix","\x13","\x62","\x68","\x6b")).Add(HX_HCSTRING("WorldMatrixInverse","\xdd","\xc9","\x48","\xeb")).Add(HX_HCSTRING("WorldMatrixIT","\xbe","\x8c","\xd3","\x5f")).Add(HX_HCSTRING("Time","\x2d","\xf8","\xd5","\x37")).Add(HX_HCSTRING("RandomSeed","\x34","\x95","\xd6","\xb2")).Add(HX_HCSTRING("RandomTexture","\xf8","\xb4","\x32","\xfb")).Add(HX_HCSTRING("ScreenTexture","\xaf","\x8a","\xfa","\x83")).Add(HX_HCSTRING("ScreenDepth","\xd7","\xd5","\xe1","\x72")).Add(HX_HCSTRING("Ambient","\xf8","\xbf","\xd2","\xd6")).Add(HX_HCSTRING("CameraPosition","\x8e","\xe4","\xdc","\x6a")).Add(HX_HCSTRING("ProjectionMatrixInverse","\x40","\x39","\xa4","\x17")).Add(HX_HCSTRING("ViewMatrixInverse","\xaa","\x79","\xcd","\x40")).Add(HX_HCSTRING("Lights","\xfd","\x9e","\x96","\x1c")).Add(HX_HCSTRING("Fog","\xde","\x7e","\x35","\x00")).Add(HX_HCSTRING("CameraProjection","\xb4","\x4f","\x72","\xd4")).Add(HX_HCSTRING("Joints","\x09","\x5c","\x9e","\xc5")).Add(HX_HCSTRING("Binds","\xf6","\x7f","\x2d","\x46"));
	HX_STACK_LINE(191)
	::haxor::context::UID tmp = ::haxor::context::UID_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(191)
	this->mid = tmp;
	HX_STACK_LINE(192)
	::haxor::context::UID tmp1 = ::haxor::context::UID_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(192)
	this->sid = tmp1;
	HX_STACK_LINE(193)
	::haxor::context::UID tmp2 = ::haxor::context::UID_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(193)
	this->uid = tmp2;
	HX_STACK_LINE(196)
	this->zfunc = (int)515;
	HX_STACK_LINE(197)
	this->ztest = true;
	HX_STACK_LINE(198)
	this->zwrite = true;
	HX_STACK_LINE(199)
	this->blend = false;
	HX_STACK_LINE(200)
	this->blendSrc = (int)1;
	HX_STACK_LINE(201)
	this->blendDst = (int)0;
	HX_STACK_LINE(202)
	this->invert = false;
	HX_STACK_LINE(203)
	this->cull = (int)2;
	HX_STACK_LINE(204)
	this->pointSmooth = true;
	HX_STACK_LINE(206)
	int max_buffers = (int)512;		HX_STACK_VAR(max_buffers,"max_buffers");
	HX_STACK_LINE(207)
	int max_programs = (int)1024;		HX_STACK_VAR(max_programs,"max_programs");
	HX_STACK_LINE(209)
	Array< ::Dynamic > tmp3 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(209)
	this->locations = tmp3;
	HX_STACK_LINE(210)
	Array< ::Dynamic > tmp4 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(210)
	this->uniforms = tmp4;
	HX_STACK_LINE(211)
	Array< int > tmp5 = Array_obj< int >::__new();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(211)
	this->programs = tmp5;
	HX_STACK_LINE(212)
	Array< bool > tmp6 = Array_obj< bool >::__new();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(212)
	this->is_linked = tmp6;
	HX_STACK_LINE(213)
	Array< int > tmp7 = Array_obj< int >::__new();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(213)
	this->vertex_shaders = tmp7;
	HX_STACK_LINE(214)
	Array< int > tmp8 = Array_obj< int >::__new();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(214)
	this->fragment_shaders = tmp8;
	HX_STACK_LINE(215)
	Array< ::Dynamic > tmp9 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(215)
	this->globals = tmp9;
	HX_STACK_LINE(216)
	Array< ::Dynamic > tmp10 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(216)
	this->camera = tmp10;
	HX_STACK_LINE(217)
	Array< ::Dynamic > tmp11 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(217)
	this->transform = tmp11;
	HX_STACK_LINE(218)
	this->slot = (int)0;
	HX_STACK_LINE(219)
	Array< bool > tmp12 = Array_obj< bool >::__new();		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(219)
	this->viewmatrix = tmp12;
	HX_STACK_LINE(220)
	Array< bool > tmp13 = Array_obj< bool >::__new();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(220)
	this->projmatrix = tmp13;
	HX_STACK_LINE(222)
	{
		HX_STACK_LINE(222)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(222)
		while((true)){
			HX_STACK_LINE(222)
			bool tmp14 = (_g < max_programs);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(222)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(222)
			if ((tmp15)){
				HX_STACK_LINE(222)
				break;
			}
			HX_STACK_LINE(222)
			int tmp16 = (_g)++;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(222)
			int i = tmp16;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(224)
			Array< int > tmp17 = Array_obj< int >::__new();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(224)
			Array< int > l = tmp17;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(225)
			Array< int > tmp18 = Array_obj< int >::__new();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(225)
			Array< int > ul = tmp18;		HX_STACK_VAR(ul,"ul");
			HX_STACK_LINE(226)
			{
				HX_STACK_LINE(226)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(226)
				while((true)){
					HX_STACK_LINE(226)
					bool tmp19 = (_g1 < max_buffers);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(226)
					bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(226)
					if ((tmp20)){
						HX_STACK_LINE(226)
						break;
					}
					HX_STACK_LINE(226)
					int tmp21 = (_g1)++;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(226)
					int j = tmp21;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(226)
					l->push((int)-1);
				}
			}
			HX_STACK_LINE(227)
			{
				HX_STACK_LINE(227)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(227)
				while((true)){
					HX_STACK_LINE(227)
					bool tmp19 = (_g1 < (int)200);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(227)
					bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(227)
					if ((tmp20)){
						HX_STACK_LINE(227)
						break;
					}
					HX_STACK_LINE(227)
					int tmp21 = (_g1)++;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(227)
					int j = tmp21;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(227)
					int tmp22 = ::haxor::graphics::GL_obj::INVALID;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(227)
					ul->push(tmp22);
				}
			}
			HX_STACK_LINE(228)
			Array< ::Dynamic > tmp19 = this->camera;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(228)
			tmp19->push(null());
			HX_STACK_LINE(229)
			Array< ::Dynamic > tmp20 = this->transform;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(229)
			tmp20->push(null());
			HX_STACK_LINE(230)
			Array< ::Dynamic > tmp21 = this->globals;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(230)
			Array< ::String > tmp22 = Array_obj< ::String >::__new();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(230)
			tmp21->push(tmp22);
			HX_STACK_LINE(231)
			Array< ::Dynamic > tmp23 = this->locations;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(231)
			Array< int > tmp24 = l;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(231)
			tmp23->push(tmp24);
			HX_STACK_LINE(232)
			Array< ::Dynamic > tmp25 = this->uniforms;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(232)
			Array< int > tmp26 = ul;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(232)
			tmp25->push(tmp26);
			HX_STACK_LINE(233)
			Array< int > tmp27 = this->programs;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(233)
			int tmp28 = ::haxor::graphics::GL_obj::INVALID;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(233)
			tmp27->push(tmp28);
			HX_STACK_LINE(234)
			Array< bool > tmp29 = this->is_linked;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(234)
			tmp29->push(false);
			HX_STACK_LINE(235)
			Array< int > tmp30 = this->vertex_shaders;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(235)
			int tmp31 = ::haxor::graphics::GL_obj::INVALID;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(235)
			tmp30->push(tmp31);
			HX_STACK_LINE(236)
			Array< int > tmp32 = this->fragment_shaders;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(236)
			int tmp33 = ::haxor::graphics::GL_obj::INVALID;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(236)
			tmp32->push(tmp33);
			HX_STACK_LINE(238)
			Array< bool > tmp34 = this->viewmatrix;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(238)
			tmp34->push(false);
			HX_STACK_LINE(239)
			Array< bool > tmp35 = this->projmatrix;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(239)
			tmp35->push(false);
		}
	}
}
;
	return null();
}

//MaterialContext_obj::~MaterialContext_obj() { }

Dynamic MaterialContext_obj::__CreateEmpty() { return  new MaterialContext_obj; }
hx::ObjectPtr< MaterialContext_obj > MaterialContext_obj::__new()
{  hx::ObjectPtr< MaterialContext_obj > _result_ = new MaterialContext_obj();
	_result_->__construct();
	return _result_;}

Dynamic MaterialContext_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MaterialContext_obj > _result_ = new MaterialContext_obj();
	_result_->__construct();
	return _result_;}

Void MaterialContext_obj::Initialize( ){
{
		HX_STACK_FRAME("haxor.context.MaterialContext","Initialize",0x874c6501,"haxor.context.MaterialContext.Initialize","haxor/context/MaterialContext.hx",248,0x0e17e323)
		HX_STACK_THIS(this)
		HX_STACK_LINE(252)
		{
			HX_STACK_LINE(252)
			::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(252)
			tmp->DepthFunc((int)515);
		}
		HX_STACK_LINE(253)
		{
			HX_STACK_LINE(253)
			::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(253)
			tmp->Enable((int)2929);
		}
		HX_STACK_LINE(254)
		{
			HX_STACK_LINE(254)
			::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(254)
			tmp->DepthMask(true);
		}
		HX_STACK_LINE(255)
		{
			HX_STACK_LINE(255)
			::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(255)
			tmp->Disable((int)3042);
		}
		HX_STACK_LINE(256)
		{
			HX_STACK_LINE(256)
			::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(256)
			tmp->BlendFunc((int)1,(int)0);
		}
		HX_STACK_LINE(257)
		{
			HX_STACK_LINE(257)
			::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(257)
			tmp->Enable((int)2884);
		}
		HX_STACK_LINE(258)
		{
			HX_STACK_LINE(258)
			::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(258)
			tmp->FrontFace((int)2305);
		}
		HX_STACK_LINE(259)
		{
			HX_STACK_LINE(259)
			::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(259)
			tmp->CullFace((int)1029);
		}
		HX_STACK_LINE(261)
		{
			HX_STACK_LINE(261)
			::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(261)
			tmp->Enable((int)3089);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MaterialContext_obj,Initialize,(void))

Void MaterialContext_obj::SetPointSmooth( bool p_flag){
{
		HX_STACK_FRAME("haxor.context.MaterialContext","SetPointSmooth",0xa654e84d,"haxor.context.MaterialContext.SetPointSmooth","haxor/context/MaterialContext.hx",271,0x0e17e323)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_flag,"p_flag")
		HX_STACK_LINE(272)
		bool tmp = p_flag;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(272)
		bool tmp1 = this->pointSmooth;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(272)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(272)
		if ((tmp2)){
			HX_STACK_LINE(272)
			return null();
		}
		HX_STACK_LINE(273)
		this->pointSmooth = p_flag;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialContext_obj,SetPointSmooth,(void))

Void MaterialContext_obj::UpdateFlags( ::haxor::graphics::material::Material m){
{
		HX_STACK_FRAME("haxor.context.MaterialContext","UpdateFlags",0x8ca09bad,"haxor.context.MaterialContext.UpdateFlags","haxor/context/MaterialContext.hx",282,0x0e17e323)
		HX_STACK_THIS(this)
		HX_STACK_ARG(m,"m")
		HX_STACK_LINE(294)
		int tmp = m->zfunc;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(294)
		int tmp1 = this->zfunc;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(294)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(294)
		if ((tmp2)){
			HX_STACK_LINE(294)
			this->zfunc = m->zfunc;
			HX_STACK_LINE(294)
			{
				HX_STACK_LINE(294)
				::haxor::platform::graphics::OpenGL tmp3 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(294)
				int tmp4 = this->zfunc;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(294)
				tmp3->DepthFunc(tmp4);
			}
		}
		HX_STACK_LINE(295)
		bool tmp3 = m->ztest;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(295)
		bool tmp4 = this->ztest;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(295)
		bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(295)
		if ((tmp5)){
			HX_STACK_LINE(295)
			this->ztest = m->ztest;
			HX_STACK_LINE(295)
			bool tmp6 = this->ztest;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(295)
			if ((tmp6)){
				HX_STACK_LINE(295)
				::haxor::platform::graphics::OpenGL tmp7 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(295)
				tmp7->Enable((int)2929);
			}
			else{
				HX_STACK_LINE(295)
				::haxor::platform::graphics::OpenGL tmp7 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(295)
				tmp7->Disable((int)2929);
			}
		}
		HX_STACK_LINE(296)
		bool tmp6 = m->zwrite;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(296)
		bool tmp7 = this->zwrite;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(296)
		bool tmp8 = (tmp6 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(296)
		if ((tmp8)){
			HX_STACK_LINE(296)
			this->zwrite = m->zwrite;
			HX_STACK_LINE(296)
			{
				HX_STACK_LINE(296)
				::haxor::platform::graphics::OpenGL tmp9 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(296)
				bool tmp10 = this->zwrite;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(296)
				tmp9->DepthMask(tmp10);
			}
		}
		HX_STACK_LINE(297)
		bool tmp9 = m->blend;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(297)
		bool tmp10 = this->blend;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(297)
		bool tmp11 = (tmp9 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(297)
		if ((tmp11)){
			HX_STACK_LINE(297)
			this->blend = m->blend;
			HX_STACK_LINE(297)
			bool tmp12 = this->blend;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(297)
			if ((tmp12)){
				HX_STACK_LINE(297)
				::haxor::platform::graphics::OpenGL tmp13 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(297)
				tmp13->Enable((int)3042);
			}
			else{
				HX_STACK_LINE(297)
				::haxor::platform::graphics::OpenGL tmp13 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(297)
				tmp13->Disable((int)3042);
			}
		}
		HX_STACK_LINE(298)
		bool blend_change = false;		HX_STACK_VAR(blend_change,"blend_change");
		HX_STACK_LINE(299)
		int tmp12 = m->blendSrc;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(299)
		int tmp13 = this->blendSrc;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(299)
		bool tmp14 = (tmp12 != tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(299)
		if ((tmp14)){
			HX_STACK_LINE(299)
			blend_change = true;
			HX_STACK_LINE(299)
			this->blendSrc = m->blendSrc;
		}
		HX_STACK_LINE(300)
		int tmp15 = m->blendDst;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(300)
		int tmp16 = this->blendDst;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(300)
		bool tmp17 = (tmp15 != tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(300)
		if ((tmp17)){
			HX_STACK_LINE(300)
			blend_change = true;
			HX_STACK_LINE(300)
			this->blendDst = m->blendDst;
		}
		HX_STACK_LINE(301)
		bool tmp18 = blend_change;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(301)
		if ((tmp18)){
			HX_STACK_LINE(301)
			::haxor::platform::graphics::OpenGL tmp19 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(301)
			int tmp20 = this->blendSrc;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(301)
			int tmp21 = this->blendDst;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(301)
			tmp19->BlendFunc(tmp20,tmp21);
		}
		HX_STACK_LINE(304)
		bool tmp19 = m->invert;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(304)
		bool tmp20 = this->invert;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(304)
		bool tmp21 = (tmp19 != tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(304)
		if ((tmp21)){
			HX_STACK_LINE(304)
			this->invert = m->invert;
			HX_STACK_LINE(304)
			{
				HX_STACK_LINE(304)
				::haxor::platform::graphics::OpenGL tmp22 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(304)
				bool tmp23 = this->invert;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(304)
				int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(304)
				if ((tmp23)){
					HX_STACK_LINE(304)
					tmp24 = (int)2304;
				}
				else{
					HX_STACK_LINE(304)
					tmp24 = (int)2305;
				}
				HX_STACK_LINE(304)
				tmp22->FrontFace(tmp24);
			}
		}
		HX_STACK_LINE(305)
		int tmp22 = m->cull;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(305)
		int tmp23 = this->cull;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(305)
		bool tmp24 = (tmp22 != tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(305)
		if ((tmp24)){
			HX_STACK_LINE(307)
			this->cull = m->cull;
			HX_STACK_LINE(308)
			int tmp25 = this->cull;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(308)
			bool tmp26 = (tmp25 == (int)0);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(308)
			if ((tmp26)){
				HX_STACK_LINE(310)
				::haxor::platform::graphics::OpenGL tmp27 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(310)
				tmp27->Disable((int)2884);
			}
			else{
				HX_STACK_LINE(314)
				{
					HX_STACK_LINE(314)
					::haxor::platform::graphics::OpenGL tmp27 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(314)
					tmp27->Enable((int)2884);
				}
				HX_STACK_LINE(315)
				{
					HX_STACK_LINE(315)
					::haxor::platform::graphics::OpenGL tmp27 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(315)
					int tmp28 = this->cull;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(315)
					bool tmp29 = (tmp28 == (int)1);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(315)
					int tmp30;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(315)
					if ((tmp29)){
						HX_STACK_LINE(315)
						tmp30 = (int)1028;
					}
					else{
						HX_STACK_LINE(315)
						tmp30 = (int)1029;
					}
					HX_STACK_LINE(315)
					tmp27->CullFace(tmp30);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialContext_obj,UpdateFlags,(void))

Void MaterialContext_obj::InitializeMaterial( ::haxor::graphics::material::Material m){
{
		HX_STACK_FRAME("haxor.context.MaterialContext","InitializeMaterial",0x8f01e6c8,"haxor.context.MaterialContext.InitializeMaterial","haxor/context/MaterialContext.hx",325,0x0e17e323)
		HX_STACK_THIS(this)
		HX_STACK_ARG(m,"m")
		HX_STACK_LINE(326)
		Array< int > tmp = this->programs;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(326)
		int tmp1 = m->__cid;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(326)
		::haxor::platform::graphics::OpenGL tmp2 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(326)
		int tmp3 = tmp2->CreateProgram();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(326)
		tmp[tmp1] = tmp3;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialContext_obj,InitializeMaterial,(void))

::haxor::graphics::material::ShaderCompileResult MaterialContext_obj::CompileShader( ::haxor::graphics::material::Shader s){
	HX_STACK_FRAME("haxor.context.MaterialContext","CompileShader",0x9ba1e1e7,"haxor.context.MaterialContext.CompileShader","haxor/context/MaterialContext.hx",335,0x0e17e323)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(336)
	::haxor::graphics::material::ShaderCompileResult tmp = ::haxor::graphics::material::ShaderCompileResult_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(336)
	::haxor::graphics::material::ShaderCompileResult res = tmp;		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(338)
	::haxor::graphics::material::Shader tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(338)
	Array< int > tmp2 = this->vertex_shaders;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(338)
	::haxor::graphics::material::ShaderCompilation tmp3 = this->CreateCompileShader(tmp1,(int)35633,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(338)
	res->vertex = tmp3;
	HX_STACK_LINE(339)
	::haxor::graphics::material::Shader tmp4 = s;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(339)
	Array< int > tmp5 = this->fragment_shaders;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(339)
	::haxor::graphics::material::ShaderCompilation tmp6 = this->CreateCompileShader(tmp4,(int)35632,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(339)
	res->fragment = tmp6;
	HX_STACK_LINE(341)
	bool tmp7 = res->vertex->get_success();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(341)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(341)
	if ((tmp7)){
		HX_STACK_LINE(341)
		tmp8 = res->fragment->get_success();
	}
	else{
		HX_STACK_LINE(341)
		tmp8 = false;
	}
	HX_STACK_LINE(341)
	bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(341)
	if ((tmp9)){
		HX_STACK_LINE(343)
		{
			HX_STACK_LINE(343)
			::String tmp10 = s->get_name();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(343)
			::String tmp11 = (HX_HCSTRING("Shader> Compile Error @ [","\x6f","\xce","\x27","\x4a") + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(343)
			::String tmp12 = (tmp11 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(343)
			Dynamic p_msg = tmp12;		HX_STACK_VAR(p_msg,"p_msg");
			HX_STACK_LINE(343)
			{
				HX_STACK_LINE(343)
				int p_level = (int)0;		HX_STACK_VAR(p_level,"p_level");
				HX_STACK_LINE(343)
				int tmp13 = ::haxor::core::Console_obj::verbose;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(343)
				int tmp14 = p_level;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(343)
				bool tmp15 = (tmp13 >= tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(343)
				if ((tmp15)){
					HX_STACK_LINE(343)
					Dynamic tmp16 = p_msg;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(343)
					::String tmp17 = ::Std_obj::string(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(343)
					::String tmp18 = (HX_HCSTRING("[E] ","\x2d","\x17","\x5b","\x3c") + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(343)
					::cpp::Lib_obj::println(tmp18);
				}
			}
		}
		HX_STACK_LINE(344)
		{
			HX_STACK_LINE(344)
			::String tmp10 = res->ErrorString();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(344)
			Dynamic p_msg = tmp10;		HX_STACK_VAR(p_msg,"p_msg");
			HX_STACK_LINE(344)
			int p_level = (int)0;		HX_STACK_VAR(p_level,"p_level");
			HX_STACK_LINE(344)
			int tmp11 = ::haxor::core::Console_obj::verbose;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(344)
			int tmp12 = p_level;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(344)
			bool tmp13 = (tmp11 >= tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(344)
			if ((tmp13)){
				HX_STACK_LINE(344)
				Dynamic tmp14 = p_msg;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(344)
				::cpp::Lib_obj::println(tmp14);
			}
		}
	}
	HX_STACK_LINE(349)
	::haxor::graphics::material::ShaderCompileResult tmp10 = res;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(349)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialContext_obj,CompileShader,return )

::haxor::graphics::material::ShaderCompilation MaterialContext_obj::CreateCompileShader( ::haxor::graphics::material::Shader s,int t,Array< int > c){
	HX_STACK_FRAME("haxor.context.MaterialContext","CreateCompileShader",0x8fb6fa8b,"haxor.context.MaterialContext.CreateCompileShader","haxor/context/MaterialContext.hx",360,0x0e17e323)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(361)
	::haxor::graphics::material::ShaderCompilation tmp = ::haxor::graphics::material::ShaderCompilation_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(361)
	::haxor::graphics::material::ShaderCompilation res = tmp;		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(363)
	int tmp1 = c->__get(s->__cid);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(363)
	int tmp2 = ::haxor::graphics::GL_obj::INVALID;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(363)
	bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(363)
	int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(363)
	if ((tmp3)){
		HX_STACK_LINE(363)
		::haxor::platform::graphics::OpenGL tmp5 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(363)
		int tmp6 = t;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(363)
		tmp4 = tmp5->CreateShader(tmp6);
	}
	else{
		HX_STACK_LINE(363)
		tmp4 = c->__get(s->__cid);
	}
	HX_STACK_LINE(363)
	int id = tmp4;		HX_STACK_VAR(id,"id");
	HX_STACK_LINE(364)
	::String ss = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(ss,"ss");
	HX_STACK_LINE(365)
	bool tmp5 = (t == (int)35633);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(365)
	bool is_vs = tmp5;		HX_STACK_VAR(is_vs,"is_vs");
	HX_STACK_LINE(366)
	int tmp6 = ::haxor::graphics::material::Shader_obj::get_globalPrecision();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(366)
	bool tmp7 = (tmp6 == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(366)
	int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(366)
	if ((tmp7)){
		HX_STACK_LINE(366)
		tmp8 = s->precision;
	}
	else{
		HX_STACK_LINE(366)
		tmp8 = ::haxor::graphics::material::Shader_obj::get_globalPrecision();
	}
	HX_STACK_LINE(366)
	int sp = tmp8;		HX_STACK_VAR(sp,"sp");
	HX_STACK_LINE(367)
	bool tmp9 = is_vs;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(367)
	int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(367)
	if ((tmp9)){
		HX_STACK_LINE(367)
		tmp10 = (int)1;
	}
	else{
		HX_STACK_LINE(367)
		tmp10 = (int)8;
	}
	HX_STACK_LINE(367)
	int tmp11 = sp;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(367)
	int tmp12 = (int(tmp10) & int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(367)
	int flag_low = tmp12;		HX_STACK_VAR(flag_low,"flag_low");
	HX_STACK_LINE(368)
	bool tmp13 = is_vs;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(368)
	int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(368)
	if ((tmp13)){
		HX_STACK_LINE(368)
		tmp14 = (int)2;
	}
	else{
		HX_STACK_LINE(368)
		tmp14 = (int)16;
	}
	HX_STACK_LINE(368)
	int tmp15 = sp;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(368)
	int tmp16 = (int(tmp14) & int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(368)
	int flag_med = tmp16;		HX_STACK_VAR(flag_med,"flag_med");
	HX_STACK_LINE(369)
	bool tmp17 = is_vs;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(369)
	int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(369)
	if ((tmp17)){
		HX_STACK_LINE(369)
		tmp18 = (int)4;
	}
	else{
		HX_STACK_LINE(369)
		tmp18 = (int)32;
	}
	HX_STACK_LINE(369)
	int tmp19 = sp;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(369)
	int tmp20 = (int(tmp18) & int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(369)
	int flag_high = tmp20;		HX_STACK_VAR(flag_high,"flag_high");
	HX_STACK_LINE(370)
	bool tmp21 = is_vs;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(370)
	::String tmp22;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(370)
	if ((tmp21)){
		HX_STACK_LINE(370)
		tmp22 = HX_HCSTRING("[vert] ","\xaf","\x0a","\x69","\x69");
	}
	else{
		HX_STACK_LINE(370)
		tmp22 = HX_HCSTRING("[frag]","\xb0","\x48","\xfd","\x68");
	}
	HX_STACK_LINE(370)
	::String error_title = tmp22;		HX_STACK_VAR(error_title,"error_title");
	HX_STACK_LINE(372)
	bool tmp23 = (flag_low != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(372)
	if ((tmp23)){
		HX_STACK_LINE(372)
		hx::AddEq(ss,HX_HCSTRING("precision lowp float;\n","\x69","\x31","\x06","\xbd"));
	}
	else{
		HX_STACK_LINE(373)
		bool tmp24 = (flag_med != (int)0);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(373)
		if ((tmp24)){
			HX_STACK_LINE(373)
			hx::AddEq(ss,HX_HCSTRING("precision mediump float;\n","\x64","\x96","\x1e","\xcd"));
		}
		else{
			HX_STACK_LINE(374)
			bool tmp25 = (flag_high != (int)0);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(374)
			if ((tmp25)){
				HX_STACK_LINE(374)
				hx::AddEq(ss,HX_HCSTRING("precision highp float;\n","\x57","\x4a","\xf7","\x14"));
			}
		}
	}
	HX_STACK_LINE(376)
	::String tmp24 = ::haxor::graphics::material::Shader_obj::get_globalPreprocessor();		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(376)
	bool tmp25 = (tmp24 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(376)
	if ((tmp25)){
		HX_STACK_LINE(376)
		::String tmp26 = ::haxor::graphics::material::Shader_obj::get_globalPreprocessor();		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(376)
		::String tmp27 = (tmp26 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(376)
		hx::AddEq(ss,tmp27);
	}
	HX_STACK_LINE(377)
	bool tmp26 = (s->preprocessor != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(377)
	if ((tmp26)){
		HX_STACK_LINE(377)
		::String tmp27 = (s->preprocessor + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(377)
		hx::AddEq(ss,tmp27);
	}
	HX_STACK_LINE(379)
	{
		HX_STACK_LINE(379)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(379)
		int _g = ss.length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(379)
		while((true)){
			HX_STACK_LINE(379)
			bool tmp27 = (_g1 < _g);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(379)
			bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(379)
			if ((tmp28)){
				HX_STACK_LINE(379)
				break;
			}
			HX_STACK_LINE(379)
			int tmp29 = (_g1)++;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(379)
			int i = tmp29;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(379)
			int tmp30 = i;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(379)
			::String tmp31 = ss.charAt(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(379)
			bool tmp32 = (tmp31 == HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(379)
			if ((tmp32)){
				HX_STACK_LINE(379)
				(res->offset)++;
			}
		}
	}
	HX_STACK_LINE(381)
	bool tmp27 = is_vs;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(381)
	::String tmp28;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(381)
	if ((tmp27)){
		HX_STACK_LINE(381)
		tmp28 = s->vertex;
	}
	else{
		HX_STACK_LINE(381)
		tmp28 = s->fragment;
	}
	HX_STACK_LINE(381)
	hx::AddEq(ss,tmp28);
	HX_STACK_LINE(383)
	int tmp29 = id;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(383)
	c[s->__cid] = tmp29;
	HX_STACK_LINE(384)
	{
		HX_STACK_LINE(384)
		::haxor::platform::graphics::OpenGL tmp30 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(384)
		int tmp31 = id;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(384)
		::String tmp32 = ss;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(384)
		tmp30->ShaderSource(tmp31,tmp32);
	}
	HX_STACK_LINE(385)
	{
		HX_STACK_LINE(385)
		::haxor::platform::graphics::OpenGL tmp30 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(385)
		int tmp31 = id;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(385)
		tmp30->CompileShader(tmp31);
	}
	HX_STACK_LINE(389)
	::haxor::platform::graphics::OpenGL tmp30 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(389)
	int tmp31 = id;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(389)
	int tmp32 = tmp30->GetShaderParameter(tmp31,(int)35713);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(389)
	bool tmp33 = (tmp32 == (int)0);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(389)
	if ((tmp33)){
		HX_STACK_LINE(391)
		::haxor::platform::graphics::OpenGL tmp34 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(391)
		int tmp35 = id;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(391)
		::String tmp36 = tmp34->GetShaderInfoLog(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(391)
		::String err = tmp36;		HX_STACK_VAR(err,"err");
		HX_STACK_LINE(392)
		int tmp37 = res->offset;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(392)
		::String tmp38 = err;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(392)
		Array< ::Dynamic > tmp39 = this->FormatShaderError(tmp37,tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(392)
		res->errors = tmp39;
	}
	HX_STACK_LINE(394)
	::haxor::graphics::material::ShaderCompilation tmp34 = res;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(394)
	return tmp34;
}


HX_DEFINE_DYNAMIC_FUNC3(MaterialContext_obj,CreateCompileShader,return )

Array< ::Dynamic > MaterialContext_obj::FormatShaderError( int off,::String err){
	HX_STACK_FRAME("haxor.context.MaterialContext","FormatShaderError",0x104380db,"haxor.context.MaterialContext.FormatShaderError","haxor/context/MaterialContext.hx",403,0x0e17e323)
	HX_STACK_THIS(this)
	HX_STACK_ARG(off,"off")
	HX_STACK_ARG(err,"err")
	HX_STACK_LINE(404)
	Array< ::Dynamic > tmp = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(404)
	Array< ::Dynamic > el = tmp;		HX_STACK_VAR(el,"el");
	HX_STACK_LINE(405)
	Array< ::String > tmp1 = err.split(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(405)
	Array< ::String > lines = tmp1;		HX_STACK_VAR(lines,"lines");
	HX_STACK_LINE(406)
	::String res = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(407)
	{
		HX_STACK_LINE(407)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(407)
		int _g = lines->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(407)
		while((true)){
			HX_STACK_LINE(407)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(407)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(407)
			if ((tmp3)){
				HX_STACK_LINE(407)
				break;
			}
			HX_STACK_LINE(407)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(407)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(409)
			::haxor::graphics::material::ShaderError tmp5 = ::haxor::graphics::material::ShaderError_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(409)
			::haxor::graphics::material::ShaderError err1 = tmp5;		HX_STACK_VAR(err1,"err1");
			HX_STACK_LINE(410)
			::String tmp6 = lines->__get(i);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(410)
			::String e = tmp6;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(411)
			err1->text = e;
			HX_STACK_LINE(412)
			err1->message = e;
			HX_STACK_LINE(413)
			int tmp7 = e.indexOf(HX_HCSTRING("ERROR","\xa8","\x03","\x18","\xf1"),null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(413)
			bool tmp8 = (tmp7 >= (int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(413)
			if ((tmp8)){
				HX_STACK_LINE(415)
				Array< ::String > tmp9 = e.split(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(415)
				Array< ::String > tk = tmp9;		HX_STACK_VAR(tk,"tk");
				HX_STACK_LINE(416)
				::String str = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(str,"str");
				HX_STACK_LINE(417)
				int l = (int)-1;		HX_STACK_VAR(l,"l");
				HX_STACK_LINE(419)
				{
					HX_STACK_LINE(419)
					int _g2 = tk->length;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(419)
					int tmp10 = _g2;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(419)
					switch( (int)(tmp10)){
						case (int)5: {
							HX_STACK_LINE(421)
							::String tmp11 = tk->__get((int)2);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(421)
							Dynamic tmp12 = ::Std_obj::parseInt(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(421)
							l = tmp12;
						}
						;break;
						case (int)4: {
							HX_STACK_LINE(422)
							::String tmp11 = tk->__get((int)2);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(422)
							Dynamic tmp12 = ::Std_obj::parseInt(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(422)
							l = tmp12;
						}
						;break;
						case (int)3: {
							HX_STACK_LINE(423)
							::String tmp11 = tk->__get((int)0);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(423)
							Dynamic tmp12 = ::Std_obj::parseInt(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(423)
							l = tmp12;
						}
						;break;
						case (int)2: {
							HX_STACK_LINE(424)
							::String tmp11 = tk->__get((int)0);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(424)
							Dynamic tmp12 = ::Std_obj::parseInt(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(424)
							l = tmp12;
						}
						;break;
					}
				}
				HX_STACK_LINE(427)
				bool tmp10 = (l < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(427)
				int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(427)
				if ((tmp10)){
					HX_STACK_LINE(427)
					tmp11 = (int)0;
				}
				else{
					HX_STACK_LINE(427)
					tmp11 = (l - off);
				}
				HX_STACK_LINE(427)
				err1->line = tmp11;
				HX_STACK_LINE(429)
				bool tmp12 = (err1->line <= (int)0);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(429)
				::String tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(429)
				if ((tmp12)){
					HX_STACK_LINE(429)
					tmp13 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
				}
				else{
					HX_STACK_LINE(429)
					tmp13 = (err1->line + HX_HCSTRING("","\x00","\x00","\x00","\x00"));
				}
				HX_STACK_LINE(429)
				::String ls = tmp13;		HX_STACK_VAR(ls,"ls");
				HX_STACK_LINE(430)
				{
					HX_STACK_LINE(430)
					int _g2 = tk->length;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(430)
					int tmp14 = _g2;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(430)
					switch( (int)(tmp14)){
						case (int)5: {
							HX_STACK_LINE(432)
							::String tmp15 = (ls + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(432)
							::String tmp16 = tk->__get((int)3);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(432)
							::String tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(432)
							::String tmp18 = (tmp17 + HX_HCSTRING(" : ","\xc6","\x7a","\x18","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(432)
							::String tmp19 = tk->__get((int)4);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(432)
							::String tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(432)
							str = tmp20;
						}
						;break;
						case (int)4: {
							HX_STACK_LINE(433)
							::String tmp15 = (ls + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(433)
							::String tmp16 = tk->__get((int)3);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(433)
							::String tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(433)
							str = tmp17;
						}
						;break;
						case (int)3: {
							HX_STACK_LINE(434)
							::String tmp15 = (ls + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(434)
							::String tmp16 = tk->__get((int)2);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(434)
							::String tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(434)
							str = tmp17;
						}
						;break;
						case (int)2: {
							HX_STACK_LINE(435)
							::String tmp15 = (ls + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(435)
							::String tmp16 = tk->__get((int)1);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(435)
							::String tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(435)
							str = tmp17;
						}
						;break;
						default: {
							HX_STACK_LINE(436)
							::String tmp15 = tk->__get((int)1);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(436)
							str = tmp15;
						}
					}
				}
				HX_STACK_LINE(438)
				err1->message = str;
			}
			HX_STACK_LINE(440)
			::haxor::graphics::material::ShaderError tmp9 = err1;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(440)
			el->push(tmp9);
		}
	}
	HX_STACK_LINE(442)
	Array< ::Dynamic > tmp2 = el;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(442)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(MaterialContext_obj,FormatShaderError,return )

Void MaterialContext_obj::UpdateShader( ::haxor::graphics::material::Material m,::haxor::graphics::material::Shader s0,::haxor::graphics::material::Shader s1){
{
		HX_STACK_FRAME("haxor.context.MaterialContext","UpdateShader",0x64eea7ff,"haxor.context.MaterialContext.UpdateShader","haxor/context/MaterialContext.hx",450,0x0e17e323)
		HX_STACK_THIS(this)
		HX_STACK_ARG(m,"m")
		HX_STACK_ARG(s0,"s0")
		HX_STACK_ARG(s1,"s1")
		HX_STACK_LINE(451)
		Array< int > tmp = this->programs;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(451)
		int tmp1 = m->__cid;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(451)
		int tmp2 = tmp->__get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(451)
		int p = tmp2;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(452)
		int vs_id;		HX_STACK_VAR(vs_id,"vs_id");
		HX_STACK_LINE(453)
		int fs_id;		HX_STACK_VAR(fs_id,"fs_id");
		HX_STACK_LINE(455)
		Array< bool > tmp3 = this->is_linked;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(455)
		int tmp4 = m->__cid;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(455)
		tmp3[tmp4] = false;
		HX_STACK_LINE(456)
		bool tmp5 = (s0 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(456)
		if ((tmp5)){
			HX_STACK_LINE(458)
			Array< int > tmp6 = this->vertex_shaders;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(458)
			int tmp7 = s0->__cid;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(458)
			int tmp8 = tmp6->__get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(458)
			vs_id = tmp8;
			HX_STACK_LINE(459)
			Array< int > tmp9 = this->fragment_shaders;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(459)
			int tmp10 = s0->__cid;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(459)
			int tmp11 = tmp9->__get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(459)
			fs_id = tmp11;
			HX_STACK_LINE(460)
			{
				HX_STACK_LINE(460)
				::haxor::platform::graphics::OpenGL tmp12 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(460)
				int tmp13 = p;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(460)
				int tmp14 = vs_id;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(460)
				tmp12->DetachShader(tmp13,tmp14);
			}
			HX_STACK_LINE(461)
			{
				HX_STACK_LINE(461)
				::haxor::platform::graphics::OpenGL tmp12 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(461)
				int tmp13 = p;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(461)
				int tmp14 = fs_id;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(461)
				tmp12->DetachShader(tmp13,tmp14);
			}
		}
		HX_STACK_LINE(466)
		bool tmp6 = (s1 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(466)
		if ((tmp6)){
			HX_STACK_LINE(468)
			Array< int > tmp7 = this->vertex_shaders;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(468)
			int tmp8 = s1->__cid;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(468)
			int tmp9 = tmp7->__get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(468)
			vs_id = tmp9;
			HX_STACK_LINE(469)
			Array< int > tmp10 = this->fragment_shaders;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(469)
			int tmp11 = s1->__cid;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(469)
			int tmp12 = tmp10->__get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(469)
			fs_id = tmp12;
			HX_STACK_LINE(470)
			{
				HX_STACK_LINE(470)
				::haxor::platform::graphics::OpenGL tmp13 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(470)
				int tmp14 = p;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(470)
				int tmp15 = vs_id;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(470)
				tmp13->AttachShader(tmp14,tmp15);
			}
			HX_STACK_LINE(471)
			{
				HX_STACK_LINE(471)
				::haxor::platform::graphics::OpenGL tmp13 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(471)
				int tmp14 = p;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(471)
				int tmp15 = fs_id;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(471)
				tmp13->AttachShader(tmp14,tmp15);
			}
			HX_STACK_LINE(473)
			::haxor::context::MeshContext tmp13 = ::haxor::context::EngineContext_obj::mesh;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(473)
			Array< ::String > al = tmp13->attribs;		HX_STACK_VAR(al,"al");
			HX_STACK_LINE(474)
			{
				HX_STACK_LINE(474)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(474)
				int _g = al->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(474)
				while((true)){
					HX_STACK_LINE(474)
					bool tmp14 = (_g1 < _g);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(474)
					bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(474)
					if ((tmp15)){
						HX_STACK_LINE(474)
						break;
					}
					HX_STACK_LINE(474)
					int tmp16 = (_g1)++;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(474)
					int i = tmp16;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(474)
					::haxor::platform::graphics::OpenGL tmp17 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(474)
					int tmp18 = p;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(474)
					int tmp19 = i;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(474)
					::String tmp20 = al->__get(i);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(474)
					tmp17->BindAttribLocation(tmp18,tmp19,tmp20);
				}
			}
			HX_STACK_LINE(475)
			{
				HX_STACK_LINE(475)
				::haxor::platform::graphics::OpenGL tmp14 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(475)
				int tmp15 = p;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(475)
				tmp14->LinkProgram(tmp15);
			}
			HX_STACK_LINE(477)
			Array< bool > tmp14 = this->is_linked;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(477)
			int tmp15 = m->__cid;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(477)
			tmp14[tmp15] = true;
			HX_STACK_LINE(479)
			::haxor::platform::graphics::OpenGL tmp16 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(479)
			int tmp17 = p;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(479)
			int tmp18 = tmp16->GetProgramParameter(tmp17,(int)35714);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(479)
			bool tmp19 = (tmp18 == (int)0);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(479)
			if ((tmp19)){
				HX_STACK_LINE(481)
				::haxor::platform::graphics::OpenGL tmp20 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(481)
				int tmp21 = p;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(481)
				::String tmp22 = tmp20->GetProgramInfoLog(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(481)
				::String link_err = tmp22;		HX_STACK_VAR(link_err,"link_err");
				HX_STACK_LINE(482)
				{
					HX_STACK_LINE(482)
					::String tmp23 = m->get_name();		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(482)
					::String tmp24 = (HX_HCSTRING("Material> [","\x92","\x85","\xe0","\x66") + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(482)
					::String tmp25 = (tmp24 + HX_HCSTRING("] Link Error @ [","\xe0","\xbc","\x9b","\x7c"));		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(482)
					::String tmp26 = s1->get_name();		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(482)
					::String tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(482)
					::String tmp28 = (tmp27 + HX_HCSTRING("]\n","\x0d","\x51","\x00","\x00"));		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(482)
					::String tmp29 = link_err;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(482)
					::String tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(482)
					Dynamic p_msg = tmp30;		HX_STACK_VAR(p_msg,"p_msg");
					HX_STACK_LINE(482)
					{
						HX_STACK_LINE(482)
						int p_level = (int)0;		HX_STACK_VAR(p_level,"p_level");
						HX_STACK_LINE(482)
						int tmp31 = ::haxor::core::Console_obj::verbose;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(482)
						int tmp32 = p_level;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(482)
						bool tmp33 = (tmp31 >= tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(482)
						if ((tmp33)){
							HX_STACK_LINE(482)
							Dynamic tmp34 = p_msg;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(482)
							::String tmp35 = ::Std_obj::string(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(482)
							::String tmp36 = (HX_HCSTRING("[E] ","\x2d","\x17","\x5b","\x3c") + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(482)
							::cpp::Lib_obj::println(tmp36);
						}
					}
				}
				HX_STACK_LINE(483)
				Array< bool > tmp23 = this->is_linked;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(483)
				int tmp24 = m->__cid;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(483)
				tmp23[tmp24] = false;
			}
			HX_STACK_LINE(486)
			Array< ::Dynamic > ul = m->m_uniforms;		HX_STACK_VAR(ul,"ul");
			HX_STACK_LINE(488)
			{
				HX_STACK_LINE(488)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(488)
				int _g = ul->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(488)
				while((true)){
					HX_STACK_LINE(488)
					bool tmp20 = (_g1 < _g);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(488)
					bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(488)
					if ((tmp21)){
						HX_STACK_LINE(488)
						break;
					}
					HX_STACK_LINE(488)
					int tmp22 = (_g1)++;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(488)
					int i = tmp22;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(488)
					::haxor::graphics::material::Material tmp23 = m;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(488)
					::haxor::graphics::material::MaterialUniform tmp24 = ul->__get(i).StaticCast< ::haxor::graphics::material::MaterialUniform >();		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(488)
					this->CreateUniform(tmp23,tmp24);
				}
			}
			HX_STACK_LINE(491)
			{
				HX_STACK_LINE(491)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(491)
				Array< ::Dynamic > tmp20 = this->locations;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(491)
				int tmp21 = m->__cid;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(491)
				Array< int > tmp22 = tmp20->__get(tmp21).StaticCast< Array< int > >();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(491)
				int _g = tmp22->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(491)
				while((true)){
					HX_STACK_LINE(491)
					bool tmp23 = (_g1 < _g);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(491)
					bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(491)
					if ((tmp24)){
						HX_STACK_LINE(491)
						break;
					}
					HX_STACK_LINE(491)
					int tmp25 = (_g1)++;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(491)
					int i = tmp25;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(491)
					Array< ::Dynamic > tmp26 = this->locations;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(491)
					int tmp27 = m->__cid;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(491)
					Array< int > tmp28 = tmp26->__get(tmp27).StaticCast< Array< int > >();		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(491)
					int tmp29 = i;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(491)
					tmp28[tmp29] = (int)-1;
				}
			}
			HX_STACK_LINE(494)
			Array< ::String > tmp20 = this->uniform_globals;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(494)
			Array< ::String > tmp21 = tmp20->copy();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(494)
			Array< ::String > gl = tmp21;		HX_STACK_VAR(gl,"gl");
			HX_STACK_LINE(495)
			int k = (int)0;		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(496)
			::haxor::math::Matrix4 tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(496)
			{
				HX_STACK_LINE(496)
				::haxor::math::Matrix4 tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(496)
				{
					HX_STACK_LINE(496)
					::haxor::context::DataContext tmp24 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(496)
					::haxor::context::DataContext _this = tmp24;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(496)
					Array< ::Dynamic > tmp25 = _this->m_m4;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(496)
					int tmp26 = (_this->m_nm4 + (int)1);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(496)
					int tmp27 = _this->m_m4->length;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(496)
					int tmp28 = hx::Mod(tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(496)
					int tmp29 = _this->m_nq = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(496)
					tmp23 = tmp25->__get(tmp29).StaticCast< ::haxor::math::Matrix4 >();
				}
				HX_STACK_LINE(496)
				::haxor::math::Matrix4 _this = tmp23;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(496)
				tmp22 = _this->Set((int)1,(int)0,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)0,(int)1);
			}
			HX_STACK_LINE(496)
			::haxor::math::Matrix4 m4 = tmp22;		HX_STACK_VAR(m4,"m4");
			HX_STACK_LINE(497)
			while((true)){
				HX_STACK_LINE(497)
				bool tmp23 = (k < gl->length);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(497)
				bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(497)
				if ((tmp24)){
					HX_STACK_LINE(497)
					break;
				}
				HX_STACK_LINE(499)
				::String tmp25 = gl->__get(k);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(499)
				::String un = tmp25;		HX_STACK_VAR(un,"un");
				HX_STACK_LINE(500)
				Array< bool > tmp26 = this->is_linked;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(500)
				int tmp27 = m->__cid;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(500)
				bool tmp28 = tmp26->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(500)
				bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(500)
				if ((tmp29)){
					HX_STACK_LINE(500)
					break;
				}
				HX_STACK_LINE(501)
				::haxor::platform::graphics::OpenGL tmp30 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(501)
				int tmp31 = p;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(501)
				::String tmp32 = un;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(501)
				int tmp33 = tmp30->GetUniformLocation(tmp31,tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(501)
				int tmp34 = ::haxor::graphics::GL_obj::INVALID;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(501)
				bool tmp35 = (tmp33 == tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(501)
				if ((tmp35)){
					HX_STACK_LINE(501)
					::String tmp36 = un;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(501)
					gl->remove(tmp36);
					HX_STACK_LINE(501)
					continue;
				}
				HX_STACK_LINE(504)
				::String tmp36 = un;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(504)
				::String _switch_1 = (tmp36);
				if (  ( _switch_1==HX_HCSTRING("Fog","\xde","\x7e","\x35","\x00"))){
					HX_STACK_LINE(506)
					::String tmp37 = un;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(506)
					::haxor::math::Color tmp38 = ::haxor::graphics::Fog_obj::color;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(506)
					Float tmp39 = tmp38->r;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(506)
					::haxor::math::Color tmp40 = ::haxor::graphics::Fog_obj::color;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(506)
					Float tmp41 = tmp40->g;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(506)
					::haxor::math::Color tmp42 = ::haxor::graphics::Fog_obj::color;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(506)
					Float tmp43 = tmp42->b;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(506)
					::haxor::math::Color tmp44 = ::haxor::graphics::Fog_obj::color;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(506)
					Float tmp45 = tmp44->a;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(506)
					Float tmp46 = ::haxor::graphics::Fog_obj::density;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(506)
					Float tmp47 = ::haxor::graphics::Fog_obj::exp;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(506)
					Float tmp48 = ::haxor::graphics::Fog_obj::start;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(506)
					Float tmp49 = ::haxor::graphics::Fog_obj::end;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(506)
					Array< Float > tmp50 = Array_obj< Float >::__new().Add(tmp39).Add(tmp41).Add(tmp43).Add(tmp45).Add(tmp46).Add(tmp47).Add(tmp48).Add(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(506)
					m->SetFloat4Array(tmp37,tmp50);
				}
				else if (  ( _switch_1==HX_HCSTRING("Lights","\xfd","\x9e","\x96","\x1c"))){
					HX_STACK_LINE(507)
					::String tmp37 = un;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(507)
					Array< Float > tmp38 = ::haxor::component::light::Light_obj::m_buffer;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(507)
					m->SetFloat4Array(tmp37,tmp38);
				}
				else if (  ( _switch_1==HX_HCSTRING("Ambient","\xf8","\xbf","\xd2","\xd6"))){
					HX_STACK_LINE(508)
					::haxor::math::Color tmp37;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(508)
					{
						HX_STACK_LINE(508)
						::haxor::context::DataContext tmp38 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(508)
						::haxor::context::DataContext _this = tmp38;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(508)
						Array< ::Dynamic > tmp39 = _this->m_c;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(508)
						int tmp40 = (_this->m_nc + (int)1);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(508)
						int tmp41 = _this->m_c->length;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(508)
						int tmp42 = hx::Mod(tmp40,tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(508)
						int tmp43 = _this->m_nc = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(508)
						tmp37 = tmp39->__get(tmp43).StaticCast< ::haxor::math::Color >();
					}
					HX_STACK_LINE(508)
					::haxor::math::Color tmp38 = tmp37->Set((int)1,(int)1,(int)1,(int)1);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(508)
					::haxor::math::Color p_color = tmp38;		HX_STACK_VAR(p_color,"p_color");
					HX_STACK_LINE(508)
					::String tmp39 = un;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(508)
					Float tmp40 = p_color->r;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(508)
					Float tmp41 = p_color->g;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(508)
					Float tmp42 = p_color->b;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(508)
					Float tmp43 = p_color->a;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(508)
					m->SetFloat4(tmp39,tmp40,tmp41,tmp42,tmp43);
				}
				else if (  ( _switch_1==HX_HCSTRING("Time","\x2d","\xf8","\xd5","\x37"))){
					HX_STACK_LINE(509)
					::String tmp37 = un;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(509)
					m->SetFloat(tmp37,((Float)0.0));
				}
				else if (  ( _switch_1==HX_HCSTRING("RandomSeed","\x34","\x95","\xd6","\xb2"))){
					HX_STACK_LINE(510)
					::String tmp37 = un;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(510)
					m->SetFloat(tmp37,((Float)0.0));
				}
				else if (  ( _switch_1==HX_HCSTRING("RandomTexture","\xf8","\xb4","\x32","\xfb"))){
					HX_STACK_LINE(511)
					::String tmp37 = un;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(511)
					::haxor::graphics::texture::Texture2D tmp38 = ::haxor::graphics::texture::Texture2D_obj::get_random();		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(511)
					m->SetTexture(tmp37,tmp38);
				}
				else if (  ( _switch_1==HX_HCSTRING("WorldMatrix","\x13","\x62","\x68","\x6b"))){
					HX_STACK_LINE(514)
					::String tmp37 = un;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(514)
					::haxor::math::Matrix4 tmp38 = m4;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(514)
					m->SetMatrix4(tmp37,tmp38,null());
				}
				else if (  ( _switch_1==HX_HCSTRING("WorldMatrixInverse","\xdd","\xc9","\x48","\xeb"))){
					HX_STACK_LINE(515)
					::String tmp37 = un;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(515)
					::haxor::math::Matrix4 tmp38 = m4;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(515)
					m->SetMatrix4(tmp37,tmp38,null());
				}
				else if (  ( _switch_1==HX_HCSTRING("WorldMatrixIT","\xbe","\x8c","\xd3","\x5f"))){
					HX_STACK_LINE(516)
					::String tmp37 = un;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(516)
					::haxor::math::Matrix4 tmp38 = m4;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(516)
					m->SetMatrix4(tmp37,tmp38,null());
				}
				else if (  ( _switch_1==HX_HCSTRING("CameraPosition","\x8e","\xe4","\xdc","\x6a"))){
					HX_STACK_LINE(517)
					::haxor::math::Vector3 tmp37;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(517)
					{
						HX_STACK_LINE(517)
						::haxor::context::DataContext tmp38 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(517)
						::haxor::context::DataContext _this = tmp38;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(517)
						Array< ::Dynamic > tmp39 = _this->m_v3;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(517)
						int tmp40 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(517)
						int tmp41 = _this->m_v3->length;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(517)
						int tmp42 = hx::Mod(tmp40,tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(517)
						int tmp43 = _this->m_nv3 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(517)
						tmp37 = tmp39->__get(tmp43).StaticCast< ::haxor::math::Vector3 >();
					}
					HX_STACK_LINE(517)
					::haxor::math::Vector3 tmp38 = tmp37->Set((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(517)
					::haxor::math::Vector3 p_v = tmp38;		HX_STACK_VAR(p_v,"p_v");
					HX_STACK_LINE(517)
					::String tmp39 = un;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(517)
					Float tmp40 = p_v->x;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(517)
					Float tmp41 = p_v->y;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(517)
					Float tmp42 = p_v->z;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(517)
					m->SetFloat3(tmp39,tmp40,tmp41,tmp42);
				}
				else if (  ( _switch_1==HX_HCSTRING("CameraProjection","\xb4","\x4f","\x72","\xd4"))){
					HX_STACK_LINE(518)
					::haxor::math::Vector3 tmp37;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(518)
					{
						HX_STACK_LINE(518)
						::haxor::context::DataContext tmp38 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(518)
						::haxor::context::DataContext _this = tmp38;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(518)
						Array< ::Dynamic > tmp39 = _this->m_v3;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(518)
						int tmp40 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(518)
						int tmp41 = _this->m_v3->length;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(518)
						int tmp42 = hx::Mod(tmp40,tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(518)
						int tmp43 = _this->m_nv3 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(518)
						tmp37 = tmp39->__get(tmp43).StaticCast< ::haxor::math::Vector3 >();
					}
					HX_STACK_LINE(518)
					::haxor::math::Vector3 tmp38 = tmp37->Set((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(518)
					::haxor::math::Vector3 p_v = tmp38;		HX_STACK_VAR(p_v,"p_v");
					HX_STACK_LINE(518)
					::String tmp39 = un;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(518)
					Float tmp40 = p_v->x;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(518)
					Float tmp41 = p_v->y;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(518)
					Float tmp42 = p_v->z;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(518)
					m->SetFloat3(tmp39,tmp40,tmp41,tmp42);
				}
				else if (  ( _switch_1==HX_HCSTRING("ViewMatrix","\xa6","\x3a","\xc6","\xf3"))){
					HX_STACK_LINE(519)
					::String tmp37 = un;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(519)
					::haxor::math::Matrix4 tmp38 = m4;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(519)
					m->SetMatrix4(tmp37,tmp38,null());
				}
				else if (  ( _switch_1==HX_HCSTRING("ViewMatrixInverse","\xaa","\x79","\xcd","\x40"))){
					HX_STACK_LINE(520)
					::String tmp37 = un;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(520)
					::haxor::math::Matrix4 tmp38 = m4;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(520)
					m->SetMatrix4(tmp37,tmp38,null());
				}
				else if (  ( _switch_1==HX_HCSTRING("ProjectionMatrix","\x50","\x64","\xb6","\xea"))){
					HX_STACK_LINE(521)
					::String tmp37 = un;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(521)
					::haxor::math::Matrix4 tmp38 = m4;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(521)
					m->SetMatrix4(tmp37,tmp38,null());
				}
				else if (  ( _switch_1==HX_HCSTRING("ProjectionMatrixInverse","\x40","\x39","\xa4","\x17"))){
					HX_STACK_LINE(522)
					::String tmp37 = un;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(522)
					::haxor::math::Matrix4 tmp38 = m4;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(522)
					m->SetMatrix4(tmp37,tmp38,null());
				}
				HX_STACK_LINE(525)
				(k)++;
			}
			HX_STACK_LINE(527)
			Array< ::Dynamic > tmp23 = this->globals;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(527)
			int tmp24 = m->__cid;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(527)
			Array< ::String > tmp25 = gl;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(527)
			tmp23[tmp24] = tmp25;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(MaterialContext_obj,UpdateShader,(void))

Void MaterialContext_obj::UpdateMaterial( ::haxor::graphics::material::Material m){
{
		HX_STACK_FRAME("haxor.context.MaterialContext","UpdateMaterial",0x3662b001,"haxor.context.MaterialContext.UpdateMaterial","haxor/context/MaterialContext.hx",537,0x0e17e323)
		HX_STACK_THIS(this)
		HX_STACK_ARG(m,"m")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialContext_obj,UpdateMaterial,(void))

Void MaterialContext_obj::CreateUniform( ::haxor::graphics::material::Material m,::haxor::graphics::material::MaterialUniform u){
{
		HX_STACK_FRAME("haxor.context.MaterialContext","CreateUniform",0x5e968a87,"haxor.context.MaterialContext.CreateUniform","haxor/context/MaterialContext.hx",547,0x0e17e323)
		HX_STACK_THIS(this)
		HX_STACK_ARG(m,"m")
		HX_STACK_ARG(u,"u")
		HX_STACK_LINE(548)
		u->__d = true;
		HX_STACK_LINE(549)
		u->exists = true;
		HX_STACK_LINE(551)
		Array< bool > tmp = this->is_linked;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(551)
		int tmp1 = m->__cid;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(551)
		bool tmp2 = tmp->__get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(551)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(551)
		if ((tmp3)){
			HX_STACK_LINE(551)
			return null();
		}
		HX_STACK_LINE(552)
		Array< int > tmp4 = this->programs;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(552)
		int tmp5 = m->__cid;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(552)
		int tmp6 = tmp4->__get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(552)
		int p = tmp6;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(553)
		::haxor::platform::graphics::OpenGL tmp7 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(553)
		int tmp8 = p;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(553)
		::String tmp9 = u->name;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(553)
		int tmp10 = tmp7->GetUniformLocation(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(553)
		int loc = tmp10;		HX_STACK_VAR(loc,"loc");
		HX_STACK_LINE(555)
		Array< ::Dynamic > tmp11 = this->uniforms;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(555)
		int tmp12 = m->__cid;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(555)
		Array< int > tmp13 = tmp11->__get(tmp12).StaticCast< Array< int > >();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(555)
		int tmp14 = u->__cid;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(555)
		int tmp15 = loc;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(555)
		tmp13[tmp14] = tmp15;
		HX_STACK_LINE(556)
		int tmp16 = loc;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(556)
		int tmp17 = ::haxor::graphics::GL_obj::INVALID;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(556)
		bool tmp18 = (tmp16 != tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(556)
		u->exists = tmp18;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MaterialContext_obj,CreateUniform,(void))

Void MaterialContext_obj::DestroyUniform( ::haxor::graphics::material::Material m,::haxor::graphics::material::MaterialUniform u){
{
		HX_STACK_FRAME("haxor.context.MaterialContext","DestroyUniform",0x32638f8b,"haxor.context.MaterialContext.DestroyUniform","haxor/context/MaterialContext.hx",565,0x0e17e323)
		HX_STACK_THIS(this)
		HX_STACK_ARG(m,"m")
		HX_STACK_ARG(u,"u")
		HX_STACK_LINE(568)
		bool tmp = (m != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(568)
		if ((tmp)){
			HX_STACK_LINE(568)
			Array< ::Dynamic > tmp1 = this->uniforms;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(568)
			int tmp2 = m->__cid;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(568)
			Array< int > tmp3 = tmp1->__get(tmp2).StaticCast< Array< int > >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(568)
			int tmp4 = u->__cid;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(568)
			int tmp5 = ::haxor::graphics::GL_obj::INVALID;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(568)
			tmp3[tmp4] = tmp5;
		}
		HX_STACK_LINE(569)
		{
			HX_STACK_LINE(569)
			int v = u->__cid;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(569)
			::haxor::context::MaterialContext tmp1 = ::haxor::context::EngineContext_obj::material;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(569)
			Array< int > tmp2 = tmp1->uid->m_cache;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(569)
			int tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(569)
			tmp2->push(tmp3);
			HX_STACK_LINE(569)
			v;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MaterialContext_obj,DestroyUniform,(void))

Array< ::Dynamic > MaterialContext_obj::GetActiveUniforms( ::haxor::graphics::material::Material m){
	HX_STACK_FRAME("haxor.context.MaterialContext","GetActiveUniforms",0x6f4cc44a,"haxor.context.MaterialContext.GetActiveUniforms","haxor/context/MaterialContext.hx",578,0x0e17e323)
	HX_STACK_THIS(this)
	HX_STACK_ARG(m,"m")
	HX_STACK_LINE(579)
	Array< ::Dynamic > tmp = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(579)
	Array< ::Dynamic > res = tmp;		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(580)
	Array< bool > tmp1 = this->is_linked;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(580)
	int tmp2 = m->__cid;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(580)
	bool tmp3 = tmp1->__get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(580)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(580)
	if ((tmp4)){
		HX_STACK_LINE(580)
		Array< ::Dynamic > tmp5 = res;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(580)
		return tmp5;
	}
	HX_STACK_LINE(581)
	Array< int > tmp5 = this->programs;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(581)
	int tmp6 = m->__cid;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(581)
	int tmp7 = tmp5->__get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(581)
	int p = tmp7;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(610)
	Array< ::Dynamic > tmp8 = res;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(610)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialContext_obj,GetActiveUniforms,return )

int MaterialContext_obj::GetAttribLocation( ::haxor::graphics::mesh::MeshAttrib a){
	HX_STACK_FRAME("haxor.context.MaterialContext","GetAttribLocation",0x3f3c2f44,"haxor.context.MaterialContext.GetAttribLocation","haxor/context/MaterialContext.hx",619,0x0e17e323)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(620)
	::haxor::graphics::material::Material tmp = this->current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(620)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(620)
	if ((tmp1)){
		HX_STACK_LINE(620)
		return (int)-1;
	}
	HX_STACK_LINE(621)
	Array< bool > tmp2 = this->is_linked;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(621)
	::haxor::graphics::material::Material tmp3 = this->current;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(621)
	int tmp4 = tmp3->__cid;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(621)
	bool tmp5 = tmp2->__get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(621)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(621)
	if ((tmp6)){
		HX_STACK_LINE(621)
		return (int)-1;
	}
	HX_STACK_LINE(622)
	Array< int > tmp7 = this->programs;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(622)
	::haxor::graphics::material::Material tmp8 = this->current;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(622)
	int tmp9 = tmp8->__cid;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(622)
	int tmp10 = tmp7->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(622)
	int p = tmp10;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(623)
	Array< ::Dynamic > tmp11 = this->locations;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(623)
	::haxor::graphics::material::Material tmp12 = this->current;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(623)
	int tmp13 = tmp12->__cid;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(623)
	Array< int > tmp14 = tmp11->__get(tmp13).StaticCast< Array< int > >();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(623)
	int tmp15 = a->__cid;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(623)
	int tmp16 = tmp14->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(623)
	int loc = tmp16;		HX_STACK_VAR(loc,"loc");
	HX_STACK_LINE(624)
	bool tmp17 = (loc == (int)-1);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(624)
	if ((tmp17)){
		HX_STACK_LINE(626)
		::haxor::platform::graphics::OpenGL tmp18 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(626)
		int tmp19 = p;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(626)
		::String tmp20 = a->m_name;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(626)
		int tmp21 = tmp18->GetAttribLocation(tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(626)
		loc = tmp21;
		HX_STACK_LINE(627)
		bool tmp22 = (loc < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(627)
		if ((tmp22)){
			HX_STACK_LINE(627)
			Array< ::Dynamic > tmp23 = this->locations;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(627)
			::haxor::graphics::material::Material tmp24 = this->current;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(627)
			int tmp25 = tmp24->__cid;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(627)
			Array< int > tmp26 = tmp23->__get(tmp25).StaticCast< Array< int > >();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(627)
			int tmp27 = a->__cid;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(627)
			tmp26[tmp27] = (int)-2;
		}
	}
	HX_STACK_LINE(629)
	int tmp18 = loc;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(629)
	return tmp18;
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialContext_obj,GetAttribLocation,return )

Void MaterialContext_obj::Bind( ::haxor::graphics::material::Material m,::haxor::component::Transform t,::haxor::component::Camera c,::haxor::graphics::mesh::Mesh msh){
{
		HX_STACK_FRAME("haxor.context.MaterialContext","Bind",0x93355eae,"haxor.context.MaterialContext.Bind","haxor/context/MaterialContext.hx",637,0x0e17e323)
		HX_STACK_THIS(this)
		HX_STACK_ARG(m,"m")
		HX_STACK_ARG(t,"t")
		HX_STACK_ARG(c,"c")
		HX_STACK_ARG(msh,"msh")
		HX_STACK_LINE(638)
		::haxor::graphics::material::Material tmp = m;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(638)
		::haxor::graphics::material::Material tmp1 = this->current;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(638)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(638)
		bool material_change = tmp2;		HX_STACK_VAR(material_change,"material_change");
		HX_STACK_LINE(639)
		::haxor::graphics::material::Material tmp3 = m;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(639)
		this->UseMaterial(tmp3);
		HX_STACK_LINE(640)
		::haxor::component::Transform tmp4 = t;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(640)
		::haxor::component::Camera tmp5 = c;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(640)
		::haxor::graphics::mesh::Mesh tmp6 = msh;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(640)
		bool tmp7 = material_change;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(640)
		this->UpdateMaterialUniforms(tmp4,tmp5,tmp6,tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(MaterialContext_obj,Bind,(void))

Void MaterialContext_obj::Unbind( ){
{
		HX_STACK_FRAME("haxor.context.MaterialContext","Unbind",0x442b43c7,"haxor.context.MaterialContext.Unbind","haxor/context/MaterialContext.hx",647,0x0e17e323)
		HX_STACK_THIS(this)
		HX_STACK_LINE(649)
		::haxor::graphics::material::Material tmp = this->current;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(649)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(649)
		if ((tmp1)){
			HX_STACK_LINE(649)
			return null();
		}
		HX_STACK_LINE(650)
		::haxor::graphics::material::Material tmp2 = this->current;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(650)
		Array< ::Dynamic > ul = tmp2->m_uniforms;		HX_STACK_VAR(ul,"ul");
		HX_STACK_LINE(651)
		{
			HX_STACK_LINE(651)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(651)
			int _g = ul->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(651)
			while((true)){
				HX_STACK_LINE(651)
				bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(651)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(651)
				if ((tmp4)){
					HX_STACK_LINE(651)
					break;
				}
				HX_STACK_LINE(651)
				int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(651)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(653)
				::haxor::graphics::material::MaterialUniform tmp6 = ul->__get(i).StaticCast< ::haxor::graphics::material::MaterialUniform >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(653)
				::haxor::graphics::texture::Texture tmp7 = tmp6->texture;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(653)
				bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(653)
				if ((tmp8)){
					HX_STACK_LINE(655)
					::haxor::graphics::material::MaterialUniform tmp9 = ul->__get(i).StaticCast< ::haxor::graphics::material::MaterialUniform >();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(655)
					tmp9->texture->__slot = (int)-1;
				}
			}
		}
		HX_STACK_LINE(658)
		this->current = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MaterialContext_obj,Unbind,(void))

Void MaterialContext_obj::UseMaterial( ::haxor::graphics::material::Material m){
{
		HX_STACK_FRAME("haxor.context.MaterialContext","UseMaterial",0xef2c6b3d,"haxor.context.MaterialContext.UseMaterial","haxor/context/MaterialContext.hx",666,0x0e17e323)
		HX_STACK_THIS(this)
		HX_STACK_ARG(m,"m")
		HX_STACK_LINE(667)
		::haxor::graphics::material::Material tmp = m;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(667)
		::haxor::graphics::material::Material tmp1 = this->current;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(667)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(667)
		if ((tmp2)){
			HX_STACK_LINE(669)
			this->Unbind();
			HX_STACK_LINE(670)
			this->current = m;
			HX_STACK_LINE(671)
			bool tmp3 = (m != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(671)
			if ((tmp3)){
				HX_STACK_LINE(673)
				this->slot = (int)0;
				HX_STACK_LINE(674)
				Array< bool > tmp4 = this->viewmatrix;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(674)
				int tmp5 = m->__cid;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(674)
				tmp4[tmp5] = false;
				HX_STACK_LINE(675)
				Array< bool > tmp6 = this->projmatrix;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(675)
				int tmp7 = m->__cid;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(675)
				tmp6[tmp7] = false;
				HX_STACK_LINE(676)
				Array< int > tmp8 = this->programs;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(676)
				int tmp9 = m->__cid;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(676)
				int tmp10 = tmp8->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(676)
				int p = tmp10;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(677)
				::haxor::graphics::material::Material tmp11 = m;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(677)
				this->UpdateFlags(tmp11);
				HX_STACK_LINE(678)
				Array< bool > tmp12 = this->is_linked;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(678)
				int tmp13 = m->__cid;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(678)
				bool tmp14 = tmp12->__get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(678)
				if ((tmp14)){
					HX_STACK_LINE(678)
					::haxor::platform::graphics::OpenGL tmp15 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(678)
					int tmp16 = p;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(678)
					tmp15->UseProgram(tmp16);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialContext_obj,UseMaterial,(void))

Void MaterialContext_obj::UpdateMaterialUniforms( ::haxor::component::Transform t,::haxor::component::Camera c,::haxor::graphics::mesh::Mesh msh,bool p_changed){
{
		HX_STACK_FRAME("haxor.context.MaterialContext","UpdateMaterialUniforms",0x0f8aa1e0,"haxor.context.MaterialContext.UpdateMaterialUniforms","haxor/context/MaterialContext.hx",690,0x0e17e323)
		HX_STACK_THIS(this)
		HX_STACK_ARG(t,"t")
		HX_STACK_ARG(c,"c")
		HX_STACK_ARG(msh,"msh")
		HX_STACK_ARG(p_changed,"p_changed")
		HX_STACK_LINE(694)
		::haxor::graphics::material::Material tmp = this->current;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(694)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(694)
		if ((tmp1)){
			HX_STACK_LINE(699)
			{
				HX_STACK_LINE(700)
				Array< bool > tmp2 = this->viewmatrix;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(700)
				::haxor::graphics::material::Material tmp3 = this->current;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(700)
				int tmp4 = tmp3->__cid;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(700)
				bool tmp5 = (c == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(700)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(700)
				if ((tmp5)){
					HX_STACK_LINE(700)
					tmp6 = false;
				}
				else{
					HX_STACK_LINE(700)
					tmp6 = c->m_view_uniform_dirty;
				}
				HX_STACK_LINE(700)
				tmp2[tmp4] = tmp6;
				HX_STACK_LINE(701)
				Array< bool > tmp7 = this->projmatrix;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(701)
				::haxor::graphics::material::Material tmp8 = this->current;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(701)
				int tmp9 = tmp8->__cid;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(701)
				bool tmp10 = (c == null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(701)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(701)
				if ((tmp10)){
					HX_STACK_LINE(701)
					tmp11 = false;
				}
				else{
					HX_STACK_LINE(701)
					tmp11 = c->m_proj_uniform_dirty;
				}
				HX_STACK_LINE(701)
				tmp7[tmp9] = tmp11;
			}
			HX_STACK_LINE(705)
			bool tmp2 = (t == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(705)
			::haxor::component::Transform tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(705)
			if ((tmp2)){
				HX_STACK_LINE(705)
				tmp3 = ::haxor::component::Transform_obj::get_root();
			}
			else{
				HX_STACK_LINE(705)
				tmp3 = t;
			}
			HX_STACK_LINE(705)
			t = tmp3;
			HX_STACK_LINE(706)
			::haxor::component::Transform tmp4 = t;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(706)
			Array< ::Dynamic > tmp5 = this->transform;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(706)
			::haxor::graphics::material::Material tmp6 = this->current;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(706)
			int tmp7 = tmp6->__cid;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(706)
			::haxor::component::Transform tmp8 = tmp5->__get(tmp7).StaticCast< ::haxor::component::Transform >();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(706)
			bool tmp9 = (tmp4 != tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(706)
			bool ut = tmp9;		HX_STACK_VAR(ut,"ut");
			HX_STACK_LINE(708)
			bool tmp10 = ut;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(708)
			if ((tmp10)){
				HX_STACK_LINE(708)
				Array< ::Dynamic > tmp11 = this->transform;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(708)
				::haxor::graphics::material::Material tmp12 = this->current;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(708)
				int tmp13 = tmp12->__cid;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(708)
				::haxor::component::Transform tmp14 = tmp11->__get(tmp13).StaticCast< ::haxor::component::Transform >();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(708)
				bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(708)
				if ((tmp15)){
					HX_STACK_LINE(708)
					Array< ::Dynamic > tmp16 = this->transform;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(708)
					::haxor::graphics::material::Material tmp17 = this->current;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(708)
					int tmp18 = tmp17->__cid;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(708)
					::haxor::component::Transform tmp19 = tmp16->__get(tmp18).StaticCast< ::haxor::component::Transform >();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(708)
					tmp19->m_uniform_dirty = false;
				}
			}
			HX_STACK_LINE(710)
			Array< ::Dynamic > tmp11 = this->transform;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(710)
			::haxor::graphics::material::Material tmp12 = this->current;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(710)
			int tmp13 = tmp12->__cid;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(710)
			::haxor::component::Transform tmp14 = t;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(710)
			tmp11[tmp13] = tmp14;
			HX_STACK_LINE(712)
			bool tmp15 = ut;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(712)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(712)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(712)
			if ((tmp16)){
				HX_STACK_LINE(712)
				tmp17 = t->m_uniform_dirty;
			}
			else{
				HX_STACK_LINE(712)
				tmp17 = true;
			}
			HX_STACK_LINE(712)
			ut = tmp17;
			HX_STACK_LINE(715)
			::haxor::component::Camera tmp18 = c;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(715)
			Array< ::Dynamic > tmp19 = this->camera;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(715)
			::haxor::graphics::material::Material tmp20 = this->current;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(715)
			int tmp21 = tmp20->__cid;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(715)
			::haxor::component::Camera tmp22 = tmp19->__get(tmp21).StaticCast< ::haxor::component::Camera >();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(715)
			bool tmp23 = (tmp18 != tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(715)
			bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(715)
			if ((tmp23)){
				HX_STACK_LINE(715)
				tmp24 = (c != null());
			}
			else{
				HX_STACK_LINE(715)
				tmp24 = false;
			}
			HX_STACK_LINE(715)
			bool uc = tmp24;		HX_STACK_VAR(uc,"uc");
			HX_STACK_LINE(716)
			Array< bool > tmp25 = this->viewmatrix;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(716)
			::haxor::graphics::material::Material tmp26 = this->current;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(716)
			int tmp27 = tmp26->__cid;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(716)
			bool tmp28 = tmp25->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(716)
			bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(716)
			bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(716)
			if ((tmp29)){
				HX_STACK_LINE(716)
				tmp30 = uc;
			}
			else{
				HX_STACK_LINE(716)
				tmp30 = true;
			}
			HX_STACK_LINE(716)
			bool ucv = tmp30;		HX_STACK_VAR(ucv,"ucv");
			HX_STACK_LINE(717)
			Array< bool > tmp31 = this->projmatrix;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(717)
			::haxor::graphics::material::Material tmp32 = this->current;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(717)
			int tmp33 = tmp32->__cid;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(717)
			bool tmp34 = tmp31->__get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(717)
			bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(717)
			bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(717)
			if ((tmp35)){
				HX_STACK_LINE(717)
				tmp36 = uc;
			}
			else{
				HX_STACK_LINE(717)
				tmp36 = true;
			}
			HX_STACK_LINE(717)
			bool ucp = tmp36;		HX_STACK_VAR(ucp,"ucp");
			HX_STACK_LINE(718)
			bool tmp37 = (c != null());		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(718)
			if ((tmp37)){
				HX_STACK_LINE(718)
				Array< ::Dynamic > tmp38 = this->camera;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(718)
				::haxor::graphics::material::Material tmp39 = this->current;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(718)
				int tmp40 = tmp39->__cid;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(718)
				::haxor::component::Camera tmp41 = c;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(718)
				tmp38[tmp40] = tmp41;
			}
			HX_STACK_LINE(720)
			Array< bool > tmp38 = this->is_linked;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(720)
			::haxor::graphics::material::Material tmp39 = this->current;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(720)
			int tmp40 = tmp39->__cid;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(720)
			bool tmp41 = tmp38->__get(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(720)
			if ((tmp41)){
				HX_STACK_LINE(720)
				::haxor::component::Transform tmp42 = t;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(720)
				::haxor::graphics::material::Material tmp43 = this->current;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(720)
				::haxor::graphics::mesh::Mesh tmp44 = msh;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(720)
				this->SetLights(tmp42,tmp43,tmp44);
			}
			HX_STACK_LINE(722)
			Array< bool > tmp42 = this->is_linked;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(722)
			::haxor::graphics::material::Material tmp43 = this->current;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(722)
			int tmp44 = tmp43->__cid;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(722)
			bool tmp45 = tmp42->__get(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(722)
			if ((tmp45)){
				HX_STACK_LINE(722)
				bool tmp46 = ut;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(722)
				bool tmp47 = ucv;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(722)
				bool tmp48 = ucp;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(722)
				::haxor::component::Transform tmp49 = t;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(722)
				::haxor::component::Camera tmp50 = c;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(722)
				this->UploadUniforms(tmp46,tmp47,tmp48,tmp49,tmp50);
			}
			HX_STACK_LINE(724)
			Array< bool > tmp46 = this->viewmatrix;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(724)
			::haxor::graphics::material::Material tmp47 = this->current;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(724)
			int tmp48 = tmp47->__cid;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(724)
			tmp46[tmp48] = false;
			HX_STACK_LINE(725)
			Array< bool > tmp49 = this->projmatrix;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(725)
			::haxor::graphics::material::Material tmp50 = this->current;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(725)
			int tmp51 = tmp50->__cid;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(725)
			tmp49[tmp51] = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(MaterialContext_obj,UpdateMaterialUniforms,(void))

Void MaterialContext_obj::UploadUniforms( bool ut,bool ucv,bool ucp,::haxor::component::Transform t,::haxor::component::Camera c){
{
		HX_STACK_FRAME("haxor.context.MaterialContext","UploadUniforms",0x49bf1c11,"haxor.context.MaterialContext.UploadUniforms","haxor/context/MaterialContext.hx",734,0x0e17e323)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ut,"ut")
		HX_STACK_ARG(ucv,"ucv")
		HX_STACK_ARG(ucp,"ucp")
		HX_STACK_ARG(t,"t")
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(735)
		::haxor::graphics::material::Material tmp = this->current;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(735)
		Array< ::Dynamic > ul = tmp->m_uniforms;		HX_STACK_VAR(ul,"ul");
		HX_STACK_LINE(737)
		{
			HX_STACK_LINE(737)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(737)
			int _g = ul->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(737)
			while((true)){
				HX_STACK_LINE(737)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(737)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(737)
				if ((tmp2)){
					HX_STACK_LINE(737)
					break;
				}
				HX_STACK_LINE(737)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(737)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(739)
				::haxor::graphics::material::MaterialUniform tmp4 = ul->__get(i).StaticCast< ::haxor::graphics::material::MaterialUniform >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(739)
				::haxor::graphics::material::MaterialUniform u = tmp4;		HX_STACK_VAR(u,"u");
				HX_STACK_LINE(742)
				::haxor::graphics::material::MaterialUniform tmp5 = u;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(742)
				bool tmp6 = ut;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(742)
				bool tmp7 = ucv;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(742)
				bool tmp8 = ucp;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(742)
				::haxor::component::Transform tmp9 = t;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(742)
				::haxor::component::Camera tmp10 = c;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(742)
				this->UploadGlobalUniform(tmp5,tmp6,tmp7,tmp8,tmp9,tmp10);
				HX_STACK_LINE(745)
				::haxor::graphics::material::Material tmp11 = this->current;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(745)
				::haxor::graphics::material::MaterialUniform tmp12 = u;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(745)
				this->UploadUniform(tmp11,tmp12);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(MaterialContext_obj,UploadUniforms,(void))

Void MaterialContext_obj::UploadUniform( ::haxor::graphics::material::Material m,::haxor::graphics::material::MaterialUniform u){
{
		HX_STACK_FRAME("haxor.context.MaterialContext","UploadUniform",0xebaac222,"haxor.context.MaterialContext.UploadUniform","haxor/context/MaterialContext.hx",754,0x0e17e323)
		HX_STACK_THIS(this)
		HX_STACK_ARG(m,"m")
		HX_STACK_ARG(u,"u")
		HX_STACK_LINE(755)
		int loc;		HX_STACK_VAR(loc,"loc");
		HX_STACK_LINE(756)
		Array< ::Dynamic > tmp = this->uniforms;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(756)
		int tmp1 = m->__cid;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(756)
		Array< int > tmp2 = tmp->__get(tmp1).StaticCast< Array< int > >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(756)
		int tmp3 = u->__cid;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(756)
		int tmp4 = tmp2->__get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(756)
		loc = tmp4;
		HX_STACK_LINE(758)
		int tmp5 = loc;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(758)
		int tmp6 = ::haxor::graphics::GL_obj::INVALID;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(758)
		bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(758)
		if ((tmp7)){
			HX_STACK_LINE(760)
			return null();
		}
		HX_STACK_LINE(763)
		bool tmp8 = (u->texture != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(763)
		bool is_texture = tmp8;		HX_STACK_VAR(is_texture,"is_texture");
		HX_STACK_LINE(765)
		bool changed = u->__d;		HX_STACK_VAR(changed,"changed");
		HX_STACK_LINE(766)
		int texture_slot = (int)-1;		HX_STACK_VAR(texture_slot,"texture_slot");
		HX_STACK_LINE(767)
		bool tmp9 = is_texture;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(767)
		if ((tmp9)){
			HX_STACK_LINE(770)
			int tmp10 = u->texture->__slot;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(770)
			bool tmp11 = (tmp10 < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(770)
			if ((tmp11)){
				HX_STACK_LINE(770)
				int tmp12 = (this->slot)++;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(770)
				int tmp13 = texture_slot = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(770)
				u->texture->__slot = tmp13;
			}
			HX_STACK_LINE(771)
			::haxor::io::Int32Array b = ((::haxor::io::Int32Array)(u->data));		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(772)
			int tmp12 = u->texture->__slot;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(772)
			int tmp13 = b->Get((int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(772)
			bool tmp14 = (tmp12 != tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(772)
			if ((tmp14)){
				HX_STACK_LINE(772)
				changed = true;
				HX_STACK_LINE(772)
				int tmp15 = u->texture->__slot;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(772)
				b->Set((int)0,tmp15);
			}
			HX_STACK_LINE(773)
			::haxor::context::TextureContext tmp15 = ::haxor::context::EngineContext_obj::texture;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(773)
			::haxor::graphics::texture::Texture tmp16 = u->texture;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(773)
			int tmp17 = u->texture->__slot;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(773)
			tmp15->Bind(tmp16,tmp17);
		}
		HX_STACK_LINE(775)
		bool tmp10 = changed;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(775)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(775)
		if ((tmp11)){
			HX_STACK_LINE(775)
			return null();
		}
		HX_STACK_LINE(777)
		int tmp12 = loc;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(777)
		::haxor::graphics::material::MaterialUniform tmp13 = u;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(777)
		int tmp14 = texture_slot;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(777)
		this->ApplyUniform(tmp12,tmp13,tmp14);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MaterialContext_obj,UploadUniform,(void))

Void MaterialContext_obj::ApplyUniform( int loc,::haxor::graphics::material::MaterialUniform u,int ts){
{
		HX_STACK_FRAME("haxor.context.MaterialContext","ApplyUniform",0x3cdbcf57,"haxor.context.MaterialContext.ApplyUniform","haxor/context/MaterialContext.hx",786,0x0e17e323)
		HX_STACK_THIS(this)
		HX_STACK_ARG(loc,"loc")
		HX_STACK_ARG(u,"u")
		HX_STACK_ARG(ts,"ts")
		HX_STACK_LINE(787)
		int off = u->offset;		HX_STACK_VAR(off,"off");
		HX_STACK_LINE(789)
		int tmp = u->data->m_length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(789)
		int tmp1 = off;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(789)
		bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(789)
		bool is_array = tmp2;		HX_STACK_VAR(is_array,"is_array");
		HX_STACK_LINE(791)
		bool tmp3 = u->isFloat;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(791)
		if ((tmp3)){
			HX_STACK_LINE(793)
			::haxor::io::FloatArray b = ((::haxor::io::FloatArray)(u->data));		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(795)
			int tmp4 = off;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(795)
			switch( (int)(tmp4)){
				case (int)1: {
					HX_STACK_LINE(797)
					bool tmp5 = is_array;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(797)
					if ((tmp5)){
						HX_STACK_LINE(797)
						::haxor::platform::graphics::OpenGL tmp6 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(797)
						int tmp7 = loc;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(797)
						::haxor::io::FloatArray tmp8 = b;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(797)
						tmp6->Uniform1fv(tmp7,tmp8);
					}
					else{
						HX_STACK_LINE(797)
						Float tmp6 = b->Get((int)0);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(797)
						Float p_x = tmp6;		HX_STACK_VAR(p_x,"p_x");
						HX_STACK_LINE(797)
						::haxor::platform::graphics::OpenGL tmp7 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(797)
						int tmp8 = loc;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(797)
						Float tmp9 = p_x;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(797)
						tmp7->Uniform1f(tmp8,tmp9);
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(798)
					bool tmp5 = is_array;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(798)
					if ((tmp5)){
						HX_STACK_LINE(798)
						::haxor::platform::graphics::OpenGL tmp6 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(798)
						int tmp7 = loc;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(798)
						::haxor::io::FloatArray tmp8 = b;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(798)
						tmp6->Uniform2fv(tmp7,tmp8);
					}
					else{
						HX_STACK_LINE(798)
						Float tmp6 = b->Get((int)0);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(798)
						Float p_x = tmp6;		HX_STACK_VAR(p_x,"p_x");
						HX_STACK_LINE(798)
						Float tmp7 = b->Get((int)1);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(798)
						Float p_y = tmp7;		HX_STACK_VAR(p_y,"p_y");
						HX_STACK_LINE(798)
						::haxor::platform::graphics::OpenGL tmp8 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(798)
						int tmp9 = loc;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(798)
						Float tmp10 = p_x;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(798)
						Float tmp11 = p_y;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(798)
						tmp8->Uniform2f(tmp9,tmp10,tmp11);
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(799)
					bool tmp5 = is_array;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(799)
					if ((tmp5)){
						HX_STACK_LINE(799)
						::haxor::platform::graphics::OpenGL tmp6 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(799)
						int tmp7 = loc;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(799)
						::haxor::io::FloatArray tmp8 = b;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(799)
						tmp6->Uniform3fv(tmp7,tmp8);
					}
					else{
						HX_STACK_LINE(799)
						Float tmp6 = b->Get((int)0);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(799)
						Float p_x = tmp6;		HX_STACK_VAR(p_x,"p_x");
						HX_STACK_LINE(799)
						Float tmp7 = b->Get((int)1);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(799)
						Float p_y = tmp7;		HX_STACK_VAR(p_y,"p_y");
						HX_STACK_LINE(799)
						Float tmp8 = b->Get((int)2);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(799)
						Float p_z = tmp8;		HX_STACK_VAR(p_z,"p_z");
						HX_STACK_LINE(799)
						::haxor::platform::graphics::OpenGL tmp9 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(799)
						int tmp10 = loc;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(799)
						Float tmp11 = p_x;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(799)
						Float tmp12 = p_y;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(799)
						Float tmp13 = p_z;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(799)
						tmp9->Uniform3f(tmp10,tmp11,tmp12,tmp13);
					}
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(800)
					bool tmp5 = is_array;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(800)
					if ((tmp5)){
						HX_STACK_LINE(800)
						::haxor::platform::graphics::OpenGL tmp6 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(800)
						int tmp7 = loc;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(800)
						::haxor::io::FloatArray tmp8 = b;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(800)
						tmp6->Uniform4fv(tmp7,tmp8);
					}
					else{
						HX_STACK_LINE(800)
						Float tmp6 = b->Get((int)0);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(800)
						Float p_x = tmp6;		HX_STACK_VAR(p_x,"p_x");
						HX_STACK_LINE(800)
						Float tmp7 = b->Get((int)1);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(800)
						Float p_y = tmp7;		HX_STACK_VAR(p_y,"p_y");
						HX_STACK_LINE(800)
						Float tmp8 = b->Get((int)2);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(800)
						Float p_z = tmp8;		HX_STACK_VAR(p_z,"p_z");
						HX_STACK_LINE(800)
						Float tmp9 = b->Get((int)3);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(800)
						Float p_w = tmp9;		HX_STACK_VAR(p_w,"p_w");
						HX_STACK_LINE(800)
						::haxor::platform::graphics::OpenGL tmp10 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(800)
						int tmp11 = loc;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(800)
						Float tmp12 = p_x;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(800)
						Float tmp13 = p_y;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(800)
						Float tmp14 = p_z;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(800)
						Float tmp15 = p_w;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(800)
						tmp10->Uniform4f(tmp11,tmp12,tmp13,tmp14,tmp15);
					}
				}
				;break;
				case (int)16: {
					HX_STACK_LINE(801)
					::haxor::platform::graphics::OpenGL tmp5 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(801)
					int tmp6 = loc;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(801)
					::haxor::io::FloatArray tmp7 = b;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(801)
					tmp5->UniformMatrix4fv(tmp6,false,tmp7);
				}
				;break;
			}
		}
		else{
			HX_STACK_LINE(807)
			::haxor::io::Int32Array b = ((::haxor::io::Int32Array)(u->data));		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(808)
			int tmp4 = off;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(808)
			switch( (int)(tmp4)){
				case (int)1: {
					HX_STACK_LINE(810)
					bool tmp5 = is_array;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(810)
					if ((tmp5)){
						HX_STACK_LINE(810)
						::haxor::platform::graphics::OpenGL tmp6 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(810)
						int tmp7 = loc;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(810)
						::haxor::io::Int32Array tmp8 = b;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(810)
						tmp6->Uniform1iv(tmp7,tmp8);
					}
					else{
						HX_STACK_LINE(810)
						int tmp6 = b->Get((int)0);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(810)
						int p_x = tmp6;		HX_STACK_VAR(p_x,"p_x");
						HX_STACK_LINE(810)
						::haxor::platform::graphics::OpenGL tmp7 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(810)
						int tmp8 = loc;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(810)
						int tmp9 = p_x;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(810)
						tmp7->Uniform1i(tmp8,tmp9);
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(811)
					bool tmp5 = is_array;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(811)
					if ((tmp5)){
						HX_STACK_LINE(811)
						::haxor::platform::graphics::OpenGL tmp6 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(811)
						int tmp7 = loc;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(811)
						::haxor::io::Int32Array tmp8 = b;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(811)
						tmp6->Uniform2iv(tmp7,tmp8);
					}
					else{
						HX_STACK_LINE(811)
						int tmp6 = b->Get((int)0);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(811)
						int p_x = tmp6;		HX_STACK_VAR(p_x,"p_x");
						HX_STACK_LINE(811)
						int tmp7 = b->Get((int)1);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(811)
						int p_y = tmp7;		HX_STACK_VAR(p_y,"p_y");
						HX_STACK_LINE(811)
						::haxor::platform::graphics::OpenGL tmp8 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(811)
						int tmp9 = loc;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(811)
						int tmp10 = p_x;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(811)
						int tmp11 = p_y;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(811)
						tmp8->Uniform2i(tmp9,tmp10,tmp11);
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(812)
					bool tmp5 = is_array;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(812)
					if ((tmp5)){
						HX_STACK_LINE(812)
						::haxor::platform::graphics::OpenGL tmp6 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(812)
						int tmp7 = loc;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(812)
						::haxor::io::Int32Array tmp8 = b;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(812)
						tmp6->Uniform3iv(tmp7,tmp8);
					}
					else{
						HX_STACK_LINE(812)
						int tmp6 = b->Get((int)0);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(812)
						int p_x = tmp6;		HX_STACK_VAR(p_x,"p_x");
						HX_STACK_LINE(812)
						int tmp7 = b->Get((int)1);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(812)
						int p_y = tmp7;		HX_STACK_VAR(p_y,"p_y");
						HX_STACK_LINE(812)
						int tmp8 = b->Get((int)2);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(812)
						int p_z = tmp8;		HX_STACK_VAR(p_z,"p_z");
						HX_STACK_LINE(812)
						::haxor::platform::graphics::OpenGL tmp9 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(812)
						int tmp10 = loc;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(812)
						int tmp11 = p_x;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(812)
						int tmp12 = p_y;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(812)
						int tmp13 = p_z;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(812)
						tmp9->Uniform3i(tmp10,tmp11,tmp12,tmp13);
					}
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(813)
					bool tmp5 = is_array;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(813)
					if ((tmp5)){
						HX_STACK_LINE(813)
						::haxor::platform::graphics::OpenGL tmp6 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(813)
						int tmp7 = loc;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(813)
						::haxor::io::Int32Array tmp8 = b;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(813)
						tmp6->Uniform4iv(tmp7,tmp8);
					}
					else{
						HX_STACK_LINE(813)
						int tmp6 = b->Get((int)0);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(813)
						int p_x = tmp6;		HX_STACK_VAR(p_x,"p_x");
						HX_STACK_LINE(813)
						int tmp7 = b->Get((int)1);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(813)
						int p_y = tmp7;		HX_STACK_VAR(p_y,"p_y");
						HX_STACK_LINE(813)
						int tmp8 = b->Get((int)2);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(813)
						int p_z = tmp8;		HX_STACK_VAR(p_z,"p_z");
						HX_STACK_LINE(813)
						int tmp9 = b->Get((int)3);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(813)
						int p_w = tmp9;		HX_STACK_VAR(p_w,"p_w");
						HX_STACK_LINE(813)
						::haxor::platform::graphics::OpenGL tmp10 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(813)
						int tmp11 = loc;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(813)
						int tmp12 = p_x;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(813)
						int tmp13 = p_y;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(813)
						int tmp14 = p_z;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(813)
						int tmp15 = p_w;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(813)
						tmp10->Uniform4i(tmp11,tmp12,tmp13,tmp14,tmp15);
					}
				}
				;break;
			}
		}
		HX_STACK_LINE(817)
		u->__d = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(MaterialContext_obj,ApplyUniform,(void))

Void MaterialContext_obj::UploadGlobalUniform( ::haxor::graphics::material::MaterialUniform u,bool ut,bool ucv,bool ucp,::haxor::component::Transform t,::haxor::component::Camera c){
{
		HX_STACK_FRAME("haxor.context.MaterialContext","UploadGlobalUniform",0x6eb8617f,"haxor.context.MaterialContext.UploadGlobalUniform","haxor/context/MaterialContext.hx",825,0x0e17e323)
		HX_STACK_THIS(this)
		HX_STACK_ARG(u,"u")
		HX_STACK_ARG(ut,"ut")
		HX_STACK_ARG(ucv,"ucv")
		HX_STACK_ARG(ucp,"ucp")
		HX_STACK_ARG(t,"t")
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(829)
		bool tmp = (c != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(829)
		ucp = tmp;
		HX_STACK_LINE(831)
		{
			HX_STACK_LINE(831)
			::String _g = u->name;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(831)
			::String tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(831)
			::String _switch_2 = (tmp1);
			if (  ( _switch_2==HX_HCSTRING("Fog","\xde","\x7e","\x35","\x00"))){
				HX_STACK_LINE(833)
				::haxor::math::Color tmp2 = ::haxor::graphics::Fog_obj::color;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(833)
				Float tmp3 = tmp2->r;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(833)
				::haxor::math::Color tmp4 = ::haxor::graphics::Fog_obj::color;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(833)
				Float tmp5 = tmp4->g;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(833)
				::haxor::math::Color tmp6 = ::haxor::graphics::Fog_obj::color;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(833)
				Float tmp7 = tmp6->b;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(833)
				::haxor::math::Color tmp8 = ::haxor::graphics::Fog_obj::color;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(833)
				Float tmp9 = tmp8->a;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(833)
				Float tmp10 = ::haxor::graphics::Fog_obj::density;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(833)
				Float tmp11 = ::haxor::graphics::Fog_obj::exp;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(833)
				Float tmp12 = ::haxor::graphics::Fog_obj::start;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(833)
				Float tmp13 = ::haxor::graphics::Fog_obj::end;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(833)
				Array< Float > tmp14 = Array_obj< Float >::__new().Add(tmp3).Add(tmp5).Add(tmp7).Add(tmp9).Add(tmp10).Add(tmp11).Add(tmp12).Add(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(833)
				u->SetFloat4Array(tmp14);
			}
			else if (  ( _switch_2==HX_HCSTRING("Lights","\xfd","\x9e","\x96","\x1c"))){
				HX_STACK_LINE(834)
				Array< Float > tmp2 = ::haxor::component::light::Light_obj::m_buffer;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(834)
				u->SetFloat4Array(tmp2);
			}
			else if (  ( _switch_2==HX_HCSTRING("Ambient","\xf8","\xbf","\xd2","\xd6"))){
				HX_STACK_LINE(835)
				::haxor::math::Color tmp2 = ::haxor::component::light::Light_obj::ambient;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(835)
				::haxor::math::Color p_color = tmp2;		HX_STACK_VAR(p_color,"p_color");
				HX_STACK_LINE(835)
				Float tmp3 = p_color->r;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(835)
				Float tmp4 = p_color->g;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(835)
				Float tmp5 = p_color->b;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(835)
				Float tmp6 = p_color->a;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(835)
				u->SetFloat4(tmp3,tmp4,tmp5,tmp6);
			}
			else if (  ( _switch_2==HX_HCSTRING("Time","\x2d","\xf8","\xd5","\x37"))){
				HX_STACK_LINE(836)
				Float tmp2 = ::haxor::core::Time_obj::m_elapsed;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(836)
				u->SetFloat(tmp2);
			}
			else if (  ( _switch_2==HX_HCSTRING("RandomSeed","\x34","\x95","\xd6","\xb2"))){
				HX_STACK_LINE(837)
				Float tmp2 = ::Math_obj::random();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(837)
				u->SetFloat(tmp2);
			}
			else if (  ( _switch_2==HX_HCSTRING("RandomTexture","\xf8","\xb4","\x32","\xfb"))){
				HX_STACK_LINE(838)
				::haxor::graphics::texture::Texture2D tmp2 = ::haxor::graphics::texture::Texture2D_obj::get_random();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(838)
				u->SetTexture(tmp2);
			}
			else if (  ( _switch_2==HX_HCSTRING("WorldMatrix","\x13","\x62","\x68","\x6b"))){
				HX_STACK_LINE(841)
				bool tmp2 = ut;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(841)
				if ((tmp2)){
					HX_STACK_LINE(841)
					::haxor::math::Matrix4 tmp3 = t->get_WorldMatrix();		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(841)
					u->SetMatrix4(tmp3,null());
				}
			}
			else if (  ( _switch_2==HX_HCSTRING("WorldMatrixInverse","\xdd","\xc9","\x48","\xeb"))){
				HX_STACK_LINE(842)
				bool tmp2 = ut;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(842)
				if ((tmp2)){
					HX_STACK_LINE(842)
					::haxor::math::Matrix4 tmp3 = t->get_WorldMatrixInverse();		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(842)
					u->SetMatrix4(tmp3,null());
				}
			}
			else if (  ( _switch_2==HX_HCSTRING("WorldMatrixIT","\xbe","\x8c","\xd3","\x5f"))){
				HX_STACK_LINE(843)
				bool tmp2 = ut;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(843)
				if ((tmp2)){
					HX_STACK_LINE(843)
					::haxor::math::Matrix4 tmp3 = t->get_WorldMatrixInverse();		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(843)
					u->SetMatrix4(tmp3,true);
				}
			}
			else if (  ( _switch_2==HX_HCSTRING("CameraPosition","\x8e","\xe4","\xdc","\x6a"))){
				HX_STACK_LINE(844)
				bool tmp2 = ucv;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(844)
				if ((tmp2)){
					HX_STACK_LINE(844)
					::haxor::component::Transform tmp3 = c->m_entity->m_transform;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(844)
					::haxor::math::Vector3 tmp4 = tmp3->get_position();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(844)
					::haxor::math::Vector3 p_v = tmp4;		HX_STACK_VAR(p_v,"p_v");
					HX_STACK_LINE(844)
					Float tmp5 = p_v->x;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(844)
					Float tmp6 = p_v->y;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(844)
					Float tmp7 = p_v->z;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(844)
					u->SetFloat3(tmp5,tmp6,tmp7);
				}
			}
			else if (  ( _switch_2==HX_HCSTRING("CameraProjection","\xb4","\x4f","\x72","\xd4"))){
				HX_STACK_LINE(845)
				bool tmp2 = ucv;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(845)
				if ((tmp2)){
					HX_STACK_LINE(845)
					::haxor::math::Vector3 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(845)
					{
						HX_STACK_LINE(845)
						::haxor::context::DataContext tmp4 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(845)
						::haxor::context::DataContext _this = tmp4;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(845)
						Array< ::Dynamic > tmp5 = _this->m_v3;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(845)
						int tmp6 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(845)
						int tmp7 = _this->m_v3->length;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(845)
						int tmp8 = hx::Mod(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(845)
						int tmp9 = _this->m_nv3 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(845)
						tmp3 = tmp5->__get(tmp9).StaticCast< ::haxor::math::Vector3 >();
					}
					HX_STACK_LINE(845)
					Float tmp4 = c->m_near;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(845)
					Float tmp5 = c->m_far;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(845)
					::haxor::math::Vector3 tmp6 = tmp3->Set(tmp4,tmp5,(int)0);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(845)
					::haxor::math::Vector3 p_v = tmp6;		HX_STACK_VAR(p_v,"p_v");
					HX_STACK_LINE(845)
					Float tmp7 = p_v->x;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(845)
					Float tmp8 = p_v->y;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(845)
					Float tmp9 = p_v->z;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(845)
					u->SetFloat3(tmp7,tmp8,tmp9);
				}
			}
			else if (  ( _switch_2==HX_HCSTRING("ViewMatrix","\xa6","\x3a","\xc6","\xf3"))){
				HX_STACK_LINE(846)
				bool tmp2 = ucv;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(846)
				if ((tmp2)){
					HX_STACK_LINE(846)
					::haxor::component::Transform tmp3 = c->m_entity->m_transform;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(846)
					::haxor::math::Matrix4 tmp4 = tmp3->get_WorldMatrixInverse();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(846)
					u->SetMatrix4(tmp4,null());
				}
			}
			else if (  ( _switch_2==HX_HCSTRING("ViewMatrixInverse","\xaa","\x79","\xcd","\x40"))){
				HX_STACK_LINE(847)
				bool tmp2 = ucv;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(847)
				if ((tmp2)){
					HX_STACK_LINE(847)
					::haxor::component::Transform tmp3 = c->m_entity->m_transform;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(847)
					::haxor::math::Matrix4 tmp4 = tmp3->get_WorldMatrix();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(847)
					u->SetMatrix4(tmp4,null());
				}
			}
			else if (  ( _switch_2==HX_HCSTRING("ProjectionMatrix","\x50","\x64","\xb6","\xea"))){
				HX_STACK_LINE(848)
				bool tmp2 = ucp;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(848)
				if ((tmp2)){
					HX_STACK_LINE(848)
					::haxor::math::Matrix4 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(848)
					{
						HX_STACK_LINE(848)
						c->UpdateProjection();
						HX_STACK_LINE(848)
						tmp3 = c->m_projectionMatrix;
					}
					HX_STACK_LINE(848)
					u->SetMatrix4(tmp3,null());
				}
			}
			else if (  ( _switch_2==HX_HCSTRING("ProjectionMatrixInverse","\x40","\x39","\xa4","\x17"))){
				HX_STACK_LINE(849)
				bool tmp2 = ucp;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(849)
				if ((tmp2)){
					HX_STACK_LINE(849)
					::haxor::math::Matrix4 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(849)
					{
						HX_STACK_LINE(849)
						c->UpdateProjection();
						HX_STACK_LINE(849)
						tmp3 = c->m_projectionMatrixInverse;
					}
					HX_STACK_LINE(849)
					u->SetMatrix4(tmp3,null());
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(MaterialContext_obj,UploadGlobalUniform,(void))

Void MaterialContext_obj::SetLights( ::haxor::component::Transform t,::haxor::graphics::material::Material m,::haxor::graphics::mesh::Mesh msh){
{
		HX_STACK_FRAME("haxor.context.MaterialContext","SetLights",0x02542d8e,"haxor.context.MaterialContext.SetLights","haxor/context/MaterialContext.hx",860,0x0e17e323)
		HX_STACK_THIS(this)
		HX_STACK_ARG(t,"t")
		HX_STACK_ARG(m,"m")
		HX_STACK_ARG(msh,"msh")
		HX_STACK_LINE(861)
		bool tmp = m->lighting;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(861)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(861)
		if ((tmp1)){
			HX_STACK_LINE(861)
			return null();
		}
		HX_STACK_LINE(863)
		Array< ::Dynamic > tmp2 = ::haxor::component::light::Light_obj::m_list;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(863)
		Array< ::Dynamic > ll = tmp2;		HX_STACK_VAR(ll,"ll");
		HX_STACK_LINE(864)
		bool tmp3 = (ll->length <= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(864)
		if ((tmp3)){
			HX_STACK_LINE(864)
			return null();
		}
		HX_STACK_LINE(866)
		::haxor::math::AABB3 b = msh->m_bounds;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(868)
		::haxor::math::Vector3 tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(868)
		{
			HX_STACK_LINE(868)
			::haxor::context::DataContext tmp5 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(868)
			::haxor::context::DataContext _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(868)
			Array< ::Dynamic > tmp6 = _this->m_v3;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(868)
			int tmp7 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(868)
			int tmp8 = _this->m_v3->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(868)
			int tmp9 = hx::Mod(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(868)
			int tmp10 = _this->m_nv3 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(868)
			tmp4 = tmp6->__get(tmp10).StaticCast< ::haxor::math::Vector3 >();
		}
		HX_STACK_LINE(868)
		::haxor::math::Vector3 c = tmp4;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(869)
		::haxor::math::Vector3 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(869)
		{
			HX_STACK_LINE(869)
			::haxor::context::DataContext tmp6 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(869)
			::haxor::context::DataContext _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(869)
			Array< ::Dynamic > tmp7 = _this->m_v3;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(869)
			int tmp8 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(869)
			int tmp9 = _this->m_v3->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(869)
			int tmp10 = hx::Mod(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(869)
			int tmp11 = _this->m_nv3 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(869)
			tmp5 = tmp7->__get(tmp11).StaticCast< ::haxor::math::Vector3 >();
		}
		HX_STACK_LINE(869)
		::haxor::math::Vector3 p = tmp5;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(870)
		Float hs = ((Float)0.0);		HX_STACK_VAR(hs,"hs");
		HX_STACK_LINE(872)
		::haxor::math::AABB3 tmp6 = b;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(872)
		::haxor::math::Vector3 tmp7 = c;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(872)
		::haxor::math::AABB3_obj::Center(tmp6,tmp7);
		HX_STACK_LINE(874)
		Float tmp8 = hs;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(874)
		Float tmp9 = (b->m_xMax - b->m_xMin);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(874)
		Float tmp10 = ::Math_obj::max(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(874)
		hs = tmp10;
		HX_STACK_LINE(875)
		Float tmp11 = hs;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(875)
		Float tmp12 = (b->m_yMax - b->m_yMin);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(875)
		Float tmp13 = ::Math_obj::max(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(875)
		hs = tmp13;
		HX_STACK_LINE(876)
		Float tmp14 = hs;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(876)
		Float tmp15 = (b->m_zMax - b->m_zMin);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(876)
		Float tmp16 = ::Math_obj::max(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(876)
		hs = tmp16;
		HX_STACK_LINE(878)
		::haxor::math::Matrix4 tmp17 = t->get_WorldMatrix();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(878)
		::haxor::math::Matrix4 tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(878)
		{
			HX_STACK_LINE(878)
			::haxor::context::DataContext tmp19 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(878)
			::haxor::context::DataContext _this = tmp19;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(878)
			Array< ::Dynamic > tmp20 = _this->m_m4;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(878)
			int tmp21 = (_this->m_nm4 + (int)1);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(878)
			int tmp22 = _this->m_m4->length;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(878)
			int tmp23 = hx::Mod(tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(878)
			int tmp24 = _this->m_nq = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(878)
			tmp18 = tmp20->__get(tmp24).StaticCast< ::haxor::math::Matrix4 >();
		}
		HX_STACK_LINE(878)
		::haxor::math::Matrix4 tmp19 = ::haxor::math::Matrix4_obj::GetScale(tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(878)
		::haxor::math::Matrix4 sm = tmp19;		HX_STACK_VAR(sm,"sm");
		HX_STACK_LINE(879)
		Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(879)
		{
			HX_STACK_LINE(879)
			Float tmp21 = sm->m11;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(879)
			Float tmp22 = sm->m22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(879)
			Float tmp23 = ::Math_obj::max(tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(879)
			Float b1 = tmp23;		HX_STACK_VAR(b1,"b1");
			HX_STACK_LINE(879)
			Float tmp24 = sm->m00;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(879)
			Float tmp25 = b1;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(879)
			tmp20 = ::Math_obj::max(tmp24,tmp25);
		}
		HX_STACK_LINE(879)
		Float tmp21 = (tmp20 * ((Float)0.5));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(879)
		hx::MultEq(hs,tmp21);
		HX_STACK_LINE(881)
		{
			HX_STACK_LINE(881)
			::haxor::math::Matrix4 tmp22 = t->get_WorldMatrix();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(881)
			::haxor::math::Matrix4 _this = tmp22;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(881)
			Float tmp23 = (_this->m00 * c->x);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(881)
			Float tmp24 = (_this->m01 * c->y);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(881)
			Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(881)
			Float tmp26 = (_this->m02 * c->z);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(881)
			Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(881)
			Float tmp28 = _this->m03;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(881)
			Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(881)
			Float vx = tmp29;		HX_STACK_VAR(vx,"vx");
			HX_STACK_LINE(881)
			Float tmp30 = (_this->m10 * c->x);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(881)
			Float tmp31 = (_this->m11 * c->y);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(881)
			Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(881)
			Float tmp33 = (_this->m12 * c->z);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(881)
			Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(881)
			Float tmp35 = _this->m13;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(881)
			Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(881)
			Float vy = tmp36;		HX_STACK_VAR(vy,"vy");
			HX_STACK_LINE(881)
			Float tmp37 = (_this->m20 * c->x);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(881)
			Float tmp38 = (_this->m21 * c->y);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(881)
			Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(881)
			Float tmp40 = (_this->m22 * c->z);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(881)
			Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(881)
			Float tmp42 = _this->m23;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(881)
			Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(881)
			Float vz = tmp43;		HX_STACK_VAR(vz,"vz");
			HX_STACK_LINE(881)
			c->x = vx;
			HX_STACK_LINE(881)
			c->y = vy;
			HX_STACK_LINE(881)
			c->z = vz;
			HX_STACK_LINE(881)
			c;
		}
		HX_STACK_LINE(883)
		int k = (int)0;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(886)
		{
			HX_STACK_LINE(886)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(886)
			int _g = ll->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(886)
			while((true)){
				HX_STACK_LINE(886)
				bool tmp22 = (_g1 < _g);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(886)
				bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(886)
				if ((tmp23)){
					HX_STACK_LINE(886)
					break;
				}
				HX_STACK_LINE(886)
				int tmp24 = (_g1)++;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(886)
				int i = tmp24;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(888)
				int tmp25 = k;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(888)
				int tmp26 = ::haxor::component::light::Light_obj::max;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(888)
				bool tmp27 = (tmp25 >= tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(888)
				if ((tmp27)){
					HX_STACK_LINE(888)
					break;
				}
				HX_STACK_LINE(889)
				::haxor::component::light::Light tmp28 = ll->__get(i).StaticCast< ::haxor::component::light::Light >();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(889)
				::haxor::component::light::Light l = tmp28;		HX_STACK_VAR(l,"l");
				HX_STACK_LINE(890)
				bool tmp29 = l->get_enabled();		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(890)
				bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(890)
				if ((tmp30)){
					HX_STACK_LINE(890)
					continue;
				}
				HX_STACK_LINE(891)
				::haxor::component::light::Light tmp31 = l;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(891)
				bool tmp32 = ::Std_obj::is(tmp31,hx::ClassOf< ::haxor::component::light::PointLight >());		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(891)
				if ((tmp32)){
					HX_STACK_LINE(893)
					::haxor::component::light::PointLight pl = ((::haxor::component::light::PointLight)(l));		HX_STACK_VAR(pl,"pl");
					HX_STACK_LINE(894)
					Float tmp33 = hs;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(894)
					Float tmp34 = (((Float)0.5) * pl->radius);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(894)
					Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(894)
					Float limit = tmp35;		HX_STACK_VAR(limit,"limit");
					HX_STACK_LINE(895)
					::haxor::component::Transform tmp36 = l->m_entity->m_transform;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(895)
					::haxor::math::Matrix4 tmp37 = tmp36->get_WorldMatrix();		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(895)
					::haxor::math::Matrix4 wm = tmp37;		HX_STACK_VAR(wm,"wm");
					HX_STACK_LINE(896)
					Float tmp38 = wm->m03;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(896)
					Float tmp39 = wm->m13;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(896)
					Float tmp40 = wm->m23;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(896)
					p->Set(tmp38,tmp39,tmp40);
					HX_STACK_LINE(897)
					::haxor::math::Vector3 tmp41 = c;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(897)
					::haxor::math::Vector3 tmp42 = p;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(897)
					Float tmp43 = ::haxor::math::Vector3_obj::Distance(tmp41,tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(897)
					Float tmp44 = limit;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(897)
					bool tmp45 = (tmp43 > tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(897)
					if ((tmp45)){
						HX_STACK_LINE(897)
						continue;
					}
					HX_STACK_LINE(899)
					bool tmp46 = ::haxor::core::Debug_obj::light;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(899)
					if ((tmp46)){
						HX_STACK_LINE(901)
						::haxor::math::Color tmp47 = ::haxor::math::Color_obj::__new((int)1,(int)1,(int)1,((Float)0.1));		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(901)
						::haxor::math::Color cl = tmp47;		HX_STACK_VAR(cl,"cl");
						HX_STACK_LINE(902)
						{
							HX_STACK_LINE(902)
							::haxor::context::GizmoContext tmp48 = ::haxor::context::EngineContext_obj::gizmo;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(902)
							::haxor::math::Vector3 tmp49 = c;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(902)
							::haxor::math::Vector3 tmp50 = p;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(902)
							::haxor::math::Color tmp51 = cl;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(902)
							tmp48->DrawLine(tmp49,tmp50,tmp51,null());
						}
						HX_STACK_LINE(903)
						::haxor::math::Vector3 tmp48 = c;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(903)
						::haxor::math::Color tmp49 = cl;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(903)
						::haxor::graphics::Gizmo_obj::Point(tmp48,((Float)3.0),tmp49,null(),null());
						HX_STACK_LINE(904)
						::haxor::math::Vector3 tmp50 = p;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(904)
						::haxor::math::Color tmp51 = cl;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(904)
						::haxor::graphics::Gizmo_obj::Point(tmp50,((Float)3.0),tmp51,null(),null());
					}
					HX_STACK_LINE(908)
					int tmp47 = k;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(909)
					Float tmp48 = pl->intensity;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(909)
					Float tmp49 = pl->radius;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(909)
					Float tmp50 = pl->atten;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(910)
					Float tmp51 = p->x;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(910)
					Float tmp52 = p->y;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(910)
					Float tmp53 = p->z;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(911)
					Float tmp54 = pl->color->r;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(911)
					Float tmp55 = pl->color->g;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(911)
					Float tmp56 = pl->color->b;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(911)
					Float tmp57 = pl->color->a;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(908)
					::haxor::component::light::Light_obj::SetLightData(tmp47,((Float)0.0),tmp48,tmp49,tmp50,tmp51,tmp52,tmp53,tmp54,tmp55,tmp56,tmp57);
					HX_STACK_LINE(912)
					(k)++;
				}
			}
		}
		HX_STACK_LINE(929)
		int tmp22 = k;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(929)
		::haxor::component::light::Light_obj::SetLightData(tmp22,((Float)-1.0),((Float)0.0),((Float)0.0),((Float)0.0),((Float)0.0),((Float)0.0),((Float)0.0),((Float)0.0),((Float)0.0),((Float)0.0),((Float)0.0));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(MaterialContext_obj,SetLights,(void))

Void MaterialContext_obj::DestroyMaterial( ::haxor::graphics::material::Material m){
{
		HX_STACK_FRAME("haxor.context.MaterialContext","DestroyMaterial",0xd30a9a70,"haxor.context.MaterialContext.DestroyMaterial","haxor/context/MaterialContext.hx",948,0x0e17e323)
		HX_STACK_THIS(this)
		HX_STACK_ARG(m,"m")
		HX_STACK_LINE(949)
		Array< int > tmp = this->programs;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(949)
		int tmp1 = m->__cid;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(949)
		int tmp2 = tmp->__get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(949)
		int p = tmp2;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(950)
		bool tmp3 = (m->m_shader != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(950)
		if ((tmp3)){
			HX_STACK_LINE(952)
			{
				HX_STACK_LINE(952)
				::haxor::platform::graphics::OpenGL tmp4 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(952)
				int tmp5 = p;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(952)
				Array< int > tmp6 = this->vertex_shaders;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(952)
				int tmp7 = m->m_shader->__cid;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(952)
				int tmp8 = tmp6->__get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(952)
				tmp4->DetachShader(tmp5,tmp8);
			}
			HX_STACK_LINE(953)
			{
				HX_STACK_LINE(953)
				::haxor::platform::graphics::OpenGL tmp4 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(953)
				int tmp5 = p;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(953)
				Array< int > tmp6 = this->fragment_shaders;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(953)
				int tmp7 = m->m_shader->__cid;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(953)
				int tmp8 = tmp6->__get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(953)
				tmp4->DetachShader(tmp5,tmp8);
			}
		}
		HX_STACK_LINE(955)
		{
			HX_STACK_LINE(955)
			::haxor::platform::graphics::OpenGL tmp4 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(955)
			int tmp5 = p;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(955)
			tmp4->DeleteProgram(tmp5);
		}
		HX_STACK_LINE(956)
		{
			HX_STACK_LINE(956)
			int v = m->__cid;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(956)
			::haxor::context::MaterialContext tmp4 = ::haxor::context::EngineContext_obj::material;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(956)
			Array< int > tmp5 = tmp4->mid->m_cache;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(956)
			int tmp6 = v;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(956)
			tmp5->push(tmp6);
			HX_STACK_LINE(956)
			v;
		}
		HX_STACK_LINE(957)
		{
			HX_STACK_LINE(957)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(957)
			int tmp4 = m->m_uniforms->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(957)
			int _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(957)
			while((true)){
				HX_STACK_LINE(957)
				bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(957)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(957)
				if ((tmp6)){
					HX_STACK_LINE(957)
					break;
				}
				HX_STACK_LINE(957)
				int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(957)
				int i = tmp7;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(957)
				::haxor::graphics::material::MaterialUniform tmp8 = m->m_uniforms->__get(i).StaticCast< ::haxor::graphics::material::MaterialUniform >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(957)
				int v = tmp8->__cid;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(957)
				::haxor::context::UID tmp9 = this->uid;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(957)
				int tmp10 = v;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(957)
				tmp9->m_cache->push(tmp10);
				HX_STACK_LINE(957)
				v;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialContext_obj,DestroyMaterial,(void))

Void MaterialContext_obj::DestroyShader( ::haxor::graphics::material::Shader s){
{
		HX_STACK_FRAME("haxor.context.MaterialContext","DestroyShader",0xac09c8ae,"haxor.context.MaterialContext.DestroyShader","haxor/context/MaterialContext.hx",965,0x0e17e323)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(966)
		{
			HX_STACK_LINE(966)
			::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(966)
			Array< int > tmp1 = this->vertex_shaders;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(966)
			int tmp2 = s->__cid;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(966)
			int tmp3 = tmp1->__get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(966)
			tmp->DeleteShader(tmp3);
		}
		HX_STACK_LINE(967)
		{
			HX_STACK_LINE(967)
			::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(967)
			Array< int > tmp1 = this->fragment_shaders;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(967)
			int tmp2 = s->__cid;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(967)
			int tmp3 = tmp1->__get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(967)
			tmp->DeleteShader(tmp3);
		}
		HX_STACK_LINE(968)
		{
			HX_STACK_LINE(968)
			int v = s->__cid;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(968)
			::haxor::context::MaterialContext tmp = ::haxor::context::EngineContext_obj::material;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(968)
			Array< int > tmp1 = tmp->sid->m_cache;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(968)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(968)
			tmp1->push(tmp2);
			HX_STACK_LINE(968)
			v;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialContext_obj,DestroyShader,(void))


MaterialContext_obj::MaterialContext_obj()
{
}

void MaterialContext_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MaterialContext);
	HX_MARK_MEMBER_NAME(uniform_globals,"uniform_globals");
	HX_MARK_MEMBER_NAME(globals,"globals");
	HX_MARK_MEMBER_NAME(mid,"mid");
	HX_MARK_MEMBER_NAME(sid,"sid");
	HX_MARK_MEMBER_NAME(uid,"uid");
	HX_MARK_MEMBER_NAME(vertex_shaders,"vertex_shaders");
	HX_MARK_MEMBER_NAME(fragment_shaders,"fragment_shaders");
	HX_MARK_MEMBER_NAME(error_shader,"error_shader");
	HX_MARK_MEMBER_NAME(programs,"programs");
	HX_MARK_MEMBER_NAME(is_linked,"is_linked");
	HX_MARK_MEMBER_NAME(camera,"camera");
	HX_MARK_MEMBER_NAME(transform,"transform");
	HX_MARK_MEMBER_NAME(viewmatrix,"viewmatrix");
	HX_MARK_MEMBER_NAME(projmatrix,"projmatrix");
	HX_MARK_MEMBER_NAME(locations,"locations");
	HX_MARK_MEMBER_NAME(slot,"slot");
	HX_MARK_MEMBER_NAME(uniforms,"uniforms");
	HX_MARK_MEMBER_NAME(current,"current");
	HX_MARK_MEMBER_NAME(ztest,"ztest");
	HX_MARK_MEMBER_NAME(zfunc,"zfunc");
	HX_MARK_MEMBER_NAME(zwrite,"zwrite");
	HX_MARK_MEMBER_NAME(blend,"blend");
	HX_MARK_MEMBER_NAME(queue,"queue");
	HX_MARK_MEMBER_NAME(blendSrc,"blendSrc");
	HX_MARK_MEMBER_NAME(blendDst,"blendDst");
	HX_MARK_MEMBER_NAME(invert,"invert");
	HX_MARK_MEMBER_NAME(cull,"cull");
	HX_MARK_MEMBER_NAME(pointSmooth,"pointSmooth");
	HX_MARK_END_CLASS();
}

void MaterialContext_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(uniform_globals,"uniform_globals");
	HX_VISIT_MEMBER_NAME(globals,"globals");
	HX_VISIT_MEMBER_NAME(mid,"mid");
	HX_VISIT_MEMBER_NAME(sid,"sid");
	HX_VISIT_MEMBER_NAME(uid,"uid");
	HX_VISIT_MEMBER_NAME(vertex_shaders,"vertex_shaders");
	HX_VISIT_MEMBER_NAME(fragment_shaders,"fragment_shaders");
	HX_VISIT_MEMBER_NAME(error_shader,"error_shader");
	HX_VISIT_MEMBER_NAME(programs,"programs");
	HX_VISIT_MEMBER_NAME(is_linked,"is_linked");
	HX_VISIT_MEMBER_NAME(camera,"camera");
	HX_VISIT_MEMBER_NAME(transform,"transform");
	HX_VISIT_MEMBER_NAME(viewmatrix,"viewmatrix");
	HX_VISIT_MEMBER_NAME(projmatrix,"projmatrix");
	HX_VISIT_MEMBER_NAME(locations,"locations");
	HX_VISIT_MEMBER_NAME(slot,"slot");
	HX_VISIT_MEMBER_NAME(uniforms,"uniforms");
	HX_VISIT_MEMBER_NAME(current,"current");
	HX_VISIT_MEMBER_NAME(ztest,"ztest");
	HX_VISIT_MEMBER_NAME(zfunc,"zfunc");
	HX_VISIT_MEMBER_NAME(zwrite,"zwrite");
	HX_VISIT_MEMBER_NAME(blend,"blend");
	HX_VISIT_MEMBER_NAME(queue,"queue");
	HX_VISIT_MEMBER_NAME(blendSrc,"blendSrc");
	HX_VISIT_MEMBER_NAME(blendDst,"blendDst");
	HX_VISIT_MEMBER_NAME(invert,"invert");
	HX_VISIT_MEMBER_NAME(cull,"cull");
	HX_VISIT_MEMBER_NAME(pointSmooth,"pointSmooth");
}

Dynamic MaterialContext_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"mid") ) { return mid; }
		if (HX_FIELD_EQ(inName,"sid") ) { return sid; }
		if (HX_FIELD_EQ(inName,"uid") ) { return uid; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"slot") ) { return slot; }
		if (HX_FIELD_EQ(inName,"cull") ) { return cull; }
		if (HX_FIELD_EQ(inName,"Bind") ) { return Bind_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ztest") ) { return ztest; }
		if (HX_FIELD_EQ(inName,"zfunc") ) { return zfunc; }
		if (HX_FIELD_EQ(inName,"blend") ) { return blend; }
		if (HX_FIELD_EQ(inName,"queue") ) { return queue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"camera") ) { return camera; }
		if (HX_FIELD_EQ(inName,"zwrite") ) { return zwrite; }
		if (HX_FIELD_EQ(inName,"invert") ) { return invert; }
		if (HX_FIELD_EQ(inName,"Unbind") ) { return Unbind_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"globals") ) { return globals; }
		if (HX_FIELD_EQ(inName,"current") ) { return current; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"programs") ) { return programs; }
		if (HX_FIELD_EQ(inName,"uniforms") ) { return uniforms; }
		if (HX_FIELD_EQ(inName,"blendSrc") ) { return blendSrc; }
		if (HX_FIELD_EQ(inName,"blendDst") ) { return blendDst; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"is_linked") ) { return is_linked; }
		if (HX_FIELD_EQ(inName,"transform") ) { return transform; }
		if (HX_FIELD_EQ(inName,"locations") ) { return locations; }
		if (HX_FIELD_EQ(inName,"SetLights") ) { return SetLights_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"viewmatrix") ) { return viewmatrix; }
		if (HX_FIELD_EQ(inName,"projmatrix") ) { return projmatrix; }
		if (HX_FIELD_EQ(inName,"Initialize") ) { return Initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pointSmooth") ) { return pointSmooth; }
		if (HX_FIELD_EQ(inName,"UpdateFlags") ) { return UpdateFlags_dyn(); }
		if (HX_FIELD_EQ(inName,"UseMaterial") ) { return UseMaterial_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"error_shader") ) { return error_shader; }
		if (HX_FIELD_EQ(inName,"UpdateShader") ) { return UpdateShader_dyn(); }
		if (HX_FIELD_EQ(inName,"ApplyUniform") ) { return ApplyUniform_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"CompileShader") ) { return CompileShader_dyn(); }
		if (HX_FIELD_EQ(inName,"CreateUniform") ) { return CreateUniform_dyn(); }
		if (HX_FIELD_EQ(inName,"UploadUniform") ) { return UploadUniform_dyn(); }
		if (HX_FIELD_EQ(inName,"DestroyShader") ) { return DestroyShader_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"vertex_shaders") ) { return vertex_shaders; }
		if (HX_FIELD_EQ(inName,"SetPointSmooth") ) { return SetPointSmooth_dyn(); }
		if (HX_FIELD_EQ(inName,"UpdateMaterial") ) { return UpdateMaterial_dyn(); }
		if (HX_FIELD_EQ(inName,"DestroyUniform") ) { return DestroyUniform_dyn(); }
		if (HX_FIELD_EQ(inName,"UploadUniforms") ) { return UploadUniforms_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"uniform_globals") ) { return uniform_globals; }
		if (HX_FIELD_EQ(inName,"DestroyMaterial") ) { return DestroyMaterial_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fragment_shaders") ) { return fragment_shaders; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"FormatShaderError") ) { return FormatShaderError_dyn(); }
		if (HX_FIELD_EQ(inName,"GetActiveUniforms") ) { return GetActiveUniforms_dyn(); }
		if (HX_FIELD_EQ(inName,"GetAttribLocation") ) { return GetAttribLocation_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"InitializeMaterial") ) { return InitializeMaterial_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"CreateCompileShader") ) { return CreateCompileShader_dyn(); }
		if (HX_FIELD_EQ(inName,"UploadGlobalUniform") ) { return UploadGlobalUniform_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"UpdateMaterialUniforms") ) { return UpdateMaterialUniforms_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MaterialContext_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"mid") ) { mid=inValue.Cast< ::haxor::context::UID >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sid") ) { sid=inValue.Cast< ::haxor::context::UID >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uid") ) { uid=inValue.Cast< ::haxor::context::UID >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"slot") ) { slot=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cull") ) { cull=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ztest") ) { ztest=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zfunc") ) { zfunc=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blend") ) { blend=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"queue") ) { queue=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"camera") ) { camera=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zwrite") ) { zwrite=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"invert") ) { invert=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"globals") ) { globals=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast< ::haxor::graphics::material::Material >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"programs") ) { programs=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uniforms") ) { uniforms=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blendSrc") ) { blendSrc=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blendDst") ) { blendDst=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"is_linked") ) { is_linked=inValue.Cast< Array< bool > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"transform") ) { transform=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"locations") ) { locations=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"viewmatrix") ) { viewmatrix=inValue.Cast< Array< bool > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"projmatrix") ) { projmatrix=inValue.Cast< Array< bool > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pointSmooth") ) { pointSmooth=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"error_shader") ) { error_shader=inValue.Cast< ::haxor::graphics::material::Shader >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"vertex_shaders") ) { vertex_shaders=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"uniform_globals") ) { uniform_globals=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fragment_shaders") ) { fragment_shaders=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MaterialContext_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void MaterialContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("uniform_globals","\x65","\xf4","\x07","\x2c"));
	outFields->push(HX_HCSTRING("globals","\xb0","\x05","\x39","\x14"));
	outFields->push(HX_HCSTRING("mid","\x88","\x11","\x53","\x00"));
	outFields->push(HX_HCSTRING("sid","\x0e","\x9f","\x57","\x00"));
	outFields->push(HX_HCSTRING("uid","\x90","\x23","\x59","\x00"));
	outFields->push(HX_HCSTRING("vertex_shaders","\x93","\xba","\xa6","\x44"));
	outFields->push(HX_HCSTRING("fragment_shaders","\xff","\x8a","\x40","\x2e"));
	outFields->push(HX_HCSTRING("error_shader","\xfc","\x8d","\x76","\x6f"));
	outFields->push(HX_HCSTRING("programs","\x6f","\xe9","\x27","\x86"));
	outFields->push(HX_HCSTRING("is_linked","\xce","\x49","\xc9","\x91"));
	outFields->push(HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7"));
	outFields->push(HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"));
	outFields->push(HX_HCSTRING("viewmatrix","\x66","\xc2","\x80","\xc8"));
	outFields->push(HX_HCSTRING("projmatrix","\x9e","\x11","\xa0","\xd0"));
	outFields->push(HX_HCSTRING("locations","\x9e","\x00","\x5a","\xb8"));
	outFields->push(HX_HCSTRING("slot","\xfe","\xdd","\x55","\x4c"));
	outFields->push(HX_HCSTRING("uniforms","\xbf","\xcc","\x54","\x02"));
	outFields->push(HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"));
	outFields->push(HX_HCSTRING("ztest","\xcc","\x8d","\xdc","\x8b"));
	outFields->push(HX_HCSTRING("zfunc","\xbe","\xb0","\xa7","\x82"));
	outFields->push(HX_HCSTRING("zwrite","\x25","\x72","\xe3","\x97"));
	outFields->push(HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4"));
	outFields->push(HX_HCSTRING("queue","\x91","\x8d","\xea","\x5d"));
	outFields->push(HX_HCSTRING("blendSrc","\x13","\xbf","\xd5","\x6a"));
	outFields->push(HX_HCSTRING("blendDst","\x34","\x5e","\xca","\x6a"));
	outFields->push(HX_HCSTRING("invert","\x16","\xe7","\xd8","\x9f"));
	outFields->push(HX_HCSTRING("cull","\xb2","\x45","\xc9","\x41"));
	outFields->push(HX_HCSTRING("pointSmooth","\x9e","\x4c","\x03","\xee"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(MaterialContext_obj,uniform_globals),HX_HCSTRING("uniform_globals","\x65","\xf4","\x07","\x2c")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(MaterialContext_obj,globals),HX_HCSTRING("globals","\xb0","\x05","\x39","\x14")},
	{hx::fsObject /*::haxor::context::UID*/ ,(int)offsetof(MaterialContext_obj,mid),HX_HCSTRING("mid","\x88","\x11","\x53","\x00")},
	{hx::fsObject /*::haxor::context::UID*/ ,(int)offsetof(MaterialContext_obj,sid),HX_HCSTRING("sid","\x0e","\x9f","\x57","\x00")},
	{hx::fsObject /*::haxor::context::UID*/ ,(int)offsetof(MaterialContext_obj,uid),HX_HCSTRING("uid","\x90","\x23","\x59","\x00")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(MaterialContext_obj,vertex_shaders),HX_HCSTRING("vertex_shaders","\x93","\xba","\xa6","\x44")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(MaterialContext_obj,fragment_shaders),HX_HCSTRING("fragment_shaders","\xff","\x8a","\x40","\x2e")},
	{hx::fsObject /*::haxor::graphics::material::Shader*/ ,(int)offsetof(MaterialContext_obj,error_shader),HX_HCSTRING("error_shader","\xfc","\x8d","\x76","\x6f")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(MaterialContext_obj,programs),HX_HCSTRING("programs","\x6f","\xe9","\x27","\x86")},
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(MaterialContext_obj,is_linked),HX_HCSTRING("is_linked","\xce","\x49","\xc9","\x91")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(MaterialContext_obj,camera),HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(MaterialContext_obj,transform),HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45")},
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(MaterialContext_obj,viewmatrix),HX_HCSTRING("viewmatrix","\x66","\xc2","\x80","\xc8")},
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(MaterialContext_obj,projmatrix),HX_HCSTRING("projmatrix","\x9e","\x11","\xa0","\xd0")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(MaterialContext_obj,locations),HX_HCSTRING("locations","\x9e","\x00","\x5a","\xb8")},
	{hx::fsInt,(int)offsetof(MaterialContext_obj,slot),HX_HCSTRING("slot","\xfe","\xdd","\x55","\x4c")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(MaterialContext_obj,uniforms),HX_HCSTRING("uniforms","\xbf","\xcc","\x54","\x02")},
	{hx::fsObject /*::haxor::graphics::material::Material*/ ,(int)offsetof(MaterialContext_obj,current),HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb")},
	{hx::fsBool,(int)offsetof(MaterialContext_obj,ztest),HX_HCSTRING("ztest","\xcc","\x8d","\xdc","\x8b")},
	{hx::fsInt,(int)offsetof(MaterialContext_obj,zfunc),HX_HCSTRING("zfunc","\xbe","\xb0","\xa7","\x82")},
	{hx::fsBool,(int)offsetof(MaterialContext_obj,zwrite),HX_HCSTRING("zwrite","\x25","\x72","\xe3","\x97")},
	{hx::fsBool,(int)offsetof(MaterialContext_obj,blend),HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4")},
	{hx::fsInt,(int)offsetof(MaterialContext_obj,queue),HX_HCSTRING("queue","\x91","\x8d","\xea","\x5d")},
	{hx::fsInt,(int)offsetof(MaterialContext_obj,blendSrc),HX_HCSTRING("blendSrc","\x13","\xbf","\xd5","\x6a")},
	{hx::fsInt,(int)offsetof(MaterialContext_obj,blendDst),HX_HCSTRING("blendDst","\x34","\x5e","\xca","\x6a")},
	{hx::fsBool,(int)offsetof(MaterialContext_obj,invert),HX_HCSTRING("invert","\x16","\xe7","\xd8","\x9f")},
	{hx::fsInt,(int)offsetof(MaterialContext_obj,cull),HX_HCSTRING("cull","\xb2","\x45","\xc9","\x41")},
	{hx::fsBool,(int)offsetof(MaterialContext_obj,pointSmooth),HX_HCSTRING("pointSmooth","\x9e","\x4c","\x03","\xee")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("uniform_globals","\x65","\xf4","\x07","\x2c"),
	HX_HCSTRING("globals","\xb0","\x05","\x39","\x14"),
	HX_HCSTRING("mid","\x88","\x11","\x53","\x00"),
	HX_HCSTRING("sid","\x0e","\x9f","\x57","\x00"),
	HX_HCSTRING("uid","\x90","\x23","\x59","\x00"),
	HX_HCSTRING("vertex_shaders","\x93","\xba","\xa6","\x44"),
	HX_HCSTRING("fragment_shaders","\xff","\x8a","\x40","\x2e"),
	HX_HCSTRING("error_shader","\xfc","\x8d","\x76","\x6f"),
	HX_HCSTRING("programs","\x6f","\xe9","\x27","\x86"),
	HX_HCSTRING("is_linked","\xce","\x49","\xc9","\x91"),
	HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7"),
	HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"),
	HX_HCSTRING("viewmatrix","\x66","\xc2","\x80","\xc8"),
	HX_HCSTRING("projmatrix","\x9e","\x11","\xa0","\xd0"),
	HX_HCSTRING("locations","\x9e","\x00","\x5a","\xb8"),
	HX_HCSTRING("slot","\xfe","\xdd","\x55","\x4c"),
	HX_HCSTRING("uniforms","\xbf","\xcc","\x54","\x02"),
	HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"),
	HX_HCSTRING("ztest","\xcc","\x8d","\xdc","\x8b"),
	HX_HCSTRING("zfunc","\xbe","\xb0","\xa7","\x82"),
	HX_HCSTRING("zwrite","\x25","\x72","\xe3","\x97"),
	HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4"),
	HX_HCSTRING("queue","\x91","\x8d","\xea","\x5d"),
	HX_HCSTRING("blendSrc","\x13","\xbf","\xd5","\x6a"),
	HX_HCSTRING("blendDst","\x34","\x5e","\xca","\x6a"),
	HX_HCSTRING("invert","\x16","\xe7","\xd8","\x9f"),
	HX_HCSTRING("cull","\xb2","\x45","\xc9","\x41"),
	HX_HCSTRING("pointSmooth","\x9e","\x4c","\x03","\xee"),
	HX_HCSTRING("Initialize","\x70","\x35","\x6c","\xe3"),
	HX_HCSTRING("SetPointSmooth","\x3c","\x1c","\x17","\x40"),
	HX_HCSTRING("UpdateFlags","\x5e","\x2c","\x57","\xcc"),
	HX_HCSTRING("InitializeMaterial","\x37","\x3e","\x1e","\x3e"),
	HX_HCSTRING("CompileShader","\xd8","\xc0","\xa2","\x22"),
	HX_HCSTRING("CreateCompileShader","\x3c","\x24","\x67","\x19"),
	HX_HCSTRING("FormatShaderError","\x4c","\x2c","\x9d","\xcf"),
	HX_HCSTRING("UpdateShader","\x2e","\xb2","\xf6","\xe4"),
	HX_HCSTRING("UpdateMaterial","\xf0","\xe3","\x24","\xd0"),
	HX_HCSTRING("CreateUniform","\x78","\x69","\x97","\xe5"),
	HX_HCSTRING("DestroyUniform","\x7a","\xc3","\x25","\xcc"),
	HX_HCSTRING("GetActiveUniforms","\xbb","\x6f","\xa6","\x2e"),
	HX_HCSTRING("GetAttribLocation","\xb5","\xda","\x95","\xfe"),
	HX_HCSTRING("Bind","\xdd","\x21","\xf0","\x2b"),
	HX_HCSTRING("Unbind","\xb6","\x70","\x80","\x93"),
	HX_HCSTRING("UseMaterial","\xee","\xfb","\xe2","\x2e"),
	HX_HCSTRING("UpdateMaterialUniforms","\xcf","\xdc","\x98","\x42"),
	HX_HCSTRING("UploadUniforms","\x00","\x50","\x81","\xe3"),
	HX_HCSTRING("UploadUniform","\x13","\xa1","\xab","\x72"),
	HX_HCSTRING("ApplyUniform","\x86","\xd9","\xe3","\xbc"),
	HX_HCSTRING("UploadGlobalUniform","\x30","\x8b","\x68","\xf8"),
	HX_HCSTRING("SetLights","\xff","\x7f","\x7c","\xe9"),
	HX_HCSTRING("DestroyMaterial","\xa1","\xd7","\x35","\xc3"),
	HX_HCSTRING("DestroyShader","\x9f","\xa7","\x0a","\x33"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MaterialContext_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MaterialContext_obj::__mClass,"__mClass");
};

#endif

hx::Class MaterialContext_obj::__mClass;

void MaterialContext_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.context.MaterialContext","\x3d","\x55","\x5a","\x48");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &MaterialContext_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MaterialContext_obj >;
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

} // end namespace haxor
} // end namespace context
