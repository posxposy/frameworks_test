#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
#ifndef INCLUDED_haxor_core_Console
#include <haxor/core/Console.h>
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
namespace platform{
namespace graphics{

Void OpenGL_obj::__construct(::haxor::core::BaseApplication p_application)
{
HX_STACK_FRAME("haxor.platform.graphics.OpenGL","new",0xa0d46c35,"haxor.platform.graphics.OpenGL.new","haxor/platform/graphics/OpenGL.hx",53,0x3c17389a)
HX_STACK_THIS(this)
HX_STACK_ARG(p_application,"p_application")
{
	HX_STACK_LINE(54)
	::haxor::core::BaseApplication tmp = p_application;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	super::__construct(tmp);
	HX_STACK_LINE(55)
	this->m_api = ::haxor::graphics::GraphicAPI_obj::OpenGL;
}
;
	return null();
}

//OpenGL_obj::~OpenGL_obj() { }

Dynamic OpenGL_obj::__CreateEmpty() { return  new OpenGL_obj; }
hx::ObjectPtr< OpenGL_obj > OpenGL_obj::__new(::haxor::core::BaseApplication p_application)
{  hx::ObjectPtr< OpenGL_obj > _result_ = new OpenGL_obj();
	_result_->__construct(p_application);
	return _result_;}

Dynamic OpenGL_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OpenGL_obj > _result_ = new OpenGL_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void OpenGL_obj::CheckExtensions( ){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","CheckExtensions",0x58fb7231,"haxor.platform.graphics.OpenGL.CheckExtensions","haxor/platform/graphics/OpenGL.hx",59,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(60)
		this->Focus();
		HX_STACK_LINE(61)
		::String extstr = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(extstr,"extstr");
		HX_STACK_LINE(62)
		
		const char *str = (const char *)glGetString(GL_EXTENSIONS);
		int len = strlen(str);
		extstr.__s = str;
		extstr.length = len;				
		;
		HX_STACK_LINE(69)
		Float f = ((Float)0.0);		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(70)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(72)
		Array< ::String > tmp = extstr.split(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(72)
		Array< ::String > exts = tmp;		HX_STACK_VAR(exts,"exts");
		HX_STACK_LINE(73)
		{
			HX_STACK_LINE(73)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(73)
			int _g = exts->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(73)
			while((true)){
				HX_STACK_LINE(73)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(73)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(73)
				if ((tmp2)){
					HX_STACK_LINE(73)
					break;
				}
				HX_STACK_LINE(73)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(73)
				int i1 = tmp3;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(75)
				::String tmp4 = exts->__get(i1);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(75)
				::String n = tmp4;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(76)
				::String tmp5 = n;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(76)
				::String tmp6 = ::StringTools_obj::replace(tmp5,HX_HCSTRING("GL_","\x9a","\x22","\x36","\x00"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(76)
				n = tmp6;
				HX_STACK_LINE(77)
				bool tmp7 = (n == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(77)
				if ((tmp7)){
					HX_STACK_LINE(77)
					continue;
				}
				HX_STACK_LINE(78)
				{
					HX_STACK_LINE(78)
					int p_level = (int)0;		HX_STACK_VAR(p_level,"p_level");
					HX_STACK_LINE(78)
					int tmp8 = ::haxor::core::Console_obj::verbose;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(78)
					int tmp9 = p_level;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(78)
					bool tmp10 = (tmp8 >= tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(78)
					if ((tmp10)){
						HX_STACK_LINE(78)
						::String tmp11 = (HX_HCSTRING("\t","\x09","\x00","\x00","\x00") + n);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(78)
						::cpp::Lib_obj::println(tmp11);
					}
				}
				HX_STACK_LINE(79)
				::String tmp8 = n;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(79)
				::String _switch_1 = (tmp8);
				if (  ( _switch_1==HX_HCSTRING("ARB_texture_half_float","\x82","\x77","\xb2","\xef"))){
					HX_STACK_LINE(82)
					::haxor::graphics::GL_obj::HALF_FLOAT = (int)36193;
					HX_STACK_LINE(83)
					::haxor::graphics::GL_obj::TEXTURE_HALF = true;
				}
				else if (  ( _switch_1==HX_HCSTRING("ARB_texture_half_float_linear","\x42","\xc0","\x4f","\x24"))){
					HX_STACK_LINE(86)
					::haxor::graphics::GL_obj::TEXTURE_HALF_LINEAR = true;
				}
				else if (  ( _switch_1==HX_HCSTRING("EXT_texture_filter_anisotropic","\x4c","\x4c","\x32","\x3d"))){
					HX_STACK_LINE(89)
					glGetFloatv(GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT, &f);;
					HX_STACK_LINE(90)
					::haxor::graphics::GL_obj::MAX_TEXTURE_ANISOTROPY = ((int)(f));
					HX_STACK_LINE(91)
					::haxor::graphics::GL_obj::TEXTURE_ANISOTROPY_ENABLED = true;
					HX_STACK_LINE(92)
					{
						HX_STACK_LINE(92)
						int p_level = (int)0;		HX_STACK_VAR(p_level,"p_level");
						HX_STACK_LINE(92)
						int tmp9 = ::haxor::core::Console_obj::verbose;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(92)
						int tmp10 = p_level;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(92)
						bool tmp11 = (tmp9 >= tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(92)
						if ((tmp11)){
							HX_STACK_LINE(92)
							int tmp12 = ::haxor::graphics::GL_obj::MAX_TEXTURE_ANISOTROPY;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(92)
							::String tmp13 = (HX_HCSTRING("\t\tMAX_TEXTURE_MAX_ANISOTROPY: ","\x82","\xba","\x00","\xce") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(92)
							::cpp::Lib_obj::println(tmp13);
						}
					}
				}
				else if (  ( _switch_1==HX_HCSTRING("ARB_texture_float","\x2a","\x0a","\x88","\x11"))){
					HX_STACK_LINE(95)
					::haxor::graphics::GL_obj::TEXTURE_FLOAT = true;
				}
				else if (  ( _switch_1==HX_HCSTRING("ARB_depth_texture","\x91","\xec","\xf6","\xf1"))){
					HX_STACK_LINE(98)
					::haxor::graphics::GL_obj::TEXTURE_DEPTH_ENABLED = true;
				}
			}
		}
		HX_STACK_LINE(103)
		glGetIntegerv(GL_MAX_TEXTURE_IMAGE_UNITS, &i);;
		HX_STACK_LINE(104)
		::haxor::graphics::GL_obj::MAX_ACTIVE_TEXTURE = i;
		HX_STACK_LINE(105)
		{
			HX_STACK_LINE(105)
			int p_level = (int)0;		HX_STACK_VAR(p_level,"p_level");
			HX_STACK_LINE(105)
			int tmp1 = ::haxor::core::Console_obj::verbose;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(105)
			int tmp2 = p_level;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(105)
			bool tmp3 = (tmp1 >= tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(105)
			if ((tmp3)){
				HX_STACK_LINE(105)
				::String tmp4 = (HX_HCSTRING("\tMax Active Textures: ","\xb3","\xe8","\x57","\x4b") + i);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(105)
				::cpp::Lib_obj::println(tmp4);
			}
		}
	}
return null();
}


Void OpenGL_obj::BindBuffer( int p_target,int p_id){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","BindBuffer",0x81014f88,"haxor.platform.graphics.OpenGL.BindBuffer","haxor/platform/graphics/OpenGL.hx",110,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_target,"p_target")
		HX_STACK_ARG(p_id,"p_id")
		HX_STACK_LINE(110)
		glBindBuffer(p_target,p_id);;
	}
return null();
}


Void OpenGL_obj::BufferData( int p_target,::haxor::io::Buffer p_data,int p_mode){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","BufferData",0x1bb67c35,"haxor.platform.graphics.OpenGL.BufferData","haxor/platform/graphics/OpenGL.hx",112,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_target,"p_target")
		HX_STACK_ARG(p_data,"p_data")
		HX_STACK_ARG(p_mode,"p_mode")
		HX_STACK_LINE(113)
		int tmp = p_data->m_length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(113)
		int tmp1 = p_data->get_bytesPerElement();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(113)
		int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(113)
		int bl = tmp2;		HX_STACK_VAR(bl,"bl");
		HX_STACK_LINE(114)
		::haxe::io::Bytes ba = p_data->m_buffer;		HX_STACK_VAR(ba,"ba");
		HX_STACK_LINE(115)
		glBufferData(p_target, bl, (void*)&ba->b[0], p_mode);;
	}
return null();
}


Void OpenGL_obj::BufferSubData( int p_target,int p_offset,::haxor::io::Buffer p_data){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","BufferSubData",0xb254de9f,"haxor.platform.graphics.OpenGL.BufferSubData","haxor/platform/graphics/OpenGL.hx",118,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_target,"p_target")
		HX_STACK_ARG(p_offset,"p_offset")
		HX_STACK_ARG(p_data,"p_data")
		HX_STACK_LINE(119)
		int tmp = p_data->m_length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(119)
		int tmp1 = p_data->get_bytesPerElement();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(119)
		int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(119)
		int bl = tmp2;		HX_STACK_VAR(bl,"bl");
		HX_STACK_LINE(120)
		::haxe::io::Bytes ba = p_data->m_buffer;		HX_STACK_VAR(ba,"ba");
		HX_STACK_LINE(121)
		glBufferSubData(p_target, p_offset,bl,(void*)&ba->b[0]);;
	}
return null();
}


int OpenGL_obj::CreateBuffer( ){
	HX_STACK_FRAME("haxor.platform.graphics.OpenGL","CreateBuffer",0x1f060ac7,"haxor.platform.graphics.OpenGL.CreateBuffer","haxor/platform/graphics/OpenGL.hx",124,0x3c17389a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(124)
	GLuint id; glGenBuffers(1, &id); return id;;
	HX_STACK_LINE(124)
	int tmp = ::haxor::graphics::GL_obj::INVALID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(124)
	return tmp;
}


Void OpenGL_obj::DrawArrays( int p_primitive,int p_start,int p_count){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","DrawArrays",0x81f6b0c9,"haxor.platform.graphics.OpenGL.DrawArrays","haxor/platform/graphics/OpenGL.hx",125,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_primitive,"p_primitive")
		HX_STACK_ARG(p_start,"p_start")
		HX_STACK_ARG(p_count,"p_count")
		HX_STACK_LINE(125)
		glDrawArrays(p_primitive, p_start, p_count);;
	}
return null();
}


Void OpenGL_obj::DrawElements( int p_primitive,int p_count,int p_type,int p_offset){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","DrawElements",0x85d3d006,"haxor.platform.graphics.OpenGL.DrawElements","haxor/platform/graphics/OpenGL.hx",126,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_primitive,"p_primitive")
		HX_STACK_ARG(p_count,"p_count")
		HX_STACK_ARG(p_type,"p_type")
		HX_STACK_ARG(p_offset,"p_offset")
		HX_STACK_LINE(126)
		glDrawElements(p_primitive, p_count, p_type,(void*)p_offset);;
	}
return null();
}


Void OpenGL_obj::DeleteBuffer( int p_id){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","DeleteBuffer",0x6348f136,"haxor.platform.graphics.OpenGL.DeleteBuffer","haxor/platform/graphics/OpenGL.hx",127,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_id,"p_id")
		HX_STACK_LINE(127)
		GLuint id = p_id; glDeleteBuffers(1, &id);;
	}
return null();
}


Void OpenGL_obj::DisableVertexAttrib( int p_location){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","DisableVertexAttrib",0x5b69998b,"haxor.platform.graphics.OpenGL.DisableVertexAttrib","haxor/platform/graphics/OpenGL.hx",128,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_LINE(128)
		glDisableVertexAttribArray(p_location);;
	}
return null();
}


Void OpenGL_obj::EnableVertexAttrib( int p_location){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","EnableVertexAttrib",0x7d132cdc,"haxor.platform.graphics.OpenGL.EnableVertexAttrib","haxor/platform/graphics/OpenGL.hx",129,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_LINE(129)
		glEnableVertexAttribArray(p_location);;
	}
return null();
}


Void OpenGL_obj::VertexAttrib3f( int p_location,Float p_x,Float p_y,Float p_z){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","VertexAttrib3f",0xc931a48c,"haxor.platform.graphics.OpenGL.VertexAttrib3f","haxor/platform/graphics/OpenGL.hx",130,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_ARG(p_z,"p_z")
		HX_STACK_LINE(130)
		glVertexAttrib3f(p_location,p_x,p_y,p_z);;
	}
return null();
}


Void OpenGL_obj::VertexAttrib4f( int p_location,Float p_x,Float p_y,Float p_z,Float p_w){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","VertexAttrib4f",0xc931a56b,"haxor.platform.graphics.OpenGL.VertexAttrib4f","haxor/platform/graphics/OpenGL.hx",131,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_ARG(p_z,"p_z")
		HX_STACK_ARG(p_w,"p_w")
		HX_STACK_LINE(131)
		glVertexAttrib4f(p_location,p_x,p_y,p_z,p_w);;
	}
return null();
}


Void OpenGL_obj::VertexAttribPointer( int p_location,int p_components_size,int p_type,bool p_normalized,int p_stride,int p_offset){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","VertexAttribPointer",0xd397d244,"haxor.platform.graphics.OpenGL.VertexAttribPointer","haxor/platform/graphics/OpenGL.hx",132,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_components_size,"p_components_size")
		HX_STACK_ARG(p_type,"p_type")
		HX_STACK_ARG(p_normalized,"p_normalized")
		HX_STACK_ARG(p_stride,"p_stride")
		HX_STACK_ARG(p_offset,"p_offset")
		HX_STACK_LINE(132)
		glVertexAttribPointer(p_location,p_components_size,p_type,p_normalized,p_stride,(void*)p_offset);;
	}
return null();
}


Void OpenGL_obj::CompileShader( int p_shader){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","CompileShader",0x472258ed,"haxor.platform.graphics.OpenGL.CompileShader","haxor/platform/graphics/OpenGL.hx",135,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_shader,"p_shader")
		HX_STACK_LINE(135)
		glCompileShader(p_shader);;
	}
return null();
}


int OpenGL_obj::CreateShader( int p_type){
	HX_STACK_FRAME("haxor.platform.graphics.OpenGL","CreateShader",0x6b920cec,"haxor.platform.graphics.OpenGL.CreateShader","haxor/platform/graphics/OpenGL.hx",136,0x3c17389a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_type,"p_type")
	HX_STACK_LINE(136)
	return glCreateShader(p_type);;
	HX_STACK_LINE(136)
	int tmp = ::haxor::graphics::GL_obj::INVALID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(136)
	return tmp;
}


Void OpenGL_obj::DetachShader( int p_program,int p_shader){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","DetachShader",0x16c9de83,"haxor.platform.graphics.OpenGL.DetachShader","haxor/platform/graphics/OpenGL.hx",137,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_program,"p_program")
		HX_STACK_ARG(p_shader,"p_shader")
		HX_STACK_LINE(137)
		glDetachShader(p_program, p_shader);;
	}
return null();
}


Void OpenGL_obj::DeleteShader( int p_shader){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","DeleteShader",0xafd4f35b,"haxor.platform.graphics.OpenGL.DeleteShader","haxor/platform/graphics/OpenGL.hx",138,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_shader,"p_shader")
		HX_STACK_LINE(138)
		glDeleteShader(p_shader);;
	}
return null();
}


::String OpenGL_obj::GetShaderInfoLog( int p_shader){
	HX_STACK_FRAME("haxor.platform.graphics.OpenGL","GetShaderInfoLog",0x08f47cc6,"haxor.platform.graphics.OpenGL.GetShaderInfoLog","haxor/platform/graphics/OpenGL.hx",139,0x3c17389a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_shader,"p_shader")
	HX_STACK_LINE(139)
	char s[1024]; glGetShaderInfoLog(p_shader,1024,0,s); return s;;
	HX_STACK_LINE(139)
	return HX_HCSTRING("","\x00","\x00","\x00","\x00");
}


int OpenGL_obj::GetShaderParameter( int p_shader,int p_parameter){
	HX_STACK_FRAME("haxor.platform.graphics.OpenGL","GetShaderParameter",0xbd5589b9,"haxor.platform.graphics.OpenGL.GetShaderParameter","haxor/platform/graphics/OpenGL.hx",140,0x3c17389a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_shader,"p_shader")
	HX_STACK_ARG(p_parameter,"p_parameter")
	HX_STACK_LINE(140)
	int d[1]; glGetShaderiv(p_shader, p_parameter, d); return d[0];;
	HX_STACK_LINE(140)
	return (int)-1;
}


Void OpenGL_obj::ShaderSource( int p_shader,::String p_source){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","ShaderSource",0xce365b8b,"haxor.platform.graphics.OpenGL.ShaderSource","haxor/platform/graphics/OpenGL.hx",142,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_shader,"p_shader")
		HX_STACK_ARG(p_source,"p_source")
		HX_STACK_LINE(143)
		int len = p_source.length;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(144)
		
		const char ** str = (const char ** ) &p_source.__s;		
		glShaderSource(p_shader, 1, str, & len);
		;
	}
return null();
}


Void OpenGL_obj::AttachShader( int p_program,int p_shader){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","AttachShader",0xde93de75,"haxor.platform.graphics.OpenGL.AttachShader","haxor/platform/graphics/OpenGL.hx",149,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_program,"p_program")
		HX_STACK_ARG(p_shader,"p_shader")
		HX_STACK_LINE(149)
		glAttachShader(p_program, p_shader);;
	}
return null();
}


Void OpenGL_obj::BindAttribLocation( int p_program,int p_location,::String p_name){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","BindAttribLocation",0xa52ac627,"haxor.platform.graphics.OpenGL.BindAttribLocation","haxor/platform/graphics/OpenGL.hx",150,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_program,"p_program")
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_name,"p_name")
		HX_STACK_LINE(150)
		glBindAttribLocation(p_program, p_location, p_name.__s);;
	}
return null();
}


int OpenGL_obj::CreateProgram( ){
	HX_STACK_FRAME("haxor.platform.graphics.OpenGL","CreateProgram",0x48ac0add,"haxor.platform.graphics.OpenGL.CreateProgram","haxor/platform/graphics/OpenGL.hx",151,0x3c17389a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(151)
	return glCreateProgram();;
	HX_STACK_LINE(151)
	int tmp = ::haxor::graphics::GL_obj::INVALID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(151)
	return tmp;
}


Void OpenGL_obj::DeleteProgram( int p_program){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","DeleteProgram",0xbef2c58e,"haxor.platform.graphics.OpenGL.DeleteProgram","haxor/platform/graphics/OpenGL.hx",152,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_program,"p_program")
		HX_STACK_LINE(152)
		glDeleteProgram(p_program);;
	}
return null();
}


int OpenGL_obj::GetAttribLocation( int p_program,::String p_name){
	HX_STACK_FRAME("haxor.platform.graphics.OpenGL","GetAttribLocation",0xce2ba14a,"haxor.platform.graphics.OpenGL.GetAttribLocation","haxor/platform/graphics/OpenGL.hx",153,0x3c17389a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_program,"p_program")
	HX_STACK_ARG(p_name,"p_name")
	HX_STACK_LINE(153)
	return glGetAttribLocation(p_program,p_name.__s);;
	HX_STACK_LINE(153)
	return (int)-1;
}


int OpenGL_obj::GetUniformLocation( int p_program,::String p_name){
	HX_STACK_FRAME("haxor.platform.graphics.OpenGL","GetUniformLocation",0xd6ce7f7e,"haxor.platform.graphics.OpenGL.GetUniformLocation","haxor/platform/graphics/OpenGL.hx",154,0x3c17389a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_program,"p_program")
	HX_STACK_ARG(p_name,"p_name")
	HX_STACK_LINE(154)
	return glGetUniformLocation(p_program,p_name.__s);;
	HX_STACK_LINE(154)
	return (int)-1;
}


::String OpenGL_obj::GetProgramInfoLog( int p_program){
	HX_STACK_FRAME("haxor.platform.graphics.OpenGL","GetProgramInfoLog",0x3f0e783d,"haxor.platform.graphics.OpenGL.GetProgramInfoLog","haxor/platform/graphics/OpenGL.hx",155,0x3c17389a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_program,"p_program")
	HX_STACK_LINE(155)
	char s[1024]; glGetProgramInfoLog(p_program,1024,0,s); return s;;
	HX_STACK_LINE(155)
	return HX_HCSTRING("","\x00","\x00","\x00","\x00");
}


int OpenGL_obj::GetProgramParameter( int p_program,int p_parameter){
	HX_STACK_FRAME("haxor.platform.graphics.OpenGL","GetProgramParameter",0x2a7e90f0,"haxor.platform.graphics.OpenGL.GetProgramParameter","haxor/platform/graphics/OpenGL.hx",156,0x3c17389a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_program,"p_program")
	HX_STACK_ARG(p_parameter,"p_parameter")
	HX_STACK_LINE(156)
	int d[1]; glGetProgramiv(p_program, p_parameter, d); return d[0];;
	HX_STACK_LINE(156)
	return (int)-1;
}


Void OpenGL_obj::LinkProgram( int p_program){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","LinkProgram",0x3b9e3e5f,"haxor.platform.graphics.OpenGL.LinkProgram","haxor/platform/graphics/OpenGL.hx",157,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_program,"p_program")
		HX_STACK_LINE(157)
		glLinkProgram(p_program);;
	}
return null();
}


Void OpenGL_obj::UseProgram( int p_program){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","UseProgram",0x7eef29e8,"haxor.platform.graphics.OpenGL.UseProgram","haxor/platform/graphics/OpenGL.hx",158,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_program,"p_program")
		HX_STACK_LINE(158)
		glUseProgram(p_program);;
	}
return null();
}


Void OpenGL_obj::ActiveTexture( int p_slot){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","ActiveTexture",0xc319fbaa,"haxor.platform.graphics.OpenGL.ActiveTexture","haxor/platform/graphics/OpenGL.hx",161,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_slot,"p_slot")
		HX_STACK_LINE(161)
		glActiveTexture(p_slot);;
	}
return null();
}


Void OpenGL_obj::BindFramebuffer( int p_target,int p_id){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","BindFramebuffer",0x3d935565,"haxor.platform.graphics.OpenGL.BindFramebuffer","haxor/platform/graphics/OpenGL.hx",162,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_target,"p_target")
		HX_STACK_ARG(p_id,"p_id")
		HX_STACK_LINE(162)
		glBindFramebuffer(p_target, p_id);;
	}
return null();
}


Void OpenGL_obj::BindRenderbuffer( int p_target,int p_id){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","BindRenderbuffer",0x29e3755e,"haxor.platform.graphics.OpenGL.BindRenderbuffer","haxor/platform/graphics/OpenGL.hx",163,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_target,"p_target")
		HX_STACK_ARG(p_id,"p_id")
		HX_STACK_LINE(163)
		glBindRenderbuffer(p_target, p_id);;
	}
return null();
}


Void OpenGL_obj::BindTexture( int p_target,int p_id){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","BindTexture",0x4d746d53,"haxor.platform.graphics.OpenGL.BindTexture","haxor/platform/graphics/OpenGL.hx",164,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_target,"p_target")
		HX_STACK_ARG(p_id,"p_id")
		HX_STACK_LINE(164)
		glBindTexture(p_target, p_id);;
	}
return null();
}


int OpenGL_obj::CreateFramebuffer( ){
	HX_STACK_FRAME("haxor.platform.graphics.OpenGL","CreateFramebuffer",0x3e0475c6,"haxor.platform.graphics.OpenGL.CreateFramebuffer","haxor/platform/graphics/OpenGL.hx",165,0x3c17389a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(165)
	unsigned int id; glGenFramebuffers(1, &id);   return id;;
	HX_STACK_LINE(165)
	int tmp = ::haxor::graphics::GL_obj::INVALID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(165)
	return tmp;
}


int OpenGL_obj::CreateRenderbuffer( ){
	HX_STACK_FRAME("haxor.platform.graphics.OpenGL","CreateRenderbuffer",0x8c6ea9dd,"haxor.platform.graphics.OpenGL.CreateRenderbuffer","haxor/platform/graphics/OpenGL.hx",166,0x3c17389a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(166)
	unsigned int id; glGenRenderbuffers(1, &id);  return id;;
	HX_STACK_LINE(166)
	int tmp = ::haxor::graphics::GL_obj::INVALID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(166)
	return tmp;
}


int OpenGL_obj::CreateTexture( ){
	HX_STACK_FRAME("haxor.platform.graphics.OpenGL","CreateTexture",0xf3938934,"haxor.platform.graphics.OpenGL.CreateTexture","haxor/platform/graphics/OpenGL.hx",167,0x3c17389a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(167)
	unsigned int id; glGenTextures(1, &id);  	 return id;;
	HX_STACK_LINE(167)
	int tmp = ::haxor::graphics::GL_obj::INVALID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(167)
	return tmp;
}


Void OpenGL_obj::DeleteFramebuffer( int p_id){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","DeleteFramebuffer",0xc11cdcf7,"haxor.platform.graphics.OpenGL.DeleteFramebuffer","haxor/platform/graphics/OpenGL.hx",168,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_id,"p_id")
		HX_STACK_LINE(168)
		GLuint id = p_id; glDeleteFramebuffers(1, &id);;
	}
return null();
}


Void OpenGL_obj::DeleteRenderbuffer( int p_id){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","DeleteRenderbuffer",0xbeb08d8c,"haxor.platform.graphics.OpenGL.DeleteRenderbuffer","haxor/platform/graphics/OpenGL.hx",169,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_id,"p_id")
		HX_STACK_LINE(169)
		GLuint id = p_id; glDeleteRenderbuffers(1,&id);;
	}
return null();
}


Void OpenGL_obj::DeleteTexture( int p_id){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","DeleteTexture",0x69da43e5,"haxor.platform.graphics.OpenGL.DeleteTexture","haxor/platform/graphics/OpenGL.hx",170,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_id,"p_id")
		HX_STACK_LINE(170)
		GLuint id = p_id; glDeleteTextures(1,&id);;
	}
return null();
}


Void OpenGL_obj::FramebufferRenderbuffer( int p_target,int p_attachment,int p_renderbuffer_target,int p_renderbuffer_id){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","FramebufferRenderbuffer",0x2b862998,"haxor.platform.graphics.OpenGL.FramebufferRenderbuffer","haxor/platform/graphics/OpenGL.hx",172,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_target,"p_target")
		HX_STACK_ARG(p_attachment,"p_attachment")
		HX_STACK_ARG(p_renderbuffer_target,"p_renderbuffer_target")
		HX_STACK_ARG(p_renderbuffer_id,"p_renderbuffer_id")
		HX_STACK_LINE(172)
		glFramebufferRenderbuffer(p_target, p_attachment, p_renderbuffer_target, p_renderbuffer_id);;
	}
return null();
}


Void OpenGL_obj::FramebufferTexture2D( int p_target,int p_attachment,int p_texture_target,int p_texture_id,int p_miplevel){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","FramebufferTexture2D",0xf5d4976b,"haxor.platform.graphics.OpenGL.FramebufferTexture2D","haxor/platform/graphics/OpenGL.hx",174,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_target,"p_target")
		HX_STACK_ARG(p_attachment,"p_attachment")
		HX_STACK_ARG(p_texture_target,"p_texture_target")
		HX_STACK_ARG(p_texture_id,"p_texture_id")
		HX_STACK_ARG(p_miplevel,"p_miplevel")
		HX_STACK_LINE(174)
		glFramebufferTexture2D(p_target, p_attachment, p_texture_target, p_texture_id, p_miplevel);;
	}
return null();
}


Void OpenGL_obj::GenerateMipmap( int p_target){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","GenerateMipmap",0xd088e508,"haxor.platform.graphics.OpenGL.GenerateMipmap","haxor/platform/graphics/OpenGL.hx",175,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_target,"p_target")
		HX_STACK_LINE(175)
		glGenerateMipmap(p_target);;
	}
return null();
}


Void OpenGL_obj::PixelStorei( int p_parameter,int p_value){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","PixelStorei",0x32eac543,"haxor.platform.graphics.OpenGL.PixelStorei","haxor/platform/graphics/OpenGL.hx",176,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_parameter,"p_parameter")
		HX_STACK_ARG(p_value,"p_value")
		HX_STACK_LINE(176)
		glPixelStorei(p_parameter, p_value);;
	}
return null();
}


Void OpenGL_obj::RenderbufferStorage( int p_target,int p_format,int p_width,int p_height){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","RenderbufferStorage",0x1b526eba,"haxor.platform.graphics.OpenGL.RenderbufferStorage","haxor/platform/graphics/OpenGL.hx",177,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_target,"p_target")
		HX_STACK_ARG(p_format,"p_format")
		HX_STACK_ARG(p_width,"p_width")
		HX_STACK_ARG(p_height,"p_height")
		HX_STACK_LINE(177)
		glRenderbufferStorage(p_target, p_format, p_width, p_height);;
	}
return null();
}


Void OpenGL_obj::TexImage2D( int p_target,int p_level,int p_internal_format,int p_width,int p_height,int p_border,int p_format,int p_channel_type,::haxor::io::Buffer p_data){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","TexImage2D",0x41aa39b1,"haxor.platform.graphics.OpenGL.TexImage2D","haxor/platform/graphics/OpenGL.hx",179,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_target,"p_target")
		HX_STACK_ARG(p_level,"p_level")
		HX_STACK_ARG(p_internal_format,"p_internal_format")
		HX_STACK_ARG(p_width,"p_width")
		HX_STACK_ARG(p_height,"p_height")
		HX_STACK_ARG(p_border,"p_border")
		HX_STACK_ARG(p_format,"p_format")
		HX_STACK_ARG(p_channel_type,"p_channel_type")
		HX_STACK_ARG(p_data,"p_data")
		HX_STACK_LINE(180)
		::haxe::io::Bytes ba = p_data->m_buffer;		HX_STACK_VAR(ba,"ba");
		HX_STACK_LINE(181)
		glTexImage2D(p_target, p_level, p_internal_format,p_width,p_height,p_border, p_format, p_channel_type,(void*)&ba->b[0]);;
	}
return null();
}


Void OpenGL_obj::TexImage2DAlloc( int p_target,int p_level,int p_internal_format,int p_width,int p_height,int p_border,int p_format,int p_channel_type){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","TexImage2DAlloc",0x47931904,"haxor.platform.graphics.OpenGL.TexImage2DAlloc","haxor/platform/graphics/OpenGL.hx",185,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_target,"p_target")
		HX_STACK_ARG(p_level,"p_level")
		HX_STACK_ARG(p_internal_format,"p_internal_format")
		HX_STACK_ARG(p_width,"p_width")
		HX_STACK_ARG(p_height,"p_height")
		HX_STACK_ARG(p_border,"p_border")
		HX_STACK_ARG(p_format,"p_format")
		HX_STACK_ARG(p_channel_type,"p_channel_type")
		HX_STACK_LINE(185)
		glTexImage2D(p_target, p_level, p_internal_format,p_width,p_height,p_border, p_format, p_channel_type,(void*)NULL);;
	}
return null();
}


Void OpenGL_obj::TexSubImage2D( int p_target,int p_level,int p_x,int p_y,int p_width,int p_height,int p_format,int p_channel_type,::haxor::io::Buffer p_data){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","TexSubImage2D",0x95001709,"haxor.platform.graphics.OpenGL.TexSubImage2D","haxor/platform/graphics/OpenGL.hx",188,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_target,"p_target")
		HX_STACK_ARG(p_level,"p_level")
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_ARG(p_width,"p_width")
		HX_STACK_ARG(p_height,"p_height")
		HX_STACK_ARG(p_format,"p_format")
		HX_STACK_ARG(p_channel_type,"p_channel_type")
		HX_STACK_ARG(p_data,"p_data")
		HX_STACK_LINE(189)
		::haxe::io::Bytes ba = p_data->m_buffer;		HX_STACK_VAR(ba,"ba");
		HX_STACK_LINE(190)
		int off = p_data->m_offset;		HX_STACK_VAR(off,"off");
		HX_STACK_LINE(191)
		glTexSubImage2D(p_target, p_level, p_x, p_y,p_width,p_height,p_format, p_channel_type,(void*)((&ba->b[0])+off));;
	}
return null();
}


Void OpenGL_obj::TexParameterf( int p_target,int p_parameter,Float p_value){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","TexParameterf",0xa8a10f59,"haxor.platform.graphics.OpenGL.TexParameterf","haxor/platform/graphics/OpenGL.hx",193,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_target,"p_target")
		HX_STACK_ARG(p_parameter,"p_parameter")
		HX_STACK_ARG(p_value,"p_value")
		HX_STACK_LINE(193)
		glTexParameterf(p_target, p_parameter, p_value);;
	}
return null();
}


Void OpenGL_obj::TexParameteri( int p_target,int p_parameter,int p_value){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","TexParameteri",0xa8a10f5c,"haxor.platform.graphics.OpenGL.TexParameteri","haxor/platform/graphics/OpenGL.hx",194,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_target,"p_target")
		HX_STACK_ARG(p_parameter,"p_parameter")
		HX_STACK_ARG(p_value,"p_value")
		HX_STACK_LINE(194)
		glTexParameteri(p_target, p_parameter, p_value);;
	}
return null();
}


Void OpenGL_obj::Uniform1f( int p_location,Float p_x){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","Uniform1f",0xc273aabe,"haxor.platform.graphics.OpenGL.Uniform1f","haxor/platform/graphics/OpenGL.hx",197,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_LINE(197)
		glUniform1f(p_location, p_x);;
	}
return null();
}


Void OpenGL_obj::Uniform2f( int p_location,Float p_x,Float p_y){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","Uniform2f",0xc273ab9d,"haxor.platform.graphics.OpenGL.Uniform2f","haxor/platform/graphics/OpenGL.hx",198,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_LINE(198)
		glUniform2f(p_location, p_x, p_y);;
	}
return null();
}


Void OpenGL_obj::Uniform3f( int p_location,Float p_x,Float p_y,Float p_z){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","Uniform3f",0xc273ac7c,"haxor.platform.graphics.OpenGL.Uniform3f","haxor/platform/graphics/OpenGL.hx",199,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_ARG(p_z,"p_z")
		HX_STACK_LINE(199)
		glUniform3f(p_location, p_x, p_y, p_z);;
	}
return null();
}


Void OpenGL_obj::Uniform4f( int p_location,Float p_x,Float p_y,Float p_z,Float p_w){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","Uniform4f",0xc273ad5b,"haxor.platform.graphics.OpenGL.Uniform4f","haxor/platform/graphics/OpenGL.hx",200,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_ARG(p_z,"p_z")
		HX_STACK_ARG(p_w,"p_w")
		HX_STACK_LINE(200)
		glUniform4f(p_location, p_x, p_y, p_z, p_w);;
	}
return null();
}


Void OpenGL_obj::Uniform1i( int p_location,int p_x){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","Uniform1i",0xc273aac1,"haxor.platform.graphics.OpenGL.Uniform1i","haxor/platform/graphics/OpenGL.hx",201,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_LINE(201)
		glUniform1i(p_location, p_x);;
	}
return null();
}


Void OpenGL_obj::Uniform2i( int p_location,int p_x,int p_y){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","Uniform2i",0xc273aba0,"haxor.platform.graphics.OpenGL.Uniform2i","haxor/platform/graphics/OpenGL.hx",202,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_LINE(202)
		glUniform2i(p_location, p_x, p_y);;
	}
return null();
}


Void OpenGL_obj::Uniform3i( int p_location,int p_x,int p_y,int p_z){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","Uniform3i",0xc273ac7f,"haxor.platform.graphics.OpenGL.Uniform3i","haxor/platform/graphics/OpenGL.hx",203,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_ARG(p_z,"p_z")
		HX_STACK_LINE(203)
		glUniform3i(p_location, p_x, p_y, p_z);;
	}
return null();
}


Void OpenGL_obj::Uniform4i( int p_location,int p_x,int p_y,int p_z,int p_w){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","Uniform4i",0xc273ad5e,"haxor.platform.graphics.OpenGL.Uniform4i","haxor/platform/graphics/OpenGL.hx",204,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_ARG(p_z,"p_z")
		HX_STACK_ARG(p_w,"p_w")
		HX_STACK_LINE(204)
		glUniform4i(p_location, p_x, p_y, p_z, p_w);;
	}
return null();
}


Void OpenGL_obj::Uniform1fv( int p_location,::haxor::io::FloatArray p_v){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","Uniform1fv",0x62c1bbf8,"haxor.platform.graphics.OpenGL.Uniform1fv","haxor/platform/graphics/OpenGL.hx",205,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_v,"p_v")
		HX_STACK_LINE(205)
		::haxe::io::Bytes ba = p_v->m_buffer;		HX_STACK_VAR(ba,"ba");
		HX_STACK_LINE(205)
		int len = p_v->m_length;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(205)
		glUniform1fv(p_location,len,(float*)(&ba->b[0]));;
	}
return null();
}


Void OpenGL_obj::Uniform2fv( int p_location,::haxor::io::FloatArray p_v){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","Uniform2fv",0x62c27e39,"haxor.platform.graphics.OpenGL.Uniform2fv","haxor/platform/graphics/OpenGL.hx",206,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_v,"p_v")
		HX_STACK_LINE(206)
		::haxe::io::Bytes ba = p_v->m_buffer;		HX_STACK_VAR(ba,"ba");
		HX_STACK_LINE(206)
		int len = p_v->m_length;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(206)
		glUniform2fv(p_location,len/2,(float*)(&ba->b[0]));;
	}
return null();
}


Void OpenGL_obj::Uniform3fv( int p_location,::haxor::io::FloatArray p_v){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","Uniform3fv",0x62c3407a,"haxor.platform.graphics.OpenGL.Uniform3fv","haxor/platform/graphics/OpenGL.hx",207,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_v,"p_v")
		HX_STACK_LINE(207)
		::haxe::io::Bytes ba = p_v->m_buffer;		HX_STACK_VAR(ba,"ba");
		HX_STACK_LINE(207)
		int len = p_v->m_length;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(207)
		glUniform3fv(p_location,len/3,(float*)(&ba->b[0]));;
	}
return null();
}


Void OpenGL_obj::Uniform4fv( int p_location,::haxor::io::FloatArray p_v){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","Uniform4fv",0x62c402bb,"haxor.platform.graphics.OpenGL.Uniform4fv","haxor/platform/graphics/OpenGL.hx",208,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_v,"p_v")
		HX_STACK_LINE(208)
		::haxe::io::Bytes ba = p_v->m_buffer;		HX_STACK_VAR(ba,"ba");
		HX_STACK_LINE(208)
		int len = p_v->m_length;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(208)
		glUniform4fv(p_location,len/4,(float*)(&ba->b[0]));;
	}
return null();
}


Void OpenGL_obj::Uniform1iv( int p_location,::haxor::io::Int32Array p_v){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","Uniform1iv",0x62c1be95,"haxor.platform.graphics.OpenGL.Uniform1iv","haxor/platform/graphics/OpenGL.hx",210,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_v,"p_v")
		HX_STACK_LINE(210)
		::haxe::io::Bytes ba = p_v->m_buffer;		HX_STACK_VAR(ba,"ba");
		HX_STACK_LINE(210)
		int len = p_v->m_length;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(210)
		int * il = new int[len]; long * b = (long*)(&ba->b[0]); for (int i = 0; i < len; i++) il[i] = (int) b; glUniform1iv(p_location, len, il); delete[] il;;
	}
return null();
}


Void OpenGL_obj::Uniform2iv( int p_location,::haxor::io::Int32Array p_v){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","Uniform2iv",0x62c280d6,"haxor.platform.graphics.OpenGL.Uniform2iv","haxor/platform/graphics/OpenGL.hx",212,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_v,"p_v")
		HX_STACK_LINE(212)
		::haxe::io::Bytes ba = p_v->m_buffer;		HX_STACK_VAR(ba,"ba");
		HX_STACK_LINE(212)
		int len = p_v->m_length;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(212)
		int * il = new int[len]; long * b = (long*)(&ba->b[0]); for (int i = 0; i < len; i++) il[i] = (int) b; glUniform2iv(p_location, len/2, il); delete[] il;;
	}
return null();
}


Void OpenGL_obj::Uniform3iv( int p_location,::haxor::io::Int32Array p_v){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","Uniform3iv",0x62c34317,"haxor.platform.graphics.OpenGL.Uniform3iv","haxor/platform/graphics/OpenGL.hx",214,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_v,"p_v")
		HX_STACK_LINE(214)
		::haxe::io::Bytes ba = p_v->m_buffer;		HX_STACK_VAR(ba,"ba");
		HX_STACK_LINE(214)
		int len = p_v->m_length;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(214)
		int * il = new int[len]; long * b = (long*)(&ba->b[0]); for (int i = 0; i < len; i++) il[i] = (int) b; glUniform3iv(p_location, len/3, il); delete[] il;;
	}
return null();
}


Void OpenGL_obj::Uniform4iv( int p_location,::haxor::io::Int32Array p_v){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","Uniform4iv",0x62c40558,"haxor.platform.graphics.OpenGL.Uniform4iv","haxor/platform/graphics/OpenGL.hx",216,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_v,"p_v")
		HX_STACK_LINE(216)
		::haxe::io::Bytes ba = p_v->m_buffer;		HX_STACK_VAR(ba,"ba");
		HX_STACK_LINE(216)
		int len = p_v->m_length;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(216)
		int * il = new int[len]; long * b = (long*)(&ba->b[0]); for (int i = 0; i < len; i++) il[i] = (int) b; glUniform4iv(p_location, len/4, il); delete[] il;;
	}
return null();
}


Void OpenGL_obj::UniformMatrix2fv( int p_location,bool p_transpose,::haxor::io::FloatArray p_v){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","UniformMatrix2fv",0xda8549b8,"haxor.platform.graphics.OpenGL.UniformMatrix2fv","haxor/platform/graphics/OpenGL.hx",218,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_transpose,"p_transpose")
		HX_STACK_ARG(p_v,"p_v")
		HX_STACK_LINE(218)
		::haxe::io::Bytes ba = p_v->m_buffer;		HX_STACK_VAR(ba,"ba");
		HX_STACK_LINE(218)
		int len = p_v->m_length;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(218)
		glUniformMatrix2fv(p_location,len/4,  p_transpose, (float*)&ba->b[0]);;
	}
return null();
}


Void OpenGL_obj::UniformMatrix3fv( int p_location,bool p_transpose,::haxor::io::FloatArray p_v){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","UniformMatrix3fv",0xda860bf9,"haxor.platform.graphics.OpenGL.UniformMatrix3fv","haxor/platform/graphics/OpenGL.hx",219,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_transpose,"p_transpose")
		HX_STACK_ARG(p_v,"p_v")
		HX_STACK_LINE(219)
		::haxe::io::Bytes ba = p_v->m_buffer;		HX_STACK_VAR(ba,"ba");
		HX_STACK_LINE(219)
		int len = p_v->m_length;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(219)
		glUniformMatrix3fv(p_location,len/9,  p_transpose, (float*)&ba->b[0]);;
	}
return null();
}


Void OpenGL_obj::UniformMatrix4fv( int p_location,bool p_transpose,::haxor::io::FloatArray p_v){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","UniformMatrix4fv",0xda86ce3a,"haxor.platform.graphics.OpenGL.UniformMatrix4fv","haxor/platform/graphics/OpenGL.hx",221,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_transpose,"p_transpose")
		HX_STACK_ARG(p_v,"p_v")
		HX_STACK_LINE(222)
		::haxe::io::Bytes ba = p_v->m_buffer;		HX_STACK_VAR(ba,"ba");
		HX_STACK_LINE(222)
		int len = p_v->m_length;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(222)
		glUniformMatrix4fv(p_location,len/16, p_transpose, (float*)(&ba->b[0]));;
	}
return null();
}


Void OpenGL_obj::BlendFunc( int p_src,int p_dst){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","BlendFunc",0xc23185aa,"haxor.platform.graphics.OpenGL.BlendFunc","haxor/platform/graphics/OpenGL.hx",226,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_src,"p_src")
		HX_STACK_ARG(p_dst,"p_dst")
		HX_STACK_LINE(226)
		glBlendFunc(p_src, p_dst);;
	}
return null();
}


Void OpenGL_obj::Disable( int p_flag){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","Disable",0x1f6d3c1d,"haxor.platform.graphics.OpenGL.Disable","haxor/platform/graphics/OpenGL.hx",227,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_flag,"p_flag")
		HX_STACK_LINE(227)
		glDisable(p_flag);;
	}
return null();
}


Void OpenGL_obj::Enable( int p_flag){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","Enable",0xdd78d9ee,"haxor.platform.graphics.OpenGL.Enable","haxor/platform/graphics/OpenGL.hx",228,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_flag,"p_flag")
		HX_STACK_LINE(228)
		glEnable(p_flag);;
	}
return null();
}


Void OpenGL_obj::DepthMask( bool p_flag){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","DepthMask",0x596f2504,"haxor.platform.graphics.OpenGL.DepthMask","haxor/platform/graphics/OpenGL.hx",229,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_flag,"p_flag")
		HX_STACK_LINE(229)
		glDepthMask(p_flag);;
	}
return null();
}


Void OpenGL_obj::DepthFunc( int p_flag){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","DepthFunc",0x54ddcf5c,"haxor.platform.graphics.OpenGL.DepthFunc","haxor/platform/graphics/OpenGL.hx",230,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_flag,"p_flag")
		HX_STACK_LINE(230)
		glDepthFunc(p_flag);;
	}
return null();
}


Void OpenGL_obj::CullFace( int p_face){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","CullFace",0x9055039a,"haxor.platform.graphics.OpenGL.CullFace","haxor/platform/graphics/OpenGL.hx",231,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_face,"p_face")
		HX_STACK_LINE(231)
		glCullFace(p_face);;
	}
return null();
}


Void OpenGL_obj::FrontFace( int p_face){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","FrontFace",0x3b568b5b,"haxor.platform.graphics.OpenGL.FrontFace","haxor/platform/graphics/OpenGL.hx",232,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_face,"p_face")
		HX_STACK_LINE(232)
		glFrontFace(p_face);;
	}
return null();
}


Void OpenGL_obj::Clear( int p_flag){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","Clear",0x1247dc82,"haxor.platform.graphics.OpenGL.Clear","haxor/platform/graphics/OpenGL.hx",236,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_flag,"p_flag")
		HX_STACK_LINE(236)
		glClear(p_flag);;
	}
return null();
}


Void OpenGL_obj::ClearDepth( Float p_value){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","ClearDepth",0x3476ed21,"haxor.platform.graphics.OpenGL.ClearDepth","haxor/platform/graphics/OpenGL.hx",237,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_value,"p_value")
		HX_STACK_LINE(237)
		glClearDepthf(p_value);;
	}
return null();
}


Void OpenGL_obj::ClearColor( Float p_r,Float p_g,Float p_b,Float p_a){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","ClearColor",0xa7a96d81,"haxor.platform.graphics.OpenGL.ClearColor","haxor/platform/graphics/OpenGL.hx",238,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_r,"p_r")
		HX_STACK_ARG(p_g,"p_g")
		HX_STACK_ARG(p_b,"p_b")
		HX_STACK_ARG(p_a,"p_a")
		HX_STACK_LINE(238)
		glClearColor(p_r, p_g, p_b, p_a);;
	}
return null();
}


Void OpenGL_obj::Viewport( int p_x,int p_y,int p_width,int p_height){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","Viewport",0x80c86891,"haxor.platform.graphics.OpenGL.Viewport","haxor/platform/graphics/OpenGL.hx",239,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_ARG(p_width,"p_width")
		HX_STACK_ARG(p_height,"p_height")
		HX_STACK_LINE(239)
		glViewport(p_x, p_y, p_width, p_height);;
	}
return null();
}


Void OpenGL_obj::Scissor( int p_x,int p_y,int p_width,int p_height){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","Scissor",0x72fbfa51,"haxor.platform.graphics.OpenGL.Scissor","haxor/platform/graphics/OpenGL.hx",240,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_ARG(p_width,"p_width")
		HX_STACK_ARG(p_height,"p_height")
		HX_STACK_LINE(240)
		glScissor(p_x, p_y, p_width, p_height);;
	}
return null();
}


Void OpenGL_obj::ReadPixels( int p_x,int p_y,int p_width,int p_height,int p_format,int p_type,::haxor::io::Buffer p_pixels){
{
		HX_STACK_FRAME("haxor.platform.graphics.OpenGL","ReadPixels",0x0e68900e,"haxor.platform.graphics.OpenGL.ReadPixels","haxor/platform/graphics/OpenGL.hx",242,0x3c17389a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_ARG(p_width,"p_width")
		HX_STACK_ARG(p_height,"p_height")
		HX_STACK_ARG(p_format,"p_format")
		HX_STACK_ARG(p_type,"p_type")
		HX_STACK_ARG(p_pixels,"p_pixels")
		HX_STACK_LINE(242)
		::haxe::io::Bytes ba = p_pixels->m_buffer;		HX_STACK_VAR(ba,"ba");
		HX_STACK_LINE(242)
		glReadPixels(p_x, p_y, p_width, p_height, p_format, p_type, (void*)(&ba->b[0]));;
	}
return null();
}


int OpenGL_obj::GetErrorCode( ){
	HX_STACK_FRAME("haxor.platform.graphics.OpenGL","GetErrorCode",0xa39fd74a,"haxor.platform.graphics.OpenGL.GetErrorCode","haxor/platform/graphics/OpenGL.hx",245,0x3c17389a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(245)
	return glGetError();;
	HX_STACK_LINE(245)
	return (int)0;
}



OpenGL_obj::OpenGL_obj()
{
}

Dynamic OpenGL_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"Clear") ) { return Clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"Enable") ) { return Enable_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"Disable") ) { return Disable_dyn(); }
		if (HX_FIELD_EQ(inName,"Scissor") ) { return Scissor_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"CullFace") ) { return CullFace_dyn(); }
		if (HX_FIELD_EQ(inName,"Viewport") ) { return Viewport_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"Uniform1f") ) { return Uniform1f_dyn(); }
		if (HX_FIELD_EQ(inName,"Uniform2f") ) { return Uniform2f_dyn(); }
		if (HX_FIELD_EQ(inName,"Uniform3f") ) { return Uniform3f_dyn(); }
		if (HX_FIELD_EQ(inName,"Uniform4f") ) { return Uniform4f_dyn(); }
		if (HX_FIELD_EQ(inName,"Uniform1i") ) { return Uniform1i_dyn(); }
		if (HX_FIELD_EQ(inName,"Uniform2i") ) { return Uniform2i_dyn(); }
		if (HX_FIELD_EQ(inName,"Uniform3i") ) { return Uniform3i_dyn(); }
		if (HX_FIELD_EQ(inName,"Uniform4i") ) { return Uniform4i_dyn(); }
		if (HX_FIELD_EQ(inName,"BlendFunc") ) { return BlendFunc_dyn(); }
		if (HX_FIELD_EQ(inName,"DepthMask") ) { return DepthMask_dyn(); }
		if (HX_FIELD_EQ(inName,"DepthFunc") ) { return DepthFunc_dyn(); }
		if (HX_FIELD_EQ(inName,"FrontFace") ) { return FrontFace_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"BindBuffer") ) { return BindBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"BufferData") ) { return BufferData_dyn(); }
		if (HX_FIELD_EQ(inName,"DrawArrays") ) { return DrawArrays_dyn(); }
		if (HX_FIELD_EQ(inName,"UseProgram") ) { return UseProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"TexImage2D") ) { return TexImage2D_dyn(); }
		if (HX_FIELD_EQ(inName,"Uniform1fv") ) { return Uniform1fv_dyn(); }
		if (HX_FIELD_EQ(inName,"Uniform2fv") ) { return Uniform2fv_dyn(); }
		if (HX_FIELD_EQ(inName,"Uniform3fv") ) { return Uniform3fv_dyn(); }
		if (HX_FIELD_EQ(inName,"Uniform4fv") ) { return Uniform4fv_dyn(); }
		if (HX_FIELD_EQ(inName,"Uniform1iv") ) { return Uniform1iv_dyn(); }
		if (HX_FIELD_EQ(inName,"Uniform2iv") ) { return Uniform2iv_dyn(); }
		if (HX_FIELD_EQ(inName,"Uniform3iv") ) { return Uniform3iv_dyn(); }
		if (HX_FIELD_EQ(inName,"Uniform4iv") ) { return Uniform4iv_dyn(); }
		if (HX_FIELD_EQ(inName,"ClearDepth") ) { return ClearDepth_dyn(); }
		if (HX_FIELD_EQ(inName,"ClearColor") ) { return ClearColor_dyn(); }
		if (HX_FIELD_EQ(inName,"ReadPixels") ) { return ReadPixels_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"LinkProgram") ) { return LinkProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"BindTexture") ) { return BindTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"PixelStorei") ) { return PixelStorei_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"CreateBuffer") ) { return CreateBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"DrawElements") ) { return DrawElements_dyn(); }
		if (HX_FIELD_EQ(inName,"DeleteBuffer") ) { return DeleteBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"CreateShader") ) { return CreateShader_dyn(); }
		if (HX_FIELD_EQ(inName,"DetachShader") ) { return DetachShader_dyn(); }
		if (HX_FIELD_EQ(inName,"DeleteShader") ) { return DeleteShader_dyn(); }
		if (HX_FIELD_EQ(inName,"ShaderSource") ) { return ShaderSource_dyn(); }
		if (HX_FIELD_EQ(inName,"AttachShader") ) { return AttachShader_dyn(); }
		if (HX_FIELD_EQ(inName,"GetErrorCode") ) { return GetErrorCode_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"BufferSubData") ) { return BufferSubData_dyn(); }
		if (HX_FIELD_EQ(inName,"CompileShader") ) { return CompileShader_dyn(); }
		if (HX_FIELD_EQ(inName,"CreateProgram") ) { return CreateProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"DeleteProgram") ) { return DeleteProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"ActiveTexture") ) { return ActiveTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"CreateTexture") ) { return CreateTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"DeleteTexture") ) { return DeleteTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"TexSubImage2D") ) { return TexSubImage2D_dyn(); }
		if (HX_FIELD_EQ(inName,"TexParameterf") ) { return TexParameterf_dyn(); }
		if (HX_FIELD_EQ(inName,"TexParameteri") ) { return TexParameteri_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"VertexAttrib3f") ) { return VertexAttrib3f_dyn(); }
		if (HX_FIELD_EQ(inName,"VertexAttrib4f") ) { return VertexAttrib4f_dyn(); }
		if (HX_FIELD_EQ(inName,"GenerateMipmap") ) { return GenerateMipmap_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"CheckExtensions") ) { return CheckExtensions_dyn(); }
		if (HX_FIELD_EQ(inName,"BindFramebuffer") ) { return BindFramebuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"TexImage2DAlloc") ) { return TexImage2DAlloc_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"GetShaderInfoLog") ) { return GetShaderInfoLog_dyn(); }
		if (HX_FIELD_EQ(inName,"BindRenderbuffer") ) { return BindRenderbuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"UniformMatrix2fv") ) { return UniformMatrix2fv_dyn(); }
		if (HX_FIELD_EQ(inName,"UniformMatrix3fv") ) { return UniformMatrix3fv_dyn(); }
		if (HX_FIELD_EQ(inName,"UniformMatrix4fv") ) { return UniformMatrix4fv_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"GetAttribLocation") ) { return GetAttribLocation_dyn(); }
		if (HX_FIELD_EQ(inName,"GetProgramInfoLog") ) { return GetProgramInfoLog_dyn(); }
		if (HX_FIELD_EQ(inName,"CreateFramebuffer") ) { return CreateFramebuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"DeleteFramebuffer") ) { return DeleteFramebuffer_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"EnableVertexAttrib") ) { return EnableVertexAttrib_dyn(); }
		if (HX_FIELD_EQ(inName,"GetShaderParameter") ) { return GetShaderParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"BindAttribLocation") ) { return BindAttribLocation_dyn(); }
		if (HX_FIELD_EQ(inName,"GetUniformLocation") ) { return GetUniformLocation_dyn(); }
		if (HX_FIELD_EQ(inName,"CreateRenderbuffer") ) { return CreateRenderbuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"DeleteRenderbuffer") ) { return DeleteRenderbuffer_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"DisableVertexAttrib") ) { return DisableVertexAttrib_dyn(); }
		if (HX_FIELD_EQ(inName,"VertexAttribPointer") ) { return VertexAttribPointer_dyn(); }
		if (HX_FIELD_EQ(inName,"GetProgramParameter") ) { return GetProgramParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"RenderbufferStorage") ) { return RenderbufferStorage_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"FramebufferTexture2D") ) { return FramebufferTexture2D_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"FramebufferRenderbuffer") ) { return FramebufferRenderbuffer_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("CheckExtensions","\xdc","\xea","\x55","\x63"),
	HX_HCSTRING("BindBuffer","\xbd","\x96","\x6f","\xef"),
	HX_HCSTRING("BufferData","\x6a","\xc3","\x24","\x8a"),
	HX_HCSTRING("BufferSubData","\x8a","\x46","\xd5","\x8d"),
	HX_HCSTRING("CreateBuffer","\x3c","\x49","\xfc","\xba"),
	HX_HCSTRING("DrawArrays","\xfe","\xf7","\x64","\xf0"),
	HX_HCSTRING("DrawElements","\x7b","\x0e","\xca","\x21"),
	HX_HCSTRING("DeleteBuffer","\xab","\x2f","\x3f","\xff"),
	HX_HCSTRING("DisableVertexAttrib","\xb6","\x43","\xe5","\x25"),
	HX_HCSTRING("EnableVertexAttrib","\x11","\x31","\x9b","\xa9"),
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
	HX_HCSTRING("GetErrorCode","\xbf","\x15","\x96","\x3f"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OpenGL_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OpenGL_obj::__mClass,"__mClass");
};

#endif

hx::Class OpenGL_obj::__mClass;

void OpenGL_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.platform.graphics.OpenGL","\xc3","\x2d","\x5b","\xe9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OpenGL_obj >;
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
} // end namespace platform
} // end namespace graphics
