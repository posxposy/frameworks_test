#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_BunnyMark
#include <BunnyMark.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_bm_Sprite
#include <bm/Sprite.h>
#endif
#ifndef INCLUDED_bm_Stage
#include <bm/Stage.h>
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
#ifndef INCLUDED_haxor_component_MeshRenderer
#include <haxor/component/MeshRenderer.h>
#endif
#ifndef INCLUDED_haxor_component_Renderer
#include <haxor/component/Renderer.h>
#endif
#ifndef INCLUDED_haxor_core_Application
#include <haxor/core/Application.h>
#endif
#ifndef INCLUDED_haxor_core_Asset
#include <haxor/core/Asset.h>
#endif
#ifndef INCLUDED_haxor_core_BaseApplication
#include <haxor/core/BaseApplication.h>
#endif
#ifndef INCLUDED_haxor_core_CameraMode
#include <haxor/core/CameraMode.h>
#endif
#ifndef INCLUDED_haxor_core_Entity
#include <haxor/core/Entity.h>
#endif
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_IRenderable
#include <haxor/core/IRenderable.h>
#endif
#ifndef INCLUDED_haxor_core_IResizeable
#include <haxor/core/IResizeable.h>
#endif
#ifndef INCLUDED_haxor_core_IUpdateable
#include <haxor/core/IUpdateable.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_core_Time
#include <haxor/core/Time.h>
#endif
#ifndef INCLUDED_haxor_graphics_Screen
#include <haxor/graphics/Screen.h>
#endif
#ifndef INCLUDED_haxor_input_Input
#include <haxor/input/Input.h>
#endif
#ifndef INCLUDED_haxor_input_KeyCode
#include <haxor/input/KeyCode.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_ISerializable
#include <haxor/io/serialization/ISerializable.h>
#endif
#ifndef INCLUDED_haxor_math_AABB2
#include <haxor/math/AABB2.h>
#endif
#ifndef INCLUDED_haxor_math_Color
#include <haxor/math/Color.h>
#endif
#ifndef INCLUDED_haxor_math_Random
#include <haxor/math/Random.h>
#endif
#ifndef INCLUDED_haxor_math_Vector2
#include <haxor/math/Vector2.h>
#endif
#ifndef INCLUDED_haxor_platform_OSWindow
#include <haxor/platform/OSWindow.h>
#endif
#ifndef INCLUDED_haxor_platform_windows_Entry
#include <haxor/platform/windows/Entry.h>
#endif
#ifndef INCLUDED_haxor_platform_windows_WinApplication
#include <haxor/platform/windows/WinApplication.h>
#endif
#ifndef INCLUDED_haxor_platform_windows_Window
#include <haxor/platform/windows/Window.h>
#endif
#ifndef INCLUDED_haxor_thread_Activity
#include <haxor/thread/Activity.h>
#endif

Void BunnyMark_obj::__construct()
{
HX_STACK_FRAME("BunnyMark","new",0x00e2d5c5,"BunnyMark.new","BunnyMark.hx",37,0x5ab1c94b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(47)
	this->count = (int)0;
	HX_STACK_LINE(37)
	super::__construct();
}
;
	return null();
}

//BunnyMark_obj::~BunnyMark_obj() { }

Dynamic BunnyMark_obj::__CreateEmpty() { return  new BunnyMark_obj; }
hx::ObjectPtr< BunnyMark_obj > BunnyMark_obj::__new()
{  hx::ObjectPtr< BunnyMark_obj > _result_ = new BunnyMark_obj();
	_result_->__construct();
	return _result_;}

Dynamic BunnyMark_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BunnyMark_obj > _result_ = new BunnyMark_obj();
	_result_->__construct();
	return _result_;}

hx::Object *BunnyMark_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxor::core::IRenderable_obj)) return operator ::haxor::core::IRenderable_obj *();
	return super::__ToInterface(inType);
}

BunnyMark_obj::operator ::haxor::core::IRenderable_obj *()
	{ return new ::haxor::core::IRenderable_delegate_< BunnyMark_obj >(this); }
bool BunnyMark_obj::Load( ){
	HX_STACK_FRAME("BunnyMark","Load",0xaf267941,"BunnyMark.Load","BunnyMark.hx",50,0x5ab1c94b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(51)
	::haxor::core::Asset_obj::LoadTexture2D(HX_HCSTRING("BunnyTexture","\x55","\xc9","\xc5","\x91"),HX_HCSTRING("http://haxor.xyz/demos/bunny-mark/img/wabbit.png","\xa4","\xa3","\xbc","\x2f"));
	HX_STACK_LINE(52)
	return false;
}


Void BunnyMark_obj::Initialize( ){
{
		HX_STACK_FRAME("BunnyMark","Initialize",0x2fded6ab,"BunnyMark.Initialize","BunnyMark.hx",61,0x5ab1c94b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(60)
		::BunnyMark _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(62)
		this->InitStats();
		HX_STACK_LINE(65)
		::haxor::core::Entity tmp = ::haxor::core::Entity_obj::__new(HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(65)
		Dynamic tmp1 = tmp->AddComponent(hx::ClassOf< ::haxor::component::Camera >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(65)
		this->cam = tmp1;
		HX_STACK_LINE(66)
		::haxor::component::Camera tmp2 = this->cam;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(66)
		int tmp3 = ::haxor::core::CameraMode_obj::Ortho;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(66)
		tmp2->set_mode(tmp3);
		HX_STACK_LINE(68)
		::haxor::math::Color tmp4 = ::haxor::math::Color_obj::FromHex(HX_HCSTRING("0x222222","\x88","\xe3","\x98","\x20"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(68)
		::haxor::component::Camera tmp5 = this->cam;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(68)
		tmp5->background = tmp4;
		HX_STACK_LINE(71)
		this->count = (int)10000;
		HX_STACK_LINE(87)
		::haxor::core::Entity tmp6 = ::haxor::core::Entity_obj::__new(HX_HCSTRING("stage","\xbe","\x6a","\x0b","\x84"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(87)
		Dynamic tmp7 = tmp6->AddComponent(hx::ClassOf< ::bm::Stage >());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(87)
		this->canvas = tmp7;
		HX_STACK_LINE(88)
		::bm::Stage tmp8 = this->canvas;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(88)
		int tmp9 = this->count;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(88)
		tmp8->Initialize(tmp9);
		HX_STACK_LINE(90)
		Array< ::Dynamic > tmp10 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(90)
		this->rabbits = tmp10;
		HX_STACK_LINE(92)
		Float tmp11 = ::haxor::graphics::Screen_obj::m_height;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(92)
		Float sh = tmp11;		HX_STACK_VAR(sh,"sh");
		HX_STACK_LINE(96)
		{
			HX_STACK_LINE(96)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(96)
			while((true)){
				HX_STACK_LINE(96)
				bool tmp12 = (_g1 < (int)1000);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(96)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(96)
				if ((tmp13)){
					HX_STACK_LINE(96)
					break;
				}
				HX_STACK_LINE(96)
				int tmp14 = (_g1)++;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(96)
				int i = tmp14;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(98)
				this->AddBunny();
			}
		}
		HX_STACK_LINE(102)
		Array< int > k = Array_obj< int >::__new().Add((int)0);		HX_STACK_VAR(k,"k");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::BunnyMark,_g,Array< int >,k)
		int __ArgCount() const { return 1; }
		bool run(Float t){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","BunnyMark.hx",105,0x5ab1c94b)
			HX_STACK_ARG(t,"t")
			{
				HX_STACK_LINE(106)
				Float tmp12 = ::haxor::graphics::Screen_obj::m_width;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(106)
				Float tmp13 = (tmp12 * ((Float)0.5));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(106)
				Float lw = tmp13;		HX_STACK_VAR(lw,"lw");
				HX_STACK_LINE(107)
				Float tmp14 = ::haxor::graphics::Screen_obj::m_height;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(107)
				Float lh = tmp14;		HX_STACK_VAR(lh,"lh");
				HX_STACK_LINE(109)
				int tmp15 = _g->rabbits->length;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(109)
				Float tmp16 = (Float(tmp15) / Float((int)2));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(109)
				int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(109)
				int len = tmp17;		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(111)
				::haxor::math::Vector2 tmp18 = ::haxor::input::Input_obj::mouse;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(111)
				Float mx = tmp18->x;		HX_STACK_VAR(mx,"mx");
				HX_STACK_LINE(112)
				::haxor::math::Vector2 tmp19 = ::haxor::input::Input_obj::mouse;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(112)
				Float my = tmp19->y;		HX_STACK_VAR(my,"my");
				HX_STACK_LINE(114)
				{
					HX_STACK_LINE(114)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(114)
					while((true)){
						HX_STACK_LINE(114)
						bool tmp20 = (_g1 < len);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(114)
						bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(114)
						if ((tmp21)){
							HX_STACK_LINE(114)
							break;
						}
						HX_STACK_LINE(114)
						int tmp22 = (_g1)++;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(114)
						int i = tmp22;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(116)
						Float tmp23 = ::haxor::core::Time_obj::m_delta;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(116)
						Float tmp24 = (tmp23 * ((Float)2.0));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(116)
						Float dt = tmp24;		HX_STACK_VAR(dt,"dt");
						HX_STACK_LINE(117)
						Float tmp25 = dt;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(117)
						Float tmp26 = ::Math_obj::min(tmp25,((Float)0.033333333333333333));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(117)
						dt = tmp26;
						HX_STACK_LINE(118)
						::bm::Sprite tmp27 = _g->rabbits->__get(k->__get((int)0)).StaticCast< ::bm::Sprite >();		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(118)
						::bm::Sprite s = tmp27;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(119)
						Float tmp28 = (dt * ((Float)980.0));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(119)
						hx::SubEq(s->speed->y,tmp28);
						HX_STACK_LINE(120)
						{
							HX_STACK_LINE(120)
							::bm::Sprite _g2 = s;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(120)
							{
								HX_STACK_LINE(120)
								Float tmp29 = _g2->m_x;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(120)
								Float tmp30 = s->speed->x;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(120)
								Float tmp31 = dt;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(120)
								Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(120)
								Float tmp33 = (tmp29 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(120)
								Float v = tmp33;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(120)
								_g2->m_x = v;
								HX_STACK_LINE(120)
								::bm::Stage tmp34 = _g2->get_stage();		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(120)
								::bm::Sprite tmp35 = _g2;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(120)
								tmp34->OnSpriteTransform(tmp35);
								HX_STACK_LINE(120)
								v;
							}
						}
						HX_STACK_LINE(121)
						{
							HX_STACK_LINE(121)
							::bm::Sprite _g2 = s;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(121)
							{
								HX_STACK_LINE(121)
								Float tmp29 = _g2->m_y;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(121)
								Float tmp30 = s->speed->y;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(121)
								Float tmp31 = dt;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(121)
								Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(121)
								Float tmp33 = (tmp29 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(121)
								Float v = tmp33;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(121)
								_g2->m_y = v;
								HX_STACK_LINE(121)
								::bm::Stage tmp34 = _g2->get_stage();		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(121)
								::bm::Sprite tmp35 = _g2;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(121)
								tmp34->OnSpriteTransform(tmp35);
								HX_STACK_LINE(121)
								v;
							}
						}
						HX_STACK_LINE(123)
						Float tmp29 = s->m_x;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(123)
						Float tmp30 = lw;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(123)
						Float tmp31 = -(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(123)
						bool tmp32 = (tmp29 <= tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(123)
						if ((tmp32)){
							HX_STACK_LINE(123)
							Float tmp33;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(123)
							{
								HX_STACK_LINE(123)
								Float tmp34 = s->speed->x;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(123)
								Float p_a = tmp34;		HX_STACK_VAR(p_a,"p_a");
								HX_STACK_LINE(123)
								bool tmp35 = (p_a < (int)0);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(123)
								if ((tmp35)){
									HX_STACK_LINE(123)
									Float tmp36 = p_a;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(123)
									tmp33 = -(tmp36);
								}
								else{
									HX_STACK_LINE(123)
									tmp33 = p_a;
								}
							}
							HX_STACK_LINE(123)
							s->speed->x = tmp33;
						}
						else{
							HX_STACK_LINE(125)
							bool tmp33 = (s->m_x >= lw);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(125)
							if ((tmp33)){
								HX_STACK_LINE(125)
								Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(125)
								{
									HX_STACK_LINE(125)
									Float tmp35 = s->speed->x;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(125)
									Float p_a = tmp35;		HX_STACK_VAR(p_a,"p_a");
									HX_STACK_LINE(125)
									bool tmp36 = (p_a < (int)0);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(125)
									if ((tmp36)){
										HX_STACK_LINE(125)
										Float tmp37 = p_a;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(125)
										tmp34 = -(tmp37);
									}
									else{
										HX_STACK_LINE(125)
										tmp34 = p_a;
									}
								}
								HX_STACK_LINE(125)
								Float tmp35 = -(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(125)
								s->speed->x = tmp35;
							}
						}
						HX_STACK_LINE(127)
						bool tmp33 = (s->m_y < ((Float)0.0));		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(127)
						if ((tmp33)){
							HX_STACK_LINE(129)
							Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(129)
							{
								HX_STACK_LINE(129)
								Float tmp35 = s->speed->y;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(129)
								Float p_a = tmp35;		HX_STACK_VAR(p_a,"p_a");
								HX_STACK_LINE(129)
								bool tmp36 = (p_a < (int)0);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(129)
								if ((tmp36)){
									HX_STACK_LINE(129)
									Float tmp37 = p_a;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(129)
									tmp34 = -(tmp37);
								}
								else{
									HX_STACK_LINE(129)
									tmp34 = p_a;
								}
							}
							HX_STACK_LINE(129)
							s->speed->y = tmp34;
							HX_STACK_LINE(130)
							Float tmp35 = s->speed->y;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(130)
							bool tmp36 = (tmp35 < ((Float)1.0));		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(130)
							if ((tmp36)){
								HX_STACK_LINE(130)
								Float tmp37 = ::haxor::math::Random_obj::Range((int)100,(int)800);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(130)
								s->speed->y = tmp37;
							}
							HX_STACK_LINE(131)
							{
								HX_STACK_LINE(131)
								s->m_y = ((Float)0.0);
								HX_STACK_LINE(131)
								::bm::Stage tmp37 = s->get_stage();		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(131)
								::bm::Sprite tmp38 = s;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(131)
								tmp37->OnSpriteTransform(tmp38);
								HX_STACK_LINE(131)
								((Float)0.0);
							}
						}
						HX_STACK_LINE(133)
						(k[(int)0])++;
						HX_STACK_LINE(134)
						int tmp34 = k->__get((int)0);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(134)
						int tmp35 = _g->rabbits->length;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(134)
						bool tmp36 = (tmp34 >= tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(134)
						if ((tmp36)){
							HX_STACK_LINE(134)
							k[(int)0] = (int)0;
						}
					}
				}
				HX_STACK_LINE(137)
				int tmp20 = ::haxor::input::KeyCode_obj::Mouse0;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(137)
				bool tmp21 = ::haxor::input::Input_obj::Pressed(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(137)
				if ((tmp21)){
					HX_STACK_LINE(139)
					int tmp22 = ::haxor::input::KeyCode_obj::Mouse0;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(139)
					Float tmp23 = ::haxor::input::Input_obj::GetHoldTime(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(139)
					Float tmp24 = (tmp23 * ((Float)2.0));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(139)
					Float ht = tmp24;		HX_STACK_VAR(ht,"ht");
					HX_STACK_LINE(140)
					Float tmp25 = (ht + ((Float)1.0));		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(140)
					Float tmp26 = (tmp25 * ((Float)100.0));		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(140)
					int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(140)
					int insert = tmp27;		HX_STACK_VAR(insert,"insert");
					HX_STACK_LINE(141)
					{
						HX_STACK_LINE(141)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(141)
						while((true)){
							HX_STACK_LINE(141)
							bool tmp28 = (_g1 < insert);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(141)
							bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(141)
							if ((tmp29)){
								HX_STACK_LINE(141)
								break;
							}
							HX_STACK_LINE(141)
							int tmp30 = (_g1)++;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(141)
							int i = tmp30;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(143)
							_g->AddBunny();
						}
					}
				}
				HX_STACK_LINE(148)
				return true;
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(104)
		::haxor::thread::Activity_obj::Run( Dynamic(new _Function_1_1(_g,k)),null(),null());
	}
return null();
}


Void BunnyMark_obj::AddBunny( ){
{
		HX_STACK_FRAME("BunnyMark","AddBunny",0xd1e7d700,"BunnyMark.AddBunny","BunnyMark.hx",157,0x5ab1c94b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(158)
		Array< ::Dynamic > tmp = this->rabbits;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(158)
		int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(158)
		int tmp2 = this->count;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(158)
		bool tmp3 = (tmp1 >= tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(158)
		if ((tmp3)){
			HX_STACK_LINE(158)
			return null();
		}
		HX_STACK_LINE(159)
		Float tmp4 = ::haxor::graphics::Screen_obj::m_width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(159)
		Float sw = tmp4;		HX_STACK_VAR(sw,"sw");
		HX_STACK_LINE(160)
		Float tmp5 = ::haxor::graphics::Screen_obj::m_height;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(160)
		Float sh = tmp5;		HX_STACK_VAR(sh,"sh");
		HX_STACK_LINE(161)
		Array< ::Dynamic > tmp6 = this->rabbits;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(161)
		int tmp7 = tmp6->length;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(161)
		::String tmp8 = (HX_HCSTRING("bunny","\x46","\xa8","\xee","\xba") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(161)
		::bm::Sprite tmp9 = ::bm::Sprite_obj::__new(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(161)
		::bm::Sprite s = tmp9;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(162)
		{
			HX_STACK_LINE(162)
			Float tmp10 = sw;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(162)
			Float tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(162)
			Float tmp12 = (tmp11 * ((Float)0.45));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(162)
			Float tmp13 = (sw * ((Float)0.45));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(162)
			Float tmp14 = ::haxor::math::Random_obj::Range(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(162)
			Float v = tmp14;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(162)
			s->m_x = v;
			HX_STACK_LINE(162)
			::bm::Stage tmp15 = s->get_stage();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(162)
			::bm::Sprite tmp16 = s;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(162)
			tmp15->OnSpriteTransform(tmp16);
			HX_STACK_LINE(162)
			v;
		}
		HX_STACK_LINE(163)
		{
			HX_STACK_LINE(163)
			Float tmp10 = sh;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(163)
			Float tmp11 = (sh * ((Float)0.8));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(163)
			Float tmp12 = ::haxor::math::Random_obj::Range((int)0,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(163)
			Float tmp13 = (tmp10 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(163)
			Float v = tmp13;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(163)
			s->m_y = v;
			HX_STACK_LINE(163)
			::bm::Stage tmp14 = s->get_stage();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(163)
			::bm::Sprite tmp15 = s;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(163)
			tmp14->OnSpriteTransform(tmp15);
			HX_STACK_LINE(163)
			v;
		}
		HX_STACK_LINE(164)
		Float tmp10 = ::haxor::math::Random_obj::Range((int)-200,(int)200);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(164)
		s->speed->y = tmp10;
		HX_STACK_LINE(165)
		Float tmp11 = ::haxor::math::Random_obj::Range((int)-200,(int)200);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(165)
		s->speed->x = tmp11;
		HX_STACK_LINE(166)
		::bm::Stage tmp12 = this->canvas;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(166)
		::bm::Sprite tmp13 = s;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(166)
		tmp12->Add(tmp13);
		HX_STACK_LINE(167)
		Array< ::Dynamic > tmp14 = this->rabbits;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(167)
		::bm::Sprite tmp15 = s;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(167)
		tmp14->push(tmp15);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BunnyMark_obj,AddBunny,(void))

Void BunnyMark_obj::InitStats( ){
{
		HX_STACK_FRAME("BunnyMark","InitStats",0xea890ff4,"BunnyMark.InitStats","BunnyMark.hx",178,0x5ab1c94b)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BunnyMark_obj,InitStats,(void))

Void BunnyMark_obj::OnResize( ){
{
		HX_STACK_FRAME("BunnyMark","OnResize",0x85c4590e,"BunnyMark.OnResize","BunnyMark.hx",197,0x5ab1c94b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(198)
		this->super::OnResize();
		HX_STACK_LINE(199)
		this->ResizeCamera();
	}
return null();
}


Void BunnyMark_obj::ResizeCamera( ){
{
		HX_STACK_FRAME("BunnyMark","ResizeCamera",0xaaf5f5d4,"BunnyMark.ResizeCamera","BunnyMark.hx",203,0x5ab1c94b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(204)
		::haxor::component::Camera tmp = this->cam;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(204)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(204)
		if ((tmp1)){
			HX_STACK_LINE(206)
			Float tmp2 = ::haxor::graphics::Screen_obj::m_width;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(206)
			Float tmp3 = (tmp2 * ((Float)0.5));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(206)
			Float sw = tmp3;		HX_STACK_VAR(sw,"sw");
			HX_STACK_LINE(207)
			Float tmp4 = ::haxor::graphics::Screen_obj::m_height;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(207)
			Float sh = tmp4;		HX_STACK_VAR(sh,"sh");
			HX_STACK_LINE(208)
			::haxor::component::Camera tmp5 = this->cam;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(208)
			Float tmp6 = sw;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(208)
			Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(208)
			Float tmp8 = sw;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(208)
			Float tmp9 = sh;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(208)
			::haxor::math::AABB2 tmp10 = ::haxor::math::AABB2_obj::FromMinMax(tmp7,tmp8,(int)0,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(208)
			tmp5->set_screen(tmp10);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BunnyMark_obj,ResizeCamera,(void))

Void BunnyMark_obj::OnRender( ){
{
		HX_STACK_FRAME("BunnyMark","OnRender",0x82726a70,"BunnyMark.OnRender","BunnyMark.hx",214,0x5ab1c94b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(216)
		::haxor::core::Application tmp = this->get_application();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(216)
		::haxor::platform::windows::Window tmp1 = tmp->get_window();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(216)
		::haxor::platform::windows::Window w = tmp1;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(217)
		int tmp2 = ::haxor::core::Time_obj::m_frame;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(217)
		int tmp3 = hx::Mod(tmp2,(int)60);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(217)
		bool tmp4 = (tmp3 == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(217)
		if ((tmp4)){
			HX_STACK_LINE(217)
			int tmp5 = ::haxor::core::Time_obj::m_fps;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(217)
			::String tmp6 = (HX_HCSTRING("BunnyMark Windows - ","\x9d","\x0c","\x13","\x23") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(217)
			::String tmp7 = (tmp6 + HX_HCSTRING("fps - ","\x2a","\xbf","\x63","\x91"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(217)
			Array< ::Dynamic > tmp8 = this->rabbits;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(217)
			int tmp9 = tmp8->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(217)
			::String tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(217)
			::String tmp11 = (tmp10 + HX_HCSTRING(" bunnies","\x04","\x3e","\x60","\x78"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(217)
			w->set_title(tmp11);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BunnyMark_obj,OnRender,(void))

Void BunnyMark_obj::main( ){
{
		HX_STACK_FRAME("BunnyMark","main",0xc4ebeb34,"BunnyMark.main","BunnyMark.hx",39,0x5ab1c94b)
		HX_STACK_LINE(39)
		::haxor::platform::windows::Entry_obj::Initialize();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(BunnyMark_obj,main,(void))


BunnyMark_obj::BunnyMark_obj()
{
}

void BunnyMark_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BunnyMark);
	HX_MARK_MEMBER_NAME(cam,"cam");
	HX_MARK_MEMBER_NAME(canvas,"canvas");
	HX_MARK_MEMBER_NAME(rabbits,"rabbits");
	HX_MARK_MEMBER_NAME(count,"count");
	::haxor::platform::windows::WinApplication_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BunnyMark_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cam,"cam");
	HX_VISIT_MEMBER_NAME(canvas,"canvas");
	HX_VISIT_MEMBER_NAME(rabbits,"rabbits");
	HX_VISIT_MEMBER_NAME(count,"count");
	::haxor::platform::windows::WinApplication_obj::__Visit(HX_VISIT_ARG);
}

Dynamic BunnyMark_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cam") ) { return cam; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"Load") ) { return Load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { return count; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"canvas") ) { return canvas; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rabbits") ) { return rabbits; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"AddBunny") ) { return AddBunny_dyn(); }
		if (HX_FIELD_EQ(inName,"OnResize") ) { return OnResize_dyn(); }
		if (HX_FIELD_EQ(inName,"OnRender") ) { return OnRender_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"InitStats") ) { return InitStats_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"Initialize") ) { return Initialize_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ResizeCamera") ) { return ResizeCamera_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool BunnyMark_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true;  }
	}
	return false;
}

Dynamic BunnyMark_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cam") ) { cam=inValue.Cast< ::haxor::component::Camera >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { count=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"canvas") ) { canvas=inValue.Cast< ::bm::Stage >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rabbits") ) { rabbits=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BunnyMark_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void BunnyMark_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("cam","\x0f","\x74","\x4b","\x00"));
	outFields->push(HX_HCSTRING("canvas","\xd8","\x54","\x42","\xb8"));
	outFields->push(HX_HCSTRING("rabbits","\x59","\xb6","\x88","\xfb"));
	outFields->push(HX_HCSTRING("count","\xcf","\x44","\x63","\x4a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::component::Camera*/ ,(int)offsetof(BunnyMark_obj,cam),HX_HCSTRING("cam","\x0f","\x74","\x4b","\x00")},
	{hx::fsObject /*::bm::Stage*/ ,(int)offsetof(BunnyMark_obj,canvas),HX_HCSTRING("canvas","\xd8","\x54","\x42","\xb8")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(BunnyMark_obj,rabbits),HX_HCSTRING("rabbits","\x59","\xb6","\x88","\xfb")},
	{hx::fsInt,(int)offsetof(BunnyMark_obj,count),HX_HCSTRING("count","\xcf","\x44","\x63","\x4a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("cam","\x0f","\x74","\x4b","\x00"),
	HX_HCSTRING("canvas","\xd8","\x54","\x42","\xb8"),
	HX_HCSTRING("rabbits","\x59","\xb6","\x88","\xfb"),
	HX_HCSTRING("count","\xcf","\x44","\x63","\x4a"),
	HX_HCSTRING("Load","\x46","\xc6","\x90","\x32"),
	HX_HCSTRING("Initialize","\x70","\x35","\x6c","\xe3"),
	HX_HCSTRING("AddBunny","\x85","\x8a","\xfd","\x0d"),
	HX_HCSTRING("InitStats","\xcf","\x70","\x70","\x41"),
	HX_HCSTRING("OnResize","\x93","\x0c","\xda","\xc1"),
	HX_HCSTRING("ResizeCamera","\xd9","\x4f","\xac","\x63"),
	HX_HCSTRING("OnRender","\xf5","\x1d","\x88","\xbe"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BunnyMark_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BunnyMark_obj::__mClass,"__mClass");
};

#endif

hx::Class BunnyMark_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("main","\x39","\x38","\x56","\x48"),
	String(null()) };

void BunnyMark_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("BunnyMark","\x53","\x8f","\x71","\x3e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BunnyMark_obj::__GetStatic;
	__mClass->mSetStaticField = &BunnyMark_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BunnyMark_obj >;
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

