#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_graphics_mesh_Mesh
#include <haxor/graphics/mesh/Mesh.h>
#endif
#ifndef INCLUDED_haxor_graphics_mesh_MeshAttrib
#include <haxor/graphics/mesh/MeshAttrib.h>
#endif
#ifndef INCLUDED_haxor_graphics_mesh_MeshLayout
#include <haxor/graphics/mesh/MeshLayout.h>
#endif
#ifndef INCLUDED_haxor_io_Buffer
#include <haxor/io/Buffer.h>
#endif
#ifndef INCLUDED_haxor_io_FloatArray
#include <haxor/io/FloatArray.h>
#endif
#ifndef INCLUDED_haxor_math_AABB3
#include <haxor/math/AABB3.h>
#endif
#ifndef INCLUDED_haxor_math_Color
#include <haxor/math/Color.h>
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
namespace mesh{

Void MeshLayout_obj::__construct(::String __o_p_name)
{
HX_STACK_FRAME("haxor.graphics.mesh.MeshLayout","new",0x2a1bb8f3,"haxor.graphics.mesh.MeshLayout.new","haxor/graphics/mesh/MeshLayout.hx",80,0x92e5291c)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_p_name,"p_name")
::String p_name = __o_p_name.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(81)
	::String tmp = p_name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	super::__construct(tmp);
	HX_STACK_LINE(82)
	Dynamic tmp1 = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(82)
	this->m_vertex = tmp1;
	HX_STACK_LINE(83)
	Dynamic tmp2 = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(83)
	this->m_normal = tmp2;
	HX_STACK_LINE(84)
	Array< ::Dynamic > tmp3 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(84)
	this->m_color = tmp3;
	HX_STACK_LINE(85)
	Dynamic tmp4 = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(85)
	this->m_uv0 = tmp4;
	HX_STACK_LINE(86)
	Dynamic tmp5 = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(86)
	this->m_uv1 = tmp5;
	HX_STACK_LINE(87)
	Dynamic tmp6 = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(87)
	this->m_tangent = tmp6;
	HX_STACK_LINE(88)
	Dynamic tmp7 = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(88)
	this->m_binormal = tmp7;
}
;
	return null();
}

//MeshLayout_obj::~MeshLayout_obj() { }

Dynamic MeshLayout_obj::__CreateEmpty() { return  new MeshLayout_obj; }
hx::ObjectPtr< MeshLayout_obj > MeshLayout_obj::__new(::String __o_p_name)
{  hx::ObjectPtr< MeshLayout_obj > _result_ = new MeshLayout_obj();
	_result_->__construct(__o_p_name);
	return _result_;}

Dynamic MeshLayout_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MeshLayout_obj > _result_ = new MeshLayout_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Dynamic MeshLayout_obj::get_vertex( ){
	HX_STACK_FRAME("haxor.graphics.mesh.MeshLayout","get_vertex",0xce4beafa,"haxor.graphics.mesh.MeshLayout.get_vertex","haxor/graphics/mesh/MeshLayout.hx",26,0x92e5291c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(26)
	Dynamic tmp = this->m_vertex;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MeshLayout_obj,get_vertex,return )

Dynamic MeshLayout_obj::set_vertex( Dynamic v){
	HX_STACK_FRAME("haxor.graphics.mesh.MeshLayout","set_vertex",0xd1c9896e,"haxor.graphics.mesh.MeshLayout.set_vertex","haxor/graphics/mesh/MeshLayout.hx",27,0x92e5291c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(27)
	Dynamic tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	Dynamic tmp1 = this->UpdateAttribute(HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1"),tmp,false);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	Dynamic tmp2 = this->m_vertex = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(27)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(MeshLayout_obj,set_vertex,return )

Dynamic MeshLayout_obj::get_normal( ){
	HX_STACK_FRAME("haxor.graphics.mesh.MeshLayout","get_normal",0x5d6d81bd,"haxor.graphics.mesh.MeshLayout.get_normal","haxor/graphics/mesh/MeshLayout.hx",34,0x92e5291c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(34)
	Dynamic tmp = this->m_normal;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MeshLayout_obj,get_normal,return )

Dynamic MeshLayout_obj::set_normal( Dynamic v){
	HX_STACK_FRAME("haxor.graphics.mesh.MeshLayout","set_normal",0x60eb2031,"haxor.graphics.mesh.MeshLayout.set_normal","haxor/graphics/mesh/MeshLayout.hx",35,0x92e5291c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(35)
	Dynamic tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	Dynamic tmp1 = this->UpdateAttribute(HX_HCSTRING("normal","\x27","\x72","\x69","\x30"),tmp,false);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(35)
	Dynamic tmp2 = this->m_normal = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(35)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(MeshLayout_obj,set_normal,return )

Array< ::Dynamic > MeshLayout_obj::get_color( ){
	HX_STACK_FRAME("haxor.graphics.mesh.MeshLayout","get_color",0x1b7ee68d,"haxor.graphics.mesh.MeshLayout.get_color","haxor/graphics/mesh/MeshLayout.hx",43,0x92e5291c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(43)
	Array< ::Dynamic > tmp = this->m_color;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MeshLayout_obj,get_color,return )

Array< ::Dynamic > MeshLayout_obj::set_color( Array< ::Dynamic > v){
	HX_STACK_FRAME("haxor.graphics.mesh.MeshLayout","set_color",0xfecfd299,"haxor.graphics.mesh.MeshLayout.set_color","haxor/graphics/mesh/MeshLayout.hx",44,0x92e5291c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(44)
	Array< ::Dynamic > tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	Array< ::Dynamic > tmp1 = this->UpdateAttribute(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),tmp,true);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(44)
	Array< ::Dynamic > tmp2 = this->m_color = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(44)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(MeshLayout_obj,set_color,return )

Dynamic MeshLayout_obj::get_uv0( ){
	HX_STACK_FRAME("haxor.graphics.mesh.MeshLayout","get_uv0",0xda912559,"haxor.graphics.mesh.MeshLayout.get_uv0","haxor/graphics/mesh/MeshLayout.hx",51,0x92e5291c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(51)
	Dynamic tmp = this->m_uv0;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MeshLayout_obj,get_uv0,return )

Dynamic MeshLayout_obj::set_uv0( Dynamic v){
	HX_STACK_FRAME("haxor.graphics.mesh.MeshLayout","set_uv0",0xcd92b665,"haxor.graphics.mesh.MeshLayout.set_uv0","haxor/graphics/mesh/MeshLayout.hx",52,0x92e5291c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(52)
	Dynamic tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	Dynamic tmp1 = this->UpdateAttribute(HX_HCSTRING("uv0","\xaf","\x2e","\x59","\x00"),tmp,false);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(52)
	Dynamic tmp2 = this->m_uv0 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(52)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(MeshLayout_obj,set_uv0,return )

Dynamic MeshLayout_obj::get_uv1( ){
	HX_STACK_FRAME("haxor.graphics.mesh.MeshLayout","get_uv1",0xda91255a,"haxor.graphics.mesh.MeshLayout.get_uv1","haxor/graphics/mesh/MeshLayout.hx",59,0x92e5291c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(59)
	Dynamic tmp = this->m_uv1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MeshLayout_obj,get_uv1,return )

Dynamic MeshLayout_obj::set_uv1( Dynamic v){
	HX_STACK_FRAME("haxor.graphics.mesh.MeshLayout","set_uv1",0xcd92b666,"haxor.graphics.mesh.MeshLayout.set_uv1","haxor/graphics/mesh/MeshLayout.hx",60,0x92e5291c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(60)
	Dynamic tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(60)
	Dynamic tmp1 = this->UpdateAttribute(HX_HCSTRING("uv1","\xb0","\x2e","\x59","\x00"),tmp,false);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(60)
	Dynamic tmp2 = this->m_uv1 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(60)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(MeshLayout_obj,set_uv1,return )

Dynamic MeshLayout_obj::get_tangent( ){
	HX_STACK_FRAME("haxor.graphics.mesh.MeshLayout","get_tangent",0x7157306f,"haxor.graphics.mesh.MeshLayout.get_tangent","haxor/graphics/mesh/MeshLayout.hx",67,0x92e5291c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(67)
	Dynamic tmp = this->m_tangent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MeshLayout_obj,get_tangent,return )

Dynamic MeshLayout_obj::set_tangent( Dynamic v){
	HX_STACK_FRAME("haxor.graphics.mesh.MeshLayout","set_tangent",0x7bc4377b,"haxor.graphics.mesh.MeshLayout.set_tangent","haxor/graphics/mesh/MeshLayout.hx",68,0x92e5291c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(68)
	Dynamic tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	Dynamic tmp1 = this->UpdateAttribute(HX_HCSTRING("tangent","\xc5","\x9c","\xcd","\x3a"),tmp,false);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(68)
	Dynamic tmp2 = this->m_tangent = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(68)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(MeshLayout_obj,set_tangent,return )

Dynamic MeshLayout_obj::get_binormal( ){
	HX_STACK_FRAME("haxor.graphics.mesh.MeshLayout","get_binormal",0xa5de7844,"haxor.graphics.mesh.MeshLayout.get_binormal","haxor/graphics/mesh/MeshLayout.hx",75,0x92e5291c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(75)
	Dynamic tmp = this->m_binormal;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(75)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MeshLayout_obj,get_binormal,return )

Dynamic MeshLayout_obj::set_binormal( Dynamic v){
	HX_STACK_FRAME("haxor.graphics.mesh.MeshLayout","set_binormal",0xbad79bb8,"haxor.graphics.mesh.MeshLayout.set_binormal","haxor/graphics/mesh/MeshLayout.hx",76,0x92e5291c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(76)
	Dynamic tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(76)
	Dynamic tmp1 = this->UpdateAttribute(HX_HCSTRING("binormal","\x2e","\xd7","\x06","\x24"),tmp,false);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(76)
	Dynamic tmp2 = this->m_binormal = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(76)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(MeshLayout_obj,set_binormal,return )

Void MeshLayout_obj::GenerateBounds( ){
{
		HX_STACK_FRAME("haxor.graphics.mesh.MeshLayout","GenerateBounds",0x0109cdf7,"haxor.graphics.mesh.MeshLayout.GenerateBounds","haxor/graphics/mesh/MeshLayout.hx",95,0x92e5291c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(96)
		::haxor::math::AABB3 tmp = this->m_bounds;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(96)
		this->GenerateAttribBounds(HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1"),tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MeshLayout_obj,GenerateBounds,(void))

Dynamic MeshLayout_obj::UpdateAttribute( ::String p_name,Dynamic p_list,hx::Null< bool >  __o_p_is_color){
bool p_is_color = __o_p_is_color.Default(false);
	HX_STACK_FRAME("haxor.graphics.mesh.MeshLayout","UpdateAttribute",0x629341c6,"haxor.graphics.mesh.MeshLayout.UpdateAttribute","haxor/graphics/mesh/MeshLayout.hx",104,0x92e5291c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_name,"p_name")
	HX_STACK_ARG(p_list,"p_list")
	HX_STACK_ARG(p_is_color,"p_is_color")
{
		HX_STACK_LINE(105)
		bool tmp = (p_list == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(105)
		if ((tmp)){
			HX_STACK_LINE(105)
			::String tmp1 = p_name;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(105)
			this->Remove(tmp1);
			HX_STACK_LINE(105)
			Dynamic tmp2 = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(105)
			return tmp2;
		}
		HX_STACK_LINE(106)
		bool tmp1 = (p_list->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) <= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(106)
		if ((tmp1)){
			HX_STACK_LINE(106)
			::String tmp2 = p_name;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(106)
			this->Remove(tmp2);
			HX_STACK_LINE(106)
			Dynamic tmp3 = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(106)
			return tmp3;
		}
		HX_STACK_LINE(107)
		::String tmp2 = p_name;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(107)
		::haxor::graphics::mesh::MeshAttrib tmp3 = this->GetAttribute(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(107)
		::haxor::graphics::mesh::MeshAttrib a = tmp3;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(108)
		int off = (int)1;		HX_STACK_VAR(off,"off");
		HX_STACK_LINE(109)
		Dynamic tmp4 = p_list->__GetItem((int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(109)
		bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::haxor::math::Vector2 >());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(109)
		if ((tmp5)){
			HX_STACK_LINE(109)
			off = (int)2;
		}
		HX_STACK_LINE(110)
		Dynamic tmp6 = p_list->__GetItem((int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(110)
		bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::haxor::math::Vector3 >());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(110)
		if ((tmp7)){
			HX_STACK_LINE(110)
			off = (int)3;
		}
		HX_STACK_LINE(111)
		Dynamic tmp8 = p_list->__GetItem((int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(111)
		bool tmp9 = ::Std_obj::is(tmp8,hx::ClassOf< ::haxor::math::Vector4 >());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(111)
		if ((tmp9)){
			HX_STACK_LINE(111)
			off = (int)4;
		}
		HX_STACK_LINE(112)
		Dynamic tmp10 = p_list->__GetItem((int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(112)
		bool tmp11 = ::Std_obj::is(tmp10,hx::ClassOf< ::haxor::math::Color >());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(112)
		if ((tmp11)){
			HX_STACK_LINE(112)
			off = (int)4;
		}
		HX_STACK_LINE(113)
		bool tmp12 = (a == null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(113)
		if ((tmp12)){
			HX_STACK_LINE(113)
			::String tmp13 = p_name;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(113)
			::haxor::io::FloatArray tmp14 = ::haxor::io::FloatArray_obj::__new((int)1);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(113)
			int tmp15 = off;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(113)
			::haxor::graphics::mesh::MeshAttrib tmp16 = this->Set(tmp13,tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(113)
			a = tmp16;
		}
		HX_STACK_LINE(115)
		int p = (int)0;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(116)
		int tmp13 = (p_list->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) * off);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(116)
		::haxor::io::FloatArray tmp14 = ::haxor::io::FloatArray_obj::__new(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(116)
		::haxor::io::Buffer tmp15 = a->data = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(116)
		::haxor::io::FloatArray f = ((::haxor::io::FloatArray)(tmp15));		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(118)
		{
			HX_STACK_LINE(118)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(118)
			int _g = p_list->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(118)
			while((true)){
				HX_STACK_LINE(118)
				bool tmp16 = (_g1 < _g);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(118)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(118)
				if ((tmp17)){
					HX_STACK_LINE(118)
					break;
				}
				HX_STACK_LINE(118)
				int tmp18 = (_g1)++;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(118)
				int i = tmp18;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(120)
				Dynamic tmp19 = p_list->__GetItem(i);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(120)
				Dynamic it = tmp19;		HX_STACK_VAR(it,"it");
				HX_STACK_LINE(121)
				int tmp20 = off;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(121)
				switch( (int)(tmp20)){
					case (int)1: {
						HX_STACK_LINE(123)
						Float v = ((Float)(it));		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(123)
						int tmp21 = (p)++;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(123)
						Float tmp22 = v;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(123)
						f->Set(tmp21,tmp22);
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(124)
						::haxor::math::Vector2 v2 = ((::haxor::math::Vector2)(it));		HX_STACK_VAR(v2,"v2");
						HX_STACK_LINE(124)
						int tmp21 = (p)++;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(124)
						Float tmp22 = v2->x;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(124)
						f->Set(tmp21,tmp22);
						HX_STACK_LINE(124)
						int tmp23 = (p)++;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(124)
						Float tmp24 = v2->y;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(124)
						f->Set(tmp23,tmp24);
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(125)
						::haxor::math::Vector3 v3 = ((::haxor::math::Vector3)(it));		HX_STACK_VAR(v3,"v3");
						HX_STACK_LINE(125)
						int tmp21 = (p)++;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(125)
						Float tmp22 = v3->x;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(125)
						f->Set(tmp21,tmp22);
						HX_STACK_LINE(125)
						int tmp23 = (p)++;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(125)
						Float tmp24 = v3->y;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(125)
						f->Set(tmp23,tmp24);
						HX_STACK_LINE(125)
						int tmp25 = (p)++;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(125)
						Float tmp26 = v3->z;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(125)
						f->Set(tmp25,tmp26);
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(127)
						bool tmp21 = p_is_color;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(127)
						if ((tmp21)){
							HX_STACK_LINE(128)
							::haxor::math::Color c = ((::haxor::math::Color)(it));		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(128)
							int tmp22 = (p)++;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(128)
							Float tmp23 = c->r;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(128)
							f->Set(tmp22,tmp23);
							HX_STACK_LINE(128)
							int tmp24 = (p)++;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(128)
							Float tmp25 = c->g;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(128)
							f->Set(tmp24,tmp25);
							HX_STACK_LINE(128)
							int tmp26 = (p)++;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(128)
							Float tmp27 = c->b;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(128)
							f->Set(tmp26,tmp27);
							HX_STACK_LINE(128)
							int tmp28 = (p)++;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(128)
							Float tmp29 = c->a;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(128)
							f->Set(tmp28,tmp29);
						}
						else{
							HX_STACK_LINE(130)
							::haxor::math::Vector4 v4 = ((::haxor::math::Vector4)(it));		HX_STACK_VAR(v4,"v4");
							HX_STACK_LINE(130)
							int tmp22 = (p)++;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(130)
							Float tmp23 = v4->x;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(130)
							f->Set(tmp22,tmp23);
							HX_STACK_LINE(130)
							int tmp24 = (p)++;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(130)
							Float tmp25 = v4->y;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(130)
							f->Set(tmp24,tmp25);
							HX_STACK_LINE(130)
							int tmp26 = (p)++;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(130)
							Float tmp27 = v4->z;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(130)
							f->Set(tmp26,tmp27);
							HX_STACK_LINE(130)
							int tmp28 = (p)++;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(130)
							Float tmp29 = v4->w;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(130)
							f->Set(tmp28,tmp29);
						}
					}
					;break;
				}
			}
		}
		HX_STACK_LINE(134)
		::String tmp16 = p_name;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(134)
		::haxor::io::FloatArray tmp17 = f;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(134)
		int tmp18 = off;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(134)
		this->Set(tmp16,tmp17,tmp18);
		HX_STACK_LINE(136)
		Dynamic tmp19 = p_list;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(136)
		return tmp19;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(MeshLayout_obj,UpdateAttribute,return )


MeshLayout_obj::MeshLayout_obj()
{
}

void MeshLayout_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MeshLayout);
	HX_MARK_MEMBER_NAME(m_vertex,"m_vertex");
	HX_MARK_MEMBER_NAME(m_normal,"m_normal");
	HX_MARK_MEMBER_NAME(m_color,"m_color");
	HX_MARK_MEMBER_NAME(m_uv0,"m_uv0");
	HX_MARK_MEMBER_NAME(m_uv1,"m_uv1");
	HX_MARK_MEMBER_NAME(m_tangent,"m_tangent");
	HX_MARK_MEMBER_NAME(m_binormal,"m_binormal");
	::haxor::graphics::mesh::Mesh_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MeshLayout_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_vertex,"m_vertex");
	HX_VISIT_MEMBER_NAME(m_normal,"m_normal");
	HX_VISIT_MEMBER_NAME(m_color,"m_color");
	HX_VISIT_MEMBER_NAME(m_uv0,"m_uv0");
	HX_VISIT_MEMBER_NAME(m_uv1,"m_uv1");
	HX_VISIT_MEMBER_NAME(m_tangent,"m_tangent");
	HX_VISIT_MEMBER_NAME(m_binormal,"m_binormal");
	::haxor::graphics::mesh::Mesh_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MeshLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"uv0") ) { if (inCallProp == hx::paccAlways) return get_uv0(); }
		if (HX_FIELD_EQ(inName,"uv1") ) { if (inCallProp == hx::paccAlways) return get_uv1(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return get_color(); }
		if (HX_FIELD_EQ(inName,"m_uv0") ) { return m_uv0; }
		if (HX_FIELD_EQ(inName,"m_uv1") ) { return m_uv1; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"vertex") ) { if (inCallProp == hx::paccAlways) return get_vertex(); }
		if (HX_FIELD_EQ(inName,"normal") ) { if (inCallProp == hx::paccAlways) return get_normal(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_color") ) { return m_color; }
		if (HX_FIELD_EQ(inName,"get_uv0") ) { return get_uv0_dyn(); }
		if (HX_FIELD_EQ(inName,"set_uv0") ) { return set_uv0_dyn(); }
		if (HX_FIELD_EQ(inName,"get_uv1") ) { return get_uv1_dyn(); }
		if (HX_FIELD_EQ(inName,"set_uv1") ) { return set_uv1_dyn(); }
		if (HX_FIELD_EQ(inName,"tangent") ) { if (inCallProp == hx::paccAlways) return get_tangent(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_vertex") ) { return m_vertex; }
		if (HX_FIELD_EQ(inName,"m_normal") ) { return m_normal; }
		if (HX_FIELD_EQ(inName,"binormal") ) { if (inCallProp == hx::paccAlways) return get_binormal(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_color") ) { return get_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"m_tangent") ) { return m_tangent; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_vertex") ) { return get_vertex_dyn(); }
		if (HX_FIELD_EQ(inName,"set_vertex") ) { return set_vertex_dyn(); }
		if (HX_FIELD_EQ(inName,"get_normal") ) { return get_normal_dyn(); }
		if (HX_FIELD_EQ(inName,"set_normal") ) { return set_normal_dyn(); }
		if (HX_FIELD_EQ(inName,"m_binormal") ) { return m_binormal; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_tangent") ) { return get_tangent_dyn(); }
		if (HX_FIELD_EQ(inName,"set_tangent") ) { return set_tangent_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_binormal") ) { return get_binormal_dyn(); }
		if (HX_FIELD_EQ(inName,"set_binormal") ) { return set_binormal_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"GenerateBounds") ) { return GenerateBounds_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"UpdateAttribute") ) { return UpdateAttribute_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MeshLayout_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"uv0") ) { if (inCallProp == hx::paccAlways) return set_uv0(inValue); }
		if (HX_FIELD_EQ(inName,"uv1") ) { if (inCallProp == hx::paccAlways) return set_uv1(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return set_color(inValue); }
		if (HX_FIELD_EQ(inName,"m_uv0") ) { m_uv0=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_uv1") ) { m_uv1=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"vertex") ) { if (inCallProp == hx::paccAlways) return set_vertex(inValue); }
		if (HX_FIELD_EQ(inName,"normal") ) { if (inCallProp == hx::paccAlways) return set_normal(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_color") ) { m_color=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tangent") ) { if (inCallProp == hx::paccAlways) return set_tangent(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_vertex") ) { m_vertex=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_normal") ) { m_normal=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"binormal") ) { if (inCallProp == hx::paccAlways) return set_binormal(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"m_tangent") ) { m_tangent=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_binormal") ) { m_binormal=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MeshLayout_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void MeshLayout_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1"));
	outFields->push(HX_HCSTRING("m_vertex","\x36","\x84","\x39","\x6a"));
	outFields->push(HX_HCSTRING("normal","\x27","\x72","\x69","\x30"));
	outFields->push(HX_HCSTRING("m_normal","\xf9","\x1a","\x5b","\xf9"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("m_color","\xd1","\x48","\xe7","\xfa"));
	outFields->push(HX_HCSTRING("uv0","\xaf","\x2e","\x59","\x00"));
	outFields->push(HX_HCSTRING("m_uv0","\x9d","\xae","\xd1","\x01"));
	outFields->push(HX_HCSTRING("uv1","\xb0","\x2e","\x59","\x00"));
	outFields->push(HX_HCSTRING("m_uv1","\x9e","\xae","\xd1","\x01"));
	outFields->push(HX_HCSTRING("tangent","\xc5","\x9c","\xcd","\x3a"));
	outFields->push(HX_HCSTRING("m_tangent","\xb3","\xab","\x4f","\x45"));
	outFields->push(HX_HCSTRING("binormal","\x2e","\xd7","\x06","\x24"));
	outFields->push(HX_HCSTRING("m_binormal","\x80","\xd8","\x51","\x4b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(MeshLayout_obj,m_vertex),HX_HCSTRING("m_vertex","\x36","\x84","\x39","\x6a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(MeshLayout_obj,m_normal),HX_HCSTRING("m_normal","\xf9","\x1a","\x5b","\xf9")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(MeshLayout_obj,m_color),HX_HCSTRING("m_color","\xd1","\x48","\xe7","\xfa")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(MeshLayout_obj,m_uv0),HX_HCSTRING("m_uv0","\x9d","\xae","\xd1","\x01")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(MeshLayout_obj,m_uv1),HX_HCSTRING("m_uv1","\x9e","\xae","\xd1","\x01")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(MeshLayout_obj,m_tangent),HX_HCSTRING("m_tangent","\xb3","\xab","\x4f","\x45")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(MeshLayout_obj,m_binormal),HX_HCSTRING("m_binormal","\x80","\xd8","\x51","\x4b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get_vertex","\x2d","\x4b","\xcf","\x91"),
	HX_HCSTRING("set_vertex","\xa1","\xe9","\x4c","\x95"),
	HX_HCSTRING("m_vertex","\x36","\x84","\x39","\x6a"),
	HX_HCSTRING("get_normal","\xf0","\xe1","\xf0","\x20"),
	HX_HCSTRING("set_normal","\x64","\x80","\x6e","\x24"),
	HX_HCSTRING("m_normal","\xf9","\x1a","\x5b","\xf9"),
	HX_HCSTRING("get_color","\xba","\xcd","\x05","\x8e"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("m_color","\xd1","\x48","\xe7","\xfa"),
	HX_HCSTRING("get_uv0","\x46","\xf7","\xcd","\x26"),
	HX_HCSTRING("set_uv0","\x52","\x88","\xcf","\x19"),
	HX_HCSTRING("m_uv0","\x9d","\xae","\xd1","\x01"),
	HX_HCSTRING("get_uv1","\x47","\xf7","\xcd","\x26"),
	HX_HCSTRING("set_uv1","\x53","\x88","\xcf","\x19"),
	HX_HCSTRING("m_uv1","\x9e","\xae","\xd1","\x01"),
	HX_HCSTRING("get_tangent","\xdc","\xfc","\xc7","\xc0"),
	HX_HCSTRING("set_tangent","\xe8","\x03","\x35","\xcb"),
	HX_HCSTRING("m_tangent","\xb3","\xab","\x4f","\x45"),
	HX_HCSTRING("get_binormal","\x37","\x8b","\x20","\xd9"),
	HX_HCSTRING("set_binormal","\xab","\xae","\x19","\xee"),
	HX_HCSTRING("m_binormal","\x80","\xd8","\x51","\x4b"),
	HX_HCSTRING("GenerateBounds","\xaa","\xc3","\x2c","\x17"),
	HX_HCSTRING("UpdateAttribute","\xb3","\x48","\x07","\xab"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MeshLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MeshLayout_obj::__mClass,"__mClass");
};

#endif

hx::Class MeshLayout_obj::__mClass;

void MeshLayout_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.graphics.mesh.MeshLayout","\x81","\xc3","\x11","\x45");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &MeshLayout_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MeshLayout_obj >;
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
} // end namespace mesh
