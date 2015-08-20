#include <hxcpp.h>

#ifndef INCLUDED_haxor_context_EngineContext
#include <haxor/context/EngineContext.h>
#endif
#ifndef INCLUDED_haxor_context_TextureContext
#include <haxor/context/TextureContext.h>
#endif
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_core_TextureType
#include <haxor/core/TextureType.h>
#endif
#ifndef INCLUDED_haxor_graphics_texture_Texture
#include <haxor/graphics/texture/Texture.h>
#endif
#ifndef INCLUDED_haxor_graphics_texture_Texture2D
#include <haxor/graphics/texture/Texture2D.h>
#endif
#ifndef INCLUDED_haxor_graphics_texture_TextureCube
#include <haxor/graphics/texture/TextureCube.h>
#endif
namespace haxor{
namespace graphics{
namespace texture{

Void TextureCube_obj::__construct()
{
HX_STACK_FRAME("haxor.graphics.texture.TextureCube","new",0x43f369b8,"haxor.graphics.texture.TextureCube.new","haxor/graphics/texture/TextureCube.hx",77,0x53e63459)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(78)
	Array< ::Dynamic > tmp = Array_obj< ::Dynamic >::__new().Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(78)
	this->m_faces = tmp;
	HX_STACK_LINE(79)
	super::__construct();
	HX_STACK_LINE(80)
	::haxor::context::TextureContext tmp1 = ::haxor::context::EngineContext_obj::texture;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(80)
	tmp1->Create(hx::ObjectPtr<OBJ_>(this));
}
;
	return null();
}

//TextureCube_obj::~TextureCube_obj() { }

Dynamic TextureCube_obj::__CreateEmpty() { return  new TextureCube_obj; }
hx::ObjectPtr< TextureCube_obj > TextureCube_obj::__new()
{  hx::ObjectPtr< TextureCube_obj > _result_ = new TextureCube_obj();
	_result_->__construct();
	return _result_;}

Dynamic TextureCube_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextureCube_obj > _result_ = new TextureCube_obj();
	_result_->__construct();
	return _result_;}

::haxor::graphics::texture::Texture TextureCube_obj::get_px( ){
	HX_STACK_FRAME("haxor.graphics.texture.TextureCube","get_px",0x88c0c6f9,"haxor.graphics.texture.TextureCube.get_px","haxor/graphics/texture/TextureCube.hx",18,0x53e63459)
	HX_STACK_THIS(this)
	HX_STACK_LINE(18)
	Array< ::Dynamic > tmp = this->m_faces;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	::haxor::graphics::texture::Texture tmp1 = tmp->__get((int)0).StaticCast< ::haxor::graphics::texture::Texture >();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(18)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextureCube_obj,get_px,return )

::haxor::graphics::texture::Texture TextureCube_obj::set_px( ::haxor::graphics::texture::Texture v){
	HX_STACK_FRAME("haxor.graphics.texture.TextureCube","set_px",0x55091b6d,"haxor.graphics.texture.TextureCube.set_px","haxor/graphics/texture/TextureCube.hx",19,0x53e63459)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(19)
	Array< ::Dynamic > tmp = this->m_faces;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	::haxor::graphics::texture::Texture tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	tmp[(int)0] = tmp1;
	HX_STACK_LINE(19)
	::haxor::graphics::texture::Texture tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(19)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextureCube_obj,set_px,return )

::haxor::graphics::texture::Texture TextureCube_obj::get_nx( ){
	HX_STACK_FRAME("haxor.graphics.texture.TextureCube","get_nx",0x88c0c53b,"haxor.graphics.texture.TextureCube.get_nx","haxor/graphics/texture/TextureCube.hx",26,0x53e63459)
	HX_STACK_THIS(this)
	HX_STACK_LINE(26)
	Array< ::Dynamic > tmp = this->m_faces;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	::haxor::graphics::texture::Texture tmp1 = tmp->__get((int)1).StaticCast< ::haxor::graphics::texture::Texture >();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextureCube_obj,get_nx,return )

::haxor::graphics::texture::Texture TextureCube_obj::set_nx( ::haxor::graphics::texture::Texture v){
	HX_STACK_FRAME("haxor.graphics.texture.TextureCube","set_nx",0x550919af,"haxor.graphics.texture.TextureCube.set_nx","haxor/graphics/texture/TextureCube.hx",27,0x53e63459)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(27)
	Array< ::Dynamic > tmp = this->m_faces;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	::haxor::graphics::texture::Texture tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	tmp[(int)1] = tmp1;
	HX_STACK_LINE(27)
	::haxor::graphics::texture::Texture tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(27)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextureCube_obj,set_nx,return )

::haxor::graphics::texture::Texture TextureCube_obj::get_py( ){
	HX_STACK_FRAME("haxor.graphics.texture.TextureCube","get_py",0x88c0c6fa,"haxor.graphics.texture.TextureCube.get_py","haxor/graphics/texture/TextureCube.hx",34,0x53e63459)
	HX_STACK_THIS(this)
	HX_STACK_LINE(34)
	Array< ::Dynamic > tmp = this->m_faces;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	::haxor::graphics::texture::Texture tmp1 = tmp->__get((int)2).StaticCast< ::haxor::graphics::texture::Texture >();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextureCube_obj,get_py,return )

::haxor::graphics::texture::Texture TextureCube_obj::set_py( ::haxor::graphics::texture::Texture v){
	HX_STACK_FRAME("haxor.graphics.texture.TextureCube","set_py",0x55091b6e,"haxor.graphics.texture.TextureCube.set_py","haxor/graphics/texture/TextureCube.hx",35,0x53e63459)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(35)
	Array< ::Dynamic > tmp = this->m_faces;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	::haxor::graphics::texture::Texture tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(35)
	tmp[(int)2] = tmp1;
	HX_STACK_LINE(35)
	::haxor::graphics::texture::Texture tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(35)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextureCube_obj,set_py,return )

::haxor::graphics::texture::Texture TextureCube_obj::get_ny( ){
	HX_STACK_FRAME("haxor.graphics.texture.TextureCube","get_ny",0x88c0c53c,"haxor.graphics.texture.TextureCube.get_ny","haxor/graphics/texture/TextureCube.hx",42,0x53e63459)
	HX_STACK_THIS(this)
	HX_STACK_LINE(42)
	Array< ::Dynamic > tmp = this->m_faces;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	::haxor::graphics::texture::Texture tmp1 = tmp->__get((int)3).StaticCast< ::haxor::graphics::texture::Texture >();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextureCube_obj,get_ny,return )

::haxor::graphics::texture::Texture TextureCube_obj::set_ny( ::haxor::graphics::texture::Texture v){
	HX_STACK_FRAME("haxor.graphics.texture.TextureCube","set_ny",0x550919b0,"haxor.graphics.texture.TextureCube.set_ny","haxor/graphics/texture/TextureCube.hx",43,0x53e63459)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(43)
	Array< ::Dynamic > tmp = this->m_faces;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	::haxor::graphics::texture::Texture tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(43)
	tmp[(int)3] = tmp1;
	HX_STACK_LINE(43)
	::haxor::graphics::texture::Texture tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(43)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextureCube_obj,set_ny,return )

::haxor::graphics::texture::Texture TextureCube_obj::get_pz( ){
	HX_STACK_FRAME("haxor.graphics.texture.TextureCube","get_pz",0x88c0c6fb,"haxor.graphics.texture.TextureCube.get_pz","haxor/graphics/texture/TextureCube.hx",50,0x53e63459)
	HX_STACK_THIS(this)
	HX_STACK_LINE(50)
	Array< ::Dynamic > tmp = this->m_faces;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	::haxor::graphics::texture::Texture tmp1 = tmp->__get((int)4).StaticCast< ::haxor::graphics::texture::Texture >();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(50)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextureCube_obj,get_pz,return )

::haxor::graphics::texture::Texture TextureCube_obj::set_pz( ::haxor::graphics::texture::Texture v){
	HX_STACK_FRAME("haxor.graphics.texture.TextureCube","set_pz",0x55091b6f,"haxor.graphics.texture.TextureCube.set_pz","haxor/graphics/texture/TextureCube.hx",51,0x53e63459)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(51)
	Array< ::Dynamic > tmp = this->m_faces;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	::haxor::graphics::texture::Texture tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(51)
	tmp[(int)4] = tmp1;
	HX_STACK_LINE(51)
	::haxor::graphics::texture::Texture tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(51)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextureCube_obj,set_pz,return )

::haxor::graphics::texture::Texture TextureCube_obj::get_nz( ){
	HX_STACK_FRAME("haxor.graphics.texture.TextureCube","get_nz",0x88c0c53d,"haxor.graphics.texture.TextureCube.get_nz","haxor/graphics/texture/TextureCube.hx",58,0x53e63459)
	HX_STACK_THIS(this)
	HX_STACK_LINE(58)
	Array< ::Dynamic > tmp = this->m_faces;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	::haxor::graphics::texture::Texture tmp1 = tmp->__get((int)5).StaticCast< ::haxor::graphics::texture::Texture >();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(58)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextureCube_obj,get_nz,return )

::haxor::graphics::texture::Texture TextureCube_obj::set_nz( ::haxor::graphics::texture::Texture v){
	HX_STACK_FRAME("haxor.graphics.texture.TextureCube","set_nz",0x550919b1,"haxor.graphics.texture.TextureCube.set_nz","haxor/graphics/texture/TextureCube.hx",59,0x53e63459)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(59)
	Array< ::Dynamic > tmp = this->m_faces;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	::haxor::graphics::texture::Texture tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(59)
	tmp[(int)5] = tmp1;
	HX_STACK_LINE(59)
	::haxor::graphics::texture::Texture tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(59)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextureCube_obj,set_nz,return )

::haxor::core::TextureType TextureCube_obj::get_type( ){
	HX_STACK_FRAME("haxor.graphics.texture.TextureCube","get_type",0xd26135eb,"haxor.graphics.texture.TextureCube.get_type","haxor/graphics/texture/TextureCube.hx",71,0x53e63459)
	HX_STACK_THIS(this)
	HX_STACK_LINE(71)
	return ::haxor::core::TextureType_obj::TextureCube;
}


Void TextureCube_obj::LoadCrossTexture( ::haxor::graphics::texture::Texture2D p_texture){
{
		HX_STACK_FRAME("haxor.graphics.texture.TextureCube","LoadCrossTexture",0xbe6a5449,"haxor.graphics.texture.TextureCube.LoadCrossTexture","haxor/graphics/texture/TextureCube.hx",88,0x53e63459)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_texture,"p_texture")
		HX_STACK_LINE(89)
		::haxor::context::TextureContext tmp = ::haxor::context::EngineContext_obj::texture;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(89)
		::haxor::graphics::texture::Texture2D tmp1 = p_texture;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(89)
		tmp->CrossToCubemap(hx::ObjectPtr<OBJ_>(this),tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextureCube_obj,LoadCrossTexture,(void))

Void TextureCube_obj::OnDestroy( ){
{
		HX_STACK_FRAME("haxor.graphics.texture.TextureCube","OnDestroy",0x823cf0d3,"haxor.graphics.texture.TextureCube.OnDestroy","haxor/graphics/texture/TextureCube.hx",96,0x53e63459)
		HX_STACK_THIS(this)
		HX_STACK_LINE(97)
		this->super::OnDestroy();
		HX_STACK_LINE(98)
		{
			HX_STACK_LINE(98)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(98)
			Array< ::Dynamic > tmp = this->m_faces;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(98)
			int _g = tmp->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(98)
			while((true)){
				HX_STACK_LINE(98)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(98)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(98)
				if ((tmp2)){
					HX_STACK_LINE(98)
					break;
				}
				HX_STACK_LINE(98)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(98)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(98)
				Array< ::Dynamic > tmp4 = this->m_faces;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(98)
				int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(98)
				::haxor::graphics::texture::Texture tmp6 = tmp4->__get(tmp5).StaticCast< ::haxor::graphics::texture::Texture >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(98)
				bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(98)
				if ((tmp7)){
					HX_STACK_LINE(98)
					Array< ::Dynamic > tmp8 = this->m_faces;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(98)
					int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(98)
					::haxor::graphics::texture::Texture tmp10 = tmp8->__get(tmp9).StaticCast< ::haxor::graphics::texture::Texture >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(98)
					::haxor::core::Resource_obj::Destroy(tmp10);
				}
			}
		}
	}
return null();
}



TextureCube_obj::TextureCube_obj()
{
}

void TextureCube_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextureCube);
	HX_MARK_MEMBER_NAME(p_px,"p_px");
	HX_MARK_MEMBER_NAME(p_nx,"p_nx");
	HX_MARK_MEMBER_NAME(p_py,"p_py");
	HX_MARK_MEMBER_NAME(p_ny,"p_ny");
	HX_MARK_MEMBER_NAME(p_pz,"p_pz");
	HX_MARK_MEMBER_NAME(p_nz,"p_nz");
	HX_MARK_MEMBER_NAME(m_faces,"m_faces");
	::haxor::graphics::texture::Texture_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextureCube_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(p_px,"p_px");
	HX_VISIT_MEMBER_NAME(p_nx,"p_nx");
	HX_VISIT_MEMBER_NAME(p_py,"p_py");
	HX_VISIT_MEMBER_NAME(p_ny,"p_ny");
	HX_VISIT_MEMBER_NAME(p_pz,"p_pz");
	HX_VISIT_MEMBER_NAME(p_nz,"p_nz");
	HX_VISIT_MEMBER_NAME(m_faces,"m_faces");
	::haxor::graphics::texture::Texture_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TextureCube_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"px") ) { if (inCallProp == hx::paccAlways) return get_px(); }
		if (HX_FIELD_EQ(inName,"nx") ) { if (inCallProp == hx::paccAlways) return get_nx(); }
		if (HX_FIELD_EQ(inName,"py") ) { if (inCallProp == hx::paccAlways) return get_py(); }
		if (HX_FIELD_EQ(inName,"ny") ) { if (inCallProp == hx::paccAlways) return get_ny(); }
		if (HX_FIELD_EQ(inName,"pz") ) { if (inCallProp == hx::paccAlways) return get_pz(); }
		if (HX_FIELD_EQ(inName,"nz") ) { if (inCallProp == hx::paccAlways) return get_nz(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"p_px") ) { return p_px; }
		if (HX_FIELD_EQ(inName,"p_nx") ) { return p_nx; }
		if (HX_FIELD_EQ(inName,"p_py") ) { return p_py; }
		if (HX_FIELD_EQ(inName,"p_ny") ) { return p_ny; }
		if (HX_FIELD_EQ(inName,"p_pz") ) { return p_pz; }
		if (HX_FIELD_EQ(inName,"p_nz") ) { return p_nz; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_px") ) { return get_px_dyn(); }
		if (HX_FIELD_EQ(inName,"set_px") ) { return set_px_dyn(); }
		if (HX_FIELD_EQ(inName,"get_nx") ) { return get_nx_dyn(); }
		if (HX_FIELD_EQ(inName,"set_nx") ) { return set_nx_dyn(); }
		if (HX_FIELD_EQ(inName,"get_py") ) { return get_py_dyn(); }
		if (HX_FIELD_EQ(inName,"set_py") ) { return set_py_dyn(); }
		if (HX_FIELD_EQ(inName,"get_ny") ) { return get_ny_dyn(); }
		if (HX_FIELD_EQ(inName,"set_ny") ) { return set_ny_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pz") ) { return get_pz_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pz") ) { return set_pz_dyn(); }
		if (HX_FIELD_EQ(inName,"get_nz") ) { return get_nz_dyn(); }
		if (HX_FIELD_EQ(inName,"set_nz") ) { return set_nz_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_faces") ) { return m_faces; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_type") ) { return get_type_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"OnDestroy") ) { return OnDestroy_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"LoadCrossTexture") ) { return LoadCrossTexture_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextureCube_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"px") ) { if (inCallProp == hx::paccAlways) return set_px(inValue); }
		if (HX_FIELD_EQ(inName,"nx") ) { if (inCallProp == hx::paccAlways) return set_nx(inValue); }
		if (HX_FIELD_EQ(inName,"py") ) { if (inCallProp == hx::paccAlways) return set_py(inValue); }
		if (HX_FIELD_EQ(inName,"ny") ) { if (inCallProp == hx::paccAlways) return set_ny(inValue); }
		if (HX_FIELD_EQ(inName,"pz") ) { if (inCallProp == hx::paccAlways) return set_pz(inValue); }
		if (HX_FIELD_EQ(inName,"nz") ) { if (inCallProp == hx::paccAlways) return set_nz(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"p_px") ) { p_px=inValue.Cast< ::haxor::graphics::texture::Texture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"p_nx") ) { p_nx=inValue.Cast< ::haxor::graphics::texture::Texture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"p_py") ) { p_py=inValue.Cast< ::haxor::graphics::texture::Texture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"p_ny") ) { p_ny=inValue.Cast< ::haxor::graphics::texture::Texture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"p_pz") ) { p_pz=inValue.Cast< ::haxor::graphics::texture::Texture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"p_nz") ) { p_nz=inValue.Cast< ::haxor::graphics::texture::Texture >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_faces") ) { m_faces=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TextureCube_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void TextureCube_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("px","\x08","\x62","\x00","\x00"));
	outFields->push(HX_HCSTRING("p_px","\xb7","\x5d","\x50","\x4a"));
	outFields->push(HX_HCSTRING("nx","\x4a","\x60","\x00","\x00"));
	outFields->push(HX_HCSTRING("p_nx","\xf9","\x5b","\x50","\x4a"));
	outFields->push(HX_HCSTRING("py","\x09","\x62","\x00","\x00"));
	outFields->push(HX_HCSTRING("p_py","\xb8","\x5d","\x50","\x4a"));
	outFields->push(HX_HCSTRING("ny","\x4b","\x60","\x00","\x00"));
	outFields->push(HX_HCSTRING("p_ny","\xfa","\x5b","\x50","\x4a"));
	outFields->push(HX_HCSTRING("pz","\x0a","\x62","\x00","\x00"));
	outFields->push(HX_HCSTRING("p_pz","\xb9","\x5d","\x50","\x4a"));
	outFields->push(HX_HCSTRING("nz","\x4c","\x60","\x00","\x00"));
	outFields->push(HX_HCSTRING("p_nz","\xfb","\x5b","\x50","\x4a"));
	outFields->push(HX_HCSTRING("m_faces","\xa4","\x2c","\xd3","\xab"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::graphics::texture::Texture*/ ,(int)offsetof(TextureCube_obj,p_px),HX_HCSTRING("p_px","\xb7","\x5d","\x50","\x4a")},
	{hx::fsObject /*::haxor::graphics::texture::Texture*/ ,(int)offsetof(TextureCube_obj,p_nx),HX_HCSTRING("p_nx","\xf9","\x5b","\x50","\x4a")},
	{hx::fsObject /*::haxor::graphics::texture::Texture*/ ,(int)offsetof(TextureCube_obj,p_py),HX_HCSTRING("p_py","\xb8","\x5d","\x50","\x4a")},
	{hx::fsObject /*::haxor::graphics::texture::Texture*/ ,(int)offsetof(TextureCube_obj,p_ny),HX_HCSTRING("p_ny","\xfa","\x5b","\x50","\x4a")},
	{hx::fsObject /*::haxor::graphics::texture::Texture*/ ,(int)offsetof(TextureCube_obj,p_pz),HX_HCSTRING("p_pz","\xb9","\x5d","\x50","\x4a")},
	{hx::fsObject /*::haxor::graphics::texture::Texture*/ ,(int)offsetof(TextureCube_obj,p_nz),HX_HCSTRING("p_nz","\xfb","\x5b","\x50","\x4a")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TextureCube_obj,m_faces),HX_HCSTRING("m_faces","\xa4","\x2c","\xd3","\xab")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get_px","\x51","\xf9","\x2f","\xa3"),
	HX_HCSTRING("set_px","\xc5","\x4d","\x78","\x6f"),
	HX_HCSTRING("p_px","\xb7","\x5d","\x50","\x4a"),
	HX_HCSTRING("get_nx","\x93","\xf7","\x2f","\xa3"),
	HX_HCSTRING("set_nx","\x07","\x4c","\x78","\x6f"),
	HX_HCSTRING("p_nx","\xf9","\x5b","\x50","\x4a"),
	HX_HCSTRING("get_py","\x52","\xf9","\x2f","\xa3"),
	HX_HCSTRING("set_py","\xc6","\x4d","\x78","\x6f"),
	HX_HCSTRING("p_py","\xb8","\x5d","\x50","\x4a"),
	HX_HCSTRING("get_ny","\x94","\xf7","\x2f","\xa3"),
	HX_HCSTRING("set_ny","\x08","\x4c","\x78","\x6f"),
	HX_HCSTRING("p_ny","\xfa","\x5b","\x50","\x4a"),
	HX_HCSTRING("get_pz","\x53","\xf9","\x2f","\xa3"),
	HX_HCSTRING("set_pz","\xc7","\x4d","\x78","\x6f"),
	HX_HCSTRING("p_pz","\xb9","\x5d","\x50","\x4a"),
	HX_HCSTRING("get_nz","\x95","\xf7","\x2f","\xa3"),
	HX_HCSTRING("set_nz","\x09","\x4c","\x78","\x6f"),
	HX_HCSTRING("p_nz","\xfb","\x5b","\x50","\x4a"),
	HX_HCSTRING("m_faces","\xa4","\x2c","\xd3","\xab"),
	HX_HCSTRING("get_type","\x43","\xae","\xc3","\xcc"),
	HX_HCSTRING("LoadCrossTexture","\xa1","\xe4","\x00","\x97"),
	HX_HCSTRING("OnDestroy","\x7b","\xc5","\x03","\x9e"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextureCube_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextureCube_obj::__mClass,"__mClass");
};

#endif

hx::Class TextureCube_obj::__mClass;

void TextureCube_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.graphics.texture.TextureCube","\xc6","\x6d","\xa6","\xab");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &TextureCube_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextureCube_obj >;
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
} // end namespace texture
