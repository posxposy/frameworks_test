#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxor_context_EngineContext
#include <haxor/context/EngineContext.h>
#endif
#ifndef INCLUDED_haxor_context_MeshContext
#include <haxor/context/MeshContext.h>
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
#ifndef INCLUDED_haxor_graphics_mesh_Mesh
#include <haxor/graphics/mesh/Mesh.h>
#endif
#ifndef INCLUDED_haxor_graphics_mesh_MeshAttrib
#include <haxor/graphics/mesh/MeshAttrib.h>
#endif
#ifndef INCLUDED_haxor_io_Buffer
#include <haxor/io/Buffer.h>
#endif
#ifndef INCLUDED_haxor_io_FloatArray
#include <haxor/io/FloatArray.h>
#endif
#ifndef INCLUDED_haxor_io_UInt16Array
#include <haxor/io/UInt16Array.h>
#endif
#ifndef INCLUDED_haxor_math_AABB3
#include <haxor/math/AABB3.h>
#endif
namespace haxor{
namespace graphics{
namespace mesh{

Void Mesh_obj::__construct(::String __o_p_name)
{
HX_STACK_FRAME("haxor.graphics.mesh.Mesh","new",0xe14fd5e9,"haxor.graphics.mesh.Mesh.new","haxor/graphics/mesh/Mesh.hx",110,0xbfac53a6)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_p_name,"p_name")
::String p_name = __o_p_name.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(111)
	::String tmp = p_name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(111)
	super::__construct(tmp);
	HX_STACK_LINE(112)
	Array< ::Dynamic > tmp1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(112)
	this->m_attribs = tmp1;
	HX_STACK_LINE(113)
	this->m_indexed = false;
	HX_STACK_LINE(114)
	this->m_vcount = (int)0;
	HX_STACK_LINE(115)
	::haxor::math::AABB3 tmp2 = ::haxor::math::AABB3_obj::get_empty();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(115)
	this->m_bounds = tmp2;
	HX_STACK_LINE(116)
	this->m_mode = (int)35044;
	HX_STACK_LINE(117)
	this->primitive = (int)4;
	HX_STACK_LINE(118)
	::haxor::graphics::mesh::MeshAttrib tmp3 = ::haxor::graphics::mesh::MeshAttrib_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(118)
	this->m_topology_attrib = tmp3;
	HX_STACK_LINE(119)
	::haxor::graphics::mesh::MeshAttrib tmp4 = this->m_topology_attrib;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(119)
	tmp4->m_name = HX_HCSTRING("$topology","\xd3","\x64","\xc7","\x95");
	HX_STACK_LINE(120)
	::haxor::graphics::mesh::MeshAttrib tmp5 = this->m_topology_attrib;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(120)
	tmp5->offset = (int)1;
	HX_STACK_LINE(121)
	::haxor::context::MeshContext tmp6 = ::haxor::context::EngineContext_obj::mesh;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(121)
	tmp6->Create(hx::ObjectPtr<OBJ_>(this));
}
;
	return null();
}

//Mesh_obj::~Mesh_obj() { }

Dynamic Mesh_obj::__CreateEmpty() { return  new Mesh_obj; }
hx::ObjectPtr< Mesh_obj > Mesh_obj::__new(::String __o_p_name)
{  hx::ObjectPtr< Mesh_obj > _result_ = new Mesh_obj();
	_result_->__construct(__o_p_name);
	return _result_;}

Dynamic Mesh_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Mesh_obj > _result_ = new Mesh_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::haxor::io::UInt16Array Mesh_obj::get_topology( ){
	HX_STACK_FRAME("haxor.graphics.mesh.Mesh","get_topology",0x1ca3d60f,"haxor.graphics.mesh.Mesh.get_topology","haxor/graphics/mesh/Mesh.hx",34,0xbfac53a6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(35)
	::haxor::graphics::mesh::MeshAttrib tmp = this->m_topology_attrib;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	::haxor::io::Buffer tmp1 = tmp->data;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(35)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(35)
	if ((tmp2)){
		HX_STACK_LINE(35)
		::haxor::io::UInt16Array tmp3 = ::haxor::io::UInt16Array_obj::__new((int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(35)
		return tmp3;
	}
	HX_STACK_LINE(36)
	::haxor::graphics::mesh::MeshAttrib tmp3 = this->m_topology_attrib;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(36)
	::haxor::io::UInt16Array tmp4 = ((::haxor::io::UInt16Array)(tmp3->data));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(36)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,get_topology,return )

::haxor::io::UInt16Array Mesh_obj::set_topology( ::haxor::io::UInt16Array v){
	HX_STACK_FRAME("haxor.graphics.mesh.Mesh","set_topology",0x319cf983,"haxor.graphics.mesh.Mesh.set_topology","haxor/graphics/mesh/Mesh.hx",39,0xbfac53a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(40)
	bool tmp = (v == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	if ((tmp)){
		HX_STACK_LINE(42)
		::haxor::graphics::mesh::MeshAttrib tmp1 = this->m_topology_attrib;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(42)
		tmp1->data = null();
		HX_STACK_LINE(43)
		this->m_indexed = false;
		HX_STACK_LINE(44)
		::haxor::context::MeshContext tmp2 = ::haxor::context::EngineContext_obj::mesh;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(44)
		::haxor::graphics::mesh::MeshAttrib tmp3 = this->m_topology_attrib;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(44)
		tmp2->RemoveAttrib(tmp3,hx::ObjectPtr<OBJ_>(this));
	}
	else{
		HX_STACK_LINE(48)
		::haxor::graphics::mesh::MeshAttrib tmp1 = this->m_topology_attrib;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(48)
		tmp1->data = v;
		HX_STACK_LINE(49)
		this->m_indexed = true;
		HX_STACK_LINE(50)
		::haxor::context::MeshContext tmp2 = ::haxor::context::EngineContext_obj::mesh;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(50)
		::haxor::graphics::mesh::MeshAttrib tmp3 = this->m_topology_attrib;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(50)
		int tmp4 = this->m_mode;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(50)
		tmp2->UpdateAttrib(tmp3,tmp4,true,hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(52)
	::haxor::io::UInt16Array tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(52)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,set_topology,return )

bool Mesh_obj::get_indexed( ){
	HX_STACK_FRAME("haxor.graphics.mesh.Mesh","get_indexed",0x3df3f291,"haxor.graphics.mesh.Mesh.get_indexed","haxor/graphics/mesh/Mesh.hx",61,0xbfac53a6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(61)
	bool tmp = this->m_indexed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,get_indexed,return )

int Mesh_obj::get_mode( ){
	HX_STACK_FRAME("haxor.graphics.mesh.Mesh","get_mode",0x6551d8c3,"haxor.graphics.mesh.Mesh.get_mode","haxor/graphics/mesh/Mesh.hx",68,0xbfac53a6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(68)
	int tmp = this->m_mode;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,get_mode,return )

int Mesh_obj::set_mode( int v){
	HX_STACK_FRAME("haxor.graphics.mesh.Mesh","set_mode",0x13af3237,"haxor.graphics.mesh.Mesh.set_mode","haxor/graphics/mesh/Mesh.hx",70,0xbfac53a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(71)
	int tmp = this->m_mode;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(71)
	int tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(71)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(71)
	if ((tmp2)){
		HX_STACK_LINE(71)
		int tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(71)
		return tmp3;
	}
	HX_STACK_LINE(72)
	this->m_mode = v;
	HX_STACK_LINE(73)
	bool tmp3 = this->m_indexed;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(73)
	if ((tmp3)){
		HX_STACK_LINE(73)
		::haxor::context::MeshContext tmp4 = ::haxor::context::EngineContext_obj::mesh;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(73)
		::haxor::graphics::mesh::MeshAttrib tmp5 = this->m_topology_attrib;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(73)
		int tmp6 = this->m_mode;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(73)
		tmp4->UpdateAttrib(tmp5,tmp6,true,hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(74)
	{
		HX_STACK_LINE(74)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(74)
		Array< ::Dynamic > tmp4 = this->m_attribs;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(74)
		int _g = tmp4->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(74)
		while((true)){
			HX_STACK_LINE(74)
			bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(74)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(74)
			if ((tmp6)){
				HX_STACK_LINE(74)
				break;
			}
			HX_STACK_LINE(74)
			int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(74)
			int i = tmp7;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(74)
			::haxor::context::MeshContext tmp8 = ::haxor::context::EngineContext_obj::mesh;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(74)
			Array< ::Dynamic > tmp9 = this->m_attribs;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(74)
			int tmp10 = i;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(74)
			::haxor::graphics::mesh::MeshAttrib tmp11 = tmp9->__get(tmp10).StaticCast< ::haxor::graphics::mesh::MeshAttrib >();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(74)
			int tmp12 = this->m_mode;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(74)
			tmp8->UpdateAttrib(tmp11,tmp12,false,hx::ObjectPtr<OBJ_>(this));
		}
	}
	HX_STACK_LINE(75)
	int tmp4 = v;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(75)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,set_mode,return )

Array< ::String > Mesh_obj::get_attribs( ){
	HX_STACK_FRAME("haxor.graphics.mesh.Mesh","get_attribs",0x96621089,"haxor.graphics.mesh.Mesh.get_attribs","haxor/graphics/mesh/Mesh.hx",88,0xbfac53a6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(88)
	Array< ::String > tmp = Array_obj< ::String >::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	Array< ::String > l = tmp;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(88)
	{
		HX_STACK_LINE(88)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(88)
		Array< ::Dynamic > tmp1 = this->m_attribs;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(88)
		int _g = tmp1->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(88)
		while((true)){
			HX_STACK_LINE(88)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(88)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(88)
			if ((tmp3)){
				HX_STACK_LINE(88)
				break;
			}
			HX_STACK_LINE(88)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(88)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(88)
			Array< ::Dynamic > tmp5 = this->m_attribs;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(88)
			int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(88)
			::haxor::graphics::mesh::MeshAttrib tmp7 = tmp5->__get(tmp6).StaticCast< ::haxor::graphics::mesh::MeshAttrib >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(88)
			::String tmp8 = tmp7->m_name;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(88)
			l->push(tmp8);
		}
	}
	HX_STACK_LINE(88)
	Array< ::String > tmp1 = l;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(88)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,get_attribs,return )

int Mesh_obj::get_vcount( ){
	HX_STACK_FRAME("haxor.graphics.mesh.Mesh","get_vcount",0x77c4f5f9,"haxor.graphics.mesh.Mesh.get_vcount","haxor/graphics/mesh/Mesh.hx",95,0xbfac53a6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(95)
	int tmp = this->m_vcount;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(95)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,get_vcount,return )

::haxor::math::AABB3 Mesh_obj::get_bounds( ){
	HX_STACK_FRAME("haxor.graphics.mesh.Mesh","get_bounds",0x6562a3d5,"haxor.graphics.mesh.Mesh.get_bounds","haxor/graphics/mesh/Mesh.hx",102,0xbfac53a6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(102)
	::haxor::math::AABB3 tmp = this->m_bounds;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(102)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,get_bounds,return )

::haxor::math::AABB3 Mesh_obj::set_bounds( ::haxor::math::AABB3 v){
	HX_STACK_FRAME("haxor.graphics.mesh.Mesh","set_bounds",0x68e04249,"haxor.graphics.mesh.Mesh.set_bounds","haxor/graphics/mesh/Mesh.hx",103,0xbfac53a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(103)
	::haxor::math::AABB3 tmp = this->m_bounds;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(103)
	::haxor::math::AABB3 tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(103)
	::haxor::math::AABB3 tmp2 = tmp->SetAABB3(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(103)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,set_bounds,return )

Void Mesh_obj::Clear( hx::Null< bool >  __o_p_from_gpu){
bool p_from_gpu = __o_p_from_gpu.Default(true);
	HX_STACK_FRAME("haxor.graphics.mesh.Mesh","Clear",0xf7b81b36,"haxor.graphics.mesh.Mesh.Clear","haxor/graphics/mesh/Mesh.hx",131,0xbfac53a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_from_gpu,"p_from_gpu")
{
		HX_STACK_LINE(132)
		{
			HX_STACK_LINE(132)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(132)
			Array< ::Dynamic > tmp = this->m_attribs;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(132)
			int _g = tmp->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(132)
			while((true)){
				HX_STACK_LINE(132)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(132)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(132)
				if ((tmp2)){
					HX_STACK_LINE(132)
					break;
				}
				HX_STACK_LINE(132)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(132)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(134)
				Array< ::Dynamic > tmp4 = this->m_attribs;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(134)
				int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(134)
				::haxor::graphics::mesh::MeshAttrib tmp6 = tmp4->__get(tmp5).StaticCast< ::haxor::graphics::mesh::MeshAttrib >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(134)
				tmp6->data = null();
				HX_STACK_LINE(135)
				Array< ::Dynamic > tmp7 = this->m_attribs;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(135)
				int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(135)
				::haxor::graphics::mesh::MeshAttrib tmp9 = tmp7->__get(tmp8).StaticCast< ::haxor::graphics::mesh::MeshAttrib >();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(135)
				tmp9->m_name = HX_HCSTRING("","\x00","\x00","\x00","\x00");
				HX_STACK_LINE(136)
				bool tmp10 = p_from_gpu;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(136)
				if ((tmp10)){
					HX_STACK_LINE(136)
					::haxor::context::MeshContext tmp11 = ::haxor::context::EngineContext_obj::mesh;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(136)
					Array< ::Dynamic > tmp12 = this->m_attribs;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(136)
					int tmp13 = i;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(136)
					::haxor::graphics::mesh::MeshAttrib tmp14 = tmp12->__get(tmp13).StaticCast< ::haxor::graphics::mesh::MeshAttrib >();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(136)
					tmp11->RemoveAttrib(tmp14,hx::ObjectPtr<OBJ_>(this));
				}
			}
		}
		HX_STACK_LINE(139)
		this->m_vcount = (int)0;
		HX_STACK_LINE(140)
		bool tmp = p_from_gpu;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(140)
		if ((tmp)){
			HX_STACK_LINE(142)
			this->set_topology(null());
		}
		else{
			HX_STACK_LINE(146)
			::haxor::graphics::mesh::MeshAttrib tmp1 = this->m_topology_attrib;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(146)
			tmp1->data = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,Clear,(void))

bool Mesh_obj::Exists( ::String p_name){
	HX_STACK_FRAME("haxor.graphics.mesh.Mesh","Exists",0x8197e813,"haxor.graphics.mesh.Mesh.Exists","haxor/graphics/mesh/Mesh.hx",156,0xbfac53a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_name,"p_name")
	HX_STACK_LINE(157)
	::String tmp = p_name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(157)
	::haxor::graphics::mesh::MeshAttrib tmp1 = this->GetAttribute(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(157)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(157)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,Exists,return )

Dynamic Mesh_obj::Get( ::String p_name){
	HX_STACK_FRAME("haxor.graphics.mesh.Mesh","Get",0xe1323dff,"haxor.graphics.mesh.Mesh.Get","haxor/graphics/mesh/Mesh.hx",164,0xbfac53a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_name,"p_name")
	HX_STACK_LINE(165)
	::String tmp = p_name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(165)
	::haxor::graphics::mesh::MeshAttrib tmp1 = this->GetAttribute(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(165)
	::haxor::graphics::mesh::MeshAttrib a = tmp1;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(166)
	bool tmp2 = (a == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(166)
	Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(166)
	if ((tmp2)){
		HX_STACK_LINE(166)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(166)
		tmp3 = ((Dynamic)(a->data));
	}
	HX_STACK_LINE(166)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,Get,return )

::haxor::graphics::mesh::MeshAttrib Mesh_obj::GetAttribute( ::String p_name){
	HX_STACK_FRAME("haxor.graphics.mesh.Mesh","GetAttribute",0x4e0eda1d,"haxor.graphics.mesh.Mesh.GetAttribute","haxor/graphics/mesh/Mesh.hx",175,0xbfac53a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_name,"p_name")
	HX_STACK_LINE(176)
	{
		HX_STACK_LINE(176)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(176)
		Array< ::Dynamic > tmp = this->m_attribs;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(176)
		int _g = tmp->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(176)
		while((true)){
			HX_STACK_LINE(176)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(176)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(176)
			if ((tmp2)){
				HX_STACK_LINE(176)
				break;
			}
			HX_STACK_LINE(176)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(176)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(176)
			Array< ::Dynamic > tmp4 = this->m_attribs;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(176)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(176)
			::haxor::graphics::mesh::MeshAttrib tmp6 = tmp4->__get(tmp5).StaticCast< ::haxor::graphics::mesh::MeshAttrib >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(176)
			::String tmp7 = tmp6->m_name;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(176)
			::String tmp8 = p_name;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(176)
			bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(176)
			if ((tmp9)){
				HX_STACK_LINE(176)
				Array< ::Dynamic > tmp10 = this->m_attribs;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(176)
				int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(176)
				::haxor::graphics::mesh::MeshAttrib tmp12 = tmp10->__get(tmp11).StaticCast< ::haxor::graphics::mesh::MeshAttrib >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(176)
				return tmp12;
			}
		}
	}
	HX_STACK_LINE(177)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,GetAttribute,return )

Void Mesh_obj::Remove( ::String p_name){
{
		HX_STACK_FRAME("haxor.graphics.mesh.Mesh","Remove",0xc640667b,"haxor.graphics.mesh.Mesh.Remove","haxor/graphics/mesh/Mesh.hx",186,0xbfac53a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_name,"p_name")
		HX_STACK_LINE(187)
		::String tmp = p_name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(187)
		::haxor::graphics::mesh::MeshAttrib tmp1 = this->GetAttribute(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(187)
		::haxor::graphics::mesh::MeshAttrib a = tmp1;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(188)
		bool tmp2 = (a == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(188)
		if ((tmp2)){
			HX_STACK_LINE(188)
			return null();
		}
		HX_STACK_LINE(189)
		Array< ::Dynamic > tmp3 = this->m_attribs;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(189)
		::haxor::graphics::mesh::MeshAttrib tmp4 = a;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(189)
		tmp3->remove(tmp4);
		HX_STACK_LINE(190)
		::haxor::context::MeshContext tmp5 = ::haxor::context::EngineContext_obj::mesh;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(190)
		::haxor::graphics::mesh::MeshAttrib tmp6 = a;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(190)
		tmp5->RemoveAttrib(tmp6,hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,Remove,(void))

::haxor::graphics::mesh::MeshAttrib Mesh_obj::Set( ::String p_name,::haxor::io::Buffer p_data,hx::Null< int >  __o_p_offset){
int p_offset = __o_p_offset.Default(0);
	HX_STACK_FRAME("haxor.graphics.mesh.Mesh","Set",0xe13b590b,"haxor.graphics.mesh.Mesh.Set","haxor/graphics/mesh/Mesh.hx",201,0xbfac53a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_name,"p_name")
	HX_STACK_ARG(p_data,"p_data")
	HX_STACK_ARG(p_offset,"p_offset")
{
		HX_STACK_LINE(202)
		bool tmp = (p_data == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(202)
		if ((tmp)){
			HX_STACK_LINE(202)
			{
				HX_STACK_LINE(202)
				::String tmp1 = this->get_name();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(202)
				::String tmp2 = (HX_HCSTRING("Mesh> [","\x0c","\x38","\x02","\x60") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(202)
				::String tmp3 = (tmp2 + HX_HCSTRING("] tried to set null array.","\x04","\x69","\x7b","\xc2"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(202)
				Dynamic p_msg = tmp3;		HX_STACK_VAR(p_msg,"p_msg");
				HX_STACK_LINE(202)
				int tmp4 = ::haxor::core::Console_obj::verbose;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(202)
				bool tmp5 = (tmp4 >= (int)1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(202)
				if ((tmp5)){
					HX_STACK_LINE(202)
					Dynamic tmp6 = p_msg;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(202)
					::cpp::Lib_obj::println(tmp6);
				}
			}
			HX_STACK_LINE(202)
			return null();
		}
		HX_STACK_LINE(204)
		::String tmp1 = p_name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(204)
		::haxor::graphics::mesh::MeshAttrib tmp2 = this->GetAttribute(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(204)
		::haxor::graphics::mesh::MeshAttrib a = tmp2;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(205)
		bool tmp3 = (a == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(205)
		if ((tmp3)){
			HX_STACK_LINE(207)
			::haxor::graphics::mesh::MeshAttrib tmp4 = ::haxor::graphics::mesh::MeshAttrib_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(207)
			a = tmp4;
			HX_STACK_LINE(208)
			a->m_name = p_name;
			HX_STACK_LINE(209)
			Array< ::Dynamic > tmp5 = this->m_attribs;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(209)
			::haxor::graphics::mesh::MeshAttrib tmp6 = a;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(209)
			tmp5->push(tmp6);
		}
		HX_STACK_LINE(211)
		bool tmp4 = (p_offset > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(211)
		if ((tmp4)){
			HX_STACK_LINE(211)
			a->offset = p_offset;
		}
		HX_STACK_LINE(212)
		a->data = p_data;
		HX_STACK_LINE(213)
		Array< ::Dynamic > tmp5 = this->m_attribs;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(213)
		::haxor::graphics::mesh::MeshAttrib tmp6 = tmp5->__get((int)0).StaticCast< ::haxor::graphics::mesh::MeshAttrib >();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(213)
		int tmp7 = tmp6->get_count();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(213)
		this->m_vcount = tmp7;
		HX_STACK_LINE(214)
		{
			HX_STACK_LINE(214)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(214)
			Array< ::Dynamic > tmp8 = this->m_attribs;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(214)
			int _g = tmp8->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(214)
			while((true)){
				HX_STACK_LINE(214)
				bool tmp9 = (_g1 < _g);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(214)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(214)
				if ((tmp10)){
					HX_STACK_LINE(214)
					break;
				}
				HX_STACK_LINE(214)
				int tmp11 = (_g1)++;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(214)
				int i = tmp11;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(216)
				Array< ::Dynamic > tmp12 = this->m_attribs;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(216)
				int tmp13 = i;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(216)
				::haxor::graphics::mesh::MeshAttrib tmp14 = tmp12->__get(tmp13).StaticCast< ::haxor::graphics::mesh::MeshAttrib >();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(216)
				int tmp15 = tmp14->get_count();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(216)
				int c = tmp15;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(217)
				int tmp16 = this->m_vcount;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(217)
				int tmp17 = c;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(217)
				bool tmp18 = (tmp16 < tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(217)
				int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(217)
				if ((tmp18)){
					HX_STACK_LINE(217)
					tmp19 = this->m_vcount;
				}
				else{
					HX_STACK_LINE(217)
					tmp19 = c;
				}
				HX_STACK_LINE(217)
				this->m_vcount = tmp19;
			}
		}
		HX_STACK_LINE(220)
		::haxor::context::MeshContext tmp8 = ::haxor::context::EngineContext_obj::mesh;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(220)
		::haxor::graphics::mesh::MeshAttrib tmp9 = a;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(220)
		int tmp10 = this->m_mode;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(220)
		tmp8->UpdateAttrib(tmp9,tmp10,false,hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(221)
		::haxor::graphics::mesh::MeshAttrib tmp11 = a;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(221)
		return tmp11;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Mesh_obj,Set,return )

::haxor::math::AABB3 Mesh_obj::GenerateAttribBounds( ::String p_attrib,::haxor::math::AABB3 p_result){
	HX_STACK_FRAME("haxor.graphics.mesh.Mesh","GenerateAttribBounds",0x096038ab,"haxor.graphics.mesh.Mesh.GenerateAttribBounds","haxor/graphics/mesh/Mesh.hx",230,0xbfac53a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_attrib,"p_attrib")
	HX_STACK_ARG(p_result,"p_result")
	HX_STACK_LINE(231)
	bool tmp = (p_result == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(231)
	::haxor::math::AABB3 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(231)
	if ((tmp)){
		HX_STACK_LINE(231)
		tmp1 = ::haxor::math::AABB3_obj::get_empty();
	}
	else{
		HX_STACK_LINE(231)
		tmp1 = p_result;
	}
	HX_STACK_LINE(231)
	::haxor::math::AABB3 b = tmp1;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(232)
	::String tmp2 = p_attrib;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(232)
	::haxor::graphics::mesh::MeshAttrib tmp3 = this->GetAttribute(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(232)
	::haxor::graphics::mesh::MeshAttrib a = tmp3;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(233)
	bool tmp4 = (a == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(233)
	if ((tmp4)){
		HX_STACK_LINE(233)
		::haxor::math::AABB3 tmp5 = b->Set((int)0,(int)0,(int)0,(int)0,(int)0,(int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(233)
		return tmp5;
	}
	HX_STACK_LINE(234)
	int step = a->offset;		HX_STACK_VAR(step,"step");
	HX_STACK_LINE(235)
	bool tmp5 = (step <= (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(235)
	if ((tmp5)){
		HX_STACK_LINE(235)
		::haxor::math::AABB3 tmp6 = b->Set((int)0,(int)0,(int)0,(int)0,(int)0,(int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(235)
		return tmp6;
	}
	HX_STACK_LINE(236)
	int i = step;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(237)
	::haxor::io::FloatArray f = ((::haxor::io::FloatArray)(a->data));		HX_STACK_VAR(f,"f");
	HX_STACK_LINE(238)
	bool tmp6 = (step > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(238)
	Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(238)
	if ((tmp6)){
		HX_STACK_LINE(238)
		tmp7 = f->Get((int)0);
	}
	else{
		HX_STACK_LINE(238)
		tmp7 = (int)0;
	}
	HX_STACK_LINE(238)
	Float vx = tmp7;		HX_STACK_VAR(vx,"vx");
	HX_STACK_LINE(239)
	bool tmp8 = (step > (int)1);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(239)
	Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(239)
	if ((tmp8)){
		HX_STACK_LINE(239)
		tmp9 = f->Get((int)1);
	}
	else{
		HX_STACK_LINE(239)
		tmp9 = (int)0;
	}
	HX_STACK_LINE(239)
	Float vy = tmp9;		HX_STACK_VAR(vy,"vy");
	HX_STACK_LINE(240)
	bool tmp10 = (step > (int)2);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(240)
	Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(240)
	if ((tmp10)){
		HX_STACK_LINE(240)
		tmp11 = f->Get((int)2);
	}
	else{
		HX_STACK_LINE(240)
		tmp11 = (int)0;
	}
	HX_STACK_LINE(240)
	Float vz = tmp11;		HX_STACK_VAR(vz,"vz");
	HX_STACK_LINE(241)
	Float tmp12 = vx;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(241)
	Float tmp13 = vx;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(241)
	Float tmp14 = vy;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(241)
	Float tmp15 = vy;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(241)
	Float tmp16 = vz;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(241)
	Float tmp17 = vz;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(241)
	b->Set(tmp12,tmp13,tmp14,tmp15,tmp16,tmp17);
	HX_STACK_LINE(242)
	while((true)){
		HX_STACK_LINE(242)
		bool tmp18 = (i < f->m_length);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(242)
		bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(242)
		if ((tmp19)){
			HX_STACK_LINE(242)
			break;
		}
		HX_STACK_LINE(244)
		bool tmp20 = (step > (int)0);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(244)
		Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(244)
		if ((tmp20)){
			HX_STACK_LINE(244)
			int tmp22 = i;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(244)
			tmp21 = f->Get(tmp22);
		}
		else{
			HX_STACK_LINE(244)
			tmp21 = (int)0;
		}
		HX_STACK_LINE(244)
		vx = tmp21;
		HX_STACK_LINE(245)
		bool tmp22 = (step > (int)1);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(245)
		Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(245)
		if ((tmp22)){
			HX_STACK_LINE(245)
			int tmp24 = (i + (int)1);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(245)
			tmp23 = f->Get(tmp24);
		}
		else{
			HX_STACK_LINE(245)
			tmp23 = (int)0;
		}
		HX_STACK_LINE(245)
		vy = tmp23;
		HX_STACK_LINE(246)
		bool tmp24 = (step > (int)2);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(246)
		Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(246)
		if ((tmp24)){
			HX_STACK_LINE(246)
			int tmp26 = (i + (int)2);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(246)
			tmp25 = f->Get(tmp26);
		}
		else{
			HX_STACK_LINE(246)
			tmp25 = (int)0;
		}
		HX_STACK_LINE(246)
		vz = tmp25;
		HX_STACK_LINE(247)
		Float tmp26 = vx;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(247)
		Float tmp27 = vy;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(247)
		Float tmp28 = vz;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(247)
		b->Encapsulate3(tmp26,tmp27,tmp28);
		HX_STACK_LINE(248)
		hx::AddEq(i,step);
	}
	HX_STACK_LINE(250)
	::haxor::math::AABB3 tmp18 = b;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(250)
	return tmp18;
}


HX_DEFINE_DYNAMIC_FUNC2(Mesh_obj,GenerateAttribBounds,return )

Void Mesh_obj::OnDestroy( ){
{
		HX_STACK_FRAME("haxor.graphics.mesh.Mesh","OnDestroy",0x904e17c4,"haxor.graphics.mesh.Mesh.OnDestroy","haxor/graphics/mesh/Mesh.hx",257,0xbfac53a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(258)
		::haxor::context::MeshContext tmp = ::haxor::context::EngineContext_obj::mesh;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(258)
		tmp->Destroy(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}



Mesh_obj::Mesh_obj()
{
}

void Mesh_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Mesh);
	HX_MARK_MEMBER_NAME(m_topology_attrib,"m_topology_attrib");
	HX_MARK_MEMBER_NAME(m_indexed,"m_indexed");
	HX_MARK_MEMBER_NAME(m_mode,"m_mode");
	HX_MARK_MEMBER_NAME(primitive,"primitive");
	HX_MARK_MEMBER_NAME(attribs,"attribs");
	HX_MARK_MEMBER_NAME(m_attribs,"m_attribs");
	HX_MARK_MEMBER_NAME(m_vcount,"m_vcount");
	HX_MARK_MEMBER_NAME(m_bounds,"m_bounds");
	::haxor::core::Resource_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Mesh_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_topology_attrib,"m_topology_attrib");
	HX_VISIT_MEMBER_NAME(m_indexed,"m_indexed");
	HX_VISIT_MEMBER_NAME(m_mode,"m_mode");
	HX_VISIT_MEMBER_NAME(primitive,"primitive");
	HX_VISIT_MEMBER_NAME(attribs,"attribs");
	HX_VISIT_MEMBER_NAME(m_attribs,"m_attribs");
	HX_VISIT_MEMBER_NAME(m_vcount,"m_vcount");
	HX_VISIT_MEMBER_NAME(m_bounds,"m_bounds");
	::haxor::core::Resource_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Mesh_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"Get") ) { return Get_dyn(); }
		if (HX_FIELD_EQ(inName,"Set") ) { return Set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mode") ) { if (inCallProp == hx::paccAlways) return get_mode(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"Clear") ) { return Clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_mode") ) { return m_mode; }
		if (HX_FIELD_EQ(inName,"vcount") ) { if (inCallProp == hx::paccAlways) return get_vcount(); }
		if (HX_FIELD_EQ(inName,"bounds") ) { if (inCallProp == hx::paccAlways) return get_bounds(); }
		if (HX_FIELD_EQ(inName,"Exists") ) { return Exists_dyn(); }
		if (HX_FIELD_EQ(inName,"Remove") ) { return Remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indexed") ) { if (inCallProp == hx::paccAlways) return get_indexed(); }
		if (HX_FIELD_EQ(inName,"attribs") ) { return inCallProp == hx::paccAlways ? get_attribs() : attribs; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"topology") ) { if (inCallProp == hx::paccAlways) return get_topology(); }
		if (HX_FIELD_EQ(inName,"get_mode") ) { return get_mode_dyn(); }
		if (HX_FIELD_EQ(inName,"set_mode") ) { return set_mode_dyn(); }
		if (HX_FIELD_EQ(inName,"m_vcount") ) { return m_vcount; }
		if (HX_FIELD_EQ(inName,"m_bounds") ) { return m_bounds; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"m_indexed") ) { return m_indexed; }
		if (HX_FIELD_EQ(inName,"primitive") ) { return primitive; }
		if (HX_FIELD_EQ(inName,"m_attribs") ) { return m_attribs; }
		if (HX_FIELD_EQ(inName,"OnDestroy") ) { return OnDestroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_vcount") ) { return get_vcount_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bounds") ) { return get_bounds_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bounds") ) { return set_bounds_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_indexed") ) { return get_indexed_dyn(); }
		if (HX_FIELD_EQ(inName,"get_attribs") ) { return get_attribs_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_topology") ) { return get_topology_dyn(); }
		if (HX_FIELD_EQ(inName,"set_topology") ) { return set_topology_dyn(); }
		if (HX_FIELD_EQ(inName,"GetAttribute") ) { return GetAttribute_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"m_topology_attrib") ) { return m_topology_attrib; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"GenerateAttribBounds") ) { return GenerateAttribBounds_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Mesh_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mode") ) { if (inCallProp == hx::paccAlways) return set_mode(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_mode") ) { m_mode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bounds") ) { if (inCallProp == hx::paccAlways) return set_bounds(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"attribs") ) { attribs=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"topology") ) { if (inCallProp == hx::paccAlways) return set_topology(inValue); }
		if (HX_FIELD_EQ(inName,"m_vcount") ) { m_vcount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_bounds") ) { m_bounds=inValue.Cast< ::haxor::math::AABB3 >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"m_indexed") ) { m_indexed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"primitive") ) { primitive=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_attribs") ) { m_attribs=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"m_topology_attrib") ) { m_topology_attrib=inValue.Cast< ::haxor::graphics::mesh::MeshAttrib >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Mesh_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Mesh_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("topology","\xaf","\xa0","\xd4","\xeb"));
	outFields->push(HX_HCSTRING("m_topology_attrib","\x08","\x09","\xbf","\x92"));
	outFields->push(HX_HCSTRING("indexed","\xf1","\x5b","\xbf","\xe0"));
	outFields->push(HX_HCSTRING("m_indexed","\xdf","\x6a","\x41","\xeb"));
	outFields->push(HX_HCSTRING("mode","\x63","\xd3","\x60","\x48"));
	outFields->push(HX_HCSTRING("m_mode","\xb5","\x43","\x58","\x90"));
	outFields->push(HX_HCSTRING("primitive","\xa7","\x88","\x58","\x27"));
	outFields->push(HX_HCSTRING("attribs","\xe9","\x79","\x2d","\x39"));
	outFields->push(HX_HCSTRING("m_attribs","\xd7","\x88","\xaf","\x43"));
	outFields->push(HX_HCSTRING("vcount","\x99","\xd8","\x7f","\x78"));
	outFields->push(HX_HCSTRING("m_vcount","\x6b","\x81","\x71","\x41"));
	outFields->push(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"));
	outFields->push(HX_HCSTRING("m_bounds","\x47","\x2f","\x0f","\x2f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::graphics::mesh::MeshAttrib*/ ,(int)offsetof(Mesh_obj,m_topology_attrib),HX_HCSTRING("m_topology_attrib","\x08","\x09","\xbf","\x92")},
	{hx::fsBool,(int)offsetof(Mesh_obj,m_indexed),HX_HCSTRING("m_indexed","\xdf","\x6a","\x41","\xeb")},
	{hx::fsInt,(int)offsetof(Mesh_obj,m_mode),HX_HCSTRING("m_mode","\xb5","\x43","\x58","\x90")},
	{hx::fsInt,(int)offsetof(Mesh_obj,primitive),HX_HCSTRING("primitive","\xa7","\x88","\x58","\x27")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Mesh_obj,attribs),HX_HCSTRING("attribs","\xe9","\x79","\x2d","\x39")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Mesh_obj,m_attribs),HX_HCSTRING("m_attribs","\xd7","\x88","\xaf","\x43")},
	{hx::fsInt,(int)offsetof(Mesh_obj,m_vcount),HX_HCSTRING("m_vcount","\x6b","\x81","\x71","\x41")},
	{hx::fsObject /*::haxor::math::AABB3*/ ,(int)offsetof(Mesh_obj,m_bounds),HX_HCSTRING("m_bounds","\x47","\x2f","\x0f","\x2f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get_topology","\xb8","\x54","\xee","\xa0"),
	HX_HCSTRING("set_topology","\x2c","\x78","\xe7","\xb5"),
	HX_HCSTRING("m_topology_attrib","\x08","\x09","\xbf","\x92"),
	HX_HCSTRING("get_indexed","\x08","\xbc","\xb9","\x66"),
	HX_HCSTRING("m_indexed","\xdf","\x6a","\x41","\xeb"),
	HX_HCSTRING("get_mode","\xec","\x8e","\x1b","\xc8"),
	HX_HCSTRING("set_mode","\x60","\xe8","\x78","\x76"),
	HX_HCSTRING("m_mode","\xb5","\x43","\x58","\x90"),
	HX_HCSTRING("primitive","\xa7","\x88","\x58","\x27"),
	HX_HCSTRING("attribs","\xe9","\x79","\x2d","\x39"),
	HX_HCSTRING("get_attribs","\x00","\xda","\x27","\xbf"),
	HX_HCSTRING("m_attribs","\xd7","\x88","\xaf","\x43"),
	HX_HCSTRING("get_vcount","\x62","\x48","\x07","\x69"),
	HX_HCSTRING("m_vcount","\x6b","\x81","\x71","\x41"),
	HX_HCSTRING("get_bounds","\x3e","\xf6","\xa4","\x56"),
	HX_HCSTRING("set_bounds","\xb2","\x94","\x22","\x5a"),
	HX_HCSTRING("m_bounds","\x47","\x2f","\x0f","\x2f"),
	HX_HCSTRING("Clear","\x6d","\xe1","\x88","\xdb"),
	HX_HCSTRING("Exists","\xfc","\x91","\x74","\xf4"),
	HX_HCSTRING("Get","\x76","\x38","\x36","\x00"),
	HX_HCSTRING("GetAttribute","\xc6","\x58","\x59","\xd2"),
	HX_HCSTRING("Remove","\x64","\x10","\x1d","\x39"),
	HX_HCSTRING("Set","\x82","\x53","\x3f","\x00"),
	HX_HCSTRING("GenerateAttribBounds","\x54","\x08","\xb7","\xfa"),
	HX_HCSTRING("OnDestroy","\x7b","\xc5","\x03","\x9e"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mesh_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mesh_obj::__mClass,"__mClass");
};

#endif

hx::Class Mesh_obj::__mClass;

void Mesh_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.graphics.mesh.Mesh","\x77","\xad","\x8a","\xde");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Mesh_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Mesh_obj >;
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
