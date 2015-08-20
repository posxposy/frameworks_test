#include <hxcpp.h>

#ifndef INCLUDED_haxor_context_EngineContext
#include <haxor/context/EngineContext.h>
#endif
#ifndef INCLUDED_haxor_context_MaterialContext
#include <haxor/context/MaterialContext.h>
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
#ifndef INCLUDED_haxor_graphics_material_MaterialUniform
#include <haxor/graphics/material/MaterialUniform.h>
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

Void MaterialUniform_obj::__construct(::String p_name,bool p_is_float,int p_length,int p_offset)
{
HX_STACK_FRAME("haxor.graphics.material.MaterialUniform","new",0x09c035af,"haxor.graphics.material.MaterialUniform.new","haxor/graphics/material/Material.hx",737,0xe49118e6)
HX_STACK_THIS(this)
HX_STACK_ARG(p_name,"p_name")
HX_STACK_ARG(p_is_float,"p_is_float")
HX_STACK_ARG(p_length,"p_length")
HX_STACK_ARG(p_offset,"p_offset")
{
	HX_STACK_LINE(738)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(738)
	{
		HX_STACK_LINE(738)
		::haxor::context::MaterialContext tmp1 = ::haxor::context::EngineContext_obj::material;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(738)
		::haxor::context::UID _this = tmp1->uid;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(738)
		int tmp2 = _this->m_cache->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(738)
		bool tmp3 = (tmp2 <= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(738)
		if ((tmp3)){
			HX_STACK_LINE(738)
			tmp = (_this->m_id)++;
		}
		else{
			HX_STACK_LINE(738)
			tmp = _this->m_cache->shift();
		}
	}
	HX_STACK_LINE(738)
	this->__cid = tmp;
	HX_STACK_LINE(739)
	this->__d = true;
	HX_STACK_LINE(740)
	this->name = p_name;
	HX_STACK_LINE(741)
	this->isFloat = p_is_float;
	HX_STACK_LINE(742)
	this->offset = p_offset;
	HX_STACK_LINE(743)
	this->exists = false;
	HX_STACK_LINE(744)
	this->transposed = false;
	HX_STACK_LINE(745)
	bool tmp1 = p_is_float;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(745)
	if ((tmp1)){
		HX_STACK_LINE(747)
		::haxor::io::FloatArray tmp2 = ::haxor::io::FloatArray_obj::__new(p_length);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(747)
		this->data = tmp2;
	}
	else{
		HX_STACK_LINE(751)
		::haxor::io::Int32Array tmp2 = ::haxor::io::Int32Array_obj::__new(p_length);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(751)
		this->data = tmp2;
	}
}
;
	return null();
}

//MaterialUniform_obj::~MaterialUniform_obj() { }

Dynamic MaterialUniform_obj::__CreateEmpty() { return  new MaterialUniform_obj; }
hx::ObjectPtr< MaterialUniform_obj > MaterialUniform_obj::__new(::String p_name,bool p_is_float,int p_length,int p_offset)
{  hx::ObjectPtr< MaterialUniform_obj > _result_ = new MaterialUniform_obj();
	_result_->__construct(p_name,p_is_float,p_length,p_offset);
	return _result_;}

Dynamic MaterialUniform_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MaterialUniform_obj > _result_ = new MaterialUniform_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void MaterialUniform_obj::SetFloat( Float p_v){
{
		HX_STACK_FRAME("haxor.graphics.material.MaterialUniform","SetFloat",0xdb33e70b,"haxor.graphics.material.MaterialUniform.SetFloat","haxor/graphics/material/Material.hx",755,0xe49118e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_v,"p_v")
		HX_STACK_LINE(755)
		bool tmp = this->exists;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(755)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(755)
		if ((tmp1)){
			HX_STACK_LINE(755)
			return null();
		}
		HX_STACK_LINE(755)
		this->__d = true;
		HX_STACK_LINE(755)
		::haxor::io::Buffer tmp2 = this->data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(755)
		::haxor::io::FloatArray b = ((::haxor::io::FloatArray)(tmp2));		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(755)
		Float tmp3 = p_v;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(755)
		b->Set((int)0,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialUniform_obj,SetFloat,(void))

Void MaterialUniform_obj::SetFloat2( Float p_x,Float p_y){
{
		HX_STACK_FRAME("haxor.graphics.material.MaterialUniform","SetFloat2",0xf23642c7,"haxor.graphics.material.MaterialUniform.SetFloat2","haxor/graphics/material/Material.hx",756,0xe49118e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_LINE(756)
		bool tmp = this->exists;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(756)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(756)
		if ((tmp1)){
			HX_STACK_LINE(756)
			return null();
		}
		HX_STACK_LINE(756)
		this->__d = true;
		HX_STACK_LINE(756)
		::haxor::io::Buffer tmp2 = this->data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(756)
		::haxor::io::FloatArray b = ((::haxor::io::FloatArray)(tmp2));		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(756)
		Float tmp3 = p_x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(756)
		b->Set((int)0,tmp3);
		HX_STACK_LINE(756)
		Float tmp4 = p_y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(756)
		b->Set((int)1,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MaterialUniform_obj,SetFloat2,(void))

Void MaterialUniform_obj::SetFloat3( Float p_x,Float p_y,Float p_z){
{
		HX_STACK_FRAME("haxor.graphics.material.MaterialUniform","SetFloat3",0xf23642c8,"haxor.graphics.material.MaterialUniform.SetFloat3","haxor/graphics/material/Material.hx",757,0xe49118e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_ARG(p_z,"p_z")
		HX_STACK_LINE(757)
		bool tmp = this->exists;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(757)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(757)
		if ((tmp1)){
			HX_STACK_LINE(757)
			return null();
		}
		HX_STACK_LINE(757)
		this->__d = true;
		HX_STACK_LINE(757)
		::haxor::io::Buffer tmp2 = this->data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(757)
		::haxor::io::FloatArray b = ((::haxor::io::FloatArray)(tmp2));		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(757)
		Float tmp3 = p_x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(757)
		b->Set((int)0,tmp3);
		HX_STACK_LINE(757)
		Float tmp4 = p_y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(757)
		b->Set((int)1,tmp4);
		HX_STACK_LINE(757)
		Float tmp5 = p_z;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(757)
		b->Set((int)2,tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(MaterialUniform_obj,SetFloat3,(void))

Void MaterialUniform_obj::SetFloat4( Float p_x,Float p_y,Float p_z,Float p_w){
{
		HX_STACK_FRAME("haxor.graphics.material.MaterialUniform","SetFloat4",0xf23642c9,"haxor.graphics.material.MaterialUniform.SetFloat4","haxor/graphics/material/Material.hx",758,0xe49118e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_ARG(p_z,"p_z")
		HX_STACK_ARG(p_w,"p_w")
		HX_STACK_LINE(758)
		bool tmp = this->exists;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(758)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(758)
		if ((tmp1)){
			HX_STACK_LINE(758)
			return null();
		}
		HX_STACK_LINE(758)
		this->__d = true;
		HX_STACK_LINE(758)
		::haxor::io::Buffer tmp2 = this->data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(758)
		::haxor::io::FloatArray b = ((::haxor::io::FloatArray)(tmp2));		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(758)
		Float tmp3 = p_x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(758)
		b->Set((int)0,tmp3);
		HX_STACK_LINE(758)
		Float tmp4 = p_y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(758)
		b->Set((int)1,tmp4);
		HX_STACK_LINE(758)
		Float tmp5 = p_z;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(758)
		b->Set((int)2,tmp5);
		HX_STACK_LINE(758)
		Float tmp6 = p_w;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(758)
		b->Set((int)3,tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(MaterialUniform_obj,SetFloat4,(void))

Void MaterialUniform_obj::SetFloatArray( Array< Float > p_list){
{
		HX_STACK_FRAME("haxor.graphics.material.MaterialUniform","SetFloatArray",0x3af08e8e,"haxor.graphics.material.MaterialUniform.SetFloatArray","haxor/graphics/material/Material.hx",759,0xe49118e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_list,"p_list")
		HX_STACK_LINE(759)
		bool tmp = this->exists;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(759)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(759)
		if ((tmp1)){
			HX_STACK_LINE(759)
			return null();
		}
		HX_STACK_LINE(759)
		this->__d = true;
		HX_STACK_LINE(759)
		::haxor::io::Buffer tmp2 = this->data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(759)
		::haxor::io::FloatArray b = ((::haxor::io::FloatArray)(tmp2));		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(759)
		{
			HX_STACK_LINE(759)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(759)
			int _g = p_list->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(759)
			while((true)){
				HX_STACK_LINE(759)
				bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(759)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(759)
				if ((tmp4)){
					HX_STACK_LINE(759)
					break;
				}
				HX_STACK_LINE(759)
				int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(759)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(759)
				int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(759)
				Float tmp7 = p_list->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(759)
				b->Set(tmp6,tmp7);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialUniform_obj,SetFloatArray,(void))

Void MaterialUniform_obj::SetFloat2Array( Array< Float > p_list){
{
		HX_STACK_FRAME("haxor.graphics.material.MaterialUniform","SetFloat2Array",0x219c2952,"haxor.graphics.material.MaterialUniform.SetFloat2Array","haxor/graphics/material/Material.hx",760,0xe49118e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_list,"p_list")
		HX_STACK_LINE(760)
		bool tmp = this->exists;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(760)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(760)
		if ((tmp1)){
			HX_STACK_LINE(760)
			return null();
		}
		HX_STACK_LINE(760)
		this->__d = true;
		HX_STACK_LINE(760)
		::haxor::io::Buffer tmp2 = this->data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(760)
		::haxor::io::FloatArray b = ((::haxor::io::FloatArray)(tmp2));		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(760)
		{
			HX_STACK_LINE(760)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(760)
			int _g = p_list->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(760)
			while((true)){
				HX_STACK_LINE(760)
				bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(760)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(760)
				if ((tmp4)){
					HX_STACK_LINE(760)
					break;
				}
				HX_STACK_LINE(760)
				int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(760)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(760)
				int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(760)
				Float tmp7 = p_list->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(760)
				b->Set(tmp6,tmp7);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialUniform_obj,SetFloat2Array,(void))

Void MaterialUniform_obj::SetFloat3Array( Array< Float > p_list){
{
		HX_STACK_FRAME("haxor.graphics.material.MaterialUniform","SetFloat3Array",0x87f785b1,"haxor.graphics.material.MaterialUniform.SetFloat3Array","haxor/graphics/material/Material.hx",761,0xe49118e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_list,"p_list")
		HX_STACK_LINE(761)
		bool tmp = this->exists;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(761)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(761)
		if ((tmp1)){
			HX_STACK_LINE(761)
			return null();
		}
		HX_STACK_LINE(761)
		this->__d = true;
		HX_STACK_LINE(761)
		::haxor::io::Buffer tmp2 = this->data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(761)
		::haxor::io::FloatArray b = ((::haxor::io::FloatArray)(tmp2));		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(761)
		{
			HX_STACK_LINE(761)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(761)
			int _g = p_list->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(761)
			while((true)){
				HX_STACK_LINE(761)
				bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(761)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(761)
				if ((tmp4)){
					HX_STACK_LINE(761)
					break;
				}
				HX_STACK_LINE(761)
				int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(761)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(761)
				int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(761)
				Float tmp7 = p_list->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(761)
				b->Set(tmp6,tmp7);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialUniform_obj,SetFloat3Array,(void))

Void MaterialUniform_obj::SetFloat4Array( Array< Float > p_list){
{
		HX_STACK_FRAME("haxor.graphics.material.MaterialUniform","SetFloat4Array",0xee52e210,"haxor.graphics.material.MaterialUniform.SetFloat4Array","haxor/graphics/material/Material.hx",762,0xe49118e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_list,"p_list")
		HX_STACK_LINE(762)
		bool tmp = this->exists;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(762)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(762)
		if ((tmp1)){
			HX_STACK_LINE(762)
			return null();
		}
		HX_STACK_LINE(762)
		this->__d = true;
		HX_STACK_LINE(762)
		::haxor::io::Buffer tmp2 = this->data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(762)
		::haxor::io::FloatArray b = ((::haxor::io::FloatArray)(tmp2));		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(762)
		{
			HX_STACK_LINE(762)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(762)
			int _g = p_list->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(762)
			while((true)){
				HX_STACK_LINE(762)
				bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(762)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(762)
				if ((tmp4)){
					HX_STACK_LINE(762)
					break;
				}
				HX_STACK_LINE(762)
				int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(762)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(762)
				int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(762)
				Float tmp7 = p_list->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(762)
				b->Set(tmp6,tmp7);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialUniform_obj,SetFloat4Array,(void))

Void MaterialUniform_obj::SetInt( int p_v){
{
		HX_STACK_FRAME("haxor.graphics.material.MaterialUniform","SetInt",0x3cd4a49e,"haxor.graphics.material.MaterialUniform.SetInt","haxor/graphics/material/Material.hx",764,0xe49118e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_v,"p_v")
		HX_STACK_LINE(764)
		bool tmp = this->exists;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(764)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(764)
		if ((tmp1)){
			HX_STACK_LINE(764)
			return null();
		}
		HX_STACK_LINE(764)
		this->__d = true;
		HX_STACK_LINE(764)
		::haxor::io::Buffer tmp2 = this->data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(764)
		::haxor::io::Int32Array b = ((::haxor::io::Int32Array)(tmp2));		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(764)
		int tmp3 = p_v;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(764)
		b->Set((int)0,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialUniform_obj,SetInt,(void))

Void MaterialUniform_obj::SetInt2( int p_x,int p_y){
{
		HX_STACK_FRAME("haxor.graphics.material.MaterialUniform","SetInt2",0xfd3b65d4,"haxor.graphics.material.MaterialUniform.SetInt2","haxor/graphics/material/Material.hx",765,0xe49118e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_LINE(765)
		bool tmp = this->exists;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(765)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(765)
		if ((tmp1)){
			HX_STACK_LINE(765)
			return null();
		}
		HX_STACK_LINE(765)
		this->__d = true;
		HX_STACK_LINE(765)
		::haxor::io::Buffer tmp2 = this->data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(765)
		::haxor::io::Int32Array b = ((::haxor::io::Int32Array)(tmp2));		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(765)
		int tmp3 = p_x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(765)
		b->Set((int)0,tmp3);
		HX_STACK_LINE(765)
		int tmp4 = p_y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(765)
		b->Set((int)1,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MaterialUniform_obj,SetInt2,(void))

Void MaterialUniform_obj::SetInt3( int p_x,int p_y,int p_z){
{
		HX_STACK_FRAME("haxor.graphics.material.MaterialUniform","SetInt3",0xfd3b65d5,"haxor.graphics.material.MaterialUniform.SetInt3","haxor/graphics/material/Material.hx",766,0xe49118e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_ARG(p_z,"p_z")
		HX_STACK_LINE(766)
		bool tmp = this->exists;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(766)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(766)
		if ((tmp1)){
			HX_STACK_LINE(766)
			return null();
		}
		HX_STACK_LINE(766)
		this->__d = true;
		HX_STACK_LINE(766)
		::haxor::io::Buffer tmp2 = this->data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(766)
		::haxor::io::Int32Array b = ((::haxor::io::Int32Array)(tmp2));		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(766)
		int tmp3 = p_x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(766)
		b->Set((int)0,tmp3);
		HX_STACK_LINE(766)
		int tmp4 = p_y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(766)
		b->Set((int)1,tmp4);
		HX_STACK_LINE(766)
		int tmp5 = p_z;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(766)
		b->Set((int)2,tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(MaterialUniform_obj,SetInt3,(void))

Void MaterialUniform_obj::SetInt4( int p_x,int p_y,int p_z,int p_w){
{
		HX_STACK_FRAME("haxor.graphics.material.MaterialUniform","SetInt4",0xfd3b65d6,"haxor.graphics.material.MaterialUniform.SetInt4","haxor/graphics/material/Material.hx",767,0xe49118e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_ARG(p_z,"p_z")
		HX_STACK_ARG(p_w,"p_w")
		HX_STACK_LINE(767)
		bool tmp = this->exists;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(767)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(767)
		if ((tmp1)){
			HX_STACK_LINE(767)
			return null();
		}
		HX_STACK_LINE(767)
		this->__d = true;
		HX_STACK_LINE(767)
		::haxor::io::Buffer tmp2 = this->data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(767)
		::haxor::io::Int32Array b = ((::haxor::io::Int32Array)(tmp2));		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(767)
		int tmp3 = p_x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(767)
		b->Set((int)0,tmp3);
		HX_STACK_LINE(767)
		int tmp4 = p_y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(767)
		b->Set((int)1,tmp4);
		HX_STACK_LINE(767)
		int tmp5 = p_z;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(767)
		b->Set((int)2,tmp5);
		HX_STACK_LINE(767)
		int tmp6 = p_w;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(767)
		b->Set((int)3,tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(MaterialUniform_obj,SetInt4,(void))

Void MaterialUniform_obj::SetIntArray( Array< int > p_list){
{
		HX_STACK_FRAME("haxor.graphics.material.MaterialUniform","SetIntArray",0x2ef8bc1b,"haxor.graphics.material.MaterialUniform.SetIntArray","haxor/graphics/material/Material.hx",768,0xe49118e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_list,"p_list")
		HX_STACK_LINE(768)
		bool tmp = this->exists;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(768)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(768)
		if ((tmp1)){
			HX_STACK_LINE(768)
			return null();
		}
		HX_STACK_LINE(768)
		this->__d = true;
		HX_STACK_LINE(768)
		::haxor::io::Buffer tmp2 = this->data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(768)
		::haxor::io::Int32Array b = ((::haxor::io::Int32Array)(tmp2));		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(768)
		{
			HX_STACK_LINE(768)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(768)
			int _g = p_list->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(768)
			while((true)){
				HX_STACK_LINE(768)
				bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(768)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(768)
				if ((tmp4)){
					HX_STACK_LINE(768)
					break;
				}
				HX_STACK_LINE(768)
				int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(768)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(768)
				int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(768)
				int tmp7 = p_list->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(768)
				b->Set(tmp6,tmp7);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialUniform_obj,SetIntArray,(void))

Void MaterialUniform_obj::SetInt2Array( Array< int > p_list){
{
		HX_STACK_FRAME("haxor.graphics.material.MaterialUniform","SetInt2Array",0xb4bbd725,"haxor.graphics.material.MaterialUniform.SetInt2Array","haxor/graphics/material/Material.hx",769,0xe49118e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_list,"p_list")
		HX_STACK_LINE(769)
		bool tmp = this->exists;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(769)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(769)
		if ((tmp1)){
			HX_STACK_LINE(769)
			return null();
		}
		HX_STACK_LINE(769)
		this->__d = true;
		HX_STACK_LINE(769)
		::haxor::io::Buffer tmp2 = this->data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(769)
		::haxor::io::Int32Array b = ((::haxor::io::Int32Array)(tmp2));		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(769)
		{
			HX_STACK_LINE(769)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(769)
			int _g = p_list->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(769)
			while((true)){
				HX_STACK_LINE(769)
				bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(769)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(769)
				if ((tmp4)){
					HX_STACK_LINE(769)
					break;
				}
				HX_STACK_LINE(769)
				int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(769)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(769)
				int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(769)
				int tmp7 = p_list->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(769)
				b->Set(tmp6,tmp7);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialUniform_obj,SetInt2Array,(void))

Void MaterialUniform_obj::SetInt3Array( Array< int > p_list){
{
		HX_STACK_FRAME("haxor.graphics.material.MaterialUniform","SetInt3Array",0x1b173384,"haxor.graphics.material.MaterialUniform.SetInt3Array","haxor/graphics/material/Material.hx",770,0xe49118e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_list,"p_list")
		HX_STACK_LINE(770)
		bool tmp = this->exists;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(770)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(770)
		if ((tmp1)){
			HX_STACK_LINE(770)
			return null();
		}
		HX_STACK_LINE(770)
		this->__d = true;
		HX_STACK_LINE(770)
		::haxor::io::Buffer tmp2 = this->data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(770)
		::haxor::io::Int32Array b = ((::haxor::io::Int32Array)(tmp2));		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(770)
		{
			HX_STACK_LINE(770)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(770)
			int _g = p_list->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(770)
			while((true)){
				HX_STACK_LINE(770)
				bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(770)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(770)
				if ((tmp4)){
					HX_STACK_LINE(770)
					break;
				}
				HX_STACK_LINE(770)
				int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(770)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(770)
				int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(770)
				int tmp7 = p_list->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(770)
				b->Set(tmp6,tmp7);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialUniform_obj,SetInt3Array,(void))

Void MaterialUniform_obj::SetInt4Array( Array< int > p_list){
{
		HX_STACK_FRAME("haxor.graphics.material.MaterialUniform","SetInt4Array",0x81728fe3,"haxor.graphics.material.MaterialUniform.SetInt4Array","haxor/graphics/material/Material.hx",771,0xe49118e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_list,"p_list")
		HX_STACK_LINE(771)
		bool tmp = this->exists;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(771)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(771)
		if ((tmp1)){
			HX_STACK_LINE(771)
			return null();
		}
		HX_STACK_LINE(771)
		this->__d = true;
		HX_STACK_LINE(771)
		::haxor::io::Buffer tmp2 = this->data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(771)
		::haxor::io::Int32Array b = ((::haxor::io::Int32Array)(tmp2));		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(771)
		{
			HX_STACK_LINE(771)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(771)
			int _g = p_list->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(771)
			while((true)){
				HX_STACK_LINE(771)
				bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(771)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(771)
				if ((tmp4)){
					HX_STACK_LINE(771)
					break;
				}
				HX_STACK_LINE(771)
				int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(771)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(771)
				int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(771)
				int tmp7 = p_list->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(771)
				b->Set(tmp6,tmp7);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialUniform_obj,SetInt4Array,(void))

Void MaterialUniform_obj::Refresh( ){
{
		HX_STACK_FRAME("haxor.graphics.material.MaterialUniform","Refresh",0xdf1cba8a,"haxor.graphics.material.MaterialUniform.Refresh","haxor/graphics/material/Material.hx",773,0xe49118e6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(773)
		bool tmp = this->exists;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(773)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(773)
		if ((tmp1)){
			HX_STACK_LINE(773)
			return null();
		}
		HX_STACK_LINE(773)
		this->__d = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MaterialUniform_obj,Refresh,(void))

Void MaterialUniform_obj::SetTexture( ::haxor::graphics::texture::Texture p_texture){
{
		HX_STACK_FRAME("haxor.graphics.material.MaterialUniform","SetTexture",0xb21c640a,"haxor.graphics.material.MaterialUniform.SetTexture","haxor/graphics/material/Material.hx",776,0xe49118e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_texture,"p_texture")
		HX_STACK_LINE(777)
		bool tmp = this->exists;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(777)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(777)
		if ((tmp1)){
			HX_STACK_LINE(777)
			return null();
		}
		HX_STACK_LINE(778)
		::haxor::graphics::texture::Texture tmp2 = p_texture;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(778)
		::haxor::graphics::texture::Texture tmp3 = this->texture;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(778)
		bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(778)
		if ((tmp4)){
			HX_STACK_LINE(778)
			return null();
		}
		HX_STACK_LINE(779)
		::haxor::graphics::texture::Texture tmp5 = this->texture;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(779)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(779)
		if ((tmp6)){
			HX_STACK_LINE(779)
			this->__d = true;
		}
		HX_STACK_LINE(780)
		::haxor::io::Buffer tmp7 = this->data;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(780)
		::haxor::io::Int32Array b = ((::haxor::io::Int32Array)(tmp7));		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(781)
		::haxor::graphics::texture::Texture tmp8 = this->texture;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(781)
		bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(781)
		int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(781)
		if ((tmp9)){
			HX_STACK_LINE(781)
			tmp10 = (int)-1;
		}
		else{
			HX_STACK_LINE(781)
			::haxor::graphics::texture::Texture tmp11 = this->texture;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(781)
			tmp10 = tmp11->__slot;
		}
		HX_STACK_LINE(781)
		int ts = tmp10;		HX_STACK_VAR(ts,"ts");
		HX_STACK_LINE(782)
		::haxor::graphics::texture::Texture tmp11 = this->texture;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(782)
		bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(782)
		if ((tmp12)){
			HX_STACK_LINE(782)
			::haxor::graphics::texture::Texture tmp13 = this->texture;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(782)
			tmp13->__slot = (int)-1;
		}
		HX_STACK_LINE(783)
		this->texture = p_texture;
		HX_STACK_LINE(784)
		::haxor::graphics::texture::Texture tmp13 = this->texture;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(784)
		bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(784)
		if ((tmp14)){
			HX_STACK_LINE(784)
			::haxor::graphics::texture::Texture tmp15 = this->texture;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(784)
			tmp15->__slot = ts;
		}
		HX_STACK_LINE(785)
		int tmp15 = ts;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(785)
		b->Set((int)0,tmp15);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialUniform_obj,SetTexture,(void))

Void MaterialUniform_obj::SetMatrix4( ::haxor::math::Matrix4 m,hx::Null< bool >  __o_t){
bool t = __o_t.Default(false);
	HX_STACK_FRAME("haxor.graphics.material.MaterialUniform","SetMatrix4",0xa6a2de02,"haxor.graphics.material.MaterialUniform.SetMatrix4","haxor/graphics/material/Material.hx",789,0xe49118e6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(m,"m")
	HX_STACK_ARG(t,"t")
{
		HX_STACK_LINE(790)
		bool tmp = this->exists;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(790)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(790)
		if ((tmp1)){
			HX_STACK_LINE(790)
			return null();
		}
		HX_STACK_LINE(790)
		this->__d = true;
		HX_STACK_LINE(791)
		this->transposed = t;
		HX_STACK_LINE(792)
		::haxor::io::Buffer tmp2 = this->data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(792)
		::haxor::io::FloatArray b = ((::haxor::io::FloatArray)(tmp2));		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(794)
		bool tmp3 = t;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(794)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(794)
		if ((tmp4)){
			HX_STACK_LINE(796)
			Float tmp5 = m->m00;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(796)
			b->Set((int)0,tmp5);
			HX_STACK_LINE(796)
			Float tmp6 = m->m01;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(796)
			b->Set((int)1,tmp6);
			HX_STACK_LINE(796)
			Float tmp7 = m->m02;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(796)
			b->Set((int)2,tmp7);
			HX_STACK_LINE(796)
			Float tmp8 = m->m03;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(796)
			b->Set((int)3,tmp8);
			HX_STACK_LINE(797)
			Float tmp9 = m->m10;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(797)
			b->Set((int)4,tmp9);
			HX_STACK_LINE(797)
			Float tmp10 = m->m11;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(797)
			b->Set((int)5,tmp10);
			HX_STACK_LINE(797)
			Float tmp11 = m->m12;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(797)
			b->Set((int)6,tmp11);
			HX_STACK_LINE(797)
			Float tmp12 = m->m13;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(797)
			b->Set((int)7,tmp12);
			HX_STACK_LINE(798)
			Float tmp13 = m->m20;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(798)
			b->Set((int)8,tmp13);
			HX_STACK_LINE(798)
			Float tmp14 = m->m21;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(798)
			b->Set((int)9,tmp14);
			HX_STACK_LINE(798)
			Float tmp15 = m->m22;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(798)
			b->Set((int)10,tmp15);
			HX_STACK_LINE(798)
			Float tmp16 = m->m23;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(798)
			b->Set((int)11,tmp16);
			HX_STACK_LINE(799)
			Float tmp17 = m->m30;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(799)
			b->Set((int)12,tmp17);
			HX_STACK_LINE(799)
			Float tmp18 = m->m31;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(799)
			b->Set((int)13,tmp18);
			HX_STACK_LINE(799)
			Float tmp19 = m->m32;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(799)
			b->Set((int)14,tmp19);
			HX_STACK_LINE(799)
			Float tmp20 = m->m33;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(799)
			b->Set((int)15,tmp20);
		}
		else{
			HX_STACK_LINE(803)
			Float tmp5 = m->m00;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(803)
			b->Set((int)0,tmp5);
			HX_STACK_LINE(803)
			Float tmp6 = m->m10;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(803)
			b->Set((int)1,tmp6);
			HX_STACK_LINE(803)
			Float tmp7 = m->m20;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(803)
			b->Set((int)2,tmp7);
			HX_STACK_LINE(803)
			Float tmp8 = m->m30;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(803)
			b->Set((int)3,tmp8);
			HX_STACK_LINE(804)
			Float tmp9 = m->m01;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(804)
			b->Set((int)4,tmp9);
			HX_STACK_LINE(804)
			Float tmp10 = m->m11;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(804)
			b->Set((int)5,tmp10);
			HX_STACK_LINE(804)
			Float tmp11 = m->m21;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(804)
			b->Set((int)6,tmp11);
			HX_STACK_LINE(804)
			Float tmp12 = m->m31;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(804)
			b->Set((int)7,tmp12);
			HX_STACK_LINE(805)
			Float tmp13 = m->m02;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(805)
			b->Set((int)8,tmp13);
			HX_STACK_LINE(805)
			Float tmp14 = m->m12;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(805)
			b->Set((int)9,tmp14);
			HX_STACK_LINE(805)
			Float tmp15 = m->m22;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(805)
			b->Set((int)10,tmp15);
			HX_STACK_LINE(805)
			Float tmp16 = m->m32;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(805)
			b->Set((int)11,tmp16);
			HX_STACK_LINE(806)
			Float tmp17 = m->m03;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(806)
			b->Set((int)12,tmp17);
			HX_STACK_LINE(806)
			Float tmp18 = m->m13;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(806)
			b->Set((int)13,tmp18);
			HX_STACK_LINE(806)
			Float tmp19 = m->m23;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(806)
			b->Set((int)14,tmp19);
			HX_STACK_LINE(806)
			Float tmp20 = m->m33;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(806)
			b->Set((int)15,tmp20);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MaterialUniform_obj,SetMatrix4,(void))

Void MaterialUniform_obj::SetVector2( ::haxor::math::Vector2 p_v){
{
		HX_STACK_FRAME("haxor.graphics.material.MaterialUniform","SetVector2",0xedd8953e,"haxor.graphics.material.MaterialUniform.SetVector2","haxor/graphics/material/Material.hx",810,0xe49118e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_v,"p_v")
		HX_STACK_LINE(810)
		Float tmp = p_v->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(810)
		Float tmp1 = p_v->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(810)
		this->SetFloat2(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialUniform_obj,SetVector2,(void))

Void MaterialUniform_obj::SetVector3( ::haxor::math::Vector3 p_v){
{
		HX_STACK_FRAME("haxor.graphics.material.MaterialUniform","SetVector3",0xedd8953f,"haxor.graphics.material.MaterialUniform.SetVector3","haxor/graphics/material/Material.hx",811,0xe49118e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_v,"p_v")
		HX_STACK_LINE(811)
		Float tmp = p_v->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(811)
		Float tmp1 = p_v->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(811)
		Float tmp2 = p_v->z;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(811)
		this->SetFloat3(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialUniform_obj,SetVector3,(void))

Void MaterialUniform_obj::SetVector4( ::haxor::math::Vector4 p_v){
{
		HX_STACK_FRAME("haxor.graphics.material.MaterialUniform","SetVector4",0xedd89540,"haxor.graphics.material.MaterialUniform.SetVector4","haxor/graphics/material/Material.hx",812,0xe49118e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_v,"p_v")
		HX_STACK_LINE(812)
		Float tmp = p_v->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(812)
		Float tmp1 = p_v->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(812)
		Float tmp2 = p_v->z;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(812)
		Float tmp3 = p_v->w;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(812)
		this->SetFloat4(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialUniform_obj,SetVector4,(void))

Void MaterialUniform_obj::SetColor( ::haxor::math::Color p_color){
{
		HX_STACK_FRAME("haxor.graphics.material.MaterialUniform","SetColor",0x22f992d2,"haxor.graphics.material.MaterialUniform.SetColor","haxor/graphics/material/Material.hx",813,0xe49118e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_color,"p_color")
		HX_STACK_LINE(813)
		Float tmp = p_color->r;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(813)
		Float tmp1 = p_color->g;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(813)
		Float tmp2 = p_color->b;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(813)
		Float tmp3 = p_color->a;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(813)
		this->SetFloat4(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialUniform_obj,SetColor,(void))


MaterialUniform_obj::MaterialUniform_obj()
{
}

void MaterialUniform_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MaterialUniform);
	HX_MARK_MEMBER_NAME(__cid,"__cid");
	HX_MARK_MEMBER_NAME(__d,"__d");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(transposed,"transposed");
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(isFloat,"isFloat");
	HX_MARK_MEMBER_NAME(exists,"exists");
	HX_MARK_END_CLASS();
}

void MaterialUniform_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__cid,"__cid");
	HX_VISIT_MEMBER_NAME(__d,"__d");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(transposed,"transposed");
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(isFloat,"isFloat");
	HX_VISIT_MEMBER_NAME(exists,"exists");
}

Dynamic MaterialUniform_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__d") ) { return __d; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"__cid") ) { return __cid; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { return offset; }
		if (HX_FIELD_EQ(inName,"exists") ) { return exists; }
		if (HX_FIELD_EQ(inName,"SetInt") ) { return SetInt_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { return texture; }
		if (HX_FIELD_EQ(inName,"isFloat") ) { return isFloat; }
		if (HX_FIELD_EQ(inName,"SetInt2") ) { return SetInt2_dyn(); }
		if (HX_FIELD_EQ(inName,"SetInt3") ) { return SetInt3_dyn(); }
		if (HX_FIELD_EQ(inName,"SetInt4") ) { return SetInt4_dyn(); }
		if (HX_FIELD_EQ(inName,"Refresh") ) { return Refresh_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"SetFloat") ) { return SetFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"SetColor") ) { return SetColor_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"SetFloat2") ) { return SetFloat2_dyn(); }
		if (HX_FIELD_EQ(inName,"SetFloat3") ) { return SetFloat3_dyn(); }
		if (HX_FIELD_EQ(inName,"SetFloat4") ) { return SetFloat4_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"transposed") ) { return transposed; }
		if (HX_FIELD_EQ(inName,"SetTexture") ) { return SetTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"SetMatrix4") ) { return SetMatrix4_dyn(); }
		if (HX_FIELD_EQ(inName,"SetVector2") ) { return SetVector2_dyn(); }
		if (HX_FIELD_EQ(inName,"SetVector3") ) { return SetVector3_dyn(); }
		if (HX_FIELD_EQ(inName,"SetVector4") ) { return SetVector4_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"SetIntArray") ) { return SetIntArray_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"SetInt2Array") ) { return SetInt2Array_dyn(); }
		if (HX_FIELD_EQ(inName,"SetInt3Array") ) { return SetInt3Array_dyn(); }
		if (HX_FIELD_EQ(inName,"SetInt4Array") ) { return SetInt4Array_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SetFloatArray") ) { return SetFloatArray_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"SetFloat2Array") ) { return SetFloat2Array_dyn(); }
		if (HX_FIELD_EQ(inName,"SetFloat3Array") ) { return SetFloat3Array_dyn(); }
		if (HX_FIELD_EQ(inName,"SetFloat4Array") ) { return SetFloat4Array_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MaterialUniform_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__d") ) { __d=inValue.Cast< bool >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::haxor::io::Buffer >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"__cid") ) { __cid=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"exists") ) { exists=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { texture=inValue.Cast< ::haxor::graphics::texture::Texture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isFloat") ) { isFloat=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"transposed") ) { transposed=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MaterialUniform_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void MaterialUniform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__cid","\xde","\xdb","\x27","\xf2"));
	outFields->push(HX_HCSTRING("__d","\x44","\x69","\x48","\x00"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("transposed","\xcb","\x19","\x37","\x5d"));
	outFields->push(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"));
	outFields->push(HX_HCSTRING("isFloat","\x52","\x69","\x1c","\x9f"));
	outFields->push(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(MaterialUniform_obj,__cid),HX_HCSTRING("__cid","\xde","\xdb","\x27","\xf2")},
	{hx::fsBool,(int)offsetof(MaterialUniform_obj,__d),HX_HCSTRING("__d","\x44","\x69","\x48","\x00")},
	{hx::fsString,(int)offsetof(MaterialUniform_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsInt,(int)offsetof(MaterialUniform_obj,offset),HX_HCSTRING("offset","\x93","\x97","\x3f","\x60")},
	{hx::fsObject /*::haxor::io::Buffer*/ ,(int)offsetof(MaterialUniform_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsBool,(int)offsetof(MaterialUniform_obj,transposed),HX_HCSTRING("transposed","\xcb","\x19","\x37","\x5d")},
	{hx::fsObject /*::haxor::graphics::texture::Texture*/ ,(int)offsetof(MaterialUniform_obj,texture),HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e")},
	{hx::fsBool,(int)offsetof(MaterialUniform_obj,isFloat),HX_HCSTRING("isFloat","\x52","\x69","\x1c","\x9f")},
	{hx::fsBool,(int)offsetof(MaterialUniform_obj,exists),HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__cid","\xde","\xdb","\x27","\xf2"),
	HX_HCSTRING("__d","\x44","\x69","\x48","\x00"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("transposed","\xcb","\x19","\x37","\x5d"),
	HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"),
	HX_HCSTRING("isFloat","\x52","\x69","\x1c","\x9f"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
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
	HX_HCSTRING("Refresh","\xbb","\x01","\x72","\xba"),
	HX_HCSTRING("SetTexture","\x79","\xf1","\x70","\xe8"),
	HX_HCSTRING("SetMatrix4","\x71","\x6b","\xf7","\xdc"),
	HX_HCSTRING("SetVector2","\xad","\x22","\x2d","\x24"),
	HX_HCSTRING("SetVector3","\xae","\x22","\x2d","\x24"),
	HX_HCSTRING("SetVector4","\xaf","\x22","\x2d","\x24"),
	HX_HCSTRING("SetColor","\x81","\x96","\x42","\x32"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MaterialUniform_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MaterialUniform_obj::__mClass,"__mClass");
};

#endif

hx::Class MaterialUniform_obj::__mClass;

void MaterialUniform_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.graphics.material.MaterialUniform","\x3d","\x32","\x92","\x91");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &MaterialUniform_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MaterialUniform_obj >;
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

void MaterialUniform_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/graphics/material/Material.hx",677,0xe49118e6)
		{
			hx::Anon __result = hx::Anon_obj::Create();
			struct _Function_1_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/graphics/material/Material.hx",677,0xe49118e6)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						struct _Function_2_1{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/graphics/material/Material.hx",677,0xe49118e6)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , _Function_2_1::Block(),false);
						struct _Function_2_2{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/graphics/material/Material.hx",677,0xe49118e6)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60") , _Function_2_2::Block(),false);
						struct _Function_2_3{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/graphics/material/Material.hx",677,0xe49118e6)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("data","\x2a","\x56","\x63","\x42") , _Function_2_3::Block(),false);
						struct _Function_2_4{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/graphics/material/Material.hx",677,0xe49118e6)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("transposed","\xcb","\x19","\x37","\x5d") , _Function_2_4::Block(),false);
						struct _Function_2_5{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/graphics/material/Material.hx",677,0xe49118e6)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e") , _Function_2_5::Block(),false);
						struct _Function_2_6{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/graphics/material/Material.hx",677,0xe49118e6)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("isFloat","\x52","\x69","\x1c","\x9f") , _Function_2_6::Block(),false);
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
