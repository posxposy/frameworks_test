#include <hxcpp.h>

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
#ifndef INCLUDED_haxor_graphics_GL
#include <haxor/graphics/GL.h>
#endif
#ifndef INCLUDED_haxor_graphics_material_Shader
#include <haxor/graphics/material/Shader.h>
#endif
#ifndef INCLUDED_haxor_graphics_material_ShaderCompileResult
#include <haxor/graphics/material/ShaderCompileResult.h>
#endif
namespace haxor{
namespace graphics{
namespace material{

Void Shader_obj::__construct(::String __o_p_vs,::String __o_p_fs)
{
HX_STACK_FRAME("haxor.graphics.material.Shader","new",0x2a1209a7,"haxor.graphics.material.Shader.new","haxor/graphics/material/Shader.hx",116,0x97658f68)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_p_vs,"p_vs")
HX_STACK_ARG(__o_p_fs,"p_fs")
::String p_vs = __o_p_vs.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
::String p_fs = __o_p_fs.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(117)
	super::__construct(null());
	HX_STACK_LINE(118)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(118)
	{
		HX_STACK_LINE(118)
		::haxor::context::MaterialContext tmp1 = ::haxor::context::EngineContext_obj::material;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(118)
		::haxor::context::UID _this = tmp1->sid;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(118)
		int tmp2 = _this->m_cache->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(118)
		bool tmp3 = (tmp2 <= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(118)
		if ((tmp3)){
			HX_STACK_LINE(118)
			tmp = (_this->m_id)++;
		}
		else{
			HX_STACK_LINE(118)
			tmp = _this->m_cache->shift();
		}
	}
	HX_STACK_LINE(118)
	this->__cid = tmp;
	HX_STACK_LINE(119)
	this->vertex = p_vs;
	HX_STACK_LINE(120)
	this->fragment = p_fs;
	HX_STACK_LINE(121)
	this->preprocessor = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(122)
	::haxor::graphics::material::ShaderCompileResult tmp1 = ::haxor::graphics::material::ShaderCompileResult_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(122)
	this->compilation = tmp1;
	HX_STACK_LINE(123)
	int tmp2 = (int)18;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(123)
	this->precision = tmp2;
	HX_STACK_LINE(124)
	Array< ::Dynamic > tmp3 = ::haxor::graphics::material::Shader_obj::list;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(124)
	tmp3->push(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(125)
	bool tmp4 = (p_vs != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(125)
	if ((tmp4)){
		HX_STACK_LINE(125)
		bool tmp5 = (p_fs != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(125)
		if ((tmp5)){
			HX_STACK_LINE(125)
			this->Compile();
		}
	}
}
;
	return null();
}

//Shader_obj::~Shader_obj() { }

Dynamic Shader_obj::__CreateEmpty() { return  new Shader_obj; }
hx::ObjectPtr< Shader_obj > Shader_obj::__new(::String __o_p_vs,::String __o_p_fs)
{  hx::ObjectPtr< Shader_obj > _result_ = new Shader_obj();
	_result_->__construct(__o_p_vs,__o_p_fs);
	return _result_;}

Dynamic Shader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Shader_obj > _result_ = new Shader_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

bool Shader_obj::get_hasError( ){
	HX_STACK_FRAME("haxor.graphics.material.Shader","get_hasError",0x4c75aff0,"haxor.graphics.material.Shader.get_hasError","haxor/graphics/material/Shader.hx",104,0x97658f68)
	HX_STACK_THIS(this)
	HX_STACK_LINE(104)
	::haxor::graphics::material::ShaderCompileResult tmp = this->compilation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(104)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(104)
	if ((tmp1)){
		HX_STACK_LINE(104)
		return false;
	}
	HX_STACK_LINE(104)
	::haxor::graphics::material::ShaderCompileResult tmp2 = this->compilation;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(104)
	bool tmp3 = tmp2->get_success();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(104)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(104)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,get_hasError,return )

::haxor::graphics::material::ShaderCompileResult Shader_obj::Compile( ){
	HX_STACK_FRAME("haxor.graphics.material.Shader","Compile",0xea02361a,"haxor.graphics.material.Shader.Compile","haxor/graphics/material/Shader.hx",132,0x97658f68)
	HX_STACK_THIS(this)
	HX_STACK_LINE(133)
	::haxor::context::MaterialContext tmp = ::haxor::context::EngineContext_obj::material;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(133)
	::haxor::graphics::material::ShaderCompileResult tmp1 = tmp->CompileShader(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(133)
	::haxor::graphics::material::ShaderCompileResult tmp2 = this->compilation = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(133)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,Compile,return )

Void Shader_obj::OnDestroy( ){
{
		HX_STACK_FRAME("haxor.graphics.material.Shader","OnDestroy",0x7a26ae02,"haxor.graphics.material.Shader.OnDestroy","haxor/graphics/material/Shader.hx",140,0x97658f68)
		HX_STACK_THIS(this)
		HX_STACK_LINE(141)
		Array< ::Dynamic > tmp = ::haxor::graphics::material::Shader_obj::list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(141)
		tmp->remove(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(142)
		::haxor::context::MaterialContext tmp1 = ::haxor::context::EngineContext_obj::material;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(142)
		tmp1->DestroyShader(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


Array< ::Dynamic > Shader_obj::list;

int Shader_obj::get_globalPrecision( ){
	HX_STACK_FRAME("haxor.graphics.material.Shader","get_globalPrecision",0xbe9105b9,"haxor.graphics.material.Shader.get_globalPrecision","haxor/graphics/material/Shader.hx",27,0x97658f68)
	HX_STACK_LINE(27)
	int tmp = ::haxor::graphics::material::Shader_obj::m_global_precision;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,get_globalPrecision,return )

int Shader_obj::set_globalPrecision( int v){
	HX_STACK_FRAME("haxor.graphics.material.Shader","set_globalPrecision",0xfb2df8c5,"haxor.graphics.material.Shader.set_globalPrecision","haxor/graphics/material/Shader.hx",28,0x97658f68)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(28)
	::haxor::graphics::material::Shader_obj::m_global_precision = v;
	HX_STACK_LINE(28)
	{
		HX_STACK_LINE(28)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(28)
		Array< ::Dynamic > tmp = ::haxor::graphics::material::Shader_obj::list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(28)
		Array< ::Dynamic > _g1 = tmp;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(28)
		while((true)){
			HX_STACK_LINE(28)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(28)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(28)
			if ((tmp2)){
				HX_STACK_LINE(28)
				break;
			}
			HX_STACK_LINE(28)
			::haxor::graphics::material::Shader tmp3 = _g1->__get(_g).StaticCast< ::haxor::graphics::material::Shader >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(28)
			::haxor::graphics::material::Shader s = tmp3;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(28)
			++(_g);
			HX_STACK_LINE(28)
			s->Compile();
		}
	}
	HX_STACK_LINE(28)
	int tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,set_globalPrecision,return )

int Shader_obj::m_global_precision;

::String Shader_obj::get_globalPreprocessor( ){
	HX_STACK_FRAME("haxor.graphics.material.Shader","get_globalPreprocessor",0xa89acf34,"haxor.graphics.material.Shader.get_globalPreprocessor","haxor/graphics/material/Shader.hx",35,0x97658f68)
	HX_STACK_LINE(35)
	::String tmp = ::haxor::graphics::material::Shader_obj::m_global_preprocessor;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,get_globalPreprocessor,return )

::String Shader_obj::set_globalPreprocessor( ::String v){
	HX_STACK_FRAME("haxor.graphics.material.Shader","set_globalPreprocessor",0xdc464ba8,"haxor.graphics.material.Shader.set_globalPreprocessor","haxor/graphics/material/Shader.hx",36,0x97658f68)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(36)
	::haxor::graphics::material::Shader_obj::m_global_preprocessor = v;
	HX_STACK_LINE(36)
	{
		HX_STACK_LINE(36)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(36)
		Array< ::Dynamic > tmp = ::haxor::graphics::material::Shader_obj::list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		Array< ::Dynamic > _g1 = tmp;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(36)
		while((true)){
			HX_STACK_LINE(36)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(36)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(36)
			if ((tmp2)){
				HX_STACK_LINE(36)
				break;
			}
			HX_STACK_LINE(36)
			::haxor::graphics::material::Shader tmp3 = _g1->__get(_g).StaticCast< ::haxor::graphics::material::Shader >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(36)
			::haxor::graphics::material::Shader s = tmp3;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(36)
			++(_g);
			HX_STACK_LINE(36)
			s->Compile();
		}
	}
	HX_STACK_LINE(36)
	::String tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,set_globalPreprocessor,return )

::String Shader_obj::m_global_preprocessor;

::haxor::graphics::material::Shader Shader_obj::Flat;

::haxor::graphics::material::Shader Shader_obj::get_Flat( ){
	HX_STACK_FRAME("haxor.graphics.material.Shader","get_Flat",0x2ebbb8bb,"haxor.graphics.material.Shader.get_Flat","haxor/graphics/material/Shader.hx",43,0x97658f68)
	HX_STACK_LINE(43)
	::haxor::graphics::material::Shader tmp = ::haxor::graphics::material::Shader_obj::m_flat_shader;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(43)
	::haxor::graphics::material::Shader tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(43)
	if ((tmp1)){
		HX_STACK_LINE(43)
		::String tmp3 = ::haxor::context::ShaderContext_obj::vs_flat;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(43)
		::String tmp4 = ::haxor::context::ShaderContext_obj::fs_flat;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(43)
		::haxor::graphics::material::Shader tmp5 = ::haxor::graphics::material::Shader_obj::__new(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(43)
		tmp2 = ::haxor::graphics::material::Shader_obj::m_flat_shader = tmp5;
	}
	else{
		HX_STACK_LINE(43)
		tmp2 = ::haxor::graphics::material::Shader_obj::m_flat_shader;
	}
	HX_STACK_LINE(43)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,get_Flat,return )

::haxor::graphics::material::Shader Shader_obj::m_flat_shader;

::haxor::graphics::material::Shader Shader_obj::FlatTexture;

::haxor::graphics::material::Shader Shader_obj::get_FlatTexture( ){
	HX_STACK_FRAME("haxor.graphics.material.Shader","get_FlatTexture",0x64b69560,"haxor.graphics.material.Shader.get_FlatTexture","haxor/graphics/material/Shader.hx",50,0x97658f68)
	HX_STACK_LINE(50)
	::haxor::graphics::material::Shader tmp = ::haxor::graphics::material::Shader_obj::m_flat_texture_shader;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(50)
	::haxor::graphics::material::Shader tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(50)
	if ((tmp1)){
		HX_STACK_LINE(50)
		::String tmp3 = ::haxor::context::ShaderContext_obj::vs_flat_texture;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(50)
		::String tmp4 = ::haxor::context::ShaderContext_obj::fs_flat_texture;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(50)
		::haxor::graphics::material::Shader tmp5 = ::haxor::graphics::material::Shader_obj::__new(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(50)
		tmp2 = ::haxor::graphics::material::Shader_obj::m_flat_texture_shader = tmp5;
	}
	else{
		HX_STACK_LINE(50)
		tmp2 = ::haxor::graphics::material::Shader_obj::m_flat_texture_shader;
	}
	HX_STACK_LINE(50)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,get_FlatTexture,return )

::haxor::graphics::material::Shader Shader_obj::m_flat_texture_shader;

::haxor::graphics::material::Shader Shader_obj::FlatTextureSkin;

::haxor::graphics::material::Shader Shader_obj::get_FlatTextureSkin( ){
	HX_STACK_FRAME("haxor.graphics.material.Shader","get_FlatTextureSkin",0x29cb07fd,"haxor.graphics.material.Shader.get_FlatTextureSkin","haxor/graphics/material/Shader.hx",58,0x97658f68)
	HX_STACK_LINE(59)
	::haxor::graphics::material::Shader tmp = ::haxor::graphics::material::Shader_obj::m_flat_texture_skin_shader;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(59)
	if ((tmp1)){
		HX_STACK_LINE(59)
		::haxor::graphics::material::Shader tmp2 = ::haxor::graphics::material::Shader_obj::m_flat_texture_skin_shader;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(59)
		return tmp2;
	}
	HX_STACK_LINE(60)
	::String tmp2 = ::haxor::context::ShaderContext_obj::vs_flat_skin_texture;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(60)
	::String tmp3 = ::haxor::context::ShaderContext_obj::fs_flat_skin_texture;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(60)
	::haxor::graphics::material::Shader tmp4 = ::haxor::graphics::material::Shader_obj::__new(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(60)
	::haxor::graphics::material::Shader tmp5 = ::haxor::graphics::material::Shader_obj::m_flat_texture_skin_shader = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(60)
	::haxor::graphics::material::Shader shd = tmp5;		HX_STACK_VAR(shd,"shd");
	HX_STACK_LINE(61)
	int tmp6 = ::haxor::graphics::GL_obj::get_MAX_UNIFORM_BONES();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(61)
	::String tmp7 = (HX_HCSTRING("#define MAX_BONES ","\x8e","\x48","\xc3","\x0c") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(61)
	::String tmp8 = (tmp7 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(61)
	hx::AddEq(shd->preprocessor,tmp8);
	HX_STACK_LINE(62)
	bool tmp9 = ::haxor::graphics::GL_obj::BONE_TEXTURE;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(62)
	if ((tmp9)){
		HX_STACK_LINE(62)
		hx::AddEq(shd->preprocessor,HX_HCSTRING("#define BONE_TEXTURE\n","\x88","\x67","\xd1","\xe9"));
	}
	HX_STACK_LINE(63)
	shd->Compile();
	HX_STACK_LINE(64)
	::haxor::graphics::material::Shader tmp10 = shd;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(64)
	return tmp10;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,get_FlatTextureSkin,return )

::haxor::graphics::material::Shader Shader_obj::m_flat_texture_skin_shader;

::haxor::graphics::material::Shader Shader_obj::FlatParticle;

::haxor::graphics::material::Shader Shader_obj::get_FlatParticle( ){
	HX_STACK_FRAME("haxor.graphics.material.Shader","get_FlatParticle",0xc1ce6621,"haxor.graphics.material.Shader.get_FlatParticle","haxor/graphics/material/Shader.hx",72,0x97658f68)
	HX_STACK_LINE(72)
	::haxor::graphics::material::Shader tmp = ::haxor::graphics::material::Shader_obj::m_flat_particle_shader;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(72)
	::haxor::graphics::material::Shader tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(72)
	if ((tmp1)){
		HX_STACK_LINE(72)
		::String tmp3 = ::haxor::context::ShaderContext_obj::vs_flat_particle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(72)
		::String tmp4 = ::haxor::context::ShaderContext_obj::fs_flat_particle;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(72)
		::haxor::graphics::material::Shader tmp5 = ::haxor::graphics::material::Shader_obj::__new(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(72)
		tmp2 = ::haxor::graphics::material::Shader_obj::m_flat_particle_shader = tmp5;
	}
	else{
		HX_STACK_LINE(72)
		tmp2 = ::haxor::graphics::material::Shader_obj::m_flat_particle_shader;
	}
	HX_STACK_LINE(72)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,get_FlatParticle,return )

::haxor::graphics::material::Shader Shader_obj::m_flat_particle_shader;


Shader_obj::Shader_obj()
{
}

void Shader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Shader);
	HX_MARK_MEMBER_NAME(vertex,"vertex");
	HX_MARK_MEMBER_NAME(fragment,"fragment");
	HX_MARK_MEMBER_NAME(preprocessor,"preprocessor");
	HX_MARK_MEMBER_NAME(precision,"precision");
	HX_MARK_MEMBER_NAME(compilation,"compilation");
	::haxor::core::Resource_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Shader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(vertex,"vertex");
	HX_VISIT_MEMBER_NAME(fragment,"fragment");
	HX_VISIT_MEMBER_NAME(preprocessor,"preprocessor");
	HX_VISIT_MEMBER_NAME(precision,"precision");
	HX_VISIT_MEMBER_NAME(compilation,"compilation");
	::haxor::core::Resource_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Shader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"vertex") ) { return vertex; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"Compile") ) { return Compile_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fragment") ) { return fragment; }
		if (HX_FIELD_EQ(inName,"hasError") ) { if (inCallProp == hx::paccAlways) return get_hasError(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"precision") ) { return precision; }
		if (HX_FIELD_EQ(inName,"OnDestroy") ) { return OnDestroy_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"compilation") ) { return compilation; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"preprocessor") ) { return preprocessor; }
		if (HX_FIELD_EQ(inName,"get_hasError") ) { return get_hasError_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Shader_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { outValue = list; return true;  }
		if (HX_FIELD_EQ(inName,"Flat") ) { outValue = inCallProp == hx::paccAlways ? get_Flat() : Flat; return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_Flat") ) { outValue = get_Flat_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"FlatTexture") ) { outValue = inCallProp == hx::paccAlways ? get_FlatTexture() : FlatTexture; return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"FlatParticle") ) { outValue = inCallProp == hx::paccAlways ? get_FlatParticle() : FlatParticle; return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"m_flat_shader") ) { outValue = m_flat_shader; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"globalPrecision") ) { if (inCallProp == hx::paccAlways) { outValue = get_globalPrecision(); return true; } }
		if (HX_FIELD_EQ(inName,"get_FlatTexture") ) { outValue = get_FlatTexture_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"FlatTextureSkin") ) { outValue = inCallProp == hx::paccAlways ? get_FlatTextureSkin() : FlatTextureSkin; return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_FlatParticle") ) { outValue = get_FlatParticle_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"m_global_precision") ) { outValue = m_global_precision; return true;  }
		if (HX_FIELD_EQ(inName,"globalPreprocessor") ) { if (inCallProp == hx::paccAlways) { outValue = get_globalPreprocessor(); return true; } }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_globalPrecision") ) { outValue = get_globalPrecision_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_globalPrecision") ) { outValue = set_globalPrecision_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_FlatTextureSkin") ) { outValue = get_FlatTextureSkin_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"m_global_preprocessor") ) { outValue = m_global_preprocessor; return true;  }
		if (HX_FIELD_EQ(inName,"m_flat_texture_shader") ) { outValue = m_flat_texture_shader; return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_globalPreprocessor") ) { outValue = get_globalPreprocessor_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_globalPreprocessor") ) { outValue = set_globalPreprocessor_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"m_flat_particle_shader") ) { outValue = m_flat_particle_shader; return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"m_flat_texture_skin_shader") ) { outValue = m_flat_texture_skin_shader; return true;  }
	}
	return false;
}

Dynamic Shader_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"vertex") ) { vertex=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fragment") ) { fragment=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"precision") ) { precision=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"compilation") ) { compilation=inValue.Cast< ::haxor::graphics::material::ShaderCompileResult >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"preprocessor") ) { preprocessor=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Shader_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		if (HX_FIELD_EQ(inName,"Flat") ) { Flat=ioValue.Cast< ::haxor::graphics::material::Shader >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"FlatTexture") ) { FlatTexture=ioValue.Cast< ::haxor::graphics::material::Shader >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"FlatParticle") ) { FlatParticle=ioValue.Cast< ::haxor::graphics::material::Shader >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"m_flat_shader") ) { m_flat_shader=ioValue.Cast< ::haxor::graphics::material::Shader >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"globalPrecision") ) { if (inCallProp == hx::paccAlways)  ioValue = set_globalPrecision(ioValue); }
		if (HX_FIELD_EQ(inName,"FlatTextureSkin") ) { FlatTextureSkin=ioValue.Cast< ::haxor::graphics::material::Shader >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"m_global_precision") ) { m_global_precision=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"globalPreprocessor") ) { if (inCallProp == hx::paccAlways)  ioValue = set_globalPreprocessor(ioValue); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"m_global_preprocessor") ) { m_global_preprocessor=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"m_flat_texture_shader") ) { m_flat_texture_shader=ioValue.Cast< ::haxor::graphics::material::Shader >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"m_flat_particle_shader") ) { m_flat_particle_shader=ioValue.Cast< ::haxor::graphics::material::Shader >(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"m_flat_texture_skin_shader") ) { m_flat_texture_skin_shader=ioValue.Cast< ::haxor::graphics::material::Shader >(); return true; }
	}
	return false;
}

void Shader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1"));
	outFields->push(HX_HCSTRING("fragment","\xd0","\x5f","\xe5","\xad"));
	outFields->push(HX_HCSTRING("preprocessor","\xcf","\xc0","\x38","\xd7"));
	outFields->push(HX_HCSTRING("precision","\x3e","\xd5","\xc7","\x80"));
	outFields->push(HX_HCSTRING("hasError","\x0e","\x16","\x82","\xff"));
	outFields->push(HX_HCSTRING("compilation","\xc3","\xd6","\xdc","\x70"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Shader_obj,vertex),HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1")},
	{hx::fsString,(int)offsetof(Shader_obj,fragment),HX_HCSTRING("fragment","\xd0","\x5f","\xe5","\xad")},
	{hx::fsString,(int)offsetof(Shader_obj,preprocessor),HX_HCSTRING("preprocessor","\xcf","\xc0","\x38","\xd7")},
	{hx::fsInt,(int)offsetof(Shader_obj,precision),HX_HCSTRING("precision","\x3e","\xd5","\xc7","\x80")},
	{hx::fsObject /*::haxor::graphics::material::ShaderCompileResult*/ ,(int)offsetof(Shader_obj,compilation),HX_HCSTRING("compilation","\xc3","\xd6","\xdc","\x70")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Shader_obj::list,HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47")},
	{hx::fsInt,(void *) &Shader_obj::m_global_precision,HX_HCSTRING("m_global_precision","\x74","\xdf","\x2e","\xac")},
	{hx::fsString,(void *) &Shader_obj::m_global_preprocessor,HX_HCSTRING("m_global_preprocessor","\x59","\x7c","\x05","\x46")},
	{hx::fsObject /*::haxor::graphics::material::Shader*/ ,(void *) &Shader_obj::Flat,HX_HCSTRING("Flat","\xd9","\x37","\x97","\x2e")},
	{hx::fsObject /*::haxor::graphics::material::Shader*/ ,(void *) &Shader_obj::m_flat_shader,HX_HCSTRING("m_flat_shader","\x19","\xbc","\xf4","\xf4")},
	{hx::fsObject /*::haxor::graphics::material::Shader*/ ,(void *) &Shader_obj::FlatTexture,HX_HCSTRING("FlatTexture","\x02","\x56","\xc2","\xa0")},
	{hx::fsObject /*::haxor::graphics::material::Shader*/ ,(void *) &Shader_obj::m_flat_texture_shader,HX_HCSTRING("m_flat_texture_shader","\x3d","\xba","\x4f","\xf4")},
	{hx::fsObject /*::haxor::graphics::material::Shader*/ ,(void *) &Shader_obj::FlatTextureSkin,HX_HCSTRING("FlatTextureSkin","\x9f","\xc1","\xa0","\xfd")},
	{hx::fsObject /*::haxor::graphics::material::Shader*/ ,(void *) &Shader_obj::m_flat_texture_skin_shader,HX_HCSTRING("m_flat_texture_skin_shader","\xcf","\x01","\x87","\x75")},
	{hx::fsObject /*::haxor::graphics::material::Shader*/ ,(void *) &Shader_obj::FlatParticle,HX_HCSTRING("FlatParticle","\x3f","\x33","\x0b","\x10")},
	{hx::fsObject /*::haxor::graphics::material::Shader*/ ,(void *) &Shader_obj::m_flat_particle_shader,HX_HCSTRING("m_flat_particle_shader","\xca","\x4b","\x5c","\xc9")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1"),
	HX_HCSTRING("fragment","\xd0","\x5f","\xe5","\xad"),
	HX_HCSTRING("preprocessor","\xcf","\xc0","\x38","\xd7"),
	HX_HCSTRING("precision","\x3e","\xd5","\xc7","\x80"),
	HX_HCSTRING("get_hasError","\x17","\xca","\x9b","\xb4"),
	HX_HCSTRING("compilation","\xc3","\xd6","\xdc","\x70"),
	HX_HCSTRING("Compile","\x53","\x4d","\xc0","\x50"),
	HX_HCSTRING("OnDestroy","\x7b","\xc5","\x03","\x9e"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Shader_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Shader_obj::list,"list");
	HX_MARK_MEMBER_NAME(Shader_obj::m_global_precision,"m_global_precision");
	HX_MARK_MEMBER_NAME(Shader_obj::m_global_preprocessor,"m_global_preprocessor");
	HX_MARK_MEMBER_NAME(Shader_obj::Flat,"Flat");
	HX_MARK_MEMBER_NAME(Shader_obj::m_flat_shader,"m_flat_shader");
	HX_MARK_MEMBER_NAME(Shader_obj::FlatTexture,"FlatTexture");
	HX_MARK_MEMBER_NAME(Shader_obj::m_flat_texture_shader,"m_flat_texture_shader");
	HX_MARK_MEMBER_NAME(Shader_obj::FlatTextureSkin,"FlatTextureSkin");
	HX_MARK_MEMBER_NAME(Shader_obj::m_flat_texture_skin_shader,"m_flat_texture_skin_shader");
	HX_MARK_MEMBER_NAME(Shader_obj::FlatParticle,"FlatParticle");
	HX_MARK_MEMBER_NAME(Shader_obj::m_flat_particle_shader,"m_flat_particle_shader");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Shader_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Shader_obj::list,"list");
	HX_VISIT_MEMBER_NAME(Shader_obj::m_global_precision,"m_global_precision");
	HX_VISIT_MEMBER_NAME(Shader_obj::m_global_preprocessor,"m_global_preprocessor");
	HX_VISIT_MEMBER_NAME(Shader_obj::Flat,"Flat");
	HX_VISIT_MEMBER_NAME(Shader_obj::m_flat_shader,"m_flat_shader");
	HX_VISIT_MEMBER_NAME(Shader_obj::FlatTexture,"FlatTexture");
	HX_VISIT_MEMBER_NAME(Shader_obj::m_flat_texture_shader,"m_flat_texture_shader");
	HX_VISIT_MEMBER_NAME(Shader_obj::FlatTextureSkin,"FlatTextureSkin");
	HX_VISIT_MEMBER_NAME(Shader_obj::m_flat_texture_skin_shader,"m_flat_texture_skin_shader");
	HX_VISIT_MEMBER_NAME(Shader_obj::FlatParticle,"FlatParticle");
	HX_VISIT_MEMBER_NAME(Shader_obj::m_flat_particle_shader,"m_flat_particle_shader");
};

#endif

hx::Class Shader_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("get_globalPrecision","\x72","\x8e","\x71","\x1d"),
	HX_HCSTRING("set_globalPrecision","\x7e","\x81","\x0e","\x5a"),
	HX_HCSTRING("m_global_precision","\x74","\xdf","\x2e","\xac"),
	HX_HCSTRING("get_globalPreprocessor","\x1b","\xc0","\x07","\x35"),
	HX_HCSTRING("set_globalPreprocessor","\x8f","\x3c","\xb3","\x68"),
	HX_HCSTRING("m_global_preprocessor","\x59","\x7c","\x05","\x46"),
	HX_HCSTRING("Flat","\xd9","\x37","\x97","\x2e"),
	HX_HCSTRING("get_Flat","\x62","\xf3","\x51","\xae"),
	HX_HCSTRING("m_flat_shader","\x19","\xbc","\xf4","\xf4"),
	HX_HCSTRING("FlatTexture","\x02","\x56","\xc2","\xa0"),
	HX_HCSTRING("get_FlatTexture","\x99","\x0d","\xa4","\x61"),
	HX_HCSTRING("m_flat_texture_shader","\x3d","\xba","\x4f","\xf4"),
	HX_HCSTRING("FlatTextureSkin","\x9f","\xc1","\xa0","\xfd"),
	HX_HCSTRING("get_FlatTextureSkin","\xb6","\x90","\xab","\x88"),
	HX_HCSTRING("m_flat_texture_skin_shader","\xcf","\x01","\x87","\x75"),
	HX_HCSTRING("FlatParticle","\x3f","\x33","\x0b","\x10"),
	HX_HCSTRING("get_FlatParticle","\xc8","\x1f","\xaa","\x14"),
	HX_HCSTRING("m_flat_particle_shader","\xca","\x4b","\x5c","\xc9"),
	String(null()) };

void Shader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.graphics.material.Shader","\x35","\xaa","\x7c","\x7a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Shader_obj::__GetStatic;
	__mClass->mSetStaticField = &Shader_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Shader_obj >;
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

void Shader_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/graphics/material/Shader.hx",16,0x97658f68)
		{
			hx::Anon __result = hx::Anon_obj::Create();
			struct _Function_1_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/graphics/material/Shader.hx",16,0x97658f68)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						struct _Function_2_1{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/graphics/material/Shader.hx",16,0x97658f68)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1") , _Function_2_1::Block(),false);
						struct _Function_2_2{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/graphics/material/Shader.hx",16,0x97658f68)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("fragment","\xd0","\x5f","\xe5","\xad") , _Function_2_2::Block(),false);
						struct _Function_2_3{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/graphics/material/Shader.hx",16,0x97658f68)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("preprocessor","\xcf","\xc0","\x38","\xd7") , _Function_2_3::Block(),false);
						struct _Function_2_4{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/graphics/material/Shader.hx",16,0x97658f68)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("precision","\x3e","\xd5","\xc7","\x80") , _Function_2_4::Block(),false);
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
	list= Array_obj< ::Dynamic >::__new();
	m_global_precision= (int)0;
	m_global_preprocessor= HX_HCSTRING("","\x00","\x00","\x00","\x00");
}

} // end namespace haxor
} // end namespace graphics
} // end namespace material
