#include <hxcpp.h>

#ifndef INCLUDED_haxor_context_DataContext
#include <haxor/context/DataContext.h>
#endif
#ifndef INCLUDED_haxor_context_EngineContext
#include <haxor/context/EngineContext.h>
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
#ifndef INCLUDED_haxor_graphics_mesh_Model
#include <haxor/graphics/mesh/Model.h>
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

Void Model_obj::__construct()
{
	return null();
}

//Model_obj::~Model_obj() { }

Dynamic Model_obj::__CreateEmpty() { return  new Model_obj; }
hx::ObjectPtr< Model_obj > Model_obj::__new()
{  hx::ObjectPtr< Model_obj > _result_ = new Model_obj();
	_result_->__construct();
	return _result_;}

Dynamic Model_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Model_obj > _result_ = new Model_obj();
	_result_->__construct();
	return _result_;}

::haxor::graphics::mesh::Mesh Model_obj::screen;

::haxor::graphics::mesh::Mesh Model_obj::get_screen( ){
	HX_STACK_FRAME("haxor.graphics.mesh.Model","get_screen",0xbbdd9664,"haxor.graphics.mesh.Model.get_screen","haxor/graphics/mesh/Model.hx",24,0x06348460)
	HX_STACK_LINE(25)
	::haxor::graphics::mesh::Mesh tmp = ::haxor::graphics::mesh::Model_obj::m_screen;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	if ((tmp1)){
		HX_STACK_LINE(25)
		::haxor::graphics::mesh::Mesh tmp2 = ::haxor::graphics::mesh::Model_obj::m_screen;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(25)
		return tmp2;
	}
	HX_STACK_LINE(26)
	::haxor::graphics::mesh::Mesh tmp2 = ::haxor::graphics::mesh::Mesh_obj::__new(HX_HCSTRING("$ModelScreen","\x31","\x7a","\x4f","\x60"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(26)
	::haxor::graphics::mesh::Mesh m = tmp2;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(27)
	Float s = ((Float)1.0);		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(29)
	Float tmp3 = s;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(29)
	Float tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(29)
	Float tmp5 = s;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(30)
	Float tmp6 = s;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(30)
	Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(30)
	Float tmp8 = s;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(30)
	Float tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(31)
	Float tmp10 = s;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(31)
	Float tmp11 = s;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(31)
	Float tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(32)
	Float tmp13 = s;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(32)
	Float tmp14 = s;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(28)
	Array< Float > tmp15 = Array_obj< Float >::__new().Add(tmp4).Add(tmp5).Add(((Float)0.0)).Add(tmp7).Add(tmp9).Add(((Float)0.0)).Add(tmp10).Add(tmp12).Add(((Float)0.0)).Add(tmp13).Add(tmp14).Add(((Float)0.0));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(28)
	::haxor::io::FloatArray tmp16 = ::haxor::io::FloatArray_obj::Alloc(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(28)
	::haxor::io::FloatArray v = tmp16;		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(34)
	Array< Float > tmp17 = Array_obj< Float >::__new().Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(34)
	::haxor::io::FloatArray tmp18 = ::haxor::io::FloatArray_obj::Alloc(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(34)
	::haxor::io::FloatArray uv = tmp18;		HX_STACK_VAR(uv,"uv");
	HX_STACK_LINE(35)
	::haxor::io::FloatArray tmp19 = v;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(35)
	m->Set(HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1"),tmp19,(int)3);
	HX_STACK_LINE(36)
	::haxor::io::FloatArray tmp20 = uv;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(36)
	m->Set(HX_HCSTRING("uv0","\xaf","\x2e","\x59","\x00"),tmp20,(int)3);
	HX_STACK_LINE(37)
	::haxor::math::AABB3 tmp21;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(37)
	{
		HX_STACK_LINE(37)
		::haxor::context::DataContext tmp22 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(37)
		::haxor::context::DataContext _this = tmp22;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(37)
		Array< ::Dynamic > tmp23 = _this->m_aabb3;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(37)
		int tmp24 = (_this->m_naabb3 + (int)1);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(37)
		int tmp25 = _this->m_aabb3->length;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(37)
		int tmp26 = hx::Mod(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(37)
		int tmp27 = _this->m_naabb3 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(37)
		tmp21 = tmp23->__get(tmp27).StaticCast< ::haxor::math::AABB3 >();
	}
	HX_STACK_LINE(37)
	::haxor::math::AABB3 tmp22 = m->GenerateAttribBounds(HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1"),tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(37)
	m->set_bounds(tmp22);
	HX_STACK_LINE(38)
	Array< int > tmp23 = Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)0).Add((int)2).Add((int)3);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(38)
	::haxor::io::UInt16Array tmp24 = ::haxor::io::UInt16Array_obj::Alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(38)
	m->set_topology(tmp24);
	HX_STACK_LINE(39)
	::haxor::graphics::mesh::Mesh tmp25 = ::haxor::graphics::mesh::Model_obj::m_screen = m;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(39)
	return tmp25;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Model_obj,get_screen,return )

::haxor::graphics::mesh::Mesh Model_obj::m_screen;

::haxor::graphics::mesh::Mesh Model_obj::point;

::haxor::graphics::mesh::Mesh Model_obj::get_point( ){
	HX_STACK_FRAME("haxor.graphics.mesh.Model","get_point",0x9b75e058,"haxor.graphics.mesh.Model.get_point","haxor/graphics/mesh/Model.hx",48,0x06348460)
	HX_STACK_LINE(49)
	::haxor::graphics::mesh::Mesh tmp = ::haxor::graphics::mesh::Model_obj::m_point;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(49)
	if ((tmp1)){
		HX_STACK_LINE(49)
		::haxor::graphics::mesh::Mesh tmp2 = ::haxor::graphics::mesh::Model_obj::m_point;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(49)
		return tmp2;
	}
	HX_STACK_LINE(50)
	::haxor::graphics::mesh::Mesh tmp2 = ::haxor::graphics::mesh::Mesh_obj::__new(HX_HCSTRING("$ModelPoint","\x2b","\x35","\x4e","\xb4"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(50)
	::haxor::graphics::mesh::Mesh m = tmp2;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(51)
	Float s = ((Float)0.0);		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(52)
	Array< Float > tmp3 = Array_obj< Float >::__new().Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(52)
	::haxor::io::FloatArray tmp4 = ::haxor::io::FloatArray_obj::Alloc(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(52)
	::haxor::io::FloatArray v = tmp4;		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(53)
	Array< Float > tmp5 = Array_obj< Float >::__new().Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(53)
	::haxor::io::FloatArray tmp6 = ::haxor::io::FloatArray_obj::Alloc(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(53)
	::haxor::io::FloatArray n = tmp6;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(54)
	::haxor::io::FloatArray tmp7 = v;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(54)
	m->Set(HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1"),tmp7,(int)3);
	HX_STACK_LINE(55)
	::haxor::io::FloatArray tmp8 = n;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(55)
	m->Set(HX_HCSTRING("normal","\x27","\x72","\x69","\x30"),tmp8,(int)3);
	HX_STACK_LINE(56)
	m->primitive = (int)0;
	HX_STACK_LINE(57)
	::haxor::math::AABB3 tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(57)
	{
		HX_STACK_LINE(57)
		::haxor::context::DataContext tmp10 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(57)
		::haxor::context::DataContext _this = tmp10;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(57)
		Array< ::Dynamic > tmp11 = _this->m_aabb3;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(57)
		int tmp12 = (_this->m_naabb3 + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(57)
		int tmp13 = _this->m_aabb3->length;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(57)
		int tmp14 = hx::Mod(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(57)
		int tmp15 = _this->m_naabb3 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(57)
		tmp9 = tmp11->__get(tmp15).StaticCast< ::haxor::math::AABB3 >();
	}
	HX_STACK_LINE(57)
	::haxor::math::AABB3 tmp10 = m->GenerateAttribBounds(HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1"),tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(57)
	m->set_bounds(tmp10);
	HX_STACK_LINE(58)
	::haxor::graphics::mesh::Mesh tmp11 = ::haxor::graphics::mesh::Model_obj::m_point = m;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(58)
	return tmp11;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Model_obj,get_point,return )

::haxor::graphics::mesh::Mesh Model_obj::m_point;

::haxor::graphics::mesh::Mesh Model_obj::planeXY;

::haxor::graphics::mesh::Mesh Model_obj::get_planeXY( ){
	HX_STACK_FRAME("haxor.graphics.mesh.Model","get_planeXY",0xfe9ed865,"haxor.graphics.mesh.Model.get_planeXY","haxor/graphics/mesh/Model.hx",67,0x06348460)
	HX_STACK_LINE(68)
	::haxor::graphics::mesh::Mesh tmp = ::haxor::graphics::mesh::Model_obj::m_planeXY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(68)
	if ((tmp1)){
		HX_STACK_LINE(68)
		::haxor::graphics::mesh::Mesh tmp2 = ::haxor::graphics::mesh::Model_obj::m_planeXY;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(68)
		return tmp2;
	}
	HX_STACK_LINE(69)
	::haxor::graphics::mesh::Mesh tmp2 = ::haxor::graphics::mesh::Mesh_obj::__new(HX_HCSTRING("$ModelPlaneXY","\xf8","\x47","\xd4","\x3d"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(69)
	::haxor::graphics::mesh::Mesh m = tmp2;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(70)
	Float s = ((Float)0.5);		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(71)
	Float tmp3 = s;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(71)
	Float tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(71)
	Float tmp5 = s;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(71)
	Float tmp6 = s;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(71)
	Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(71)
	Float tmp8 = s;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(71)
	Float tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(71)
	Float tmp10 = s;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(71)
	Float tmp11 = s;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(71)
	Float tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(71)
	Float tmp13 = s;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(71)
	Float tmp14 = -(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(71)
	Float tmp15 = s;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(71)
	Float tmp16 = s;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(71)
	Float tmp17 = s;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(71)
	Float tmp18 = -(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(71)
	Float tmp19 = s;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(71)
	Float tmp20 = s;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(71)
	Array< Float > tmp21 = Array_obj< Float >::__new().Add(tmp4).Add(tmp5).Add(((Float)0.0)).Add(tmp7).Add(tmp9).Add(((Float)0.0)).Add(tmp10).Add(tmp12).Add(((Float)0.0)).Add(tmp14).Add(tmp15).Add(((Float)0.0)).Add(tmp16).Add(tmp18).Add(((Float)0.0)).Add(tmp19).Add(tmp20).Add(((Float)0.0));		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(71)
	::haxor::io::FloatArray tmp22 = ::haxor::io::FloatArray_obj::Alloc(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(71)
	::haxor::io::FloatArray v = tmp22;		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(72)
	Array< Float > tmp23 = Array_obj< Float >::__new().Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)1.0)).Add(((Float)0.0));		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(72)
	::haxor::io::FloatArray tmp24 = ::haxor::io::FloatArray_obj::Alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(72)
	::haxor::io::FloatArray uv = tmp24;		HX_STACK_VAR(uv,"uv");
	HX_STACK_LINE(73)
	Array< Float > tmp25 = Array_obj< Float >::__new().Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0));		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(73)
	::haxor::io::FloatArray tmp26 = ::haxor::io::FloatArray_obj::Alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(73)
	::haxor::io::FloatArray n = tmp26;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(74)
	::haxor::io::FloatArray tmp27 = v;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(74)
	m->Set(HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1"),tmp27,(int)3);
	HX_STACK_LINE(75)
	::haxor::io::FloatArray tmp28 = uv;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(75)
	m->Set(HX_HCSTRING("uv0","\xaf","\x2e","\x59","\x00"),tmp28,(int)3);
	HX_STACK_LINE(76)
	::haxor::io::FloatArray tmp29 = n;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(76)
	m->Set(HX_HCSTRING("normal","\x27","\x72","\x69","\x30"),tmp29,(int)3);
	HX_STACK_LINE(77)
	::haxor::math::AABB3 tmp30;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(77)
	{
		HX_STACK_LINE(77)
		::haxor::context::DataContext tmp31 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(77)
		::haxor::context::DataContext _this = tmp31;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(77)
		Array< ::Dynamic > tmp32 = _this->m_aabb3;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(77)
		int tmp33 = (_this->m_naabb3 + (int)1);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(77)
		int tmp34 = _this->m_aabb3->length;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(77)
		int tmp35 = hx::Mod(tmp33,tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(77)
		int tmp36 = _this->m_naabb3 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(77)
		tmp30 = tmp32->__get(tmp36).StaticCast< ::haxor::math::AABB3 >();
	}
	HX_STACK_LINE(77)
	::haxor::math::AABB3 tmp31 = m->GenerateAttribBounds(HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1"),tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(77)
	m->set_bounds(tmp31);
	HX_STACK_LINE(78)
	::haxor::graphics::mesh::Mesh tmp32 = ::haxor::graphics::mesh::Model_obj::m_planeXY = m;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(78)
	return tmp32;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Model_obj,get_planeXY,return )

::haxor::graphics::mesh::Mesh Model_obj::m_planeXY;

::haxor::graphics::mesh::Mesh Model_obj::planeXZ;

::haxor::graphics::mesh::Mesh Model_obj::get_planeXZ( ){
	HX_STACK_FRAME("haxor.graphics.mesh.Model","get_planeXZ",0xfe9ed866,"haxor.graphics.mesh.Model.get_planeXZ","haxor/graphics/mesh/Model.hx",87,0x06348460)
	HX_STACK_LINE(88)
	::haxor::graphics::mesh::Mesh tmp = ::haxor::graphics::mesh::Model_obj::m_planeXZ;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(88)
	if ((tmp1)){
		HX_STACK_LINE(88)
		::haxor::graphics::mesh::Mesh tmp2 = ::haxor::graphics::mesh::Model_obj::m_planeXZ;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(88)
		return tmp2;
	}
	HX_STACK_LINE(89)
	::haxor::graphics::mesh::Mesh tmp2 = ::haxor::graphics::mesh::Mesh_obj::__new(HX_HCSTRING("$ModelPlaneXZ","\xf9","\x47","\xd4","\x3d"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(89)
	::haxor::graphics::mesh::Mesh m = tmp2;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(90)
	Float s = ((Float)0.5);		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(91)
	Float tmp3 = s;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(91)
	Float tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(91)
	Float tmp5 = s;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(91)
	Float tmp6 = s;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(91)
	Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(91)
	Float tmp8 = s;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(91)
	Float tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(91)
	Float tmp10 = s;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(91)
	Float tmp11 = s;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(91)
	Float tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(91)
	Float tmp13 = s;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(91)
	Float tmp14 = -(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(91)
	Float tmp15 = s;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(91)
	Float tmp16 = s;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(91)
	Float tmp17 = s;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(91)
	Float tmp18 = -(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(91)
	Float tmp19 = s;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(91)
	Float tmp20 = s;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(91)
	Array< Float > tmp21 = Array_obj< Float >::__new().Add(tmp4).Add(((Float)0.0)).Add(tmp5).Add(tmp7).Add(((Float)0.0)).Add(tmp9).Add(tmp10).Add(((Float)0.0)).Add(tmp12).Add(tmp14).Add(((Float)0.0)).Add(tmp15).Add(tmp16).Add(((Float)0.0)).Add(tmp18).Add(tmp19).Add(((Float)0.0)).Add(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(91)
	::haxor::io::FloatArray tmp22 = ::haxor::io::FloatArray_obj::Alloc(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(91)
	::haxor::io::FloatArray v = tmp22;		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(92)
	Array< Float > tmp23 = Array_obj< Float >::__new().Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)1.0)).Add(((Float)0.0));		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(92)
	::haxor::io::FloatArray tmp24 = ::haxor::io::FloatArray_obj::Alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(92)
	::haxor::io::FloatArray uv = tmp24;		HX_STACK_VAR(uv,"uv");
	HX_STACK_LINE(93)
	Array< Float > tmp25 = Array_obj< Float >::__new().Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0));		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(93)
	::haxor::io::FloatArray tmp26 = ::haxor::io::FloatArray_obj::Alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(93)
	::haxor::io::FloatArray n = tmp26;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(94)
	::haxor::io::FloatArray tmp27 = v;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(94)
	m->Set(HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1"),tmp27,(int)3);
	HX_STACK_LINE(95)
	::haxor::io::FloatArray tmp28 = uv;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(95)
	m->Set(HX_HCSTRING("uv0","\xaf","\x2e","\x59","\x00"),tmp28,(int)3);
	HX_STACK_LINE(96)
	::haxor::io::FloatArray tmp29 = n;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(96)
	m->Set(HX_HCSTRING("normal","\x27","\x72","\x69","\x30"),tmp29,(int)3);
	HX_STACK_LINE(97)
	::haxor::math::AABB3 tmp30;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(97)
	{
		HX_STACK_LINE(97)
		::haxor::context::DataContext tmp31 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(97)
		::haxor::context::DataContext _this = tmp31;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(97)
		Array< ::Dynamic > tmp32 = _this->m_aabb3;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(97)
		int tmp33 = (_this->m_naabb3 + (int)1);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(97)
		int tmp34 = _this->m_aabb3->length;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(97)
		int tmp35 = hx::Mod(tmp33,tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(97)
		int tmp36 = _this->m_naabb3 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(97)
		tmp30 = tmp32->__get(tmp36).StaticCast< ::haxor::math::AABB3 >();
	}
	HX_STACK_LINE(97)
	::haxor::math::AABB3 tmp31 = m->GenerateAttribBounds(HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1"),tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(97)
	m->set_bounds(tmp31);
	HX_STACK_LINE(98)
	::haxor::graphics::mesh::Mesh tmp32 = ::haxor::graphics::mesh::Model_obj::m_planeXZ = m;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(98)
	return tmp32;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Model_obj,get_planeXZ,return )

::haxor::graphics::mesh::Mesh Model_obj::m_planeXZ;

::haxor::graphics::mesh::Mesh Model_obj::planeYZ;

::haxor::graphics::mesh::Mesh Model_obj::get_planeYZ( ){
	HX_STACK_FRAME("haxor.graphics.mesh.Model","get_planeYZ",0xfe9ed945,"haxor.graphics.mesh.Model.get_planeYZ","haxor/graphics/mesh/Model.hx",107,0x06348460)
	HX_STACK_LINE(108)
	::haxor::graphics::mesh::Mesh tmp = ::haxor::graphics::mesh::Model_obj::m_planeYZ;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(108)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(108)
	if ((tmp1)){
		HX_STACK_LINE(108)
		::haxor::graphics::mesh::Mesh tmp2 = ::haxor::graphics::mesh::Model_obj::m_planeYZ;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(108)
		return tmp2;
	}
	HX_STACK_LINE(109)
	::haxor::graphics::mesh::Mesh tmp2 = ::haxor::graphics::mesh::Mesh_obj::__new(HX_HCSTRING("$ModelPlaneYZ","\xd8","\x48","\xd4","\x3d"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(109)
	::haxor::graphics::mesh::Mesh m = tmp2;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(110)
	Float s = ((Float)0.5);		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(111)
	Float tmp3 = s;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(111)
	Float tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(111)
	Float tmp5 = s;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(111)
	Float tmp6 = s;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(111)
	Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(111)
	Float tmp8 = s;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(111)
	Float tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(111)
	Float tmp10 = s;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(111)
	Float tmp11 = s;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(111)
	Float tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(111)
	Float tmp13 = s;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(111)
	Float tmp14 = -(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(111)
	Float tmp15 = s;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(111)
	Float tmp16 = s;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(111)
	Float tmp17 = s;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(111)
	Float tmp18 = -(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(111)
	Float tmp19 = s;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(111)
	Float tmp20 = s;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(111)
	Array< Float > tmp21 = Array_obj< Float >::__new().Add(((Float)0.0)).Add(tmp4).Add(tmp5).Add(((Float)0.0)).Add(tmp7).Add(tmp9).Add(((Float)0.0)).Add(tmp10).Add(tmp12).Add(((Float)0.0)).Add(tmp14).Add(tmp15).Add(((Float)0.0)).Add(tmp16).Add(tmp18).Add(((Float)0.0)).Add(tmp19).Add(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(111)
	::haxor::io::FloatArray tmp22 = ::haxor::io::FloatArray_obj::Alloc(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(111)
	::haxor::io::FloatArray v = tmp22;		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(112)
	Array< Float > tmp23 = Array_obj< Float >::__new().Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)1.0)).Add(((Float)0.0));		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(112)
	::haxor::io::FloatArray tmp24 = ::haxor::io::FloatArray_obj::Alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(112)
	::haxor::io::FloatArray uv = tmp24;		HX_STACK_VAR(uv,"uv");
	HX_STACK_LINE(113)
	Array< Float > tmp25 = Array_obj< Float >::__new().Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0));		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(113)
	::haxor::io::FloatArray tmp26 = ::haxor::io::FloatArray_obj::Alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(113)
	::haxor::io::FloatArray n = tmp26;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(114)
	::haxor::io::FloatArray tmp27 = v;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(114)
	m->Set(HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1"),tmp27,(int)3);
	HX_STACK_LINE(115)
	::haxor::io::FloatArray tmp28 = uv;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(115)
	m->Set(HX_HCSTRING("uv0","\xaf","\x2e","\x59","\x00"),tmp28,(int)3);
	HX_STACK_LINE(116)
	::haxor::io::FloatArray tmp29 = n;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(116)
	m->Set(HX_HCSTRING("normal","\x27","\x72","\x69","\x30"),tmp29,(int)3);
	HX_STACK_LINE(117)
	::haxor::math::AABB3 tmp30;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(117)
	{
		HX_STACK_LINE(117)
		::haxor::context::DataContext tmp31 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(117)
		::haxor::context::DataContext _this = tmp31;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(117)
		Array< ::Dynamic > tmp32 = _this->m_aabb3;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(117)
		int tmp33 = (_this->m_naabb3 + (int)1);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(117)
		int tmp34 = _this->m_aabb3->length;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(117)
		int tmp35 = hx::Mod(tmp33,tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(117)
		int tmp36 = _this->m_naabb3 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(117)
		tmp30 = tmp32->__get(tmp36).StaticCast< ::haxor::math::AABB3 >();
	}
	HX_STACK_LINE(117)
	::haxor::math::AABB3 tmp31 = m->GenerateAttribBounds(HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1"),tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(117)
	m->set_bounds(tmp31);
	HX_STACK_LINE(118)
	::haxor::graphics::mesh::Mesh tmp32 = ::haxor::graphics::mesh::Model_obj::m_planeYZ = m;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(118)
	return tmp32;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Model_obj,get_planeYZ,return )

::haxor::graphics::mesh::Mesh Model_obj::m_planeYZ;

::haxor::graphics::mesh::Mesh Model_obj::cube;

::haxor::graphics::mesh::Mesh Model_obj::get_cube( ){
	HX_STACK_FRAME("haxor.graphics.mesh.Model","get_cube",0x89ea69ed,"haxor.graphics.mesh.Model.get_cube","haxor/graphics/mesh/Model.hx",127,0x06348460)
	HX_STACK_LINE(128)
	::haxor::graphics::mesh::Mesh tmp = ::haxor::graphics::mesh::Model_obj::m_cube;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(128)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(128)
	if ((tmp1)){
		HX_STACK_LINE(128)
		::haxor::graphics::mesh::Mesh tmp2 = ::haxor::graphics::mesh::Model_obj::m_cube;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(128)
		return tmp2;
	}
	HX_STACK_LINE(129)
	::haxor::graphics::mesh::Mesh tmp2 = ::haxor::graphics::mesh::Mesh_obj::__new(HX_HCSTRING("$ModelCube","\x7a","\xd0","\x4b","\x46"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(129)
	::haxor::graphics::mesh::Mesh m = tmp2;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(130)
	::haxor::io::FloatArray tmp3 = ::haxor::io::FloatArray_obj::FromBase64(HX_HCSTRING("AAAAvwAAAL8AAAC/AAAAvwAAAD8AAAC/AAAAPwAAAD8AAAC/AAAAPwAAAD8AAAC/AAAAPwAAAL8AAAC/AAAAvwAAAL8AAAC/AAAAvwAAAL8AAAA/AAAAPwAAAL8AAAA/AAAAPwAAAD8AAAA/AAAAPwAAAD8AAAA/AAAAvwAAAD8AAAA/AAAAvwAAAL8AAAA/AAAAvwAAAL8AAAC/AAAAPwAAAL8AAAC/AAAAPwAAAL8AAAA/AAAAPwAAAL8AAAA/AAAAvwAAAL8AAAA/AAAAvwAAAL8AAAC/AAAAPwAAAL8AAAC/AAAAPwAAAD8AAAC/AAAAPwAAAD8AAAA/AAAAPwAAAD8AAAA/AAAAPwAAAL8AAAA/AAAAPwAAAL8AAAC/AAAAPwAAAD8AAAC/AAAAvwAAAD8AAAC/AAAAvwAAAD8AAAA/AAAAvwAAAD8AAAA/AAAAPwAAAD8AAAA/AAAAPwAAAD8AAAC/AAAAvwAAAD8AAAC/AAAAvwAAAL8AAAC/AAAAvwAAAL8AAAA/AAAAvwAAAL8AAAA/AAAAvwAAAD8AAAA/AAAAvwAAAD8AAAC/","\x64","\xc8","\x51","\xc4"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(130)
	::haxor::io::FloatArray v = tmp3;		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(131)
	::haxor::io::FloatArray tmp4 = ::haxor::io::FloatArray_obj::FromBase64(HX_HCSTRING("AACAPwAAAAAAAAAAAACAPwAAgD8AAAAAAAAAAAAAgD8AAAAAAAAAAAAAgD8AAAAAAAAAAAAAAAAAAAAAAACAPwAAAAAAAAAAAAAAAAAAAAAAAAAAAACAPwAAAAAAAAAAAACAPwAAgD8AAAAAAACAPwAAgD8AAAAAAAAAAAAAgD8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAACAPwAAAAAAAAAAAACAPwAAgD8AAAAAAACAPwAAgD8AAAAAAAAAAAAAgD8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAACAPwAAAAAAAAAAAACAPwAAgD8AAAAAAACAPwAAgD8AAAAAAAAAAAAAgD8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAACAPwAAAAAAAAAAAACAPwAAgD8AAAAAAACAPwAAgD8AAAAAAAAAAAAAgD8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAACAPwAAAAAAAAAAAACAPwAAgD8AAAAAAACAPwAAgD8AAAAAAAAAAAAAgD8AAAAAAAAAAAAAAAAAAAAA","\x46","\x55","\x69","\x6f"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(131)
	::haxor::io::FloatArray uv = tmp4;		HX_STACK_VAR(uv,"uv");
	HX_STACK_LINE(132)
	::haxor::io::FloatArray tmp5 = ::haxor::io::FloatArray_obj::FromBase64(HX_HCSTRING("AAAAAAAAAAAAAIC/AAAAAAAAAAAAAIC/AAAAAAAAAAAAAIC/AAAAAAAAAAAAAIC/AAAAAAAAAAAAAIC/AAAAAAAAAAAAAIC/AAAAAAAAAAAAAIA/AAAAAAAAAAAAAIA/AAAAAAAAAAAAAIA/AAAAAAAAAAAAAIA/AAAAAAAAAAAAAIA/AAAAAAAAAAAAAIA/AAAAAAAAgL8AAAAAAAAAAAAAgL8AAAAAAAAAAAAAgL8AAAAAAAAAAAAAgL8AAAAAAAAAAAAAgL8AAAAAAAAAAAAAgL8AAAAAAACAPwAAAAAAAAAAAACAPwAAAAAAAAAAAACAPwAAAAAAAAAAAACAPwAAAAAAAAAAAACAPwAAAAAAAAAAAACAPwAAAAAAAAAAAAAAAAAAgD8AAAAAAAAAAAAAgD8AAAAAAAAAAAAAgD8AAAAAAAAAAAAAgD8AAAAAAAAAAAAAgD8AAAAAAAAAAAAAgD8AAAAAAACAvwAAAAAAAAAAAACAvwAAAAAAAAAAAACAvwAAAAAAAAAAAACAvwAAAAAAAAAAAACAvwAAAAAAAAAAAACAvwAAAAAAAAAA","\x4c","\x33","\xc5","\xe0"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(132)
	::haxor::io::FloatArray n = tmp5;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(133)
	::haxor::io::FloatArray tmp6 = v;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(133)
	m->Set(HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1"),tmp6,(int)3);
	HX_STACK_LINE(134)
	::haxor::io::FloatArray tmp7 = uv;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(134)
	m->Set(HX_HCSTRING("uv0","\xaf","\x2e","\x59","\x00"),tmp7,(int)3);
	HX_STACK_LINE(135)
	::haxor::io::FloatArray tmp8 = n;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(135)
	m->Set(HX_HCSTRING("normal","\x27","\x72","\x69","\x30"),tmp8,(int)3);
	HX_STACK_LINE(136)
	::haxor::math::AABB3 tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(136)
	{
		HX_STACK_LINE(136)
		::haxor::context::DataContext tmp10 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(136)
		::haxor::context::DataContext _this = tmp10;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(136)
		Array< ::Dynamic > tmp11 = _this->m_aabb3;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(136)
		int tmp12 = (_this->m_naabb3 + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(136)
		int tmp13 = _this->m_aabb3->length;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(136)
		int tmp14 = hx::Mod(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(136)
		int tmp15 = _this->m_naabb3 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(136)
		tmp9 = tmp11->__get(tmp15).StaticCast< ::haxor::math::AABB3 >();
	}
	HX_STACK_LINE(136)
	::haxor::math::AABB3 tmp10 = m->GenerateAttribBounds(HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1"),tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(136)
	m->set_bounds(tmp10);
	HX_STACK_LINE(137)
	::haxor::graphics::mesh::Mesh tmp11 = ::haxor::graphics::mesh::Model_obj::m_cube = m;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(137)
	return tmp11;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Model_obj,get_cube,return )

::haxor::graphics::mesh::Mesh Model_obj::m_cube;

::haxor::graphics::mesh::Mesh Model_obj::tetrahedron;

::haxor::graphics::mesh::Mesh Model_obj::get_tetrahedron( ){
	HX_STACK_FRAME("haxor.graphics.mesh.Model","get_tetrahedron",0x93278184,"haxor.graphics.mesh.Model.get_tetrahedron","haxor/graphics/mesh/Model.hx",146,0x06348460)
	HX_STACK_LINE(147)
	::haxor::graphics::mesh::Mesh tmp = ::haxor::graphics::mesh::Model_obj::m_tetrahedron;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(147)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(147)
	if ((tmp1)){
		HX_STACK_LINE(147)
		::haxor::graphics::mesh::Mesh tmp2 = ::haxor::graphics::mesh::Model_obj::m_tetrahedron;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(147)
		return tmp2;
	}
	HX_STACK_LINE(148)
	::haxor::graphics::mesh::Mesh tmp2 = ::haxor::graphics::mesh::Mesh_obj::__new(HX_HCSTRING("$ModelTetrahedron","\x97","\xb6","\x27","\x2f"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(148)
	::haxor::graphics::mesh::Mesh m = tmp2;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(149)
	::haxor::io::FloatArray tmp3 = ::haxor::io::FloatArray_obj::FromBase64(HX_HCSTRING("AAAAAAAAAAAAAAAAsb+cvpm/Bz8AAAAAsb8cPwAAAAAAAAAAAAAAAAAAAAAAAAAArr+cvpu/B78AAAAAsb+cvpm/Bz8AAAAAAAAAAAAAAAAAAAAAsb8cPwAAAAAAAAAArr+cvpu/B78AAAAAsb8cPwAAAAAAAAAAAAAAAAAAAACX/1A/AAAAAAAAAACX/1A/sb8cPwAAAAAAAAAAsb+cvpm/Bz8AAAAAAAAAAAAAAACX/1A/sb+cvpm/Bz8AAAAAAAAAAAAAAACX/1A/AAAAAAAAAACX/1A/sb+cvpm/Bz8AAAAArr+cvpu/B78AAAAAAAAAAAAAAACX/1A/rr+cvpu/B78AAAAAAAAAAAAAAACX/1A/AAAAAAAAAACX/1A/rr+cvpu/B78AAAAAsb8cPwAAAAAAAAAAAAAAAAAAAACX/1A/AAAAAAAAAACX/1A/AAAAAAAAAACX/1A/AAAAAAAAAACX/1A/AAAAAAAAAACX/1A/AAAAAAAAAACX/1A/AAAAAAAAAACX/1A/AAAAAAAAAACX/1A/AAAAAAAAAACX/1A/AAAAAAAAAACX/1A/","\xc5","\x16","\x80","\x75"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(149)
	::haxor::io::FloatArray v = tmp3;		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(150)
	::haxor::io::FloatArray tmp4 = ::haxor::io::FloatArray_obj::FromBase64(HX_HCSTRING("AAAAPwAAAAAAAAAAraqqPQAAAAAAAIA/AACAvgAAAAAAAIA/AAAAPwAAAAAAAAAAVlXVPgAAAAD+/38/raqqPQAAAAAAAIA/AAAAPwAAAAAAAAAAAABAPwAAAAAAAIA/VlXVPgAAAAD+/38/AABAPwAAAAAAAIA/AAAAPwAAgD8AAAAAAAAAPwAAgD8AAAAAAACAvgAAAAAAAIA/raqqPQAAAAAAAIA/AAAAPwAAgD8AAAAAraqqPQAAAAAAAIA/AAAAPwAAgD8AAAAAAAAAPwAAgD8AAAAAraqqPQAAAAAAAIA/VlXVPgAAAAD+/38/AAAAPwAAgD8AAAAAVlXVPgAAAAD+/38/AAAAPwAAgD8AAAAAAAAAPwAAgD8AAAAAVlXVPgAAAAD+/38/AABAPwAAAAAAAIA/AAAAPwAAgD8AAAAAAAAAPwAAgD8AAAAAAAAAPwAAgD8AAAAAAAAAPwAAgD8AAAAAAAAAPwAAgD8AAAAAAAAAPwAAgD8AAAAAAAAAPwAAgD8AAAAAAAAAPwAAgD8AAAAAAAAAPwAAgD8AAAAAAAAAPwAAgD8AAAAA","\xbc","\xde","\x55","\x35"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(150)
	::haxor::io::FloatArray uv = tmp4;		HX_STACK_VAR(uv,"uv");
	HX_STACK_LINE(151)
	::haxor::io::FloatArray tmp5 = ::haxor::io::FloatArray_obj::FromBase64(HX_HCSTRING("AAAAAAAAAAAAAIC/AAAAAAAAAAAAAIC/AAAAAAAAAAAAAIC/AAAAAAAAAAAAAIC/AAAAAAAAAAAAAIC/AAAAAAAAAAAAAIC/AAAAAAAAAAAAAIC/AAAAAAAAAAAAAIC/AAAAAAAAAAAAAIC/AACAPwAAAAAAAAAAAACAPwAAAAAAAAAAAACAPwAAAAAAAAAAQrPvPiWWTz9yxrM+QrPvPiWWTz9yxrM+QrPvPiWWTz9yxrM+AACAPwAAAAAAAAAAAACAPwAAAAAAAAAAAACAPwAAAAAAAAAARbNvv4aDqbNyxrM+RbNvv4aDqbN2xrM+RLNvv4aDqbNyxrM+AACAPwAAAAAAAAAAAACAPwAAAAAAAAAAAACAPwAAAAAAAAAARbPvPiWWT792xrM+SbPvPiWWT792xrM+RbPvPiWWT792xrM+AACAPwAAAAAAAAAAAACAPwAAAAAAAAAAAACAPwAAAAAAAAAAAACAPwAAAAAAAAAAAACAPwAAAAAAAAAAAACAPwAAAAAAAAAAAACAPwAAAAAAAAAAAACAPwAAAAAAAAAAAACAPwAAAAAAAAAA","\x7a","\xf1","\x93","\x64"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(151)
	::haxor::io::FloatArray n = tmp5;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(152)
	::haxor::io::FloatArray tmp6 = v;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(152)
	m->Set(HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1"),tmp6,(int)3);
	HX_STACK_LINE(153)
	::haxor::io::FloatArray tmp7 = uv;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(153)
	m->Set(HX_HCSTRING("uv0","\xaf","\x2e","\x59","\x00"),tmp7,(int)3);
	HX_STACK_LINE(154)
	::haxor::io::FloatArray tmp8 = n;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(154)
	m->Set(HX_HCSTRING("normal","\x27","\x72","\x69","\x30"),tmp8,(int)3);
	HX_STACK_LINE(155)
	::haxor::math::AABB3 tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(155)
	{
		HX_STACK_LINE(155)
		::haxor::context::DataContext tmp10 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(155)
		::haxor::context::DataContext _this = tmp10;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(155)
		Array< ::Dynamic > tmp11 = _this->m_aabb3;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(155)
		int tmp12 = (_this->m_naabb3 + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(155)
		int tmp13 = _this->m_aabb3->length;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(155)
		int tmp14 = hx::Mod(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(155)
		int tmp15 = _this->m_naabb3 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(155)
		tmp9 = tmp11->__get(tmp15).StaticCast< ::haxor::math::AABB3 >();
	}
	HX_STACK_LINE(155)
	::haxor::math::AABB3 tmp10 = m->GenerateAttribBounds(HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1"),tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(155)
	m->set_bounds(tmp10);
	HX_STACK_LINE(156)
	::haxor::graphics::mesh::Mesh tmp11 = ::haxor::graphics::mesh::Model_obj::m_tetrahedron = m;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(156)
	return tmp11;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Model_obj,get_tetrahedron,return )

::haxor::graphics::mesh::Mesh Model_obj::m_tetrahedron;


Model_obj::Model_obj()
{
}

bool Model_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"cube") ) { outValue = inCallProp == hx::paccAlways ? get_cube() : cube; return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { outValue = inCallProp == hx::paccAlways ? get_point() : point; return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"screen") ) { outValue = inCallProp == hx::paccAlways ? get_screen() : screen; return true; }
		if (HX_FIELD_EQ(inName,"m_cube") ) { outValue = m_cube; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_point") ) { outValue = m_point; return true;  }
		if (HX_FIELD_EQ(inName,"planeXY") ) { outValue = inCallProp == hx::paccAlways ? get_planeXY() : planeXY; return true; }
		if (HX_FIELD_EQ(inName,"planeXZ") ) { outValue = inCallProp == hx::paccAlways ? get_planeXZ() : planeXZ; return true; }
		if (HX_FIELD_EQ(inName,"planeYZ") ) { outValue = inCallProp == hx::paccAlways ? get_planeYZ() : planeYZ; return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_screen") ) { outValue = m_screen; return true;  }
		if (HX_FIELD_EQ(inName,"get_cube") ) { outValue = get_cube_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_point") ) { outValue = get_point_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"m_planeXY") ) { outValue = m_planeXY; return true;  }
		if (HX_FIELD_EQ(inName,"m_planeXZ") ) { outValue = m_planeXZ; return true;  }
		if (HX_FIELD_EQ(inName,"m_planeYZ") ) { outValue = m_planeYZ; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_screen") ) { outValue = get_screen_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_planeXY") ) { outValue = get_planeXY_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_planeXZ") ) { outValue = get_planeXZ_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_planeYZ") ) { outValue = get_planeYZ_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"tetrahedron") ) { outValue = inCallProp == hx::paccAlways ? get_tetrahedron() : tetrahedron; return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"m_tetrahedron") ) { outValue = m_tetrahedron; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_tetrahedron") ) { outValue = get_tetrahedron_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxor::graphics::mesh::Mesh*/ ,(void *) &Model_obj::screen,HX_HCSTRING("screen","\x6c","\x3b","\x5d","\x47")},
	{hx::fsObject /*::haxor::graphics::mesh::Mesh*/ ,(void *) &Model_obj::m_screen,HX_HCSTRING("m_screen","\x3e","\xe4","\x4e","\x10")},
	{hx::fsObject /*::haxor::graphics::mesh::Mesh*/ ,(void *) &Model_obj::point,HX_HCSTRING("point","\x50","\xb4","\x8f","\xc6")},
	{hx::fsObject /*::haxor::graphics::mesh::Mesh*/ ,(void *) &Model_obj::m_point,HX_HCSTRING("m_point","\xbe","\x8b","\x1a","\x77")},
	{hx::fsObject /*::haxor::graphics::mesh::Mesh*/ ,(void *) &Model_obj::planeXY,HX_HCSTRING("planeXY","\x5d","\x9a","\xcf","\x82")},
	{hx::fsObject /*::haxor::graphics::mesh::Mesh*/ ,(void *) &Model_obj::m_planeXY,HX_HCSTRING("m_planeXY","\x4b","\xa9","\x51","\x8d")},
	{hx::fsObject /*::haxor::graphics::mesh::Mesh*/ ,(void *) &Model_obj::planeXZ,HX_HCSTRING("planeXZ","\x5e","\x9a","\xcf","\x82")},
	{hx::fsObject /*::haxor::graphics::mesh::Mesh*/ ,(void *) &Model_obj::m_planeXZ,HX_HCSTRING("m_planeXZ","\x4c","\xa9","\x51","\x8d")},
	{hx::fsObject /*::haxor::graphics::mesh::Mesh*/ ,(void *) &Model_obj::planeYZ,HX_HCSTRING("planeYZ","\x3d","\x9b","\xcf","\x82")},
	{hx::fsObject /*::haxor::graphics::mesh::Mesh*/ ,(void *) &Model_obj::m_planeYZ,HX_HCSTRING("m_planeYZ","\x2b","\xaa","\x51","\x8d")},
	{hx::fsObject /*::haxor::graphics::mesh::Mesh*/ ,(void *) &Model_obj::cube,HX_HCSTRING("cube","\xf5","\x3c","\xc9","\x41")},
	{hx::fsObject /*::haxor::graphics::mesh::Mesh*/ ,(void *) &Model_obj::m_cube,HX_HCSTRING("m_cube","\x47","\xad","\xc0","\x89")},
	{hx::fsObject /*::haxor::graphics::mesh::Mesh*/ ,(void *) &Model_obj::tetrahedron,HX_HCSTRING("tetrahedron","\x7c","\x9f","\xac","\x10")},
	{hx::fsObject /*::haxor::graphics::mesh::Mesh*/ ,(void *) &Model_obj::m_tetrahedron,HX_HCSTRING("m_tetrahedron","\x6a","\xbd","\xab","\x29")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Model_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Model_obj::screen,"screen");
	HX_MARK_MEMBER_NAME(Model_obj::m_screen,"m_screen");
	HX_MARK_MEMBER_NAME(Model_obj::point,"point");
	HX_MARK_MEMBER_NAME(Model_obj::m_point,"m_point");
	HX_MARK_MEMBER_NAME(Model_obj::planeXY,"planeXY");
	HX_MARK_MEMBER_NAME(Model_obj::m_planeXY,"m_planeXY");
	HX_MARK_MEMBER_NAME(Model_obj::planeXZ,"planeXZ");
	HX_MARK_MEMBER_NAME(Model_obj::m_planeXZ,"m_planeXZ");
	HX_MARK_MEMBER_NAME(Model_obj::planeYZ,"planeYZ");
	HX_MARK_MEMBER_NAME(Model_obj::m_planeYZ,"m_planeYZ");
	HX_MARK_MEMBER_NAME(Model_obj::cube,"cube");
	HX_MARK_MEMBER_NAME(Model_obj::m_cube,"m_cube");
	HX_MARK_MEMBER_NAME(Model_obj::tetrahedron,"tetrahedron");
	HX_MARK_MEMBER_NAME(Model_obj::m_tetrahedron,"m_tetrahedron");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Model_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Model_obj::screen,"screen");
	HX_VISIT_MEMBER_NAME(Model_obj::m_screen,"m_screen");
	HX_VISIT_MEMBER_NAME(Model_obj::point,"point");
	HX_VISIT_MEMBER_NAME(Model_obj::m_point,"m_point");
	HX_VISIT_MEMBER_NAME(Model_obj::planeXY,"planeXY");
	HX_VISIT_MEMBER_NAME(Model_obj::m_planeXY,"m_planeXY");
	HX_VISIT_MEMBER_NAME(Model_obj::planeXZ,"planeXZ");
	HX_VISIT_MEMBER_NAME(Model_obj::m_planeXZ,"m_planeXZ");
	HX_VISIT_MEMBER_NAME(Model_obj::planeYZ,"planeYZ");
	HX_VISIT_MEMBER_NAME(Model_obj::m_planeYZ,"m_planeYZ");
	HX_VISIT_MEMBER_NAME(Model_obj::cube,"cube");
	HX_VISIT_MEMBER_NAME(Model_obj::m_cube,"m_cube");
	HX_VISIT_MEMBER_NAME(Model_obj::tetrahedron,"tetrahedron");
	HX_VISIT_MEMBER_NAME(Model_obj::m_tetrahedron,"m_tetrahedron");
};

#endif

hx::Class Model_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("screen","\x6c","\x3b","\x5d","\x47"),
	HX_HCSTRING("get_screen","\x35","\xab","\xe4","\x37"),
	HX_HCSTRING("m_screen","\x3e","\xe4","\x4e","\x10"),
	HX_HCSTRING("point","\x50","\xb4","\x8f","\xc6"),
	HX_HCSTRING("get_point","\xa7","\x10","\x39","\x0a"),
	HX_HCSTRING("m_point","\xbe","\x8b","\x1a","\x77"),
	HX_HCSTRING("planeXY","\x5d","\x9a","\xcf","\x82"),
	HX_HCSTRING("get_planeXY","\x74","\xfa","\xc9","\x08"),
	HX_HCSTRING("m_planeXY","\x4b","\xa9","\x51","\x8d"),
	HX_HCSTRING("planeXZ","\x5e","\x9a","\xcf","\x82"),
	HX_HCSTRING("get_planeXZ","\x75","\xfa","\xc9","\x08"),
	HX_HCSTRING("m_planeXZ","\x4c","\xa9","\x51","\x8d"),
	HX_HCSTRING("planeYZ","\x3d","\x9b","\xcf","\x82"),
	HX_HCSTRING("get_planeYZ","\x54","\xfb","\xc9","\x08"),
	HX_HCSTRING("m_planeYZ","\x2b","\xaa","\x51","\x8d"),
	HX_HCSTRING("cube","\xf5","\x3c","\xc9","\x41"),
	HX_HCSTRING("get_cube","\x7e","\xf8","\x83","\xc1"),
	HX_HCSTRING("m_cube","\x47","\xad","\xc0","\x89"),
	HX_HCSTRING("tetrahedron","\x7c","\x9f","\xac","\x10"),
	HX_HCSTRING("get_tetrahedron","\x13","\x57","\x8e","\xd1"),
	HX_HCSTRING("m_tetrahedron","\x6a","\xbd","\xab","\x29"),
	String(null()) };

void Model_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.graphics.mesh.Model","\xdf","\xd8","\x5d","\xe1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Model_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Model_obj >;
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
