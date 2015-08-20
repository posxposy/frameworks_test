#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_bm_Sprite
#include <bm/Sprite.h>
#endif
#ifndef INCLUDED_bm_Stage
#include <bm/Stage.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxor_component_Behaviour
#include <haxor/component/Behaviour.h>
#endif
#ifndef INCLUDED_haxor_component_Component
#include <haxor/component/Component.h>
#endif
#ifndef INCLUDED_haxor_component_MeshRenderer
#include <haxor/component/MeshRenderer.h>
#endif
#ifndef INCLUDED_haxor_component_Renderer
#include <haxor/component/Renderer.h>
#endif
#ifndef INCLUDED_haxor_context_BaseProcess
#include <haxor/context/BaseProcess.h>
#endif
#ifndef INCLUDED_haxor_context_DataContext
#include <haxor/context/DataContext.h>
#endif
#ifndef INCLUDED_haxor_context_EngineContext
#include <haxor/context/EngineContext.h>
#endif
#ifndef INCLUDED_haxor_context_Process
#include <haxor/context/Process.h>
#endif
#ifndef INCLUDED_haxor_context_UID
#include <haxor/context/UID.h>
#endif
#ifndef INCLUDED_haxor_core_Asset
#include <haxor/core/Asset.h>
#endif
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_PixelFormat
#include <haxor/core/PixelFormat.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_graphics_Bitmap
#include <haxor/graphics/Bitmap.h>
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
#ifndef INCLUDED_haxor_graphics_mesh_MeshAttrib
#include <haxor/graphics/mesh/MeshAttrib.h>
#endif
#ifndef INCLUDED_haxor_graphics_texture_ComputeTexture
#include <haxor/graphics/texture/ComputeTexture.h>
#endif
#ifndef INCLUDED_haxor_graphics_texture_Texture
#include <haxor/graphics/texture/Texture.h>
#endif
#ifndef INCLUDED_haxor_graphics_texture_Texture2D
#include <haxor/graphics/texture/Texture2D.h>
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
#ifndef INCLUDED_haxor_math_AABB3
#include <haxor/math/AABB3.h>
#endif
#ifndef INCLUDED_haxor_math_Random
#include <haxor/math/Random.h>
#endif
namespace bm{

Void Stage_obj::__construct(::String __o_p_name)
{
HX_STACK_FRAME("bm.Stage","new",0x1d164e2d,"bm.Stage.new","bm/Stage.hx",29,0xac0abee4)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_p_name,"p_name")
::String p_name = __o_p_name.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(29)
	::String tmp = p_name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	super::__construct(tmp);
}
;
	return null();
}

//Stage_obj::~Stage_obj() { }

Dynamic Stage_obj::__CreateEmpty() { return  new Stage_obj; }
hx::ObjectPtr< Stage_obj > Stage_obj::__new(::String __o_p_name)
{  hx::ObjectPtr< Stage_obj > _result_ = new Stage_obj();
	_result_->__construct(__o_p_name);
	return _result_;}

Dynamic Stage_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stage_obj > _result_ = new Stage_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Stage_obj::OnBuild( ){
{
		HX_STACK_FRAME("bm.Stage","OnBuild",0xe3e389bc,"bm.Stage.OnBuild","bm/Stage.hx",47,0xac0abee4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(48)
		this->super::OnBuild();
		HX_STACK_LINE(49)
		::haxor::context::UID tmp = ::haxor::context::UID_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(49)
		::bm::Stage_obj::ids = tmp;
		HX_STACK_LINE(50)
		::bm::Stage_obj::instance = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(51)
		this->m_dirty = false;
	}
return null();
}


Void Stage_obj::Initialize( int p_sprite_count){
{
		HX_STACK_FRAME("bm.Stage","Initialize",0x3208bb43,"bm.Stage.Initialize","bm/Stage.hx",59,0xac0abee4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_sprite_count,"p_sprite_count")
		HX_STACK_LINE(60)
		int c = p_sprite_count;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(61)
		::haxor::context::Process tmp = ::haxor::context::Process_obj::__new(HX_HCSTRING("sprites","\xce","\xa8","\x8a","\x5f"),c,null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(61)
		this->m_list = tmp;
		HX_STACK_LINE(62)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(62)
		{
			HX_STACK_LINE(62)
			int tmp2 = p_sprite_count;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(62)
			Float tmp3 = ::Math_obj::sqrt(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(62)
			Float p_v = tmp3;		HX_STACK_VAR(p_v,"p_v");
			HX_STACK_LINE(62)
			Float tmp4 = p_v;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(62)
			bool tmp5 = (p_v < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(62)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(62)
			if ((tmp5)){
				HX_STACK_LINE(62)
				tmp6 = ((Float)-0.9999999);
			}
			else{
				HX_STACK_LINE(62)
				tmp6 = ((Float)0.9999999);
			}
			HX_STACK_LINE(62)
			Float tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(62)
			int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(62)
			tmp1 = ((Float)(tmp8));
		}
		HX_STACK_LINE(62)
		int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(62)
		int tw = tmp2;		HX_STACK_VAR(tw,"tw");
		HX_STACK_LINE(63)
		int tmp3 = tw;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(63)
		int tmp4 = tw;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(63)
		int tmp5 = ::haxor::core::PixelFormat_obj::Float3;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(63)
		::haxor::graphics::texture::ComputeTexture tmp6 = ::haxor::graphics::texture::ComputeTexture_obj::__new(tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(63)
		this->m_sd = tmp6;
		HX_STACK_LINE(65)
		::String tmp7 = (HX_HCSTRING("Data Texture w[","\x5f","\x7c","\x69","\x9e") + tw);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(65)
		::String tmp8 = (tmp7 + HX_HCSTRING("] h[","\xd6","\x7a","\x91","\x3d"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(65)
		int tmp9 = tw;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(65)
		::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(65)
		::String tmp11 = (tmp10 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(65)
		Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("Stage.hx","\xe0","\x5e","\xde","\xbc"),65,HX_HCSTRING("bm.Stage","\xbb","\xb3","\x96","\x15"),HX_HCSTRING("Initialize","\x70","\x35","\x6c","\xe3"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(65)
		::haxe::Log_obj::trace(tmp11,tmp12);
		HX_STACK_LINE(67)
		Float s1 = ((Float)0.5);		HX_STACK_VAR(s1,"s1");
		HX_STACK_LINE(68)
		Float s2 = ((Float)1.0);		HX_STACK_VAR(s2,"s2");
		HX_STACK_LINE(72)
		Float tmp13 = s1;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(72)
		Float tmp14 = -(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(72)
		Float tmp15 = s2;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(73)
		Float tmp16 = s1;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(73)
		Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(74)
		Float tmp18 = s1;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(74)
		Float tmp19 = s2;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(76)
		Float tmp20 = s1;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(76)
		Float tmp21 = s2;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(77)
		Float tmp22 = s1;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(77)
		Float tmp23 = -(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(78)
		Float tmp24 = s1;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(71)
		Array< Float > tmp25 = Array_obj< Float >::__new().Add(tmp14).Add(tmp15).Add(((Float)0.0)).Add(tmp17).Add(((Float)0.0)).Add(((Float)0.0)).Add(tmp18).Add(tmp19).Add(((Float)0.0)).Add(tmp20).Add(tmp21).Add(((Float)0.0)).Add(tmp23).Add(((Float)0.0)).Add(((Float)0.0)).Add(tmp24).Add(((Float)0.0)).Add(((Float)0.0));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(71)
		Array< Float > plane = tmp25;		HX_STACK_VAR(plane,"plane");
		HX_STACK_LINE(82)
		::haxor::io::FloatArray f32;		HX_STACK_VAR(f32,"f32");
		HX_STACK_LINE(83)
		Float id = ((Float)0.0);		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(84)
		int k = (int)0;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(86)
		::haxor::graphics::mesh::Mesh tmp26 = ::haxor::graphics::mesh::Mesh_obj::__new(null());		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(86)
		this->m_sm = tmp26;
		HX_STACK_LINE(88)
		int tmp27 = (c * plane->length);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(88)
		::haxor::io::FloatArray tmp28 = ::haxor::io::FloatArray_obj::__new(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(88)
		f32 = tmp28;
		HX_STACK_LINE(89)
		{
			HX_STACK_LINE(89)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(89)
			while((true)){
				HX_STACK_LINE(89)
				bool tmp29 = (_g < c);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(89)
				bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(89)
				if ((tmp30)){
					HX_STACK_LINE(89)
					break;
				}
				HX_STACK_LINE(89)
				int tmp31 = (_g)++;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(89)
				int i = tmp31;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(91)
				{
					HX_STACK_LINE(91)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(91)
					int _g1 = plane->length;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(91)
					while((true)){
						HX_STACK_LINE(91)
						bool tmp32 = (_g2 < _g1);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(91)
						bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(91)
						if ((tmp33)){
							HX_STACK_LINE(91)
							break;
						}
						HX_STACK_LINE(91)
						int tmp34 = (_g2)++;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(91)
						int j = tmp34;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(93)
						int tmp35 = hx::Mod(j,(int)3);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(93)
						int vid = tmp35;		HX_STACK_VAR(vid,"vid");
						HX_STACK_LINE(94)
						Float tmp36 = plane->__get(j);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(94)
						Float v = tmp36;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(95)
						bool tmp37 = (vid == (int)2);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(95)
						if ((tmp37)){
							HX_STACK_LINE(95)
							v = id;
						}
						HX_STACK_LINE(96)
						int tmp38 = (k)++;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(96)
						Float tmp39 = v;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(96)
						f32->Set(tmp38,tmp39);
					}
				}
				HX_STACK_LINE(98)
				hx::AddEq(id,((Float)1.0));
			}
		}
		HX_STACK_LINE(100)
		::haxor::graphics::mesh::Mesh tmp29 = this->m_sm;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(100)
		::haxor::io::FloatArray tmp30 = f32;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(100)
		tmp29->Set(HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1"),tmp30,(int)3);
		HX_STACK_LINE(102)
		int tmp31 = (c * plane->length);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(102)
		::haxor::io::FloatArray tmp32 = ::haxor::io::FloatArray_obj::__new(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(102)
		f32 = tmp32;
		HX_STACK_LINE(103)
		k = (int)0;
		HX_STACK_LINE(104)
		{
			HX_STACK_LINE(104)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(104)
			while((true)){
				HX_STACK_LINE(104)
				bool tmp33 = (_g < c);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(104)
				bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(104)
				if ((tmp34)){
					HX_STACK_LINE(104)
					break;
				}
				HX_STACK_LINE(104)
				int tmp35 = (_g)++;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(104)
				int i = tmp35;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(106)
				int tmp36 = (i * (int)18);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(106)
				Float px = tmp36;		HX_STACK_VAR(px,"px");
				HX_STACK_LINE(107)
				Float tmp37 = ::haxor::math::Random_obj::Range((int)0,(int)5);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(107)
				Float py = tmp37;		HX_STACK_VAR(py,"py");
				HX_STACK_LINE(108)
				{
					HX_STACK_LINE(108)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(108)
					int _g1 = plane->length;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(108)
					while((true)){
						HX_STACK_LINE(108)
						bool tmp38 = (_g2 < _g1);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(108)
						bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(108)
						if ((tmp39)){
							HX_STACK_LINE(108)
							break;
						}
						HX_STACK_LINE(108)
						int tmp40 = (_g2)++;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(108)
						int j = tmp40;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(110)
						int tmp41 = hx::Mod(j,(int)3);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(110)
						int vid = tmp41;		HX_STACK_VAR(vid,"vid");
						HX_STACK_LINE(111)
						bool tmp42 = (vid == (int)0);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(111)
						if ((tmp42)){
							HX_STACK_LINE(111)
							int tmp43 = (k)++;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(111)
							Float tmp44 = px;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(111)
							f32->Set(tmp43,tmp44);
						}
						HX_STACK_LINE(112)
						bool tmp43 = (vid == (int)1);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(112)
						if ((tmp43)){
							HX_STACK_LINE(112)
							int tmp44 = (k)++;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(112)
							Float tmp45 = py;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(112)
							f32->Set(tmp44,tmp45);
						}
						HX_STACK_LINE(113)
						bool tmp44 = (vid == (int)2);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(113)
						if ((tmp44)){
							HX_STACK_LINE(113)
							int tmp45 = (k)++;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(113)
							f32->Set(tmp45,((Float)0.0));
						}
					}
				}
			}
		}
		HX_STACK_LINE(116)
		::haxor::graphics::mesh::Mesh tmp33 = this->m_sm;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(116)
		::haxor::io::FloatArray tmp34 = f32;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(116)
		tmp33->Set(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"),tmp34,(int)3);
		HX_STACK_LINE(137)
		::haxor::graphics::mesh::Mesh tmp35 = this->m_sm;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(137)
		::haxor::math::AABB3 tmp36;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(137)
		{
			HX_STACK_LINE(137)
			::haxor::context::DataContext tmp37 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(137)
			::haxor::context::DataContext _this = tmp37;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(137)
			Array< ::Dynamic > tmp38 = _this->m_aabb3;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(137)
			int tmp39 = (_this->m_naabb3 + (int)1);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(137)
			int tmp40 = _this->m_aabb3->length;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(137)
			int tmp41 = hx::Mod(tmp39,tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(137)
			int tmp42 = _this->m_naabb3 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(137)
			tmp36 = tmp38->__get(tmp42).StaticCast< ::haxor::math::AABB3 >();
		}
		HX_STACK_LINE(137)
		::haxor::math::AABB3 tmp37 = tmp36->Set((int)-1000,(int)1000,(int)-1000,(int)1000,(int)-1000,(int)1000);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(137)
		tmp35->set_bounds(tmp37);
		HX_STACK_LINE(138)
		::haxor::graphics::mesh::Mesh tmp38 = this->m_sm;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(138)
		this->set_mesh(tmp38);
		HX_STACK_LINE(139)
		::haxor::graphics::material::Material tmp39 = ::haxor::graphics::material::Material_obj::__new(HX_HCSTRING("StageMaterial","\x65","\xc1","\xf8","\x9d"));		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(139)
		this->m_mat = tmp39;
		HX_STACK_LINE(140)
		::haxor::graphics::material::Material tmp40 = this->m_mat;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(140)
		tmp40->SetBlending((int)770,(int)771);
		HX_STACK_LINE(141)
		::haxor::graphics::material::Material tmp41 = this->m_mat;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(141)
		tmp41->blend = true;
		HX_STACK_LINE(142)
		::haxor::graphics::material::Material tmp42 = this->m_mat;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(142)
		::haxor::graphics::texture::ComputeTexture tmp43 = this->m_sd;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(142)
		tmp42->SetTexture(HX_HCSTRING("SpriteData","\xef","\x48","\xa2","\xde"),tmp43);
		HX_STACK_LINE(143)
		::haxor::graphics::material::Material tmp44 = this->m_mat;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(143)
		::haxor::graphics::texture::ComputeTexture tmp45 = this->m_sd;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(143)
		int tmp46 = tmp45->m_width;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(143)
		tmp44->SetFloat(HX_HCSTRING("SpriteDataSizeX","\x08","\x6d","\x6a","\x27"),tmp46);
		HX_STACK_LINE(144)
		::haxor::graphics::material::Material tmp47 = this->m_mat;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(144)
		::haxor::graphics::texture::ComputeTexture tmp48 = this->m_sd;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(144)
		int tmp49 = tmp48->m_height;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(144)
		tmp47->SetFloat(HX_HCSTRING("SpriteDataSizeY","\x09","\x6d","\x6a","\x27"),tmp49);
		HX_STACK_LINE(145)
		Dynamic tmp50 = ::haxor::core::Asset_obj::Get(HX_HCSTRING("BunnyTexture","\x55","\xc9","\xc5","\x91"));		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(145)
		::haxor::graphics::texture::Texture tex = tmp50;		HX_STACK_VAR(tex,"tex");
		HX_STACK_LINE(146)
		::haxor::graphics::material::Material tmp51 = this->m_mat;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(146)
		bool tmp52 = (tex == null());		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(146)
		::haxor::graphics::texture::Texture tmp53;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(146)
		if ((tmp52)){
			HX_STACK_LINE(146)
			tmp53 = ::haxor::graphics::texture::Texture2D_obj::get_red();
		}
		else{
			HX_STACK_LINE(146)
			tmp53 = tex;
		}
		HX_STACK_LINE(146)
		tmp51->SetTexture(HX_HCSTRING("Texture","\xbb","\xf0","\x31","\x6c"),tmp53);
		HX_STACK_LINE(147)
		::haxor::graphics::material::Material tmp54 = this->m_mat;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(147)
		tmp54->SetFloat(HX_HCSTRING("Count","\xaf","\xb4","\x90","\xdd"),(int)0);
		HX_STACK_LINE(148)
		::haxor::graphics::material::Material tmp55 = this->m_mat;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(148)
		tmp55->cull = (int)2;
		HX_STACK_LINE(150)
		::String tmp56 = ::bm::Stage_obj::vs_stage;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(150)
		::String tmp57 = ::bm::Stage_obj::fs_stage;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(150)
		::haxor::graphics::material::Shader tmp58 = ::haxor::graphics::material::Shader_obj::__new(tmp56,tmp57);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(150)
		::haxor::graphics::material::Shader ss = tmp58;		HX_STACK_VAR(ss,"ss");
		HX_STACK_LINE(151)
		::haxor::graphics::material::Material tmp59 = this->m_mat;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(151)
		::haxor::graphics::material::Shader tmp60 = ss;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(151)
		tmp59->set_shader(tmp60);
		HX_STACK_LINE(153)
		::haxor::graphics::material::Material tmp61 = this->m_mat;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(153)
		this->set_material(tmp61);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,Initialize,(void))

Void Stage_obj::Add( ::bm::Sprite p_sprite){
{
		HX_STACK_FRAME("bm.Stage","Add",0x1cf427ce,"bm.Stage.Add","bm/Stage.hx",161,0xac0abee4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_sprite,"p_sprite")
		HX_STACK_LINE(162)
		::haxor::context::Process tmp = this->m_list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(162)
		::bm::Sprite tmp1 = p_sprite;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(162)
		tmp->Add(tmp1);
		HX_STACK_LINE(163)
		this->m_dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,Add,(void))

Void Stage_obj::Remove( ::bm::Sprite p_sprite){
{
		HX_STACK_FRAME("bm.Stage","Remove",0x28c770b7,"bm.Stage.Remove","bm/Stage.hx",171,0xac0abee4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_sprite,"p_sprite")
		HX_STACK_LINE(172)
		::haxor::context::Process tmp = this->m_list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(172)
		::bm::Sprite tmp1 = p_sprite;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(172)
		tmp->Remove(tmp1);
		HX_STACK_LINE(173)
		this->m_dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,Remove,(void))

Void Stage_obj::OnRender( ){
{
		HX_STACK_FRAME("bm.Stage","OnRender",0xb5c97908,"bm.Stage.OnRender","bm/Stage.hx",180,0xac0abee4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(181)
		bool tmp = this->m_dirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(181)
		if ((tmp)){
			HX_STACK_LINE(183)
			::haxor::graphics::material::Material tmp1 = this->m_mat;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(183)
			::haxor::context::Process tmp2 = this->m_list;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(183)
			int tmp3 = tmp2->m_length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(183)
			tmp1->SetFloat(HX_HCSTRING("Count","\xaf","\xb4","\x90","\xdd"),tmp3);
			HX_STACK_LINE(184)
			::haxor::graphics::texture::ComputeTexture tmp4 = this->m_sd;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(184)
			tmp4->Apply();
			HX_STACK_LINE(185)
			this->m_dirty = false;
		}
		HX_STACK_LINE(187)
		this->super::OnRender();
	}
return null();
}


Void Stage_obj::OnSpriteTransform( ::bm::Sprite s){
{
		HX_STACK_FRAME("bm.Stage","OnSpriteTransform",0x00e6b4b5,"bm.Stage.OnSpriteTransform","bm/Stage.hx",192,0xac0abee4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(193)
		::haxor::graphics::texture::ComputeTexture tmp = this->m_sd;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(193)
		::haxor::graphics::texture::ComputeTexture t = tmp;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(194)
		::haxor::io::Buffer tmp1 = t->m_data->get_buffer();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(194)
		::haxor::io::FloatArray f32 = ((::haxor::io::FloatArray)(tmp1));		HX_STACK_VAR(f32,"f32");
		HX_STACK_LINE(195)
		int p = s->__sdp;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(196)
		int tmp2 = p;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(196)
		Float tmp3 = s->m_x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(196)
		f32->Set(tmp2,tmp3);
		HX_STACK_LINE(197)
		int tmp4 = (p + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(197)
		Float tmp5 = s->m_y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(197)
		f32->Set(tmp4,tmp5);
		HX_STACK_LINE(198)
		this->m_dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,OnSpriteTransform,(void))

Void Stage_obj::OnSpriteBuild( ::bm::Sprite s){
{
		HX_STACK_FRAME("bm.Stage","OnSpriteBuild",0xcc24c9f7,"bm.Stage.OnSpriteBuild","bm/Stage.hx",202,0xac0abee4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(203)
		int tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(203)
		{
			HX_STACK_LINE(203)
			::haxor::context::UID tmp1 = ::bm::Stage_obj::ids;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(203)
			::haxor::context::UID _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(203)
			int tmp2 = _this->m_cache->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(203)
			bool tmp3 = (tmp2 <= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(203)
			if ((tmp3)){
				HX_STACK_LINE(203)
				tmp = (_this->m_id)++;
			}
			else{
				HX_STACK_LINE(203)
				tmp = _this->m_cache->shift();
			}
		}
		HX_STACK_LINE(203)
		s->__cid = tmp;
		HX_STACK_LINE(204)
		int tmp1 = s->__cid;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(204)
		::haxor::graphics::texture::ComputeTexture tmp2 = this->m_sd;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(204)
		int tmp3 = tmp2->m_data->m_channels;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(204)
		int tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(204)
		s->__sdp = tmp4;
		HX_STACK_LINE(205)
		::bm::Sprite tmp5 = s;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(205)
		this->OnSpriteTransform(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,OnSpriteBuild,(void))

Void Stage_obj::OnSpriteDestroy( ::bm::Sprite s){
{
		HX_STACK_FRAME("bm.Stage","OnSpriteDestroy",0x6b302003,"bm.Stage.OnSpriteDestroy","bm/Stage.hx",207,0xac0abee4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(207)
		int v = s->__cid;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(207)
		::haxor::context::UID tmp = ::bm::Stage_obj::ids;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(207)
		int tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(207)
		tmp->m_cache->push(tmp1);
		HX_STACK_LINE(207)
		v;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,OnSpriteDestroy,(void))

::bm::Stage Stage_obj::instance;

::haxor::context::UID Stage_obj::ids;

::String Stage_obj::vs_stage;

::String Stage_obj::fs_stage;


Stage_obj::Stage_obj()
{
}

void Stage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stage);
	HX_MARK_MEMBER_NAME(m_list,"m_list");
	HX_MARK_MEMBER_NAME(m_sm,"m_sm");
	HX_MARK_MEMBER_NAME(m_sd,"m_sd");
	HX_MARK_MEMBER_NAME(m_dirty,"m_dirty");
	HX_MARK_MEMBER_NAME(m_mat,"m_mat");
	::haxor::component::MeshRenderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Stage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_list,"m_list");
	HX_VISIT_MEMBER_NAME(m_sm,"m_sm");
	HX_VISIT_MEMBER_NAME(m_sd,"m_sd");
	HX_VISIT_MEMBER_NAME(m_dirty,"m_dirty");
	HX_VISIT_MEMBER_NAME(m_mat,"m_mat");
	::haxor::component::MeshRenderer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Stage_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"Add") ) { return Add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"m_sm") ) { return m_sm; }
		if (HX_FIELD_EQ(inName,"m_sd") ) { return m_sd; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"m_mat") ) { return m_mat; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_list") ) { return m_list; }
		if (HX_FIELD_EQ(inName,"Remove") ) { return Remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_dirty") ) { return m_dirty; }
		if (HX_FIELD_EQ(inName,"OnBuild") ) { return OnBuild_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"OnRender") ) { return OnRender_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"Initialize") ) { return Initialize_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"OnSpriteBuild") ) { return OnSpriteBuild_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"OnSpriteDestroy") ) { return OnSpriteDestroy_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"OnSpriteTransform") ) { return OnSpriteTransform_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Stage_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ids") ) { outValue = ids; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = instance; return true;  }
		if (HX_FIELD_EQ(inName,"vs_stage") ) { outValue = vs_stage; return true;  }
		if (HX_FIELD_EQ(inName,"fs_stage") ) { outValue = fs_stage; return true;  }
	}
	return false;
}

Dynamic Stage_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"m_sm") ) { m_sm=inValue.Cast< ::haxor::graphics::mesh::Mesh >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_sd") ) { m_sd=inValue.Cast< ::haxor::graphics::texture::ComputeTexture >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"m_mat") ) { m_mat=inValue.Cast< ::haxor::graphics::material::Material >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_list") ) { m_list=inValue.Cast< ::haxor::context::Process >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_dirty") ) { m_dirty=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Stage_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ids") ) { ids=ioValue.Cast< ::haxor::context::UID >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast< ::bm::Stage >(); return true; }
		if (HX_FIELD_EQ(inName,"vs_stage") ) { vs_stage=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"fs_stage") ) { fs_stage=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void Stage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("m_list","\xb0","\x8c","\xaa","\x8f"));
	outFields->push(HX_HCSTRING("m_sm","\x6c","\xbc","\x54","\x48"));
	outFields->push(HX_HCSTRING("m_sd","\x63","\xbc","\x54","\x48"));
	outFields->push(HX_HCSTRING("m_dirty","\x80","\x27","\x5b","\x8a"));
	outFields->push(HX_HCSTRING("m_mat","\x8e","\x8a","\xcb","\x01"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::context::Process*/ ,(int)offsetof(Stage_obj,m_list),HX_HCSTRING("m_list","\xb0","\x8c","\xaa","\x8f")},
	{hx::fsObject /*::haxor::graphics::mesh::Mesh*/ ,(int)offsetof(Stage_obj,m_sm),HX_HCSTRING("m_sm","\x6c","\xbc","\x54","\x48")},
	{hx::fsObject /*::haxor::graphics::texture::ComputeTexture*/ ,(int)offsetof(Stage_obj,m_sd),HX_HCSTRING("m_sd","\x63","\xbc","\x54","\x48")},
	{hx::fsBool,(int)offsetof(Stage_obj,m_dirty),HX_HCSTRING("m_dirty","\x80","\x27","\x5b","\x8a")},
	{hx::fsObject /*::haxor::graphics::material::Material*/ ,(int)offsetof(Stage_obj,m_mat),HX_HCSTRING("m_mat","\x8e","\x8a","\xcb","\x01")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::bm::Stage*/ ,(void *) &Stage_obj::instance,HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59")},
	{hx::fsObject /*::haxor::context::UID*/ ,(void *) &Stage_obj::ids,HX_HCSTRING("ids","\x38","\x04","\x50","\x00")},
	{hx::fsString,(void *) &Stage_obj::vs_stage,HX_HCSTRING("vs_stage","\xfc","\xa4","\x57","\x8b")},
	{hx::fsString,(void *) &Stage_obj::fs_stage,HX_HCSTRING("fs_stage","\x0c","\x83","\x30","\xf8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("m_list","\xb0","\x8c","\xaa","\x8f"),
	HX_HCSTRING("m_sm","\x6c","\xbc","\x54","\x48"),
	HX_HCSTRING("m_sd","\x63","\xbc","\x54","\x48"),
	HX_HCSTRING("m_dirty","\x80","\x27","\x5b","\x8a"),
	HX_HCSTRING("m_mat","\x8e","\x8a","\xcb","\x01"),
	HX_HCSTRING("OnBuild","\x6f","\xa1","\x79","\x1e"),
	HX_HCSTRING("Initialize","\x70","\x35","\x6c","\xe3"),
	HX_HCSTRING("Add","\x01","\xaa","\x31","\x00"),
	HX_HCSTRING("Remove","\x64","\x10","\x1d","\x39"),
	HX_HCSTRING("OnRender","\xf5","\x1d","\x88","\xbe"),
	HX_HCSTRING("OnSpriteTransform","\x28","\x8a","\x24","\xaa"),
	HX_HCSTRING("OnSpriteBuild","\xea","\x29","\x68","\x9c"),
	HX_HCSTRING("OnSpriteDestroy","\xb6","\xa2","\x01","\x5b"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stage_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Stage_obj::instance,"instance");
	HX_MARK_MEMBER_NAME(Stage_obj::ids,"ids");
	HX_MARK_MEMBER_NAME(Stage_obj::vs_stage,"vs_stage");
	HX_MARK_MEMBER_NAME(Stage_obj::fs_stage,"fs_stage");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stage_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Stage_obj::instance,"instance");
	HX_VISIT_MEMBER_NAME(Stage_obj::ids,"ids");
	HX_VISIT_MEMBER_NAME(Stage_obj::vs_stage,"vs_stage");
	HX_VISIT_MEMBER_NAME(Stage_obj::fs_stage,"fs_stage");
};

#endif

hx::Class Stage_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59"),
	HX_HCSTRING("ids","\x38","\x04","\x50","\x00"),
	HX_HCSTRING("vs_stage","\xfc","\xa4","\x57","\x8b"),
	HX_HCSTRING("fs_stage","\x0c","\x83","\x30","\xf8"),
	String(null()) };

void Stage_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("bm.Stage","\xbb","\xb3","\x96","\x15");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Stage_obj::__GetStatic;
	__mClass->mSetStaticField = &Stage_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Stage_obj >;
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

void Stage_obj::__boot()
{
	vs_stage= HX_HCSTRING("\r\n#define SPRITE_W 26.0\r\n#define SPRITE_H 37.0\r\n\r\nuniform mat4 ProjectionMatrix;\r\nuniform mat4 ViewMatrix;\r\nuniform sampler2D SpriteData;\r\nuniform float SpriteDataSizeX;\r\nuniform float SpriteDataSizeY;\r\nuniform float Count;\r\nattribute vec3 vertex;\r\nattribute vec3 position;\r\n\r\nvarying vec2 uv;\r\nvarying vec2 d_uv;\r\nvarying float v_id;\r\n\r\nvoid main()\r\n{\r\n\tvec4 v = vec4(vertex.xyz, 1.0);\r\n\tfloat sid = v.z;\r\n\tint count = int(Count);\r\n\tif (int(sid) >= count)\r\n\t{\r\n\t\tv *= 0.0;\r\n\t\tv += 10000.0;\r\n\t\tgl_Position = v;\r\n\t\treturn;\t\r\n\t}\r\n\tv.z = -v.z / 100000.0;\r\n\t\r\n\tv_id = v.z;\r\n\t\r\n\tvec2 d = vec2(0.0);\r\n\td.x = mod(sid, SpriteDataSizeX) / (SpriteDataSizeX);\r\n\td.y = (sid / SpriteDataSizeY) / (SpriteDataSizeY);\r\n\t\r\n\td_uv = d;\r\n\t\r\n\tvec4 vd = texture2D(SpriteData,d);\t\r\n\t\r\n\tuv   = v.xy;\r\n\tuv.x = uv.x + 0.5;\r\n\t\r\n\t\r\n\tfloat s \r\n\t= 1.0;\r\n\t//= Count / 500000.0;\r\n\t//s = max(0.25, 1.0 - s);\r\n\t\r\n\tv.x = (v.x * SPRITE_W*s) + vd.x;\r\n\tv.y = (v.y * SPRITE_H*s) + vd.y;// +d.y;\r\n\t\r\n\tv = (v * ViewMatrix) * ProjectionMatrix;\r\n\tgl_Position = v;\r\n}\r\n\t","\x3d","\x5d","\xd6","\xa8");
	fs_stage= HX_HCSTRING("\r\nuniform sampler2D SpriteData;\r\nuniform sampler2D Texture;\r\nuniform float Count;\r\nvarying vec2 uv;\r\nvarying vec2 d_uv;\r\nvarying float v_id;\r\n\r\nvoid main()\r\n{\r\n\tvec4 c = texture2D(Texture, uv);\t\r\n\tgl_FragColor = c;\r\n}\r\n\t","\x3e","\x08","\x77","\xba");
}

} // end namespace bm
