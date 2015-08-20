#include <hxcpp.h>

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
namespace haxor{
namespace graphics{

Void GraphicContext_obj::__construct(::haxor::core::BaseApplication p_application)
{
HX_STACK_FRAME("haxor.graphics.GraphicContext","new",0x739d8e50,"haxor.graphics.GraphicContext.new","haxor/graphics/GraphicContext.hx",57,0xb16d5740)
HX_STACK_THIS(this)
HX_STACK_ARG(p_application,"p_application")
{
	HX_STACK_LINE(58)
	this->m_api = ::haxor::graphics::GraphicAPI_obj::None;
	HX_STACK_LINE(59)
	this->m_application = p_application;
}
;
	return null();
}

//GraphicContext_obj::~GraphicContext_obj() { }

Dynamic GraphicContext_obj::__CreateEmpty() { return  new GraphicContext_obj; }
hx::ObjectPtr< GraphicContext_obj > GraphicContext_obj::__new(::haxor::core::BaseApplication p_application)
{  hx::ObjectPtr< GraphicContext_obj > _result_ = new GraphicContext_obj();
	_result_->__construct(p_application);
	return _result_;}

Dynamic GraphicContext_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GraphicContext_obj > _result_ = new GraphicContext_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::haxor::graphics::GraphicAPI GraphicContext_obj::get_api( ){
	HX_STACK_FRAME("haxor.graphics.GraphicContext","get_api",0x5e563b21,"haxor.graphics.GraphicContext.get_api","haxor/graphics/GraphicContext.hx",45,0xb16d5740)
	HX_STACK_THIS(this)
	HX_STACK_LINE(45)
	::haxor::graphics::GraphicAPI tmp = this->m_api;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(GraphicContext_obj,get_api,return )

Void GraphicContext_obj::CheckExtensions( ){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","CheckExtensions",0xa13cd0cc,"haxor.graphics.GraphicContext.CheckExtensions","haxor/graphics/GraphicContext.hx",65,0xb16d5740)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GraphicContext_obj,CheckExtensions,(void))

Void GraphicContext_obj::Destroy( ){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","Destroy",0x296ecaca,"haxor.graphics.GraphicContext.Destroy","haxor/graphics/GraphicContext.hx",68,0xb16d5740)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GraphicContext_obj,Destroy,(void))

Void GraphicContext_obj::Flush( ){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","Flush",0xbd71ec94,"haxor.graphics.GraphicContext.Flush","haxor/graphics/GraphicContext.hx",69,0xb16d5740)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GraphicContext_obj,Flush,(void))

Void GraphicContext_obj::Focus( ){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","Focus",0xbf5fe9a8,"haxor.graphics.GraphicContext.Focus","haxor/graphics/GraphicContext.hx",70,0xb16d5740)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GraphicContext_obj,Focus,(void))

Void GraphicContext_obj::Resize( ){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","Resize",0xc95d6624,"haxor.graphics.GraphicContext.Resize","haxor/graphics/GraphicContext.hx",71,0xb16d5740)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GraphicContext_obj,Resize,(void))

Void GraphicContext_obj::BindBuffer( int p_target,int p_id){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","BindBuffer",0x44d276cd,"haxor.graphics.GraphicContext.BindBuffer","haxor/graphics/GraphicContext.hx",74,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_target,"p_target")
		HX_STACK_ARG(p_id,"p_id")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GraphicContext_obj,BindBuffer,(void))

Void GraphicContext_obj::BindVAO( int p_id){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","BindVAO",0x840796f7,"haxor.graphics.GraphicContext.BindVAO","haxor/graphics/GraphicContext.hx",75,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_id,"p_id")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GraphicContext_obj,BindVAO,(void))

Void GraphicContext_obj::BufferData( int p_target,::haxor::io::Buffer p_data,int p_mode){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","BufferData",0xdf87a37a,"haxor.graphics.GraphicContext.BufferData","haxor/graphics/GraphicContext.hx",76,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_target,"p_target")
		HX_STACK_ARG(p_data,"p_data")
		HX_STACK_ARG(p_mode,"p_mode")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GraphicContext_obj,BufferData,(void))

Void GraphicContext_obj::BufferSubData( int p_target,int p_offset,::haxor::io::Buffer p_data){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","BufferSubData",0x5c11d07a,"haxor.graphics.GraphicContext.BufferSubData","haxor/graphics/GraphicContext.hx",77,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_target,"p_target")
		HX_STACK_ARG(p_offset,"p_offset")
		HX_STACK_ARG(p_data,"p_data")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GraphicContext_obj,BufferSubData,(void))

int GraphicContext_obj::CreateBuffer( ){
	HX_STACK_FRAME("haxor.graphics.GraphicContext","CreateBuffer",0x56e34d4c,"haxor.graphics.GraphicContext.CreateBuffer","haxor/graphics/GraphicContext.hx",78,0xb16d5740)
	HX_STACK_THIS(this)
	HX_STACK_LINE(78)
	int tmp = ::haxor::graphics::GL_obj::INVALID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(78)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(GraphicContext_obj,CreateBuffer,return )

int GraphicContext_obj::CreateVAO( ){
	HX_STACK_FRAME("haxor.graphics.GraphicContext","CreateVAO",0xd08f4b18,"haxor.graphics.GraphicContext.CreateVAO","haxor/graphics/GraphicContext.hx",79,0xb16d5740)
	HX_STACK_THIS(this)
	HX_STACK_LINE(79)
	int tmp = ::haxor::graphics::GL_obj::INVALID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(79)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(GraphicContext_obj,CreateVAO,return )

Void GraphicContext_obj::DeleteBuffer( int p_id){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","DeleteBuffer",0x9b2633bb,"haxor.graphics.GraphicContext.DeleteBuffer","haxor/graphics/GraphicContext.hx",80,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_id,"p_id")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GraphicContext_obj,DeleteBuffer,(void))

Void GraphicContext_obj::DeleteVAO( int p_id){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","DeleteVAO",0x78749949,"haxor.graphics.GraphicContext.DeleteVAO","haxor/graphics/GraphicContext.hx",81,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_id,"p_id")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GraphicContext_obj,DeleteVAO,(void))

Void GraphicContext_obj::DrawArrays( int p_primitive,int p_start,int p_count){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","DrawArrays",0x45c7d80e,"haxor.graphics.GraphicContext.DrawArrays","haxor/graphics/GraphicContext.hx",82,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_primitive,"p_primitive")
		HX_STACK_ARG(p_start,"p_start")
		HX_STACK_ARG(p_count,"p_count")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GraphicContext_obj,DrawArrays,(void))

Void GraphicContext_obj::DrawElements( int p_primitive,int p_count,int p_type,int p_offset){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","DrawElements",0xbdb1128b,"haxor.graphics.GraphicContext.DrawElements","haxor/graphics/GraphicContext.hx",83,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_primitive,"p_primitive")
		HX_STACK_ARG(p_count,"p_count")
		HX_STACK_ARG(p_type,"p_type")
		HX_STACK_ARG(p_offset,"p_offset")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GraphicContext_obj,DrawElements,(void))

Void GraphicContext_obj::EnableVertexAttrib( int p_location){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","EnableVertexAttrib",0x9bf4a121,"haxor.graphics.GraphicContext.EnableVertexAttrib","haxor/graphics/GraphicContext.hx",84,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GraphicContext_obj,EnableVertexAttrib,(void))

Void GraphicContext_obj::DisableVertexAttrib( int p_location){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","DisableVertexAttrib",0x41cde1a6,"haxor.graphics.GraphicContext.DisableVertexAttrib","haxor/graphics/GraphicContext.hx",85,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GraphicContext_obj,DisableVertexAttrib,(void))

Void GraphicContext_obj::VertexAttrib1f( int p_location,Float p_x){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","VertexAttrib1f",0xa4c85093,"haxor.graphics.GraphicContext.VertexAttrib1f","haxor/graphics/GraphicContext.hx",86,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_x,"p_x")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GraphicContext_obj,VertexAttrib1f,(void))

Void GraphicContext_obj::VertexAttrib2f( int p_location,Float p_x,Float p_y){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","VertexAttrib2f",0xa4c85172,"haxor.graphics.GraphicContext.VertexAttrib2f","haxor/graphics/GraphicContext.hx",87,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GraphicContext_obj,VertexAttrib2f,(void))

Void GraphicContext_obj::VertexAttrib3f( int p_location,Float p_x,Float p_y,Float p_z){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","VertexAttrib3f",0xa4c85251,"haxor.graphics.GraphicContext.VertexAttrib3f","haxor/graphics/GraphicContext.hx",88,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_ARG(p_z,"p_z")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GraphicContext_obj,VertexAttrib3f,(void))

Void GraphicContext_obj::VertexAttrib4f( int p_location,Float p_x,Float p_y,Float p_z,Float p_w){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","VertexAttrib4f",0xa4c85330,"haxor.graphics.GraphicContext.VertexAttrib4f","haxor/graphics/GraphicContext.hx",89,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_ARG(p_z,"p_z")
		HX_STACK_ARG(p_w,"p_w")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(GraphicContext_obj,VertexAttrib4f,(void))

Void GraphicContext_obj::VertexAttribPointer( int p_location,int p_components_size,int p_type,bool p_normalized,int p_stride,int p_offset){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","VertexAttribPointer",0xb9fc1a5f,"haxor.graphics.GraphicContext.VertexAttribPointer","haxor/graphics/GraphicContext.hx",90,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_components_size,"p_components_size")
		HX_STACK_ARG(p_type,"p_type")
		HX_STACK_ARG(p_normalized,"p_normalized")
		HX_STACK_ARG(p_stride,"p_stride")
		HX_STACK_ARG(p_offset,"p_offset")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(GraphicContext_obj,VertexAttribPointer,(void))

Void GraphicContext_obj::CompileShader( int p_shader){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","CompileShader",0xf0df4ac8,"haxor.graphics.GraphicContext.CompileShader","haxor/graphics/GraphicContext.hx",93,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_shader,"p_shader")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GraphicContext_obj,CompileShader,(void))

int GraphicContext_obj::CreateShader( int p_type){
	HX_STACK_FRAME("haxor.graphics.GraphicContext","CreateShader",0xa36f4f71,"haxor.graphics.GraphicContext.CreateShader","haxor/graphics/GraphicContext.hx",94,0xb16d5740)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_type,"p_type")
	HX_STACK_LINE(94)
	int tmp = ::haxor::graphics::GL_obj::INVALID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(94)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(GraphicContext_obj,CreateShader,return )

Void GraphicContext_obj::DeleteShader( int p_shader){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","DeleteShader",0xe7b235e0,"haxor.graphics.GraphicContext.DeleteShader","haxor/graphics/GraphicContext.hx",95,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_shader,"p_shader")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GraphicContext_obj,DeleteShader,(void))

Void GraphicContext_obj::DetachShader( int p_program,int p_shader){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","DetachShader",0x4ea72108,"haxor.graphics.GraphicContext.DetachShader","haxor/graphics/GraphicContext.hx",96,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_program,"p_program")
		HX_STACK_ARG(p_shader,"p_shader")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GraphicContext_obj,DetachShader,(void))

::String GraphicContext_obj::GetShaderInfoLog( int p_shader){
	HX_STACK_FRAME("haxor.graphics.GraphicContext","GetShaderInfoLog",0xf9e5e5cb,"haxor.graphics.GraphicContext.GetShaderInfoLog","haxor/graphics/GraphicContext.hx",97,0xb16d5740)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_shader,"p_shader")
	HX_STACK_LINE(97)
	return HX_HCSTRING("","\x00","\x00","\x00","\x00");
}


HX_DEFINE_DYNAMIC_FUNC1(GraphicContext_obj,GetShaderInfoLog,return )

int GraphicContext_obj::GetShaderParameter( int p_shader,int p_parameter){
	HX_STACK_FRAME("haxor.graphics.GraphicContext","GetShaderParameter",0xdc36fdfe,"haxor.graphics.GraphicContext.GetShaderParameter","haxor/graphics/GraphicContext.hx",98,0xb16d5740)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_shader,"p_shader")
	HX_STACK_ARG(p_parameter,"p_parameter")
	HX_STACK_LINE(98)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC2(GraphicContext_obj,GetShaderParameter,return )

Void GraphicContext_obj::ShaderSource( int p_shader,::String p_source){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","ShaderSource",0x06139e10,"haxor.graphics.GraphicContext.ShaderSource","haxor/graphics/GraphicContext.hx",99,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_shader,"p_shader")
		HX_STACK_ARG(p_source,"p_source")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GraphicContext_obj,ShaderSource,(void))

Void GraphicContext_obj::AttachShader( int p_program,int p_shader){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","AttachShader",0x167120fa,"haxor.graphics.GraphicContext.AttachShader","haxor/graphics/GraphicContext.hx",100,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_program,"p_program")
		HX_STACK_ARG(p_shader,"p_shader")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GraphicContext_obj,AttachShader,(void))

Void GraphicContext_obj::BindAttribLocation( int p_program,int p_location,::String p_name){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","BindAttribLocation",0xc40c3a6c,"haxor.graphics.GraphicContext.BindAttribLocation","haxor/graphics/GraphicContext.hx",101,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_program,"p_program")
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_name,"p_name")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GraphicContext_obj,BindAttribLocation,(void))

int GraphicContext_obj::CreateProgram( ){
	HX_STACK_FRAME("haxor.graphics.GraphicContext","CreateProgram",0xf268fcb8,"haxor.graphics.GraphicContext.CreateProgram","haxor/graphics/GraphicContext.hx",102,0xb16d5740)
	HX_STACK_THIS(this)
	HX_STACK_LINE(102)
	int tmp = ::haxor::graphics::GL_obj::INVALID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(102)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(GraphicContext_obj,CreateProgram,return )

Void GraphicContext_obj::DeleteProgram( int p_program){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","DeleteProgram",0x68afb769,"haxor.graphics.GraphicContext.DeleteProgram","haxor/graphics/GraphicContext.hx",103,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_program,"p_program")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GraphicContext_obj,DeleteProgram,(void))

int GraphicContext_obj::GetAttribLocation( int p_program,::String p_name){
	HX_STACK_FRAME("haxor.graphics.GraphicContext","GetAttribLocation",0xb0761ca5,"haxor.graphics.GraphicContext.GetAttribLocation","haxor/graphics/GraphicContext.hx",104,0xb16d5740)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_program,"p_program")
	HX_STACK_ARG(p_name,"p_name")
	HX_STACK_LINE(104)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC2(GraphicContext_obj,GetAttribLocation,return )

int GraphicContext_obj::GetUniformLocation( int p_program,::String p_name){
	HX_STACK_FRAME("haxor.graphics.GraphicContext","GetUniformLocation",0xf5aff3c3,"haxor.graphics.GraphicContext.GetUniformLocation","haxor/graphics/GraphicContext.hx",105,0xb16d5740)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_program,"p_program")
	HX_STACK_ARG(p_name,"p_name")
	HX_STACK_LINE(105)
	int tmp = ::haxor::graphics::GL_obj::INVALID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(105)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(GraphicContext_obj,GetUniformLocation,return )

::String GraphicContext_obj::GetProgramInfoLog( int p_program){
	HX_STACK_FRAME("haxor.graphics.GraphicContext","GetProgramInfoLog",0x2158f398,"haxor.graphics.GraphicContext.GetProgramInfoLog","haxor/graphics/GraphicContext.hx",106,0xb16d5740)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_program,"p_program")
	HX_STACK_LINE(106)
	return HX_HCSTRING("","\x00","\x00","\x00","\x00");
}


HX_DEFINE_DYNAMIC_FUNC1(GraphicContext_obj,GetProgramInfoLog,return )

int GraphicContext_obj::GetProgramParameter( int p_program,int p_parameter){
	HX_STACK_FRAME("haxor.graphics.GraphicContext","GetProgramParameter",0x10e2d90b,"haxor.graphics.GraphicContext.GetProgramParameter","haxor/graphics/GraphicContext.hx",107,0xb16d5740)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_program,"p_program")
	HX_STACK_ARG(p_parameter,"p_parameter")
	HX_STACK_LINE(107)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC2(GraphicContext_obj,GetProgramParameter,return )

Void GraphicContext_obj::LinkProgram( int p_program){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","LinkProgram",0xcecf737a,"haxor.graphics.GraphicContext.LinkProgram","haxor/graphics/GraphicContext.hx",108,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_program,"p_program")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GraphicContext_obj,LinkProgram,(void))

Void GraphicContext_obj::UseProgram( int p_program){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","UseProgram",0x42c0512d,"haxor.graphics.GraphicContext.UseProgram","haxor/graphics/GraphicContext.hx",109,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_program,"p_program")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GraphicContext_obj,UseProgram,(void))

Void GraphicContext_obj::Uniform1f( int p_location,Float p_x){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","Uniform1f",0x8e85d319,"haxor.graphics.GraphicContext.Uniform1f","haxor/graphics/GraphicContext.hx",112,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_x,"p_x")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GraphicContext_obj,Uniform1f,(void))

Void GraphicContext_obj::Uniform2f( int p_location,Float p_x,Float p_y){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","Uniform2f",0x8e85d3f8,"haxor.graphics.GraphicContext.Uniform2f","haxor/graphics/GraphicContext.hx",113,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GraphicContext_obj,Uniform2f,(void))

Void GraphicContext_obj::Uniform3f( int p_location,Float p_x,Float p_y,Float p_z){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","Uniform3f",0x8e85d4d7,"haxor.graphics.GraphicContext.Uniform3f","haxor/graphics/GraphicContext.hx",114,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_ARG(p_z,"p_z")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GraphicContext_obj,Uniform3f,(void))

Void GraphicContext_obj::Uniform4f( int p_location,Float p_x,Float p_y,Float p_z,Float p_w){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","Uniform4f",0x8e85d5b6,"haxor.graphics.GraphicContext.Uniform4f","haxor/graphics/GraphicContext.hx",115,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_ARG(p_z,"p_z")
		HX_STACK_ARG(p_w,"p_w")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(GraphicContext_obj,Uniform4f,(void))

Void GraphicContext_obj::Uniform1i( int p_location,int p_x){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","Uniform1i",0x8e85d31c,"haxor.graphics.GraphicContext.Uniform1i","haxor/graphics/GraphicContext.hx",116,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_x,"p_x")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GraphicContext_obj,Uniform1i,(void))

Void GraphicContext_obj::Uniform2i( int p_location,int p_x,int p_y){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","Uniform2i",0x8e85d3fb,"haxor.graphics.GraphicContext.Uniform2i","haxor/graphics/GraphicContext.hx",117,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GraphicContext_obj,Uniform2i,(void))

Void GraphicContext_obj::Uniform3i( int p_location,int p_x,int p_y,int p_z){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","Uniform3i",0x8e85d4da,"haxor.graphics.GraphicContext.Uniform3i","haxor/graphics/GraphicContext.hx",118,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_ARG(p_z,"p_z")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GraphicContext_obj,Uniform3i,(void))

Void GraphicContext_obj::Uniform4i( int p_location,int p_x,int p_y,int p_z,int p_w){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","Uniform4i",0x8e85d5b9,"haxor.graphics.GraphicContext.Uniform4i","haxor/graphics/GraphicContext.hx",119,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_ARG(p_z,"p_z")
		HX_STACK_ARG(p_w,"p_w")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(GraphicContext_obj,Uniform4i,(void))

Void GraphicContext_obj::Uniform1fv( int p_location,::haxor::io::FloatArray p_v){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","Uniform1fv",0x2692e33d,"haxor.graphics.GraphicContext.Uniform1fv","haxor/graphics/GraphicContext.hx",120,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_v,"p_v")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GraphicContext_obj,Uniform1fv,(void))

Void GraphicContext_obj::Uniform2fv( int p_location,::haxor::io::FloatArray p_v){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","Uniform2fv",0x2693a57e,"haxor.graphics.GraphicContext.Uniform2fv","haxor/graphics/GraphicContext.hx",121,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_v,"p_v")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GraphicContext_obj,Uniform2fv,(void))

Void GraphicContext_obj::Uniform3fv( int p_location,::haxor::io::FloatArray p_v){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","Uniform3fv",0x269467bf,"haxor.graphics.GraphicContext.Uniform3fv","haxor/graphics/GraphicContext.hx",122,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_v,"p_v")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GraphicContext_obj,Uniform3fv,(void))

Void GraphicContext_obj::Uniform4fv( int p_location,::haxor::io::FloatArray p_v){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","Uniform4fv",0x26952a00,"haxor.graphics.GraphicContext.Uniform4fv","haxor/graphics/GraphicContext.hx",123,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_v,"p_v")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GraphicContext_obj,Uniform4fv,(void))

Void GraphicContext_obj::Uniform1iv( int p_location,::haxor::io::Int32Array p_v){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","Uniform1iv",0x2692e5da,"haxor.graphics.GraphicContext.Uniform1iv","haxor/graphics/GraphicContext.hx",124,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_v,"p_v")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GraphicContext_obj,Uniform1iv,(void))

Void GraphicContext_obj::Uniform2iv( int p_location,::haxor::io::Int32Array p_v){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","Uniform2iv",0x2693a81b,"haxor.graphics.GraphicContext.Uniform2iv","haxor/graphics/GraphicContext.hx",125,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_v,"p_v")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GraphicContext_obj,Uniform2iv,(void))

Void GraphicContext_obj::Uniform3iv( int p_location,::haxor::io::Int32Array p_v){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","Uniform3iv",0x26946a5c,"haxor.graphics.GraphicContext.Uniform3iv","haxor/graphics/GraphicContext.hx",126,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_v,"p_v")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GraphicContext_obj,Uniform3iv,(void))

Void GraphicContext_obj::Uniform4iv( int p_location,::haxor::io::Int32Array p_v){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","Uniform4iv",0x26952c9d,"haxor.graphics.GraphicContext.Uniform4iv","haxor/graphics/GraphicContext.hx",127,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_v,"p_v")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GraphicContext_obj,Uniform4iv,(void))

Void GraphicContext_obj::UniformMatrix2fv( int p_location,bool p_transpose,::haxor::io::FloatArray p_v){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","UniformMatrix2fv",0xcb76b2bd,"haxor.graphics.GraphicContext.UniformMatrix2fv","haxor/graphics/GraphicContext.hx",128,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_transpose,"p_transpose")
		HX_STACK_ARG(p_v,"p_v")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GraphicContext_obj,UniformMatrix2fv,(void))

Void GraphicContext_obj::UniformMatrix3fv( int p_location,bool p_transpose,::haxor::io::FloatArray p_v){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","UniformMatrix3fv",0xcb7774fe,"haxor.graphics.GraphicContext.UniformMatrix3fv","haxor/graphics/GraphicContext.hx",129,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_transpose,"p_transpose")
		HX_STACK_ARG(p_v,"p_v")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GraphicContext_obj,UniformMatrix3fv,(void))

Void GraphicContext_obj::UniformMatrix4fv( int p_location,bool p_transpose,::haxor::io::FloatArray p_v){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","UniformMatrix4fv",0xcb78373f,"haxor.graphics.GraphicContext.UniformMatrix4fv","haxor/graphics/GraphicContext.hx",130,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_location,"p_location")
		HX_STACK_ARG(p_transpose,"p_transpose")
		HX_STACK_ARG(p_v,"p_v")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GraphicContext_obj,UniformMatrix4fv,(void))

Void GraphicContext_obj::ActiveTexture( int p_slot){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","ActiveTexture",0x6cd6ed85,"haxor.graphics.GraphicContext.ActiveTexture","haxor/graphics/GraphicContext.hx",133,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_slot,"p_slot")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GraphicContext_obj,ActiveTexture,(void))

Void GraphicContext_obj::BindFramebuffer( int p_target,int p_id){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","BindFramebuffer",0x85d4b400,"haxor.graphics.GraphicContext.BindFramebuffer","haxor/graphics/GraphicContext.hx",134,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_target,"p_target")
		HX_STACK_ARG(p_id,"p_id")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GraphicContext_obj,BindFramebuffer,(void))

Void GraphicContext_obj::BindRenderbuffer( int p_target,int p_id){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","BindRenderbuffer",0x1ad4de63,"haxor.graphics.GraphicContext.BindRenderbuffer","haxor/graphics/GraphicContext.hx",135,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_target,"p_target")
		HX_STACK_ARG(p_id,"p_id")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GraphicContext_obj,BindRenderbuffer,(void))

Void GraphicContext_obj::BindTexture( int p_target,int p_id){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","BindTexture",0xe0a5a26e,"haxor.graphics.GraphicContext.BindTexture","haxor/graphics/GraphicContext.hx",136,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_target,"p_target")
		HX_STACK_ARG(p_id,"p_id")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GraphicContext_obj,BindTexture,(void))

int GraphicContext_obj::CreateFramebuffer( ){
	HX_STACK_FRAME("haxor.graphics.GraphicContext","CreateFramebuffer",0x204ef121,"haxor.graphics.GraphicContext.CreateFramebuffer","haxor/graphics/GraphicContext.hx",137,0xb16d5740)
	HX_STACK_THIS(this)
	HX_STACK_LINE(137)
	int tmp = ::haxor::graphics::GL_obj::INVALID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(137)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(GraphicContext_obj,CreateFramebuffer,return )

int GraphicContext_obj::CreateRenderbuffer( ){
	HX_STACK_FRAME("haxor.graphics.GraphicContext","CreateRenderbuffer",0xab501e22,"haxor.graphics.GraphicContext.CreateRenderbuffer","haxor/graphics/GraphicContext.hx",138,0xb16d5740)
	HX_STACK_THIS(this)
	HX_STACK_LINE(138)
	int tmp = ::haxor::graphics::GL_obj::INVALID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(138)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(GraphicContext_obj,CreateRenderbuffer,return )

int GraphicContext_obj::CreateTexture( ){
	HX_STACK_FRAME("haxor.graphics.GraphicContext","CreateTexture",0x9d507b0f,"haxor.graphics.GraphicContext.CreateTexture","haxor/graphics/GraphicContext.hx",139,0xb16d5740)
	HX_STACK_THIS(this)
	HX_STACK_LINE(139)
	int tmp = ::haxor::graphics::GL_obj::INVALID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(139)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(GraphicContext_obj,CreateTexture,return )

Void GraphicContext_obj::DeleteFramebuffer( int p_id){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","DeleteFramebuffer",0xa3675852,"haxor.graphics.GraphicContext.DeleteFramebuffer","haxor/graphics/GraphicContext.hx",140,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_id,"p_id")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GraphicContext_obj,DeleteFramebuffer,(void))

Void GraphicContext_obj::DeleteRenderbuffer( int p_id){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","DeleteRenderbuffer",0xdd9201d1,"haxor.graphics.GraphicContext.DeleteRenderbuffer","haxor/graphics/GraphicContext.hx",141,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_id,"p_id")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GraphicContext_obj,DeleteRenderbuffer,(void))

Void GraphicContext_obj::DeleteTexture( int p_id){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","DeleteTexture",0x139735c0,"haxor.graphics.GraphicContext.DeleteTexture","haxor/graphics/GraphicContext.hx",142,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_id,"p_id")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GraphicContext_obj,DeleteTexture,(void))

Void GraphicContext_obj::FramebufferRenderbuffer( int p_target,int p_attachment,int p_renderbuffer_target,int p_renderbuffer_id){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","FramebufferRenderbuffer",0x79801b33,"haxor.graphics.GraphicContext.FramebufferRenderbuffer","haxor/graphics/GraphicContext.hx",143,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_target,"p_target")
		HX_STACK_ARG(p_attachment,"p_attachment")
		HX_STACK_ARG(p_renderbuffer_target,"p_renderbuffer_target")
		HX_STACK_ARG(p_renderbuffer_id,"p_renderbuffer_id")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GraphicContext_obj,FramebufferRenderbuffer,(void))

Void GraphicContext_obj::FramebufferTexture2D( int p_target,int p_attachment,int p_texture_target,int p_texture_id,int p_miplevel){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","FramebufferTexture2D",0xa72f66f0,"haxor.graphics.GraphicContext.FramebufferTexture2D","haxor/graphics/GraphicContext.hx",144,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_target,"p_target")
		HX_STACK_ARG(p_attachment,"p_attachment")
		HX_STACK_ARG(p_texture_target,"p_texture_target")
		HX_STACK_ARG(p_texture_id,"p_texture_id")
		HX_STACK_ARG(p_miplevel,"p_miplevel")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(GraphicContext_obj,FramebufferTexture2D,(void))

Void GraphicContext_obj::GenerateMipmap( int p_target){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","GenerateMipmap",0xac1f92cd,"haxor.graphics.GraphicContext.GenerateMipmap","haxor/graphics/GraphicContext.hx",145,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_target,"p_target")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GraphicContext_obj,GenerateMipmap,(void))

Void GraphicContext_obj::PixelStorei( int p_parameter,int p_value){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","PixelStorei",0xc61bfa5e,"haxor.graphics.GraphicContext.PixelStorei","haxor/graphics/GraphicContext.hx",146,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_parameter,"p_parameter")
		HX_STACK_ARG(p_value,"p_value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GraphicContext_obj,PixelStorei,(void))

Void GraphicContext_obj::RenderbufferStorage( int p_target,int p_format,int p_width,int p_height){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","RenderbufferStorage",0x01b6b6d5,"haxor.graphics.GraphicContext.RenderbufferStorage","haxor/graphics/GraphicContext.hx",147,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_target,"p_target")
		HX_STACK_ARG(p_format,"p_format")
		HX_STACK_ARG(p_width,"p_width")
		HX_STACK_ARG(p_height,"p_height")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GraphicContext_obj,RenderbufferStorage,(void))

Void GraphicContext_obj::TexImage2DAlloc( int p_target,int p_level,int p_internal_format,int p_width,int p_height,int p_border,int p_format,int p_channel_type){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","TexImage2DAlloc",0x8fd4779f,"haxor.graphics.GraphicContext.TexImage2DAlloc","haxor/graphics/GraphicContext.hx",148,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_target,"p_target")
		HX_STACK_ARG(p_level,"p_level")
		HX_STACK_ARG(p_internal_format,"p_internal_format")
		HX_STACK_ARG(p_width,"p_width")
		HX_STACK_ARG(p_height,"p_height")
		HX_STACK_ARG(p_border,"p_border")
		HX_STACK_ARG(p_format,"p_format")
		HX_STACK_ARG(p_channel_type,"p_channel_type")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(GraphicContext_obj,TexImage2DAlloc,(void))

Void GraphicContext_obj::TexImage2D( int p_target,int p_level,int p_internal_format,int p_width,int p_height,int p_border,int p_format,int p_channel_type,::haxor::io::Buffer p_data){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","TexImage2D",0x057b60f6,"haxor.graphics.GraphicContext.TexImage2D","haxor/graphics/GraphicContext.hx",149,0xb16d5740)
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
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC9(GraphicContext_obj,TexImage2D,(void))

Void GraphicContext_obj::TexSubImage2D( int p_target,int p_level,int p_x,int p_y,int p_width,int p_height,int p_format,int p_channel_type,::haxor::io::Buffer p_data){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","TexSubImage2D",0x3ebd08e4,"haxor.graphics.GraphicContext.TexSubImage2D","haxor/graphics/GraphicContext.hx",150,0xb16d5740)
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
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC9(GraphicContext_obj,TexSubImage2D,(void))

Void GraphicContext_obj::TexStorage2D( int p_target,int p_num_mipmaps,int p_channels,int p_width,int p_height){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","TexStorage2D",0x333ded16,"haxor.graphics.GraphicContext.TexStorage2D","haxor/graphics/GraphicContext.hx",151,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_target,"p_target")
		HX_STACK_ARG(p_num_mipmaps,"p_num_mipmaps")
		HX_STACK_ARG(p_channels,"p_channels")
		HX_STACK_ARG(p_width,"p_width")
		HX_STACK_ARG(p_height,"p_height")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(GraphicContext_obj,TexStorage2D,(void))

Void GraphicContext_obj::TexParameterf( int p_target,int p_parameter,Float p_value){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","TexParameterf",0x525e0134,"haxor.graphics.GraphicContext.TexParameterf","haxor/graphics/GraphicContext.hx",152,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_target,"p_target")
		HX_STACK_ARG(p_parameter,"p_parameter")
		HX_STACK_ARG(p_value,"p_value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GraphicContext_obj,TexParameterf,(void))

Void GraphicContext_obj::TexParameteri( int p_target,int p_parameter,int p_value){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","TexParameteri",0x525e0137,"haxor.graphics.GraphicContext.TexParameteri","haxor/graphics/GraphicContext.hx",153,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_target,"p_target")
		HX_STACK_ARG(p_parameter,"p_parameter")
		HX_STACK_ARG(p_value,"p_value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GraphicContext_obj,TexParameteri,(void))

Void GraphicContext_obj::BlendFunc( int p_src,int p_dst){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","BlendFunc",0x8e43ae05,"haxor.graphics.GraphicContext.BlendFunc","haxor/graphics/GraphicContext.hx",157,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_src,"p_src")
		HX_STACK_ARG(p_dst,"p_dst")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GraphicContext_obj,BlendFunc,(void))

Void GraphicContext_obj::Disable( int p_flag){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","Disable",0xb64107b8,"haxor.graphics.GraphicContext.Disable","haxor/graphics/GraphicContext.hx",158,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_flag,"p_flag")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GraphicContext_obj,Disable,(void))

Void GraphicContext_obj::Enable( int p_flag){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","Enable",0xb969bab3,"haxor.graphics.GraphicContext.Enable","haxor/graphics/GraphicContext.hx",159,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_flag,"p_flag")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GraphicContext_obj,Enable,(void))

Void GraphicContext_obj::DepthMask( bool p_flag){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","DepthMask",0x25814d5f,"haxor.graphics.GraphicContext.DepthMask","haxor/graphics/GraphicContext.hx",160,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_flag,"p_flag")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GraphicContext_obj,DepthMask,(void))

Void GraphicContext_obj::DepthFunc( int p_flag){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","DepthFunc",0x20eff7b7,"haxor.graphics.GraphicContext.DepthFunc","haxor/graphics/GraphicContext.hx",161,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_flag,"p_flag")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GraphicContext_obj,DepthFunc,(void))

Void GraphicContext_obj::CullFace( int p_face){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","CullFace",0xf2d35f9f,"haxor.graphics.GraphicContext.CullFace","haxor/graphics/GraphicContext.hx",162,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_face,"p_face")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GraphicContext_obj,CullFace,(void))

Void GraphicContext_obj::FrontFace( int p_face){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","FrontFace",0x0768b3b6,"haxor.graphics.GraphicContext.FrontFace","haxor/graphics/GraphicContext.hx",163,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_face,"p_face")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GraphicContext_obj,FrontFace,(void))

Void GraphicContext_obj::Clear( int p_flag){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","Clear",0x0331fb5d,"haxor.graphics.GraphicContext.Clear","haxor/graphics/GraphicContext.hx",166,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_flag,"p_flag")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GraphicContext_obj,Clear,(void))

Void GraphicContext_obj::ClearDepth( Float p_value){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","ClearDepth",0xf8481466,"haxor.graphics.GraphicContext.ClearDepth","haxor/graphics/GraphicContext.hx",167,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_value,"p_value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GraphicContext_obj,ClearDepth,(void))

Void GraphicContext_obj::ClearColor( Float p_r,Float p_g,Float p_b,Float p_a){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","ClearColor",0x6b7a94c6,"haxor.graphics.GraphicContext.ClearColor","haxor/graphics/GraphicContext.hx",168,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_r,"p_r")
		HX_STACK_ARG(p_g,"p_g")
		HX_STACK_ARG(p_b,"p_b")
		HX_STACK_ARG(p_a,"p_a")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GraphicContext_obj,ClearColor,(void))

Void GraphicContext_obj::Viewport( int p_x,int p_y,int p_width,int p_height){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","Viewport",0xe346c496,"haxor.graphics.GraphicContext.Viewport","haxor/graphics/GraphicContext.hx",169,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_ARG(p_width,"p_width")
		HX_STACK_ARG(p_height,"p_height")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GraphicContext_obj,Viewport,(void))

Void GraphicContext_obj::Scissor( int p_x,int p_y,int p_width,int p_height){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","Scissor",0x09cfc5ec,"haxor.graphics.GraphicContext.Scissor","haxor/graphics/GraphicContext.hx",170,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_ARG(p_width,"p_width")
		HX_STACK_ARG(p_height,"p_height")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GraphicContext_obj,Scissor,(void))

Void GraphicContext_obj::ReadPixels( int p_x,int p_y,int p_width,int p_height,int p_format,int p_type,::haxor::io::Buffer p_pixels){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","ReadPixels",0xd239b753,"haxor.graphics.GraphicContext.ReadPixels","haxor/graphics/GraphicContext.hx",171,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_ARG(p_width,"p_width")
		HX_STACK_ARG(p_height,"p_height")
		HX_STACK_ARG(p_format,"p_format")
		HX_STACK_ARG(p_type,"p_type")
		HX_STACK_ARG(p_pixels,"p_pixels")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(GraphicContext_obj,ReadPixels,(void))

int GraphicContext_obj::GetErrorCode( ){
	HX_STACK_FRAME("haxor.graphics.GraphicContext","GetErrorCode",0xdb7d19cf,"haxor.graphics.GraphicContext.GetErrorCode","haxor/graphics/GraphicContext.hx",176,0xb16d5740)
	HX_STACK_THIS(this)
	HX_STACK_LINE(176)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(GraphicContext_obj,GetErrorCode,return )

::String GraphicContext_obj::GetErrorString( int p_code){
	HX_STACK_FRAME("haxor.graphics.GraphicContext","GetErrorString",0xd84d7df3,"haxor.graphics.GraphicContext.GetErrorString","haxor/graphics/GraphicContext.hx",178,0xb16d5740)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_code,"p_code")
	HX_STACK_LINE(179)
	int tmp = p_code;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(179)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(181)
			return HX_HCSTRING("","\x00","\x00","\x00","\x00");
		}
		;break;
		case (int)1280: {
			HX_STACK_LINE(182)
			return HX_HCSTRING("Invalid Enum.","\xe4","\x6f","\xed","\xe7");
		}
		;break;
		case (int)1281: {
			HX_STACK_LINE(183)
			return HX_HCSTRING("Numeric argument is out of range.","\xc2","\x3e","\x45","\xe0");
		}
		;break;
		case (int)1282: {
			HX_STACK_LINE(184)
			return HX_HCSTRING("Operation not allowed in the current state.","\x10","\xe9","\x3d","\xc7");
		}
		;break;
		case (int)1286: {
			HX_STACK_LINE(185)
			return HX_HCSTRING("Write or Read in FrameBuffer not complete.","\x48","\x75","\x41","\x4b");
		}
		;break;
		case (int)1285: {
			HX_STACK_LINE(186)
			return HX_HCSTRING("Out of Memory.","\x56","\x3c","\x2c","\x5e");
		}
		;break;
	}
	HX_STACK_LINE(188)
	return HX_HCSTRING("Unknown Error.","\x7c","\x25","\xb2","\x31");
}


HX_DEFINE_DYNAMIC_FUNC1(GraphicContext_obj,GetErrorString,return )

::String GraphicContext_obj::GetError( ){
	HX_STACK_FRAME("haxor.graphics.GraphicContext","GetError",0x19a25382,"haxor.graphics.GraphicContext.GetError","haxor/graphics/GraphicContext.hx",190,0xb16d5740)
	HX_STACK_THIS(this)
	HX_STACK_LINE(190)
	int tmp = this->GetErrorCode();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(190)
	::String tmp1 = this->GetErrorString(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(190)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(GraphicContext_obj,GetError,return )

Void GraphicContext_obj::Assert( ::String p_log){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","Assert",0x0ce552f6,"haxor.graphics.GraphicContext.Assert","haxor/graphics/GraphicContext.hx",192,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_log,"p_log")
		HX_STACK_LINE(193)
		int tmp = this->GetErrorCode();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(193)
		int err = tmp;		HX_STACK_VAR(err,"err");
		HX_STACK_LINE(194)
		bool tmp1 = (err != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(194)
		if ((tmp1)){
			HX_STACK_LINE(194)
			int tmp2 = err;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(194)
			::String tmp3 = this->GetErrorString(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(194)
			::String tmp4 = (HX_HCSTRING("GraphicContext> ","\x29","\x32","\xe6","\x84") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(194)
			::String tmp5 = (tmp4 + HX_HCSTRING(" - ","\x73","\x6f","\x18","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(194)
			::String tmp6 = p_log;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(194)
			::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(194)
			HX_STACK_DO_THROW(tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GraphicContext_obj,Assert,(void))

Void GraphicContext_obj::LogError( ){
{
		HX_STACK_FRAME("haxor.graphics.GraphicContext","LogError",0xa4d180d4,"haxor.graphics.GraphicContext.LogError","haxor/graphics/GraphicContext.hx",196,0xb16d5740)
		HX_STACK_THIS(this)
		HX_STACK_LINE(196)
		::String tmp = this->GetError();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(196)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("GraphicContext.hx","\xd7","\xcc","\x79","\xc4"),196,HX_HCSTRING("haxor.graphics.GraphicContext","\x5e","\x66","\x0c","\x60"),HX_HCSTRING("LogError","\xc4","\xc4","\xe1","\x37"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(196)
		::haxe::Log_obj::trace(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GraphicContext_obj,LogError,(void))


GraphicContext_obj::GraphicContext_obj()
{
}

void GraphicContext_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GraphicContext);
	HX_MARK_MEMBER_NAME(m_api,"m_api");
	HX_MARK_MEMBER_NAME(m_application,"m_application");
	HX_MARK_END_CLASS();
}

void GraphicContext_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_api,"m_api");
	HX_VISIT_MEMBER_NAME(m_application,"m_application");
}

Dynamic GraphicContext_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"api") ) { if (inCallProp == hx::paccAlways) return get_api(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"m_api") ) { return m_api; }
		if (HX_FIELD_EQ(inName,"Flush") ) { return Flush_dyn(); }
		if (HX_FIELD_EQ(inName,"Focus") ) { return Focus_dyn(); }
		if (HX_FIELD_EQ(inName,"Clear") ) { return Clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"Resize") ) { return Resize_dyn(); }
		if (HX_FIELD_EQ(inName,"Enable") ) { return Enable_dyn(); }
		if (HX_FIELD_EQ(inName,"Assert") ) { return Assert_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_api") ) { return get_api_dyn(); }
		if (HX_FIELD_EQ(inName,"Destroy") ) { return Destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"BindVAO") ) { return BindVAO_dyn(); }
		if (HX_FIELD_EQ(inName,"Disable") ) { return Disable_dyn(); }
		if (HX_FIELD_EQ(inName,"Scissor") ) { return Scissor_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"CullFace") ) { return CullFace_dyn(); }
		if (HX_FIELD_EQ(inName,"Viewport") ) { return Viewport_dyn(); }
		if (HX_FIELD_EQ(inName,"GetError") ) { return GetError_dyn(); }
		if (HX_FIELD_EQ(inName,"LogError") ) { return LogError_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"CreateVAO") ) { return CreateVAO_dyn(); }
		if (HX_FIELD_EQ(inName,"DeleteVAO") ) { return DeleteVAO_dyn(); }
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
		if (HX_FIELD_EQ(inName,"Uniform1fv") ) { return Uniform1fv_dyn(); }
		if (HX_FIELD_EQ(inName,"Uniform2fv") ) { return Uniform2fv_dyn(); }
		if (HX_FIELD_EQ(inName,"Uniform3fv") ) { return Uniform3fv_dyn(); }
		if (HX_FIELD_EQ(inName,"Uniform4fv") ) { return Uniform4fv_dyn(); }
		if (HX_FIELD_EQ(inName,"Uniform1iv") ) { return Uniform1iv_dyn(); }
		if (HX_FIELD_EQ(inName,"Uniform2iv") ) { return Uniform2iv_dyn(); }
		if (HX_FIELD_EQ(inName,"Uniform3iv") ) { return Uniform3iv_dyn(); }
		if (HX_FIELD_EQ(inName,"Uniform4iv") ) { return Uniform4iv_dyn(); }
		if (HX_FIELD_EQ(inName,"TexImage2D") ) { return TexImage2D_dyn(); }
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
		if (HX_FIELD_EQ(inName,"DeleteBuffer") ) { return DeleteBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"DrawElements") ) { return DrawElements_dyn(); }
		if (HX_FIELD_EQ(inName,"CreateShader") ) { return CreateShader_dyn(); }
		if (HX_FIELD_EQ(inName,"DeleteShader") ) { return DeleteShader_dyn(); }
		if (HX_FIELD_EQ(inName,"DetachShader") ) { return DetachShader_dyn(); }
		if (HX_FIELD_EQ(inName,"ShaderSource") ) { return ShaderSource_dyn(); }
		if (HX_FIELD_EQ(inName,"AttachShader") ) { return AttachShader_dyn(); }
		if (HX_FIELD_EQ(inName,"TexStorage2D") ) { return TexStorage2D_dyn(); }
		if (HX_FIELD_EQ(inName,"GetErrorCode") ) { return GetErrorCode_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"m_application") ) { return m_application; }
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
		if (HX_FIELD_EQ(inName,"VertexAttrib1f") ) { return VertexAttrib1f_dyn(); }
		if (HX_FIELD_EQ(inName,"VertexAttrib2f") ) { return VertexAttrib2f_dyn(); }
		if (HX_FIELD_EQ(inName,"VertexAttrib3f") ) { return VertexAttrib3f_dyn(); }
		if (HX_FIELD_EQ(inName,"VertexAttrib4f") ) { return VertexAttrib4f_dyn(); }
		if (HX_FIELD_EQ(inName,"GenerateMipmap") ) { return GenerateMipmap_dyn(); }
		if (HX_FIELD_EQ(inName,"GetErrorString") ) { return GetErrorString_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"CheckExtensions") ) { return CheckExtensions_dyn(); }
		if (HX_FIELD_EQ(inName,"BindFramebuffer") ) { return BindFramebuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"TexImage2DAlloc") ) { return TexImage2DAlloc_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"GetShaderInfoLog") ) { return GetShaderInfoLog_dyn(); }
		if (HX_FIELD_EQ(inName,"UniformMatrix2fv") ) { return UniformMatrix2fv_dyn(); }
		if (HX_FIELD_EQ(inName,"UniformMatrix3fv") ) { return UniformMatrix3fv_dyn(); }
		if (HX_FIELD_EQ(inName,"UniformMatrix4fv") ) { return UniformMatrix4fv_dyn(); }
		if (HX_FIELD_EQ(inName,"BindRenderbuffer") ) { return BindRenderbuffer_dyn(); }
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

Dynamic GraphicContext_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"m_api") ) { m_api=inValue.Cast< ::haxor::graphics::GraphicAPI >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"m_application") ) { m_application=inValue.Cast< ::haxor::core::BaseApplication >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool GraphicContext_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void GraphicContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("api","\x9a","\xfc","\x49","\x00"));
	outFields->push(HX_HCSTRING("m_api","\x88","\x7c","\xc2","\x01"));
	outFields->push(HX_HCSTRING("m_application","\x3e","\xc9","\x3d","\x43"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::graphics::GraphicAPI*/ ,(int)offsetof(GraphicContext_obj,m_api),HX_HCSTRING("m_api","\x88","\x7c","\xc2","\x01")},
	{hx::fsObject /*::haxor::core::BaseApplication*/ ,(int)offsetof(GraphicContext_obj,m_application),HX_HCSTRING("m_application","\x3e","\xc9","\x3d","\x43")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get_api","\x31","\xc5","\xbe","\x26"),
	HX_HCSTRING("m_api","\x88","\x7c","\xc2","\x01"),
	HX_HCSTRING("m_application","\x3e","\xc9","\x3d","\x43"),
	HX_HCSTRING("CheckExtensions","\xdc","\xea","\x55","\x63"),
	HX_HCSTRING("Destroy","\xda","\x54","\xd7","\xf1"),
	HX_HCSTRING("Flush","\xa4","\xd2","\xc8","\x95"),
	HX_HCSTRING("Focus","\xb8","\xcf","\xb6","\x97"),
	HX_HCSTRING("Resize","\x14","\xce","\x0f","\x3d"),
	HX_HCSTRING("BindBuffer","\xbd","\x96","\x6f","\xef"),
	HX_HCSTRING("BindVAO","\x07","\x21","\x70","\x4c"),
	HX_HCSTRING("BufferData","\x6a","\xc3","\x24","\x8a"),
	HX_HCSTRING("BufferSubData","\x8a","\x46","\xd5","\x8d"),
	HX_HCSTRING("CreateBuffer","\x3c","\x49","\xfc","\xba"),
	HX_HCSTRING("CreateVAO","\x28","\x79","\xba","\xeb"),
	HX_HCSTRING("DeleteBuffer","\xab","\x2f","\x3f","\xff"),
	HX_HCSTRING("DeleteVAO","\x59","\xc7","\x9f","\x93"),
	HX_HCSTRING("DrawArrays","\xfe","\xf7","\x64","\xf0"),
	HX_HCSTRING("DrawElements","\x7b","\x0e","\xca","\x21"),
	HX_HCSTRING("EnableVertexAttrib","\x11","\x31","\x9b","\xa9"),
	HX_HCSTRING("DisableVertexAttrib","\xb6","\x43","\xe5","\x25"),
	HX_HCSTRING("VertexAttrib1f","\x83","\x28","\x0c","\xfe"),
	HX_HCSTRING("VertexAttrib2f","\x62","\x29","\x0c","\xfe"),
	HX_HCSTRING("VertexAttrib3f","\x41","\x2a","\x0c","\xfe"),
	HX_HCSTRING("VertexAttrib4f","\x20","\x2b","\x0c","\xfe"),
	HX_HCSTRING("VertexAttribPointer","\x6f","\x7c","\x13","\x9e"),
	HX_HCSTRING("CompileShader","\xd8","\xc0","\xa2","\x22"),
	HX_HCSTRING("CreateShader","\x61","\x4b","\x88","\x07"),
	HX_HCSTRING("DeleteShader","\xd0","\x31","\xcb","\x4b"),
	HX_HCSTRING("DetachShader","\xf8","\x1c","\xc0","\xb2"),
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
	HX_HCSTRING("TexImage2DAlloc","\xaf","\x91","\xed","\x51"),
	HX_HCSTRING("TexImage2D","\xe6","\x80","\x18","\xb0"),
	HX_HCSTRING("TexSubImage2D","\xf4","\x7e","\x80","\x70"),
	HX_HCSTRING("TexStorage2D","\x06","\xe9","\x56","\x97"),
	HX_HCSTRING("TexParameterf","\x44","\x77","\x21","\x84"),
	HX_HCSTRING("TexParameteri","\x47","\x77","\x21","\x84"),
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
	HX_HCSTRING("GetErrorString","\xe3","\x55","\x91","\x31"),
	HX_HCSTRING("GetError","\x72","\x97","\xb2","\xac"),
	HX_HCSTRING("Assert","\xe6","\xba","\x97","\x80"),
	HX_HCSTRING("LogError","\xc4","\xc4","\xe1","\x37"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicContext_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicContext_obj::__mClass,"__mClass");
};

#endif

hx::Class GraphicContext_obj::__mClass;

void GraphicContext_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.graphics.GraphicContext","\x5e","\x66","\x0c","\x60");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &GraphicContext_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GraphicContext_obj >;
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
} // end namespace graphics
