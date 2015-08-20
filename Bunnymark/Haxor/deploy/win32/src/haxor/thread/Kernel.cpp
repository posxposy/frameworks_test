#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxor_component_Behaviour
#include <haxor/component/Behaviour.h>
#endif
#ifndef INCLUDED_haxor_component_Camera
#include <haxor/component/Camera.h>
#endif
#ifndef INCLUDED_haxor_component_Component
#include <haxor/component/Component.h>
#endif
#ifndef INCLUDED_haxor_component_Transform
#include <haxor/component/Transform.h>
#endif
#ifndef INCLUDED_haxor_context_DataContext
#include <haxor/context/DataContext.h>
#endif
#ifndef INCLUDED_haxor_context_EngineContext
#include <haxor/context/EngineContext.h>
#endif
#ifndef INCLUDED_haxor_context_KernelContext
#include <haxor/context/KernelContext.h>
#endif
#ifndef INCLUDED_haxor_context_TextureContext
#include <haxor/context/TextureContext.h>
#endif
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_IResizeable
#include <haxor/core/IResizeable.h>
#endif
#ifndef INCLUDED_haxor_core_PixelFormat
#include <haxor/core/PixelFormat.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_graphics_Graphics
#include <haxor/graphics/Graphics.h>
#endif
#ifndef INCLUDED_haxor_graphics_material_Material
#include <haxor/graphics/material/Material.h>
#endif
#ifndef INCLUDED_haxor_graphics_material_Shader
#include <haxor/graphics/material/Shader.h>
#endif
#ifndef INCLUDED_haxor_graphics_mesh_Mesh
#include <haxor/graphics/mesh/Mesh.h>
#endif
#ifndef INCLUDED_haxor_graphics_mesh_Mesh3
#include <haxor/graphics/mesh/Mesh3.h>
#endif
#ifndef INCLUDED_haxor_graphics_mesh_MeshLayout
#include <haxor/graphics/mesh/MeshLayout.h>
#endif
#ifndef INCLUDED_haxor_graphics_texture_RenderTexture
#include <haxor/graphics/texture/RenderTexture.h>
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
#ifndef INCLUDED_haxor_io_serialization_ISerializable
#include <haxor/io/serialization/ISerializable.h>
#endif
#ifndef INCLUDED_haxor_math_AABB2
#include <haxor/math/AABB2.h>
#endif
#ifndef INCLUDED_haxor_math_Vector3
#include <haxor/math/Vector3.h>
#endif
#ifndef INCLUDED_haxor_thread_Kernel
#include <haxor/thread/Kernel.h>
#endif
namespace haxor{
namespace thread{

Void Kernel_obj::__construct(int p_width,int p_height,hx::Null< bool >  __o_p_readable,hx::Null< int >  __o_p_format)
{
HX_STACK_FRAME("haxor.thread.Kernel","new",0x7504c347,"haxor.thread.Kernel.new","haxor/thread/Kernel.hx",57,0xd58fcbe9)
HX_STACK_THIS(this)
HX_STACK_ARG(p_width,"p_width")
HX_STACK_ARG(p_height,"p_height")
HX_STACK_ARG(__o_p_readable,"p_readable")
HX_STACK_ARG(__o_p_format,"p_format")
bool p_readable = __o_p_readable.Default(true);
int p_format = __o_p_format.Default(-1);
{
	HX_STACK_LINE(58)
	super::__construct(null());
	HX_STACK_LINE(59)
	this->enabled = true;
	HX_STACK_LINE(60)
	::haxor::graphics::mesh::Mesh3 tmp = ::haxor::graphics::mesh::Mesh3_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(60)
	this->m_plane = tmp;
	HX_STACK_LINE(61)
	::haxor::graphics::mesh::Mesh3 tmp1 = this->m_plane;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(63)
	::haxor::math::Vector3 tmp2 = ::haxor::math::Vector3_obj::__new((int)-1,(int)1,(int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(64)
	::haxor::math::Vector3 tmp3 = ::haxor::math::Vector3_obj::__new((int)-1,(int)-1,(int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(65)
	::haxor::math::Vector3 tmp4 = ::haxor::math::Vector3_obj::__new((int)1,(int)-1,(int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(66)
	::haxor::math::Vector3 tmp5 = ::haxor::math::Vector3_obj::__new((int)-1,(int)1,(int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(67)
	::haxor::math::Vector3 tmp6 = ::haxor::math::Vector3_obj::__new((int)1,(int)-1,(int)1);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(68)
	::haxor::math::Vector3 tmp7 = ::haxor::math::Vector3_obj::__new((int)1,(int)1,(int)1);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(62)
	Array< ::Dynamic > tmp8 = Array_obj< ::Dynamic >::__new().Add(tmp2).Add(tmp3).Add(tmp4).Add(tmp5).Add(tmp6).Add(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(61)
	tmp1->set_vertex(tmp8);
	HX_STACK_LINE(71)
	int tmp9 = p_width;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(71)
	int tmp10 = p_height;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(71)
	bool tmp11 = (p_format < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(71)
	int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(71)
	if ((tmp11)){
		HX_STACK_LINE(71)
		tmp12 = ::haxor::core::PixelFormat_obj::RGBA8;
	}
	else{
		HX_STACK_LINE(71)
		tmp12 = p_format;
	}
	HX_STACK_LINE(71)
	::haxor::graphics::texture::RenderTexture tmp13 = ::haxor::graphics::texture::RenderTexture_obj::__new(tmp9,tmp10,tmp12,null());		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(71)
	this->m_output = tmp13;
	HX_STACK_LINE(72)
	::haxor::graphics::texture::RenderTexture tmp14 = this->m_output;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(72)
	::haxor::graphics::texture::RenderTexture tmp15 = this->m_output;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(72)
	int tmp16 = tmp15->set_magFilter((int)0);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(72)
	tmp14->set_minFilter(tmp16);
	HX_STACK_LINE(73)
	::haxor::graphics::texture::RenderTexture tmp17 = this->m_output;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(73)
	int tmp18 = this->get_uid();		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(73)
	::String tmp19 = (HX_HCSTRING("Kernel","\xdd","\xc9","\xea","\x6f") + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(73)
	::String tmp20 = (tmp19 + HX_HCSTRING("Output","\x21","\x83","\x15","\x41"));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(73)
	tmp17->set_name(tmp20);
	HX_STACK_LINE(75)
	int tmp21 = (p_width * p_height);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(75)
	int len = tmp21;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(76)
	int tmp22 = p_format;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(76)
	switch( (int)(tmp22)){
		case (int)0: {
			HX_STACK_LINE(78)
			::haxor::io::Buffer tmp23 = ::haxor::io::Buffer_obj::__new(len);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(78)
			this->m_result = tmp23;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(79)
			int tmp23 = (len * (int)3);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(79)
			::haxor::io::Buffer tmp24 = ::haxor::io::Buffer_obj::__new(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(79)
			this->m_result = tmp24;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(80)
			int tmp23 = (len * (int)4);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(80)
			::haxor::io::Buffer tmp24 = ::haxor::io::Buffer_obj::__new(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(80)
			this->m_result = tmp24;
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(81)
			::haxor::io::FloatArray tmp23 = ::haxor::io::FloatArray_obj::__new(len);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(81)
			this->m_result = tmp23;
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(82)
			int tmp23 = (len * (int)3);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(82)
			::haxor::io::FloatArray tmp24 = ::haxor::io::FloatArray_obj::__new(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(82)
			this->m_result = tmp24;
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(83)
			int tmp23 = (len * (int)4);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(83)
			::haxor::io::FloatArray tmp24 = ::haxor::io::FloatArray_obj::__new(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(83)
			this->m_result = tmp24;
		}
		;break;
		case (int)1: {
		}
		;break;
		case (int)4: {
		}
		;break;
		case (int)5: {
		}
		;break;
		case (int)6: {
		}
		;break;
		case (int)10: {
		}
		;break;
		case (int)11: {
		}
		;break;
		case (int)12: {
		}
		;break;
		case (int)13: {
		}
		;break;
	}
	HX_STACK_LINE(94)
	int tmp23 = p_width;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(94)
	this->SetFloat(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),tmp23);
	HX_STACK_LINE(95)
	int tmp24 = p_height;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(95)
	this->SetFloat(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),tmp24);
	HX_STACK_LINE(96)
	::haxor::context::KernelContext tmp25 = ::haxor::context::EngineContext_obj::kernel;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(96)
	tmp25->OnCreate(hx::ObjectPtr<OBJ_>(this));
}
;
	return null();
}

//Kernel_obj::~Kernel_obj() { }

Dynamic Kernel_obj::__CreateEmpty() { return  new Kernel_obj; }
hx::ObjectPtr< Kernel_obj > Kernel_obj::__new(int p_width,int p_height,hx::Null< bool >  __o_p_readable,hx::Null< int >  __o_p_format)
{  hx::ObjectPtr< Kernel_obj > _result_ = new Kernel_obj();
	_result_->__construct(p_width,p_height,__o_p_readable,__o_p_format);
	return _result_;}

Dynamic Kernel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Kernel_obj > _result_ = new Kernel_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::haxor::io::Buffer Kernel_obj::get_result( ){
	HX_STACK_FRAME("haxor.thread.Kernel","get_result",0xc6c2209f,"haxor.thread.Kernel.get_result","haxor/thread/Kernel.hx",29,0xd58fcbe9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(29)
	::haxor::io::Buffer tmp = this->m_result;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	::haxor::io::Buffer tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Kernel_obj,get_result,return )

::haxor::graphics::texture::RenderTexture Kernel_obj::get_output( ){
	HX_STACK_FRAME("haxor.thread.Kernel","get_output",0xcabec6c3,"haxor.thread.Kernel.get_output","haxor/thread/Kernel.hx",41,0xd58fcbe9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(41)
	::haxor::graphics::texture::RenderTexture tmp = this->m_output;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Kernel_obj,get_output,return )

Void Kernel_obj::Resize( hx::Null< int >  __o_p_width,hx::Null< int >  __o_p_height){
int p_width = __o_p_width.Default(-1);
int p_height = __o_p_height.Default(-1);
	HX_STACK_FRAME("haxor.thread.Kernel","Resize",0x64b2658d,"haxor.thread.Kernel.Resize","haxor/thread/Kernel.hx",105,0xd58fcbe9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_width,"p_width")
	HX_STACK_ARG(p_height,"p_height")
{
		HX_STACK_LINE(106)
		::haxor::graphics::texture::RenderTexture tmp = this->m_output;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(106)
		Float ow = tmp->m_width;		HX_STACK_VAR(ow,"ow");
		HX_STACK_LINE(107)
		::haxor::graphics::texture::RenderTexture tmp1 = this->m_output;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(107)
		Float oh = tmp1->m_height;		HX_STACK_VAR(oh,"oh");
		HX_STACK_LINE(109)
		bool tmp2 = (p_width < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(109)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(109)
		if ((tmp2)){
			HX_STACK_LINE(109)
			tmp3 = ow;
		}
		else{
			HX_STACK_LINE(109)
			tmp3 = p_width;
		}
		HX_STACK_LINE(109)
		Float w = tmp3;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(110)
		bool tmp4 = (p_height < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(110)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(110)
		if ((tmp4)){
			HX_STACK_LINE(110)
			tmp5 = oh;
		}
		else{
			HX_STACK_LINE(110)
			tmp5 = p_height;
		}
		HX_STACK_LINE(110)
		Float h = tmp5;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(112)
		Float tmp6 = (int)2;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(112)
		Float tmp7 = (Float(w) / Float(ow));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(112)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(112)
		Float tmp9 = ((int)-1 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(112)
		w = tmp9;
		HX_STACK_LINE(113)
		Float tmp10 = (int)2;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(113)
		Float tmp11 = (Float(h) / Float(oh));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(113)
		Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(113)
		Float tmp13 = ((int)-1 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(113)
		h = tmp13;
		HX_STACK_LINE(115)
		::haxor::graphics::mesh::Mesh3 tmp14 = this->m_plane;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(117)
		::haxor::math::Vector3 tmp15 = ::haxor::math::Vector3_obj::__new((int)-1,h,(int)1);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(118)
		::haxor::math::Vector3 tmp16 = ::haxor::math::Vector3_obj::__new((int)-1,(int)-1,(int)1);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(119)
		::haxor::math::Vector3 tmp17 = ::haxor::math::Vector3_obj::__new(w,(int)-1,(int)1);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(120)
		::haxor::math::Vector3 tmp18 = ::haxor::math::Vector3_obj::__new((int)-1,h,(int)1);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(121)
		::haxor::math::Vector3 tmp19 = ::haxor::math::Vector3_obj::__new(w,(int)-1,(int)1);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(122)
		::haxor::math::Vector3 tmp20 = ::haxor::math::Vector3_obj::__new(w,h,(int)1);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(116)
		Array< ::Dynamic > tmp21 = Array_obj< ::Dynamic >::__new().Add(tmp15).Add(tmp16).Add(tmp17).Add(tmp18).Add(tmp19).Add(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(115)
		tmp14->set_vertex(tmp21);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Kernel_obj,Resize,(void))

Void Kernel_obj::Execute( ){
{
		HX_STACK_FRAME("haxor.thread.Kernel","Execute",0x2000247c,"haxor.thread.Kernel.Execute","haxor/thread/Kernel.hx",130,0xd58fcbe9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(131)
		bool tmp = this->enabled;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(131)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(131)
		if ((tmp1)){
			HX_STACK_LINE(131)
			return null();
		}
		HX_STACK_LINE(132)
		::haxor::graphics::material::Shader tmp2 = this->m_shader;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(132)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(132)
		if ((tmp3)){
			HX_STACK_LINE(132)
			return null();
		}
		HX_STACK_LINE(133)
		::haxor::context::TextureContext tmp4 = ::haxor::context::EngineContext_obj::texture;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(133)
		::haxor::graphics::texture::RenderTexture tmp5 = this->m_output;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(133)
		tmp4->BindTarget(tmp5);
		HX_STACK_LINE(134)
		::haxor::math::AABB2 tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(134)
		{
			HX_STACK_LINE(134)
			::haxor::context::DataContext tmp7 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(134)
			::haxor::context::DataContext _this = tmp7;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(134)
			Array< ::Dynamic > tmp8 = _this->m_aabb2;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(134)
			int tmp9 = (_this->m_naabb2 + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(134)
			int tmp10 = _this->m_aabb2->length;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(134)
			int tmp11 = hx::Mod(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(134)
			int tmp12 = _this->m_naabb2 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(134)
			tmp6 = tmp8->__get(tmp12).StaticCast< ::haxor::math::AABB2 >();
		}
		HX_STACK_LINE(134)
		::haxor::graphics::texture::RenderTexture tmp7 = this->m_output;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(134)
		int tmp8 = tmp7->m_width;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(134)
		::haxor::graphics::texture::RenderTexture tmp9 = this->m_output;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(134)
		int tmp10 = tmp9->m_height;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(134)
		::haxor::math::AABB2 tmp11 = tmp6->SetXYWH((int)0,(int)0,tmp8,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(134)
		::haxor::graphics::Graphics_obj::Viewport(tmp11);
		HX_STACK_LINE(135)
		::haxor::graphics::mesh::Mesh3 tmp12 = this->m_plane;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(135)
		::haxor::graphics::Graphics_obj::Render(tmp12,hx::ObjectPtr<OBJ_>(this),null(),null());
		HX_STACK_LINE(136)
		::haxor::context::TextureContext tmp13 = ::haxor::context::EngineContext_obj::texture;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(136)
		tmp13->BindTarget(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Kernel_obj,Execute,(void))

Void Kernel_obj::Update( hx::Null< int >  __o_p_x,hx::Null< int >  __o_p_y,hx::Null< int >  __o_p_width,hx::Null< int >  __o_p_height){
int p_x = __o_p_x.Default(0);
int p_y = __o_p_y.Default(0);
int p_width = __o_p_width.Default(-1);
int p_height = __o_p_height.Default(-1);
	HX_STACK_FRAME("haxor.thread.Kernel","Update",0xe33c91a2,"haxor.thread.Kernel.Update","haxor/thread/Kernel.hx",148,0xd58fcbe9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_x,"p_x")
	HX_STACK_ARG(p_y,"p_y")
	HX_STACK_ARG(p_width,"p_width")
	HX_STACK_ARG(p_height,"p_height")
{
		HX_STACK_LINE(149)
		bool tmp = this->enabled;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(149)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(149)
		if ((tmp1)){
			HX_STACK_LINE(149)
			return null();
		}
		HX_STACK_LINE(150)
		::haxor::graphics::material::Shader tmp2 = this->m_shader;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(150)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(150)
		if ((tmp3)){
			HX_STACK_LINE(150)
			return null();
		}
		HX_STACK_LINE(151)
		::haxor::io::Buffer tmp4 = this->m_result;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(151)
		bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(151)
		if ((tmp5)){
			HX_STACK_LINE(151)
			return null();
		}
		HX_STACK_LINE(152)
		bool tmp6 = (p_width <= (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(152)
		int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(152)
		if ((tmp6)){
			HX_STACK_LINE(152)
			::haxor::graphics::texture::RenderTexture tmp8 = this->m_output;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(152)
			tmp7 = tmp8->m_width;
		}
		else{
			HX_STACK_LINE(152)
			tmp7 = p_width;
		}
		HX_STACK_LINE(152)
		int w = tmp7;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(153)
		bool tmp8 = (p_height <= (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(153)
		int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(153)
		if ((tmp8)){
			HX_STACK_LINE(153)
			::haxor::graphics::texture::RenderTexture tmp10 = this->m_output;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(153)
			tmp9 = tmp10->m_height;
		}
		else{
			HX_STACK_LINE(153)
			tmp9 = p_height;
		}
		HX_STACK_LINE(153)
		int h = tmp9;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(154)
		::haxor::context::TextureContext tmp10 = ::haxor::context::EngineContext_obj::texture;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(154)
		::haxor::graphics::texture::RenderTexture tmp11 = this->m_output;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(154)
		tmp10->BindTarget(tmp11);
		HX_STACK_LINE(155)
		int tmp12 = p_x;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(155)
		int tmp13 = p_y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(155)
		int tmp14 = w;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(155)
		int tmp15 = h;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(155)
		::haxor::io::Buffer tmp16 = this->m_result;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(155)
		::haxor::io::Buffer tmp17 = ((::haxor::io::Buffer)(tmp16->m_buffer));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(155)
		::haxor::graphics::Graphics_obj::ReadPixels(tmp12,tmp13,tmp14,tmp15,tmp17);
		HX_STACK_LINE(156)
		::haxor::context::TextureContext tmp18 = ::haxor::context::EngineContext_obj::texture;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(156)
		tmp18->BindTarget(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Kernel_obj,Update,(void))

Void Kernel_obj::OnDestroy( ){
{
		HX_STACK_FRAME("haxor.thread.Kernel","OnDestroy",0x86d45fa2,"haxor.thread.Kernel.OnDestroy","haxor/thread/Kernel.hx",163,0xd58fcbe9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(164)
		this->super::OnDestroy();
		HX_STACK_LINE(165)
		::haxor::graphics::texture::RenderTexture tmp = this->m_output;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(165)
		::haxor::core::Resource_obj::Destroy(tmp);
		HX_STACK_LINE(166)
		::haxor::graphics::mesh::Mesh3 tmp1 = this->m_plane;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(166)
		::haxor::core::Resource_obj::Destroy(tmp1);
		HX_STACK_LINE(167)
		::haxor::context::KernelContext tmp2 = ::haxor::context::EngineContext_obj::kernel;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(167)
		tmp2->OnDestroy(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}



Kernel_obj::Kernel_obj()
{
}

void Kernel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Kernel);
	HX_MARK_MEMBER_NAME(m_result,"m_result");
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(m_output,"m_output");
	HX_MARK_MEMBER_NAME(m_plane,"m_plane");
	::haxor::graphics::material::Material_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Kernel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_result,"m_result");
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(m_output,"m_output");
	HX_VISIT_MEMBER_NAME(m_plane,"m_plane");
	::haxor::graphics::material::Material_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Kernel_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"result") ) { if (inCallProp == hx::paccAlways) return get_result(); }
		if (HX_FIELD_EQ(inName,"output") ) { if (inCallProp == hx::paccAlways) return get_output(); }
		if (HX_FIELD_EQ(inName,"Resize") ) { return Resize_dyn(); }
		if (HX_FIELD_EQ(inName,"Update") ) { return Update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return enabled; }
		if (HX_FIELD_EQ(inName,"m_plane") ) { return m_plane; }
		if (HX_FIELD_EQ(inName,"Execute") ) { return Execute_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_result") ) { return m_result; }
		if (HX_FIELD_EQ(inName,"m_output") ) { return m_output; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"OnDestroy") ) { return OnDestroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_result") ) { return get_result_dyn(); }
		if (HX_FIELD_EQ(inName,"get_output") ) { return get_output_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Kernel_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_plane") ) { m_plane=inValue.Cast< ::haxor::graphics::mesh::Mesh3 >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_result") ) { m_result=inValue.Cast< ::haxor::io::Buffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_output") ) { m_output=inValue.Cast< ::haxor::graphics::texture::RenderTexture >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Kernel_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Kernel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("result","\xdd","\x68","\x84","\x08"));
	outFields->push(HX_HCSTRING("m_result","\xaf","\x11","\x76","\xd1"));
	outFields->push(HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"));
	outFields->push(HX_HCSTRING("output","\x01","\x0f","\x81","\x0c"));
	outFields->push(HX_HCSTRING("m_output","\xd3","\xb7","\x72","\xd5"));
	outFields->push(HX_HCSTRING("m_plane","\xca","\xd5","\x18","\x75"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::io::Buffer*/ ,(int)offsetof(Kernel_obj,m_result),HX_HCSTRING("m_result","\xaf","\x11","\x76","\xd1")},
	{hx::fsBool,(int)offsetof(Kernel_obj,enabled),HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e")},
	{hx::fsObject /*::haxor::graphics::texture::RenderTexture*/ ,(int)offsetof(Kernel_obj,m_output),HX_HCSTRING("m_output","\xd3","\xb7","\x72","\xd5")},
	{hx::fsObject /*::haxor::graphics::mesh::Mesh3*/ ,(int)offsetof(Kernel_obj,m_plane),HX_HCSTRING("m_plane","\xca","\xd5","\x18","\x75")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get_result","\xa6","\xd8","\x0b","\xf9"),
	HX_HCSTRING("m_result","\xaf","\x11","\x76","\xd1"),
	HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"),
	HX_HCSTRING("get_output","\xca","\x7e","\x08","\xfd"),
	HX_HCSTRING("m_output","\xd3","\xb7","\x72","\xd5"),
	HX_HCSTRING("m_plane","\xca","\xd5","\x18","\x75"),
	HX_HCSTRING("Resize","\x14","\xce","\x0f","\x3d"),
	HX_HCSTRING("Execute","\x15","\x32","\x5e","\x99"),
	HX_HCSTRING("Update","\x29","\xfa","\x99","\xbb"),
	HX_HCSTRING("OnDestroy","\x7b","\xc5","\x03","\x9e"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Kernel_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Kernel_obj::__mClass,"__mClass");
};

#endif

hx::Class Kernel_obj::__mClass;

void Kernel_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.thread.Kernel","\xd5","\x13","\xea","\xd7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Kernel_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Kernel_obj >;
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
} // end namespace thread
