#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxor_component_Behaviour
#include <haxor/component/Behaviour.h>
#endif
#ifndef INCLUDED_haxor_component_Component
#include <haxor/component/Component.h>
#endif
#ifndef INCLUDED_haxor_core_BaseApplication
#include <haxor/core/BaseApplication.h>
#endif
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_graphics_GL
#include <haxor/graphics/GL.h>
#endif
#ifndef INCLUDED_haxor_graphics_GraphicAPI
#include <haxor/graphics/GraphicAPI.h>
#endif
#ifndef INCLUDED_haxor_graphics_GraphicContext
#include <haxor/graphics/GraphicContext.h>
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
#ifndef INCLUDED_haxor_platform_graphics_OpenGL
#include <haxor/platform/graphics/OpenGL.h>
#endif
#ifndef INCLUDED_haxor_platform_windows_graphics_WinGL
#include <haxor/platform/windows/graphics/WinGL.h>
#endif
namespace haxor{
namespace graphics{

Void GL_obj::__construct()
{
	return null();
}

//GL_obj::~GL_obj() { }

Dynamic GL_obj::__CreateEmpty() { return  new GL_obj; }
hx::ObjectPtr< GL_obj > GL_obj::__new()
{  hx::ObjectPtr< GL_obj > _result_ = new GL_obj();
	_result_->__construct();
	return _result_;}

Dynamic GL_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GL_obj > _result_ = new GL_obj();
	_result_->__construct();
	return _result_;}

int GL_obj::ACTIVE_ATTRIBUTES;

int GL_obj::ACTIVE_TEXTURE;

int GL_obj::ACTIVE_UNIFORMS;

int GL_obj::ALIASED_LINE_WIDTH_RANGE;

int GL_obj::ALIASED_POINT_SIZE_RANGE;

int GL_obj::ALPHA;

int GL_obj::ALPHA_BITS;

int GL_obj::ALWAYS;

int GL_obj::ARRAY_BUFFER;

int GL_obj::ARRAY_BUFFER_BINDING;

int GL_obj::ATTACHED_SHADERS;

int GL_obj::BACK;

int GL_obj::BLEND;

int GL_obj::BLEND_COLOR;

int GL_obj::BLEND_DST_ALPHA;

int GL_obj::BLEND_DST_RGB;

int GL_obj::BLEND_EQUATION;

int GL_obj::BLEND_EQUATION_ALPHA;

int GL_obj::BLEND_EQUATION_RGB;

int GL_obj::BLEND_SRC_ALPHA;

int GL_obj::BLEND_SRC_RGB;

int GL_obj::BLUE_BITS;

int GL_obj::BOOL;

int GL_obj::BOOL_VEC2;

int GL_obj::BOOL_VEC3;

int GL_obj::BOOL_VEC4;

int GL_obj::BROWSER_DEFAULT_WEBGL;

int GL_obj::BUFFER_SIZE;

int GL_obj::BUFFER_USAGE;

int GL_obj::BYTE;

int GL_obj::CCW;

int GL_obj::CLAMP_TO_EDGE;

int GL_obj::COLOR_ATTACHMENT0;

int GL_obj::COLOR_BUFFER_BIT;

int GL_obj::COLOR_CLEAR_VALUE;

int GL_obj::COLOR_WRITEMASK;

int GL_obj::COMPILE_STATUS;

int GL_obj::COMPRESSED_TEXTURE_FORMATS;

int GL_obj::CONSTANT_ALPHA;

int GL_obj::CONSTANT_COLOR;

int GL_obj::CONTEXT_LOST_WEBGL;

int GL_obj::CULL_FACE;

int GL_obj::CULL_FACE_MODE;

int GL_obj::CURRENT_PROGRAM;

int GL_obj::CURRENT_VERTEX_ATTRIB;

int GL_obj::CW;

int GL_obj::DECR;

int GL_obj::DECR_WRAP;

int GL_obj::DELETE_STATUS;

int GL_obj::DEPTH_ATTACHMENT;

int GL_obj::DEPTH_BITS;

int GL_obj::DEPTH_BUFFER_BIT;

int GL_obj::DEPTH_CLEAR_VALUE;

int GL_obj::DEPTH_COMPONENT;

int GL_obj::DEPTH_COMPONENT16;

int GL_obj::DEPTH_FUNC;

int GL_obj::DEPTH_RANGE;

int GL_obj::DEPTH_STENCIL;

int GL_obj::DEPTH_STENCIL_ATTACHMENT;

int GL_obj::DEPTH_TEST;

int GL_obj::DEPTH_WRITEMASK;

int GL_obj::DITHER;

int GL_obj::DONT_CARE;

int GL_obj::DST_ALPHA;

int GL_obj::DST_COLOR;

int GL_obj::DYNAMIC_DRAW;

int GL_obj::ELEMENT_ARRAY_BUFFER;

int GL_obj::ELEMENT_ARRAY_BUFFER_BINDING;

int GL_obj::EQUAL;

int GL_obj::FASTEST;

int GL_obj::FLOAT;

int GL_obj::FLOAT_MAT2;

int GL_obj::FLOAT_MAT3;

int GL_obj::FLOAT_MAT4;

int GL_obj::FLOAT_VEC2;

int GL_obj::FLOAT_VEC3;

int GL_obj::FLOAT_VEC4;

int GL_obj::FRAGMENT_SHADER;

int GL_obj::FRAMEBUFFER;

int GL_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_NAME;

int GL_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE;

int GL_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE;

int GL_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL;

int GL_obj::FRAMEBUFFER_BINDING;

int GL_obj::FRAMEBUFFER_COMPLETE;

int GL_obj::FRAMEBUFFER_INCOMPLETE_ATTACHMENT;

int GL_obj::FRAMEBUFFER_INCOMPLETE_DIMENSIONS;

int GL_obj::FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT;

int GL_obj::FRAMEBUFFER_UNSUPPORTED;

int GL_obj::FRONT;

int GL_obj::FRONT_AND_BACK;

int GL_obj::FRONT_FACE;

int GL_obj::FUNC_ADD;

int GL_obj::FUNC_REVERSE_SUBTRACT;

int GL_obj::FUNC_SUBTRACT;

int GL_obj::GENERATE_MIPMAP_HINT;

int GL_obj::GEQUAL;

int GL_obj::GREATER;

int GL_obj::GREEN_BITS;

int GL_obj::HIGH_FLOAT;

int GL_obj::HIGH_INT;

int GL_obj::INCR;

int GL_obj::INCR_WRAP;

int GL_obj::INT;

int GL_obj::INT_VEC2;

int GL_obj::INT_VEC3;

int GL_obj::INT_VEC4;

int GL_obj::INVALID_ENUM;

int GL_obj::INVALID_FRAMEBUFFER_OPERATION;

int GL_obj::INVALID_OPERATION;

int GL_obj::INVALID_VALUE;

int GL_obj::INVERT;

int GL_obj::KEEP;

int GL_obj::LEQUAL;

int GL_obj::LESS;

int GL_obj::LINEAR;

int GL_obj::LINEAR_MIPMAP_LINEAR;

int GL_obj::LINEAR_MIPMAP_NEAREST;

int GL_obj::LINES;

int GL_obj::LINE_LOOP;

int GL_obj::LINE_STRIP;

int GL_obj::LINE_WIDTH;

int GL_obj::LINK_STATUS;

int GL_obj::LOW_FLOAT;

int GL_obj::LOW_INT;

int GL_obj::LUMINANCE;

int GL_obj::LUMINANCE_ALPHA;

int GL_obj::MAX_COMBINED_TEXTURE_IMAGE_UNITS;

int GL_obj::MAX_CUBE_MAP_TEXTURE_SIZE;

int GL_obj::MAX_FRAGMENT_UNIFORM_VECTORS;

int GL_obj::MAX_RENDERBUFFER_SIZE;

int GL_obj::MAX_TEXTURE_IMAGE_UNITS;

int GL_obj::MAX_TEXTURE_SIZE;

int GL_obj::MAX_VARYING_VECTORS;

int GL_obj::MAX_VERTEX_ATTRIBS;

int GL_obj::MAX_VERTEX_TEXTURE_IMAGE_UNITS;

int GL_obj::MAX_VERTEX_UNIFORM_VECTORS;

int GL_obj::MAX_VIEWPORT_DIMS;

int GL_obj::MEDIUM_FLOAT;

int GL_obj::MEDIUM_INT;

int GL_obj::MIRRORED_REPEAT;

int GL_obj::NEAREST;

int GL_obj::NEAREST_MIPMAP_LINEAR;

int GL_obj::NEAREST_MIPMAP_NEAREST;

int GL_obj::NEVER;

int GL_obj::NICEST;

int GL_obj::NONE;

int GL_obj::NOTEQUAL;

int GL_obj::NO_ERROR_GL;

int GL_obj::ONE;

int GL_obj::ONE_MINUS_CONSTANT_ALPHA;

int GL_obj::ONE_MINUS_CONSTANT_COLOR;

int GL_obj::ONE_MINUS_DST_ALPHA;

int GL_obj::ONE_MINUS_DST_COLOR;

int GL_obj::ONE_MINUS_SRC_ALPHA;

int GL_obj::ONE_MINUS_SRC_COLOR;

int GL_obj::OUT_OF_MEMORY;

int GL_obj::PACK_ALIGNMENT;

int GL_obj::POINTS;

int GL_obj::POLYGON_OFFSET_FACTOR;

int GL_obj::POLYGON_OFFSET_FILL;

int GL_obj::POLYGON_OFFSET_UNITS;

int GL_obj::RED_BITS;

int GL_obj::RENDERBUFFER;

int GL_obj::RENDERBUFFER_ALPHA_SIZE;

int GL_obj::RENDERBUFFER_BINDING;

int GL_obj::RENDERBUFFER_BLUE_SIZE;

int GL_obj::RENDERBUFFER_DEPTH_SIZE;

int GL_obj::RENDERBUFFER_GREEN_SIZE;

int GL_obj::RENDERBUFFER_HEIGHT;

int GL_obj::RENDERBUFFER_INTERNAL_FORMAT;

int GL_obj::RENDERBUFFER_RED_SIZE;

int GL_obj::RENDERBUFFER_STENCIL_SIZE;

int GL_obj::RENDERBUFFER_WIDTH;

int GL_obj::RENDERER;

int GL_obj::REPEAT;

int GL_obj::REPLACE;

int GL_obj::RGB;

int GL_obj::RGB565;

int GL_obj::RGB5_A1;

int GL_obj::RGBA;

int GL_obj::RGBA4;

int GL_obj::SAMPLER_2D;

int GL_obj::SAMPLER_CUBE;

int GL_obj::SAMPLES;

int GL_obj::SAMPLE_ALPHA_TO_COVERAGE;

int GL_obj::SAMPLE_BUFFERS;

int GL_obj::SAMPLE_COVERAGE;

int GL_obj::SAMPLE_COVERAGE_INVERT;

int GL_obj::SAMPLE_COVERAGE_VALUE;

int GL_obj::SCISSOR_BOX;

int GL_obj::SCISSOR_TEST;

int GL_obj::SHADER_TYPE;

int GL_obj::SHADING_LANGUAGE_VERSION;

int GL_obj::SHORT;

int GL_obj::SRC_ALPHA;

int GL_obj::SRC_ALPHA_SATURATE;

int GL_obj::SRC_COLOR;

int GL_obj::STATIC_DRAW;

int GL_obj::STENCIL_ATTACHMENT;

int GL_obj::STENCIL_BACK_FAIL;

int GL_obj::STENCIL_BACK_FUNC;

int GL_obj::STENCIL_BACK_PASS_DEPTH_FAIL;

int GL_obj::STENCIL_BACK_PASS_DEPTH_PASS;

int GL_obj::STENCIL_BACK_REF;

int GL_obj::STENCIL_BACK_VALUE_MASK;

int GL_obj::STENCIL_BACK_WRITEMASK;

int GL_obj::STENCIL_BITS;

int GL_obj::STENCIL_BUFFER_BIT;

int GL_obj::STENCIL_CLEAR_VALUE;

int GL_obj::STENCIL_FAIL;

int GL_obj::STENCIL_FUNC;

int GL_obj::STENCIL_INDEX;

int GL_obj::STENCIL_INDEX8;

int GL_obj::STENCIL_PASS_DEPTH_FAIL;

int GL_obj::STENCIL_PASS_DEPTH_PASS;

int GL_obj::STENCIL_REF;

int GL_obj::STENCIL_TEST;

int GL_obj::STENCIL_VALUE_MASK;

int GL_obj::STENCIL_WRITEMASK;

int GL_obj::STREAM_DRAW;

int GL_obj::SUBPIXEL_BITS;

int GL_obj::TEXTURE;

int GL_obj::TEXTURE0;

int GL_obj::TEXTURE1;

int GL_obj::TEXTURE10;

int GL_obj::TEXTURE11;

int GL_obj::TEXTURE12;

int GL_obj::TEXTURE13;

int GL_obj::TEXTURE14;

int GL_obj::TEXTURE15;

int GL_obj::TEXTURE16;

int GL_obj::TEXTURE17;

int GL_obj::TEXTURE18;

int GL_obj::TEXTURE19;

int GL_obj::TEXTURE2;

int GL_obj::TEXTURE20;

int GL_obj::TEXTURE21;

int GL_obj::TEXTURE22;

int GL_obj::TEXTURE23;

int GL_obj::TEXTURE24;

int GL_obj::TEXTURE25;

int GL_obj::TEXTURE26;

int GL_obj::TEXTURE27;

int GL_obj::TEXTURE28;

int GL_obj::TEXTURE29;

int GL_obj::TEXTURE3;

int GL_obj::TEXTURE30;

int GL_obj::TEXTURE31;

int GL_obj::TEXTURE4;

int GL_obj::TEXTURE5;

int GL_obj::TEXTURE6;

int GL_obj::TEXTURE7;

int GL_obj::TEXTURE8;

int GL_obj::TEXTURE9;

int GL_obj::TEXTURE_2D;

int GL_obj::TEXTURE_BINDING_2D;

int GL_obj::TEXTURE_BINDING_CUBE_MAP;

int GL_obj::TEXTURE_CUBE_MAP;

int GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_X;

int GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_Y;

int GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_Z;

int GL_obj::TEXTURE_CUBE_MAP_POSITIVE_X;

int GL_obj::TEXTURE_CUBE_MAP_POSITIVE_Y;

int GL_obj::TEXTURE_CUBE_MAP_POSITIVE_Z;

int GL_obj::TEXTURE_MAG_FILTER;

int GL_obj::TEXTURE_MIN_FILTER;

int GL_obj::TEXTURE_WRAP_S;

int GL_obj::TEXTURE_WRAP_T;

int GL_obj::TRIANGLES;

int GL_obj::TRIANGLE_FAN;

int GL_obj::TRIANGLE_STRIP;

int GL_obj::UNPACK_ALIGNMENT;

int GL_obj::UNPACK_COLORSPACE_CONVERSION_WEBGL;

int GL_obj::UNPACK_FLIP_Y_WEBGL;

int GL_obj::UNPACK_PREMULTIPLY_ALPHA_WEBGL;

int GL_obj::UNSIGNED_BYTE;

int GL_obj::UNSIGNED_INT;

int GL_obj::UNSIGNED_SHORT;

int GL_obj::UNSIGNED_SHORT_4_4_4_4;

int GL_obj::UNSIGNED_SHORT_5_5_5_1;

int GL_obj::UNSIGNED_SHORT_5_6_5;

int GL_obj::VALIDATE_STATUS;

int GL_obj::VENDOR;

int GL_obj::VERSION;

int GL_obj::VERTEX_ATTRIB_ARRAY_BUFFER_BINDING;

int GL_obj::VERTEX_ATTRIB_ARRAY_ENABLED;

int GL_obj::VERTEX_ATTRIB_ARRAY_NORMALIZED;

int GL_obj::VERTEX_ATTRIB_ARRAY_POINTER;

int GL_obj::VERTEX_ATTRIB_ARRAY_SIZE;

int GL_obj::VERTEX_ATTRIB_ARRAY_STRIDE;

int GL_obj::VERTEX_ATTRIB_ARRAY_TYPE;

int GL_obj::VERTEX_SHADER;

int GL_obj::VIEWPORT;

int GL_obj::ZERO;

bool GL_obj::VAO_ENABLED;

bool GL_obj::TEXTURE_SRGB;

int GL_obj::SRGB;

int GL_obj::SRGB_ALPHA;

int GL_obj::SRGB8_ALPHA8;

int GL_obj::FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING;

int GL_obj::HALF_FLOAT;

bool GL_obj::TEXTURE_HALF;

bool GL_obj::TEXTURE_HALF_LINEAR;

int GL_obj::TEXTURE_ANISOTROPY;

bool GL_obj::TEXTURE_ANISOTROPY_ENABLED;

int GL_obj::MAX_TEXTURE_ANISOTROPY;

bool GL_obj::TEXTURE_FLOAT;

bool GL_obj::TEXTURE_FLOAT_LINEAR;

bool GL_obj::TEXTURE_DEPTH_ENABLED;

int GL_obj::MAX_ACTIVE_TEXTURE;

int GL_obj::MAX_COMBINED_TEXTURE;

int GL_obj::MAX_FRAGMENT_UNIFORM_LENGTH;

int GL_obj::MAX_VERTEX_UNIFORM_LENGTH;

int GL_obj::MAX_VERTEX_TEXTURES;

int GL_obj::get_MAX_UNIFORM_BONES( ){
	HX_STACK_FRAME("haxor.graphics.GL","get_MAX_UNIFORM_BONES",0x241df84e,"haxor.graphics.GL.get_MAX_UNIFORM_BONES","haxor/graphics/GL.hx",428,0xf3dbfaa2)
	HX_STACK_LINE(428)
	int tmp = ::haxor::graphics::GL_obj::MAX_VERTEX_UNIFORM_LENGTH;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(428)
	int tmp1 = (tmp - (int)32);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(428)
	Float tmp2 = (Float(tmp1) / Float((int)6));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(428)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(428)
	int tmp4 = ((int)(((Float)(tmp3))));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(428)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,get_MAX_UNIFORM_BONES,return )

bool GL_obj::BONE_TEXTURE;

bool GL_obj::VS_FLOAT_HIGHP;

bool GL_obj::VS_INT_HIGHP;

bool GL_obj::FS_FLOAT_HIGHP;

bool GL_obj::FS_INT_HIGHP;

int GL_obj::_NULL;

int GL_obj::INVALID;

::haxor::graphics::GraphicAPI GL_obj::get_api( ){
	HX_STACK_FRAME("haxor.graphics.GL","get_api",0x903a647f,"haxor.graphics.GL.get_api","haxor/graphics/GL.hx",460,0xf3dbfaa2)
	HX_STACK_LINE(460)
	::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(460)
	::haxor::graphics::GraphicAPI tmp1 = tmp->get_api();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(460)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,get_api,return )

::haxor::platform::graphics::OpenGL GL_obj::m_gl;

Void GL_obj::Initialize( ::haxor::core::BaseApplication p_application){
{
		HX_STACK_FRAME("haxor.graphics.GL","Initialize",0xa54c9ae2,"haxor.graphics.GL.Initialize","haxor/graphics/GL.hx",473,0xf3dbfaa2)
		HX_STACK_ARG(p_application,"p_application")
		HX_STACK_LINE(474)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::platform::graphics::OpenGL_obj::__new(p_application);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(474)
		::haxor::graphics::GL_obj::m_gl = tmp;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,Initialize,(void))

Void GL_obj::Resize( ){
{
		HX_STACK_FRAME("haxor.graphics.GL","Resize",0xbbd01286,"haxor.graphics.GL.Resize","haxor/graphics/GL.hx",480,0xf3dbfaa2)
		HX_STACK_LINE(480)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(480)
		tmp->Resize();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,Resize,(void))

Void GL_obj::BindBuffer( int p_target,int p_id){
{
		HX_STACK_FRAME("haxor.graphics.GL","BindBuffer",0xb14ffc2f,"haxor.graphics.GL.BindBuffer","haxor/graphics/GL.hx",489,0xf3dbfaa2)
		HX_STACK_ARG(p_target,"p_target")
		HX_STACK_ARG(p_id,"p_id")
		HX_STACK_LINE(489)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(489)
		int tmp1 = p_target;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(489)
		int tmp2 = p_id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(489)
		tmp->BindBuffer(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,BindBuffer,(void))

Void GL_obj::BindVAO( int p_id){
{
		HX_STACK_FRAME("haxor.graphics.GL","BindVAO",0xb5ebc055,"haxor.graphics.GL.BindVAO","haxor/graphics/GL.hx",496,0xf3dbfaa2)
		HX_STACK_ARG(p_id,"p_id")
		HX_STACK_LINE(496)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(496)
		int tmp1 = p_id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(496)
		tmp->BindVAO(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,BindVAO,(void))

Void GL_obj::BufferData( int p_target,::haxor::io::Buffer p_data,int p_mode){
{
		HX_STACK_FRAME("haxor.graphics.GL","BufferData",0x4c0528dc,"haxor.graphics.GL.BufferData","haxor/graphics/GL.hx",504,0xf3dbfaa2)
		HX_STACK_ARG(p_target,"p_target")
		HX_STACK_ARG(p_data,"p_data")
		HX_STACK_ARG(p_mode,"p_mode")
		HX_STACK_LINE(504)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(504)
		int tmp1 = p_target;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(504)
		::haxor::io::Buffer tmp2 = p_data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(504)
		int tmp3 = p_mode;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(504)
		tmp->BufferData(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,BufferData,(void))

Void GL_obj::BufferSubData( int p_target,int p_offset,::haxor::io::Buffer p_data){
{
		HX_STACK_FRAME("haxor.graphics.GL","BufferSubData",0x45dc5458,"haxor.graphics.GL.BufferSubData","haxor/graphics/GL.hx",513,0xf3dbfaa2)
		HX_STACK_ARG(p_target,"p_target")
		HX_STACK_ARG(p_offset,"p_offset")
		HX_STACK_ARG(p_data,"p_data")
		HX_STACK_LINE(513)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(513)
		int tmp1 = p_target;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(513)
		int tmp2 = p_offset;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(513)
		::haxor::io::Buffer tmp3 = p_data;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(513)
		tmp->BufferSubData(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,BufferSubData,(void))

int GL_obj::CreateBuffer( ){
	HX_STACK_FRAME("haxor.graphics.GL","CreateBuffer",0x01d66f2e,"haxor.graphics.GL.CreateBuffer","haxor/graphics/GL.hx",519,0xf3dbfaa2)
	HX_STACK_LINE(519)
	::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(519)
	int tmp1 = tmp->CreateBuffer();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(519)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,CreateBuffer,return )

int GL_obj::CreateVAO( ){
	HX_STACK_FRAME("haxor.graphics.GL","CreateVAO",0x62d707f6,"haxor.graphics.GL.CreateVAO","haxor/graphics/GL.hx",525,0xf3dbfaa2)
	HX_STACK_LINE(525)
	::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(525)
	int tmp1 = tmp->CreateVAO();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(525)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,CreateVAO,return )

Void GL_obj::DrawArrays( int p_primitive,int p_start,int p_count){
{
		HX_STACK_FRAME("haxor.graphics.GL","DrawArrays",0xb2455d70,"haxor.graphics.GL.DrawArrays","haxor/graphics/GL.hx",533,0xf3dbfaa2)
		HX_STACK_ARG(p_primitive,"p_primitive")
		HX_STACK_ARG(p_start,"p_start")
		HX_STACK_ARG(p_count,"p_count")
		HX_STACK_LINE(533)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(533)
		int tmp1 = p_primitive;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(533)
		int tmp2 = p_start;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(533)
		int tmp3 = p_count;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(533)
		tmp->DrawArrays(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,DrawArrays,(void))

Void GL_obj::DrawElements( int p_primitive,int p_count,int p_type,int p_offset){
{
		HX_STACK_FRAME("haxor.graphics.GL","DrawElements",0x68a4346d,"haxor.graphics.GL.DrawElements","haxor/graphics/GL.hx",542,0xf3dbfaa2)
		HX_STACK_ARG(p_primitive,"p_primitive")
		HX_STACK_ARG(p_count,"p_count")
		HX_STACK_ARG(p_type,"p_type")
		HX_STACK_ARG(p_offset,"p_offset")
		HX_STACK_LINE(542)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(542)
		int tmp1 = p_primitive;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(542)
		int tmp2 = p_count;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(542)
		int tmp3 = p_type;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(542)
		int tmp4 = p_offset;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(542)
		tmp->DrawElements(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,DrawElements,(void))

Void GL_obj::DeleteBuffer( int p_id){
{
		HX_STACK_FRAME("haxor.graphics.GL","DeleteBuffer",0x4619559d,"haxor.graphics.GL.DeleteBuffer","haxor/graphics/GL.hx",548,0xf3dbfaa2)
		HX_STACK_ARG(p_id,"p_id")
		HX_STACK_LINE(548)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(548)
		int tmp1 = p_id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(548)
		tmp->DeleteBuffer(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,DeleteBuffer,(void))

Void GL_obj::DeleteVAO( int p_id){
{
		HX_STACK_FRAME("haxor.graphics.GL","DeleteVAO",0x0abc5627,"haxor.graphics.GL.DeleteVAO","haxor/graphics/GL.hx",554,0xf3dbfaa2)
		HX_STACK_ARG(p_id,"p_id")
		HX_STACK_LINE(554)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(554)
		int tmp1 = p_id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(554)
		tmp->DeleteVAO(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,DeleteVAO,(void))

Void GL_obj::DisableVertexAttrib( int p_location){
{
		HX_STACK_FRAME("haxor.graphics.GL","DisableVertexAttrib",0x2a79a004,"haxor.graphics.GL.DisableVertexAttrib","haxor/graphics/GL.hx",560,0xf3dbfaa2)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_LINE(560)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(560)
		int tmp1 = p_location;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(560)
		tmp->DisableVertexAttrib(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,DisableVertexAttrib,(void))

Void GL_obj::EnableVertexAttrib( int p_location){
{
		HX_STACK_FRAME("haxor.graphics.GL","EnableVertexAttrib",0x79695883,"haxor.graphics.GL.EnableVertexAttrib","haxor/graphics/GL.hx",566,0xf3dbfaa2)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_LINE(566)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(566)
		int tmp1 = p_location;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(566)
		tmp->EnableVertexAttrib(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,EnableVertexAttrib,(void))

Void GL_obj::VertexAttrib1f( int p_location,Float p_x){
{
		HX_STACK_FRAME("haxor.graphics.GL","VertexAttrib1f",0x4c312ef5,"haxor.graphics.GL.VertexAttrib1f","haxor/graphics/GL.hx",575,0xf3dbfaa2)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_LINE(575)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(575)
		int tmp1 = p_location;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(575)
		Float tmp2 = p_x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(575)
		tmp->VertexAttrib1f(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,VertexAttrib1f,(void))

Void GL_obj::VertexAttrib2f( int p_location,Float p_x,Float p_y){
{
		HX_STACK_FRAME("haxor.graphics.GL","VertexAttrib2f",0x4c312fd4,"haxor.graphics.GL.VertexAttrib2f","haxor/graphics/GL.hx",584,0xf3dbfaa2)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_LINE(584)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(584)
		int tmp1 = p_location;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(584)
		Float tmp2 = p_x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(584)
		Float tmp3 = p_y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(584)
		tmp->VertexAttrib2f(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,VertexAttrib2f,(void))

Void GL_obj::VertexAttrib3f( int p_location,Float p_x,Float p_y,Float p_z){
{
		HX_STACK_FRAME("haxor.graphics.GL","VertexAttrib3f",0x4c3130b3,"haxor.graphics.GL.VertexAttrib3f","haxor/graphics/GL.hx",593,0xf3dbfaa2)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_ARG(p_z,"p_z")
		HX_STACK_LINE(593)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(593)
		int tmp1 = p_location;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(593)
		Float tmp2 = p_x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(593)
		Float tmp3 = p_y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(593)
		Float tmp4 = p_z;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(593)
		tmp->VertexAttrib3f(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,VertexAttrib3f,(void))

Void GL_obj::VertexAttrib4f( int p_location,Float p_x,Float p_y,Float p_z,Float p_w){
{
		HX_STACK_FRAME("haxor.graphics.GL","VertexAttrib4f",0x4c313192,"haxor.graphics.GL.VertexAttrib4f","haxor/graphics/GL.hx",603,0xf3dbfaa2)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_ARG(p_z,"p_z")
		HX_STACK_ARG(p_w,"p_w")
		HX_STACK_LINE(603)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(603)
		int tmp1 = p_location;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(603)
		Float tmp2 = p_x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(603)
		Float tmp3 = p_y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(603)
		Float tmp4 = p_z;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(603)
		Float tmp5 = p_w;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(603)
		tmp->VertexAttrib4f(tmp1,tmp2,tmp3,tmp4,tmp5);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GL_obj,VertexAttrib4f,(void))

Void GL_obj::VertexAttribPointer( int p_location,int p_components_size,int p_type,bool p_normalized,int p_stride,int p_offset){
{
		HX_STACK_FRAME("haxor.graphics.GL","VertexAttribPointer",0xa2a7d8bd,"haxor.graphics.GL.VertexAttribPointer","haxor/graphics/GL.hx",614,0xf3dbfaa2)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_components_size,"p_components_size")
		HX_STACK_ARG(p_type,"p_type")
		HX_STACK_ARG(p_normalized,"p_normalized")
		HX_STACK_ARG(p_stride,"p_stride")
		HX_STACK_ARG(p_offset,"p_offset")
		HX_STACK_LINE(614)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(614)
		int tmp1 = p_location;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(614)
		int tmp2 = p_components_size;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(614)
		int tmp3 = p_type;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(614)
		bool tmp4 = p_normalized;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(614)
		int tmp5 = p_stride;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(614)
		int tmp6 = p_offset;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(614)
		tmp->VertexAttribPointer(tmp1,tmp2,tmp3,tmp4,tmp5,tmp6);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(GL_obj,VertexAttribPointer,(void))

Void GL_obj::CompileShader( int p_shader){
{
		HX_STACK_FRAME("haxor.graphics.GL","CompileShader",0xdaa9cea6,"haxor.graphics.GL.CompileShader","haxor/graphics/GL.hx",625,0xf3dbfaa2)
		HX_STACK_ARG(p_shader,"p_shader")
		HX_STACK_LINE(625)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(625)
		int tmp1 = p_shader;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(625)
		tmp->CompileShader(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,CompileShader,(void))

int GL_obj::CreateShader( int p_type){
	HX_STACK_FRAME("haxor.graphics.GL","CreateShader",0x4e627153,"haxor.graphics.GL.CreateShader","haxor/graphics/GL.hx",632,0xf3dbfaa2)
	HX_STACK_ARG(p_type,"p_type")
	HX_STACK_LINE(632)
	::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(632)
	int tmp1 = p_type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(632)
	int tmp2 = tmp->CreateShader(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(632)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,CreateShader,return )

Void GL_obj::DetachShader( int p_program,int p_shader){
{
		HX_STACK_FRAME("haxor.graphics.GL","DetachShader",0xf99a42ea,"haxor.graphics.GL.DetachShader","haxor/graphics/GL.hx",639,0xf3dbfaa2)
		HX_STACK_ARG(p_program,"p_program")
		HX_STACK_ARG(p_shader,"p_shader")
		HX_STACK_LINE(639)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(639)
		int tmp1 = p_program;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(639)
		int tmp2 = p_shader;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(639)
		tmp->DetachShader(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,DetachShader,(void))

Void GL_obj::DeleteShader( int p_shader){
{
		HX_STACK_FRAME("haxor.graphics.GL","DeleteShader",0x92a557c2,"haxor.graphics.GL.DeleteShader","haxor/graphics/GL.hx",645,0xf3dbfaa2)
		HX_STACK_ARG(p_shader,"p_shader")
		HX_STACK_LINE(645)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(645)
		int tmp1 = p_shader;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(645)
		tmp->DeleteShader(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,DeleteShader,(void))

::String GL_obj::GetShaderInfoLog( int p_shader){
	HX_STACK_FRAME("haxor.graphics.GL","GetShaderInfoLog",0xf40ca0ad,"haxor.graphics.GL.GetShaderInfoLog","haxor/graphics/GL.hx",652,0xf3dbfaa2)
	HX_STACK_ARG(p_shader,"p_shader")
	HX_STACK_LINE(652)
	::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(652)
	int tmp1 = p_shader;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(652)
	::String tmp2 = tmp->GetShaderInfoLog(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(652)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,GetShaderInfoLog,return )

int GL_obj::GetShaderParameter( int p_shader,int p_parameter){
	HX_STACK_FRAME("haxor.graphics.GL","GetShaderParameter",0xb9abb560,"haxor.graphics.GL.GetShaderParameter","haxor/graphics/GL.hx",660,0xf3dbfaa2)
	HX_STACK_ARG(p_shader,"p_shader")
	HX_STACK_ARG(p_parameter,"p_parameter")
	HX_STACK_LINE(660)
	::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(660)
	int tmp1 = p_shader;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(660)
	int tmp2 = p_parameter;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(660)
	int tmp3 = tmp->GetShaderParameter(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(660)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,GetShaderParameter,return )

Void GL_obj::ShaderSource( int p_shader,::String p_source){
{
		HX_STACK_FRAME("haxor.graphics.GL","ShaderSource",0xb106bff2,"haxor.graphics.GL.ShaderSource","haxor/graphics/GL.hx",667,0xf3dbfaa2)
		HX_STACK_ARG(p_shader,"p_shader")
		HX_STACK_ARG(p_source,"p_source")
		HX_STACK_LINE(667)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(667)
		int tmp1 = p_shader;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(667)
		::String tmp2 = p_source;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(667)
		tmp->ShaderSource(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,ShaderSource,(void))

Void GL_obj::AttachShader( int p_program,int p_shader){
{
		HX_STACK_FRAME("haxor.graphics.GL","AttachShader",0xc16442dc,"haxor.graphics.GL.AttachShader","haxor/graphics/GL.hx",674,0xf3dbfaa2)
		HX_STACK_ARG(p_program,"p_program")
		HX_STACK_ARG(p_shader,"p_shader")
		HX_STACK_LINE(674)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(674)
		int tmp1 = p_program;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(674)
		int tmp2 = p_shader;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(674)
		tmp->AttachShader(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,AttachShader,(void))

Void GL_obj::BindAttribLocation( int p_program,int p_location,::String p_name){
{
		HX_STACK_FRAME("haxor.graphics.GL","BindAttribLocation",0xa180f1ce,"haxor.graphics.GL.BindAttribLocation","haxor/graphics/GL.hx",682,0xf3dbfaa2)
		HX_STACK_ARG(p_program,"p_program")
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_name,"p_name")
		HX_STACK_LINE(682)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(682)
		int tmp1 = p_program;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(682)
		int tmp2 = p_location;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(682)
		::String tmp3 = p_name;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(682)
		tmp->BindAttribLocation(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,BindAttribLocation,(void))

int GL_obj::CreateProgram( ){
	HX_STACK_FRAME("haxor.graphics.GL","CreateProgram",0xdc338096,"haxor.graphics.GL.CreateProgram","haxor/graphics/GL.hx",688,0xf3dbfaa2)
	HX_STACK_LINE(688)
	::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(688)
	int tmp1 = tmp->CreateProgram();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(688)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,CreateProgram,return )

Void GL_obj::DeleteProgram( int p_program){
{
		HX_STACK_FRAME("haxor.graphics.GL","DeleteProgram",0x527a3b47,"haxor.graphics.GL.DeleteProgram","haxor/graphics/GL.hx",694,0xf3dbfaa2)
		HX_STACK_ARG(p_program,"p_program")
		HX_STACK_LINE(694)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(694)
		int tmp1 = p_program;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(694)
		tmp->DeleteProgram(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,DeleteProgram,(void))

int GL_obj::GetAttribLocation( int p_program,::String p_name){
	HX_STACK_FRAME("haxor.graphics.GL","GetAttribLocation",0x9832e783,"haxor.graphics.GL.GetAttribLocation","haxor/graphics/GL.hx",702,0xf3dbfaa2)
	HX_STACK_ARG(p_program,"p_program")
	HX_STACK_ARG(p_name,"p_name")
	HX_STACK_LINE(702)
	::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(702)
	int tmp1 = p_program;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(702)
	::String tmp2 = p_name;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(702)
	int tmp3 = tmp->GetAttribLocation(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(702)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,GetAttribLocation,return )

int GL_obj::GetUniformLocation( int p_program,::String p_name){
	HX_STACK_FRAME("haxor.graphics.GL","GetUniformLocation",0xd324ab25,"haxor.graphics.GL.GetUniformLocation","haxor/graphics/GL.hx",710,0xf3dbfaa2)
	HX_STACK_ARG(p_program,"p_program")
	HX_STACK_ARG(p_name,"p_name")
	HX_STACK_LINE(710)
	::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(710)
	int tmp1 = p_program;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(710)
	::String tmp2 = p_name;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(710)
	int tmp3 = tmp->GetUniformLocation(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(710)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,GetUniformLocation,return )

::String GL_obj::GetProgramInfoLog( int p_program){
	HX_STACK_FRAME("haxor.graphics.GL","GetProgramInfoLog",0x0915be76,"haxor.graphics.GL.GetProgramInfoLog","haxor/graphics/GL.hx",717,0xf3dbfaa2)
	HX_STACK_ARG(p_program,"p_program")
	HX_STACK_LINE(717)
	::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(717)
	int tmp1 = p_program;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(717)
	::String tmp2 = tmp->GetProgramInfoLog(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(717)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,GetProgramInfoLog,return )

int GL_obj::GetProgramParameter( int p_program,int p_parameter){
	HX_STACK_FRAME("haxor.graphics.GL","GetProgramParameter",0xf98e9769,"haxor.graphics.GL.GetProgramParameter","haxor/graphics/GL.hx",725,0xf3dbfaa2)
	HX_STACK_ARG(p_program,"p_program")
	HX_STACK_ARG(p_parameter,"p_parameter")
	HX_STACK_LINE(725)
	::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(725)
	int tmp1 = p_program;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(725)
	int tmp2 = p_parameter;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(725)
	int tmp3 = tmp->GetProgramParameter(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(725)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,GetProgramParameter,return )

Void GL_obj::LinkProgram( int p_program){
{
		HX_STACK_FRAME("haxor.graphics.GL","LinkProgram",0x5026a3d8,"haxor.graphics.GL.LinkProgram","haxor/graphics/GL.hx",731,0xf3dbfaa2)
		HX_STACK_ARG(p_program,"p_program")
		HX_STACK_LINE(731)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(731)
		int tmp1 = p_program;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(731)
		tmp->LinkProgram(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,LinkProgram,(void))

Void GL_obj::UseProgram( int p_program){
{
		HX_STACK_FRAME("haxor.graphics.GL","UseProgram",0xaf3dd68f,"haxor.graphics.GL.UseProgram","haxor/graphics/GL.hx",737,0xf3dbfaa2)
		HX_STACK_ARG(p_program,"p_program")
		HX_STACK_LINE(737)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(737)
		int tmp1 = p_program;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(737)
		tmp->UseProgram(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,UseProgram,(void))

Void GL_obj::ActiveTexture( int p_slot){
{
		HX_STACK_FRAME("haxor.graphics.GL","ActiveTexture",0x56a17163,"haxor.graphics.GL.ActiveTexture","haxor/graphics/GL.hx",748,0xf3dbfaa2)
		HX_STACK_ARG(p_slot,"p_slot")
		HX_STACK_LINE(748)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(748)
		int tmp1 = p_slot;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(748)
		tmp->ActiveTexture(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,ActiveTexture,(void))

Void GL_obj::BindFramebuffer( int p_target,int p_id){
{
		HX_STACK_FRAME("haxor.graphics.GL","BindFramebuffer",0x5a2e6b5e,"haxor.graphics.GL.BindFramebuffer","haxor/graphics/GL.hx",755,0xf3dbfaa2)
		HX_STACK_ARG(p_target,"p_target")
		HX_STACK_ARG(p_id,"p_id")
		HX_STACK_LINE(755)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(755)
		int tmp1 = p_target;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(755)
		int tmp2 = p_id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(755)
		tmp->BindFramebuffer(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,BindFramebuffer,(void))

Void GL_obj::BindRenderbuffer( int p_target,int p_id){
{
		HX_STACK_FRAME("haxor.graphics.GL","BindRenderbuffer",0x14fb9945,"haxor.graphics.GL.BindRenderbuffer","haxor/graphics/GL.hx",762,0xf3dbfaa2)
		HX_STACK_ARG(p_target,"p_target")
		HX_STACK_ARG(p_id,"p_id")
		HX_STACK_LINE(762)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(762)
		int tmp1 = p_target;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(762)
		int tmp2 = p_id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(762)
		tmp->BindRenderbuffer(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,BindRenderbuffer,(void))

Void GL_obj::BindTexture( int p_target,int p_id){
{
		HX_STACK_FRAME("haxor.graphics.GL","BindTexture",0x61fcd2cc,"haxor.graphics.GL.BindTexture","haxor/graphics/GL.hx",769,0xf3dbfaa2)
		HX_STACK_ARG(p_target,"p_target")
		HX_STACK_ARG(p_id,"p_id")
		HX_STACK_LINE(769)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(769)
		int tmp1 = p_target;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(769)
		int tmp2 = p_id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(769)
		tmp->BindTexture(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,BindTexture,(void))

int GL_obj::CreateFramebuffer( ){
	HX_STACK_FRAME("haxor.graphics.GL","CreateFramebuffer",0x080bbbff,"haxor.graphics.GL.CreateFramebuffer","haxor/graphics/GL.hx",775,0xf3dbfaa2)
	HX_STACK_LINE(775)
	::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(775)
	int tmp1 = tmp->CreateFramebuffer();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(775)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,CreateFramebuffer,return )

int GL_obj::CreateRenderbuffer( ){
	HX_STACK_FRAME("haxor.graphics.GL","CreateRenderbuffer",0x88c4d584,"haxor.graphics.GL.CreateRenderbuffer","haxor/graphics/GL.hx",781,0xf3dbfaa2)
	HX_STACK_LINE(781)
	::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(781)
	int tmp1 = tmp->CreateRenderbuffer();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(781)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,CreateRenderbuffer,return )

int GL_obj::CreateTexture( ){
	HX_STACK_FRAME("haxor.graphics.GL","CreateTexture",0x871afeed,"haxor.graphics.GL.CreateTexture","haxor/graphics/GL.hx",787,0xf3dbfaa2)
	HX_STACK_LINE(787)
	::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(787)
	int tmp1 = tmp->CreateTexture();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(787)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,CreateTexture,return )

Void GL_obj::DeleteFramebuffer( int p_id){
{
		HX_STACK_FRAME("haxor.graphics.GL","DeleteFramebuffer",0x8b242330,"haxor.graphics.GL.DeleteFramebuffer","haxor/graphics/GL.hx",793,0xf3dbfaa2)
		HX_STACK_ARG(p_id,"p_id")
		HX_STACK_LINE(793)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(793)
		int tmp1 = p_id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(793)
		tmp->DeleteFramebuffer(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,DeleteFramebuffer,(void))

Void GL_obj::DeleteRenderbuffer( int p_id){
{
		HX_STACK_FRAME("haxor.graphics.GL","DeleteRenderbuffer",0xbb06b933,"haxor.graphics.GL.DeleteRenderbuffer","haxor/graphics/GL.hx",799,0xf3dbfaa2)
		HX_STACK_ARG(p_id,"p_id")
		HX_STACK_LINE(799)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(799)
		int tmp1 = p_id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(799)
		tmp->DeleteRenderbuffer(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,DeleteRenderbuffer,(void))

Void GL_obj::DeleteTexture( int p_id){
{
		HX_STACK_FRAME("haxor.graphics.GL","DeleteTexture",0xfd61b99e,"haxor.graphics.GL.DeleteTexture","haxor/graphics/GL.hx",805,0xf3dbfaa2)
		HX_STACK_ARG(p_id,"p_id")
		HX_STACK_LINE(805)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(805)
		int tmp1 = p_id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(805)
		tmp->DeleteTexture(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,DeleteTexture,(void))

Void GL_obj::FramebufferRenderbuffer( int p_target,int p_attachment,int p_renderbuffer_target,int p_renderbuffer_id){
{
		HX_STACK_FRAME("haxor.graphics.GL","FramebufferRenderbuffer",0xd58d6091,"haxor.graphics.GL.FramebufferRenderbuffer","haxor/graphics/GL.hx",815,0xf3dbfaa2)
		HX_STACK_ARG(p_target,"p_target")
		HX_STACK_ARG(p_attachment,"p_attachment")
		HX_STACK_ARG(p_renderbuffer_target,"p_renderbuffer_target")
		HX_STACK_ARG(p_renderbuffer_id,"p_renderbuffer_id")
		HX_STACK_LINE(815)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(815)
		int tmp1 = p_target;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(815)
		int tmp2 = p_attachment;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(815)
		int tmp3 = p_renderbuffer_target;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(815)
		int tmp4 = p_renderbuffer_id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(815)
		tmp->FramebufferRenderbuffer(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,FramebufferRenderbuffer,(void))

Void GL_obj::FramebufferTexture2D( int p_target,int p_attachment,int p_texture_target,int p_texture_id,int p_miplevel){
{
		HX_STACK_FRAME("haxor.graphics.GL","FramebufferTexture2D",0x54ca3ad2,"haxor.graphics.GL.FramebufferTexture2D","haxor/graphics/GL.hx",825,0xf3dbfaa2)
		HX_STACK_ARG(p_target,"p_target")
		HX_STACK_ARG(p_attachment,"p_attachment")
		HX_STACK_ARG(p_texture_target,"p_texture_target")
		HX_STACK_ARG(p_texture_id,"p_texture_id")
		HX_STACK_ARG(p_miplevel,"p_miplevel")
		HX_STACK_LINE(825)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(825)
		int tmp1 = p_target;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(825)
		int tmp2 = p_attachment;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(825)
		int tmp3 = p_texture_target;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(825)
		int tmp4 = p_texture_id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(825)
		int tmp5 = p_miplevel;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(825)
		tmp->FramebufferTexture2D(tmp1,tmp2,tmp3,tmp4,tmp5);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GL_obj,FramebufferTexture2D,(void))

Void GL_obj::GenerateMipmap( int p_target){
{
		HX_STACK_FRAME("haxor.graphics.GL","GenerateMipmap",0x5388712f,"haxor.graphics.GL.GenerateMipmap","haxor/graphics/GL.hx",830,0xf3dbfaa2)
		HX_STACK_ARG(p_target,"p_target")
		HX_STACK_LINE(830)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(830)
		int tmp1 = p_target;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(830)
		tmp->GenerateMipmap(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,GenerateMipmap,(void))

Void GL_obj::PixelStorei( int p_parameter,int p_value){
{
		HX_STACK_FRAME("haxor.graphics.GL","PixelStorei",0x47732abc,"haxor.graphics.GL.PixelStorei","haxor/graphics/GL.hx",837,0xf3dbfaa2)
		HX_STACK_ARG(p_parameter,"p_parameter")
		HX_STACK_ARG(p_value,"p_value")
		HX_STACK_LINE(837)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(837)
		int tmp1 = p_parameter;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(837)
		int tmp2 = p_value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(837)
		tmp->PixelStorei(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,PixelStorei,(void))

Void GL_obj::RenderbufferStorage( int p_target,int p_format,int p_width,int p_height){
{
		HX_STACK_FRAME("haxor.graphics.GL","RenderbufferStorage",0xea627533,"haxor.graphics.GL.RenderbufferStorage","haxor/graphics/GL.hx",847,0xf3dbfaa2)
		HX_STACK_ARG(p_target,"p_target")
		HX_STACK_ARG(p_format,"p_format")
		HX_STACK_ARG(p_width,"p_width")
		HX_STACK_ARG(p_height,"p_height")
		HX_STACK_LINE(847)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(847)
		int tmp1 = p_target;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(847)
		int tmp2 = p_format;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(847)
		int tmp3 = p_width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(847)
		int tmp4 = p_height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(847)
		tmp->RenderbufferStorage(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,RenderbufferStorage,(void))

Void GL_obj::TexImage2D( int p_target,int p_level,int p_internal_format,int p_width,int p_height,int p_border,int p_format,int p_channel_type,::haxor::io::Buffer p_data){
{
		HX_STACK_FRAME("haxor.graphics.GL","TexImage2D",0x71f8e658,"haxor.graphics.GL.TexImage2D","haxor/graphics/GL.hx",861,0xf3dbfaa2)
		HX_STACK_ARG(p_target,"p_target")
		HX_STACK_ARG(p_level,"p_level")
		HX_STACK_ARG(p_internal_format,"p_internal_format")
		HX_STACK_ARG(p_width,"p_width")
		HX_STACK_ARG(p_height,"p_height")
		HX_STACK_ARG(p_border,"p_border")
		HX_STACK_ARG(p_format,"p_format")
		HX_STACK_ARG(p_channel_type,"p_channel_type")
		HX_STACK_ARG(p_data,"p_data")
		HX_STACK_LINE(861)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(861)
		int tmp1 = p_target;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(861)
		int tmp2 = p_level;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(861)
		int tmp3 = p_internal_format;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(861)
		int tmp4 = p_width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(861)
		int tmp5 = p_height;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(861)
		int tmp6 = p_border;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(861)
		int tmp7 = p_format;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(861)
		int tmp8 = p_channel_type;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(861)
		::haxor::io::Buffer tmp9 = p_data;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(861)
		tmp->TexImage2D(tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8,tmp9);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(GL_obj,TexImage2D,(void))

Void GL_obj::TexImage2DAlloc( int p_target,int p_level,int p_internal_format,int p_width,int p_height,int p_border,int p_format,int p_channel_type){
{
		HX_STACK_FRAME("haxor.graphics.GL","TexImage2DAlloc",0x642e2efd,"haxor.graphics.GL.TexImage2DAlloc","haxor/graphics/GL.hx",874,0xf3dbfaa2)
		HX_STACK_ARG(p_target,"p_target")
		HX_STACK_ARG(p_level,"p_level")
		HX_STACK_ARG(p_internal_format,"p_internal_format")
		HX_STACK_ARG(p_width,"p_width")
		HX_STACK_ARG(p_height,"p_height")
		HX_STACK_ARG(p_border,"p_border")
		HX_STACK_ARG(p_format,"p_format")
		HX_STACK_ARG(p_channel_type,"p_channel_type")
		HX_STACK_LINE(874)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(874)
		int tmp1 = p_target;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(874)
		int tmp2 = p_level;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(874)
		int tmp3 = p_internal_format;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(874)
		int tmp4 = p_width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(874)
		int tmp5 = p_height;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(874)
		int tmp6 = p_border;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(874)
		int tmp7 = p_format;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(874)
		int tmp8 = p_channel_type;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(874)
		tmp->TexImage2DAlloc(tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(GL_obj,TexImage2DAlloc,(void))

Void GL_obj::TexSubImage2D( int p_target,int p_level,int p_x,int p_y,int p_width,int p_height,int p_format,int p_channel_type,::haxor::io::Buffer p_data){
{
		HX_STACK_FRAME("haxor.graphics.GL","TexSubImage2D",0x28878cc2,"haxor.graphics.GL.TexSubImage2D","haxor/graphics/GL.hx",889,0xf3dbfaa2)
		HX_STACK_ARG(p_target,"p_target")
		HX_STACK_ARG(p_level,"p_level")
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_ARG(p_width,"p_width")
		HX_STACK_ARG(p_height,"p_height")
		HX_STACK_ARG(p_format,"p_format")
		HX_STACK_ARG(p_channel_type,"p_channel_type")
		HX_STACK_ARG(p_data,"p_data")
		HX_STACK_LINE(889)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(889)
		int tmp1 = p_target;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(889)
		int tmp2 = p_level;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(889)
		int tmp3 = p_x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(889)
		int tmp4 = p_y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(889)
		int tmp5 = p_width;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(889)
		int tmp6 = p_height;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(889)
		int tmp7 = p_format;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(889)
		int tmp8 = p_channel_type;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(889)
		::haxor::io::Buffer tmp9 = p_data;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(889)
		tmp->TexSubImage2D(tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8,tmp9);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(GL_obj,TexSubImage2D,(void))

Void GL_obj::TexStorage2D( int p_target,int p_num_mipmaps,int p_channels,int p_width,int p_height){
{
		HX_STACK_FRAME("haxor.graphics.GL","TexStorage2D",0xde310ef8,"haxor.graphics.GL.TexStorage2D","haxor/graphics/GL.hx",900,0xf3dbfaa2)
		HX_STACK_ARG(p_target,"p_target")
		HX_STACK_ARG(p_num_mipmaps,"p_num_mipmaps")
		HX_STACK_ARG(p_channels,"p_channels")
		HX_STACK_ARG(p_width,"p_width")
		HX_STACK_ARG(p_height,"p_height")
		HX_STACK_LINE(900)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(900)
		int tmp1 = p_target;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(900)
		int tmp2 = p_num_mipmaps;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(900)
		int tmp3 = p_channels;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(900)
		int tmp4 = p_width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(900)
		int tmp5 = p_height;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(900)
		tmp->TexStorage2D(tmp1,tmp2,tmp3,tmp4,tmp5);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GL_obj,TexStorage2D,(void))

Void GL_obj::TexParameterf( int p_target,int p_parameter,Float p_value){
{
		HX_STACK_FRAME("haxor.graphics.GL","TexParameterf",0x3c288512,"haxor.graphics.GL.TexParameterf","haxor/graphics/GL.hx",907,0xf3dbfaa2)
		HX_STACK_ARG(p_target,"p_target")
		HX_STACK_ARG(p_parameter,"p_parameter")
		HX_STACK_ARG(p_value,"p_value")
		HX_STACK_LINE(907)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(907)
		int tmp1 = p_target;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(907)
		int tmp2 = p_parameter;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(907)
		Float tmp3 = p_value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(907)
		tmp->TexParameterf(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,TexParameterf,(void))

Void GL_obj::TexParameteri( int p_target,int p_parameter,int p_value){
{
		HX_STACK_FRAME("haxor.graphics.GL","TexParameteri",0x3c288515,"haxor.graphics.GL.TexParameteri","haxor/graphics/GL.hx",915,0xf3dbfaa2)
		HX_STACK_ARG(p_target,"p_target")
		HX_STACK_ARG(p_parameter,"p_parameter")
		HX_STACK_ARG(p_value,"p_value")
		HX_STACK_LINE(915)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(915)
		int tmp1 = p_target;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(915)
		int tmp2 = p_parameter;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(915)
		int tmp3 = p_value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(915)
		tmp->TexParameteri(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,TexParameteri,(void))

Void GL_obj::Uniform1f( int p_location,Float p_x){
{
		HX_STACK_FRAME("haxor.graphics.GL","Uniform1f",0x20cd8ff7,"haxor.graphics.GL.Uniform1f","haxor/graphics/GL.hx",926,0xf3dbfaa2)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_LINE(926)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(926)
		int tmp1 = p_location;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(926)
		Float tmp2 = p_x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(926)
		tmp->Uniform1f(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,Uniform1f,(void))

Void GL_obj::Uniform2f( int p_location,Float p_x,Float p_y){
{
		HX_STACK_FRAME("haxor.graphics.GL","Uniform2f",0x20cd90d6,"haxor.graphics.GL.Uniform2f","haxor/graphics/GL.hx",934,0xf3dbfaa2)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_LINE(934)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(934)
		int tmp1 = p_location;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(934)
		Float tmp2 = p_x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(934)
		Float tmp3 = p_y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(934)
		tmp->Uniform2f(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,Uniform2f,(void))

Void GL_obj::Uniform3f( int p_location,Float p_x,Float p_y,Float p_z){
{
		HX_STACK_FRAME("haxor.graphics.GL","Uniform3f",0x20cd91b5,"haxor.graphics.GL.Uniform3f","haxor/graphics/GL.hx",943,0xf3dbfaa2)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_ARG(p_z,"p_z")
		HX_STACK_LINE(943)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(943)
		int tmp1 = p_location;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(943)
		Float tmp2 = p_x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(943)
		Float tmp3 = p_y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(943)
		Float tmp4 = p_z;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(943)
		tmp->Uniform3f(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,Uniform3f,(void))

Void GL_obj::Uniform4f( int p_location,Float p_x,Float p_y,Float p_z,Float p_w){
{
		HX_STACK_FRAME("haxor.graphics.GL","Uniform4f",0x20cd9294,"haxor.graphics.GL.Uniform4f","haxor/graphics/GL.hx",953,0xf3dbfaa2)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_ARG(p_z,"p_z")
		HX_STACK_ARG(p_w,"p_w")
		HX_STACK_LINE(953)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(953)
		int tmp1 = p_location;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(953)
		Float tmp2 = p_x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(953)
		Float tmp3 = p_y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(953)
		Float tmp4 = p_z;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(953)
		Float tmp5 = p_w;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(953)
		tmp->Uniform4f(tmp1,tmp2,tmp3,tmp4,tmp5);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GL_obj,Uniform4f,(void))

Void GL_obj::Uniform1i( int p_location,int p_x){
{
		HX_STACK_FRAME("haxor.graphics.GL","Uniform1i",0x20cd8ffa,"haxor.graphics.GL.Uniform1i","haxor/graphics/GL.hx",960,0xf3dbfaa2)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_LINE(960)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(960)
		int tmp1 = p_location;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(960)
		int tmp2 = p_x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(960)
		tmp->Uniform1i(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,Uniform1i,(void))

Void GL_obj::Uniform2i( int p_location,int p_x,int p_y){
{
		HX_STACK_FRAME("haxor.graphics.GL","Uniform2i",0x20cd90d9,"haxor.graphics.GL.Uniform2i","haxor/graphics/GL.hx",968,0xf3dbfaa2)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_LINE(968)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(968)
		int tmp1 = p_location;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(968)
		int tmp2 = p_x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(968)
		int tmp3 = p_y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(968)
		tmp->Uniform2i(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,Uniform2i,(void))

Void GL_obj::Uniform3i( int p_location,int p_x,int p_y,int p_z){
{
		HX_STACK_FRAME("haxor.graphics.GL","Uniform3i",0x20cd91b8,"haxor.graphics.GL.Uniform3i","haxor/graphics/GL.hx",977,0xf3dbfaa2)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_ARG(p_z,"p_z")
		HX_STACK_LINE(977)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(977)
		int tmp1 = p_location;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(977)
		int tmp2 = p_x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(977)
		int tmp3 = p_y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(977)
		int tmp4 = p_z;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(977)
		tmp->Uniform3i(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,Uniform3i,(void))

Void GL_obj::Uniform4i( int p_location,int p_x,int p_y,int p_z,int p_w){
{
		HX_STACK_FRAME("haxor.graphics.GL","Uniform4i",0x20cd9297,"haxor.graphics.GL.Uniform4i","haxor/graphics/GL.hx",987,0xf3dbfaa2)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_ARG(p_z,"p_z")
		HX_STACK_ARG(p_w,"p_w")
		HX_STACK_LINE(987)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(987)
		int tmp1 = p_location;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(987)
		int tmp2 = p_x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(987)
		int tmp3 = p_y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(987)
		int tmp4 = p_z;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(987)
		int tmp5 = p_w;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(987)
		tmp->Uniform4i(tmp1,tmp2,tmp3,tmp4,tmp5);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GL_obj,Uniform4i,(void))

Void GL_obj::Uniform1fv( int p_location,::haxor::io::FloatArray p_v){
{
		HX_STACK_FRAME("haxor.graphics.GL","Uniform1fv",0x9310689f,"haxor.graphics.GL.Uniform1fv","haxor/graphics/GL.hx",994,0xf3dbfaa2)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_v,"p_v")
		HX_STACK_LINE(994)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(994)
		int tmp1 = p_location;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(994)
		::haxor::io::FloatArray tmp2 = p_v;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(994)
		tmp->Uniform1fv(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,Uniform1fv,(void))

Void GL_obj::Uniform2fv( int p_location,::haxor::io::FloatArray p_v){
{
		HX_STACK_FRAME("haxor.graphics.GL","Uniform2fv",0x93112ae0,"haxor.graphics.GL.Uniform2fv","haxor/graphics/GL.hx",1001,0xf3dbfaa2)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_v,"p_v")
		HX_STACK_LINE(1001)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1001)
		int tmp1 = p_location;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1001)
		::haxor::io::FloatArray tmp2 = p_v;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1001)
		tmp->Uniform2fv(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,Uniform2fv,(void))

Void GL_obj::Uniform3fv( int p_location,::haxor::io::FloatArray p_v){
{
		HX_STACK_FRAME("haxor.graphics.GL","Uniform3fv",0x9311ed21,"haxor.graphics.GL.Uniform3fv","haxor/graphics/GL.hx",1008,0xf3dbfaa2)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_v,"p_v")
		HX_STACK_LINE(1008)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1008)
		int tmp1 = p_location;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1008)
		::haxor::io::FloatArray tmp2 = p_v;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1008)
		tmp->Uniform3fv(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,Uniform3fv,(void))

Void GL_obj::Uniform4fv( int p_location,::haxor::io::FloatArray p_v){
{
		HX_STACK_FRAME("haxor.graphics.GL","Uniform4fv",0x9312af62,"haxor.graphics.GL.Uniform4fv","haxor/graphics/GL.hx",1015,0xf3dbfaa2)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_v,"p_v")
		HX_STACK_LINE(1015)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1015)
		int tmp1 = p_location;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1015)
		::haxor::io::FloatArray tmp2 = p_v;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1015)
		tmp->Uniform4fv(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,Uniform4fv,(void))

Void GL_obj::Uniform1iv( int p_location,::haxor::io::Int32Array p_v){
{
		HX_STACK_FRAME("haxor.graphics.GL","Uniform1iv",0x93106b3c,"haxor.graphics.GL.Uniform1iv","haxor/graphics/GL.hx",1022,0xf3dbfaa2)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_v,"p_v")
		HX_STACK_LINE(1022)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1022)
		int tmp1 = p_location;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1022)
		::haxor::io::Int32Array tmp2 = p_v;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1022)
		tmp->Uniform1iv(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,Uniform1iv,(void))

Void GL_obj::Uniform2iv( int p_location,::haxor::io::Int32Array p_v){
{
		HX_STACK_FRAME("haxor.graphics.GL","Uniform2iv",0x93112d7d,"haxor.graphics.GL.Uniform2iv","haxor/graphics/GL.hx",1029,0xf3dbfaa2)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_v,"p_v")
		HX_STACK_LINE(1029)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1029)
		int tmp1 = p_location;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1029)
		::haxor::io::Int32Array tmp2 = p_v;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1029)
		tmp->Uniform2iv(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,Uniform2iv,(void))

Void GL_obj::Uniform3iv( int p_location,::haxor::io::Int32Array p_v){
{
		HX_STACK_FRAME("haxor.graphics.GL","Uniform3iv",0x9311efbe,"haxor.graphics.GL.Uniform3iv","haxor/graphics/GL.hx",1036,0xf3dbfaa2)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_v,"p_v")
		HX_STACK_LINE(1036)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1036)
		int tmp1 = p_location;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1036)
		::haxor::io::Int32Array tmp2 = p_v;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1036)
		tmp->Uniform3iv(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,Uniform3iv,(void))

Void GL_obj::Uniform4iv( int p_location,::haxor::io::Int32Array p_v){
{
		HX_STACK_FRAME("haxor.graphics.GL","Uniform4iv",0x9312b1ff,"haxor.graphics.GL.Uniform4iv","haxor/graphics/GL.hx",1043,0xf3dbfaa2)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_v,"p_v")
		HX_STACK_LINE(1043)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1043)
		int tmp1 = p_location;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1043)
		::haxor::io::Int32Array tmp2 = p_v;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1043)
		tmp->Uniform4iv(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,Uniform4iv,(void))

Void GL_obj::UniformMatrix2fv( int p_location,bool p_transpose,::haxor::io::FloatArray p_v){
{
		HX_STACK_FRAME("haxor.graphics.GL","UniformMatrix2fv",0xc59d6d9f,"haxor.graphics.GL.UniformMatrix2fv","haxor/graphics/GL.hx",1051,0xf3dbfaa2)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_transpose,"p_transpose")
		HX_STACK_ARG(p_v,"p_v")
		HX_STACK_LINE(1051)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1051)
		int tmp1 = p_location;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1051)
		bool tmp2 = p_transpose;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1051)
		::haxor::io::FloatArray tmp3 = p_v;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1051)
		tmp->UniformMatrix2fv(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,UniformMatrix2fv,(void))

Void GL_obj::UniformMatrix3fv( int p_location,bool p_transpose,::haxor::io::FloatArray p_v){
{
		HX_STACK_FRAME("haxor.graphics.GL","UniformMatrix3fv",0xc59e2fe0,"haxor.graphics.GL.UniformMatrix3fv","haxor/graphics/GL.hx",1059,0xf3dbfaa2)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_transpose,"p_transpose")
		HX_STACK_ARG(p_v,"p_v")
		HX_STACK_LINE(1059)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1059)
		int tmp1 = p_location;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1059)
		bool tmp2 = p_transpose;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1059)
		::haxor::io::FloatArray tmp3 = p_v;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1059)
		tmp->UniformMatrix3fv(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,UniformMatrix3fv,(void))

Void GL_obj::UniformMatrix4fv( int p_location,bool p_transpose,::haxor::io::FloatArray p_v){
{
		HX_STACK_FRAME("haxor.graphics.GL","UniformMatrix4fv",0xc59ef221,"haxor.graphics.GL.UniformMatrix4fv","haxor/graphics/GL.hx",1067,0xf3dbfaa2)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_transpose,"p_transpose")
		HX_STACK_ARG(p_v,"p_v")
		HX_STACK_LINE(1067)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1067)
		int tmp1 = p_location;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1067)
		bool tmp2 = p_transpose;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1067)
		::haxor::io::FloatArray tmp3 = p_v;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1067)
		tmp->UniformMatrix4fv(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,UniformMatrix4fv,(void))

Void GL_obj::BlendFunc( int p_src,int p_dst){
{
		HX_STACK_FRAME("haxor.graphics.GL","BlendFunc",0x208b6ae3,"haxor.graphics.GL.BlendFunc","haxor/graphics/GL.hx",1078,0xf3dbfaa2)
		HX_STACK_ARG(p_src,"p_src")
		HX_STACK_ARG(p_dst,"p_dst")
		HX_STACK_LINE(1078)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1078)
		int tmp1 = p_src;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1078)
		int tmp2 = p_dst;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1078)
		tmp->BlendFunc(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,BlendFunc,(void))

Void GL_obj::Disable( int p_flag){
{
		HX_STACK_FRAME("haxor.graphics.GL","Disable",0xe8253116,"haxor.graphics.GL.Disable","haxor/graphics/GL.hx",1084,0xf3dbfaa2)
		HX_STACK_ARG(p_flag,"p_flag")
		HX_STACK_LINE(1084)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1084)
		int tmp1 = p_flag;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1084)
		tmp->Disable(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,Disable,(void))

Void GL_obj::Enable( int p_flag){
{
		HX_STACK_FRAME("haxor.graphics.GL","Enable",0xabdc6715,"haxor.graphics.GL.Enable","haxor/graphics/GL.hx",1090,0xf3dbfaa2)
		HX_STACK_ARG(p_flag,"p_flag")
		HX_STACK_LINE(1090)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1090)
		int tmp1 = p_flag;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1090)
		tmp->Enable(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,Enable,(void))

Void GL_obj::DepthMask( bool p_flag){
{
		HX_STACK_FRAME("haxor.graphics.GL","DepthMask",0xb7c90a3d,"haxor.graphics.GL.DepthMask","haxor/graphics/GL.hx",1096,0xf3dbfaa2)
		HX_STACK_ARG(p_flag,"p_flag")
		HX_STACK_LINE(1096)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1096)
		bool tmp1 = p_flag;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1096)
		tmp->DepthMask(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,DepthMask,(void))

Void GL_obj::DepthFunc( int p_flag){
{
		HX_STACK_FRAME("haxor.graphics.GL","DepthFunc",0xb337b495,"haxor.graphics.GL.DepthFunc","haxor/graphics/GL.hx",1102,0xf3dbfaa2)
		HX_STACK_ARG(p_flag,"p_flag")
		HX_STACK_LINE(1102)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1102)
		int tmp1 = p_flag;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1102)
		tmp->DepthFunc(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,DepthFunc,(void))

Void GL_obj::CullFace( int p_face){
{
		HX_STACK_FRAME("haxor.graphics.GL","CullFace",0x68936881,"haxor.graphics.GL.CullFace","haxor/graphics/GL.hx",1108,0xf3dbfaa2)
		HX_STACK_ARG(p_face,"p_face")
		HX_STACK_LINE(1108)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1108)
		int tmp1 = p_face;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1108)
		tmp->CullFace(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,CullFace,(void))

Void GL_obj::FrontFace( int p_face){
{
		HX_STACK_FRAME("haxor.graphics.GL","FrontFace",0x99b07094,"haxor.graphics.GL.FrontFace","haxor/graphics/GL.hx",1114,0xf3dbfaa2)
		HX_STACK_ARG(p_face,"p_face")
		HX_STACK_LINE(1114)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1114)
		int tmp1 = p_face;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1114)
		tmp->FrontFace(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,FrontFace,(void))

Void GL_obj::Clear( int p_flag){
{
		HX_STACK_FRAME("haxor.graphics.GL","Clear",0x16a6713b,"haxor.graphics.GL.Clear","haxor/graphics/GL.hx",1124,0xf3dbfaa2)
		HX_STACK_ARG(p_flag,"p_flag")
		HX_STACK_LINE(1124)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1124)
		int tmp1 = p_flag;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1124)
		tmp->Clear(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,Clear,(void))

Void GL_obj::ClearDepth( Float p_value){
{
		HX_STACK_FRAME("haxor.graphics.GL","ClearDepth",0x64c599c8,"haxor.graphics.GL.ClearDepth","haxor/graphics/GL.hx",1130,0xf3dbfaa2)
		HX_STACK_ARG(p_value,"p_value")
		HX_STACK_LINE(1130)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1130)
		Float tmp1 = p_value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1130)
		tmp->ClearDepth(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,ClearDepth,(void))

Void GL_obj::ClearColor( Float p_r,Float p_g,Float p_b,Float p_a){
{
		HX_STACK_FRAME("haxor.graphics.GL","ClearColor",0xd7f81a28,"haxor.graphics.GL.ClearColor","haxor/graphics/GL.hx",1139,0xf3dbfaa2)
		HX_STACK_ARG(p_r,"p_r")
		HX_STACK_ARG(p_g,"p_g")
		HX_STACK_ARG(p_b,"p_b")
		HX_STACK_ARG(p_a,"p_a")
		HX_STACK_LINE(1139)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1139)
		Float tmp1 = p_r;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1139)
		Float tmp2 = p_g;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1139)
		Float tmp3 = p_b;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1139)
		Float tmp4 = p_a;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1139)
		tmp->ClearColor(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,ClearColor,(void))

Void GL_obj::Viewport( int p_x,int p_y,int p_width,int p_height){
{
		HX_STACK_FRAME("haxor.graphics.GL","Viewport",0x5906cd78,"haxor.graphics.GL.Viewport","haxor/graphics/GL.hx",1148,0xf3dbfaa2)
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_ARG(p_width,"p_width")
		HX_STACK_ARG(p_height,"p_height")
		HX_STACK_LINE(1148)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1148)
		int tmp1 = p_x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1148)
		int tmp2 = p_y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1148)
		int tmp3 = p_width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1148)
		int tmp4 = p_height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1148)
		tmp->Viewport(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,Viewport,(void))

Void GL_obj::Scissor( int p_x,int p_y,int p_width,int p_height){
{
		HX_STACK_FRAME("haxor.graphics.GL","Scissor",0x3bb3ef4a,"haxor.graphics.GL.Scissor","haxor/graphics/GL.hx",1157,0xf3dbfaa2)
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_ARG(p_width,"p_width")
		HX_STACK_ARG(p_height,"p_height")
		HX_STACK_LINE(1157)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1157)
		int tmp1 = p_x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1157)
		int tmp2 = p_y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1157)
		int tmp3 = p_width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1157)
		int tmp4 = p_height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1157)
		tmp->Scissor(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,Scissor,(void))

Void GL_obj::ReadPixels( int p_x,int p_y,int p_width,int p_height,int p_format,int p_type,::haxor::io::Buffer p_pixels){
{
		HX_STACK_FRAME("haxor.graphics.GL","ReadPixels",0x3eb73cb5,"haxor.graphics.GL.ReadPixels","haxor/graphics/GL.hx",1169,0xf3dbfaa2)
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_ARG(p_width,"p_width")
		HX_STACK_ARG(p_height,"p_height")
		HX_STACK_ARG(p_format,"p_format")
		HX_STACK_ARG(p_type,"p_type")
		HX_STACK_ARG(p_pixels,"p_pixels")
		HX_STACK_LINE(1169)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1169)
		int tmp1 = p_x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1169)
		int tmp2 = p_y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1169)
		int tmp3 = p_width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1169)
		int tmp4 = p_height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1169)
		int tmp5 = p_format;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1169)
		int tmp6 = p_type;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1169)
		::haxor::io::Buffer tmp7 = p_pixels;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1169)
		tmp->ReadPixels(tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(GL_obj,ReadPixels,(void))

::String GL_obj::GetError( ){
	HX_STACK_FRAME("haxor.graphics.GL","GetError",0x8f625c64,"haxor.graphics.GL.GetError","haxor/graphics/GL.hx",1185,0xf3dbfaa2)
	HX_STACK_LINE(1185)
	::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1185)
	::String tmp1 = tmp->GetError();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1185)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,GetError,return )

int GL_obj::GetErrorCode( ){
	HX_STACK_FRAME("haxor.graphics.GL","GetErrorCode",0x86703bb1,"haxor.graphics.GL.GetErrorCode","haxor/graphics/GL.hx",1191,0xf3dbfaa2)
	HX_STACK_LINE(1191)
	::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1191)
	int tmp1 = tmp->GetErrorCode();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1191)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,GetErrorCode,return )

::String GL_obj::GetErrorString( int p_code){
	HX_STACK_FRAME("haxor.graphics.GL","GetErrorString",0x7fb65c55,"haxor.graphics.GL.GetErrorString","haxor/graphics/GL.hx",1198,0xf3dbfaa2)
	HX_STACK_ARG(p_code,"p_code")
	HX_STACK_LINE(1198)
	::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1198)
	int tmp1 = p_code;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1198)
	::String tmp2 = tmp->GetErrorString(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1198)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,GetErrorString,return )

Void GL_obj::LogError( ){
{
		HX_STACK_FRAME("haxor.graphics.GL","LogError",0x1a9189b6,"haxor.graphics.GL.LogError","haxor/graphics/GL.hx",1204,0xf3dbfaa2)
		HX_STACK_LINE(1204)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1204)
		::String tmp1 = tmp->GetError();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1204)
		Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("GraphicContext.hx","\xd7","\xcc","\x79","\xc4"),196,HX_HCSTRING("haxor.graphics.GraphicContext","\x5e","\x66","\x0c","\x60"),HX_HCSTRING("LogError","\xc4","\xc4","\xe1","\x37"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1204)
		::haxe::Log_obj::trace(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,LogError,(void))

Void GL_obj::Assert( ::String p_log){
{
		HX_STACK_FRAME("haxor.graphics.GL","Assert",0xff57ff58,"haxor.graphics.GL.Assert","haxor/graphics/GL.hx",1210,0xf3dbfaa2)
		HX_STACK_ARG(p_log,"p_log")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,Assert,(void))

Void GL_obj::Flush( ){
{
		HX_STACK_FRAME("haxor.graphics.GL","Flush",0xd0e66272,"haxor.graphics.GL.Flush","haxor/graphics/GL.hx",1224,0xf3dbfaa2)
		HX_STACK_LINE(1224)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1224)
		tmp->Flush();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,Flush,(void))

Void GL_obj::Focus( ){
{
		HX_STACK_FRAME("haxor.graphics.GL","Focus",0xd2d45f86,"haxor.graphics.GL.Focus","haxor/graphics/GL.hx",1229,0xf3dbfaa2)
		HX_STACK_LINE(1229)
		::haxor::platform::graphics::OpenGL tmp = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1229)
		tmp->Focus();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,Focus,(void))


GL_obj::GL_obj()
{
}

bool GL_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"api") ) { if (inCallProp == hx::paccAlways) { outValue = get_api(); return true; } }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"SRGB") ) { outValue = SRGB; return true;  }
		if (HX_FIELD_EQ(inName,"NULL") ) { outValue = _NULL; return true;  }
		if (HX_FIELD_EQ(inName,"m_gl") ) { outValue = m_gl; return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"Clear") ) { outValue = Clear_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Flush") ) { outValue = Flush_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Focus") ) { outValue = Focus_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"Resize") ) { outValue = Resize_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Enable") ) { outValue = Enable_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Assert") ) { outValue = Assert_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"INVALID") ) { outValue = INVALID; return true;  }
		if (HX_FIELD_EQ(inName,"get_api") ) { outValue = get_api_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"BindVAO") ) { outValue = BindVAO_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Disable") ) { outValue = Disable_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Scissor") ) { outValue = Scissor_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"CullFace") ) { outValue = CullFace_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Viewport") ) { outValue = Viewport_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"GetError") ) { outValue = GetError_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"LogError") ) { outValue = LogError_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"CreateVAO") ) { outValue = CreateVAO_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"DeleteVAO") ) { outValue = DeleteVAO_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Uniform1f") ) { outValue = Uniform1f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Uniform2f") ) { outValue = Uniform2f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Uniform3f") ) { outValue = Uniform3f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Uniform4f") ) { outValue = Uniform4f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Uniform1i") ) { outValue = Uniform1i_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Uniform2i") ) { outValue = Uniform2i_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Uniform3i") ) { outValue = Uniform3i_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Uniform4i") ) { outValue = Uniform4i_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"BlendFunc") ) { outValue = BlendFunc_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"DepthMask") ) { outValue = DepthMask_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"DepthFunc") ) { outValue = DepthFunc_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"FrontFace") ) { outValue = FrontFace_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"SRGB_ALPHA") ) { outValue = SRGB_ALPHA; return true;  }
		if (HX_FIELD_EQ(inName,"HALF_FLOAT") ) { outValue = HALF_FLOAT; return true;  }
		if (HX_FIELD_EQ(inName,"Initialize") ) { outValue = Initialize_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"BindBuffer") ) { outValue = BindBuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"BufferData") ) { outValue = BufferData_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"DrawArrays") ) { outValue = DrawArrays_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"UseProgram") ) { outValue = UseProgram_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"TexImage2D") ) { outValue = TexImage2D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Uniform1fv") ) { outValue = Uniform1fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Uniform2fv") ) { outValue = Uniform2fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Uniform3fv") ) { outValue = Uniform3fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Uniform4fv") ) { outValue = Uniform4fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Uniform1iv") ) { outValue = Uniform1iv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Uniform2iv") ) { outValue = Uniform2iv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Uniform3iv") ) { outValue = Uniform3iv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Uniform4iv") ) { outValue = Uniform4iv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"ClearDepth") ) { outValue = ClearDepth_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"ClearColor") ) { outValue = ClearColor_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"ReadPixels") ) { outValue = ReadPixels_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"VAO_ENABLED") ) { outValue = VAO_ENABLED; return true;  }
		if (HX_FIELD_EQ(inName,"LinkProgram") ) { outValue = LinkProgram_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"BindTexture") ) { outValue = BindTexture_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"PixelStorei") ) { outValue = PixelStorei_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"TEXTURE_SRGB") ) { outValue = TEXTURE_SRGB; return true;  }
		if (HX_FIELD_EQ(inName,"SRGB8_ALPHA8") ) { outValue = SRGB8_ALPHA8; return true;  }
		if (HX_FIELD_EQ(inName,"TEXTURE_HALF") ) { outValue = TEXTURE_HALF; return true;  }
		if (HX_FIELD_EQ(inName,"BONE_TEXTURE") ) { outValue = BONE_TEXTURE; return true;  }
		if (HX_FIELD_EQ(inName,"VS_INT_HIGHP") ) { outValue = VS_INT_HIGHP; return true;  }
		if (HX_FIELD_EQ(inName,"FS_INT_HIGHP") ) { outValue = FS_INT_HIGHP; return true;  }
		if (HX_FIELD_EQ(inName,"CreateBuffer") ) { outValue = CreateBuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"DrawElements") ) { outValue = DrawElements_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"DeleteBuffer") ) { outValue = DeleteBuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"CreateShader") ) { outValue = CreateShader_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"DetachShader") ) { outValue = DetachShader_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"DeleteShader") ) { outValue = DeleteShader_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"ShaderSource") ) { outValue = ShaderSource_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"AttachShader") ) { outValue = AttachShader_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"TexStorage2D") ) { outValue = TexStorage2D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"GetErrorCode") ) { outValue = GetErrorCode_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"TEXTURE_FLOAT") ) { outValue = TEXTURE_FLOAT; return true;  }
		if (HX_FIELD_EQ(inName,"BufferSubData") ) { outValue = BufferSubData_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"CompileShader") ) { outValue = CompileShader_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"CreateProgram") ) { outValue = CreateProgram_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"DeleteProgram") ) { outValue = DeleteProgram_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"ActiveTexture") ) { outValue = ActiveTexture_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"CreateTexture") ) { outValue = CreateTexture_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"DeleteTexture") ) { outValue = DeleteTexture_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"TexSubImage2D") ) { outValue = TexSubImage2D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"TexParameterf") ) { outValue = TexParameterf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"TexParameteri") ) { outValue = TexParameteri_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"VS_FLOAT_HIGHP") ) { outValue = VS_FLOAT_HIGHP; return true;  }
		if (HX_FIELD_EQ(inName,"FS_FLOAT_HIGHP") ) { outValue = FS_FLOAT_HIGHP; return true;  }
		if (HX_FIELD_EQ(inName,"VertexAttrib1f") ) { outValue = VertexAttrib1f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"VertexAttrib2f") ) { outValue = VertexAttrib2f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"VertexAttrib3f") ) { outValue = VertexAttrib3f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"VertexAttrib4f") ) { outValue = VertexAttrib4f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"GenerateMipmap") ) { outValue = GenerateMipmap_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"GetErrorString") ) { outValue = GetErrorString_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"BindFramebuffer") ) { outValue = BindFramebuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"TexImage2DAlloc") ) { outValue = TexImage2DAlloc_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"GetShaderInfoLog") ) { outValue = GetShaderInfoLog_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"BindRenderbuffer") ) { outValue = BindRenderbuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"UniformMatrix2fv") ) { outValue = UniformMatrix2fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"UniformMatrix3fv") ) { outValue = UniformMatrix3fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"UniformMatrix4fv") ) { outValue = UniformMatrix4fv_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"MAX_UNIFORM_BONES") ) { if (inCallProp == hx::paccAlways) { outValue = get_MAX_UNIFORM_BONES(); return true; } }
		if (HX_FIELD_EQ(inName,"GetAttribLocation") ) { outValue = GetAttribLocation_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"GetProgramInfoLog") ) { outValue = GetProgramInfoLog_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"CreateFramebuffer") ) { outValue = CreateFramebuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"DeleteFramebuffer") ) { outValue = DeleteFramebuffer_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"TEXTURE_ANISOTROPY") ) { outValue = TEXTURE_ANISOTROPY; return true;  }
		if (HX_FIELD_EQ(inName,"MAX_ACTIVE_TEXTURE") ) { outValue = MAX_ACTIVE_TEXTURE; return true;  }
		if (HX_FIELD_EQ(inName,"EnableVertexAttrib") ) { outValue = EnableVertexAttrib_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"GetShaderParameter") ) { outValue = GetShaderParameter_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"BindAttribLocation") ) { outValue = BindAttribLocation_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"GetUniformLocation") ) { outValue = GetUniformLocation_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"CreateRenderbuffer") ) { outValue = CreateRenderbuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"DeleteRenderbuffer") ) { outValue = DeleteRenderbuffer_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"TEXTURE_HALF_LINEAR") ) { outValue = TEXTURE_HALF_LINEAR; return true;  }
		if (HX_FIELD_EQ(inName,"MAX_VERTEX_TEXTURES") ) { outValue = MAX_VERTEX_TEXTURES; return true;  }
		if (HX_FIELD_EQ(inName,"DisableVertexAttrib") ) { outValue = DisableVertexAttrib_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"VertexAttribPointer") ) { outValue = VertexAttribPointer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"GetProgramParameter") ) { outValue = GetProgramParameter_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"RenderbufferStorage") ) { outValue = RenderbufferStorage_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"TEXTURE_FLOAT_LINEAR") ) { outValue = TEXTURE_FLOAT_LINEAR; return true;  }
		if (HX_FIELD_EQ(inName,"MAX_COMBINED_TEXTURE") ) { outValue = MAX_COMBINED_TEXTURE; return true;  }
		if (HX_FIELD_EQ(inName,"FramebufferTexture2D") ) { outValue = FramebufferTexture2D_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"TEXTURE_DEPTH_ENABLED") ) { outValue = TEXTURE_DEPTH_ENABLED; return true;  }
		if (HX_FIELD_EQ(inName,"get_MAX_UNIFORM_BONES") ) { outValue = get_MAX_UNIFORM_BONES_dyn(); return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"MAX_TEXTURE_ANISOTROPY") ) { outValue = MAX_TEXTURE_ANISOTROPY; return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"FramebufferRenderbuffer") ) { outValue = FramebufferRenderbuffer_dyn(); return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"MAX_VERTEX_UNIFORM_LENGTH") ) { outValue = MAX_VERTEX_UNIFORM_LENGTH; return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"TEXTURE_ANISOTROPY_ENABLED") ) { outValue = TEXTURE_ANISOTROPY_ENABLED; return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"MAX_FRAGMENT_UNIFORM_LENGTH") ) { outValue = MAX_FRAGMENT_UNIFORM_LENGTH; return true;  }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING") ) { outValue = FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &GL_obj::ACTIVE_ATTRIBUTES,HX_HCSTRING("ACTIVE_ATTRIBUTES","\xf0","\xe5","\xc7","\x4a")},
	{hx::fsInt,(void *) &GL_obj::ACTIVE_TEXTURE,HX_HCSTRING("ACTIVE_TEXTURE","\x02","\x1a","\x22","\xce")},
	{hx::fsInt,(void *) &GL_obj::ACTIVE_UNIFORMS,HX_HCSTRING("ACTIVE_UNIFORMS","\x98","\x7d","\x3a","\x2c")},
	{hx::fsInt,(void *) &GL_obj::ALIASED_LINE_WIDTH_RANGE,HX_HCSTRING("ALIASED_LINE_WIDTH_RANGE","\xe9","\x22","\xd5","\x8a")},
	{hx::fsInt,(void *) &GL_obj::ALIASED_POINT_SIZE_RANGE,HX_HCSTRING("ALIASED_POINT_SIZE_RANGE","\xfe","\xf6","\xa4","\x7b")},
	{hx::fsInt,(void *) &GL_obj::ALPHA,HX_HCSTRING("ALPHA","\x3e","\xdf","\x84","\x9f")},
	{hx::fsInt,(void *) &GL_obj::ALPHA_BITS,HX_HCSTRING("ALPHA_BITS","\xe7","\xfe","\x7b","\xe0")},
	{hx::fsInt,(void *) &GL_obj::ALWAYS,HX_HCSTRING("ALWAYS","\xcf","\xba","\x59","\xf9")},
	{hx::fsInt,(void *) &GL_obj::ARRAY_BUFFER,HX_HCSTRING("ARRAY_BUFFER","\x46","\x66","\x17","\xf4")},
	{hx::fsInt,(void *) &GL_obj::ARRAY_BUFFER_BINDING,HX_HCSTRING("ARRAY_BUFFER_BINDING","\xec","\xd4","\xa9","\x79")},
	{hx::fsInt,(void *) &GL_obj::ATTACHED_SHADERS,HX_HCSTRING("ATTACHED_SHADERS","\x73","\xd2","\x76","\x75")},
	{hx::fsInt,(void *) &GL_obj::BACK,HX_HCSTRING("BACK","\x27","\xa2","\xd1","\x2b")},
	{hx::fsInt,(void *) &GL_obj::BLEND,HX_HCSTRING("BLEND","\x31","\x20","\xe3","\x32")},
	{hx::fsInt,(void *) &GL_obj::BLEND_COLOR,HX_HCSTRING("BLEND_COLOR","\x75","\xcb","\xc8","\x67")},
	{hx::fsInt,(void *) &GL_obj::BLEND_DST_ALPHA,HX_HCSTRING("BLEND_DST_ALPHA","\x56","\x25","\x32","\x74")},
	{hx::fsInt,(void *) &GL_obj::BLEND_DST_RGB,HX_HCSTRING("BLEND_DST_RGB","\x05","\x87","\xf5","\xec")},
	{hx::fsInt,(void *) &GL_obj::BLEND_EQUATION,HX_HCSTRING("BLEND_EQUATION","\x9a","\x14","\x92","\x71")},
	{hx::fsInt,(void *) &GL_obj::BLEND_EQUATION_ALPHA,HX_HCSTRING("BLEND_EQUATION_ALPHA","\x99","\xaa","\xae","\x37")},
	{hx::fsInt,(void *) &GL_obj::BLEND_EQUATION_RGB,HX_HCSTRING("BLEND_EQUATION_RGB","\x88","\x25","\xeb","\x90")},
	{hx::fsInt,(void *) &GL_obj::BLEND_SRC_ALPHA,HX_HCSTRING("BLEND_SRC_ALPHA","\x75","\xf7","\x37","\xd4")},
	{hx::fsInt,(void *) &GL_obj::BLEND_SRC_RGB,HX_HCSTRING("BLEND_SRC_RGB","\x64","\x43","\x8c","\x2c")},
	{hx::fsInt,(void *) &GL_obj::BLUE_BITS,HX_HCSTRING("BLUE_BITS","\x0b","\x26","\x60","\xa1")},
	{hx::fsInt,(void *) &GL_obj::BOOL,HX_HCSTRING("BOOL","\x2a","\x4c","\xdc","\x2b")},
	{hx::fsInt,(void *) &GL_obj::BOOL_VEC2,HX_HCSTRING("BOOL_VEC2","\xf3","\x66","\x2b","\x2d")},
	{hx::fsInt,(void *) &GL_obj::BOOL_VEC3,HX_HCSTRING("BOOL_VEC3","\xf4","\x66","\x2b","\x2d")},
	{hx::fsInt,(void *) &GL_obj::BOOL_VEC4,HX_HCSTRING("BOOL_VEC4","\xf5","\x66","\x2b","\x2d")},
	{hx::fsInt,(void *) &GL_obj::BROWSER_DEFAULT_WEBGL,HX_HCSTRING("BROWSER_DEFAULT_WEBGL","\x04","\x04","\x92","\xc0")},
	{hx::fsInt,(void *) &GL_obj::BUFFER_SIZE,HX_HCSTRING("BUFFER_SIZE","\xa0","\x7b","\x91","\x4c")},
	{hx::fsInt,(void *) &GL_obj::BUFFER_USAGE,HX_HCSTRING("BUFFER_USAGE","\x42","\x05","\x11","\xe0")},
	{hx::fsInt,(void *) &GL_obj::BYTE,HX_HCSTRING("BYTE","\x08","\xe7","\xe3","\x2b")},
	{hx::fsInt,(void *) &GL_obj::CCW,HX_HCSTRING("CCW","\xb7","\x11","\x33","\x00")},
	{hx::fsInt,(void *) &GL_obj::CLAMP_TO_EDGE,HX_HCSTRING("CLAMP_TO_EDGE","\x1d","\xfc","\x5a","\x96")},
	{hx::fsInt,(void *) &GL_obj::COLOR_ATTACHMENT0,HX_HCSTRING("COLOR_ATTACHMENT0","\xb1","\x9a","\xfe","\x86")},
	{hx::fsInt,(void *) &GL_obj::COLOR_BUFFER_BIT,HX_HCSTRING("COLOR_BUFFER_BIT","\x6a","\xf7","\x74","\xfb")},
	{hx::fsInt,(void *) &GL_obj::COLOR_CLEAR_VALUE,HX_HCSTRING("COLOR_CLEAR_VALUE","\x83","\xa7","\x2e","\xf8")},
	{hx::fsInt,(void *) &GL_obj::COLOR_WRITEMASK,HX_HCSTRING("COLOR_WRITEMASK","\xef","\xef","\xf9","\x14")},
	{hx::fsInt,(void *) &GL_obj::COMPILE_STATUS,HX_HCSTRING("COMPILE_STATUS","\xde","\xcb","\x4e","\x8c")},
	{hx::fsInt,(void *) &GL_obj::COMPRESSED_TEXTURE_FORMATS,HX_HCSTRING("COMPRESSED_TEXTURE_FORMATS","\x7a","\x13","\xe3","\x12")},
	{hx::fsInt,(void *) &GL_obj::CONSTANT_ALPHA,HX_HCSTRING("CONSTANT_ALPHA","\xe3","\x9a","\xc4","\x9f")},
	{hx::fsInt,(void *) &GL_obj::CONSTANT_COLOR,HX_HCSTRING("CONSTANT_COLOR","\xe8","\x64","\x8a","\xc8")},
	{hx::fsInt,(void *) &GL_obj::CONTEXT_LOST_WEBGL,HX_HCSTRING("CONTEXT_LOST_WEBGL","\x6e","\x67","\x71","\x45")},
	{hx::fsInt,(void *) &GL_obj::CULL_FACE,HX_HCSTRING("CULL_FACE","\x8a","\xa5","\xf4","\xcf")},
	{hx::fsInt,(void *) &GL_obj::CULL_FACE_MODE,HX_HCSTRING("CULL_FACE_MODE","\x78","\xbd","\x87","\xd1")},
	{hx::fsInt,(void *) &GL_obj::CURRENT_PROGRAM,HX_HCSTRING("CURRENT_PROGRAM","\xfe","\x28","\xc0","\x3f")},
	{hx::fsInt,(void *) &GL_obj::CURRENT_VERTEX_ATTRIB,HX_HCSTRING("CURRENT_VERTEX_ATTRIB","\x1f","\x8c","\x2f","\xab")},
	{hx::fsInt,(void *) &GL_obj::CW,HX_HCSTRING("CW","\xb4","\x3a","\x00","\x00")},
	{hx::fsInt,(void *) &GL_obj::DECR,HX_HCSTRING("DECR","\x70","\x18","\x27","\x2d")},
	{hx::fsInt,(void *) &GL_obj::DECR_WRAP,HX_HCSTRING("DECR_WRAP","\x39","\x6f","\xeb","\x0a")},
	{hx::fsInt,(void *) &GL_obj::DELETE_STATUS,HX_HCSTRING("DELETE_STATUS","\x06","\xe4","\x98","\x1e")},
	{hx::fsInt,(void *) &GL_obj::DEPTH_ATTACHMENT,HX_HCSTRING("DEPTH_ATTACHMENT","\xff","\x54","\xcd","\xe9")},
	{hx::fsInt,(void *) &GL_obj::DEPTH_BITS,HX_HCSTRING("DEPTH_BITS","\x22","\x9f","\x42","\x1c")},
	{hx::fsInt,(void *) &GL_obj::DEPTH_BUFFER_BIT,HX_HCSTRING("DEPTH_BUFFER_BIT","\xca","\x5b","\xce","\xc6")},
	{hx::fsInt,(void *) &GL_obj::DEPTH_CLEAR_VALUE,HX_HCSTRING("DEPTH_CLEAR_VALUE","\x23","\x17","\x0d","\x1b")},
	{hx::fsInt,(void *) &GL_obj::DEPTH_COMPONENT,HX_HCSTRING("DEPTH_COMPONENT","\x01","\x1f","\x62","\x0f")},
	{hx::fsInt,(void *) &GL_obj::DEPTH_COMPONENT16,HX_HCSTRING("DEPTH_COMPONENT16","\x26","\xcc","\x68","\x43")},
	{hx::fsInt,(void *) &GL_obj::DEPTH_FUNC,HX_HCSTRING("DEPTH_FUNC","\x60","\x8f","\xf0","\x1e")},
	{hx::fsInt,(void *) &GL_obj::DEPTH_RANGE,HX_HCSTRING("DEPTH_RANGE","\x01","\x9a","\x23","\xcf")},
	{hx::fsInt,(void *) &GL_obj::DEPTH_STENCIL,HX_HCSTRING("DEPTH_STENCIL","\x40","\x2f","\x20","\x2b")},
	{hx::fsInt,(void *) &GL_obj::DEPTH_STENCIL_ATTACHMENT,HX_HCSTRING("DEPTH_STENCIL_ATTACHMENT","\xc2","\xe1","\xe1","\x9f")},
	{hx::fsInt,(void *) &GL_obj::DEPTH_TEST,HX_HCSTRING("DEPTH_TEST","\x6e","\x6c","\x25","\x28")},
	{hx::fsInt,(void *) &GL_obj::DEPTH_WRITEMASK,HX_HCSTRING("DEPTH_WRITEMASK","\x8f","\x37","\x3f","\x66")},
	{hx::fsInt,(void *) &GL_obj::DITHER,HX_HCSTRING("DITHER","\xe6","\xac","\x41","\x70")},
	{hx::fsInt,(void *) &GL_obj::DONT_CARE,HX_HCSTRING("DONT_CARE","\x7f","\x9b","\xc1","\xcf")},
	{hx::fsInt,(void *) &GL_obj::DST_ALPHA,HX_HCSTRING("DST_ALPHA","\x24","\x02","\xf2","\xd3")},
	{hx::fsInt,(void *) &GL_obj::DST_COLOR,HX_HCSTRING("DST_COLOR","\x29","\xcc","\xb7","\xfc")},
	{hx::fsInt,(void *) &GL_obj::DYNAMIC_DRAW,HX_HCSTRING("DYNAMIC_DRAW","\x24","\x04","\x1f","\x24")},
	{hx::fsInt,(void *) &GL_obj::ELEMENT_ARRAY_BUFFER,HX_HCSTRING("ELEMENT_ARRAY_BUFFER","\x09","\x05","\x53","\x3d")},
	{hx::fsInt,(void *) &GL_obj::ELEMENT_ARRAY_BUFFER_BINDING,HX_HCSTRING("ELEMENT_ARRAY_BUFFER_BINDING","\xaf","\x6e","\x96","\xa2")},
	{hx::fsInt,(void *) &GL_obj::EQUAL,HX_HCSTRING("EQUAL","\x94","\x07","\x71","\xf0")},
	{hx::fsInt,(void *) &GL_obj::FASTEST,HX_HCSTRING("FASTEST","\x0a","\xa3","\x0d","\x5e")},
	{hx::fsInt,(void *) &GL_obj::FLOAT,HX_HCSTRING("FLOAT","\x7c","\xfd","\x84","\x80")},
	{hx::fsInt,(void *) &GL_obj::FLOAT_MAT2,HX_HCSTRING("FLOAT_MAT2","\x95","\xc6","\xae","\xe5")},
	{hx::fsInt,(void *) &GL_obj::FLOAT_MAT3,HX_HCSTRING("FLOAT_MAT3","\x96","\xc6","\xae","\xe5")},
	{hx::fsInt,(void *) &GL_obj::FLOAT_MAT4,HX_HCSTRING("FLOAT_MAT4","\x97","\xc6","\xae","\xe5")},
	{hx::fsInt,(void *) &GL_obj::FLOAT_VEC2,HX_HCSTRING("FLOAT_VEC2","\x61","\xac","\xa4","\xeb")},
	{hx::fsInt,(void *) &GL_obj::FLOAT_VEC3,HX_HCSTRING("FLOAT_VEC3","\x62","\xac","\xa4","\xeb")},
	{hx::fsInt,(void *) &GL_obj::FLOAT_VEC4,HX_HCSTRING("FLOAT_VEC4","\x63","\xac","\xa4","\xeb")},
	{hx::fsInt,(void *) &GL_obj::FRAGMENT_SHADER,HX_HCSTRING("FRAGMENT_SHADER","\xf4","\x26","\x78","\xe9")},
	{hx::fsInt,(void *) &GL_obj::FRAMEBUFFER,HX_HCSTRING("FRAMEBUFFER","\xcd","\x20","\x84","\x50")},
	{hx::fsInt,(void *) &GL_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_NAME,HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_OBJECT_NAME","\xe1","\xa1","\x3a","\x4c")},
	{hx::fsInt,(void *) &GL_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE,HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE","\x50","\x22","\x44","\x50")},
	{hx::fsInt,(void *) &GL_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE,HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE","\xdc","\x4c","\x39","\x8a")},
	{hx::fsInt,(void *) &GL_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL,HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL","\xf6","\x9b","\xba","\x81")},
	{hx::fsInt,(void *) &GL_obj::FRAMEBUFFER_BINDING,HX_HCSTRING("FRAMEBUFFER_BINDING","\x73","\xee","\xae","\xc5")},
	{hx::fsInt,(void *) &GL_obj::FRAMEBUFFER_COMPLETE,HX_HCSTRING("FRAMEBUFFER_COMPLETE","\xab","\x65","\x7d","\xea")},
	{hx::fsInt,(void *) &GL_obj::FRAMEBUFFER_INCOMPLETE_ATTACHMENT,HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_ATTACHMENT","\xf2","\xcf","\xb7","\x1d")},
	{hx::fsInt,(void *) &GL_obj::FRAMEBUFFER_INCOMPLETE_DIMENSIONS,HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_DIMENSIONS","\x5c","\x86","\xe4","\x1c")},
	{hx::fsInt,(void *) &GL_obj::FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT,HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT","\x8b","\x0a","\xcd","\x77")},
	{hx::fsInt,(void *) &GL_obj::FRAMEBUFFER_UNSUPPORTED,HX_HCSTRING("FRAMEBUFFER_UNSUPPORTED","\xe3","\xa6","\x4e","\xc8")},
	{hx::fsInt,(void *) &GL_obj::FRONT,HX_HCSTRING("FRONT","\x89","\x50","\x7c","\x84")},
	{hx::fsInt,(void *) &GL_obj::FRONT_AND_BACK,HX_HCSTRING("FRONT_AND_BACK","\xa5","\x3d","\x6a","\xc1")},
	{hx::fsInt,(void *) &GL_obj::FRONT_FACE,HX_HCSTRING("FRONT_FACE","\x53","\xb7","\x4d","\xef")},
	{hx::fsInt,(void *) &GL_obj::FUNC_ADD,HX_HCSTRING("FUNC_ADD","\x46","\x78","\x17","\x75")},
	{hx::fsInt,(void *) &GL_obj::FUNC_REVERSE_SUBTRACT,HX_HCSTRING("FUNC_REVERSE_SUBTRACT","\xcc","\x8d","\xef","\xf3")},
	{hx::fsInt,(void *) &GL_obj::FUNC_SUBTRACT,HX_HCSTRING("FUNC_SUBTRACT","\xaf","\xc0","\xa0","\x17")},
	{hx::fsInt,(void *) &GL_obj::GENERATE_MIPMAP_HINT,HX_HCSTRING("GENERATE_MIPMAP_HINT","\x94","\xd3","\xd5","\x83")},
	{hx::fsInt,(void *) &GL_obj::GEQUAL,HX_HCSTRING("GEQUAL","\xed","\xa5","\xc7","\x53")},
	{hx::fsInt,(void *) &GL_obj::GREATER,HX_HCSTRING("GREATER","\xda","\x64","\x94","\x37")},
	{hx::fsInt,(void *) &GL_obj::GREEN_BITS,HX_HCSTRING("GREEN_BITS","\x62","\xa9","\x9b","\x94")},
	{hx::fsInt,(void *) &GL_obj::HIGH_FLOAT,HX_HCSTRING("HIGH_FLOAT","\x9f","\xf9","\x3b","\x47")},
	{hx::fsInt,(void *) &GL_obj::HIGH_INT,HX_HCSTRING("HIGH_INT","\x32","\x46","\x02","\x09")},
	{hx::fsInt,(void *) &GL_obj::INCR,HX_HCSTRING("INCR","\xd4","\xfd","\x7b","\x30")},
	{hx::fsInt,(void *) &GL_obj::INCR_WRAP,HX_HCSTRING("INCR_WRAP","\x55","\x7f","\x68","\x2c")},
	{hx::fsInt,(void *) &GL_obj::INT,HX_HCSTRING("INT","\xcf","\xa8","\x37","\x00")},
	{hx::fsInt,(void *) &GL_obj::INT_VEC2,HX_HCSTRING("INT_VEC2","\x2e","\x14","\x05","\x7d")},
	{hx::fsInt,(void *) &GL_obj::INT_VEC3,HX_HCSTRING("INT_VEC3","\x2f","\x14","\x05","\x7d")},
	{hx::fsInt,(void *) &GL_obj::INT_VEC4,HX_HCSTRING("INT_VEC4","\x30","\x14","\x05","\x7d")},
	{hx::fsInt,(void *) &GL_obj::INVALID_ENUM,HX_HCSTRING("INVALID_ENUM","\xa9","\x74","\x70","\x13")},
	{hx::fsInt,(void *) &GL_obj::INVALID_FRAMEBUFFER_OPERATION,HX_HCSTRING("INVALID_FRAMEBUFFER_OPERATION","\x2d","\xd4","\xc5","\x43")},
	{hx::fsInt,(void *) &GL_obj::INVALID_OPERATION,HX_HCSTRING("INVALID_OPERATION","\x5f","\xb1","\xc8","\x29")},
	{hx::fsInt,(void *) &GL_obj::INVALID_VALUE,HX_HCSTRING("INVALID_VALUE","\xa9","\xe8","\x26","\xb0")},
	{hx::fsInt,(void *) &GL_obj::INVERT,HX_HCSTRING("INVERT","\x16","\x93","\x5b","\x52")},
	{hx::fsInt,(void *) &GL_obj::KEEP,HX_HCSTRING("KEEP","\x85","\x98","\xc7","\x31")},
	{hx::fsInt,(void *) &GL_obj::LEQUAL,HX_HCSTRING("LEQUAL","\xc8","\x73","\x90","\x53")},
	{hx::fsInt,(void *) &GL_obj::LESS,HX_HCSTRING("LESS","\x59","\xdb","\x70","\x32")},
	{hx::fsInt,(void *) &GL_obj::LINEAR,HX_HCSTRING("LINEAR","\xe5","\xfd","\x22","\x9f")},
	{hx::fsInt,(void *) &GL_obj::LINEAR_MIPMAP_LINEAR,HX_HCSTRING("LINEAR_MIPMAP_LINEAR","\xe2","\x8b","\xf8","\x99")},
	{hx::fsInt,(void *) &GL_obj::LINEAR_MIPMAP_NEAREST,HX_HCSTRING("LINEAR_MIPMAP_NEAREST","\xa1","\x9b","\xa4","\x65")},
	{hx::fsInt,(void *) &GL_obj::LINES,HX_HCSTRING("LINES","\xdf","\x15","\xf0","\xf2")},
	{hx::fsInt,(void *) &GL_obj::LINE_LOOP,HX_HCSTRING("LINE_LOOP","\xcf","\x55","\xc1","\x16")},
	{hx::fsInt,(void *) &GL_obj::LINE_STRIP,HX_HCSTRING("LINE_STRIP","\xed","\x20","\x88","\xdd")},
	{hx::fsInt,(void *) &GL_obj::LINE_WIDTH,HX_HCSTRING("LINE_WIDTH","\x1b","\x84","\xd2","\x23")},
	{hx::fsInt,(void *) &GL_obj::LINK_STATUS,HX_HCSTRING("LINK_STATUS","\x17","\x18","\x8f","\x45")},
	{hx::fsInt,(void *) &GL_obj::LOW_FLOAT,HX_HCSTRING("LOW_FLOAT","\x31","\x04","\x74","\xe4")},
	{hx::fsInt,(void *) &GL_obj::LOW_INT,HX_HCSTRING("LOW_INT","\x44","\x28","\x70","\x45")},
	{hx::fsInt,(void *) &GL_obj::LUMINANCE,HX_HCSTRING("LUMINANCE","\xd8","\xa7","\xe0","\x63")},
	{hx::fsInt,(void *) &GL_obj::LUMINANCE_ALPHA,HX_HCSTRING("LUMINANCE_ALPHA","\x57","\x40","\xe0","\xbd")},
	{hx::fsInt,(void *) &GL_obj::MAX_COMBINED_TEXTURE_IMAGE_UNITS,HX_HCSTRING("MAX_COMBINED_TEXTURE_IMAGE_UNITS","\xa8","\xd1","\xa6","\x77")},
	{hx::fsInt,(void *) &GL_obj::MAX_CUBE_MAP_TEXTURE_SIZE,HX_HCSTRING("MAX_CUBE_MAP_TEXTURE_SIZE","\x77","\xb9","\x24","\x9d")},
	{hx::fsInt,(void *) &GL_obj::MAX_FRAGMENT_UNIFORM_VECTORS,HX_HCSTRING("MAX_FRAGMENT_UNIFORM_VECTORS","\x71","\x49","\xf5","\x0a")},
	{hx::fsInt,(void *) &GL_obj::MAX_RENDERBUFFER_SIZE,HX_HCSTRING("MAX_RENDERBUFFER_SIZE","\x4f","\xd4","\x3d","\x65")},
	{hx::fsInt,(void *) &GL_obj::MAX_TEXTURE_IMAGE_UNITS,HX_HCSTRING("MAX_TEXTURE_IMAGE_UNITS","\xcc","\x6c","\x61","\x54")},
	{hx::fsInt,(void *) &GL_obj::MAX_TEXTURE_SIZE,HX_HCSTRING("MAX_TEXTURE_SIZE","\xe0","\x0b","\x5b","\xfb")},
	{hx::fsInt,(void *) &GL_obj::MAX_VARYING_VECTORS,HX_HCSTRING("MAX_VARYING_VECTORS","\x06","\xb9","\xf7","\x37")},
	{hx::fsInt,(void *) &GL_obj::MAX_VERTEX_ATTRIBS,HX_HCSTRING("MAX_VERTEX_ATTRIBS","\x49","\xc9","\x15","\x5f")},
	{hx::fsInt,(void *) &GL_obj::MAX_VERTEX_TEXTURE_IMAGE_UNITS,HX_HCSTRING("MAX_VERTEX_TEXTURE_IMAGE_UNITS","\xc7","\x90","\x95","\x2b")},
	{hx::fsInt,(void *) &GL_obj::MAX_VERTEX_UNIFORM_VECTORS,HX_HCSTRING("MAX_VERTEX_UNIFORM_VECTORS","\x45","\x6c","\x16","\x5a")},
	{hx::fsInt,(void *) &GL_obj::MAX_VIEWPORT_DIMS,HX_HCSTRING("MAX_VIEWPORT_DIMS","\xa9","\x2d","\xfb","\x08")},
	{hx::fsInt,(void *) &GL_obj::MEDIUM_FLOAT,HX_HCSTRING("MEDIUM_FLOAT","\xf2","\x8a","\x46","\xb9")},
	{hx::fsInt,(void *) &GL_obj::MEDIUM_INT,HX_HCSTRING("MEDIUM_INT","\xc5","\xcc","\xaf","\x4f")},
	{hx::fsInt,(void *) &GL_obj::MIRRORED_REPEAT,HX_HCSTRING("MIRRORED_REPEAT","\x5c","\x94","\x80","\x4a")},
	{hx::fsInt,(void *) &GL_obj::NEAREST,HX_HCSTRING("NEAREST","\x3e","\xec","\x9d","\xe5")},
	{hx::fsInt,(void *) &GL_obj::NEAREST_MIPMAP_LINEAR,HX_HCSTRING("NEAREST_MIPMAP_LINEAR","\xfb","\x83","\xf2","\x3b")},
	{hx::fsInt,(void *) &GL_obj::NEAREST_MIPMAP_NEAREST,HX_HCSTRING("NEAREST_MIPMAP_NEAREST","\x68","\xb9","\x63","\x7e")},
	{hx::fsInt,(void *) &GL_obj::NEVER,HX_HCSTRING("NEVER","\x6c","\x76","\x1e","\x17")},
	{hx::fsInt,(void *) &GL_obj::NICEST,HX_HCSTRING("NICEST","\x7e","\x6d","\x94","\x64")},
	{hx::fsInt,(void *) &GL_obj::NONE,HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")},
	{hx::fsInt,(void *) &GL_obj::NOTEQUAL,HX_HCSTRING("NOTEQUAL","\xc1","\xc1","\xe9","\xc8")},
	{hx::fsInt,(void *) &GL_obj::NO_ERROR_GL,HX_HCSTRING("NO_ERROR_GL","\x9a","\xac","\x35","\x1b")},
	{hx::fsInt,(void *) &GL_obj::ONE,HX_HCSTRING("ONE","\x46","\x36","\x3c","\x00")},
	{hx::fsInt,(void *) &GL_obj::ONE_MINUS_CONSTANT_ALPHA,HX_HCSTRING("ONE_MINUS_CONSTANT_ALPHA","\x0b","\x6f","\x21","\xde")},
	{hx::fsInt,(void *) &GL_obj::ONE_MINUS_CONSTANT_COLOR,HX_HCSTRING("ONE_MINUS_CONSTANT_COLOR","\x10","\x39","\xe7","\x06")},
	{hx::fsInt,(void *) &GL_obj::ONE_MINUS_DST_ALPHA,HX_HCSTRING("ONE_MINUS_DST_ALPHA","\xfc","\x9e","\x15","\xc0")},
	{hx::fsInt,(void *) &GL_obj::ONE_MINUS_DST_COLOR,HX_HCSTRING("ONE_MINUS_DST_COLOR","\x01","\x69","\xdb","\xe8")},
	{hx::fsInt,(void *) &GL_obj::ONE_MINUS_SRC_ALPHA,HX_HCSTRING("ONE_MINUS_SRC_ALPHA","\x1b","\x71","\x1b","\x20")},
	{hx::fsInt,(void *) &GL_obj::ONE_MINUS_SRC_COLOR,HX_HCSTRING("ONE_MINUS_SRC_COLOR","\x20","\x3b","\xe1","\x48")},
	{hx::fsInt,(void *) &GL_obj::OUT_OF_MEMORY,HX_HCSTRING("OUT_OF_MEMORY","\x18","\xf2","\x97","\xe1")},
	{hx::fsInt,(void *) &GL_obj::PACK_ALIGNMENT,HX_HCSTRING("PACK_ALIGNMENT","\x9d","\xd6","\x85","\xc3")},
	{hx::fsInt,(void *) &GL_obj::POINTS,HX_HCSTRING("POINTS","\x23","\xbe","\xb0","\xa9")},
	{hx::fsInt,(void *) &GL_obj::POLYGON_OFFSET_FACTOR,HX_HCSTRING("POLYGON_OFFSET_FACTOR","\x56","\x6b","\x12","\x2a")},
	{hx::fsInt,(void *) &GL_obj::POLYGON_OFFSET_FILL,HX_HCSTRING("POLYGON_OFFSET_FILL","\x4a","\x3d","\x32","\xac")},
	{hx::fsInt,(void *) &GL_obj::POLYGON_OFFSET_UNITS,HX_HCSTRING("POLYGON_OFFSET_UNITS","\xa8","\xe8","\x11","\xa6")},
	{hx::fsInt,(void *) &GL_obj::RED_BITS,HX_HCSTRING("RED_BITS","\x14","\xf8","\x9e","\x96")},
	{hx::fsInt,(void *) &GL_obj::RENDERBUFFER,HX_HCSTRING("RENDERBUFFER","\xd6","\xa4","\xa4","\xa9")},
	{hx::fsInt,(void *) &GL_obj::RENDERBUFFER_ALPHA_SIZE,HX_HCSTRING("RENDERBUFFER_ALPHA_SIZE","\xab","\xf0","\x5d","\x87")},
	{hx::fsInt,(void *) &GL_obj::RENDERBUFFER_BINDING,HX_HCSTRING("RENDERBUFFER_BINDING","\x7c","\x23","\x70","\x23")},
	{hx::fsInt,(void *) &GL_obj::RENDERBUFFER_BLUE_SIZE,HX_HCSTRING("RENDERBUFFER_BLUE_SIZE","\xdd","\x93","\x86","\xdd")},
	{hx::fsInt,(void *) &GL_obj::RENDERBUFFER_DEPTH_SIZE,HX_HCSTRING("RENDERBUFFER_DEPTH_SIZE","\xe6","\x90","\x24","\xc3")},
	{hx::fsInt,(void *) &GL_obj::RENDERBUFFER_GREEN_SIZE,HX_HCSTRING("RENDERBUFFER_GREEN_SIZE","\x26","\x9b","\x7d","\x3b")},
	{hx::fsInt,(void *) &GL_obj::RENDERBUFFER_HEIGHT,HX_HCSTRING("RENDERBUFFER_HEIGHT","\x70","\x07","\x69","\xd7")},
	{hx::fsInt,(void *) &GL_obj::RENDERBUFFER_INTERNAL_FORMAT,HX_HCSTRING("RENDERBUFFER_INTERNAL_FORMAT","\x90","\xda","\xeb","\xb5")},
	{hx::fsInt,(void *) &GL_obj::RENDERBUFFER_RED_SIZE,HX_HCSTRING("RENDERBUFFER_RED_SIZE","\x98","\xa5","\x58","\x5e")},
	{hx::fsInt,(void *) &GL_obj::RENDERBUFFER_STENCIL_SIZE,HX_HCSTRING("RENDERBUFFER_STENCIL_SIZE","\x8d","\xd5","\x5a","\x9d")},
	{hx::fsInt,(void *) &GL_obj::RENDERBUFFER_WIDTH,HX_HCSTRING("RENDERBUFFER_WIDTH","\x7d","\x1e","\xe1","\x43")},
	{hx::fsInt,(void *) &GL_obj::RENDERER,HX_HCSTRING("RENDERER","\x43","\x55","\x61","\x0c")},
	{hx::fsInt,(void *) &GL_obj::REPEAT,HX_HCSTRING("REPEAT","\x5b","\x43","\xff","\xb8")},
	{hx::fsInt,(void *) &GL_obj::REPLACE,HX_HCSTRING("REPLACE","\x14","\x1c","\xfc","\x2a")},
	{hx::fsInt,(void *) &GL_obj::RGB,HX_HCSTRING("RGB","\xed","\x76","\x3e","\x00")},
	{hx::fsInt,(void *) &GL_obj::RGB565,HX_HCSTRING("RGB565","\xe7","\x41","\x7f","\xd6")},
	{hx::fsInt,(void *) &GL_obj::RGB5_A1,HX_HCSTRING("RGB5_A1","\x47","\x8f","\xf9","\xd8")},
	{hx::fsInt,(void *) &GL_obj::RGBA,HX_HCSTRING("RGBA","\xb4","\x98","\x69","\x36")},
	{hx::fsInt,(void *) &GL_obj::RGBA4,HX_HCSTRING("RGBA4","\x00","\x05","\xfc","\x65")},
	{hx::fsInt,(void *) &GL_obj::SAMPLER_2D,HX_HCSTRING("SAMPLER_2D","\x09","\x2a","\x93","\x6e")},
	{hx::fsInt,(void *) &GL_obj::SAMPLER_CUBE,HX_HCSTRING("SAMPLER_CUBE","\xec","\x3e","\x82","\xa4")},
	{hx::fsInt,(void *) &GL_obj::SAMPLES,HX_HCSTRING("SAMPLES","\xe9","\x98","\x9d","\x03")},
	{hx::fsInt,(void *) &GL_obj::SAMPLE_ALPHA_TO_COVERAGE,HX_HCSTRING("SAMPLE_ALPHA_TO_COVERAGE","\x16","\x3e","\x56","\xe1")},
	{hx::fsInt,(void *) &GL_obj::SAMPLE_BUFFERS,HX_HCSTRING("SAMPLE_BUFFERS","\xfe","\x16","\x71","\x3c")},
	{hx::fsInt,(void *) &GL_obj::SAMPLE_COVERAGE,HX_HCSTRING("SAMPLE_COVERAGE","\xdd","\xb7","\x0e","\xc1")},
	{hx::fsInt,(void *) &GL_obj::SAMPLE_COVERAGE_INVERT,HX_HCSTRING("SAMPLE_COVERAGE_INVERT","\x78","\x52","\xa5","\xcd")},
	{hx::fsInt,(void *) &GL_obj::SAMPLE_COVERAGE_VALUE,HX_HCSTRING("SAMPLE_COVERAGE_VALUE","\x2f","\x7a","\x07","\x69")},
	{hx::fsInt,(void *) &GL_obj::SCISSOR_BOX,HX_HCSTRING("SCISSOR_BOX","\xe8","\x48","\x4c","\x55")},
	{hx::fsInt,(void *) &GL_obj::SCISSOR_TEST,HX_HCSTRING("SCISSOR_TEST","\xb5","\xbe","\x51","\x59")},
	{hx::fsInt,(void *) &GL_obj::SHADER_TYPE,HX_HCSTRING("SHADER_TYPE","\x54","\xe5","\x27","\x87")},
	{hx::fsInt,(void *) &GL_obj::SHADING_LANGUAGE_VERSION,HX_HCSTRING("SHADING_LANGUAGE_VERSION","\xe6","\xc4","\xef","\x70")},
	{hx::fsInt,(void *) &GL_obj::SHORT,HX_HCSTRING("SHORT","\x5c","\xbc","\x15","\xfa")},
	{hx::fsInt,(void *) &GL_obj::SRC_ALPHA,HX_HCSTRING("SRC_ALPHA","\x43","\xd4","\xf7","\x33")},
	{hx::fsInt,(void *) &GL_obj::SRC_ALPHA_SATURATE,HX_HCSTRING("SRC_ALPHA_SATURATE","\xab","\xe2","\x3d","\x33")},
	{hx::fsInt,(void *) &GL_obj::SRC_COLOR,HX_HCSTRING("SRC_COLOR","\x48","\x9e","\xbd","\x5c")},
	{hx::fsInt,(void *) &GL_obj::STATIC_DRAW,HX_HCSTRING("STATIC_DRAW","\x75","\x50","\x2f","\xba")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_ATTACHMENT,HX_HCSTRING("STENCIL_ATTACHMENT","\xa6","\x8c","\x28","\x01")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_BACK_FAIL,HX_HCSTRING("STENCIL_BACK_FAIL","\xd3","\x46","\x93","\x90")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_BACK_FUNC,HX_HCSTRING("STENCIL_BACK_FUNC","\x39","\x78","\xa2","\x90")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_BACK_PASS_DEPTH_FAIL,HX_HCSTRING("STENCIL_BACK_PASS_DEPTH_FAIL","\x13","\x23","\x0e","\x34")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_BACK_PASS_DEPTH_PASS,HX_HCSTRING("STENCIL_BACK_PASS_DEPTH_PASS","\x06","\x4e","\xaa","\x3a")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_BACK_REF,HX_HCSTRING("STENCIL_BACK_REF","\xde","\x45","\xb8","\x08")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_BACK_VALUE_MASK,HX_HCSTRING("STENCIL_BACK_VALUE_MASK","\x8f","\xb2","\xc4","\x88")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_BACK_WRITEMASK,HX_HCSTRING("STENCIL_BACK_WRITEMASK","\x16","\x9c","\x15","\xc2")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_BITS,HX_HCSTRING("STENCIL_BITS","\x89","\x0f","\x87","\xc9")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_BUFFER_BIT,HX_HCSTRING("STENCIL_BUFFER_BIT","\x71","\x93","\x29","\xde")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_CLEAR_VALUE,HX_HCSTRING("STENCIL_CLEAR_VALUE","\x9c","\x91","\x82","\x73")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_FAIL,HX_HCSTRING("STENCIL_FAIL","\x61","\xce","\x25","\xcc")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_FUNC,HX_HCSTRING("STENCIL_FUNC","\xc7","\xff","\x34","\xcc")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_INDEX,HX_HCSTRING("STENCIL_INDEX","\x0f","\x79","\xb6","\x97")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_INDEX8,HX_HCSTRING("STENCIL_INDEX8","\x49","\x74","\xf3","\x27")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_PASS_DEPTH_FAIL,HX_HCSTRING("STENCIL_PASS_DEPTH_FAIL","\x45","\xca","\xb9","\xc8")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_PASS_DEPTH_PASS,HX_HCSTRING("STENCIL_PASS_DEPTH_PASS","\x38","\xf5","\x55","\xcf")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_REF,HX_HCSTRING("STENCIL_REF","\x10","\x6a","\xa5","\x3c")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_TEST,HX_HCSTRING("STENCIL_TEST","\xd5","\xdc","\x69","\xd5")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_VALUE_MASK,HX_HCSTRING("STENCIL_VALUE_MASK","\x9d","\x58","\x5e","\xa0")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_WRITEMASK,HX_HCSTRING("STENCIL_WRITEMASK","\xc8","\xf1","\xa6","\x49")},
	{hx::fsInt,(void *) &GL_obj::STREAM_DRAW,HX_HCSTRING("STREAM_DRAW","\x63","\x7f","\x28","\x15")},
	{hx::fsInt,(void *) &GL_obj::SUBPIXEL_BITS,HX_HCSTRING("SUBPIXEL_BITS","\x1f","\xac","\x14","\x0a")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE,HX_HCSTRING("TEXTURE","\xbb","\x9c","\xb4","\x1e")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE0,HX_HCSTRING("TEXTURE0","\x15","\x87","\x54","\xbf")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE1,HX_HCSTRING("TEXTURE1","\x16","\x87","\x54","\xbf")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE10,HX_HCSTRING("TEXTURE10","\x5a","\xac","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE11,HX_HCSTRING("TEXTURE11","\x5b","\xac","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE12,HX_HCSTRING("TEXTURE12","\x5c","\xac","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE13,HX_HCSTRING("TEXTURE13","\x5d","\xac","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE14,HX_HCSTRING("TEXTURE14","\x5e","\xac","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE15,HX_HCSTRING("TEXTURE15","\x5f","\xac","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE16,HX_HCSTRING("TEXTURE16","\x60","\xac","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE17,HX_HCSTRING("TEXTURE17","\x61","\xac","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE18,HX_HCSTRING("TEXTURE18","\x62","\xac","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE19,HX_HCSTRING("TEXTURE19","\x63","\xac","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE2,HX_HCSTRING("TEXTURE2","\x17","\x87","\x54","\xbf")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE20,HX_HCSTRING("TEXTURE20","\x39","\xad","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE21,HX_HCSTRING("TEXTURE21","\x3a","\xad","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE22,HX_HCSTRING("TEXTURE22","\x3b","\xad","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE23,HX_HCSTRING("TEXTURE23","\x3c","\xad","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE24,HX_HCSTRING("TEXTURE24","\x3d","\xad","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE25,HX_HCSTRING("TEXTURE25","\x3e","\xad","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE26,HX_HCSTRING("TEXTURE26","\x3f","\xad","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE27,HX_HCSTRING("TEXTURE27","\x40","\xad","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE28,HX_HCSTRING("TEXTURE28","\x41","\xad","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE29,HX_HCSTRING("TEXTURE29","\x42","\xad","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE3,HX_HCSTRING("TEXTURE3","\x18","\x87","\x54","\xbf")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE30,HX_HCSTRING("TEXTURE30","\x18","\xae","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE31,HX_HCSTRING("TEXTURE31","\x19","\xae","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE4,HX_HCSTRING("TEXTURE4","\x19","\x87","\x54","\xbf")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE5,HX_HCSTRING("TEXTURE5","\x1a","\x87","\x54","\xbf")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE6,HX_HCSTRING("TEXTURE6","\x1b","\x87","\x54","\xbf")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE7,HX_HCSTRING("TEXTURE7","\x1c","\x87","\x54","\xbf")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE8,HX_HCSTRING("TEXTURE8","\x1d","\x87","\x54","\xbf")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE9,HX_HCSTRING("TEXTURE9","\x1e","\x87","\x54","\xbf")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_2D,HX_HCSTRING("TEXTURE_2D","\x16","\x0c","\xf8","\xa2")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_BINDING_2D,HX_HCSTRING("TEXTURE_BINDING_2D","\x30","\xec","\x98","\xb1")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_BINDING_CUBE_MAP,HX_HCSTRING("TEXTURE_BINDING_CUBE_MAP","\xd0","\x69","\x98","\x75")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_CUBE_MAP,HX_HCSTRING("TEXTURE_CUBE_MAP","\x36","\x7a","\xe1","\xad")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_X,HX_HCSTRING("TEXTURE_CUBE_MAP_NEGATIVE_X","\x77","\x03","\xe2","\x6b")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_Y,HX_HCSTRING("TEXTURE_CUBE_MAP_NEGATIVE_Y","\x78","\x03","\xe2","\x6b")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_Z,HX_HCSTRING("TEXTURE_CUBE_MAP_NEGATIVE_Z","\x79","\x03","\xe2","\x6b")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_CUBE_MAP_POSITIVE_X,HX_HCSTRING("TEXTURE_CUBE_MAP_POSITIVE_X","\xbb","\x1c","\xee","\x24")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_CUBE_MAP_POSITIVE_Y,HX_HCSTRING("TEXTURE_CUBE_MAP_POSITIVE_Y","\xbc","\x1c","\xee","\x24")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_CUBE_MAP_POSITIVE_Z,HX_HCSTRING("TEXTURE_CUBE_MAP_POSITIVE_Z","\xbd","\x1c","\xee","\x24")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_MAG_FILTER,HX_HCSTRING("TEXTURE_MAG_FILTER","\x88","\xff","\xd5","\x1e")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_MIN_FILTER,HX_HCSTRING("TEXTURE_MIN_FILTER","\x69","\x66","\xc2","\x46")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_WRAP_S,HX_HCSTRING("TEXTURE_WRAP_S","\xa2","\x2d","\xc3","\xfe")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_WRAP_T,HX_HCSTRING("TEXTURE_WRAP_T","\xa3","\x2d","\xc3","\xfe")},
	{hx::fsInt,(void *) &GL_obj::TRIANGLES,HX_HCSTRING("TRIANGLES","\x8b","\xa0","\x99","\x7a")},
	{hx::fsInt,(void *) &GL_obj::TRIANGLE_FAN,HX_HCSTRING("TRIANGLE_FAN","\x7c","\xee","\x2e","\x91")},
	{hx::fsInt,(void *) &GL_obj::TRIANGLE_STRIP,HX_HCSTRING("TRIANGLE_STRIP","\xc1","\x66","\x6c","\xf6")},
	{hx::fsInt,(void *) &GL_obj::UNPACK_ALIGNMENT,HX_HCSTRING("UNPACK_ALIGNMENT","\xb6","\x2a","\x2e","\x4b")},
	{hx::fsInt,(void *) &GL_obj::UNPACK_COLORSPACE_CONVERSION_WEBGL,HX_HCSTRING("UNPACK_COLORSPACE_CONVERSION_WEBGL","\x9f","\xd9","\xf0","\xb9")},
	{hx::fsInt,(void *) &GL_obj::UNPACK_FLIP_Y_WEBGL,HX_HCSTRING("UNPACK_FLIP_Y_WEBGL","\x0e","\x9f","\x94","\x9d")},
	{hx::fsInt,(void *) &GL_obj::UNPACK_PREMULTIPLY_ALPHA_WEBGL,HX_HCSTRING("UNPACK_PREMULTIPLY_ALPHA_WEBGL","\x73","\x5d","\xcb","\xc6")},
	{hx::fsInt,(void *) &GL_obj::UNSIGNED_BYTE,HX_HCSTRING("UNSIGNED_BYTE","\xd2","\x79","\x6b","\x01")},
	{hx::fsInt,(void *) &GL_obj::UNSIGNED_INT,HX_HCSTRING("UNSIGNED_INT","\x45","\xfd","\xb9","\x1c")},
	{hx::fsInt,(void *) &GL_obj::UNSIGNED_SHORT,HX_HCSTRING("UNSIGNED_SHORT","\x52","\x9a","\x2e","\xfb")},
	{hx::fsInt,(void *) &GL_obj::UNSIGNED_SHORT_4_4_4_4,HX_HCSTRING("UNSIGNED_SHORT_4_4_4_4","\xa6","\x33","\x71","\x7b")},
	{hx::fsInt,(void *) &GL_obj::UNSIGNED_SHORT_5_5_5_1,HX_HCSTRING("UNSIGNED_SHORT_5_5_5_1","\x26","\x01","\x6e","\x38")},
	{hx::fsInt,(void *) &GL_obj::UNSIGNED_SHORT_5_6_5,HX_HCSTRING("UNSIGNED_SHORT_5_6_5","\x75","\xbb","\x16","\x8c")},
	{hx::fsInt,(void *) &GL_obj::VALIDATE_STATUS,HX_HCSTRING("VALIDATE_STATUS","\xfb","\x22","\x07","\xc6")},
	{hx::fsInt,(void *) &GL_obj::VENDOR,HX_HCSTRING("VENDOR","\x88","\x91","\x19","\x51")},
	{hx::fsInt,(void *) &GL_obj::VERSION,HX_HCSTRING("VERSION","\xf8","\xba","\xc5","\xfc")},
	{hx::fsInt,(void *) &GL_obj::VERTEX_ATTRIB_ARRAY_BUFFER_BINDING,HX_HCSTRING("VERTEX_ATTRIB_ARRAY_BUFFER_BINDING","\xa6","\x80","\x67","\x97")},
	{hx::fsInt,(void *) &GL_obj::VERTEX_ATTRIB_ARRAY_ENABLED,HX_HCSTRING("VERTEX_ATTRIB_ARRAY_ENABLED","\x61","\x99","\x09","\x66")},
	{hx::fsInt,(void *) &GL_obj::VERTEX_ATTRIB_ARRAY_NORMALIZED,HX_HCSTRING("VERTEX_ATTRIB_ARRAY_NORMALIZED","\x37","\xb7","\x22","\x78")},
	{hx::fsInt,(void *) &GL_obj::VERTEX_ATTRIB_ARRAY_POINTER,HX_HCSTRING("VERTEX_ATTRIB_ARRAY_POINTER","\x9d","\x55","\xfa","\x38")},
	{hx::fsInt,(void *) &GL_obj::VERTEX_ATTRIB_ARRAY_SIZE,HX_HCSTRING("VERTEX_ATTRIB_ARRAY_SIZE","\xc1","\x07","\xfd","\x08")},
	{hx::fsInt,(void *) &GL_obj::VERTEX_ATTRIB_ARRAY_STRIDE,HX_HCSTRING("VERTEX_ATTRIB_ARRAY_STRIDE","\x19","\x2b","\x41","\x58")},
	{hx::fsInt,(void *) &GL_obj::VERTEX_ATTRIB_ARRAY_TYPE,HX_HCSTRING("VERTEX_ATTRIB_ARRAY_TYPE","\xba","\x59","\xb2","\x09")},
	{hx::fsInt,(void *) &GL_obj::VERTEX_SHADER,HX_HCSTRING("VERTEX_SHADER","\xe0","\x69","\x73","\x49")},
	{hx::fsInt,(void *) &GL_obj::VIEWPORT,HX_HCSTRING("VIEWPORT","\x66","\xdc","\x2a","\xf6")},
	{hx::fsInt,(void *) &GL_obj::ZERO,HX_HCSTRING("ZERO","\x28","\xd7","\xb1","\x3b")},
	{hx::fsBool,(void *) &GL_obj::VAO_ENABLED,HX_HCSTRING("VAO_ENABLED","\xa6","\x10","\xdd","\x6d")},
	{hx::fsBool,(void *) &GL_obj::TEXTURE_SRGB,HX_HCSTRING("TEXTURE_SRGB","\xbe","\xa5","\xfe","\x6f")},
	{hx::fsInt,(void *) &GL_obj::SRGB,HX_HCSTRING("SRGB","\x7a","\x2c","\x1b","\x37")},
	{hx::fsInt,(void *) &GL_obj::SRGB_ALPHA,HX_HCSTRING("SRGB_ALPHA","\x79","\xea","\x6a","\x1a")},
	{hx::fsInt,(void *) &GL_obj::SRGB8_ALPHA8,HX_HCSTRING("SRGB8_ALPHA8","\x1b","\xb6","\x71","\x35")},
	{hx::fsInt,(void *) &GL_obj::FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING,HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING","\x79","\xc9","\x9d","\x03")},
	{hx::fsInt,(void *) &GL_obj::HALF_FLOAT,HX_HCSTRING("HALF_FLOAT","\xb0","\xfe","\x81","\x7a")},
	{hx::fsBool,(void *) &GL_obj::TEXTURE_HALF,HX_HCSTRING("TEXTURE_HALF","\xf7","\x6a","\xac","\x68")},
	{hx::fsBool,(void *) &GL_obj::TEXTURE_HALF_LINEAR,HX_HCSTRING("TEXTURE_HALF_LINEAR","\x6d","\x01","\x5b","\x65")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_ANISOTROPY,HX_HCSTRING("TEXTURE_ANISOTROPY","\x46","\x30","\x90","\x43")},
	{hx::fsBool,(void *) &GL_obj::TEXTURE_ANISOTROPY_ENABLED,HX_HCSTRING("TEXTURE_ANISOTROPY_ENABLED","\x28","\x18","\x00","\x7d")},
	{hx::fsInt,(void *) &GL_obj::MAX_TEXTURE_ANISOTROPY,HX_HCSTRING("MAX_TEXTURE_ANISOTROPY","\x61","\xb0","\x14","\x7e")},
	{hx::fsBool,(void *) &GL_obj::TEXTURE_FLOAT,HX_HCSTRING("TEXTURE_FLOAT","\xb8","\x9f","\xab","\x0e")},
	{hx::fsBool,(void *) &GL_obj::TEXTURE_FLOAT_LINEAR,HX_HCSTRING("TEXTURE_FLOAT_LINEAR","\xcc","\x56","\x72","\x6b")},
	{hx::fsBool,(void *) &GL_obj::TEXTURE_DEPTH_ENABLED,HX_HCSTRING("TEXTURE_DEPTH_ENABLED","\x01","\xb4","\x7a","\x82")},
	{hx::fsInt,(void *) &GL_obj::MAX_ACTIVE_TEXTURE,HX_HCSTRING("MAX_ACTIVE_TEXTURE","\x9d","\xb0","\x07","\x58")},
	{hx::fsInt,(void *) &GL_obj::MAX_COMBINED_TEXTURE,HX_HCSTRING("MAX_COMBINED_TEXTURE","\x9c","\x4b","\x6a","\xdc")},
	{hx::fsInt,(void *) &GL_obj::MAX_FRAGMENT_UNIFORM_LENGTH,HX_HCSTRING("MAX_FRAGMENT_UNIFORM_LENGTH","\xc5","\xa8","\xa0","\x54")},
	{hx::fsInt,(void *) &GL_obj::MAX_VERTEX_UNIFORM_LENGTH,HX_HCSTRING("MAX_VERTEX_UNIFORM_LENGTH","\x71","\xbc","\x90","\x97")},
	{hx::fsInt,(void *) &GL_obj::MAX_VERTEX_TEXTURES,HX_HCSTRING("MAX_VERTEX_TEXTURES","\xb8","\x1b","\x2c","\x6b")},
	{hx::fsBool,(void *) &GL_obj::BONE_TEXTURE,HX_HCSTRING("BONE_TEXTURE","\x80","\x25","\x2c","\x82")},
	{hx::fsBool,(void *) &GL_obj::VS_FLOAT_HIGHP,HX_HCSTRING("VS_FLOAT_HIGHP","\x29","\x61","\x2a","\xa1")},
	{hx::fsBool,(void *) &GL_obj::VS_INT_HIGHP,HX_HCSTRING("VS_INT_HIGHP","\x3c","\x81","\x86","\x14")},
	{hx::fsBool,(void *) &GL_obj::FS_FLOAT_HIGHP,HX_HCSTRING("FS_FLOAT_HIGHP","\x39","\x2b","\x55","\x76")},
	{hx::fsBool,(void *) &GL_obj::FS_INT_HIGHP,HX_HCSTRING("FS_INT_HIGHP","\x4c","\xa7","\x8f","\xf8")},
	{hx::fsInt,(void *) &GL_obj::_NULL,HX_HCSTRING("NULL","\x87","\x66","\xcf","\x33")},
	{hx::fsInt,(void *) &GL_obj::INVALID,HX_HCSTRING("INVALID","\xd7","\xae","\x1b","\xbb")},
	{hx::fsObject /*::haxor::platform::graphics::OpenGL*/ ,(void *) &GL_obj::m_gl,HX_HCSTRING("m_gl","\xf7","\xb1","\x54","\x48")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GL_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GL_obj::ACTIVE_ATTRIBUTES,"ACTIVE_ATTRIBUTES");
	HX_MARK_MEMBER_NAME(GL_obj::ACTIVE_TEXTURE,"ACTIVE_TEXTURE");
	HX_MARK_MEMBER_NAME(GL_obj::ACTIVE_UNIFORMS,"ACTIVE_UNIFORMS");
	HX_MARK_MEMBER_NAME(GL_obj::ALIASED_LINE_WIDTH_RANGE,"ALIASED_LINE_WIDTH_RANGE");
	HX_MARK_MEMBER_NAME(GL_obj::ALIASED_POINT_SIZE_RANGE,"ALIASED_POINT_SIZE_RANGE");
	HX_MARK_MEMBER_NAME(GL_obj::ALPHA,"ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::ALPHA_BITS,"ALPHA_BITS");
	HX_MARK_MEMBER_NAME(GL_obj::ALWAYS,"ALWAYS");
	HX_MARK_MEMBER_NAME(GL_obj::ARRAY_BUFFER,"ARRAY_BUFFER");
	HX_MARK_MEMBER_NAME(GL_obj::ARRAY_BUFFER_BINDING,"ARRAY_BUFFER_BINDING");
	HX_MARK_MEMBER_NAME(GL_obj::ATTACHED_SHADERS,"ATTACHED_SHADERS");
	HX_MARK_MEMBER_NAME(GL_obj::BACK,"BACK");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND,"BLEND");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND_COLOR,"BLEND_COLOR");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND_DST_ALPHA,"BLEND_DST_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND_DST_RGB,"BLEND_DST_RGB");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND_EQUATION,"BLEND_EQUATION");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND_EQUATION_ALPHA,"BLEND_EQUATION_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND_EQUATION_RGB,"BLEND_EQUATION_RGB");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND_SRC_ALPHA,"BLEND_SRC_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND_SRC_RGB,"BLEND_SRC_RGB");
	HX_MARK_MEMBER_NAME(GL_obj::BLUE_BITS,"BLUE_BITS");
	HX_MARK_MEMBER_NAME(GL_obj::BOOL,"BOOL");
	HX_MARK_MEMBER_NAME(GL_obj::BOOL_VEC2,"BOOL_VEC2");
	HX_MARK_MEMBER_NAME(GL_obj::BOOL_VEC3,"BOOL_VEC3");
	HX_MARK_MEMBER_NAME(GL_obj::BOOL_VEC4,"BOOL_VEC4");
	HX_MARK_MEMBER_NAME(GL_obj::BROWSER_DEFAULT_WEBGL,"BROWSER_DEFAULT_WEBGL");
	HX_MARK_MEMBER_NAME(GL_obj::BUFFER_SIZE,"BUFFER_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::BUFFER_USAGE,"BUFFER_USAGE");
	HX_MARK_MEMBER_NAME(GL_obj::BYTE,"BYTE");
	HX_MARK_MEMBER_NAME(GL_obj::CCW,"CCW");
	HX_MARK_MEMBER_NAME(GL_obj::CLAMP_TO_EDGE,"CLAMP_TO_EDGE");
	HX_MARK_MEMBER_NAME(GL_obj::COLOR_ATTACHMENT0,"COLOR_ATTACHMENT0");
	HX_MARK_MEMBER_NAME(GL_obj::COLOR_BUFFER_BIT,"COLOR_BUFFER_BIT");
	HX_MARK_MEMBER_NAME(GL_obj::COLOR_CLEAR_VALUE,"COLOR_CLEAR_VALUE");
	HX_MARK_MEMBER_NAME(GL_obj::COLOR_WRITEMASK,"COLOR_WRITEMASK");
	HX_MARK_MEMBER_NAME(GL_obj::COMPILE_STATUS,"COMPILE_STATUS");
	HX_MARK_MEMBER_NAME(GL_obj::COMPRESSED_TEXTURE_FORMATS,"COMPRESSED_TEXTURE_FORMATS");
	HX_MARK_MEMBER_NAME(GL_obj::CONSTANT_ALPHA,"CONSTANT_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::CONSTANT_COLOR,"CONSTANT_COLOR");
	HX_MARK_MEMBER_NAME(GL_obj::CONTEXT_LOST_WEBGL,"CONTEXT_LOST_WEBGL");
	HX_MARK_MEMBER_NAME(GL_obj::CULL_FACE,"CULL_FACE");
	HX_MARK_MEMBER_NAME(GL_obj::CULL_FACE_MODE,"CULL_FACE_MODE");
	HX_MARK_MEMBER_NAME(GL_obj::CURRENT_PROGRAM,"CURRENT_PROGRAM");
	HX_MARK_MEMBER_NAME(GL_obj::CURRENT_VERTEX_ATTRIB,"CURRENT_VERTEX_ATTRIB");
	HX_MARK_MEMBER_NAME(GL_obj::CW,"CW");
	HX_MARK_MEMBER_NAME(GL_obj::DECR,"DECR");
	HX_MARK_MEMBER_NAME(GL_obj::DECR_WRAP,"DECR_WRAP");
	HX_MARK_MEMBER_NAME(GL_obj::DELETE_STATUS,"DELETE_STATUS");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_ATTACHMENT,"DEPTH_ATTACHMENT");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_BITS,"DEPTH_BITS");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_BUFFER_BIT,"DEPTH_BUFFER_BIT");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_CLEAR_VALUE,"DEPTH_CLEAR_VALUE");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_COMPONENT,"DEPTH_COMPONENT");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_COMPONENT16,"DEPTH_COMPONENT16");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_FUNC,"DEPTH_FUNC");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_RANGE,"DEPTH_RANGE");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_STENCIL,"DEPTH_STENCIL");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_STENCIL_ATTACHMENT,"DEPTH_STENCIL_ATTACHMENT");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_TEST,"DEPTH_TEST");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_WRITEMASK,"DEPTH_WRITEMASK");
	HX_MARK_MEMBER_NAME(GL_obj::DITHER,"DITHER");
	HX_MARK_MEMBER_NAME(GL_obj::DONT_CARE,"DONT_CARE");
	HX_MARK_MEMBER_NAME(GL_obj::DST_ALPHA,"DST_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::DST_COLOR,"DST_COLOR");
	HX_MARK_MEMBER_NAME(GL_obj::DYNAMIC_DRAW,"DYNAMIC_DRAW");
	HX_MARK_MEMBER_NAME(GL_obj::ELEMENT_ARRAY_BUFFER,"ELEMENT_ARRAY_BUFFER");
	HX_MARK_MEMBER_NAME(GL_obj::ELEMENT_ARRAY_BUFFER_BINDING,"ELEMENT_ARRAY_BUFFER_BINDING");
	HX_MARK_MEMBER_NAME(GL_obj::EQUAL,"EQUAL");
	HX_MARK_MEMBER_NAME(GL_obj::FASTEST,"FASTEST");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT,"FLOAT");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT_MAT2,"FLOAT_MAT2");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT_MAT3,"FLOAT_MAT3");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT_MAT4,"FLOAT_MAT4");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT_VEC2,"FLOAT_VEC2");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT_VEC3,"FLOAT_VEC3");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT_VEC4,"FLOAT_VEC4");
	HX_MARK_MEMBER_NAME(GL_obj::FRAGMENT_SHADER,"FRAGMENT_SHADER");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER,"FRAMEBUFFER");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_NAME,"FRAMEBUFFER_ATTACHMENT_OBJECT_NAME");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE,"FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE,"FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL,"FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_BINDING,"FRAMEBUFFER_BINDING");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_COMPLETE,"FRAMEBUFFER_COMPLETE");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_INCOMPLETE_ATTACHMENT,"FRAMEBUFFER_INCOMPLETE_ATTACHMENT");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_INCOMPLETE_DIMENSIONS,"FRAMEBUFFER_INCOMPLETE_DIMENSIONS");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT,"FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_UNSUPPORTED,"FRAMEBUFFER_UNSUPPORTED");
	HX_MARK_MEMBER_NAME(GL_obj::FRONT,"FRONT");
	HX_MARK_MEMBER_NAME(GL_obj::FRONT_AND_BACK,"FRONT_AND_BACK");
	HX_MARK_MEMBER_NAME(GL_obj::FRONT_FACE,"FRONT_FACE");
	HX_MARK_MEMBER_NAME(GL_obj::FUNC_ADD,"FUNC_ADD");
	HX_MARK_MEMBER_NAME(GL_obj::FUNC_REVERSE_SUBTRACT,"FUNC_REVERSE_SUBTRACT");
	HX_MARK_MEMBER_NAME(GL_obj::FUNC_SUBTRACT,"FUNC_SUBTRACT");
	HX_MARK_MEMBER_NAME(GL_obj::GENERATE_MIPMAP_HINT,"GENERATE_MIPMAP_HINT");
	HX_MARK_MEMBER_NAME(GL_obj::GEQUAL,"GEQUAL");
	HX_MARK_MEMBER_NAME(GL_obj::GREATER,"GREATER");
	HX_MARK_MEMBER_NAME(GL_obj::GREEN_BITS,"GREEN_BITS");
	HX_MARK_MEMBER_NAME(GL_obj::HIGH_FLOAT,"HIGH_FLOAT");
	HX_MARK_MEMBER_NAME(GL_obj::HIGH_INT,"HIGH_INT");
	HX_MARK_MEMBER_NAME(GL_obj::INCR,"INCR");
	HX_MARK_MEMBER_NAME(GL_obj::INCR_WRAP,"INCR_WRAP");
	HX_MARK_MEMBER_NAME(GL_obj::INT,"INT");
	HX_MARK_MEMBER_NAME(GL_obj::INT_VEC2,"INT_VEC2");
	HX_MARK_MEMBER_NAME(GL_obj::INT_VEC3,"INT_VEC3");
	HX_MARK_MEMBER_NAME(GL_obj::INT_VEC4,"INT_VEC4");
	HX_MARK_MEMBER_NAME(GL_obj::INVALID_ENUM,"INVALID_ENUM");
	HX_MARK_MEMBER_NAME(GL_obj::INVALID_FRAMEBUFFER_OPERATION,"INVALID_FRAMEBUFFER_OPERATION");
	HX_MARK_MEMBER_NAME(GL_obj::INVALID_OPERATION,"INVALID_OPERATION");
	HX_MARK_MEMBER_NAME(GL_obj::INVALID_VALUE,"INVALID_VALUE");
	HX_MARK_MEMBER_NAME(GL_obj::INVERT,"INVERT");
	HX_MARK_MEMBER_NAME(GL_obj::KEEP,"KEEP");
	HX_MARK_MEMBER_NAME(GL_obj::LEQUAL,"LEQUAL");
	HX_MARK_MEMBER_NAME(GL_obj::LESS,"LESS");
	HX_MARK_MEMBER_NAME(GL_obj::LINEAR,"LINEAR");
	HX_MARK_MEMBER_NAME(GL_obj::LINEAR_MIPMAP_LINEAR,"LINEAR_MIPMAP_LINEAR");
	HX_MARK_MEMBER_NAME(GL_obj::LINEAR_MIPMAP_NEAREST,"LINEAR_MIPMAP_NEAREST");
	HX_MARK_MEMBER_NAME(GL_obj::LINES,"LINES");
	HX_MARK_MEMBER_NAME(GL_obj::LINE_LOOP,"LINE_LOOP");
	HX_MARK_MEMBER_NAME(GL_obj::LINE_STRIP,"LINE_STRIP");
	HX_MARK_MEMBER_NAME(GL_obj::LINE_WIDTH,"LINE_WIDTH");
	HX_MARK_MEMBER_NAME(GL_obj::LINK_STATUS,"LINK_STATUS");
	HX_MARK_MEMBER_NAME(GL_obj::LOW_FLOAT,"LOW_FLOAT");
	HX_MARK_MEMBER_NAME(GL_obj::LOW_INT,"LOW_INT");
	HX_MARK_MEMBER_NAME(GL_obj::LUMINANCE,"LUMINANCE");
	HX_MARK_MEMBER_NAME(GL_obj::LUMINANCE_ALPHA,"LUMINANCE_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_COMBINED_TEXTURE_IMAGE_UNITS,"MAX_COMBINED_TEXTURE_IMAGE_UNITS");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_CUBE_MAP_TEXTURE_SIZE,"MAX_CUBE_MAP_TEXTURE_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_FRAGMENT_UNIFORM_VECTORS,"MAX_FRAGMENT_UNIFORM_VECTORS");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_RENDERBUFFER_SIZE,"MAX_RENDERBUFFER_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_TEXTURE_IMAGE_UNITS,"MAX_TEXTURE_IMAGE_UNITS");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_TEXTURE_SIZE,"MAX_TEXTURE_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_VARYING_VECTORS,"MAX_VARYING_VECTORS");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_VERTEX_ATTRIBS,"MAX_VERTEX_ATTRIBS");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_VERTEX_TEXTURE_IMAGE_UNITS,"MAX_VERTEX_TEXTURE_IMAGE_UNITS");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_VERTEX_UNIFORM_VECTORS,"MAX_VERTEX_UNIFORM_VECTORS");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_VIEWPORT_DIMS,"MAX_VIEWPORT_DIMS");
	HX_MARK_MEMBER_NAME(GL_obj::MEDIUM_FLOAT,"MEDIUM_FLOAT");
	HX_MARK_MEMBER_NAME(GL_obj::MEDIUM_INT,"MEDIUM_INT");
	HX_MARK_MEMBER_NAME(GL_obj::MIRRORED_REPEAT,"MIRRORED_REPEAT");
	HX_MARK_MEMBER_NAME(GL_obj::NEAREST,"NEAREST");
	HX_MARK_MEMBER_NAME(GL_obj::NEAREST_MIPMAP_LINEAR,"NEAREST_MIPMAP_LINEAR");
	HX_MARK_MEMBER_NAME(GL_obj::NEAREST_MIPMAP_NEAREST,"NEAREST_MIPMAP_NEAREST");
	HX_MARK_MEMBER_NAME(GL_obj::NEVER,"NEVER");
	HX_MARK_MEMBER_NAME(GL_obj::NICEST,"NICEST");
	HX_MARK_MEMBER_NAME(GL_obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(GL_obj::NOTEQUAL,"NOTEQUAL");
	HX_MARK_MEMBER_NAME(GL_obj::NO_ERROR_GL,"NO_ERROR_GL");
	HX_MARK_MEMBER_NAME(GL_obj::ONE,"ONE");
	HX_MARK_MEMBER_NAME(GL_obj::ONE_MINUS_CONSTANT_ALPHA,"ONE_MINUS_CONSTANT_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::ONE_MINUS_CONSTANT_COLOR,"ONE_MINUS_CONSTANT_COLOR");
	HX_MARK_MEMBER_NAME(GL_obj::ONE_MINUS_DST_ALPHA,"ONE_MINUS_DST_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::ONE_MINUS_DST_COLOR,"ONE_MINUS_DST_COLOR");
	HX_MARK_MEMBER_NAME(GL_obj::ONE_MINUS_SRC_ALPHA,"ONE_MINUS_SRC_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::ONE_MINUS_SRC_COLOR,"ONE_MINUS_SRC_COLOR");
	HX_MARK_MEMBER_NAME(GL_obj::OUT_OF_MEMORY,"OUT_OF_MEMORY");
	HX_MARK_MEMBER_NAME(GL_obj::PACK_ALIGNMENT,"PACK_ALIGNMENT");
	HX_MARK_MEMBER_NAME(GL_obj::POINTS,"POINTS");
	HX_MARK_MEMBER_NAME(GL_obj::POLYGON_OFFSET_FACTOR,"POLYGON_OFFSET_FACTOR");
	HX_MARK_MEMBER_NAME(GL_obj::POLYGON_OFFSET_FILL,"POLYGON_OFFSET_FILL");
	HX_MARK_MEMBER_NAME(GL_obj::POLYGON_OFFSET_UNITS,"POLYGON_OFFSET_UNITS");
	HX_MARK_MEMBER_NAME(GL_obj::RED_BITS,"RED_BITS");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER,"RENDERBUFFER");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_ALPHA_SIZE,"RENDERBUFFER_ALPHA_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_BINDING,"RENDERBUFFER_BINDING");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_BLUE_SIZE,"RENDERBUFFER_BLUE_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_DEPTH_SIZE,"RENDERBUFFER_DEPTH_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_GREEN_SIZE,"RENDERBUFFER_GREEN_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_HEIGHT,"RENDERBUFFER_HEIGHT");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_INTERNAL_FORMAT,"RENDERBUFFER_INTERNAL_FORMAT");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_RED_SIZE,"RENDERBUFFER_RED_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_STENCIL_SIZE,"RENDERBUFFER_STENCIL_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_WIDTH,"RENDERBUFFER_WIDTH");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERER,"RENDERER");
	HX_MARK_MEMBER_NAME(GL_obj::REPEAT,"REPEAT");
	HX_MARK_MEMBER_NAME(GL_obj::REPLACE,"REPLACE");
	HX_MARK_MEMBER_NAME(GL_obj::RGB,"RGB");
	HX_MARK_MEMBER_NAME(GL_obj::RGB565,"RGB565");
	HX_MARK_MEMBER_NAME(GL_obj::RGB5_A1,"RGB5_A1");
	HX_MARK_MEMBER_NAME(GL_obj::RGBA,"RGBA");
	HX_MARK_MEMBER_NAME(GL_obj::RGBA4,"RGBA4");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLER_2D,"SAMPLER_2D");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLER_CUBE,"SAMPLER_CUBE");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLES,"SAMPLES");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLE_ALPHA_TO_COVERAGE,"SAMPLE_ALPHA_TO_COVERAGE");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLE_BUFFERS,"SAMPLE_BUFFERS");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLE_COVERAGE,"SAMPLE_COVERAGE");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLE_COVERAGE_INVERT,"SAMPLE_COVERAGE_INVERT");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLE_COVERAGE_VALUE,"SAMPLE_COVERAGE_VALUE");
	HX_MARK_MEMBER_NAME(GL_obj::SCISSOR_BOX,"SCISSOR_BOX");
	HX_MARK_MEMBER_NAME(GL_obj::SCISSOR_TEST,"SCISSOR_TEST");
	HX_MARK_MEMBER_NAME(GL_obj::SHADER_TYPE,"SHADER_TYPE");
	HX_MARK_MEMBER_NAME(GL_obj::SHADING_LANGUAGE_VERSION,"SHADING_LANGUAGE_VERSION");
	HX_MARK_MEMBER_NAME(GL_obj::SHORT,"SHORT");
	HX_MARK_MEMBER_NAME(GL_obj::SRC_ALPHA,"SRC_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::SRC_ALPHA_SATURATE,"SRC_ALPHA_SATURATE");
	HX_MARK_MEMBER_NAME(GL_obj::SRC_COLOR,"SRC_COLOR");
	HX_MARK_MEMBER_NAME(GL_obj::STATIC_DRAW,"STATIC_DRAW");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_ATTACHMENT,"STENCIL_ATTACHMENT");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BACK_FAIL,"STENCIL_BACK_FAIL");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BACK_FUNC,"STENCIL_BACK_FUNC");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BACK_PASS_DEPTH_FAIL,"STENCIL_BACK_PASS_DEPTH_FAIL");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BACK_PASS_DEPTH_PASS,"STENCIL_BACK_PASS_DEPTH_PASS");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BACK_REF,"STENCIL_BACK_REF");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BACK_VALUE_MASK,"STENCIL_BACK_VALUE_MASK");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BACK_WRITEMASK,"STENCIL_BACK_WRITEMASK");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BITS,"STENCIL_BITS");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BUFFER_BIT,"STENCIL_BUFFER_BIT");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_CLEAR_VALUE,"STENCIL_CLEAR_VALUE");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_FAIL,"STENCIL_FAIL");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_FUNC,"STENCIL_FUNC");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_INDEX,"STENCIL_INDEX");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_INDEX8,"STENCIL_INDEX8");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_PASS_DEPTH_FAIL,"STENCIL_PASS_DEPTH_FAIL");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_PASS_DEPTH_PASS,"STENCIL_PASS_DEPTH_PASS");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_REF,"STENCIL_REF");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_TEST,"STENCIL_TEST");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_VALUE_MASK,"STENCIL_VALUE_MASK");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_WRITEMASK,"STENCIL_WRITEMASK");
	HX_MARK_MEMBER_NAME(GL_obj::STREAM_DRAW,"STREAM_DRAW");
	HX_MARK_MEMBER_NAME(GL_obj::SUBPIXEL_BITS,"SUBPIXEL_BITS");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE,"TEXTURE");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE0,"TEXTURE0");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE1,"TEXTURE1");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE10,"TEXTURE10");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE11,"TEXTURE11");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE12,"TEXTURE12");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE13,"TEXTURE13");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE14,"TEXTURE14");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE15,"TEXTURE15");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE16,"TEXTURE16");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE17,"TEXTURE17");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE18,"TEXTURE18");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE19,"TEXTURE19");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE2,"TEXTURE2");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE20,"TEXTURE20");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE21,"TEXTURE21");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE22,"TEXTURE22");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE23,"TEXTURE23");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE24,"TEXTURE24");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE25,"TEXTURE25");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE26,"TEXTURE26");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE27,"TEXTURE27");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE28,"TEXTURE28");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE29,"TEXTURE29");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE3,"TEXTURE3");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE30,"TEXTURE30");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE31,"TEXTURE31");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE4,"TEXTURE4");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE5,"TEXTURE5");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE6,"TEXTURE6");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE7,"TEXTURE7");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE8,"TEXTURE8");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE9,"TEXTURE9");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_2D,"TEXTURE_2D");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_BINDING_2D,"TEXTURE_BINDING_2D");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_BINDING_CUBE_MAP,"TEXTURE_BINDING_CUBE_MAP");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP,"TEXTURE_CUBE_MAP");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_X,"TEXTURE_CUBE_MAP_NEGATIVE_X");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_Y,"TEXTURE_CUBE_MAP_NEGATIVE_Y");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_Z,"TEXTURE_CUBE_MAP_NEGATIVE_Z");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_POSITIVE_X,"TEXTURE_CUBE_MAP_POSITIVE_X");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_POSITIVE_Y,"TEXTURE_CUBE_MAP_POSITIVE_Y");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_POSITIVE_Z,"TEXTURE_CUBE_MAP_POSITIVE_Z");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_MAG_FILTER,"TEXTURE_MAG_FILTER");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_MIN_FILTER,"TEXTURE_MIN_FILTER");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_WRAP_S,"TEXTURE_WRAP_S");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_WRAP_T,"TEXTURE_WRAP_T");
	HX_MARK_MEMBER_NAME(GL_obj::TRIANGLES,"TRIANGLES");
	HX_MARK_MEMBER_NAME(GL_obj::TRIANGLE_FAN,"TRIANGLE_FAN");
	HX_MARK_MEMBER_NAME(GL_obj::TRIANGLE_STRIP,"TRIANGLE_STRIP");
	HX_MARK_MEMBER_NAME(GL_obj::UNPACK_ALIGNMENT,"UNPACK_ALIGNMENT");
	HX_MARK_MEMBER_NAME(GL_obj::UNPACK_COLORSPACE_CONVERSION_WEBGL,"UNPACK_COLORSPACE_CONVERSION_WEBGL");
	HX_MARK_MEMBER_NAME(GL_obj::UNPACK_FLIP_Y_WEBGL,"UNPACK_FLIP_Y_WEBGL");
	HX_MARK_MEMBER_NAME(GL_obj::UNPACK_PREMULTIPLY_ALPHA_WEBGL,"UNPACK_PREMULTIPLY_ALPHA_WEBGL");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_BYTE,"UNSIGNED_BYTE");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_INT,"UNSIGNED_INT");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_SHORT,"UNSIGNED_SHORT");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_SHORT_4_4_4_4,"UNSIGNED_SHORT_4_4_4_4");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_SHORT_5_5_5_1,"UNSIGNED_SHORT_5_5_5_1");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_SHORT_5_6_5,"UNSIGNED_SHORT_5_6_5");
	HX_MARK_MEMBER_NAME(GL_obj::VALIDATE_STATUS,"VALIDATE_STATUS");
	HX_MARK_MEMBER_NAME(GL_obj::VENDOR,"VENDOR");
	HX_MARK_MEMBER_NAME(GL_obj::VERSION,"VERSION");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_BUFFER_BINDING,"VERTEX_ATTRIB_ARRAY_BUFFER_BINDING");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_ENABLED,"VERTEX_ATTRIB_ARRAY_ENABLED");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_NORMALIZED,"VERTEX_ATTRIB_ARRAY_NORMALIZED");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_POINTER,"VERTEX_ATTRIB_ARRAY_POINTER");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_SIZE,"VERTEX_ATTRIB_ARRAY_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_STRIDE,"VERTEX_ATTRIB_ARRAY_STRIDE");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_TYPE,"VERTEX_ATTRIB_ARRAY_TYPE");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_SHADER,"VERTEX_SHADER");
	HX_MARK_MEMBER_NAME(GL_obj::VIEWPORT,"VIEWPORT");
	HX_MARK_MEMBER_NAME(GL_obj::ZERO,"ZERO");
	HX_MARK_MEMBER_NAME(GL_obj::VAO_ENABLED,"VAO_ENABLED");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_SRGB,"TEXTURE_SRGB");
	HX_MARK_MEMBER_NAME(GL_obj::SRGB,"SRGB");
	HX_MARK_MEMBER_NAME(GL_obj::SRGB_ALPHA,"SRGB_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::SRGB8_ALPHA8,"SRGB8_ALPHA8");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING,"FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING");
	HX_MARK_MEMBER_NAME(GL_obj::HALF_FLOAT,"HALF_FLOAT");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_HALF,"TEXTURE_HALF");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_HALF_LINEAR,"TEXTURE_HALF_LINEAR");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_ANISOTROPY,"TEXTURE_ANISOTROPY");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_ANISOTROPY_ENABLED,"TEXTURE_ANISOTROPY_ENABLED");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_TEXTURE_ANISOTROPY,"MAX_TEXTURE_ANISOTROPY");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_FLOAT,"TEXTURE_FLOAT");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_FLOAT_LINEAR,"TEXTURE_FLOAT_LINEAR");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_DEPTH_ENABLED,"TEXTURE_DEPTH_ENABLED");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_ACTIVE_TEXTURE,"MAX_ACTIVE_TEXTURE");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_COMBINED_TEXTURE,"MAX_COMBINED_TEXTURE");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_FRAGMENT_UNIFORM_LENGTH,"MAX_FRAGMENT_UNIFORM_LENGTH");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_VERTEX_UNIFORM_LENGTH,"MAX_VERTEX_UNIFORM_LENGTH");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_VERTEX_TEXTURES,"MAX_VERTEX_TEXTURES");
	HX_MARK_MEMBER_NAME(GL_obj::BONE_TEXTURE,"BONE_TEXTURE");
	HX_MARK_MEMBER_NAME(GL_obj::VS_FLOAT_HIGHP,"VS_FLOAT_HIGHP");
	HX_MARK_MEMBER_NAME(GL_obj::VS_INT_HIGHP,"VS_INT_HIGHP");
	HX_MARK_MEMBER_NAME(GL_obj::FS_FLOAT_HIGHP,"FS_FLOAT_HIGHP");
	HX_MARK_MEMBER_NAME(GL_obj::FS_INT_HIGHP,"FS_INT_HIGHP");
	HX_MARK_MEMBER_NAME(GL_obj::_NULL,"NULL");
	HX_MARK_MEMBER_NAME(GL_obj::INVALID,"INVALID");
	HX_MARK_MEMBER_NAME(GL_obj::m_gl,"m_gl");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GL_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GL_obj::ACTIVE_ATTRIBUTES,"ACTIVE_ATTRIBUTES");
	HX_VISIT_MEMBER_NAME(GL_obj::ACTIVE_TEXTURE,"ACTIVE_TEXTURE");
	HX_VISIT_MEMBER_NAME(GL_obj::ACTIVE_UNIFORMS,"ACTIVE_UNIFORMS");
	HX_VISIT_MEMBER_NAME(GL_obj::ALIASED_LINE_WIDTH_RANGE,"ALIASED_LINE_WIDTH_RANGE");
	HX_VISIT_MEMBER_NAME(GL_obj::ALIASED_POINT_SIZE_RANGE,"ALIASED_POINT_SIZE_RANGE");
	HX_VISIT_MEMBER_NAME(GL_obj::ALPHA,"ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::ALPHA_BITS,"ALPHA_BITS");
	HX_VISIT_MEMBER_NAME(GL_obj::ALWAYS,"ALWAYS");
	HX_VISIT_MEMBER_NAME(GL_obj::ARRAY_BUFFER,"ARRAY_BUFFER");
	HX_VISIT_MEMBER_NAME(GL_obj::ARRAY_BUFFER_BINDING,"ARRAY_BUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(GL_obj::ATTACHED_SHADERS,"ATTACHED_SHADERS");
	HX_VISIT_MEMBER_NAME(GL_obj::BACK,"BACK");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND,"BLEND");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND_COLOR,"BLEND_COLOR");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND_DST_ALPHA,"BLEND_DST_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND_DST_RGB,"BLEND_DST_RGB");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND_EQUATION,"BLEND_EQUATION");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND_EQUATION_ALPHA,"BLEND_EQUATION_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND_EQUATION_RGB,"BLEND_EQUATION_RGB");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND_SRC_ALPHA,"BLEND_SRC_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND_SRC_RGB,"BLEND_SRC_RGB");
	HX_VISIT_MEMBER_NAME(GL_obj::BLUE_BITS,"BLUE_BITS");
	HX_VISIT_MEMBER_NAME(GL_obj::BOOL,"BOOL");
	HX_VISIT_MEMBER_NAME(GL_obj::BOOL_VEC2,"BOOL_VEC2");
	HX_VISIT_MEMBER_NAME(GL_obj::BOOL_VEC3,"BOOL_VEC3");
	HX_VISIT_MEMBER_NAME(GL_obj::BOOL_VEC4,"BOOL_VEC4");
	HX_VISIT_MEMBER_NAME(GL_obj::BROWSER_DEFAULT_WEBGL,"BROWSER_DEFAULT_WEBGL");
	HX_VISIT_MEMBER_NAME(GL_obj::BUFFER_SIZE,"BUFFER_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::BUFFER_USAGE,"BUFFER_USAGE");
	HX_VISIT_MEMBER_NAME(GL_obj::BYTE,"BYTE");
	HX_VISIT_MEMBER_NAME(GL_obj::CCW,"CCW");
	HX_VISIT_MEMBER_NAME(GL_obj::CLAMP_TO_EDGE,"CLAMP_TO_EDGE");
	HX_VISIT_MEMBER_NAME(GL_obj::COLOR_ATTACHMENT0,"COLOR_ATTACHMENT0");
	HX_VISIT_MEMBER_NAME(GL_obj::COLOR_BUFFER_BIT,"COLOR_BUFFER_BIT");
	HX_VISIT_MEMBER_NAME(GL_obj::COLOR_CLEAR_VALUE,"COLOR_CLEAR_VALUE");
	HX_VISIT_MEMBER_NAME(GL_obj::COLOR_WRITEMASK,"COLOR_WRITEMASK");
	HX_VISIT_MEMBER_NAME(GL_obj::COMPILE_STATUS,"COMPILE_STATUS");
	HX_VISIT_MEMBER_NAME(GL_obj::COMPRESSED_TEXTURE_FORMATS,"COMPRESSED_TEXTURE_FORMATS");
	HX_VISIT_MEMBER_NAME(GL_obj::CONSTANT_ALPHA,"CONSTANT_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::CONSTANT_COLOR,"CONSTANT_COLOR");
	HX_VISIT_MEMBER_NAME(GL_obj::CONTEXT_LOST_WEBGL,"CONTEXT_LOST_WEBGL");
	HX_VISIT_MEMBER_NAME(GL_obj::CULL_FACE,"CULL_FACE");
	HX_VISIT_MEMBER_NAME(GL_obj::CULL_FACE_MODE,"CULL_FACE_MODE");
	HX_VISIT_MEMBER_NAME(GL_obj::CURRENT_PROGRAM,"CURRENT_PROGRAM");
	HX_VISIT_MEMBER_NAME(GL_obj::CURRENT_VERTEX_ATTRIB,"CURRENT_VERTEX_ATTRIB");
	HX_VISIT_MEMBER_NAME(GL_obj::CW,"CW");
	HX_VISIT_MEMBER_NAME(GL_obj::DECR,"DECR");
	HX_VISIT_MEMBER_NAME(GL_obj::DECR_WRAP,"DECR_WRAP");
	HX_VISIT_MEMBER_NAME(GL_obj::DELETE_STATUS,"DELETE_STATUS");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_ATTACHMENT,"DEPTH_ATTACHMENT");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_BITS,"DEPTH_BITS");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_BUFFER_BIT,"DEPTH_BUFFER_BIT");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_CLEAR_VALUE,"DEPTH_CLEAR_VALUE");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_COMPONENT,"DEPTH_COMPONENT");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_COMPONENT16,"DEPTH_COMPONENT16");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_FUNC,"DEPTH_FUNC");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_RANGE,"DEPTH_RANGE");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_STENCIL,"DEPTH_STENCIL");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_STENCIL_ATTACHMENT,"DEPTH_STENCIL_ATTACHMENT");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_TEST,"DEPTH_TEST");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_WRITEMASK,"DEPTH_WRITEMASK");
	HX_VISIT_MEMBER_NAME(GL_obj::DITHER,"DITHER");
	HX_VISIT_MEMBER_NAME(GL_obj::DONT_CARE,"DONT_CARE");
	HX_VISIT_MEMBER_NAME(GL_obj::DST_ALPHA,"DST_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::DST_COLOR,"DST_COLOR");
	HX_VISIT_MEMBER_NAME(GL_obj::DYNAMIC_DRAW,"DYNAMIC_DRAW");
	HX_VISIT_MEMBER_NAME(GL_obj::ELEMENT_ARRAY_BUFFER,"ELEMENT_ARRAY_BUFFER");
	HX_VISIT_MEMBER_NAME(GL_obj::ELEMENT_ARRAY_BUFFER_BINDING,"ELEMENT_ARRAY_BUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(GL_obj::EQUAL,"EQUAL");
	HX_VISIT_MEMBER_NAME(GL_obj::FASTEST,"FASTEST");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT,"FLOAT");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT_MAT2,"FLOAT_MAT2");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT_MAT3,"FLOAT_MAT3");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT_MAT4,"FLOAT_MAT4");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT_VEC2,"FLOAT_VEC2");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT_VEC3,"FLOAT_VEC3");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT_VEC4,"FLOAT_VEC4");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAGMENT_SHADER,"FRAGMENT_SHADER");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER,"FRAMEBUFFER");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_NAME,"FRAMEBUFFER_ATTACHMENT_OBJECT_NAME");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE,"FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE,"FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL,"FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_BINDING,"FRAMEBUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_COMPLETE,"FRAMEBUFFER_COMPLETE");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_INCOMPLETE_ATTACHMENT,"FRAMEBUFFER_INCOMPLETE_ATTACHMENT");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_INCOMPLETE_DIMENSIONS,"FRAMEBUFFER_INCOMPLETE_DIMENSIONS");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT,"FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_UNSUPPORTED,"FRAMEBUFFER_UNSUPPORTED");
	HX_VISIT_MEMBER_NAME(GL_obj::FRONT,"FRONT");
	HX_VISIT_MEMBER_NAME(GL_obj::FRONT_AND_BACK,"FRONT_AND_BACK");
	HX_VISIT_MEMBER_NAME(GL_obj::FRONT_FACE,"FRONT_FACE");
	HX_VISIT_MEMBER_NAME(GL_obj::FUNC_ADD,"FUNC_ADD");
	HX_VISIT_MEMBER_NAME(GL_obj::FUNC_REVERSE_SUBTRACT,"FUNC_REVERSE_SUBTRACT");
	HX_VISIT_MEMBER_NAME(GL_obj::FUNC_SUBTRACT,"FUNC_SUBTRACT");
	HX_VISIT_MEMBER_NAME(GL_obj::GENERATE_MIPMAP_HINT,"GENERATE_MIPMAP_HINT");
	HX_VISIT_MEMBER_NAME(GL_obj::GEQUAL,"GEQUAL");
	HX_VISIT_MEMBER_NAME(GL_obj::GREATER,"GREATER");
	HX_VISIT_MEMBER_NAME(GL_obj::GREEN_BITS,"GREEN_BITS");
	HX_VISIT_MEMBER_NAME(GL_obj::HIGH_FLOAT,"HIGH_FLOAT");
	HX_VISIT_MEMBER_NAME(GL_obj::HIGH_INT,"HIGH_INT");
	HX_VISIT_MEMBER_NAME(GL_obj::INCR,"INCR");
	HX_VISIT_MEMBER_NAME(GL_obj::INCR_WRAP,"INCR_WRAP");
	HX_VISIT_MEMBER_NAME(GL_obj::INT,"INT");
	HX_VISIT_MEMBER_NAME(GL_obj::INT_VEC2,"INT_VEC2");
	HX_VISIT_MEMBER_NAME(GL_obj::INT_VEC3,"INT_VEC3");
	HX_VISIT_MEMBER_NAME(GL_obj::INT_VEC4,"INT_VEC4");
	HX_VISIT_MEMBER_NAME(GL_obj::INVALID_ENUM,"INVALID_ENUM");
	HX_VISIT_MEMBER_NAME(GL_obj::INVALID_FRAMEBUFFER_OPERATION,"INVALID_FRAMEBUFFER_OPERATION");
	HX_VISIT_MEMBER_NAME(GL_obj::INVALID_OPERATION,"INVALID_OPERATION");
	HX_VISIT_MEMBER_NAME(GL_obj::INVALID_VALUE,"INVALID_VALUE");
	HX_VISIT_MEMBER_NAME(GL_obj::INVERT,"INVERT");
	HX_VISIT_MEMBER_NAME(GL_obj::KEEP,"KEEP");
	HX_VISIT_MEMBER_NAME(GL_obj::LEQUAL,"LEQUAL");
	HX_VISIT_MEMBER_NAME(GL_obj::LESS,"LESS");
	HX_VISIT_MEMBER_NAME(GL_obj::LINEAR,"LINEAR");
	HX_VISIT_MEMBER_NAME(GL_obj::LINEAR_MIPMAP_LINEAR,"LINEAR_MIPMAP_LINEAR");
	HX_VISIT_MEMBER_NAME(GL_obj::LINEAR_MIPMAP_NEAREST,"LINEAR_MIPMAP_NEAREST");
	HX_VISIT_MEMBER_NAME(GL_obj::LINES,"LINES");
	HX_VISIT_MEMBER_NAME(GL_obj::LINE_LOOP,"LINE_LOOP");
	HX_VISIT_MEMBER_NAME(GL_obj::LINE_STRIP,"LINE_STRIP");
	HX_VISIT_MEMBER_NAME(GL_obj::LINE_WIDTH,"LINE_WIDTH");
	HX_VISIT_MEMBER_NAME(GL_obj::LINK_STATUS,"LINK_STATUS");
	HX_VISIT_MEMBER_NAME(GL_obj::LOW_FLOAT,"LOW_FLOAT");
	HX_VISIT_MEMBER_NAME(GL_obj::LOW_INT,"LOW_INT");
	HX_VISIT_MEMBER_NAME(GL_obj::LUMINANCE,"LUMINANCE");
	HX_VISIT_MEMBER_NAME(GL_obj::LUMINANCE_ALPHA,"LUMINANCE_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_COMBINED_TEXTURE_IMAGE_UNITS,"MAX_COMBINED_TEXTURE_IMAGE_UNITS");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_CUBE_MAP_TEXTURE_SIZE,"MAX_CUBE_MAP_TEXTURE_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_FRAGMENT_UNIFORM_VECTORS,"MAX_FRAGMENT_UNIFORM_VECTORS");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_RENDERBUFFER_SIZE,"MAX_RENDERBUFFER_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_TEXTURE_IMAGE_UNITS,"MAX_TEXTURE_IMAGE_UNITS");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_TEXTURE_SIZE,"MAX_TEXTURE_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_VARYING_VECTORS,"MAX_VARYING_VECTORS");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_VERTEX_ATTRIBS,"MAX_VERTEX_ATTRIBS");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_VERTEX_TEXTURE_IMAGE_UNITS,"MAX_VERTEX_TEXTURE_IMAGE_UNITS");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_VERTEX_UNIFORM_VECTORS,"MAX_VERTEX_UNIFORM_VECTORS");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_VIEWPORT_DIMS,"MAX_VIEWPORT_DIMS");
	HX_VISIT_MEMBER_NAME(GL_obj::MEDIUM_FLOAT,"MEDIUM_FLOAT");
	HX_VISIT_MEMBER_NAME(GL_obj::MEDIUM_INT,"MEDIUM_INT");
	HX_VISIT_MEMBER_NAME(GL_obj::MIRRORED_REPEAT,"MIRRORED_REPEAT");
	HX_VISIT_MEMBER_NAME(GL_obj::NEAREST,"NEAREST");
	HX_VISIT_MEMBER_NAME(GL_obj::NEAREST_MIPMAP_LINEAR,"NEAREST_MIPMAP_LINEAR");
	HX_VISIT_MEMBER_NAME(GL_obj::NEAREST_MIPMAP_NEAREST,"NEAREST_MIPMAP_NEAREST");
	HX_VISIT_MEMBER_NAME(GL_obj::NEVER,"NEVER");
	HX_VISIT_MEMBER_NAME(GL_obj::NICEST,"NICEST");
	HX_VISIT_MEMBER_NAME(GL_obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(GL_obj::NOTEQUAL,"NOTEQUAL");
	HX_VISIT_MEMBER_NAME(GL_obj::NO_ERROR_GL,"NO_ERROR_GL");
	HX_VISIT_MEMBER_NAME(GL_obj::ONE,"ONE");
	HX_VISIT_MEMBER_NAME(GL_obj::ONE_MINUS_CONSTANT_ALPHA,"ONE_MINUS_CONSTANT_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::ONE_MINUS_CONSTANT_COLOR,"ONE_MINUS_CONSTANT_COLOR");
	HX_VISIT_MEMBER_NAME(GL_obj::ONE_MINUS_DST_ALPHA,"ONE_MINUS_DST_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::ONE_MINUS_DST_COLOR,"ONE_MINUS_DST_COLOR");
	HX_VISIT_MEMBER_NAME(GL_obj::ONE_MINUS_SRC_ALPHA,"ONE_MINUS_SRC_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::ONE_MINUS_SRC_COLOR,"ONE_MINUS_SRC_COLOR");
	HX_VISIT_MEMBER_NAME(GL_obj::OUT_OF_MEMORY,"OUT_OF_MEMORY");
	HX_VISIT_MEMBER_NAME(GL_obj::PACK_ALIGNMENT,"PACK_ALIGNMENT");
	HX_VISIT_MEMBER_NAME(GL_obj::POINTS,"POINTS");
	HX_VISIT_MEMBER_NAME(GL_obj::POLYGON_OFFSET_FACTOR,"POLYGON_OFFSET_FACTOR");
	HX_VISIT_MEMBER_NAME(GL_obj::POLYGON_OFFSET_FILL,"POLYGON_OFFSET_FILL");
	HX_VISIT_MEMBER_NAME(GL_obj::POLYGON_OFFSET_UNITS,"POLYGON_OFFSET_UNITS");
	HX_VISIT_MEMBER_NAME(GL_obj::RED_BITS,"RED_BITS");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER,"RENDERBUFFER");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_ALPHA_SIZE,"RENDERBUFFER_ALPHA_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_BINDING,"RENDERBUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_BLUE_SIZE,"RENDERBUFFER_BLUE_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_DEPTH_SIZE,"RENDERBUFFER_DEPTH_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_GREEN_SIZE,"RENDERBUFFER_GREEN_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_HEIGHT,"RENDERBUFFER_HEIGHT");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_INTERNAL_FORMAT,"RENDERBUFFER_INTERNAL_FORMAT");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_RED_SIZE,"RENDERBUFFER_RED_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_STENCIL_SIZE,"RENDERBUFFER_STENCIL_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_WIDTH,"RENDERBUFFER_WIDTH");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERER,"RENDERER");
	HX_VISIT_MEMBER_NAME(GL_obj::REPEAT,"REPEAT");
	HX_VISIT_MEMBER_NAME(GL_obj::REPLACE,"REPLACE");
	HX_VISIT_MEMBER_NAME(GL_obj::RGB,"RGB");
	HX_VISIT_MEMBER_NAME(GL_obj::RGB565,"RGB565");
	HX_VISIT_MEMBER_NAME(GL_obj::RGB5_A1,"RGB5_A1");
	HX_VISIT_MEMBER_NAME(GL_obj::RGBA,"RGBA");
	HX_VISIT_MEMBER_NAME(GL_obj::RGBA4,"RGBA4");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLER_2D,"SAMPLER_2D");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLER_CUBE,"SAMPLER_CUBE");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLES,"SAMPLES");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLE_ALPHA_TO_COVERAGE,"SAMPLE_ALPHA_TO_COVERAGE");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLE_BUFFERS,"SAMPLE_BUFFERS");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLE_COVERAGE,"SAMPLE_COVERAGE");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLE_COVERAGE_INVERT,"SAMPLE_COVERAGE_INVERT");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLE_COVERAGE_VALUE,"SAMPLE_COVERAGE_VALUE");
	HX_VISIT_MEMBER_NAME(GL_obj::SCISSOR_BOX,"SCISSOR_BOX");
	HX_VISIT_MEMBER_NAME(GL_obj::SCISSOR_TEST,"SCISSOR_TEST");
	HX_VISIT_MEMBER_NAME(GL_obj::SHADER_TYPE,"SHADER_TYPE");
	HX_VISIT_MEMBER_NAME(GL_obj::SHADING_LANGUAGE_VERSION,"SHADING_LANGUAGE_VERSION");
	HX_VISIT_MEMBER_NAME(GL_obj::SHORT,"SHORT");
	HX_VISIT_MEMBER_NAME(GL_obj::SRC_ALPHA,"SRC_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::SRC_ALPHA_SATURATE,"SRC_ALPHA_SATURATE");
	HX_VISIT_MEMBER_NAME(GL_obj::SRC_COLOR,"SRC_COLOR");
	HX_VISIT_MEMBER_NAME(GL_obj::STATIC_DRAW,"STATIC_DRAW");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_ATTACHMENT,"STENCIL_ATTACHMENT");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BACK_FAIL,"STENCIL_BACK_FAIL");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BACK_FUNC,"STENCIL_BACK_FUNC");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BACK_PASS_DEPTH_FAIL,"STENCIL_BACK_PASS_DEPTH_FAIL");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BACK_PASS_DEPTH_PASS,"STENCIL_BACK_PASS_DEPTH_PASS");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BACK_REF,"STENCIL_BACK_REF");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BACK_VALUE_MASK,"STENCIL_BACK_VALUE_MASK");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BACK_WRITEMASK,"STENCIL_BACK_WRITEMASK");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BITS,"STENCIL_BITS");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BUFFER_BIT,"STENCIL_BUFFER_BIT");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_CLEAR_VALUE,"STENCIL_CLEAR_VALUE");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_FAIL,"STENCIL_FAIL");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_FUNC,"STENCIL_FUNC");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_INDEX,"STENCIL_INDEX");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_INDEX8,"STENCIL_INDEX8");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_PASS_DEPTH_FAIL,"STENCIL_PASS_DEPTH_FAIL");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_PASS_DEPTH_PASS,"STENCIL_PASS_DEPTH_PASS");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_REF,"STENCIL_REF");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_TEST,"STENCIL_TEST");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_VALUE_MASK,"STENCIL_VALUE_MASK");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_WRITEMASK,"STENCIL_WRITEMASK");
	HX_VISIT_MEMBER_NAME(GL_obj::STREAM_DRAW,"STREAM_DRAW");
	HX_VISIT_MEMBER_NAME(GL_obj::SUBPIXEL_BITS,"SUBPIXEL_BITS");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE,"TEXTURE");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE0,"TEXTURE0");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE1,"TEXTURE1");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE10,"TEXTURE10");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE11,"TEXTURE11");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE12,"TEXTURE12");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE13,"TEXTURE13");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE14,"TEXTURE14");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE15,"TEXTURE15");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE16,"TEXTURE16");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE17,"TEXTURE17");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE18,"TEXTURE18");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE19,"TEXTURE19");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE2,"TEXTURE2");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE20,"TEXTURE20");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE21,"TEXTURE21");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE22,"TEXTURE22");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE23,"TEXTURE23");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE24,"TEXTURE24");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE25,"TEXTURE25");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE26,"TEXTURE26");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE27,"TEXTURE27");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE28,"TEXTURE28");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE29,"TEXTURE29");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE3,"TEXTURE3");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE30,"TEXTURE30");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE31,"TEXTURE31");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE4,"TEXTURE4");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE5,"TEXTURE5");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE6,"TEXTURE6");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE7,"TEXTURE7");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE8,"TEXTURE8");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE9,"TEXTURE9");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_2D,"TEXTURE_2D");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_BINDING_2D,"TEXTURE_BINDING_2D");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_BINDING_CUBE_MAP,"TEXTURE_BINDING_CUBE_MAP");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP,"TEXTURE_CUBE_MAP");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_X,"TEXTURE_CUBE_MAP_NEGATIVE_X");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_Y,"TEXTURE_CUBE_MAP_NEGATIVE_Y");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_Z,"TEXTURE_CUBE_MAP_NEGATIVE_Z");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_POSITIVE_X,"TEXTURE_CUBE_MAP_POSITIVE_X");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_POSITIVE_Y,"TEXTURE_CUBE_MAP_POSITIVE_Y");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_POSITIVE_Z,"TEXTURE_CUBE_MAP_POSITIVE_Z");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_MAG_FILTER,"TEXTURE_MAG_FILTER");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_MIN_FILTER,"TEXTURE_MIN_FILTER");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_WRAP_S,"TEXTURE_WRAP_S");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_WRAP_T,"TEXTURE_WRAP_T");
	HX_VISIT_MEMBER_NAME(GL_obj::TRIANGLES,"TRIANGLES");
	HX_VISIT_MEMBER_NAME(GL_obj::TRIANGLE_FAN,"TRIANGLE_FAN");
	HX_VISIT_MEMBER_NAME(GL_obj::TRIANGLE_STRIP,"TRIANGLE_STRIP");
	HX_VISIT_MEMBER_NAME(GL_obj::UNPACK_ALIGNMENT,"UNPACK_ALIGNMENT");
	HX_VISIT_MEMBER_NAME(GL_obj::UNPACK_COLORSPACE_CONVERSION_WEBGL,"UNPACK_COLORSPACE_CONVERSION_WEBGL");
	HX_VISIT_MEMBER_NAME(GL_obj::UNPACK_FLIP_Y_WEBGL,"UNPACK_FLIP_Y_WEBGL");
	HX_VISIT_MEMBER_NAME(GL_obj::UNPACK_PREMULTIPLY_ALPHA_WEBGL,"UNPACK_PREMULTIPLY_ALPHA_WEBGL");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNED_BYTE,"UNSIGNED_BYTE");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNED_INT,"UNSIGNED_INT");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNED_SHORT,"UNSIGNED_SHORT");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNED_SHORT_4_4_4_4,"UNSIGNED_SHORT_4_4_4_4");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNED_SHORT_5_5_5_1,"UNSIGNED_SHORT_5_5_5_1");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNED_SHORT_5_6_5,"UNSIGNED_SHORT_5_6_5");
	HX_VISIT_MEMBER_NAME(GL_obj::VALIDATE_STATUS,"VALIDATE_STATUS");
	HX_VISIT_MEMBER_NAME(GL_obj::VENDOR,"VENDOR");
	HX_VISIT_MEMBER_NAME(GL_obj::VERSION,"VERSION");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_BUFFER_BINDING,"VERTEX_ATTRIB_ARRAY_BUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_ENABLED,"VERTEX_ATTRIB_ARRAY_ENABLED");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_NORMALIZED,"VERTEX_ATTRIB_ARRAY_NORMALIZED");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_POINTER,"VERTEX_ATTRIB_ARRAY_POINTER");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_SIZE,"VERTEX_ATTRIB_ARRAY_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_STRIDE,"VERTEX_ATTRIB_ARRAY_STRIDE");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_TYPE,"VERTEX_ATTRIB_ARRAY_TYPE");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_SHADER,"VERTEX_SHADER");
	HX_VISIT_MEMBER_NAME(GL_obj::VIEWPORT,"VIEWPORT");
	HX_VISIT_MEMBER_NAME(GL_obj::ZERO,"ZERO");
	HX_VISIT_MEMBER_NAME(GL_obj::VAO_ENABLED,"VAO_ENABLED");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_SRGB,"TEXTURE_SRGB");
	HX_VISIT_MEMBER_NAME(GL_obj::SRGB,"SRGB");
	HX_VISIT_MEMBER_NAME(GL_obj::SRGB_ALPHA,"SRGB_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::SRGB8_ALPHA8,"SRGB8_ALPHA8");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING,"FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING");
	HX_VISIT_MEMBER_NAME(GL_obj::HALF_FLOAT,"HALF_FLOAT");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_HALF,"TEXTURE_HALF");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_HALF_LINEAR,"TEXTURE_HALF_LINEAR");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_ANISOTROPY,"TEXTURE_ANISOTROPY");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_ANISOTROPY_ENABLED,"TEXTURE_ANISOTROPY_ENABLED");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_TEXTURE_ANISOTROPY,"MAX_TEXTURE_ANISOTROPY");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_FLOAT,"TEXTURE_FLOAT");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_FLOAT_LINEAR,"TEXTURE_FLOAT_LINEAR");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_DEPTH_ENABLED,"TEXTURE_DEPTH_ENABLED");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_ACTIVE_TEXTURE,"MAX_ACTIVE_TEXTURE");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_COMBINED_TEXTURE,"MAX_COMBINED_TEXTURE");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_FRAGMENT_UNIFORM_LENGTH,"MAX_FRAGMENT_UNIFORM_LENGTH");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_VERTEX_UNIFORM_LENGTH,"MAX_VERTEX_UNIFORM_LENGTH");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_VERTEX_TEXTURES,"MAX_VERTEX_TEXTURES");
	HX_VISIT_MEMBER_NAME(GL_obj::BONE_TEXTURE,"BONE_TEXTURE");
	HX_VISIT_MEMBER_NAME(GL_obj::VS_FLOAT_HIGHP,"VS_FLOAT_HIGHP");
	HX_VISIT_MEMBER_NAME(GL_obj::VS_INT_HIGHP,"VS_INT_HIGHP");
	HX_VISIT_MEMBER_NAME(GL_obj::FS_FLOAT_HIGHP,"FS_FLOAT_HIGHP");
	HX_VISIT_MEMBER_NAME(GL_obj::FS_INT_HIGHP,"FS_INT_HIGHP");
	HX_VISIT_MEMBER_NAME(GL_obj::_NULL,"NULL");
	HX_VISIT_MEMBER_NAME(GL_obj::INVALID,"INVALID");
	HX_VISIT_MEMBER_NAME(GL_obj::m_gl,"m_gl");
};

#endif

hx::Class GL_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("ACTIVE_ATTRIBUTES","\xf0","\xe5","\xc7","\x4a"),
	HX_HCSTRING("ACTIVE_TEXTURE","\x02","\x1a","\x22","\xce"),
	HX_HCSTRING("ACTIVE_UNIFORMS","\x98","\x7d","\x3a","\x2c"),
	HX_HCSTRING("ALIASED_LINE_WIDTH_RANGE","\xe9","\x22","\xd5","\x8a"),
	HX_HCSTRING("ALIASED_POINT_SIZE_RANGE","\xfe","\xf6","\xa4","\x7b"),
	HX_HCSTRING("ALPHA","\x3e","\xdf","\x84","\x9f"),
	HX_HCSTRING("ALPHA_BITS","\xe7","\xfe","\x7b","\xe0"),
	HX_HCSTRING("ALWAYS","\xcf","\xba","\x59","\xf9"),
	HX_HCSTRING("ARRAY_BUFFER","\x46","\x66","\x17","\xf4"),
	HX_HCSTRING("ARRAY_BUFFER_BINDING","\xec","\xd4","\xa9","\x79"),
	HX_HCSTRING("ATTACHED_SHADERS","\x73","\xd2","\x76","\x75"),
	HX_HCSTRING("BACK","\x27","\xa2","\xd1","\x2b"),
	HX_HCSTRING("BLEND","\x31","\x20","\xe3","\x32"),
	HX_HCSTRING("BLEND_COLOR","\x75","\xcb","\xc8","\x67"),
	HX_HCSTRING("BLEND_DST_ALPHA","\x56","\x25","\x32","\x74"),
	HX_HCSTRING("BLEND_DST_RGB","\x05","\x87","\xf5","\xec"),
	HX_HCSTRING("BLEND_EQUATION","\x9a","\x14","\x92","\x71"),
	HX_HCSTRING("BLEND_EQUATION_ALPHA","\x99","\xaa","\xae","\x37"),
	HX_HCSTRING("BLEND_EQUATION_RGB","\x88","\x25","\xeb","\x90"),
	HX_HCSTRING("BLEND_SRC_ALPHA","\x75","\xf7","\x37","\xd4"),
	HX_HCSTRING("BLEND_SRC_RGB","\x64","\x43","\x8c","\x2c"),
	HX_HCSTRING("BLUE_BITS","\x0b","\x26","\x60","\xa1"),
	HX_HCSTRING("BOOL","\x2a","\x4c","\xdc","\x2b"),
	HX_HCSTRING("BOOL_VEC2","\xf3","\x66","\x2b","\x2d"),
	HX_HCSTRING("BOOL_VEC3","\xf4","\x66","\x2b","\x2d"),
	HX_HCSTRING("BOOL_VEC4","\xf5","\x66","\x2b","\x2d"),
	HX_HCSTRING("BROWSER_DEFAULT_WEBGL","\x04","\x04","\x92","\xc0"),
	HX_HCSTRING("BUFFER_SIZE","\xa0","\x7b","\x91","\x4c"),
	HX_HCSTRING("BUFFER_USAGE","\x42","\x05","\x11","\xe0"),
	HX_HCSTRING("BYTE","\x08","\xe7","\xe3","\x2b"),
	HX_HCSTRING("CCW","\xb7","\x11","\x33","\x00"),
	HX_HCSTRING("CLAMP_TO_EDGE","\x1d","\xfc","\x5a","\x96"),
	HX_HCSTRING("COLOR_ATTACHMENT0","\xb1","\x9a","\xfe","\x86"),
	HX_HCSTRING("COLOR_BUFFER_BIT","\x6a","\xf7","\x74","\xfb"),
	HX_HCSTRING("COLOR_CLEAR_VALUE","\x83","\xa7","\x2e","\xf8"),
	HX_HCSTRING("COLOR_WRITEMASK","\xef","\xef","\xf9","\x14"),
	HX_HCSTRING("COMPILE_STATUS","\xde","\xcb","\x4e","\x8c"),
	HX_HCSTRING("COMPRESSED_TEXTURE_FORMATS","\x7a","\x13","\xe3","\x12"),
	HX_HCSTRING("CONSTANT_ALPHA","\xe3","\x9a","\xc4","\x9f"),
	HX_HCSTRING("CONSTANT_COLOR","\xe8","\x64","\x8a","\xc8"),
	HX_HCSTRING("CONTEXT_LOST_WEBGL","\x6e","\x67","\x71","\x45"),
	HX_HCSTRING("CULL_FACE","\x8a","\xa5","\xf4","\xcf"),
	HX_HCSTRING("CULL_FACE_MODE","\x78","\xbd","\x87","\xd1"),
	HX_HCSTRING("CURRENT_PROGRAM","\xfe","\x28","\xc0","\x3f"),
	HX_HCSTRING("CURRENT_VERTEX_ATTRIB","\x1f","\x8c","\x2f","\xab"),
	HX_HCSTRING("CW","\xb4","\x3a","\x00","\x00"),
	HX_HCSTRING("DECR","\x70","\x18","\x27","\x2d"),
	HX_HCSTRING("DECR_WRAP","\x39","\x6f","\xeb","\x0a"),
	HX_HCSTRING("DELETE_STATUS","\x06","\xe4","\x98","\x1e"),
	HX_HCSTRING("DEPTH_ATTACHMENT","\xff","\x54","\xcd","\xe9"),
	HX_HCSTRING("DEPTH_BITS","\x22","\x9f","\x42","\x1c"),
	HX_HCSTRING("DEPTH_BUFFER_BIT","\xca","\x5b","\xce","\xc6"),
	HX_HCSTRING("DEPTH_CLEAR_VALUE","\x23","\x17","\x0d","\x1b"),
	HX_HCSTRING("DEPTH_COMPONENT","\x01","\x1f","\x62","\x0f"),
	HX_HCSTRING("DEPTH_COMPONENT16","\x26","\xcc","\x68","\x43"),
	HX_HCSTRING("DEPTH_FUNC","\x60","\x8f","\xf0","\x1e"),
	HX_HCSTRING("DEPTH_RANGE","\x01","\x9a","\x23","\xcf"),
	HX_HCSTRING("DEPTH_STENCIL","\x40","\x2f","\x20","\x2b"),
	HX_HCSTRING("DEPTH_STENCIL_ATTACHMENT","\xc2","\xe1","\xe1","\x9f"),
	HX_HCSTRING("DEPTH_TEST","\x6e","\x6c","\x25","\x28"),
	HX_HCSTRING("DEPTH_WRITEMASK","\x8f","\x37","\x3f","\x66"),
	HX_HCSTRING("DITHER","\xe6","\xac","\x41","\x70"),
	HX_HCSTRING("DONT_CARE","\x7f","\x9b","\xc1","\xcf"),
	HX_HCSTRING("DST_ALPHA","\x24","\x02","\xf2","\xd3"),
	HX_HCSTRING("DST_COLOR","\x29","\xcc","\xb7","\xfc"),
	HX_HCSTRING("DYNAMIC_DRAW","\x24","\x04","\x1f","\x24"),
	HX_HCSTRING("ELEMENT_ARRAY_BUFFER","\x09","\x05","\x53","\x3d"),
	HX_HCSTRING("ELEMENT_ARRAY_BUFFER_BINDING","\xaf","\x6e","\x96","\xa2"),
	HX_HCSTRING("EQUAL","\x94","\x07","\x71","\xf0"),
	HX_HCSTRING("FASTEST","\x0a","\xa3","\x0d","\x5e"),
	HX_HCSTRING("FLOAT","\x7c","\xfd","\x84","\x80"),
	HX_HCSTRING("FLOAT_MAT2","\x95","\xc6","\xae","\xe5"),
	HX_HCSTRING("FLOAT_MAT3","\x96","\xc6","\xae","\xe5"),
	HX_HCSTRING("FLOAT_MAT4","\x97","\xc6","\xae","\xe5"),
	HX_HCSTRING("FLOAT_VEC2","\x61","\xac","\xa4","\xeb"),
	HX_HCSTRING("FLOAT_VEC3","\x62","\xac","\xa4","\xeb"),
	HX_HCSTRING("FLOAT_VEC4","\x63","\xac","\xa4","\xeb"),
	HX_HCSTRING("FRAGMENT_SHADER","\xf4","\x26","\x78","\xe9"),
	HX_HCSTRING("FRAMEBUFFER","\xcd","\x20","\x84","\x50"),
	HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_OBJECT_NAME","\xe1","\xa1","\x3a","\x4c"),
	HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE","\x50","\x22","\x44","\x50"),
	HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE","\xdc","\x4c","\x39","\x8a"),
	HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL","\xf6","\x9b","\xba","\x81"),
	HX_HCSTRING("FRAMEBUFFER_BINDING","\x73","\xee","\xae","\xc5"),
	HX_HCSTRING("FRAMEBUFFER_COMPLETE","\xab","\x65","\x7d","\xea"),
	HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_ATTACHMENT","\xf2","\xcf","\xb7","\x1d"),
	HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_DIMENSIONS","\x5c","\x86","\xe4","\x1c"),
	HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT","\x8b","\x0a","\xcd","\x77"),
	HX_HCSTRING("FRAMEBUFFER_UNSUPPORTED","\xe3","\xa6","\x4e","\xc8"),
	HX_HCSTRING("FRONT","\x89","\x50","\x7c","\x84"),
	HX_HCSTRING("FRONT_AND_BACK","\xa5","\x3d","\x6a","\xc1"),
	HX_HCSTRING("FRONT_FACE","\x53","\xb7","\x4d","\xef"),
	HX_HCSTRING("FUNC_ADD","\x46","\x78","\x17","\x75"),
	HX_HCSTRING("FUNC_REVERSE_SUBTRACT","\xcc","\x8d","\xef","\xf3"),
	HX_HCSTRING("FUNC_SUBTRACT","\xaf","\xc0","\xa0","\x17"),
	HX_HCSTRING("GENERATE_MIPMAP_HINT","\x94","\xd3","\xd5","\x83"),
	HX_HCSTRING("GEQUAL","\xed","\xa5","\xc7","\x53"),
	HX_HCSTRING("GREATER","\xda","\x64","\x94","\x37"),
	HX_HCSTRING("GREEN_BITS","\x62","\xa9","\x9b","\x94"),
	HX_HCSTRING("HIGH_FLOAT","\x9f","\xf9","\x3b","\x47"),
	HX_HCSTRING("HIGH_INT","\x32","\x46","\x02","\x09"),
	HX_HCSTRING("INCR","\xd4","\xfd","\x7b","\x30"),
	HX_HCSTRING("INCR_WRAP","\x55","\x7f","\x68","\x2c"),
	HX_HCSTRING("INT","\xcf","\xa8","\x37","\x00"),
	HX_HCSTRING("INT_VEC2","\x2e","\x14","\x05","\x7d"),
	HX_HCSTRING("INT_VEC3","\x2f","\x14","\x05","\x7d"),
	HX_HCSTRING("INT_VEC4","\x30","\x14","\x05","\x7d"),
	HX_HCSTRING("INVALID_ENUM","\xa9","\x74","\x70","\x13"),
	HX_HCSTRING("INVALID_FRAMEBUFFER_OPERATION","\x2d","\xd4","\xc5","\x43"),
	HX_HCSTRING("INVALID_OPERATION","\x5f","\xb1","\xc8","\x29"),
	HX_HCSTRING("INVALID_VALUE","\xa9","\xe8","\x26","\xb0"),
	HX_HCSTRING("INVERT","\x16","\x93","\x5b","\x52"),
	HX_HCSTRING("KEEP","\x85","\x98","\xc7","\x31"),
	HX_HCSTRING("LEQUAL","\xc8","\x73","\x90","\x53"),
	HX_HCSTRING("LESS","\x59","\xdb","\x70","\x32"),
	HX_HCSTRING("LINEAR","\xe5","\xfd","\x22","\x9f"),
	HX_HCSTRING("LINEAR_MIPMAP_LINEAR","\xe2","\x8b","\xf8","\x99"),
	HX_HCSTRING("LINEAR_MIPMAP_NEAREST","\xa1","\x9b","\xa4","\x65"),
	HX_HCSTRING("LINES","\xdf","\x15","\xf0","\xf2"),
	HX_HCSTRING("LINE_LOOP","\xcf","\x55","\xc1","\x16"),
	HX_HCSTRING("LINE_STRIP","\xed","\x20","\x88","\xdd"),
	HX_HCSTRING("LINE_WIDTH","\x1b","\x84","\xd2","\x23"),
	HX_HCSTRING("LINK_STATUS","\x17","\x18","\x8f","\x45"),
	HX_HCSTRING("LOW_FLOAT","\x31","\x04","\x74","\xe4"),
	HX_HCSTRING("LOW_INT","\x44","\x28","\x70","\x45"),
	HX_HCSTRING("LUMINANCE","\xd8","\xa7","\xe0","\x63"),
	HX_HCSTRING("LUMINANCE_ALPHA","\x57","\x40","\xe0","\xbd"),
	HX_HCSTRING("MAX_COMBINED_TEXTURE_IMAGE_UNITS","\xa8","\xd1","\xa6","\x77"),
	HX_HCSTRING("MAX_CUBE_MAP_TEXTURE_SIZE","\x77","\xb9","\x24","\x9d"),
	HX_HCSTRING("MAX_FRAGMENT_UNIFORM_VECTORS","\x71","\x49","\xf5","\x0a"),
	HX_HCSTRING("MAX_RENDERBUFFER_SIZE","\x4f","\xd4","\x3d","\x65"),
	HX_HCSTRING("MAX_TEXTURE_IMAGE_UNITS","\xcc","\x6c","\x61","\x54"),
	HX_HCSTRING("MAX_TEXTURE_SIZE","\xe0","\x0b","\x5b","\xfb"),
	HX_HCSTRING("MAX_VARYING_VECTORS","\x06","\xb9","\xf7","\x37"),
	HX_HCSTRING("MAX_VERTEX_ATTRIBS","\x49","\xc9","\x15","\x5f"),
	HX_HCSTRING("MAX_VERTEX_TEXTURE_IMAGE_UNITS","\xc7","\x90","\x95","\x2b"),
	HX_HCSTRING("MAX_VERTEX_UNIFORM_VECTORS","\x45","\x6c","\x16","\x5a"),
	HX_HCSTRING("MAX_VIEWPORT_DIMS","\xa9","\x2d","\xfb","\x08"),
	HX_HCSTRING("MEDIUM_FLOAT","\xf2","\x8a","\x46","\xb9"),
	HX_HCSTRING("MEDIUM_INT","\xc5","\xcc","\xaf","\x4f"),
	HX_HCSTRING("MIRRORED_REPEAT","\x5c","\x94","\x80","\x4a"),
	HX_HCSTRING("NEAREST","\x3e","\xec","\x9d","\xe5"),
	HX_HCSTRING("NEAREST_MIPMAP_LINEAR","\xfb","\x83","\xf2","\x3b"),
	HX_HCSTRING("NEAREST_MIPMAP_NEAREST","\x68","\xb9","\x63","\x7e"),
	HX_HCSTRING("NEVER","\x6c","\x76","\x1e","\x17"),
	HX_HCSTRING("NICEST","\x7e","\x6d","\x94","\x64"),
	HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),
	HX_HCSTRING("NOTEQUAL","\xc1","\xc1","\xe9","\xc8"),
	HX_HCSTRING("NO_ERROR_GL","\x9a","\xac","\x35","\x1b"),
	HX_HCSTRING("ONE","\x46","\x36","\x3c","\x00"),
	HX_HCSTRING("ONE_MINUS_CONSTANT_ALPHA","\x0b","\x6f","\x21","\xde"),
	HX_HCSTRING("ONE_MINUS_CONSTANT_COLOR","\x10","\x39","\xe7","\x06"),
	HX_HCSTRING("ONE_MINUS_DST_ALPHA","\xfc","\x9e","\x15","\xc0"),
	HX_HCSTRING("ONE_MINUS_DST_COLOR","\x01","\x69","\xdb","\xe8"),
	HX_HCSTRING("ONE_MINUS_SRC_ALPHA","\x1b","\x71","\x1b","\x20"),
	HX_HCSTRING("ONE_MINUS_SRC_COLOR","\x20","\x3b","\xe1","\x48"),
	HX_HCSTRING("OUT_OF_MEMORY","\x18","\xf2","\x97","\xe1"),
	HX_HCSTRING("PACK_ALIGNMENT","\x9d","\xd6","\x85","\xc3"),
	HX_HCSTRING("POINTS","\x23","\xbe","\xb0","\xa9"),
	HX_HCSTRING("POLYGON_OFFSET_FACTOR","\x56","\x6b","\x12","\x2a"),
	HX_HCSTRING("POLYGON_OFFSET_FILL","\x4a","\x3d","\x32","\xac"),
	HX_HCSTRING("POLYGON_OFFSET_UNITS","\xa8","\xe8","\x11","\xa6"),
	HX_HCSTRING("RED_BITS","\x14","\xf8","\x9e","\x96"),
	HX_HCSTRING("RENDERBUFFER","\xd6","\xa4","\xa4","\xa9"),
	HX_HCSTRING("RENDERBUFFER_ALPHA_SIZE","\xab","\xf0","\x5d","\x87"),
	HX_HCSTRING("RENDERBUFFER_BINDING","\x7c","\x23","\x70","\x23"),
	HX_HCSTRING("RENDERBUFFER_BLUE_SIZE","\xdd","\x93","\x86","\xdd"),
	HX_HCSTRING("RENDERBUFFER_DEPTH_SIZE","\xe6","\x90","\x24","\xc3"),
	HX_HCSTRING("RENDERBUFFER_GREEN_SIZE","\x26","\x9b","\x7d","\x3b"),
	HX_HCSTRING("RENDERBUFFER_HEIGHT","\x70","\x07","\x69","\xd7"),
	HX_HCSTRING("RENDERBUFFER_INTERNAL_FORMAT","\x90","\xda","\xeb","\xb5"),
	HX_HCSTRING("RENDERBUFFER_RED_SIZE","\x98","\xa5","\x58","\x5e"),
	HX_HCSTRING("RENDERBUFFER_STENCIL_SIZE","\x8d","\xd5","\x5a","\x9d"),
	HX_HCSTRING("RENDERBUFFER_WIDTH","\x7d","\x1e","\xe1","\x43"),
	HX_HCSTRING("RENDERER","\x43","\x55","\x61","\x0c"),
	HX_HCSTRING("REPEAT","\x5b","\x43","\xff","\xb8"),
	HX_HCSTRING("REPLACE","\x14","\x1c","\xfc","\x2a"),
	HX_HCSTRING("RGB","\xed","\x76","\x3e","\x00"),
	HX_HCSTRING("RGB565","\xe7","\x41","\x7f","\xd6"),
	HX_HCSTRING("RGB5_A1","\x47","\x8f","\xf9","\xd8"),
	HX_HCSTRING("RGBA","\xb4","\x98","\x69","\x36"),
	HX_HCSTRING("RGBA4","\x00","\x05","\xfc","\x65"),
	HX_HCSTRING("SAMPLER_2D","\x09","\x2a","\x93","\x6e"),
	HX_HCSTRING("SAMPLER_CUBE","\xec","\x3e","\x82","\xa4"),
	HX_HCSTRING("SAMPLES","\xe9","\x98","\x9d","\x03"),
	HX_HCSTRING("SAMPLE_ALPHA_TO_COVERAGE","\x16","\x3e","\x56","\xe1"),
	HX_HCSTRING("SAMPLE_BUFFERS","\xfe","\x16","\x71","\x3c"),
	HX_HCSTRING("SAMPLE_COVERAGE","\xdd","\xb7","\x0e","\xc1"),
	HX_HCSTRING("SAMPLE_COVERAGE_INVERT","\x78","\x52","\xa5","\xcd"),
	HX_HCSTRING("SAMPLE_COVERAGE_VALUE","\x2f","\x7a","\x07","\x69"),
	HX_HCSTRING("SCISSOR_BOX","\xe8","\x48","\x4c","\x55"),
	HX_HCSTRING("SCISSOR_TEST","\xb5","\xbe","\x51","\x59"),
	HX_HCSTRING("SHADER_TYPE","\x54","\xe5","\x27","\x87"),
	HX_HCSTRING("SHADING_LANGUAGE_VERSION","\xe6","\xc4","\xef","\x70"),
	HX_HCSTRING("SHORT","\x5c","\xbc","\x15","\xfa"),
	HX_HCSTRING("SRC_ALPHA","\x43","\xd4","\xf7","\x33"),
	HX_HCSTRING("SRC_ALPHA_SATURATE","\xab","\xe2","\x3d","\x33"),
	HX_HCSTRING("SRC_COLOR","\x48","\x9e","\xbd","\x5c"),
	HX_HCSTRING("STATIC_DRAW","\x75","\x50","\x2f","\xba"),
	HX_HCSTRING("STENCIL_ATTACHMENT","\xa6","\x8c","\x28","\x01"),
	HX_HCSTRING("STENCIL_BACK_FAIL","\xd3","\x46","\x93","\x90"),
	HX_HCSTRING("STENCIL_BACK_FUNC","\x39","\x78","\xa2","\x90"),
	HX_HCSTRING("STENCIL_BACK_PASS_DEPTH_FAIL","\x13","\x23","\x0e","\x34"),
	HX_HCSTRING("STENCIL_BACK_PASS_DEPTH_PASS","\x06","\x4e","\xaa","\x3a"),
	HX_HCSTRING("STENCIL_BACK_REF","\xde","\x45","\xb8","\x08"),
	HX_HCSTRING("STENCIL_BACK_VALUE_MASK","\x8f","\xb2","\xc4","\x88"),
	HX_HCSTRING("STENCIL_BACK_WRITEMASK","\x16","\x9c","\x15","\xc2"),
	HX_HCSTRING("STENCIL_BITS","\x89","\x0f","\x87","\xc9"),
	HX_HCSTRING("STENCIL_BUFFER_BIT","\x71","\x93","\x29","\xde"),
	HX_HCSTRING("STENCIL_CLEAR_VALUE","\x9c","\x91","\x82","\x73"),
	HX_HCSTRING("STENCIL_FAIL","\x61","\xce","\x25","\xcc"),
	HX_HCSTRING("STENCIL_FUNC","\xc7","\xff","\x34","\xcc"),
	HX_HCSTRING("STENCIL_INDEX","\x0f","\x79","\xb6","\x97"),
	HX_HCSTRING("STENCIL_INDEX8","\x49","\x74","\xf3","\x27"),
	HX_HCSTRING("STENCIL_PASS_DEPTH_FAIL","\x45","\xca","\xb9","\xc8"),
	HX_HCSTRING("STENCIL_PASS_DEPTH_PASS","\x38","\xf5","\x55","\xcf"),
	HX_HCSTRING("STENCIL_REF","\x10","\x6a","\xa5","\x3c"),
	HX_HCSTRING("STENCIL_TEST","\xd5","\xdc","\x69","\xd5"),
	HX_HCSTRING("STENCIL_VALUE_MASK","\x9d","\x58","\x5e","\xa0"),
	HX_HCSTRING("STENCIL_WRITEMASK","\xc8","\xf1","\xa6","\x49"),
	HX_HCSTRING("STREAM_DRAW","\x63","\x7f","\x28","\x15"),
	HX_HCSTRING("SUBPIXEL_BITS","\x1f","\xac","\x14","\x0a"),
	HX_HCSTRING("TEXTURE","\xbb","\x9c","\xb4","\x1e"),
	HX_HCSTRING("TEXTURE0","\x15","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE1","\x16","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE10","\x5a","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE11","\x5b","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE12","\x5c","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE13","\x5d","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE14","\x5e","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE15","\x5f","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE16","\x60","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE17","\x61","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE18","\x62","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE19","\x63","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE2","\x17","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE20","\x39","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE21","\x3a","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE22","\x3b","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE23","\x3c","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE24","\x3d","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE25","\x3e","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE26","\x3f","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE27","\x40","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE28","\x41","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE29","\x42","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE3","\x18","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE30","\x18","\xae","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE31","\x19","\xae","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE4","\x19","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE5","\x1a","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE6","\x1b","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE7","\x1c","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE8","\x1d","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE9","\x1e","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE_2D","\x16","\x0c","\xf8","\xa2"),
	HX_HCSTRING("TEXTURE_BINDING_2D","\x30","\xec","\x98","\xb1"),
	HX_HCSTRING("TEXTURE_BINDING_CUBE_MAP","\xd0","\x69","\x98","\x75"),
	HX_HCSTRING("TEXTURE_CUBE_MAP","\x36","\x7a","\xe1","\xad"),
	HX_HCSTRING("TEXTURE_CUBE_MAP_NEGATIVE_X","\x77","\x03","\xe2","\x6b"),
	HX_HCSTRING("TEXTURE_CUBE_MAP_NEGATIVE_Y","\x78","\x03","\xe2","\x6b"),
	HX_HCSTRING("TEXTURE_CUBE_MAP_NEGATIVE_Z","\x79","\x03","\xe2","\x6b"),
	HX_HCSTRING("TEXTURE_CUBE_MAP_POSITIVE_X","\xbb","\x1c","\xee","\x24"),
	HX_HCSTRING("TEXTURE_CUBE_MAP_POSITIVE_Y","\xbc","\x1c","\xee","\x24"),
	HX_HCSTRING("TEXTURE_CUBE_MAP_POSITIVE_Z","\xbd","\x1c","\xee","\x24"),
	HX_HCSTRING("TEXTURE_MAG_FILTER","\x88","\xff","\xd5","\x1e"),
	HX_HCSTRING("TEXTURE_MIN_FILTER","\x69","\x66","\xc2","\x46"),
	HX_HCSTRING("TEXTURE_WRAP_S","\xa2","\x2d","\xc3","\xfe"),
	HX_HCSTRING("TEXTURE_WRAP_T","\xa3","\x2d","\xc3","\xfe"),
	HX_HCSTRING("TRIANGLES","\x8b","\xa0","\x99","\x7a"),
	HX_HCSTRING("TRIANGLE_FAN","\x7c","\xee","\x2e","\x91"),
	HX_HCSTRING("TRIANGLE_STRIP","\xc1","\x66","\x6c","\xf6"),
	HX_HCSTRING("UNPACK_ALIGNMENT","\xb6","\x2a","\x2e","\x4b"),
	HX_HCSTRING("UNPACK_COLORSPACE_CONVERSION_WEBGL","\x9f","\xd9","\xf0","\xb9"),
	HX_HCSTRING("UNPACK_FLIP_Y_WEBGL","\x0e","\x9f","\x94","\x9d"),
	HX_HCSTRING("UNPACK_PREMULTIPLY_ALPHA_WEBGL","\x73","\x5d","\xcb","\xc6"),
	HX_HCSTRING("UNSIGNED_BYTE","\xd2","\x79","\x6b","\x01"),
	HX_HCSTRING("UNSIGNED_INT","\x45","\xfd","\xb9","\x1c"),
	HX_HCSTRING("UNSIGNED_SHORT","\x52","\x9a","\x2e","\xfb"),
	HX_HCSTRING("UNSIGNED_SHORT_4_4_4_4","\xa6","\x33","\x71","\x7b"),
	HX_HCSTRING("UNSIGNED_SHORT_5_5_5_1","\x26","\x01","\x6e","\x38"),
	HX_HCSTRING("UNSIGNED_SHORT_5_6_5","\x75","\xbb","\x16","\x8c"),
	HX_HCSTRING("VALIDATE_STATUS","\xfb","\x22","\x07","\xc6"),
	HX_HCSTRING("VENDOR","\x88","\x91","\x19","\x51"),
	HX_HCSTRING("VERSION","\xf8","\xba","\xc5","\xfc"),
	HX_HCSTRING("VERTEX_ATTRIB_ARRAY_BUFFER_BINDING","\xa6","\x80","\x67","\x97"),
	HX_HCSTRING("VERTEX_ATTRIB_ARRAY_ENABLED","\x61","\x99","\x09","\x66"),
	HX_HCSTRING("VERTEX_ATTRIB_ARRAY_NORMALIZED","\x37","\xb7","\x22","\x78"),
	HX_HCSTRING("VERTEX_ATTRIB_ARRAY_POINTER","\x9d","\x55","\xfa","\x38"),
	HX_HCSTRING("VERTEX_ATTRIB_ARRAY_SIZE","\xc1","\x07","\xfd","\x08"),
	HX_HCSTRING("VERTEX_ATTRIB_ARRAY_STRIDE","\x19","\x2b","\x41","\x58"),
	HX_HCSTRING("VERTEX_ATTRIB_ARRAY_TYPE","\xba","\x59","\xb2","\x09"),
	HX_HCSTRING("VERTEX_SHADER","\xe0","\x69","\x73","\x49"),
	HX_HCSTRING("VIEWPORT","\x66","\xdc","\x2a","\xf6"),
	HX_HCSTRING("ZERO","\x28","\xd7","\xb1","\x3b"),
	HX_HCSTRING("VAO_ENABLED","\xa6","\x10","\xdd","\x6d"),
	HX_HCSTRING("TEXTURE_SRGB","\xbe","\xa5","\xfe","\x6f"),
	HX_HCSTRING("SRGB","\x7a","\x2c","\x1b","\x37"),
	HX_HCSTRING("SRGB_ALPHA","\x79","\xea","\x6a","\x1a"),
	HX_HCSTRING("SRGB8_ALPHA8","\x1b","\xb6","\x71","\x35"),
	HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING","\x79","\xc9","\x9d","\x03"),
	HX_HCSTRING("HALF_FLOAT","\xb0","\xfe","\x81","\x7a"),
	HX_HCSTRING("TEXTURE_HALF","\xf7","\x6a","\xac","\x68"),
	HX_HCSTRING("TEXTURE_HALF_LINEAR","\x6d","\x01","\x5b","\x65"),
	HX_HCSTRING("TEXTURE_ANISOTROPY","\x46","\x30","\x90","\x43"),
	HX_HCSTRING("TEXTURE_ANISOTROPY_ENABLED","\x28","\x18","\x00","\x7d"),
	HX_HCSTRING("MAX_TEXTURE_ANISOTROPY","\x61","\xb0","\x14","\x7e"),
	HX_HCSTRING("TEXTURE_FLOAT","\xb8","\x9f","\xab","\x0e"),
	HX_HCSTRING("TEXTURE_FLOAT_LINEAR","\xcc","\x56","\x72","\x6b"),
	HX_HCSTRING("TEXTURE_DEPTH_ENABLED","\x01","\xb4","\x7a","\x82"),
	HX_HCSTRING("MAX_ACTIVE_TEXTURE","\x9d","\xb0","\x07","\x58"),
	HX_HCSTRING("MAX_COMBINED_TEXTURE","\x9c","\x4b","\x6a","\xdc"),
	HX_HCSTRING("MAX_FRAGMENT_UNIFORM_LENGTH","\xc5","\xa8","\xa0","\x54"),
	HX_HCSTRING("MAX_VERTEX_UNIFORM_LENGTH","\x71","\xbc","\x90","\x97"),
	HX_HCSTRING("MAX_VERTEX_TEXTURES","\xb8","\x1b","\x2c","\x6b"),
	HX_HCSTRING("get_MAX_UNIFORM_BONES","\x80","\x6c","\x7f","\x8c"),
	HX_HCSTRING("BONE_TEXTURE","\x80","\x25","\x2c","\x82"),
	HX_HCSTRING("VS_FLOAT_HIGHP","\x29","\x61","\x2a","\xa1"),
	HX_HCSTRING("VS_INT_HIGHP","\x3c","\x81","\x86","\x14"),
	HX_HCSTRING("FS_FLOAT_HIGHP","\x39","\x2b","\x55","\x76"),
	HX_HCSTRING("FS_INT_HIGHP","\x4c","\xa7","\x8f","\xf8"),
	HX_HCSTRING("NULL","\x87","\x66","\xcf","\x33"),
	HX_HCSTRING("INVALID","\xd7","\xae","\x1b","\xbb"),
	HX_HCSTRING("get_api","\x31","\xc5","\xbe","\x26"),
	HX_HCSTRING("m_gl","\xf7","\xb1","\x54","\x48"),
	HX_HCSTRING("Initialize","\x70","\x35","\x6c","\xe3"),
	HX_HCSTRING("Resize","\x14","\xce","\x0f","\x3d"),
	HX_HCSTRING("BindBuffer","\xbd","\x96","\x6f","\xef"),
	HX_HCSTRING("BindVAO","\x07","\x21","\x70","\x4c"),
	HX_HCSTRING("BufferData","\x6a","\xc3","\x24","\x8a"),
	HX_HCSTRING("BufferSubData","\x8a","\x46","\xd5","\x8d"),
	HX_HCSTRING("CreateBuffer","\x3c","\x49","\xfc","\xba"),
	HX_HCSTRING("CreateVAO","\x28","\x79","\xba","\xeb"),
	HX_HCSTRING("DrawArrays","\xfe","\xf7","\x64","\xf0"),
	HX_HCSTRING("DrawElements","\x7b","\x0e","\xca","\x21"),
	HX_HCSTRING("DeleteBuffer","\xab","\x2f","\x3f","\xff"),
	HX_HCSTRING("DeleteVAO","\x59","\xc7","\x9f","\x93"),
	HX_HCSTRING("DisableVertexAttrib","\xb6","\x43","\xe5","\x25"),
	HX_HCSTRING("EnableVertexAttrib","\x11","\x31","\x9b","\xa9"),
	HX_HCSTRING("VertexAttrib1f","\x83","\x28","\x0c","\xfe"),
	HX_HCSTRING("VertexAttrib2f","\x62","\x29","\x0c","\xfe"),
	HX_HCSTRING("VertexAttrib3f","\x41","\x2a","\x0c","\xfe"),
	HX_HCSTRING("VertexAttrib4f","\x20","\x2b","\x0c","\xfe"),
	HX_HCSTRING("VertexAttribPointer","\x6f","\x7c","\x13","\x9e"),
	HX_HCSTRING("CompileShader","\xd8","\xc0","\xa2","\x22"),
	HX_HCSTRING("CreateShader","\x61","\x4b","\x88","\x07"),
	HX_HCSTRING("DetachShader","\xf8","\x1c","\xc0","\xb2"),
	HX_HCSTRING("DeleteShader","\xd0","\x31","\xcb","\x4b"),
	HX_HCSTRING("GetShaderInfoLog","\xbb","\x99","\xc3","\x0d"),
	HX_HCSTRING("GetShaderParameter","\xee","\x8d","\xdd","\xe9"),
	HX_HCSTRING("ShaderSource","\x00","\x9a","\x2c","\x6a"),
	HX_HCSTRING("AttachShader","\xea","\x1c","\x8a","\x7a"),
	HX_HCSTRING("BindAttribLocation","\x5c","\xca","\xb2","\xd1"),
	HX_HCSTRING("CreateProgram","\xc8","\x72","\x2c","\x24"),
	HX_HCSTRING("DeleteProgram","\x79","\x2d","\x73","\x9a"),
	HX_HCSTRING("GetAttribLocation","\xb5","\xda","\x95","\xfe"),
	HX_HCSTRING("GetUniformLocation","\xb3","\x83","\x56","\x03"),
	HX_HCSTRING("GetProgramInfoLog","\xa8","\xb1","\x78","\x6f"),
	HX_HCSTRING("GetProgramParameter","\x1b","\x3b","\xfa","\xf4"),
	HX_HCSTRING("LinkProgram","\x8a","\x45","\xae","\x6d"),
	HX_HCSTRING("UseProgram","\x1d","\x71","\x5d","\xed"),
	HX_HCSTRING("ActiveTexture","\x95","\x63","\x9a","\x9e"),
	HX_HCSTRING("BindFramebuffer","\x10","\xce","\xed","\x47"),
	HX_HCSTRING("BindRenderbuffer","\x53","\x92","\xb2","\x2e"),
	HX_HCSTRING("BindTexture","\x7e","\x74","\x84","\x7f"),
	HX_HCSTRING("CreateFramebuffer","\x31","\xaf","\x6e","\x6e"),
	HX_HCSTRING("CreateRenderbuffer","\x12","\xae","\xf6","\xb8"),
	HX_HCSTRING("CreateTexture","\x1f","\xf1","\x13","\xcf"),
	HX_HCSTRING("DeleteFramebuffer","\x62","\x16","\x87","\xf1"),
	HX_HCSTRING("DeleteRenderbuffer","\xc1","\x91","\x38","\xeb"),
	HX_HCSTRING("DeleteTexture","\xd0","\xab","\x5a","\x45"),
	HX_HCSTRING("FramebufferRenderbuffer","\x43","\xc5","\x59","\x30"),
	HX_HCSTRING("FramebufferTexture2D","\xe0","\xd2","\x8d","\x57"),
	HX_HCSTRING("GenerateMipmap","\xbd","\x6a","\x63","\x05"),
	HX_HCSTRING("PixelStorei","\x6e","\xcc","\xfa","\x64"),
	HX_HCSTRING("RenderbufferStorage","\xe5","\x18","\xce","\xe5"),
	HX_HCSTRING("TexImage2D","\xe6","\x80","\x18","\xb0"),
	HX_HCSTRING("TexImage2DAlloc","\xaf","\x91","\xed","\x51"),
	HX_HCSTRING("TexSubImage2D","\xf4","\x7e","\x80","\x70"),
	HX_HCSTRING("TexStorage2D","\x06","\xe9","\x56","\x97"),
	HX_HCSTRING("TexParameterf","\x44","\x77","\x21","\x84"),
	HX_HCSTRING("TexParameteri","\x47","\x77","\x21","\x84"),
	HX_HCSTRING("Uniform1f","\x29","\x01","\xb1","\xa9"),
	HX_HCSTRING("Uniform2f","\x08","\x02","\xb1","\xa9"),
	HX_HCSTRING("Uniform3f","\xe7","\x02","\xb1","\xa9"),
	HX_HCSTRING("Uniform4f","\xc6","\x03","\xb1","\xa9"),
	HX_HCSTRING("Uniform1i","\x2c","\x01","\xb1","\xa9"),
	HX_HCSTRING("Uniform2i","\x0b","\x02","\xb1","\xa9"),
	HX_HCSTRING("Uniform3i","\xea","\x02","\xb1","\xa9"),
	HX_HCSTRING("Uniform4i","\xc9","\x03","\xb1","\xa9"),
	HX_HCSTRING("Uniform1fv","\x2d","\x03","\x30","\xd1"),
	HX_HCSTRING("Uniform2fv","\x6e","\xc5","\x30","\xd1"),
	HX_HCSTRING("Uniform3fv","\xaf","\x87","\x31","\xd1"),
	HX_HCSTRING("Uniform4fv","\xf0","\x49","\x32","\xd1"),
	HX_HCSTRING("Uniform1iv","\xca","\x05","\x30","\xd1"),
	HX_HCSTRING("Uniform2iv","\x0b","\xc8","\x30","\xd1"),
	HX_HCSTRING("Uniform3iv","\x4c","\x8a","\x31","\xd1"),
	HX_HCSTRING("Uniform4iv","\x8d","\x4c","\x32","\xd1"),
	HX_HCSTRING("UniformMatrix2fv","\xad","\x66","\x54","\xdf"),
	HX_HCSTRING("UniformMatrix3fv","\xee","\x28","\x55","\xdf"),
	HX_HCSTRING("UniformMatrix4fv","\x2f","\xeb","\x55","\xdf"),
	HX_HCSTRING("BlendFunc","\x15","\xdc","\x6e","\xa9"),
	HX_HCSTRING("Disable","\xc8","\x91","\xa9","\x7e"),
	HX_HCSTRING("Enable","\xa3","\x22","\x1c","\x2d"),
	HX_HCSTRING("DepthMask","\x6f","\x7b","\xac","\x40"),
	HX_HCSTRING("DepthFunc","\xc7","\x25","\x1b","\x3c"),
	HX_HCSTRING("CullFace","\x8f","\xa3","\xe3","\x85"),
	HX_HCSTRING("FrontFace","\xc6","\xe1","\x93","\x22"),
	HX_HCSTRING("Clear","\x6d","\xe1","\x88","\xdb"),
	HX_HCSTRING("ClearDepth","\x56","\x34","\xe5","\xa2"),
	HX_HCSTRING("ClearColor","\xb6","\xb4","\x17","\x16"),
	HX_HCSTRING("Viewport","\x86","\x08","\x57","\x76"),
	HX_HCSTRING("Scissor","\xfc","\x4f","\x38","\xd2"),
	HX_HCSTRING("ReadPixels","\x43","\xd7","\xd6","\x7c"),
	HX_HCSTRING("GetError","\x72","\x97","\xb2","\xac"),
	HX_HCSTRING("GetErrorCode","\xbf","\x15","\x96","\x3f"),
	HX_HCSTRING("GetErrorString","\xe3","\x55","\x91","\x31"),
	HX_HCSTRING("LogError","\xc4","\xc4","\xe1","\x37"),
	HX_HCSTRING("Assert","\xe6","\xba","\x97","\x80"),
	HX_HCSTRING("Flush","\xa4","\xd2","\xc8","\x95"),
	HX_HCSTRING("Focus","\xb8","\xcf","\xb6","\x97"),
	String(null()) };

void GL_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.graphics.GL","\xbc","\x01","\xb9","\x66");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GL_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GL_obj >;
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

void GL_obj::__boot()
{
	ACTIVE_ATTRIBUTES= (int)35721;
	ACTIVE_TEXTURE= (int)34016;
	ACTIVE_UNIFORMS= (int)35718;
	ALIASED_LINE_WIDTH_RANGE= (int)33902;
	ALIASED_POINT_SIZE_RANGE= (int)33901;
	ALPHA= (int)6406;
	ALPHA_BITS= (int)3413;
	ALWAYS= (int)519;
	ARRAY_BUFFER= (int)34962;
	ARRAY_BUFFER_BINDING= (int)34964;
	ATTACHED_SHADERS= (int)35717;
	BACK= (int)1029;
	BLEND= (int)3042;
	BLEND_COLOR= (int)32773;
	BLEND_DST_ALPHA= (int)32970;
	BLEND_DST_RGB= (int)32968;
	BLEND_EQUATION= (int)32777;
	BLEND_EQUATION_ALPHA= (int)34877;
	BLEND_EQUATION_RGB= (int)32777;
	BLEND_SRC_ALPHA= (int)32971;
	BLEND_SRC_RGB= (int)32969;
	BLUE_BITS= (int)3412;
	BOOL= (int)35670;
	BOOL_VEC2= (int)35671;
	BOOL_VEC3= (int)35672;
	BOOL_VEC4= (int)35673;
	BROWSER_DEFAULT_WEBGL= (int)37444;
	BUFFER_SIZE= (int)34660;
	BUFFER_USAGE= (int)34661;
	BYTE= (int)5120;
	CCW= (int)2305;
	CLAMP_TO_EDGE= (int)33071;
	COLOR_ATTACHMENT0= (int)36064;
	COLOR_BUFFER_BIT= (int)16384;
	COLOR_CLEAR_VALUE= (int)3106;
	COLOR_WRITEMASK= (int)3107;
	COMPILE_STATUS= (int)35713;
	COMPRESSED_TEXTURE_FORMATS= (int)34467;
	CONSTANT_ALPHA= (int)32771;
	CONSTANT_COLOR= (int)32769;
	CONTEXT_LOST_WEBGL= (int)37442;
	CULL_FACE= (int)2884;
	CULL_FACE_MODE= (int)2885;
	CURRENT_PROGRAM= (int)35725;
	CURRENT_VERTEX_ATTRIB= (int)34342;
	CW= (int)2304;
	DECR= (int)7683;
	DECR_WRAP= (int)34056;
	DELETE_STATUS= (int)35712;
	DEPTH_ATTACHMENT= (int)36096;
	DEPTH_BITS= (int)3414;
	DEPTH_BUFFER_BIT= (int)256;
	DEPTH_CLEAR_VALUE= (int)2931;
	DEPTH_COMPONENT= (int)6402;
	DEPTH_COMPONENT16= (int)33189;
	DEPTH_FUNC= (int)2932;
	DEPTH_RANGE= (int)2928;
	DEPTH_STENCIL= (int)34041;
	DEPTH_STENCIL_ATTACHMENT= (int)33306;
	DEPTH_TEST= (int)2929;
	DEPTH_WRITEMASK= (int)2930;
	DITHER= (int)3024;
	DONT_CARE= (int)4352;
	DST_ALPHA= (int)772;
	DST_COLOR= (int)774;
	DYNAMIC_DRAW= (int)35048;
	ELEMENT_ARRAY_BUFFER= (int)34963;
	ELEMENT_ARRAY_BUFFER_BINDING= (int)34965;
	EQUAL= (int)514;
	FASTEST= (int)4353;
	FLOAT= (int)5126;
	FLOAT_MAT2= (int)35674;
	FLOAT_MAT3= (int)35675;
	FLOAT_MAT4= (int)35676;
	FLOAT_VEC2= (int)35664;
	FLOAT_VEC3= (int)35665;
	FLOAT_VEC4= (int)35666;
	FRAGMENT_SHADER= (int)35632;
	FRAMEBUFFER= (int)36160;
	FRAMEBUFFER_ATTACHMENT_OBJECT_NAME= (int)36049;
	FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE= (int)36048;
	FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE= (int)36051;
	FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL= (int)36050;
	FRAMEBUFFER_BINDING= (int)36006;
	FRAMEBUFFER_COMPLETE= (int)36053;
	FRAMEBUFFER_INCOMPLETE_ATTACHMENT= (int)36054;
	FRAMEBUFFER_INCOMPLETE_DIMENSIONS= (int)36057;
	FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT= (int)36055;
	FRAMEBUFFER_UNSUPPORTED= (int)36061;
	FRONT= (int)1028;
	FRONT_AND_BACK= (int)1032;
	FRONT_FACE= (int)2886;
	FUNC_ADD= (int)32774;
	FUNC_REVERSE_SUBTRACT= (int)32779;
	FUNC_SUBTRACT= (int)32778;
	GENERATE_MIPMAP_HINT= (int)33170;
	GEQUAL= (int)518;
	GREATER= (int)516;
	GREEN_BITS= (int)3411;
	HIGH_FLOAT= (int)36338;
	HIGH_INT= (int)36341;
	INCR= (int)7682;
	INCR_WRAP= (int)34055;
	INT= (int)5124;
	INT_VEC2= (int)35667;
	INT_VEC3= (int)35668;
	INT_VEC4= (int)35669;
	INVALID_ENUM= (int)1280;
	INVALID_FRAMEBUFFER_OPERATION= (int)1286;
	INVALID_OPERATION= (int)1282;
	INVALID_VALUE= (int)1281;
	INVERT= (int)5386;
	KEEP= (int)7680;
	LEQUAL= (int)515;
	LESS= (int)513;
	LINEAR= (int)9729;
	LINEAR_MIPMAP_LINEAR= (int)9987;
	LINEAR_MIPMAP_NEAREST= (int)9985;
	LINES= (int)1;
	LINE_LOOP= (int)2;
	LINE_STRIP= (int)3;
	LINE_WIDTH= (int)2849;
	LINK_STATUS= (int)35714;
	LOW_FLOAT= (int)36336;
	LOW_INT= (int)36339;
	LUMINANCE= (int)6409;
	LUMINANCE_ALPHA= (int)6410;
	MAX_COMBINED_TEXTURE_IMAGE_UNITS= (int)35661;
	MAX_CUBE_MAP_TEXTURE_SIZE= (int)34076;
	MAX_FRAGMENT_UNIFORM_VECTORS= (int)36349;
	MAX_RENDERBUFFER_SIZE= (int)34024;
	MAX_TEXTURE_IMAGE_UNITS= (int)34930;
	MAX_TEXTURE_SIZE= (int)3379;
	MAX_VARYING_VECTORS= (int)36348;
	MAX_VERTEX_ATTRIBS= (int)34921;
	MAX_VERTEX_TEXTURE_IMAGE_UNITS= (int)35660;
	MAX_VERTEX_UNIFORM_VECTORS= (int)36347;
	MAX_VIEWPORT_DIMS= (int)3386;
	MEDIUM_FLOAT= (int)36337;
	MEDIUM_INT= (int)36340;
	MIRRORED_REPEAT= (int)33648;
	NEAREST= (int)9728;
	NEAREST_MIPMAP_LINEAR= (int)9986;
	NEAREST_MIPMAP_NEAREST= (int)9984;
	NEVER= (int)512;
	NICEST= (int)4354;
	NONE= (int)0;
	NOTEQUAL= (int)517;
	NO_ERROR_GL= (int)0;
	ONE= (int)1;
	ONE_MINUS_CONSTANT_ALPHA= (int)32772;
	ONE_MINUS_CONSTANT_COLOR= (int)32770;
	ONE_MINUS_DST_ALPHA= (int)773;
	ONE_MINUS_DST_COLOR= (int)775;
	ONE_MINUS_SRC_ALPHA= (int)771;
	ONE_MINUS_SRC_COLOR= (int)769;
	OUT_OF_MEMORY= (int)1285;
	PACK_ALIGNMENT= (int)3333;
	POINTS= (int)0;
	POLYGON_OFFSET_FACTOR= (int)32824;
	POLYGON_OFFSET_FILL= (int)32823;
	POLYGON_OFFSET_UNITS= (int)10752;
	RED_BITS= (int)3410;
	RENDERBUFFER= (int)36161;
	RENDERBUFFER_ALPHA_SIZE= (int)36179;
	RENDERBUFFER_BINDING= (int)36007;
	RENDERBUFFER_BLUE_SIZE= (int)36178;
	RENDERBUFFER_DEPTH_SIZE= (int)36180;
	RENDERBUFFER_GREEN_SIZE= (int)36177;
	RENDERBUFFER_HEIGHT= (int)36163;
	RENDERBUFFER_INTERNAL_FORMAT= (int)36164;
	RENDERBUFFER_RED_SIZE= (int)36176;
	RENDERBUFFER_STENCIL_SIZE= (int)36181;
	RENDERBUFFER_WIDTH= (int)36162;
	RENDERER= (int)7937;
	REPEAT= (int)10497;
	REPLACE= (int)7681;
	RGB= (int)6407;
	RGB565= (int)36194;
	RGB5_A1= (int)32855;
	RGBA= (int)6408;
	RGBA4= (int)32854;
	SAMPLER_2D= (int)35678;
	SAMPLER_CUBE= (int)35680;
	SAMPLES= (int)32937;
	SAMPLE_ALPHA_TO_COVERAGE= (int)32926;
	SAMPLE_BUFFERS= (int)32936;
	SAMPLE_COVERAGE= (int)32928;
	SAMPLE_COVERAGE_INVERT= (int)32939;
	SAMPLE_COVERAGE_VALUE= (int)32938;
	SCISSOR_BOX= (int)3088;
	SCISSOR_TEST= (int)3089;
	SHADER_TYPE= (int)35663;
	SHADING_LANGUAGE_VERSION= (int)35724;
	SHORT= (int)5122;
	SRC_ALPHA= (int)770;
	SRC_ALPHA_SATURATE= (int)776;
	SRC_COLOR= (int)768;
	STATIC_DRAW= (int)35044;
	STENCIL_ATTACHMENT= (int)36128;
	STENCIL_BACK_FAIL= (int)34817;
	STENCIL_BACK_FUNC= (int)34816;
	STENCIL_BACK_PASS_DEPTH_FAIL= (int)34818;
	STENCIL_BACK_PASS_DEPTH_PASS= (int)34819;
	STENCIL_BACK_REF= (int)36003;
	STENCIL_BACK_VALUE_MASK= (int)36004;
	STENCIL_BACK_WRITEMASK= (int)36005;
	STENCIL_BITS= (int)3415;
	STENCIL_BUFFER_BIT= (int)1024;
	STENCIL_CLEAR_VALUE= (int)2961;
	STENCIL_FAIL= (int)2964;
	STENCIL_FUNC= (int)2962;
	STENCIL_INDEX= (int)6401;
	STENCIL_INDEX8= (int)36168;
	STENCIL_PASS_DEPTH_FAIL= (int)2965;
	STENCIL_PASS_DEPTH_PASS= (int)2966;
	STENCIL_REF= (int)2967;
	STENCIL_TEST= (int)2960;
	STENCIL_VALUE_MASK= (int)2963;
	STENCIL_WRITEMASK= (int)2968;
	STREAM_DRAW= (int)35040;
	SUBPIXEL_BITS= (int)3408;
	TEXTURE= (int)5890;
	TEXTURE0= (int)33984;
	TEXTURE1= (int)33985;
	TEXTURE10= (int)33994;
	TEXTURE11= (int)33995;
	TEXTURE12= (int)33996;
	TEXTURE13= (int)33997;
	TEXTURE14= (int)33998;
	TEXTURE15= (int)33999;
	TEXTURE16= (int)34000;
	TEXTURE17= (int)34001;
	TEXTURE18= (int)34002;
	TEXTURE19= (int)34003;
	TEXTURE2= (int)33986;
	TEXTURE20= (int)34004;
	TEXTURE21= (int)34005;
	TEXTURE22= (int)34006;
	TEXTURE23= (int)34007;
	TEXTURE24= (int)34008;
	TEXTURE25= (int)34009;
	TEXTURE26= (int)34010;
	TEXTURE27= (int)34011;
	TEXTURE28= (int)34012;
	TEXTURE29= (int)34013;
	TEXTURE3= (int)33987;
	TEXTURE30= (int)34014;
	TEXTURE31= (int)34015;
	TEXTURE4= (int)33988;
	TEXTURE5= (int)33989;
	TEXTURE6= (int)33990;
	TEXTURE7= (int)33991;
	TEXTURE8= (int)33992;
	TEXTURE9= (int)33993;
	TEXTURE_2D= (int)3553;
	TEXTURE_BINDING_2D= (int)32873;
	TEXTURE_BINDING_CUBE_MAP= (int)34068;
	TEXTURE_CUBE_MAP= (int)34067;
	TEXTURE_CUBE_MAP_NEGATIVE_X= (int)34070;
	TEXTURE_CUBE_MAP_NEGATIVE_Y= (int)34072;
	TEXTURE_CUBE_MAP_NEGATIVE_Z= (int)34074;
	TEXTURE_CUBE_MAP_POSITIVE_X= (int)34069;
	TEXTURE_CUBE_MAP_POSITIVE_Y= (int)34071;
	TEXTURE_CUBE_MAP_POSITIVE_Z= (int)34073;
	TEXTURE_MAG_FILTER= (int)10240;
	TEXTURE_MIN_FILTER= (int)10241;
	TEXTURE_WRAP_S= (int)10242;
	TEXTURE_WRAP_T= (int)10243;
	TRIANGLES= (int)4;
	TRIANGLE_FAN= (int)6;
	TRIANGLE_STRIP= (int)5;
	UNPACK_ALIGNMENT= (int)3317;
	UNPACK_COLORSPACE_CONVERSION_WEBGL= (int)37443;
	UNPACK_FLIP_Y_WEBGL= (int)37440;
	UNPACK_PREMULTIPLY_ALPHA_WEBGL= (int)37441;
	UNSIGNED_BYTE= (int)5121;
	UNSIGNED_INT= (int)5125;
	UNSIGNED_SHORT= (int)5123;
	UNSIGNED_SHORT_4_4_4_4= (int)32819;
	UNSIGNED_SHORT_5_5_5_1= (int)32820;
	UNSIGNED_SHORT_5_6_5= (int)33635;
	VALIDATE_STATUS= (int)35715;
	VENDOR= (int)7936;
	VERSION= (int)7938;
	VERTEX_ATTRIB_ARRAY_BUFFER_BINDING= (int)34975;
	VERTEX_ATTRIB_ARRAY_ENABLED= (int)34338;
	VERTEX_ATTRIB_ARRAY_NORMALIZED= (int)34922;
	VERTEX_ATTRIB_ARRAY_POINTER= (int)34373;
	VERTEX_ATTRIB_ARRAY_SIZE= (int)34339;
	VERTEX_ATTRIB_ARRAY_STRIDE= (int)34340;
	VERTEX_ATTRIB_ARRAY_TYPE= (int)34341;
	VERTEX_SHADER= (int)35633;
	VIEWPORT= (int)2978;
	ZERO= (int)0;
	VAO_ENABLED= false;
	TEXTURE_SRGB= false;
	SRGB= (int)35904;
	SRGB_ALPHA= (int)35906;
	SRGB8_ALPHA8= (int)35907;
	FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING= (int)33296;
	HALF_FLOAT= (int)5126;
	TEXTURE_HALF= false;
	TEXTURE_HALF_LINEAR= false;
	TEXTURE_ANISOTROPY= (int)-1;
	TEXTURE_ANISOTROPY_ENABLED= false;
	MAX_TEXTURE_ANISOTROPY= (int)1;
	TEXTURE_FLOAT= false;
	TEXTURE_FLOAT_LINEAR= false;
	TEXTURE_DEPTH_ENABLED= false;
	MAX_ACTIVE_TEXTURE= (int)8;
	MAX_COMBINED_TEXTURE= (int)8;
	MAX_FRAGMENT_UNIFORM_LENGTH= (int)128;
	MAX_VERTEX_UNIFORM_LENGTH= (int)128;
	MAX_VERTEX_TEXTURES= (int)0;
	BONE_TEXTURE= false;
	VS_FLOAT_HIGHP= true;
	VS_INT_HIGHP= true;
	FS_FLOAT_HIGHP= true;
	FS_INT_HIGHP= true;
	_NULL= (int)0;
	INVALID= (int)-1;
}

} // end namespace haxor
} // end namespace graphics
