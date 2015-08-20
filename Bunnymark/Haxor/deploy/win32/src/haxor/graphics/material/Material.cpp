#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxor_context_DataContext
#include <haxor/context/DataContext.h>
#endif
#ifndef INCLUDED_haxor_context_EngineContext
#include <haxor/context/EngineContext.h>
#endif
#ifndef INCLUDED_haxor_context_MaterialContext
#include <haxor/context/MaterialContext.h>
#endif
#ifndef INCLUDED_haxor_context_ShaderContext
#include <haxor/context/ShaderContext.h>
#endif
#ifndef INCLUDED_haxor_context_UID
#include <haxor/context/UID.h>
#endif
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
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
#ifndef INCLUDED_haxor_graphics_material_UniformInfo
#include <haxor/graphics/material/UniformInfo.h>
#endif
#ifndef INCLUDED_haxor_graphics_texture_Texture
#include <haxor/graphics/texture/Texture.h>
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
#ifndef INCLUDED_haxor_io_serialization_Formatter
#include <haxor/io/serialization/Formatter.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_ISerializable
#include <haxor/io/serialization/ISerializable.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_SerializedData
#include <haxor/io/serialization/SerializedData.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_SerializedField
#include <haxor/io/serialization/SerializedField.h>
#endif
#ifndef INCLUDED_haxor_math_Color
#include <haxor/math/Color.h>
#endif
#ifndef INCLUDED_haxor_math_Matrix4
#include <haxor/math/Matrix4.h>
#endif
#ifndef INCLUDED_haxor_math_Vector2
#include <haxor/math/Vector2.h>
#endif
#ifndef INCLUDED_haxor_math_Vector3
#include <haxor/math/Vector3.h>
#endif
#ifndef INCLUDED_haxor_math_Vector4
#include <haxor/math/Vector4.h>
#endif
namespace haxor{
namespace graphics{
namespace material{

Void Material_obj::__construct(::String __o_p_name)
{
HX_STACK_FRAME("haxor.graphics.material.Material","new",0xec1f7429,"haxor.graphics.material.Material.new","haxor/graphics/material/Material.hx",40,0xe49118e6)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_p_name,"p_name")
::String p_name = __o_p_name.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(188)
	this->grab = false;
	HX_STACK_LINE(219)
	::String tmp = p_name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(219)
	super::__construct(tmp);
	HX_STACK_LINE(220)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(220)
	{
		HX_STACK_LINE(220)
		::haxor::context::MaterialContext tmp2 = ::haxor::context::EngineContext_obj::material;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(220)
		::haxor::context::UID _this = tmp2->mid;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(220)
		int tmp3 = _this->m_cache->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(220)
		bool tmp4 = (tmp3 <= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(220)
		if ((tmp4)){
			HX_STACK_LINE(220)
			tmp1 = (_this->m_id)++;
		}
		else{
			HX_STACK_LINE(220)
			tmp1 = _this->m_cache->shift();
		}
	}
	HX_STACK_LINE(220)
	this->__cid = tmp1;
	HX_STACK_LINE(221)
	Array< ::Dynamic > tmp2 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(221)
	this->m_uniforms = tmp2;
	HX_STACK_LINE(222)
	this->queue = (int)1000;
	HX_STACK_LINE(223)
	this->zfunc = (int)515;
	HX_STACK_LINE(224)
	this->ztest = true;
	HX_STACK_LINE(225)
	this->zwrite = true;
	HX_STACK_LINE(226)
	this->blend = false;
	HX_STACK_LINE(227)
	this->blendSrc = (int)1;
	HX_STACK_LINE(228)
	this->blendDst = (int)0;
	HX_STACK_LINE(229)
	this->invert = false;
	HX_STACK_LINE(230)
	this->cull = (int)2;
	HX_STACK_LINE(231)
	this->lighting = false;
	HX_STACK_LINE(232)
	this->grab = false;
	HX_STACK_LINE(233)
	::haxor::context::MaterialContext tmp3 = ::haxor::context::EngineContext_obj::material;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(233)
	tmp3->InitializeMaterial(hx::ObjectPtr<OBJ_>(this));
}
;
	return null();
}

//Material_obj::~Material_obj() { }

Dynamic Material_obj::__CreateEmpty() { return  new Material_obj; }
hx::ObjectPtr< Material_obj > Material_obj::__new(::String __o_p_name)
{  hx::ObjectPtr< Material_obj > _result_ = new Material_obj();
	_result_->__construct(__o_p_name);
	return _result_;}

Dynamic Material_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Material_obj > _result_ = new Material_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *Material_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxor::io::serialization::ISerializable_obj)) return operator ::haxor::io::serialization::ISerializable_obj *();
	return super::__ToInterface(inType);
}

Material_obj::operator ::haxor::io::serialization::ISerializable_obj *()
	{ return new ::haxor::io::serialization::ISerializable_delegate_< Material_obj >(this); }
::haxor::graphics::material::Shader Material_obj::get_shader( ){
	HX_STACK_FRAME("haxor.graphics.material.Material","get_shader",0x08828645,"haxor.graphics.material.Material.get_shader","haxor/graphics/material/Material.hx",195,0xe49118e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(195)
	::haxor::graphics::material::Shader tmp = this->m_shader;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(195)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Material_obj,get_shader,return )

::haxor::graphics::material::Shader Material_obj::set_shader( ::haxor::graphics::material::Shader v){
	HX_STACK_FRAME("haxor.graphics.material.Material","set_shader",0x0c0024b9,"haxor.graphics.material.Material.set_shader","haxor/graphics/material/Material.hx",197,0xe49118e6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(199)
	::haxor::context::MaterialContext tmp = ::haxor::context::EngineContext_obj::material;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(199)
	::haxor::graphics::material::Shader tmp1 = this->m_shader;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(199)
	::haxor::graphics::material::Shader tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(199)
	tmp->UpdateShader(hx::ObjectPtr<OBJ_>(this),tmp1,tmp2);
	HX_STACK_LINE(200)
	this->m_shader = v;
	HX_STACK_LINE(201)
	::haxor::graphics::material::Shader tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(201)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Material_obj,set_shader,return )

Array< ::Dynamic > Material_obj::get_uniforms( ){
	HX_STACK_FRAME("haxor.graphics.material.Material","get_uniforms",0xdf0e9bdf,"haxor.graphics.material.Material.get_uniforms","haxor/graphics/material/Material.hx",210,0xe49118e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(210)
	Array< ::Dynamic > tmp = this->m_uniforms;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(210)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Material_obj,get_uniforms,return )

Void Material_obj::SetBlending( int p_src,int p_dst){
{
		HX_STACK_FRAME("haxor.graphics.material.Material","SetBlending",0x03abe39c,"haxor.graphics.material.Material.SetBlending","haxor/graphics/material/Material.hx",242,0xe49118e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_src,"p_src")
		HX_STACK_ARG(p_dst,"p_dst")
		HX_STACK_LINE(243)
		this->blendSrc = p_src;
		HX_STACK_LINE(244)
		this->blendDst = p_dst;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Material_obj,SetBlending,(void))

Array< ::Dynamic > Material_obj::GetActiveUniforms( ){
	HX_STACK_FRAME("haxor.graphics.material.Material","GetActiveUniforms",0x37f9c144,"haxor.graphics.material.Material.GetActiveUniforms","haxor/graphics/material/Material.hx",251,0xe49118e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(252)
	::haxor::graphics::material::Shader tmp = this->m_shader;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(252)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(252)
	if ((tmp1)){
		HX_STACK_LINE(252)
		Array< ::Dynamic > tmp2 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(252)
		return tmp2;
	}
	HX_STACK_LINE(253)
	::haxor::context::MaterialContext tmp2 = ::haxor::context::EngineContext_obj::material;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(253)
	Array< ::Dynamic > tmp3 = tmp2->GetActiveUniforms(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(253)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Material_obj,GetActiveUniforms,return )

Void Material_obj::SetTexture( ::String p_name,::haxor::graphics::texture::Texture p_texture){
{
		HX_STACK_FRAME("haxor.graphics.material.Material","SetTexture",0xe34b48d0,"haxor.graphics.material.Material.SetTexture","haxor/graphics/material/Material.hx",263,0xe49118e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_name,"p_name")
		HX_STACK_ARG(p_texture,"p_texture")
		HX_STACK_LINE(264)
		bool tmp = (p_texture == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(264)
		if ((tmp)){
			HX_STACK_LINE(264)
			::String tmp1 = p_name;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(264)
			this->RemoveUniform(tmp1);
			HX_STACK_LINE(264)
			return null();
		}
		HX_STACK_LINE(265)
		::String tmp1 = p_name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(265)
		::haxor::graphics::material::MaterialUniform tmp2 = this->FetchUniform(tmp1,false,(int)1,(int)1,true);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(265)
		::haxor::graphics::material::MaterialUniform u = tmp2;		HX_STACK_VAR(u,"u");
		HX_STACK_LINE(266)
		bool tmp3 = u->exists;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(266)
		if ((tmp3)){
			HX_STACK_LINE(268)
			::haxor::graphics::texture::Texture tmp4 = p_texture;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(268)
			u->SetTexture(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Material_obj,SetTexture,(void))

Void Material_obj::SetMatrix4( ::String p_name,::haxor::math::Matrix4 p_matrix4,hx::Null< bool >  __o_p_transpose){
bool p_transpose = __o_p_transpose.Default(false);
	HX_STACK_FRAME("haxor.graphics.material.Material","SetMatrix4",0xd7d1c2c8,"haxor.graphics.material.Material.SetMatrix4","haxor/graphics/material/Material.hx",278,0xe49118e6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_name,"p_name")
	HX_STACK_ARG(p_matrix4,"p_matrix4")
	HX_STACK_ARG(p_transpose,"p_transpose")
{
		HX_STACK_LINE(279)
		bool tmp = (p_matrix4 == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(279)
		if ((tmp)){
			HX_STACK_LINE(279)
			::String tmp1 = p_name;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(279)
			this->RemoveUniform(tmp1);
			HX_STACK_LINE(279)
			return null();
		}
		HX_STACK_LINE(280)
		::String tmp1 = p_name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(280)
		::haxor::graphics::material::MaterialUniform tmp2 = this->FetchUniform(tmp1,true,(int)16,(int)16,true);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(280)
		::haxor::graphics::material::MaterialUniform u = tmp2;		HX_STACK_VAR(u,"u");
		HX_STACK_LINE(281)
		bool tmp3 = u->exists;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(281)
		if ((tmp3)){
			HX_STACK_LINE(281)
			::haxor::math::Matrix4 tmp4 = p_matrix4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(281)
			bool tmp5 = p_transpose;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(281)
			u->SetMatrix4(tmp4,tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Material_obj,SetMatrix4,(void))

Void Material_obj::SetVector2( ::String p_name,::haxor::math::Vector2 p_v){
{
		HX_STACK_FRAME("haxor.graphics.material.Material","SetVector2",0x1f077a04,"haxor.graphics.material.Material.SetVector2","haxor/graphics/material/Material.hx",289,0xe49118e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_name,"p_name")
		HX_STACK_ARG(p_v,"p_v")
		HX_STACK_LINE(289)
		::String tmp = p_name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(289)
		Float tmp1 = p_v->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(289)
		Float tmp2 = p_v->y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(289)
		this->SetFloat2(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Material_obj,SetVector2,(void))

Void Material_obj::SetVector3( ::String p_name,::haxor::math::Vector3 p_v){
{
		HX_STACK_FRAME("haxor.graphics.material.Material","SetVector3",0x1f077a05,"haxor.graphics.material.Material.SetVector3","haxor/graphics/material/Material.hx",296,0xe49118e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_name,"p_name")
		HX_STACK_ARG(p_v,"p_v")
		HX_STACK_LINE(296)
		::String tmp = p_name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(296)
		Float tmp1 = p_v->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(296)
		Float tmp2 = p_v->y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(296)
		Float tmp3 = p_v->z;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(296)
		this->SetFloat3(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Material_obj,SetVector3,(void))

Void Material_obj::SetVector4( ::String p_name,::haxor::math::Vector4 p_v){
{
		HX_STACK_FRAME("haxor.graphics.material.Material","SetVector4",0x1f077a06,"haxor.graphics.material.Material.SetVector4","haxor/graphics/material/Material.hx",303,0xe49118e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_name,"p_name")
		HX_STACK_ARG(p_v,"p_v")
		HX_STACK_LINE(303)
		::String tmp = p_name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(303)
		Float tmp1 = p_v->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(303)
		Float tmp2 = p_v->y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(303)
		Float tmp3 = p_v->z;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(303)
		Float tmp4 = p_v->w;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(303)
		this->SetFloat4(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Material_obj,SetVector4,(void))

Void Material_obj::SetColor( ::String p_name,::haxor::math::Color p_color){
{
		HX_STACK_FRAME("haxor.graphics.material.Material","SetColor",0x30239a18,"haxor.graphics.material.Material.SetColor","haxor/graphics/material/Material.hx",310,0xe49118e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_name,"p_name")
		HX_STACK_ARG(p_color,"p_color")
		HX_STACK_LINE(310)
		::String tmp = p_name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(310)
		Float tmp1 = p_color->r;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(310)
		Float tmp2 = p_color->g;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(310)
		Float tmp3 = p_color->b;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(310)
		Float tmp4 = p_color->a;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(310)
		this->SetFloat4(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Material_obj,SetColor,(void))

Void Material_obj::SetFloat( ::String p_name,Float p_v){
{
		HX_STACK_FRAME("haxor.graphics.material.Material","SetFloat",0xe85dee51,"haxor.graphics.material.Material.SetFloat","haxor/graphics/material/Material.hx",317,0xe49118e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_name,"p_name")
		HX_STACK_ARG(p_v,"p_v")
		HX_STACK_LINE(317)
		::String tmp = p_name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(317)
		::haxor::graphics::material::MaterialUniform tmp1 = this->FetchUniform(tmp,true,(int)1,(int)1,true);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(317)
		::haxor::graphics::material::MaterialUniform u = tmp1;		HX_STACK_VAR(u,"u");
		HX_STACK_LINE(317)
		bool tmp2 = u->exists;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(317)
		if ((tmp2)){
			HX_STACK_LINE(317)
			Float tmp3 = p_v;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(317)
			u->SetFloat(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Material_obj,SetFloat,(void))

Void Material_obj::SetFloat2( ::String p_name,Float p_x,Float p_y){
{
		HX_STACK_FRAME("haxor.graphics.material.Material","SetFloat2",0x69d298c1,"haxor.graphics.material.Material.SetFloat2","haxor/graphics/material/Material.hx",325,0xe49118e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_name,"p_name")
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_LINE(325)
		::String tmp = p_name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(325)
		::haxor::graphics::material::MaterialUniform tmp1 = this->FetchUniform(tmp,true,(int)2,(int)2,true);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(325)
		::haxor::graphics::material::MaterialUniform u = tmp1;		HX_STACK_VAR(u,"u");
		HX_STACK_LINE(325)
		bool tmp2 = u->exists;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(325)
		if ((tmp2)){
			HX_STACK_LINE(325)
			Float tmp3 = p_x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(325)
			Float tmp4 = p_y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(325)
			u->SetFloat2(tmp3,tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Material_obj,SetFloat2,(void))

Void Material_obj::SetFloat3( ::String p_name,Float p_x,Float p_y,Float p_z){
{
		HX_STACK_FRAME("haxor.graphics.material.Material","SetFloat3",0x69d298c2,"haxor.graphics.material.Material.SetFloat3","haxor/graphics/material/Material.hx",335,0xe49118e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_name,"p_name")
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_ARG(p_z,"p_z")
		HX_STACK_LINE(335)
		::String tmp = p_name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(335)
		::haxor::graphics::material::MaterialUniform tmp1 = this->FetchUniform(tmp,true,(int)3,(int)3,true);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(335)
		::haxor::graphics::material::MaterialUniform u = tmp1;		HX_STACK_VAR(u,"u");
		HX_STACK_LINE(335)
		bool tmp2 = u->exists;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(335)
		if ((tmp2)){
			HX_STACK_LINE(335)
			Float tmp3 = p_x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(335)
			Float tmp4 = p_y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(335)
			Float tmp5 = p_z;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(335)
			u->SetFloat3(tmp3,tmp4,tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Material_obj,SetFloat3,(void))

Void Material_obj::SetFloat4( ::String p_name,Float p_x,Float p_y,Float p_z,Float p_w){
{
		HX_STACK_FRAME("haxor.graphics.material.Material","SetFloat4",0x69d298c3,"haxor.graphics.material.Material.SetFloat4","haxor/graphics/material/Material.hx",345,0xe49118e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_name,"p_name")
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_ARG(p_z,"p_z")
		HX_STACK_ARG(p_w,"p_w")
		HX_STACK_LINE(345)
		::String tmp = p_name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(345)
		::haxor::graphics::material::MaterialUniform tmp1 = this->FetchUniform(tmp,true,(int)4,(int)4,true);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(345)
		::haxor::graphics::material::MaterialUniform u = tmp1;		HX_STACK_VAR(u,"u");
		HX_STACK_LINE(345)
		bool tmp2 = u->exists;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(345)
		if ((tmp2)){
			HX_STACK_LINE(345)
			Float tmp3 = p_x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(345)
			Float tmp4 = p_y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(345)
			Float tmp5 = p_z;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(345)
			Float tmp6 = p_w;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(345)
			u->SetFloat4(tmp3,tmp4,tmp5,tmp6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Material_obj,SetFloat4,(void))

Void Material_obj::SetFloatArray( ::String p_name,Array< Float > p_list){
{
		HX_STACK_FRAME("haxor.graphics.material.Material","SetFloatArray",0xb2086988,"haxor.graphics.material.Material.SetFloatArray","haxor/graphics/material/Material.hx",352,0xe49118e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_name,"p_name")
		HX_STACK_ARG(p_list,"p_list")
		HX_STACK_LINE(352)
		::String tmp = p_name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(352)
		int tmp1 = p_list->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(352)
		::haxor::graphics::material::MaterialUniform tmp2 = this->FetchUniform(tmp,true,tmp1,(int)1,true);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(352)
		::haxor::graphics::material::MaterialUniform u = tmp2;		HX_STACK_VAR(u,"u");
		HX_STACK_LINE(352)
		bool tmp3 = u->exists;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(352)
		if ((tmp3)){
			HX_STACK_LINE(352)
			Array< Float > tmp4 = p_list;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(352)
			u->SetFloatArray(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Material_obj,SetFloatArray,(void))

Void Material_obj::SetFloat2Array( ::String p_name,Array< Float > p_list){
{
		HX_STACK_FRAME("haxor.graphics.material.Material","SetFloat2Array",0xdf63e918,"haxor.graphics.material.Material.SetFloat2Array","haxor/graphics/material/Material.hx",359,0xe49118e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_name,"p_name")
		HX_STACK_ARG(p_list,"p_list")
		HX_STACK_LINE(359)
		::String tmp = p_name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(359)
		int tmp1 = p_list->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(359)
		::haxor::graphics::material::MaterialUniform tmp2 = this->FetchUniform(tmp,true,tmp1,(int)2,true);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(359)
		::haxor::graphics::material::MaterialUniform u = tmp2;		HX_STACK_VAR(u,"u");
		HX_STACK_LINE(359)
		bool tmp3 = u->exists;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(359)
		if ((tmp3)){
			HX_STACK_LINE(359)
			Array< Float > tmp4 = p_list;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(359)
			u->SetFloat2Array(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Material_obj,SetFloat2Array,(void))

Void Material_obj::SetFloat3Array( ::String p_name,Array< Float > p_list){
{
		HX_STACK_FRAME("haxor.graphics.material.Material","SetFloat3Array",0x45bf4577,"haxor.graphics.material.Material.SetFloat3Array","haxor/graphics/material/Material.hx",366,0xe49118e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_name,"p_name")
		HX_STACK_ARG(p_list,"p_list")
		HX_STACK_LINE(366)
		::String tmp = p_name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(366)
		int tmp1 = p_list->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(366)
		::haxor::graphics::material::MaterialUniform tmp2 = this->FetchUniform(tmp,true,tmp1,(int)3,true);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(366)
		::haxor::graphics::material::MaterialUniform u = tmp2;		HX_STACK_VAR(u,"u");
		HX_STACK_LINE(366)
		bool tmp3 = u->exists;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(366)
		if ((tmp3)){
			HX_STACK_LINE(366)
			Array< Float > tmp4 = p_list;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(366)
			u->SetFloat3Array(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Material_obj,SetFloat3Array,(void))

Void Material_obj::SetFloat4Array( ::String p_name,Array< Float > p_list){
{
		HX_STACK_FRAME("haxor.graphics.material.Material","SetFloat4Array",0xac1aa1d6,"haxor.graphics.material.Material.SetFloat4Array","haxor/graphics/material/Material.hx",373,0xe49118e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_name,"p_name")
		HX_STACK_ARG(p_list,"p_list")
		HX_STACK_LINE(373)
		::String tmp = p_name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(373)
		int tmp1 = p_list->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(373)
		::haxor::graphics::material::MaterialUniform tmp2 = this->FetchUniform(tmp,true,tmp1,(int)4,true);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(373)
		::haxor::graphics::material::MaterialUniform u = tmp2;		HX_STACK_VAR(u,"u");
		HX_STACK_LINE(373)
		bool tmp3 = u->exists;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(373)
		if ((tmp3)){
			HX_STACK_LINE(373)
			Array< Float > tmp4 = p_list;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(373)
			u->SetFloat4Array(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Material_obj,SetFloat4Array,(void))

Void Material_obj::SetInt( ::String p_name,int p_v){
{
		HX_STACK_FRAME("haxor.graphics.material.Material","SetInt",0x2bb42e64,"haxor.graphics.material.Material.SetInt","haxor/graphics/material/Material.hx",380,0xe49118e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_name,"p_name")
		HX_STACK_ARG(p_v,"p_v")
		HX_STACK_LINE(380)
		::String tmp = p_name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(380)
		::haxor::graphics::material::MaterialUniform tmp1 = this->FetchUniform(tmp,false,(int)1,(int)1,true);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(380)
		::haxor::graphics::material::MaterialUniform u = tmp1;		HX_STACK_VAR(u,"u");
		HX_STACK_LINE(380)
		bool tmp2 = u->exists;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(380)
		if ((tmp2)){
			HX_STACK_LINE(380)
			int tmp3 = p_v;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(380)
			u->SetInt(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Material_obj,SetInt,(void))

Void Material_obj::SetInt2( ::String p_name,int p_x,int p_y){
{
		HX_STACK_FRAME("haxor.graphics.material.Material","SetInt2",0x11f4694e,"haxor.graphics.material.Material.SetInt2","haxor/graphics/material/Material.hx",388,0xe49118e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_name,"p_name")
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_LINE(388)
		::String tmp = p_name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(388)
		::haxor::graphics::material::MaterialUniform tmp1 = this->FetchUniform(tmp,false,(int)2,(int)2,true);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(388)
		::haxor::graphics::material::MaterialUniform u = tmp1;		HX_STACK_VAR(u,"u");
		HX_STACK_LINE(388)
		bool tmp2 = u->exists;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(388)
		if ((tmp2)){
			HX_STACK_LINE(388)
			int tmp3 = p_x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(388)
			int tmp4 = p_y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(388)
			u->SetInt2(tmp3,tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Material_obj,SetInt2,(void))

Void Material_obj::SetInt3( ::String p_name,int p_x,int p_y,int p_z){
{
		HX_STACK_FRAME("haxor.graphics.material.Material","SetInt3",0x11f4694f,"haxor.graphics.material.Material.SetInt3","haxor/graphics/material/Material.hx",397,0xe49118e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_name,"p_name")
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_ARG(p_z,"p_z")
		HX_STACK_LINE(397)
		::String tmp = p_name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(397)
		::haxor::graphics::material::MaterialUniform tmp1 = this->FetchUniform(tmp,false,(int)3,(int)3,true);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(397)
		::haxor::graphics::material::MaterialUniform u = tmp1;		HX_STACK_VAR(u,"u");
		HX_STACK_LINE(397)
		bool tmp2 = u->exists;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(397)
		if ((tmp2)){
			HX_STACK_LINE(397)
			int tmp3 = p_x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(397)
			int tmp4 = p_y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(397)
			int tmp5 = p_z;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(397)
			u->SetInt3(tmp3,tmp4,tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Material_obj,SetInt3,(void))

Void Material_obj::SetInt4( ::String p_name,int p_x,int p_y,int p_z,int p_w){
{
		HX_STACK_FRAME("haxor.graphics.material.Material","SetInt4",0x11f46950,"haxor.graphics.material.Material.SetInt4","haxor/graphics/material/Material.hx",407,0xe49118e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_name,"p_name")
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_ARG(p_z,"p_z")
		HX_STACK_ARG(p_w,"p_w")
		HX_STACK_LINE(407)
		::String tmp = p_name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(407)
		::haxor::graphics::material::MaterialUniform tmp1 = this->FetchUniform(tmp,false,(int)4,(int)4,true);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(407)
		::haxor::graphics::material::MaterialUniform u = tmp1;		HX_STACK_VAR(u,"u");
		HX_STACK_LINE(407)
		bool tmp2 = u->exists;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(407)
		if ((tmp2)){
			HX_STACK_LINE(407)
			int tmp3 = p_x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(407)
			int tmp4 = p_y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(407)
			int tmp5 = p_z;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(407)
			int tmp6 = p_w;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(407)
			u->SetInt4(tmp3,tmp4,tmp5,tmp6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Material_obj,SetInt4,(void))

Void Material_obj::SetIntArray( ::String p_name,Array< int > p_list){
{
		HX_STACK_FRAME("haxor.graphics.material.Material","SetIntArray",0x06d20495,"haxor.graphics.material.Material.SetIntArray","haxor/graphics/material/Material.hx",414,0xe49118e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_name,"p_name")
		HX_STACK_ARG(p_list,"p_list")
		HX_STACK_LINE(414)
		::String tmp = p_name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(414)
		int tmp1 = p_list->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(414)
		::haxor::graphics::material::MaterialUniform tmp2 = this->FetchUniform(tmp,false,tmp1,(int)1,true);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(414)
		::haxor::graphics::material::MaterialUniform u = tmp2;		HX_STACK_VAR(u,"u");
		HX_STACK_LINE(414)
		bool tmp3 = u->exists;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(414)
		if ((tmp3)){
			HX_STACK_LINE(414)
			Array< int > tmp4 = p_list;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(414)
			u->SetIntArray(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Material_obj,SetIntArray,(void))

Void Material_obj::SetInt2Array( ::String p_name,Array< int > p_list){
{
		HX_STACK_FRAME("haxor.graphics.material.Material","SetInt2Array",0xbb01f96b,"haxor.graphics.material.Material.SetInt2Array","haxor/graphics/material/Material.hx",421,0xe49118e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_name,"p_name")
		HX_STACK_ARG(p_list,"p_list")
		HX_STACK_LINE(421)
		::String tmp = p_name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(421)
		int tmp1 = p_list->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(421)
		::haxor::graphics::material::MaterialUniform tmp2 = this->FetchUniform(tmp,false,tmp1,(int)2,true);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(421)
		::haxor::graphics::material::MaterialUniform u = tmp2;		HX_STACK_VAR(u,"u");
		HX_STACK_LINE(421)
		bool tmp3 = u->exists;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(421)
		if ((tmp3)){
			HX_STACK_LINE(421)
			Array< int > tmp4 = p_list;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(421)
			u->SetInt2Array(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Material_obj,SetInt2Array,(void))

Void Material_obj::SetInt3Array( ::String p_name,Array< int > p_list){
{
		HX_STACK_FRAME("haxor.graphics.material.Material","SetInt3Array",0x215d55ca,"haxor.graphics.material.Material.SetInt3Array","haxor/graphics/material/Material.hx",428,0xe49118e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_name,"p_name")
		HX_STACK_ARG(p_list,"p_list")
		HX_STACK_LINE(428)
		::String tmp = p_name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(428)
		int tmp1 = p_list->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(428)
		::haxor::graphics::material::MaterialUniform tmp2 = this->FetchUniform(tmp,false,tmp1,(int)3,true);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(428)
		::haxor::graphics::material::MaterialUniform u = tmp2;		HX_STACK_VAR(u,"u");
		HX_STACK_LINE(428)
		bool tmp3 = u->exists;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(428)
		if ((tmp3)){
			HX_STACK_LINE(428)
			Array< int > tmp4 = p_list;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(428)
			u->SetInt3Array(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Material_obj,SetInt3Array,(void))

Void Material_obj::SetInt4Array( ::String p_name,Array< int > p_list){
{
		HX_STACK_FRAME("haxor.graphics.material.Material","SetInt4Array",0x87b8b229,"haxor.graphics.material.Material.SetInt4Array","haxor/graphics/material/Material.hx",435,0xe49118e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_name,"p_name")
		HX_STACK_ARG(p_list,"p_list")
		HX_STACK_LINE(435)
		::String tmp = p_name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(435)
		int tmp1 = p_list->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(435)
		::haxor::graphics::material::MaterialUniform tmp2 = this->FetchUniform(tmp,false,tmp1,(int)4,true);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(435)
		::haxor::graphics::material::MaterialUniform u = tmp2;		HX_STACK_VAR(u,"u");
		HX_STACK_LINE(435)
		bool tmp3 = u->exists;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(435)
		if ((tmp3)){
			HX_STACK_LINE(435)
			Array< int > tmp4 = p_list;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(435)
			u->SetInt4Array(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Material_obj,SetInt4Array,(void))

::haxor::graphics::material::MaterialUniform Material_obj::GetUniform( ::String p_name){
	HX_STACK_FRAME("haxor.graphics.material.Material","GetUniform",0xf65122b5,"haxor.graphics.material.Material.GetUniform","haxor/graphics/material/Material.hx",443,0xe49118e6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_name,"p_name")
	HX_STACK_LINE(444)
	{
		HX_STACK_LINE(444)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(444)
		Array< ::Dynamic > tmp = this->m_uniforms;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(444)
		int _g = tmp->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(444)
		while((true)){
			HX_STACK_LINE(444)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(444)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(444)
			if ((tmp2)){
				HX_STACK_LINE(444)
				break;
			}
			HX_STACK_LINE(444)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(444)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(444)
			Array< ::Dynamic > tmp4 = this->m_uniforms;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(444)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(444)
			::haxor::graphics::material::MaterialUniform tmp6 = tmp4->__get(tmp5).StaticCast< ::haxor::graphics::material::MaterialUniform >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(444)
			::String tmp7 = tmp6->name;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(444)
			::String tmp8 = p_name;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(444)
			bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(444)
			if ((tmp9)){
				HX_STACK_LINE(444)
				Array< ::Dynamic > tmp10 = this->m_uniforms;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(444)
				int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(444)
				::haxor::graphics::material::MaterialUniform tmp12 = tmp10->__get(tmp11).StaticCast< ::haxor::graphics::material::MaterialUniform >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(444)
				return tmp12;
			}
		}
	}
	HX_STACK_LINE(445)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Material_obj,GetUniform,return )

bool Material_obj::HasUniform( ::String p_name,hx::Null< bool >  __o_p_check_shader){
bool p_check_shader = __o_p_check_shader.Default(false);
	HX_STACK_FRAME("haxor.graphics.material.Material","HasUniform",0x31a38471,"haxor.graphics.material.Material.HasUniform","haxor/graphics/material/Material.hx",455,0xe49118e6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_name,"p_name")
	HX_STACK_ARG(p_check_shader,"p_check_shader")
{
		HX_STACK_LINE(456)
		{
			HX_STACK_LINE(456)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(456)
			Array< ::Dynamic > tmp = this->m_uniforms;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(456)
			int _g = tmp->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(456)
			while((true)){
				HX_STACK_LINE(456)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(456)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(456)
				if ((tmp2)){
					HX_STACK_LINE(456)
					break;
				}
				HX_STACK_LINE(456)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(456)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(458)
				Array< ::Dynamic > tmp4 = this->m_uniforms;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(458)
				int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(458)
				::haxor::graphics::material::MaterialUniform tmp6 = tmp4->__get(tmp5).StaticCast< ::haxor::graphics::material::MaterialUniform >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(458)
				::String tmp7 = tmp6->name;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(458)
				::String tmp8 = p_name;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(458)
				bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(458)
				if ((tmp9)){
					HX_STACK_LINE(460)
					bool tmp10 = p_check_shader;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(460)
					if ((tmp10)){
						HX_STACK_LINE(460)
						Array< ::Dynamic > tmp11 = this->m_uniforms;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(460)
						int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(460)
						::haxor::graphics::material::MaterialUniform tmp13 = tmp11->__get(tmp12).StaticCast< ::haxor::graphics::material::MaterialUniform >();		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(460)
						bool tmp14 = tmp13->exists;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(460)
						return tmp14;
					}
					HX_STACK_LINE(461)
					return true;
				}
			}
		}
		HX_STACK_LINE(464)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Material_obj,HasUniform,return )

Void Material_obj::RemoveUniform( ::String p_name){
{
		HX_STACK_FRAME("haxor.graphics.material.Material","RemoveUniform",0x5a868639,"haxor.graphics.material.Material.RemoveUniform","haxor/graphics/material/Material.hx",472,0xe49118e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_name,"p_name")
		HX_STACK_LINE(473)
		::haxor::graphics::material::MaterialUniform u = null();		HX_STACK_VAR(u,"u");
		HX_STACK_LINE(474)
		{
			HX_STACK_LINE(474)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(474)
			Array< ::Dynamic > tmp = this->m_uniforms;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(474)
			int _g = tmp->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(474)
			while((true)){
				HX_STACK_LINE(474)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(474)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(474)
				if ((tmp2)){
					HX_STACK_LINE(474)
					break;
				}
				HX_STACK_LINE(474)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(474)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(476)
				Array< ::Dynamic > tmp4 = this->m_uniforms;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(476)
				int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(476)
				::haxor::graphics::material::MaterialUniform tmp6 = tmp4->__get(tmp5).StaticCast< ::haxor::graphics::material::MaterialUniform >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(476)
				u = tmp6;
				HX_STACK_LINE(477)
				bool tmp7 = (u->name == p_name);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(477)
				if ((tmp7)){
					HX_STACK_LINE(477)
					break;
				}
			}
		}
		HX_STACK_LINE(479)
		bool tmp = (u != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(479)
		if ((tmp)){
			HX_STACK_LINE(481)
			bool tmp1 = (u->texture != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(481)
			if ((tmp1)){
				HX_STACK_LINE(481)
				u->texture->__slot = (int)-1;
			}
			HX_STACK_LINE(482)
			::haxor::context::MaterialContext tmp2 = ::haxor::context::EngineContext_obj::material;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(482)
			::haxor::graphics::material::MaterialUniform tmp3 = u;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(482)
			tmp2->DestroyUniform(hx::ObjectPtr<OBJ_>(this),tmp3);
			HX_STACK_LINE(483)
			Array< ::Dynamic > tmp4 = this->m_uniforms;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(483)
			::haxor::graphics::material::MaterialUniform tmp5 = u;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(483)
			tmp4->remove(tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Material_obj,RemoveUniform,(void))

::haxor::graphics::material::MaterialUniform Material_obj::FetchUniform( ::String p_name,bool p_is_float,int p_length,int p_offset,bool p_create){
	HX_STACK_FRAME("haxor.graphics.material.Material","FetchUniform",0x6e061751,"haxor.graphics.material.Material.FetchUniform","haxor/graphics/material/Material.hx",494,0xe49118e6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_name,"p_name")
	HX_STACK_ARG(p_is_float,"p_is_float")
	HX_STACK_ARG(p_length,"p_length")
	HX_STACK_ARG(p_offset,"p_offset")
	HX_STACK_ARG(p_create,"p_create")
	HX_STACK_LINE(496)
	::haxor::graphics::material::MaterialUniform u = null();		HX_STACK_VAR(u,"u");
	HX_STACK_LINE(497)
	{
		HX_STACK_LINE(497)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(497)
		Array< ::Dynamic > tmp = this->m_uniforms;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(497)
		int _g = tmp->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(497)
		while((true)){
			HX_STACK_LINE(497)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(497)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(497)
			if ((tmp2)){
				HX_STACK_LINE(497)
				break;
			}
			HX_STACK_LINE(497)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(497)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(499)
			Array< ::Dynamic > tmp4 = this->m_uniforms;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(499)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(499)
			::haxor::graphics::material::MaterialUniform tmp6 = tmp4->__get(tmp5).StaticCast< ::haxor::graphics::material::MaterialUniform >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(499)
			u = tmp6;
			HX_STACK_LINE(500)
			bool tmp7 = (u->name == p_name);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(500)
			if ((tmp7)){
				HX_STACK_LINE(502)
				bool tmp8 = (u->isFloat == p_is_float);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(502)
				if ((tmp8)){
					HX_STACK_LINE(504)
					bool tmp9 = (u->offset == p_offset);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(504)
					if ((tmp9)){
						HX_STACK_LINE(506)
						int tmp10 = u->data->m_length;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(506)
						int tmp11 = p_length;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(506)
						bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(506)
						if ((tmp12)){
							HX_STACK_LINE(507)
							::haxor::graphics::material::MaterialUniform tmp13 = u;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(507)
							return tmp13;
						}
					}
				}
				HX_STACK_LINE(511)
				::haxor::context::MaterialContext tmp9 = ::haxor::context::EngineContext_obj::material;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(511)
				::haxor::graphics::material::MaterialUniform tmp10 = u;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(511)
				tmp9->DestroyUniform(hx::ObjectPtr<OBJ_>(this),tmp10);
				HX_STACK_LINE(512)
				Array< ::Dynamic > tmp11 = this->m_uniforms;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(512)
				::haxor::graphics::material::MaterialUniform tmp12 = u;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(512)
				tmp11->remove(tmp12);
				HX_STACK_LINE(513)
				break;
			}
		}
	}
	HX_STACK_LINE(516)
	bool tmp = p_create;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(516)
	if ((tmp)){
		HX_STACK_LINE(518)
		::haxor::graphics::material::MaterialUniform tmp1 = ::haxor::graphics::material::MaterialUniform_obj::__new(p_name,p_is_float,p_length,p_offset);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(518)
		u = tmp1;
		HX_STACK_LINE(519)
		::haxor::context::MaterialContext tmp2 = ::haxor::context::EngineContext_obj::material;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(519)
		::haxor::graphics::material::MaterialUniform tmp3 = u;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(519)
		tmp2->CreateUniform(hx::ObjectPtr<OBJ_>(this),tmp3);
		HX_STACK_LINE(520)
		Array< ::Dynamic > tmp4 = this->m_uniforms;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(520)
		::haxor::graphics::material::MaterialUniform tmp5 = u;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(520)
		tmp4->push(tmp5);
	}
	HX_STACK_LINE(522)
	::haxor::graphics::material::MaterialUniform tmp1 = u;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(522)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC5(Material_obj,FetchUniform,return )

Void Material_obj::SetUniformFloat( ::haxor::graphics::material::MaterialUniform u){
{
		HX_STACK_FRAME("haxor.graphics.material.Material","SetUniformFloat",0x967b9fb3,"haxor.graphics.material.Material.SetUniformFloat","haxor/graphics/material/Material.hx",526,0xe49118e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(u,"u")
		HX_STACK_LINE(527)
		::haxor::io::FloatArray d = ((::haxor::io::FloatArray)(u->data));		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(528)
		bool tmp = (d->m_length > u->offset);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(528)
		bool is_array = tmp;		HX_STACK_VAR(is_array,"is_array");
		HX_STACK_LINE(529)
		Array< Float > l = null();		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(530)
		bool tmp1 = is_array;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(530)
		if ((tmp1)){
			HX_STACK_LINE(532)
			Array< Float > tmp2 = Array_obj< Float >::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(532)
			l = tmp2;
			HX_STACK_LINE(533)
			{
				HX_STACK_LINE(533)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(533)
				int _g = d->m_length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(533)
				while((true)){
					HX_STACK_LINE(533)
					bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(533)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(533)
					if ((tmp4)){
						HX_STACK_LINE(533)
						break;
					}
					HX_STACK_LINE(533)
					int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(533)
					int i = tmp5;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(533)
					int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(533)
					Float tmp7 = d->Get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(533)
					l->push(tmp7);
				}
			}
		}
		HX_STACK_LINE(536)
		{
			HX_STACK_LINE(536)
			int _g = u->offset;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(536)
			int tmp2 = _g;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(536)
			switch( (int)(tmp2)){
				case (int)1: {
					HX_STACK_LINE(538)
					bool tmp3 = is_array;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(538)
					if ((tmp3)){
						HX_STACK_LINE(538)
						::String tmp4 = u->name;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(538)
						Array< Float > tmp5 = l;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(538)
						this->SetFloatArray(tmp4,tmp5);
					}
					else{
						HX_STACK_LINE(538)
						::String tmp4 = u->name;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(538)
						Float tmp5 = d->Get((int)0);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(538)
						this->SetFloat(tmp4,tmp5);
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(539)
					bool tmp3 = is_array;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(539)
					if ((tmp3)){
						HX_STACK_LINE(539)
						::String tmp4 = u->name;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(539)
						Array< Float > tmp5 = l;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(539)
						this->SetFloat2Array(tmp4,tmp5);
					}
					else{
						HX_STACK_LINE(539)
						::String tmp4 = u->name;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(539)
						Float tmp5 = d->Get((int)0);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(539)
						Float tmp6 = d->Get((int)1);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(539)
						this->SetFloat2(tmp4,tmp5,tmp6);
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(540)
					bool tmp3 = is_array;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(540)
					if ((tmp3)){
						HX_STACK_LINE(540)
						::String tmp4 = u->name;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(540)
						Array< Float > tmp5 = l;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(540)
						this->SetFloat3Array(tmp4,tmp5);
					}
					else{
						HX_STACK_LINE(540)
						::String tmp4 = u->name;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(540)
						Float tmp5 = d->Get((int)0);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(540)
						Float tmp6 = d->Get((int)1);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(540)
						Float tmp7 = d->Get((int)2);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(540)
						this->SetFloat3(tmp4,tmp5,tmp6,tmp7);
					}
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(541)
					bool tmp3 = is_array;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(541)
					if ((tmp3)){
						HX_STACK_LINE(541)
						::String tmp4 = u->name;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(541)
						Array< Float > tmp5 = l;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(541)
						this->SetFloat4Array(tmp4,tmp5);
					}
					else{
						HX_STACK_LINE(541)
						::String tmp4 = u->name;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(541)
						Float tmp5 = d->Get((int)0);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(541)
						Float tmp6 = d->Get((int)1);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(541)
						Float tmp7 = d->Get((int)2);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(541)
						Float tmp8 = d->Get((int)3);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(541)
						this->SetFloat4(tmp4,tmp5,tmp6,tmp7,tmp8);
					}
				}
				;break;
				case (int)16: {
					HX_STACK_LINE(543)
					::haxor::math::Matrix4 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(543)
					{
						HX_STACK_LINE(543)
						::haxor::context::DataContext tmp4 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(543)
						::haxor::context::DataContext _this = tmp4;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(543)
						Array< ::Dynamic > tmp5 = _this->m_m4;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(543)
						int tmp6 = (_this->m_nm4 + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(543)
						int tmp7 = _this->m_m4->length;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(543)
						int tmp8 = hx::Mod(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(543)
						int tmp9 = _this->m_nq = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(543)
						tmp3 = tmp5->__get(tmp9).StaticCast< ::haxor::math::Matrix4 >();
					}
					HX_STACK_LINE(543)
					::haxor::math::Matrix4 mat = tmp3;		HX_STACK_VAR(mat,"mat");
					HX_STACK_LINE(544)
					{
						HX_STACK_LINE(544)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(544)
						while((true)){
							HX_STACK_LINE(544)
							bool tmp4 = (_g1 < (int)16);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(544)
							bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(544)
							if ((tmp5)){
								HX_STACK_LINE(544)
								break;
							}
							HX_STACK_LINE(544)
							int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(544)
							int i = tmp6;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(544)
							int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(544)
							int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(544)
							Float tmp9 = d->Get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(544)
							mat->SetIndex(tmp7,tmp9);
						}
					}
					HX_STACK_LINE(545)
					bool tmp4 = u->transposed;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(545)
					if ((tmp4)){
						HX_STACK_LINE(545)
						mat->Transpose();
					}
					HX_STACK_LINE(546)
					::String tmp5 = u->name;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(546)
					::haxor::math::Matrix4 tmp6 = mat;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(546)
					bool tmp7 = u->transposed;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(546)
					this->SetMatrix4(tmp5,tmp6,tmp7);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Material_obj,SetUniformFloat,(void))

Void Material_obj::SetUniformInt( ::haxor::graphics::material::MaterialUniform u){
{
		HX_STACK_FRAME("haxor.graphics.material.Material","SetUniformInt",0x48716346,"haxor.graphics.material.Material.SetUniformInt","haxor/graphics/material/Material.hx",556,0xe49118e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(u,"u")
		HX_STACK_LINE(557)
		::haxor::io::Int32Array d = ((::haxor::io::Int32Array)(u->data));		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(558)
		bool tmp = (d->m_length > u->offset);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(558)
		bool is_array = tmp;		HX_STACK_VAR(is_array,"is_array");
		HX_STACK_LINE(559)
		Array< int > l = null();		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(560)
		bool tmp1 = is_array;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(560)
		if ((tmp1)){
			HX_STACK_LINE(562)
			Array< int > tmp2 = Array_obj< int >::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(562)
			l = tmp2;
			HX_STACK_LINE(563)
			{
				HX_STACK_LINE(563)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(563)
				int _g = d->m_length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(563)
				while((true)){
					HX_STACK_LINE(563)
					bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(563)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(563)
					if ((tmp4)){
						HX_STACK_LINE(563)
						break;
					}
					HX_STACK_LINE(563)
					int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(563)
					int i = tmp5;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(563)
					int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(563)
					int tmp7 = d->Get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(563)
					l->push(tmp7);
				}
			}
		}
		HX_STACK_LINE(566)
		{
			HX_STACK_LINE(566)
			int _g = u->offset;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(566)
			int tmp2 = _g;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(566)
			switch( (int)(tmp2)){
				case (int)1: {
					HX_STACK_LINE(569)
					bool tmp3 = (u->texture != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(569)
					if ((tmp3)){
						HX_STACK_LINE(571)
						::String tmp4 = u->name;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(571)
						::haxor::graphics::texture::Texture tmp5 = u->texture;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(571)
						this->SetTexture(tmp4,tmp5);
					}
					else{
						HX_STACK_LINE(575)
						bool tmp4 = is_array;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(575)
						if ((tmp4)){
							HX_STACK_LINE(575)
							::String tmp5 = u->name;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(575)
							Array< int > tmp6 = l;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(575)
							this->SetIntArray(tmp5,tmp6);
						}
						else{
							HX_STACK_LINE(575)
							::String tmp5 = u->name;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(575)
							int tmp6 = d->Get((int)0);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(575)
							this->SetInt(tmp5,tmp6);
						}
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(577)
					bool tmp3 = is_array;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(577)
					if ((tmp3)){
						HX_STACK_LINE(577)
						::String tmp4 = u->name;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(577)
						Array< int > tmp5 = l;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(577)
						this->SetInt2Array(tmp4,tmp5);
					}
					else{
						HX_STACK_LINE(577)
						::String tmp4 = u->name;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(577)
						int tmp5 = d->Get((int)0);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(577)
						int tmp6 = d->Get((int)1);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(577)
						this->SetInt2(tmp4,tmp5,tmp6);
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(578)
					bool tmp3 = is_array;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(578)
					if ((tmp3)){
						HX_STACK_LINE(578)
						::String tmp4 = u->name;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(578)
						Array< int > tmp5 = l;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(578)
						this->SetInt3Array(tmp4,tmp5);
					}
					else{
						HX_STACK_LINE(578)
						::String tmp4 = u->name;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(578)
						int tmp5 = d->Get((int)0);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(578)
						int tmp6 = d->Get((int)1);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(578)
						int tmp7 = d->Get((int)2);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(578)
						this->SetInt3(tmp4,tmp5,tmp6,tmp7);
					}
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(579)
					bool tmp3 = is_array;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(579)
					if ((tmp3)){
						HX_STACK_LINE(579)
						::String tmp4 = u->name;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(579)
						Array< int > tmp5 = l;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(579)
						this->SetInt4Array(tmp4,tmp5);
					}
					else{
						HX_STACK_LINE(579)
						::String tmp4 = u->name;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(579)
						int tmp5 = d->Get((int)0);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(579)
						int tmp6 = d->Get((int)1);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(579)
						int tmp7 = d->Get((int)2);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(579)
						int tmp8 = d->Get((int)3);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(579)
						this->SetInt4(tmp4,tmp5,tmp6,tmp7,tmp8);
					}
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Material_obj,SetUniformInt,(void))

Void Material_obj::OnDestroy( ){
{
		HX_STACK_FRAME("haxor.graphics.material.Material","OnDestroy",0xc505e604,"haxor.graphics.material.Material.OnDestroy","haxor/graphics/material/Material.hx",587,0xe49118e6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(588)
		::haxor::context::MaterialContext tmp = ::haxor::context::EngineContext_obj::material;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(588)
		tmp->DestroyMaterial(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


::String Material_obj::OnSerializeField( ::haxor::io::serialization::SerializedField p_field,::haxor::io::serialization::Formatter p_fmt){
	HX_STACK_FRAME("haxor.graphics.material.Material","OnSerializeField",0xdfe036f0,"haxor.graphics.material.Material.OnSerializeField","haxor/graphics/material/Material.hx",596,0xe49118e6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_field,"p_field")
	HX_STACK_ARG(p_fmt,"p_fmt")
	HX_STACK_LINE(596)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Material_obj,OnSerializeField,return )

bool Material_obj::OnDeserializeField( ::haxor::io::serialization::SerializedField p_field,::haxor::io::serialization::Formatter p_fmt){
	HX_STACK_FRAME("haxor.graphics.material.Material","OnDeserializeField",0xf34e47b1,"haxor.graphics.material.Material.OnDeserializeField","haxor/graphics/material/Material.hx",604,0xe49118e6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_field,"p_field")
	HX_STACK_ARG(p_fmt,"p_fmt")
	HX_STACK_LINE(605)
	::haxor::io::serialization::Formatter fmt = p_fmt;		HX_STACK_VAR(fmt,"fmt");
	HX_STACK_LINE(606)
	::haxor::io::serialization::SerializedField uf = p_field;		HX_STACK_VAR(uf,"uf");
	HX_STACK_LINE(607)
	::haxor::graphics::material::Material m = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(608)
	{
		HX_STACK_LINE(608)
		::String _g = uf->name;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(608)
		::String tmp = _g;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(608)
		::String _switch_1 = (tmp);
		if (  ( _switch_1==HX_HCSTRING("uniforms","\xbf","\xcc","\x54","\x02"))){
			HX_STACK_LINE(612)
			Array< ::Dynamic > unl = ((Array< ::Dynamic >)(uf->value));		HX_STACK_VAR(unl,"unl");
			HX_STACK_LINE(613)
			::haxor::io::serialization::SerializedField f;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(615)
			{
				HX_STACK_LINE(615)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(615)
				int _g1 = unl->length;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(615)
				while((true)){
					HX_STACK_LINE(615)
					bool tmp1 = (_g2 < _g1);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(615)
					bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(615)
					if ((tmp2)){
						HX_STACK_LINE(615)
						break;
					}
					HX_STACK_LINE(615)
					int tmp3 = (_g2)++;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(615)
					int i = tmp3;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(617)
					::haxor::io::serialization::SerializedData tmp4 = unl->__get(i).StaticCast< ::haxor::io::serialization::SerializedData >();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(617)
					::haxor::io::serialization::SerializedData un = tmp4;		HX_STACK_VAR(un,"un");
					HX_STACK_LINE(618)
					::haxor::io::serialization::SerializedData tmp5 = un;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(618)
					::haxor::io::serialization::SerializedField tmp6 = fmt->GetField(tmp5,HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(618)
					::String name = tmp6->value;		HX_STACK_VAR(name,"name");
					HX_STACK_LINE(619)
					::haxor::io::serialization::SerializedData tmp7 = un;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(619)
					::haxor::io::serialization::SerializedField tmp8 = fmt->GetField(tmp7,HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(619)
					f = tmp8;
					HX_STACK_LINE(620)
					bool tmp9 = (f != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(620)
					if ((tmp9)){
						HX_STACK_LINE(622)
						Dynamic tmp10 = f->value;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(622)
						::String tmp11 = f->type;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(622)
						Dynamic tmp12 = ::haxor::io::serialization::Formatter_obj::FromString(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(622)
						::haxor::graphics::texture::Texture texture = ((::haxor::graphics::texture::Texture)(tmp12));		HX_STACK_VAR(texture,"texture");
						HX_STACK_LINE(623)
						bool tmp13 = (texture != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(623)
						if ((tmp13)){
							HX_STACK_LINE(625)
							::String tmp14 = name;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(625)
							::haxor::graphics::texture::Texture tmp15 = texture;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(625)
							m->SetTexture(tmp14,tmp15);
						}
					}
					else{
						HX_STACK_LINE(630)
						::haxor::io::serialization::SerializedData tmp10 = un;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(630)
						::haxor::io::serialization::SerializedField tmp11 = fmt->GetField(tmp10,HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(630)
						Dynamic tmp12 = tmp11->value;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(630)
						Dynamic tmp13 = ::Std_obj::parseInt(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(630)
						int offset = tmp13;		HX_STACK_VAR(offset,"offset");
						HX_STACK_LINE(631)
						::haxor::io::serialization::SerializedData tmp14 = un;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(631)
						::haxor::io::serialization::SerializedField tmp15 = fmt->GetField(tmp14,HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(631)
						::String data = tmp15->value;		HX_STACK_VAR(data,"data");
						HX_STACK_LINE(632)
						::haxor::io::serialization::SerializedData tmp16 = un;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(632)
						::haxor::io::serialization::SerializedField tmp17 = fmt->GetField(tmp16,HX_HCSTRING("isFloat","\x52","\x69","\x1c","\x9f"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(632)
						Dynamic tmp18 = tmp17->value;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(632)
						bool tmp19 = (tmp18 == HX_HCSTRING("true","\x4e","\xa7","\x03","\x4d"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(632)
						bool is_float = tmp19;		HX_STACK_VAR(is_float,"is_float");
						HX_STACK_LINE(633)
						::haxor::io::serialization::SerializedData tmp20 = un;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(633)
						::haxor::io::serialization::SerializedField tmp21 = fmt->GetField(tmp20,HX_HCSTRING("transposed","\xcb","\x19","\x37","\x5d"));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(633)
						Dynamic tmp22 = tmp21->value;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(633)
						bool tmp23 = (tmp22 == HX_HCSTRING("true","\x4e","\xa7","\x03","\x4d"));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(633)
						bool transposed = tmp23;		HX_STACK_VAR(transposed,"transposed");
						HX_STACK_LINE(635)
						bool tmp24 = is_float;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(635)
						if ((tmp24)){
							HX_STACK_LINE(637)
							::String tmp25 = data;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(637)
							::haxor::io::FloatArray tmp26 = ::haxor::io::FloatArray_obj::Parse(tmp25,HX_HCSTRING(",","\x2c","\x00","\x00","\x00"),true);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(637)
							::haxor::io::FloatArray b = tmp26;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(638)
							bool tmp27 = (b->m_length > offset);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(638)
							bool is_array = tmp27;		HX_STACK_VAR(is_array,"is_array");
							HX_STACK_LINE(639)
							bool tmp28 = is_array;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(639)
							Array< Float > tmp29;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(639)
							if ((tmp28)){
								HX_STACK_LINE(639)
								tmp29 = b->ToArray();
							}
							else{
								HX_STACK_LINE(639)
								tmp29 = null();
							}
							HX_STACK_LINE(639)
							Array< Float > l = tmp29;		HX_STACK_VAR(l,"l");
							HX_STACK_LINE(641)
							int tmp30 = offset;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(641)
							switch( (int)(tmp30)){
								case (int)1: {
									HX_STACK_LINE(643)
									bool tmp31 = is_array;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(643)
									if ((tmp31)){
										HX_STACK_LINE(643)
										::String tmp32 = name;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(643)
										Array< Float > tmp33 = l;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(643)
										m->SetFloatArray(tmp32,tmp33);
									}
									else{
										HX_STACK_LINE(643)
										::String tmp32 = name;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(643)
										Float tmp33 = b->Get((int)0);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(643)
										m->SetFloat(tmp32,tmp33);
									}
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(644)
									bool tmp31 = is_array;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(644)
									if ((tmp31)){
										HX_STACK_LINE(644)
										::String tmp32 = name;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(644)
										Array< Float > tmp33 = l;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(644)
										m->SetFloat2Array(tmp32,tmp33);
									}
									else{
										HX_STACK_LINE(644)
										::String tmp32 = name;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(644)
										Float tmp33 = b->Get((int)0);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(644)
										Float tmp34 = b->Get((int)1);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(644)
										m->SetFloat2(tmp32,tmp33,tmp34);
									}
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(645)
									bool tmp31 = is_array;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(645)
									if ((tmp31)){
										HX_STACK_LINE(645)
										::String tmp32 = name;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(645)
										Array< Float > tmp33 = l;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(645)
										m->SetFloat3Array(tmp32,tmp33);
									}
									else{
										HX_STACK_LINE(645)
										::String tmp32 = name;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(645)
										Float tmp33 = b->Get((int)0);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(645)
										Float tmp34 = b->Get((int)1);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(645)
										Float tmp35 = b->Get((int)2);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(645)
										m->SetFloat3(tmp32,tmp33,tmp34,tmp35);
									}
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(646)
									bool tmp31 = is_array;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(646)
									if ((tmp31)){
										HX_STACK_LINE(646)
										::String tmp32 = name;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(646)
										Array< Float > tmp33 = l;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(646)
										m->SetFloat4Array(tmp32,tmp33);
									}
									else{
										HX_STACK_LINE(646)
										::String tmp32 = name;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(646)
										Float tmp33 = b->Get((int)0);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(646)
										Float tmp34 = b->Get((int)1);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(646)
										Float tmp35 = b->Get((int)2);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(646)
										Float tmp36 = b->Get((int)3);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(646)
										m->SetFloat4(tmp32,tmp33,tmp34,tmp35,tmp36);
									}
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(647)
									::String tmp31 = name;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(647)
									Array< Float > tmp32 = b->ToArray();		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(647)
									::haxor::math::Matrix4 tmp33 = ::haxor::math::Matrix4_obj::FromArray(tmp32,null());		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(647)
									bool tmp34 = transposed;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(647)
									m->SetMatrix4(tmp31,tmp33,tmp34);
								}
								;break;
							}
						}
						else{
							HX_STACK_LINE(652)
							::String tmp25 = data;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(652)
							::haxor::io::Int32Array tmp26 = ::haxor::io::Int32Array_obj::Parse(tmp25,HX_HCSTRING(",","\x2c","\x00","\x00","\x00"),true);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(652)
							::haxor::io::Int32Array b = tmp26;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(653)
							bool tmp27 = (b->m_length > offset);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(653)
							bool is_array = tmp27;		HX_STACK_VAR(is_array,"is_array");
							HX_STACK_LINE(654)
							bool tmp28 = is_array;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(654)
							Array< int > tmp29;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(654)
							if ((tmp28)){
								HX_STACK_LINE(654)
								tmp29 = b->ToArray();
							}
							else{
								HX_STACK_LINE(654)
								tmp29 = null();
							}
							HX_STACK_LINE(654)
							Array< int > l = tmp29;		HX_STACK_VAR(l,"l");
							HX_STACK_LINE(655)
							int tmp30 = offset;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(655)
							switch( (int)(tmp30)){
								case (int)1: {
									HX_STACK_LINE(657)
									bool tmp31 = is_array;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(657)
									if ((tmp31)){
										HX_STACK_LINE(657)
										::String tmp32 = name;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(657)
										Array< int > tmp33 = l;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(657)
										m->SetIntArray(tmp32,tmp33);
									}
									else{
										HX_STACK_LINE(657)
										::String tmp32 = name;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(657)
										int tmp33 = b->Get((int)0);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(657)
										m->SetInt(tmp32,tmp33);
									}
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(658)
									bool tmp31 = is_array;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(658)
									if ((tmp31)){
										HX_STACK_LINE(658)
										::String tmp32 = name;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(658)
										Array< int > tmp33 = l;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(658)
										m->SetInt2Array(tmp32,tmp33);
									}
									else{
										HX_STACK_LINE(658)
										::String tmp32 = name;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(658)
										int tmp33 = b->Get((int)0);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(658)
										int tmp34 = b->Get((int)1);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(658)
										m->SetInt2(tmp32,tmp33,tmp34);
									}
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(659)
									bool tmp31 = is_array;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(659)
									if ((tmp31)){
										HX_STACK_LINE(659)
										::String tmp32 = name;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(659)
										Array< int > tmp33 = l;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(659)
										m->SetInt3Array(tmp32,tmp33);
									}
									else{
										HX_STACK_LINE(659)
										::String tmp32 = name;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(659)
										int tmp33 = b->Get((int)0);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(659)
										int tmp34 = b->Get((int)1);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(659)
										int tmp35 = b->Get((int)2);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(659)
										m->SetInt3(tmp32,tmp33,tmp34,tmp35);
									}
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(660)
									bool tmp31 = is_array;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(660)
									if ((tmp31)){
										HX_STACK_LINE(660)
										::String tmp32 = name;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(660)
										Array< int > tmp33 = l;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(660)
										m->SetInt4Array(tmp32,tmp33);
									}
									else{
										HX_STACK_LINE(660)
										::String tmp32 = name;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(660)
										int tmp33 = b->Get((int)0);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(660)
										int tmp34 = b->Get((int)1);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(660)
										int tmp35 = b->Get((int)2);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(660)
										int tmp36 = b->Get((int)3);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(660)
										m->SetInt4(tmp32,tmp33,tmp34,tmp35,tmp36);
									}
								}
								;break;
							}
						}
					}
				}
			}
			HX_STACK_LINE(665)
			return true;
		}
	}
	HX_STACK_LINE(668)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(Material_obj,OnDeserializeField,return )

::haxor::graphics::material::Material Material_obj::Opaque( ::haxor::graphics::texture::Texture p_texture,hx::Null< bool >  __o_p_ztest,hx::Null< bool >  __o_p_zwrite){
bool p_ztest = __o_p_ztest.Default(true);
bool p_zwrite = __o_p_zwrite.Default(true);
	HX_STACK_FRAME("haxor.graphics.material.Material","Opaque",0xdb3e70d8,"haxor.graphics.material.Material.Opaque","haxor/graphics/material/Material.hx",50,0xe49118e6)
	HX_STACK_ARG(p_texture,"p_texture")
	HX_STACK_ARG(p_ztest,"p_ztest")
	HX_STACK_ARG(p_zwrite,"p_zwrite")
{
		HX_STACK_LINE(51)
		::haxor::graphics::material::Material tmp = ::haxor::graphics::material::Material_obj::__new(HX_HCSTRING("Opaque","\x01","\x51","\x86","\x53"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(51)
		::haxor::graphics::material::Material m = tmp;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(52)
		bool tmp1 = (p_texture == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		::haxor::graphics::material::Shader tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(52)
		if ((tmp1)){
			HX_STACK_LINE(52)
			::haxor::graphics::material::Shader tmp3 = ::haxor::graphics::material::Shader_obj::m_flat_shader;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(52)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(52)
			if ((tmp4)){
				HX_STACK_LINE(52)
				::String tmp5 = ::haxor::context::ShaderContext_obj::vs_flat;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(52)
				::String tmp6 = ::haxor::context::ShaderContext_obj::fs_flat;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(52)
				::haxor::graphics::material::Shader tmp7 = ::haxor::graphics::material::Shader_obj::__new(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(52)
				tmp2 = ::haxor::graphics::material::Shader_obj::m_flat_shader = tmp7;
			}
			else{
				HX_STACK_LINE(52)
				tmp2 = ::haxor::graphics::material::Shader_obj::m_flat_shader;
			}
		}
		else{
			HX_STACK_LINE(52)
			::haxor::graphics::material::Shader tmp3 = ::haxor::graphics::material::Shader_obj::m_flat_texture_shader;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(52)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(52)
			if ((tmp4)){
				HX_STACK_LINE(52)
				::String tmp5 = ::haxor::context::ShaderContext_obj::vs_flat_texture;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(52)
				::String tmp6 = ::haxor::context::ShaderContext_obj::fs_flat_texture;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(52)
				::haxor::graphics::material::Shader tmp7 = ::haxor::graphics::material::Shader_obj::__new(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(52)
				tmp2 = ::haxor::graphics::material::Shader_obj::m_flat_texture_shader = tmp7;
			}
			else{
				HX_STACK_LINE(52)
				tmp2 = ::haxor::graphics::material::Shader_obj::m_flat_texture_shader;
			}
		}
		HX_STACK_LINE(52)
		m->set_shader(tmp2);
		HX_STACK_LINE(53)
		m->queue = (int)1000;
		HX_STACK_LINE(54)
		m->ztest = p_ztest;
		HX_STACK_LINE(55)
		m->zwrite = p_zwrite;
		HX_STACK_LINE(56)
		bool tmp3 = (p_texture != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(56)
		if ((tmp3)){
			HX_STACK_LINE(56)
			::haxor::graphics::texture::Texture tmp4 = p_texture;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(56)
			m->SetTexture(HX_HCSTRING("DiffuseTexture","\xb9","\xf3","\x75","\x7e"),tmp4);
		}
		HX_STACK_LINE(57)
		::haxor::graphics::material::Material tmp4 = m;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(57)
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Material_obj,Opaque,return )

::haxor::graphics::material::Material Material_obj::Transparent( ::haxor::graphics::texture::Texture p_texture,hx::Null< bool >  __o_p_ztest,hx::Null< bool >  __o_p_zwrite,hx::Null< bool >  __o_p_double_sided){
bool p_ztest = __o_p_ztest.Default(true);
bool p_zwrite = __o_p_zwrite.Default(true);
bool p_double_sided = __o_p_double_sided.Default(false);
	HX_STACK_FRAME("haxor.graphics.material.Material","Transparent",0x8b1ed7fb,"haxor.graphics.material.Material.Transparent","haxor/graphics/material/Material.hx",69,0xe49118e6)
	HX_STACK_ARG(p_texture,"p_texture")
	HX_STACK_ARG(p_ztest,"p_ztest")
	HX_STACK_ARG(p_zwrite,"p_zwrite")
	HX_STACK_ARG(p_double_sided,"p_double_sided")
{
		HX_STACK_LINE(70)
		::haxor::graphics::material::Material tmp = ::haxor::graphics::material::Material_obj::__new(HX_HCSTRING("Transparent","\x32","\xc3","\xec","\x06"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(70)
		::haxor::graphics::material::Material m = tmp;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(71)
		bool tmp1 = p_double_sided;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(71)
		if ((tmp1)){
			HX_STACK_LINE(71)
			m->cull = (int)0;
		}
		HX_STACK_LINE(72)
		m->SetBlending((int)770,(int)771);
		HX_STACK_LINE(73)
		bool tmp2 = (p_texture == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(73)
		::haxor::graphics::material::Shader tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(73)
		if ((tmp2)){
			HX_STACK_LINE(73)
			::haxor::graphics::material::Shader tmp4 = ::haxor::graphics::material::Shader_obj::m_flat_shader;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(73)
			bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(73)
			if ((tmp5)){
				HX_STACK_LINE(73)
				::String tmp6 = ::haxor::context::ShaderContext_obj::vs_flat;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(73)
				::String tmp7 = ::haxor::context::ShaderContext_obj::fs_flat;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(73)
				::haxor::graphics::material::Shader tmp8 = ::haxor::graphics::material::Shader_obj::__new(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(73)
				tmp3 = ::haxor::graphics::material::Shader_obj::m_flat_shader = tmp8;
			}
			else{
				HX_STACK_LINE(73)
				tmp3 = ::haxor::graphics::material::Shader_obj::m_flat_shader;
			}
		}
		else{
			HX_STACK_LINE(73)
			::haxor::graphics::material::Shader tmp4 = ::haxor::graphics::material::Shader_obj::m_flat_texture_shader;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(73)
			bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(73)
			if ((tmp5)){
				HX_STACK_LINE(73)
				::String tmp6 = ::haxor::context::ShaderContext_obj::vs_flat_texture;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(73)
				::String tmp7 = ::haxor::context::ShaderContext_obj::fs_flat_texture;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(73)
				::haxor::graphics::material::Shader tmp8 = ::haxor::graphics::material::Shader_obj::__new(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(73)
				tmp3 = ::haxor::graphics::material::Shader_obj::m_flat_texture_shader = tmp8;
			}
			else{
				HX_STACK_LINE(73)
				tmp3 = ::haxor::graphics::material::Shader_obj::m_flat_texture_shader;
			}
		}
		HX_STACK_LINE(73)
		m->set_shader(tmp3);
		HX_STACK_LINE(74)
		m->queue = (int)2000;
		HX_STACK_LINE(75)
		m->ztest = p_ztest;
		HX_STACK_LINE(76)
		m->zwrite = p_zwrite;
		HX_STACK_LINE(77)
		m->blend = true;
		HX_STACK_LINE(78)
		bool tmp4 = (p_texture != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(78)
		if ((tmp4)){
			HX_STACK_LINE(78)
			::haxor::graphics::texture::Texture tmp5 = p_texture;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(78)
			m->SetTexture(HX_HCSTRING("DiffuseTexture","\xb9","\xf3","\x75","\x7e"),tmp5);
		}
		HX_STACK_LINE(80)
		::haxor::graphics::material::Material tmp5 = m;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(80)
		return tmp5;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Material_obj,Transparent,return )

::haxor::graphics::material::Material Material_obj::AdditiveAlpha( ::haxor::graphics::texture::Texture p_texture,hx::Null< bool >  __o_p_ztest,hx::Null< bool >  __o_p_zwrite,hx::Null< bool >  __o_p_double_sided){
bool p_ztest = __o_p_ztest.Default(true);
bool p_zwrite = __o_p_zwrite.Default(true);
bool p_double_sided = __o_p_double_sided.Default(false);
	HX_STACK_FRAME("haxor.graphics.material.Material","AdditiveAlpha",0x6b54019b,"haxor.graphics.material.Material.AdditiveAlpha","haxor/graphics/material/Material.hx",91,0xe49118e6)
	HX_STACK_ARG(p_texture,"p_texture")
	HX_STACK_ARG(p_ztest,"p_ztest")
	HX_STACK_ARG(p_zwrite,"p_zwrite")
	HX_STACK_ARG(p_double_sided,"p_double_sided")
{
		HX_STACK_LINE(92)
		bool tmp = p_ztest;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(92)
		bool tmp1 = p_zwrite;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(92)
		bool tmp2 = p_double_sided;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(92)
		::haxor::graphics::material::Material tmp3 = ::haxor::graphics::material::Material_obj::Transparent(null(),tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(92)
		::haxor::graphics::material::Material m = tmp3;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(93)
		m->set_name(HX_HCSTRING("AdditiveAlpha","\x92","\x68","\xdc","\xe6"));
		HX_STACK_LINE(94)
		m->SetBlending((int)770,(int)1);
		HX_STACK_LINE(95)
		::haxor::graphics::material::Material tmp4 = m;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(95)
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Material_obj,AdditiveAlpha,return )

::haxor::graphics::material::Material Material_obj::Additive( ::haxor::graphics::texture::Texture p_texture,hx::Null< bool >  __o_p_ztest,hx::Null< bool >  __o_p_zwrite,hx::Null< bool >  __o_p_double_sided){
bool p_ztest = __o_p_ztest.Default(true);
bool p_zwrite = __o_p_zwrite.Default(true);
bool p_double_sided = __o_p_double_sided.Default(false);
	HX_STACK_FRAME("haxor.graphics.material.Material","Additive",0x7fd232c3,"haxor.graphics.material.Material.Additive","haxor/graphics/material/Material.hx",106,0xe49118e6)
	HX_STACK_ARG(p_texture,"p_texture")
	HX_STACK_ARG(p_ztest,"p_ztest")
	HX_STACK_ARG(p_zwrite,"p_zwrite")
	HX_STACK_ARG(p_double_sided,"p_double_sided")
{
		HX_STACK_LINE(107)
		bool tmp = p_ztest;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(107)
		bool tmp1 = p_zwrite;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(107)
		bool tmp2 = p_double_sided;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(107)
		::haxor::graphics::material::Material tmp3 = ::haxor::graphics::material::Material_obj::Transparent(null(),tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(107)
		::haxor::graphics::material::Material m = tmp3;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(108)
		m->set_name(HX_HCSTRING("Additive","\x2c","\x2f","\xf1","\x81"));
		HX_STACK_LINE(109)
		m->SetBlending((int)1,(int)1);
		HX_STACK_LINE(110)
		::haxor::graphics::material::Material tmp4 = m;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(110)
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Material_obj,Additive,return )


Material_obj::Material_obj()
{
}

void Material_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Material);
	HX_MARK_MEMBER_NAME(ztest,"ztest");
	HX_MARK_MEMBER_NAME(zfunc,"zfunc");
	HX_MARK_MEMBER_NAME(zwrite,"zwrite");
	HX_MARK_MEMBER_NAME(blend,"blend");
	HX_MARK_MEMBER_NAME(queue,"queue");
	HX_MARK_MEMBER_NAME(blendSrc,"blendSrc");
	HX_MARK_MEMBER_NAME(blendDst,"blendDst");
	HX_MARK_MEMBER_NAME(invert,"invert");
	HX_MARK_MEMBER_NAME(cull,"cull");
	HX_MARK_MEMBER_NAME(lighting,"lighting");
	HX_MARK_MEMBER_NAME(grab,"grab");
	HX_MARK_MEMBER_NAME(m_shader,"m_shader");
	HX_MARK_MEMBER_NAME(m_uniforms,"m_uniforms");
	::haxor::core::Resource_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Material_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ztest,"ztest");
	HX_VISIT_MEMBER_NAME(zfunc,"zfunc");
	HX_VISIT_MEMBER_NAME(zwrite,"zwrite");
	HX_VISIT_MEMBER_NAME(blend,"blend");
	HX_VISIT_MEMBER_NAME(queue,"queue");
	HX_VISIT_MEMBER_NAME(blendSrc,"blendSrc");
	HX_VISIT_MEMBER_NAME(blendDst,"blendDst");
	HX_VISIT_MEMBER_NAME(invert,"invert");
	HX_VISIT_MEMBER_NAME(cull,"cull");
	HX_VISIT_MEMBER_NAME(lighting,"lighting");
	HX_VISIT_MEMBER_NAME(grab,"grab");
	HX_VISIT_MEMBER_NAME(m_shader,"m_shader");
	HX_VISIT_MEMBER_NAME(m_uniforms,"m_uniforms");
	::haxor::core::Resource_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Material_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"cull") ) { return cull; }
		if (HX_FIELD_EQ(inName,"grab") ) { return grab; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ztest") ) { return ztest; }
		if (HX_FIELD_EQ(inName,"zfunc") ) { return zfunc; }
		if (HX_FIELD_EQ(inName,"blend") ) { return blend; }
		if (HX_FIELD_EQ(inName,"queue") ) { return queue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"zwrite") ) { return zwrite; }
		if (HX_FIELD_EQ(inName,"invert") ) { return invert; }
		if (HX_FIELD_EQ(inName,"shader") ) { if (inCallProp == hx::paccAlways) return get_shader(); }
		if (HX_FIELD_EQ(inName,"SetInt") ) { return SetInt_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"SetInt2") ) { return SetInt2_dyn(); }
		if (HX_FIELD_EQ(inName,"SetInt3") ) { return SetInt3_dyn(); }
		if (HX_FIELD_EQ(inName,"SetInt4") ) { return SetInt4_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"blendSrc") ) { return blendSrc; }
		if (HX_FIELD_EQ(inName,"blendDst") ) { return blendDst; }
		if (HX_FIELD_EQ(inName,"lighting") ) { return lighting; }
		if (HX_FIELD_EQ(inName,"m_shader") ) { return m_shader; }
		if (HX_FIELD_EQ(inName,"uniforms") ) { if (inCallProp == hx::paccAlways) return get_uniforms(); }
		if (HX_FIELD_EQ(inName,"SetColor") ) { return SetColor_dyn(); }
		if (HX_FIELD_EQ(inName,"SetFloat") ) { return SetFloat_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"SetFloat2") ) { return SetFloat2_dyn(); }
		if (HX_FIELD_EQ(inName,"SetFloat3") ) { return SetFloat3_dyn(); }
		if (HX_FIELD_EQ(inName,"SetFloat4") ) { return SetFloat4_dyn(); }
		if (HX_FIELD_EQ(inName,"OnDestroy") ) { return OnDestroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_shader") ) { return get_shader_dyn(); }
		if (HX_FIELD_EQ(inName,"set_shader") ) { return set_shader_dyn(); }
		if (HX_FIELD_EQ(inName,"m_uniforms") ) { return m_uniforms; }
		if (HX_FIELD_EQ(inName,"SetTexture") ) { return SetTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"SetMatrix4") ) { return SetMatrix4_dyn(); }
		if (HX_FIELD_EQ(inName,"SetVector2") ) { return SetVector2_dyn(); }
		if (HX_FIELD_EQ(inName,"SetVector3") ) { return SetVector3_dyn(); }
		if (HX_FIELD_EQ(inName,"SetVector4") ) { return SetVector4_dyn(); }
		if (HX_FIELD_EQ(inName,"GetUniform") ) { return GetUniform_dyn(); }
		if (HX_FIELD_EQ(inName,"HasUniform") ) { return HasUniform_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"SetBlending") ) { return SetBlending_dyn(); }
		if (HX_FIELD_EQ(inName,"SetIntArray") ) { return SetIntArray_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_uniforms") ) { return get_uniforms_dyn(); }
		if (HX_FIELD_EQ(inName,"SetInt2Array") ) { return SetInt2Array_dyn(); }
		if (HX_FIELD_EQ(inName,"SetInt3Array") ) { return SetInt3Array_dyn(); }
		if (HX_FIELD_EQ(inName,"SetInt4Array") ) { return SetInt4Array_dyn(); }
		if (HX_FIELD_EQ(inName,"FetchUniform") ) { return FetchUniform_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SetFloatArray") ) { return SetFloatArray_dyn(); }
		if (HX_FIELD_EQ(inName,"RemoveUniform") ) { return RemoveUniform_dyn(); }
		if (HX_FIELD_EQ(inName,"SetUniformInt") ) { return SetUniformInt_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"SetFloat2Array") ) { return SetFloat2Array_dyn(); }
		if (HX_FIELD_EQ(inName,"SetFloat3Array") ) { return SetFloat3Array_dyn(); }
		if (HX_FIELD_EQ(inName,"SetFloat4Array") ) { return SetFloat4Array_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"SetUniformFloat") ) { return SetUniformFloat_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"OnSerializeField") ) { return OnSerializeField_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"GetActiveUniforms") ) { return GetActiveUniforms_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"OnDeserializeField") ) { return OnDeserializeField_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Material_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"Opaque") ) { outValue = Opaque_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"Additive") ) { outValue = Additive_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"Transparent") ) { outValue = Transparent_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"AdditiveAlpha") ) { outValue = AdditiveAlpha_dyn(); return true;  }
	}
	return false;
}

Dynamic Material_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"cull") ) { cull=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"grab") ) { grab=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ztest") ) { ztest=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zfunc") ) { zfunc=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blend") ) { blend=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"queue") ) { queue=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"zwrite") ) { zwrite=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"invert") ) { invert=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shader") ) { if (inCallProp == hx::paccAlways) return set_shader(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"blendSrc") ) { blendSrc=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blendDst") ) { blendDst=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lighting") ) { lighting=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_shader") ) { m_shader=inValue.Cast< ::haxor::graphics::material::Shader >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_uniforms") ) { m_uniforms=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Material_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Material_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("ztest","\xcc","\x8d","\xdc","\x8b"));
	outFields->push(HX_HCSTRING("zfunc","\xbe","\xb0","\xa7","\x82"));
	outFields->push(HX_HCSTRING("zwrite","\x25","\x72","\xe3","\x97"));
	outFields->push(HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4"));
	outFields->push(HX_HCSTRING("queue","\x91","\x8d","\xea","\x5d"));
	outFields->push(HX_HCSTRING("blendSrc","\x13","\xbf","\xd5","\x6a"));
	outFields->push(HX_HCSTRING("blendDst","\x34","\x5e","\xca","\x6a"));
	outFields->push(HX_HCSTRING("invert","\x16","\xe7","\xd8","\x9f"));
	outFields->push(HX_HCSTRING("cull","\xb2","\x45","\xc9","\x41"));
	outFields->push(HX_HCSTRING("lighting","\xcc","\x25","\x01","\x8d"));
	outFields->push(HX_HCSTRING("grab","\xcc","\xcf","\x6b","\x44"));
	outFields->push(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"));
	outFields->push(HX_HCSTRING("m_shader","\xf7","\x67","\x12","\xe6"));
	outFields->push(HX_HCSTRING("uniforms","\xbf","\xcc","\x54","\x02"));
	outFields->push(HX_HCSTRING("m_uniforms","\x11","\xce","\x9f","\x29"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Material_obj,ztest),HX_HCSTRING("ztest","\xcc","\x8d","\xdc","\x8b")},
	{hx::fsInt,(int)offsetof(Material_obj,zfunc),HX_HCSTRING("zfunc","\xbe","\xb0","\xa7","\x82")},
	{hx::fsBool,(int)offsetof(Material_obj,zwrite),HX_HCSTRING("zwrite","\x25","\x72","\xe3","\x97")},
	{hx::fsBool,(int)offsetof(Material_obj,blend),HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4")},
	{hx::fsInt,(int)offsetof(Material_obj,queue),HX_HCSTRING("queue","\x91","\x8d","\xea","\x5d")},
	{hx::fsInt,(int)offsetof(Material_obj,blendSrc),HX_HCSTRING("blendSrc","\x13","\xbf","\xd5","\x6a")},
	{hx::fsInt,(int)offsetof(Material_obj,blendDst),HX_HCSTRING("blendDst","\x34","\x5e","\xca","\x6a")},
	{hx::fsBool,(int)offsetof(Material_obj,invert),HX_HCSTRING("invert","\x16","\xe7","\xd8","\x9f")},
	{hx::fsInt,(int)offsetof(Material_obj,cull),HX_HCSTRING("cull","\xb2","\x45","\xc9","\x41")},
	{hx::fsBool,(int)offsetof(Material_obj,lighting),HX_HCSTRING("lighting","\xcc","\x25","\x01","\x8d")},
	{hx::fsBool,(int)offsetof(Material_obj,grab),HX_HCSTRING("grab","\xcc","\xcf","\x6b","\x44")},
	{hx::fsObject /*::haxor::graphics::material::Shader*/ ,(int)offsetof(Material_obj,m_shader),HX_HCSTRING("m_shader","\xf7","\x67","\x12","\xe6")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Material_obj,m_uniforms),HX_HCSTRING("m_uniforms","\x11","\xce","\x9f","\x29")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("ztest","\xcc","\x8d","\xdc","\x8b"),
	HX_HCSTRING("zfunc","\xbe","\xb0","\xa7","\x82"),
	HX_HCSTRING("zwrite","\x25","\x72","\xe3","\x97"),
	HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4"),
	HX_HCSTRING("queue","\x91","\x8d","\xea","\x5d"),
	HX_HCSTRING("blendSrc","\x13","\xbf","\xd5","\x6a"),
	HX_HCSTRING("blendDst","\x34","\x5e","\xca","\x6a"),
	HX_HCSTRING("invert","\x16","\xe7","\xd8","\x9f"),
	HX_HCSTRING("cull","\xb2","\x45","\xc9","\x41"),
	HX_HCSTRING("lighting","\xcc","\x25","\x01","\x8d"),
	HX_HCSTRING("grab","\xcc","\xcf","\x6b","\x44"),
	HX_HCSTRING("get_shader","\xee","\x2e","\xa8","\x0d"),
	HX_HCSTRING("set_shader","\x62","\xcd","\x25","\x11"),
	HX_HCSTRING("m_shader","\xf7","\x67","\x12","\xe6"),
	HX_HCSTRING("get_uniforms","\xc8","\x80","\x6e","\xb7"),
	HX_HCSTRING("m_uniforms","\x11","\xce","\x9f","\x29"),
	HX_HCSTRING("SetBlending","\xd3","\xce","\x79","\x7f"),
	HX_HCSTRING("GetActiveUniforms","\xbb","\x6f","\xa6","\x2e"),
	HX_HCSTRING("SetTexture","\x79","\xf1","\x70","\xe8"),
	HX_HCSTRING("SetMatrix4","\x71","\x6b","\xf7","\xdc"),
	HX_HCSTRING("SetVector2","\xad","\x22","\x2d","\x24"),
	HX_HCSTRING("SetVector3","\xae","\x22","\x2d","\x24"),
	HX_HCSTRING("SetVector4","\xaf","\x22","\x2d","\x24"),
	HX_HCSTRING("SetColor","\x81","\x96","\x42","\x32"),
	HX_HCSTRING("SetFloat","\xba","\xea","\x7c","\xea"),
	HX_HCSTRING("SetFloat2","\x38","\x78","\xd0","\x42"),
	HX_HCSTRING("SetFloat3","\x39","\x78","\xd0","\x42"),
	HX_HCSTRING("SetFloat4","\x3a","\x78","\xd0","\x42"),
	HX_HCSTRING("SetFloatArray","\x7f","\xd0","\x90","\x2d"),
	HX_HCSTRING("SetFloat2Array","\x41","\x9a","\x35","\x7b"),
	HX_HCSTRING("SetFloat3Array","\xa0","\xf6","\x90","\xe1"),
	HX_HCSTRING("SetFloat4Array","\xff","\x52","\xec","\x47"),
	HX_HCSTRING("SetInt","\x8d","\x0e","\xfc","\xa3"),
	HX_HCSTRING("SetInt2","\x05","\xad","\x90","\xd8"),
	HX_HCSTRING("SetInt3","\x06","\xad","\x90","\xd8"),
	HX_HCSTRING("SetInt4","\x07","\xad","\x90","\xd8"),
	HX_HCSTRING("SetIntArray","\xcc","\xef","\x9f","\x82"),
	HX_HCSTRING("SetInt2Array","\x54","\xde","\x61","\x93"),
	HX_HCSTRING("SetInt3Array","\xb3","\x3a","\xbd","\xf9"),
	HX_HCSTRING("SetInt4Array","\x12","\x97","\x18","\x60"),
	HX_HCSTRING("GetUniform","\x5e","\xcb","\x76","\xfb"),
	HX_HCSTRING("HasUniform","\x1a","\x2d","\xc9","\x36"),
	HX_HCSTRING("RemoveUniform","\x30","\xed","\x0e","\xd6"),
	HX_HCSTRING("FetchUniform","\x3a","\xfc","\x65","\x46"),
	HX_HCSTRING("SetUniformFloat","\x6a","\xf2","\x24","\x52"),
	HX_HCSTRING("SetUniformInt","\x3d","\xca","\xf9","\xc3"),
	HX_HCSTRING("OnDestroy","\x7b","\xc5","\x03","\x9e"),
	HX_HCSTRING("OnSerializeField","\x59","\x44","\x5f","\x58"),
	HX_HCSTRING("OnDeserializeField","\x5a","\x41","\xba","\xd3"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Material_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Material_obj::__mClass,"__mClass");
};

#endif

hx::Class Material_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("Opaque","\x01","\x51","\x86","\x53"),
	HX_HCSTRING("Transparent","\x32","\xc3","\xec","\x06"),
	HX_HCSTRING("AdditiveAlpha","\x92","\x68","\xdc","\xe6"),
	HX_HCSTRING("Additive","\x2c","\x2f","\xf1","\x81"),
	String(null()) };

void Material_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.graphics.material.Material","\xb7","\x2b","\x1e","\x4d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Material_obj::__GetStatic;
	__mClass->mSetStaticField = &Material_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Material_obj >;
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

void Material_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/graphics/material/Material.hx",40,0xe49118e6)
		{
			hx::Anon __result = hx::Anon_obj::Create();
			struct _Function_1_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/graphics/material/Material.hx",40,0xe49118e6)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						struct _Function_2_1{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/graphics/material/Material.hx",40,0xe49118e6)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("ztest","\xcc","\x8d","\xdc","\x8b") , _Function_2_1::Block(),false);
						struct _Function_2_2{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/graphics/material/Material.hx",40,0xe49118e6)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("zfunc","\xbe","\xb0","\xa7","\x82") , _Function_2_2::Block(),false);
						struct _Function_2_3{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/graphics/material/Material.hx",40,0xe49118e6)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("zwrite","\x25","\x72","\xe3","\x97") , _Function_2_3::Block(),false);
						struct _Function_2_4{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/graphics/material/Material.hx",40,0xe49118e6)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4") , _Function_2_4::Block(),false);
						struct _Function_2_5{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/graphics/material/Material.hx",40,0xe49118e6)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("queue","\x91","\x8d","\xea","\x5d") , _Function_2_5::Block(),false);
						struct _Function_2_6{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/graphics/material/Material.hx",40,0xe49118e6)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("blendSrc","\x13","\xbf","\xd5","\x6a") , _Function_2_6::Block(),false);
						struct _Function_2_7{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/graphics/material/Material.hx",40,0xe49118e6)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("blendDst","\x34","\x5e","\xca","\x6a") , _Function_2_7::Block(),false);
						struct _Function_2_8{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/graphics/material/Material.hx",40,0xe49118e6)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("invert","\x16","\xe7","\xd8","\x9f") , _Function_2_8::Block(),false);
						struct _Function_2_9{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/graphics/material/Material.hx",40,0xe49118e6)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("cull","\xb2","\x45","\xc9","\x41") , _Function_2_9::Block(),false);
						struct _Function_2_10{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/graphics/material/Material.hx",40,0xe49118e6)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("lighting","\xcc","\x25","\x01","\x8d") , _Function_2_10::Block(),false);
						struct _Function_2_11{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/graphics/material/Material.hx",40,0xe49118e6)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("grab","\xcc","\xcf","\x6b","\x44") , _Function_2_11::Block(),false);
						struct _Function_2_12{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/graphics/material/Material.hx",40,0xe49118e6)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d") , _Function_2_12::Block(),false);
						struct _Function_2_13{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/graphics/material/Material.hx",40,0xe49118e6)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("uniforms","\xbf","\xcc","\x54","\x02") , _Function_2_13::Block(),false);
						return __result;
					}
					return null();
				}
			};
			__result->Add(HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80") , _Function_1_1::Block(),false);
			return __result;
		}
		return null();
	}
};
	__mClass->__meta__=_Function_0_1::Block();
}

} // end namespace haxor
} // end namespace graphics
} // end namespace material
