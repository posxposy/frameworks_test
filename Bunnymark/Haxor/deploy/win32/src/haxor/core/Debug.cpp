#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_haxor_component_Transform
#include <haxor/component/Transform.h>
#endif
#ifndef INCLUDED_haxor_component_light_Light
#include <haxor/component/light/Light.h>
#endif
#ifndef INCLUDED_haxor_component_light_PointLight
#include <haxor/component/light/PointLight.h>
#endif
#ifndef INCLUDED_haxor_component_physics_BoxCollider
#include <haxor/component/physics/BoxCollider.h>
#endif
#ifndef INCLUDED_haxor_component_physics_Collider
#include <haxor/component/physics/Collider.h>
#endif
#ifndef INCLUDED_haxor_component_physics_SphereCollider
#include <haxor/component/physics/SphereCollider.h>
#endif
#ifndef INCLUDED_haxor_context_DataContext
#include <haxor/context/DataContext.h>
#endif
#ifndef INCLUDED_haxor_context_EngineContext
#include <haxor/context/EngineContext.h>
#endif
#ifndef INCLUDED_haxor_context_GizmoContext
#include <haxor/context/GizmoContext.h>
#endif
#ifndef INCLUDED_haxor_core_ColliderType
#include <haxor/core/ColliderType.h>
#endif
#ifndef INCLUDED_haxor_core_Debug
#include <haxor/core/Debug.h>
#endif
#ifndef INCLUDED_haxor_core_Entity
#include <haxor/core/Entity.h>
#endif
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_IResizeable
#include <haxor/core/IResizeable.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_graphics_Gizmo
#include <haxor/graphics/Gizmo.h>
#endif
#ifndef INCLUDED_haxor_graphics_mesh_Mesh
#include <haxor/graphics/mesh/Mesh.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_ISerializable
#include <haxor/io/serialization/ISerializable.h>
#endif
#ifndef INCLUDED_haxor_math_AABB3
#include <haxor/math/AABB3.h>
#endif
#ifndef INCLUDED_haxor_math_Color
#include <haxor/math/Color.h>
#endif
#ifndef INCLUDED_haxor_math_Matrix4
#include <haxor/math/Matrix4.h>
#endif
#ifndef INCLUDED_haxor_math_Vector3
#include <haxor/math/Vector3.h>
#endif
#ifndef INCLUDED_haxor_math_Vector4
#include <haxor/math/Vector4.h>
#endif
namespace haxor{
namespace core{

Void Debug_obj::__construct()
{
	return null();
}

//Debug_obj::~Debug_obj() { }

Dynamic Debug_obj::__CreateEmpty() { return  new Debug_obj; }
hx::ObjectPtr< Debug_obj > Debug_obj::__new()
{  hx::ObjectPtr< Debug_obj > _result_ = new Debug_obj();
	_result_->__construct();
	return _result_;}

Dynamic Debug_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Debug_obj > _result_ = new Debug_obj();
	_result_->__construct();
	return _result_;}

bool Debug_obj::collider;

bool Debug_obj::colliderAABB;

bool Debug_obj::colliderSB;

bool Debug_obj::transform;

bool Debug_obj::renderer;

bool Debug_obj::rendererAABB;

bool Debug_obj::light;

::haxor::math::Color Debug_obj::color_white;

::haxor::math::Color Debug_obj::color_collider;

::haxor::math::Color Debug_obj::color_trigger;

::haxor::math::Color Debug_obj::color_bounding;

::haxor::math::Color Debug_obj::color_renderer;

::haxor::math::Color Debug_obj::color_light;

Void Debug_obj::Initialize( ){
{
		HX_STACK_FRAME("haxor.core.Debug","Initialize",0x9c5fe88e,"haxor.core.Debug.Initialize","haxor/core/Debug.hx",75,0xbbdb7c8e)
		HX_STACK_LINE(76)
		::haxor::core::Debug_obj::collider = false;
		HX_STACK_LINE(77)
		::haxor::core::Debug_obj::colliderAABB = false;
		HX_STACK_LINE(78)
		::haxor::core::Debug_obj::colliderSB = false;
		HX_STACK_LINE(79)
		::haxor::core::Debug_obj::transform = false;
		HX_STACK_LINE(80)
		::haxor::core::Debug_obj::renderer = false;
		HX_STACK_LINE(81)
		::haxor::core::Debug_obj::rendererAABB = false;
		HX_STACK_LINE(82)
		::haxor::core::Debug_obj::light = false;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,Initialize,(void))

Void Debug_obj::Collider( ::haxor::component::physics::Collider c){
{
		HX_STACK_FRAME("haxor.core.Debug","Collider",0xf621aaf2,"haxor.core.Debug.Collider","haxor/core/Debug.hx",90,0xbbdb7c8e)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(91)
		::haxor::component::Transform tmp = c->m_entity->m_transform;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(91)
		::haxor::component::Transform t = tmp;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(92)
		::haxor::math::Matrix4 tmp1 = t->get_WorldMatrix();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(92)
		::haxor::math::Matrix4 wm = tmp1;		HX_STACK_VAR(wm,"wm");
		HX_STACK_LINE(93)
		::haxor::component::physics::BoxCollider bc;		HX_STACK_VAR(bc,"bc");
		HX_STACK_LINE(94)
		::haxor::component::physics::SphereCollider sc;		HX_STACK_VAR(sc,"sc");
		HX_STACK_LINE(95)
		::haxor::math::Vector3 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(95)
		{
			HX_STACK_LINE(95)
			::haxor::context::DataContext tmp3 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(95)
			::haxor::context::DataContext _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(95)
			Array< ::Dynamic > tmp4 = _this->m_v3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(95)
			int tmp5 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(95)
			int tmp6 = _this->m_v3->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(95)
			int tmp7 = hx::Mod(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(95)
			int tmp8 = _this->m_nv3 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(95)
			tmp2 = tmp4->__get(tmp8).StaticCast< ::haxor::math::Vector3 >();
		}
		HX_STACK_LINE(95)
		::haxor::math::Vector3 tmp3 = tmp2->Set(null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(95)
		::haxor::math::Vector3 o = tmp3;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(96)
		bool tmp4 = c->trigger;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(96)
		::haxor::math::Color tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(96)
		if ((tmp4)){
			HX_STACK_LINE(96)
			tmp5 = ::haxor::core::Debug_obj::color_trigger;
		}
		else{
			HX_STACK_LINE(96)
			tmp5 = ::haxor::core::Debug_obj::color_collider;
		}
		HX_STACK_LINE(96)
		::haxor::math::Color cl = tmp5;		HX_STACK_VAR(cl,"cl");
		HX_STACK_LINE(98)
		bool tmp6 = c->get_enabled();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(98)
		Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(98)
		if ((tmp6)){
			HX_STACK_LINE(98)
			tmp7 = ((Float)1.0);
		}
		else{
			HX_STACK_LINE(98)
			tmp7 = ((Float)0.01);
		}
		HX_STACK_LINE(98)
		cl->a = tmp7;
		HX_STACK_LINE(100)
		{
			HX_STACK_LINE(100)
			::haxor::core::ColliderType tmp8 = c->get_type();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(100)
			::haxor::core::ColliderType _g = tmp8;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(100)
			switch( (int)(_g->__Index())){
				case (int)2: {
					HX_STACK_LINE(103)
					bc = ((::haxor::component::physics::BoxCollider)(c));
					HX_STACK_LINE(104)
					::haxor::math::Vector3 tmp9 = bc->m_center;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(104)
					o->Set3(tmp9);
					HX_STACK_LINE(105)
					::haxor::math::Vector3 tmp10 = o;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(105)
					::haxor::math::Vector3 tmp11 = bc->m_size;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(105)
					::haxor::math::Color tmp12 = cl;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(105)
					::haxor::math::Matrix4 tmp13 = wm;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(105)
					::haxor::graphics::Gizmo_obj::WireCube(tmp10,tmp11,tmp12,tmp13);
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(108)
					sc = ((::haxor::component::physics::SphereCollider)(c));
					HX_STACK_LINE(109)
					::haxor::math::Vector3 tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(109)
					{
						HX_STACK_LINE(109)
						::haxor::context::DataContext tmp10 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(109)
						::haxor::context::DataContext _this = tmp10;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(109)
						Array< ::Dynamic > tmp11 = _this->m_v3;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(109)
						int tmp12 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(109)
						int tmp13 = _this->m_v3->length;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(109)
						int tmp14 = hx::Mod(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(109)
						int tmp15 = _this->m_nv3 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(109)
						tmp9 = tmp11->__get(tmp15).StaticCast< ::haxor::math::Vector3 >();
					}
					HX_STACK_LINE(109)
					::haxor::math::Vector3 tmp10 = tmp9->Set(((Float)0.5773507),((Float)0.5773507),((Float)0.5773507));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(109)
					::haxor::math::Vector3 rad = tmp10;		HX_STACK_VAR(rad,"rad");
					HX_STACK_LINE(110)
					::haxor::math::Matrix4 tmp11 = wm;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(110)
					::haxor::math::Matrix4 tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(110)
					{
						HX_STACK_LINE(110)
						::haxor::context::DataContext tmp13 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(110)
						::haxor::context::DataContext _this = tmp13;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(110)
						Array< ::Dynamic > tmp14 = _this->m_m4;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(110)
						int tmp15 = (_this->m_nm4 + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(110)
						int tmp16 = _this->m_m4->length;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(110)
						int tmp17 = hx::Mod(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(110)
						int tmp18 = _this->m_nq = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(110)
						tmp12 = tmp14->__get(tmp18).StaticCast< ::haxor::math::Matrix4 >();
					}
					HX_STACK_LINE(110)
					::haxor::math::Matrix4 tmp13 = ::haxor::math::Matrix4_obj::GetScale(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(110)
					::haxor::math::Matrix4 sm = tmp13;		HX_STACK_VAR(sm,"sm");
					HX_STACK_LINE(111)
					{
						HX_STACK_LINE(111)
						Float tmp14 = (sm->m00 * rad->x);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(111)
						Float tmp15 = (sm->m01 * rad->y);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(111)
						Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(111)
						Float tmp17 = (sm->m02 * rad->z);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(111)
						Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(111)
						Float vx = tmp18;		HX_STACK_VAR(vx,"vx");
						HX_STACK_LINE(111)
						Float tmp19 = (sm->m10 * rad->x);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(111)
						Float tmp20 = (sm->m11 * rad->y);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(111)
						Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(111)
						Float tmp22 = (sm->m12 * rad->z);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(111)
						Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(111)
						Float vy = tmp23;		HX_STACK_VAR(vy,"vy");
						HX_STACK_LINE(111)
						Float tmp24 = (sm->m20 * rad->x);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(111)
						Float tmp25 = (sm->m21 * rad->y);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(111)
						Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(111)
						Float tmp27 = (sm->m22 * rad->z);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(111)
						Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(111)
						Float vz = tmp28;		HX_STACK_VAR(vz,"vz");
						HX_STACK_LINE(111)
						rad->x = vx;
						HX_STACK_LINE(111)
						rad->y = vy;
						HX_STACK_LINE(111)
						rad->z = vz;
						HX_STACK_LINE(111)
						rad;
					}
					HX_STACK_LINE(112)
					::haxor::math::Vector3 tmp14 = sc->m_center;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(112)
					o->Set3(tmp14);
					HX_STACK_LINE(113)
					::haxor::math::Vector3 tmp15 = o;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(113)
					Float tmp16 = (rad->x * rad->x);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(113)
					Float tmp17 = (rad->y * rad->y);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(113)
					Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(113)
					Float tmp19 = (rad->z * rad->z);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(113)
					Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(113)
					Float tmp21 = ::Math_obj::sqrt(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(113)
					Float tmp22 = sc->get_radius();		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(113)
					Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(113)
					::haxor::math::Color tmp24 = cl;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(113)
					::haxor::math::Matrix4 tmp25 = wm;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(113)
					::haxor::graphics::Gizmo_obj::WireSphere(tmp15,tmp23,tmp24,tmp25);
				}
				;break;
				case (int)0: {
				}
				;break;
				case (int)1: {
				}
				;break;
				case (int)5: {
				}
				;break;
				case (int)4: {
				}
				;break;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,Collider,(void))

Void Debug_obj::BoundingAABB( ::haxor::math::AABB3 c){
{
		HX_STACK_FRAME("haxor.core.Debug","BoundingAABB",0xd7de06c2,"haxor.core.Debug.BoundingAABB","haxor/core/Debug.hx",127,0xbbdb7c8e)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(128)
		::haxor::math::AABB3 bb = c;		HX_STACK_VAR(bb,"bb");
		HX_STACK_LINE(129)
		::haxor::math::Vector3 tmp = bb->get_center();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(129)
		::haxor::math::Vector3 tmp1 = ::haxor::math::Vector3_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(129)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(129)
		{
			HX_STACK_LINE(129)
			Float tmp3 = (bb->m_xMax - bb->m_xMin);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(129)
			Float p_a = tmp3;		HX_STACK_VAR(p_a,"p_a");
			HX_STACK_LINE(129)
			bool tmp4 = (p_a < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(129)
			if ((tmp4)){
				HX_STACK_LINE(129)
				Float tmp5 = p_a;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(129)
				tmp2 = -(tmp5);
			}
			else{
				HX_STACK_LINE(129)
				tmp2 = p_a;
			}
		}
		HX_STACK_LINE(129)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(129)
		{
			HX_STACK_LINE(129)
			Float tmp4 = (bb->m_yMax - bb->m_yMin);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(129)
			Float p_a = tmp4;		HX_STACK_VAR(p_a,"p_a");
			HX_STACK_LINE(129)
			bool tmp5 = (p_a < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(129)
			if ((tmp5)){
				HX_STACK_LINE(129)
				Float tmp6 = p_a;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(129)
				tmp3 = -(tmp6);
			}
			else{
				HX_STACK_LINE(129)
				tmp3 = p_a;
			}
		}
		HX_STACK_LINE(129)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(129)
		{
			HX_STACK_LINE(129)
			Float tmp5 = (bb->m_zMax - bb->m_zMin);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(129)
			Float p_a = tmp5;		HX_STACK_VAR(p_a,"p_a");
			HX_STACK_LINE(129)
			bool tmp6 = (p_a < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(129)
			if ((tmp6)){
				HX_STACK_LINE(129)
				Float tmp7 = p_a;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(129)
				tmp4 = -(tmp7);
			}
			else{
				HX_STACK_LINE(129)
				tmp4 = p_a;
			}
		}
		HX_STACK_LINE(129)
		::haxor::math::Vector3 tmp5 = tmp1->Set(tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(129)
		::haxor::math::Color tmp6 = ::haxor::core::Debug_obj::color_bounding;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(129)
		::haxor::graphics::Gizmo_obj::WireCube(tmp,tmp5,tmp6,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,BoundingAABB,(void))

Void Debug_obj::BoundingSphere( ::haxor::math::Vector4 c){
{
		HX_STACK_FRAME("haxor.core.Debug","BoundingSphere",0x6bf98bcf,"haxor.core.Debug.BoundingSphere","haxor/core/Debug.hx",137,0xbbdb7c8e)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(138)
		::haxor::math::Vector4 sb = c;		HX_STACK_VAR(sb,"sb");
		HX_STACK_LINE(139)
		::haxor::math::Vector3 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(139)
		{
			HX_STACK_LINE(139)
			::haxor::context::DataContext tmp1 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(139)
			::haxor::context::DataContext _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(139)
			Array< ::Dynamic > tmp2 = _this->m_v3;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(139)
			int tmp3 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(139)
			int tmp4 = _this->m_v3->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(139)
			int tmp5 = hx::Mod(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(139)
			int tmp6 = _this->m_nv3 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(139)
			tmp = tmp2->__get(tmp6).StaticCast< ::haxor::math::Vector3 >();
		}
		HX_STACK_LINE(139)
		Float tmp1 = sb->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(139)
		Float tmp2 = sb->y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(139)
		Float tmp3 = sb->z;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(139)
		::haxor::math::Vector3 tmp4 = tmp->Set(tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(139)
		Float tmp5 = sb->w;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(139)
		::haxor::math::Color tmp6 = ::haxor::core::Debug_obj::color_bounding;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(139)
		::haxor::graphics::Gizmo_obj::WireSphere(tmp4,tmp5,tmp6,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,BoundingSphere,(void))

Void Debug_obj::MeshRenderer( ::haxor::component::MeshRenderer r){
{
		HX_STACK_FRAME("haxor.core.Debug","MeshRenderer",0xe205830e,"haxor.core.Debug.MeshRenderer","haxor/core/Debug.hx",147,0xbbdb7c8e)
		HX_STACK_ARG(r,"r")
		HX_STACK_LINE(148)
		::haxor::math::AABB3 tmp = r->m_mesh->m_bounds;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(148)
		::haxor::math::AABB3 bb = tmp;		HX_STACK_VAR(bb,"bb");
		HX_STACK_LINE(149)
		::haxor::math::Color tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(149)
		{
			HX_STACK_LINE(149)
			::haxor::context::DataContext tmp2 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(149)
			::haxor::context::DataContext _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(149)
			Array< ::Dynamic > tmp3 = _this->m_c;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(149)
			int tmp4 = (_this->m_nc + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(149)
			int tmp5 = _this->m_c->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(149)
			int tmp6 = hx::Mod(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(149)
			int tmp7 = _this->m_nc = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(149)
			tmp1 = tmp3->__get(tmp7).StaticCast< ::haxor::math::Color >();
		}
		HX_STACK_LINE(149)
		::haxor::math::Color tmp2 = ::haxor::core::Debug_obj::color_renderer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(149)
		::haxor::math::Color tmp3 = tmp1->SetColor(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(149)
		::haxor::math::Color c = tmp3;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(150)
		bool tmp4 = r->m_visible;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(150)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(150)
		if ((tmp4)){
			HX_STACK_LINE(150)
			bool tmp6 = r->m_culled;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(150)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(150)
			tmp5 = !(tmp7);
		}
		else{
			HX_STACK_LINE(150)
			tmp5 = false;
		}
		HX_STACK_LINE(150)
		Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(150)
		if ((tmp5)){
			HX_STACK_LINE(150)
			tmp6 = ((Float)1.0);
		}
		else{
			HX_STACK_LINE(150)
			tmp6 = ((Float)0.2);
		}
		HX_STACK_LINE(150)
		c->a = tmp6;
		HX_STACK_LINE(151)
		::haxor::math::Vector3 tmp7 = bb->get_center();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(151)
		::haxor::math::Vector3 tmp8 = ::haxor::math::Vector3_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(151)
		Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(151)
		{
			HX_STACK_LINE(151)
			Float tmp10 = (bb->m_xMax - bb->m_xMin);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(151)
			Float p_a = tmp10;		HX_STACK_VAR(p_a,"p_a");
			HX_STACK_LINE(151)
			bool tmp11 = (p_a < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(151)
			if ((tmp11)){
				HX_STACK_LINE(151)
				Float tmp12 = p_a;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(151)
				tmp9 = -(tmp12);
			}
			else{
				HX_STACK_LINE(151)
				tmp9 = p_a;
			}
		}
		HX_STACK_LINE(151)
		Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(151)
		{
			HX_STACK_LINE(151)
			Float tmp11 = (bb->m_yMax - bb->m_yMin);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(151)
			Float p_a = tmp11;		HX_STACK_VAR(p_a,"p_a");
			HX_STACK_LINE(151)
			bool tmp12 = (p_a < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(151)
			if ((tmp12)){
				HX_STACK_LINE(151)
				Float tmp13 = p_a;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(151)
				tmp10 = -(tmp13);
			}
			else{
				HX_STACK_LINE(151)
				tmp10 = p_a;
			}
		}
		HX_STACK_LINE(151)
		Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(151)
		{
			HX_STACK_LINE(151)
			Float tmp12 = (bb->m_zMax - bb->m_zMin);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(151)
			Float p_a = tmp12;		HX_STACK_VAR(p_a,"p_a");
			HX_STACK_LINE(151)
			bool tmp13 = (p_a < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(151)
			if ((tmp13)){
				HX_STACK_LINE(151)
				Float tmp14 = p_a;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(151)
				tmp11 = -(tmp14);
			}
			else{
				HX_STACK_LINE(151)
				tmp11 = p_a;
			}
		}
		HX_STACK_LINE(151)
		::haxor::math::Vector3 tmp12 = tmp8->Set(tmp9,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(151)
		::haxor::math::Color tmp13 = c;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(151)
		::haxor::component::Transform tmp14 = r->m_entity->m_transform;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(151)
		::haxor::math::Matrix4 tmp15 = tmp14->get_WorldMatrix();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(151)
		::haxor::graphics::Gizmo_obj::WireCube(tmp7,tmp12,tmp13,tmp15);
		HX_STACK_LINE(153)
		bool tmp16 = ::haxor::core::Debug_obj::rendererAABB;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(153)
		if ((tmp16)){
			HX_STACK_LINE(155)
			bb = r->m_aabb;
			HX_STACK_LINE(156)
			::haxor::math::Color tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(156)
			{
				HX_STACK_LINE(156)
				::haxor::context::DataContext tmp18 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(156)
				::haxor::context::DataContext _this = tmp18;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(156)
				Array< ::Dynamic > tmp19 = _this->m_c;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(156)
				int tmp20 = (_this->m_nc + (int)1);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(156)
				int tmp21 = _this->m_c->length;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(156)
				int tmp22 = hx::Mod(tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(156)
				int tmp23 = _this->m_nc = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(156)
				tmp17 = tmp19->__get(tmp23).StaticCast< ::haxor::math::Color >();
			}
			HX_STACK_LINE(156)
			::haxor::math::Color tmp18 = ::haxor::core::Debug_obj::color_bounding;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(156)
			::haxor::math::Color tmp19 = tmp17->SetColor(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(156)
			c = tmp19;
			HX_STACK_LINE(157)
			bool tmp20 = r->m_visible;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(157)
			bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(157)
			if ((tmp20)){
				HX_STACK_LINE(157)
				bool tmp22 = r->m_culled;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(157)
				bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(157)
				tmp21 = !(tmp23);
			}
			else{
				HX_STACK_LINE(157)
				tmp21 = false;
			}
			HX_STACK_LINE(157)
			Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(157)
			if ((tmp21)){
				HX_STACK_LINE(157)
				tmp22 = ((Float)1.0);
			}
			else{
				HX_STACK_LINE(157)
				tmp22 = ((Float)0.2);
			}
			HX_STACK_LINE(157)
			c->a = tmp22;
			HX_STACK_LINE(158)
			::haxor::math::Vector3 tmp23 = bb->get_center();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(158)
			::haxor::math::Vector3 tmp24 = ::haxor::math::Vector3_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(158)
			Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(158)
			{
				HX_STACK_LINE(158)
				Float tmp26 = (bb->m_xMax - bb->m_xMin);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(158)
				Float p_a = tmp26;		HX_STACK_VAR(p_a,"p_a");
				HX_STACK_LINE(158)
				bool tmp27 = (p_a < (int)0);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(158)
				if ((tmp27)){
					HX_STACK_LINE(158)
					Float tmp28 = p_a;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(158)
					tmp25 = -(tmp28);
				}
				else{
					HX_STACK_LINE(158)
					tmp25 = p_a;
				}
			}
			HX_STACK_LINE(158)
			Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(158)
			{
				HX_STACK_LINE(158)
				Float tmp27 = (bb->m_yMax - bb->m_yMin);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(158)
				Float p_a = tmp27;		HX_STACK_VAR(p_a,"p_a");
				HX_STACK_LINE(158)
				bool tmp28 = (p_a < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(158)
				if ((tmp28)){
					HX_STACK_LINE(158)
					Float tmp29 = p_a;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(158)
					tmp26 = -(tmp29);
				}
				else{
					HX_STACK_LINE(158)
					tmp26 = p_a;
				}
			}
			HX_STACK_LINE(158)
			Float tmp27;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(158)
			{
				HX_STACK_LINE(158)
				Float tmp28 = (bb->m_zMax - bb->m_zMin);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(158)
				Float p_a = tmp28;		HX_STACK_VAR(p_a,"p_a");
				HX_STACK_LINE(158)
				bool tmp29 = (p_a < (int)0);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(158)
				if ((tmp29)){
					HX_STACK_LINE(158)
					Float tmp30 = p_a;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(158)
					tmp27 = -(tmp30);
				}
				else{
					HX_STACK_LINE(158)
					tmp27 = p_a;
				}
			}
			HX_STACK_LINE(158)
			::haxor::math::Vector3 tmp28 = tmp24->Set(tmp25,tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(158)
			::haxor::math::Color tmp29 = c;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(158)
			::haxor::graphics::Gizmo_obj::WireCube(tmp23,tmp28,tmp29,null());
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,MeshRenderer,(void))

Void Debug_obj::Transform( ::haxor::component::Transform t){
{
		HX_STACK_FRAME("haxor.core.Debug","Transform",0xdb99a7ee,"haxor.core.Debug.Transform","haxor/core/Debug.hx",169,0xbbdb7c8e)
		HX_STACK_ARG(t,"t")
		HX_STACK_LINE(169)
		::haxor::math::Vector3 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(169)
		{
			HX_STACK_LINE(169)
			::haxor::context::DataContext tmp1 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(169)
			::haxor::context::DataContext _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(169)
			Array< ::Dynamic > tmp2 = _this->m_v3;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(169)
			int tmp3 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(169)
			int tmp4 = _this->m_v3->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(169)
			int tmp5 = hx::Mod(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(169)
			int tmp6 = _this->m_nv3 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(169)
			tmp = tmp2->__get(tmp6).StaticCast< ::haxor::math::Vector3 >();
		}
		HX_STACK_LINE(169)
		::haxor::math::Vector3 tmp1 = tmp->Set(null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(169)
		::haxor::math::Vector3 p_position = tmp1;		HX_STACK_VAR(p_position,"p_position");
		HX_STACK_LINE(169)
		::haxor::math::Vector3 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(169)
		{
			HX_STACK_LINE(169)
			::haxor::context::DataContext tmp3 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(169)
			::haxor::context::DataContext _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(169)
			Array< ::Dynamic > tmp4 = _this->m_v3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(169)
			int tmp5 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(169)
			int tmp6 = _this->m_v3->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(169)
			int tmp7 = hx::Mod(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(169)
			int tmp8 = _this->m_nv3 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(169)
			tmp2 = tmp4->__get(tmp8).StaticCast< ::haxor::math::Vector3 >();
		}
		HX_STACK_LINE(169)
		::haxor::math::Vector3 tmp3 = tmp2->Set(((Float)0.5),((Float)0.5),((Float)0.5));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(169)
		::haxor::math::Vector3 p_size = tmp3;		HX_STACK_VAR(p_size,"p_size");
		HX_STACK_LINE(169)
		::haxor::math::Matrix4 tmp4 = t->get_WorldMatrix();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(169)
		::haxor::math::Matrix4 p_transform = tmp4;		HX_STACK_VAR(p_transform,"p_transform");
		HX_STACK_LINE(169)
		::haxor::context::GizmoContext tmp5 = ::haxor::context::EngineContext_obj::gizmo;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(169)
		::haxor::math::Vector3 tmp6 = p_position;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(169)
		::haxor::math::Vector3 tmp7 = p_size;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(169)
		::haxor::math::Color tmp8 = ::haxor::core::Debug_obj::color_white;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(169)
		::haxor::math::Matrix4 tmp9 = p_transform;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(169)
		tmp5->DrawAxis(tmp6,tmp7,tmp8,tmp9);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,Transform,(void))

Void Debug_obj::Camera( ::haxor::component::Camera c){
{
		HX_STACK_FRAME("haxor.core.Debug","Camera",0x9ef906e3,"haxor.core.Debug.Camera","haxor/core/Debug.hx",177,0xbbdb7c8e)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(179)
		::haxor::component::Transform tmp = c->m_entity->m_transform;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(179)
		::haxor::core::Debug_obj::Transform(tmp);
		HX_STACK_LINE(180)
		::haxor::component::Transform tmp1 = c->m_entity->m_transform;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(180)
		::haxor::component::Transform tmp2 = tmp1->m_parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(180)
		::haxor::core::Debug_obj::Transform(tmp2);
		HX_STACK_LINE(182)
		Array< ::Dynamic > fp = c->m_frustum;		HX_STACK_VAR(fp,"fp");
		HX_STACK_LINE(183)
		Array< ::Dynamic > tmp3 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(183)
		Array< ::Dynamic > l = tmp3;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(184)
		{
			HX_STACK_LINE(184)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(184)
			int _g = fp->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(184)
			while((true)){
				HX_STACK_LINE(184)
				bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(184)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(184)
				if ((tmp5)){
					HX_STACK_LINE(184)
					break;
				}
				HX_STACK_LINE(184)
				int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(184)
				int i = tmp6;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(186)
				::haxor::math::Vector4 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(186)
				{
					HX_STACK_LINE(186)
					::haxor::context::DataContext tmp8 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(186)
					::haxor::context::DataContext _this = tmp8;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(186)
					Array< ::Dynamic > tmp9 = _this->m_v4;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(186)
					int tmp10 = (_this->m_nv4 + (int)1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(186)
					int tmp11 = _this->m_v4->length;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(186)
					int tmp12 = hx::Mod(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(186)
					int tmp13 = _this->m_nv4 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(186)
					tmp7 = tmp9->__get(tmp13).StaticCast< ::haxor::math::Vector4 >();
				}
				HX_STACK_LINE(186)
				::haxor::math::Vector4 tmp8 = fp->__get(i).StaticCast< ::haxor::math::Vector4 >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(186)
				::haxor::math::Vector4 tmp9 = tmp7->Set4(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(186)
				l->push(tmp9);
				HX_STACK_LINE(187)
				{
					HX_STACK_LINE(187)
					::haxor::component::Transform tmp10 = c->m_entity->m_transform;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(187)
					::haxor::math::Matrix4 tmp11 = tmp10->get_WorldMatrix();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(187)
					::haxor::math::Matrix4 _this = tmp11;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(187)
					::haxor::math::Vector4 tmp12 = l->__get(i).StaticCast< ::haxor::math::Vector4 >();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(187)
					::haxor::math::Vector4 p_point = tmp12;		HX_STACK_VAR(p_point,"p_point");
					HX_STACK_LINE(187)
					Float tmp13 = (_this->m00 * p_point->x);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(187)
					Float tmp14 = (_this->m01 * p_point->y);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(187)
					Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(187)
					Float tmp16 = (_this->m02 * p_point->z);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(187)
					Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(187)
					Float tmp18 = (_this->m03 * p_point->w);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(187)
					Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(187)
					Float vx = tmp19;		HX_STACK_VAR(vx,"vx");
					HX_STACK_LINE(187)
					Float tmp20 = (_this->m10 * p_point->x);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(187)
					Float tmp21 = (_this->m11 * p_point->y);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(187)
					Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(187)
					Float tmp23 = (_this->m12 * p_point->z);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(187)
					Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(187)
					Float tmp25 = (_this->m13 * p_point->w);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(187)
					Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(187)
					Float vy = tmp26;		HX_STACK_VAR(vy,"vy");
					HX_STACK_LINE(187)
					Float tmp27 = (_this->m20 * p_point->x);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(187)
					Float tmp28 = (_this->m21 * p_point->y);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(187)
					Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(187)
					Float tmp30 = (_this->m22 * p_point->z);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(187)
					Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(187)
					Float tmp32 = (_this->m23 * p_point->w);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(187)
					Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(187)
					Float vz = tmp33;		HX_STACK_VAR(vz,"vz");
					HX_STACK_LINE(187)
					Float tmp34 = (_this->m30 * p_point->x);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(187)
					Float tmp35 = (_this->m31 * p_point->y);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(187)
					Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(187)
					Float tmp37 = (_this->m32 * p_point->z);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(187)
					Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(187)
					Float tmp39 = (_this->m33 * p_point->w);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(187)
					Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(187)
					Float vw = tmp40;		HX_STACK_VAR(vw,"vw");
					HX_STACK_LINE(187)
					p_point->x = vx;
					HX_STACK_LINE(187)
					p_point->y = vy;
					HX_STACK_LINE(187)
					p_point->z = vz;
					HX_STACK_LINE(187)
					p_point->w = vw;
					HX_STACK_LINE(187)
					p_point;
				}
			}
		}
		HX_STACK_LINE(189)
		fp = l;
		HX_STACK_LINE(191)
		::haxor::math::Vector3 tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(191)
		{
			HX_STACK_LINE(191)
			::haxor::context::DataContext tmp5 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(191)
			::haxor::context::DataContext _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(191)
			Array< ::Dynamic > tmp6 = _this->m_v3;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(191)
			int tmp7 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(191)
			int tmp8 = _this->m_v3->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(191)
			int tmp9 = hx::Mod(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(191)
			int tmp10 = _this->m_nv3 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(191)
			tmp4 = tmp6->__get(tmp10).StaticCast< ::haxor::math::Vector3 >();
		}
		HX_STACK_LINE(191)
		::haxor::math::Vector3 p0 = tmp4;		HX_STACK_VAR(p0,"p0");
		HX_STACK_LINE(192)
		::haxor::math::Vector3 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(192)
		{
			HX_STACK_LINE(192)
			::haxor::context::DataContext tmp6 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(192)
			::haxor::context::DataContext _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(192)
			Array< ::Dynamic > tmp7 = _this->m_v3;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(192)
			int tmp8 = (_this->m_nv3 + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(192)
			int tmp9 = _this->m_v3->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(192)
			int tmp10 = hx::Mod(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(192)
			int tmp11 = _this->m_nv3 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(192)
			tmp5 = tmp7->__get(tmp11).StaticCast< ::haxor::math::Vector3 >();
		}
		HX_STACK_LINE(192)
		::haxor::math::Vector3 p1 = tmp5;		HX_STACK_VAR(p1,"p1");
		HX_STACK_LINE(194)
		::haxor::math::Vector4 tmp6 = fp->__get((int)0).StaticCast< ::haxor::math::Vector4 >();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(194)
		p0->Set4(tmp6);
		HX_STACK_LINE(194)
		::haxor::math::Vector4 tmp7 = fp->__get((int)1).StaticCast< ::haxor::math::Vector4 >();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(194)
		p1->Set4(tmp7);
		HX_STACK_LINE(194)
		{
			HX_STACK_LINE(194)
			::haxor::context::GizmoContext tmp8 = ::haxor::context::EngineContext_obj::gizmo;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(194)
			::haxor::math::Vector3 tmp9 = p0;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(194)
			::haxor::math::Vector3 tmp10 = p1;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(194)
			::haxor::math::Color tmp11 = ::haxor::core::Debug_obj::color_white;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(194)
			tmp8->DrawLine(tmp9,tmp10,tmp11,null());
		}
		HX_STACK_LINE(195)
		::haxor::math::Vector4 tmp8 = fp->__get((int)1).StaticCast< ::haxor::math::Vector4 >();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(195)
		p0->Set4(tmp8);
		HX_STACK_LINE(195)
		::haxor::math::Vector4 tmp9 = fp->__get((int)2).StaticCast< ::haxor::math::Vector4 >();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(195)
		p1->Set4(tmp9);
		HX_STACK_LINE(195)
		{
			HX_STACK_LINE(195)
			::haxor::context::GizmoContext tmp10 = ::haxor::context::EngineContext_obj::gizmo;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(195)
			::haxor::math::Vector3 tmp11 = p0;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(195)
			::haxor::math::Vector3 tmp12 = p1;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(195)
			::haxor::math::Color tmp13 = ::haxor::core::Debug_obj::color_white;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(195)
			tmp10->DrawLine(tmp11,tmp12,tmp13,null());
		}
		HX_STACK_LINE(196)
		::haxor::math::Vector4 tmp10 = fp->__get((int)2).StaticCast< ::haxor::math::Vector4 >();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(196)
		p0->Set4(tmp10);
		HX_STACK_LINE(196)
		::haxor::math::Vector4 tmp11 = fp->__get((int)3).StaticCast< ::haxor::math::Vector4 >();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(196)
		p1->Set4(tmp11);
		HX_STACK_LINE(196)
		{
			HX_STACK_LINE(196)
			::haxor::context::GizmoContext tmp12 = ::haxor::context::EngineContext_obj::gizmo;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(196)
			::haxor::math::Vector3 tmp13 = p0;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(196)
			::haxor::math::Vector3 tmp14 = p1;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(196)
			::haxor::math::Color tmp15 = ::haxor::core::Debug_obj::color_white;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(196)
			tmp12->DrawLine(tmp13,tmp14,tmp15,null());
		}
		HX_STACK_LINE(197)
		::haxor::math::Vector4 tmp12 = fp->__get((int)3).StaticCast< ::haxor::math::Vector4 >();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(197)
		p0->Set4(tmp12);
		HX_STACK_LINE(197)
		::haxor::math::Vector4 tmp13 = fp->__get((int)0).StaticCast< ::haxor::math::Vector4 >();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(197)
		p1->Set4(tmp13);
		HX_STACK_LINE(197)
		{
			HX_STACK_LINE(197)
			::haxor::context::GizmoContext tmp14 = ::haxor::context::EngineContext_obj::gizmo;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(197)
			::haxor::math::Vector3 tmp15 = p0;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(197)
			::haxor::math::Vector3 tmp16 = p1;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(197)
			::haxor::math::Color tmp17 = ::haxor::core::Debug_obj::color_white;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(197)
			tmp14->DrawLine(tmp15,tmp16,tmp17,null());
		}
		HX_STACK_LINE(199)
		::haxor::math::Vector4 tmp14 = fp->__get((int)4).StaticCast< ::haxor::math::Vector4 >();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(199)
		p0->Set4(tmp14);
		HX_STACK_LINE(199)
		::haxor::math::Vector4 tmp15 = fp->__get((int)5).StaticCast< ::haxor::math::Vector4 >();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(199)
		p1->Set4(tmp15);
		HX_STACK_LINE(199)
		{
			HX_STACK_LINE(199)
			::haxor::context::GizmoContext tmp16 = ::haxor::context::EngineContext_obj::gizmo;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(199)
			::haxor::math::Vector3 tmp17 = p0;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(199)
			::haxor::math::Vector3 tmp18 = p1;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(199)
			::haxor::math::Color tmp19 = ::haxor::core::Debug_obj::color_white;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(199)
			tmp16->DrawLine(tmp17,tmp18,tmp19,null());
		}
		HX_STACK_LINE(200)
		::haxor::math::Vector4 tmp16 = fp->__get((int)5).StaticCast< ::haxor::math::Vector4 >();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(200)
		p0->Set4(tmp16);
		HX_STACK_LINE(200)
		::haxor::math::Vector4 tmp17 = fp->__get((int)6).StaticCast< ::haxor::math::Vector4 >();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(200)
		p1->Set4(tmp17);
		HX_STACK_LINE(200)
		{
			HX_STACK_LINE(200)
			::haxor::context::GizmoContext tmp18 = ::haxor::context::EngineContext_obj::gizmo;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(200)
			::haxor::math::Vector3 tmp19 = p0;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(200)
			::haxor::math::Vector3 tmp20 = p1;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(200)
			::haxor::math::Color tmp21 = ::haxor::core::Debug_obj::color_white;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(200)
			tmp18->DrawLine(tmp19,tmp20,tmp21,null());
		}
		HX_STACK_LINE(201)
		::haxor::math::Vector4 tmp18 = fp->__get((int)6).StaticCast< ::haxor::math::Vector4 >();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(201)
		p0->Set4(tmp18);
		HX_STACK_LINE(201)
		::haxor::math::Vector4 tmp19 = fp->__get((int)7).StaticCast< ::haxor::math::Vector4 >();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(201)
		p1->Set4(tmp19);
		HX_STACK_LINE(201)
		{
			HX_STACK_LINE(201)
			::haxor::context::GizmoContext tmp20 = ::haxor::context::EngineContext_obj::gizmo;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(201)
			::haxor::math::Vector3 tmp21 = p0;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(201)
			::haxor::math::Vector3 tmp22 = p1;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(201)
			::haxor::math::Color tmp23 = ::haxor::core::Debug_obj::color_white;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(201)
			tmp20->DrawLine(tmp21,tmp22,tmp23,null());
		}
		HX_STACK_LINE(202)
		::haxor::math::Vector4 tmp20 = fp->__get((int)7).StaticCast< ::haxor::math::Vector4 >();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(202)
		p0->Set4(tmp20);
		HX_STACK_LINE(202)
		::haxor::math::Vector4 tmp21 = fp->__get((int)4).StaticCast< ::haxor::math::Vector4 >();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(202)
		p1->Set4(tmp21);
		HX_STACK_LINE(202)
		{
			HX_STACK_LINE(202)
			::haxor::context::GizmoContext tmp22 = ::haxor::context::EngineContext_obj::gizmo;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(202)
			::haxor::math::Vector3 tmp23 = p0;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(202)
			::haxor::math::Vector3 tmp24 = p1;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(202)
			::haxor::math::Color tmp25 = ::haxor::core::Debug_obj::color_white;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(202)
			tmp22->DrawLine(tmp23,tmp24,tmp25,null());
		}
		HX_STACK_LINE(204)
		::haxor::math::Vector4 tmp22 = fp->__get((int)0).StaticCast< ::haxor::math::Vector4 >();		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(204)
		p0->Set4(tmp22);
		HX_STACK_LINE(204)
		::haxor::math::Vector4 tmp23 = fp->__get((int)4).StaticCast< ::haxor::math::Vector4 >();		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(204)
		p1->Set4(tmp23);
		HX_STACK_LINE(204)
		{
			HX_STACK_LINE(204)
			::haxor::context::GizmoContext tmp24 = ::haxor::context::EngineContext_obj::gizmo;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(204)
			::haxor::math::Vector3 tmp25 = p0;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(204)
			::haxor::math::Vector3 tmp26 = p1;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(204)
			::haxor::math::Color tmp27 = ::haxor::core::Debug_obj::color_white;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(204)
			tmp24->DrawLine(tmp25,tmp26,tmp27,null());
		}
		HX_STACK_LINE(205)
		::haxor::math::Vector4 tmp24 = fp->__get((int)1).StaticCast< ::haxor::math::Vector4 >();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(205)
		p0->Set4(tmp24);
		HX_STACK_LINE(205)
		::haxor::math::Vector4 tmp25 = fp->__get((int)5).StaticCast< ::haxor::math::Vector4 >();		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(205)
		p1->Set4(tmp25);
		HX_STACK_LINE(205)
		{
			HX_STACK_LINE(205)
			::haxor::context::GizmoContext tmp26 = ::haxor::context::EngineContext_obj::gizmo;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(205)
			::haxor::math::Vector3 tmp27 = p0;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(205)
			::haxor::math::Vector3 tmp28 = p1;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(205)
			::haxor::math::Color tmp29 = ::haxor::core::Debug_obj::color_white;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(205)
			tmp26->DrawLine(tmp27,tmp28,tmp29,null());
		}
		HX_STACK_LINE(206)
		::haxor::math::Vector4 tmp26 = fp->__get((int)2).StaticCast< ::haxor::math::Vector4 >();		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(206)
		p0->Set4(tmp26);
		HX_STACK_LINE(206)
		::haxor::math::Vector4 tmp27 = fp->__get((int)6).StaticCast< ::haxor::math::Vector4 >();		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(206)
		p1->Set4(tmp27);
		HX_STACK_LINE(206)
		{
			HX_STACK_LINE(206)
			::haxor::context::GizmoContext tmp28 = ::haxor::context::EngineContext_obj::gizmo;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(206)
			::haxor::math::Vector3 tmp29 = p0;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(206)
			::haxor::math::Vector3 tmp30 = p1;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(206)
			::haxor::math::Color tmp31 = ::haxor::core::Debug_obj::color_white;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(206)
			tmp28->DrawLine(tmp29,tmp30,tmp31,null());
		}
		HX_STACK_LINE(207)
		::haxor::math::Vector4 tmp28 = fp->__get((int)3).StaticCast< ::haxor::math::Vector4 >();		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(207)
		p0->Set4(tmp28);
		HX_STACK_LINE(207)
		::haxor::math::Vector4 tmp29 = fp->__get((int)7).StaticCast< ::haxor::math::Vector4 >();		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(207)
		p1->Set4(tmp29);
		HX_STACK_LINE(207)
		{
			HX_STACK_LINE(207)
			::haxor::context::GizmoContext tmp30 = ::haxor::context::EngineContext_obj::gizmo;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(207)
			::haxor::math::Vector3 tmp31 = p0;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(207)
			::haxor::math::Vector3 tmp32 = p1;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(207)
			::haxor::math::Color tmp33 = ::haxor::core::Debug_obj::color_white;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(207)
			tmp30->DrawLine(tmp31,tmp32,tmp33,null());
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,Camera,(void))

Void Debug_obj::Light( ::haxor::component::light::Light l){
{
		HX_STACK_FRAME("haxor.core.Debug","Light",0x45cf2258,"haxor.core.Debug.Light","haxor/core/Debug.hx",216,0xbbdb7c8e)
		HX_STACK_ARG(l,"l")
		HX_STACK_LINE(217)
		::haxor::math::Color tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(217)
		{
			HX_STACK_LINE(217)
			::haxor::context::DataContext tmp1 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(217)
			::haxor::context::DataContext _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(217)
			Array< ::Dynamic > tmp2 = _this->m_c;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(217)
			int tmp3 = (_this->m_nc + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(217)
			int tmp4 = _this->m_c->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(217)
			int tmp5 = hx::Mod(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(217)
			int tmp6 = _this->m_nc = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(217)
			tmp = tmp2->__get(tmp6).StaticCast< ::haxor::math::Color >();
		}
		HX_STACK_LINE(217)
		::haxor::math::Color cl = tmp;		HX_STACK_VAR(cl,"cl");
		HX_STACK_LINE(218)
		::haxor::component::light::Light tmp1 = l;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(218)
		bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::haxor::component::light::PointLight >());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(218)
		if ((tmp2)){
			HX_STACK_LINE(220)
			::haxor::component::light::PointLight pl = ((::haxor::component::light::PointLight)(l));		HX_STACK_VAR(pl,"pl");
			HX_STACK_LINE(221)
			::haxor::component::Transform tmp3 = l->m_entity->m_transform;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(221)
			::haxor::math::Vector3 tmp4 = tmp3->get_position();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(221)
			::haxor::math::Vector3 p = tmp4;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(222)
			::haxor::math::Color tmp5 = ::haxor::core::Debug_obj::color_light;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(222)
			cl->SetColor(tmp5);
			HX_STACK_LINE(222)
			bool tmp6 = l->get_enabled();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(222)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(222)
			if ((tmp6)){
				HX_STACK_LINE(222)
				tmp7 = ((Float)1.0);
			}
			else{
				HX_STACK_LINE(222)
				tmp7 = ((Float)0.33);
			}
			HX_STACK_LINE(222)
			cl->a = tmp7;
			HX_STACK_LINE(223)
			::haxor::math::Vector3 tmp8 = p;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(223)
			Float tmp9 = pl->radius;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(223)
			::haxor::math::Color tmp10 = cl;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(223)
			::haxor::graphics::Gizmo_obj::WireSphere(tmp8,tmp9,tmp10,null());
			HX_STACK_LINE(224)
			::haxor::math::Color tmp11 = l->color;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(224)
			cl->SetColor(tmp11);
			HX_STACK_LINE(224)
			bool tmp12 = l->get_enabled();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(224)
			Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(224)
			if ((tmp12)){
				HX_STACK_LINE(224)
				tmp13 = ((Float)1.0);
			}
			else{
				HX_STACK_LINE(224)
				tmp13 = ((Float)0.33);
			}
			HX_STACK_LINE(224)
			cl->a = tmp13;
			HX_STACK_LINE(225)
			::haxor::math::Vector3 tmp14 = p;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(225)
			::haxor::math::Color tmp15 = l->color;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(225)
			::haxor::graphics::Gizmo_obj::Point(tmp14,((Float)15.0),tmp15,null(),null());
			HX_STACK_LINE(226)
			return null();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,Light,(void))


Debug_obj::Debug_obj()
{
}

bool Debug_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"light") ) { outValue = light; return true;  }
		if (HX_FIELD_EQ(inName,"Light") ) { outValue = Light_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"Camera") ) { outValue = Camera_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"collider") ) { outValue = collider; return true;  }
		if (HX_FIELD_EQ(inName,"renderer") ) { outValue = renderer; return true;  }
		if (HX_FIELD_EQ(inName,"Collider") ) { outValue = Collider_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { outValue = transform; return true;  }
		if (HX_FIELD_EQ(inName,"Transform") ) { outValue = Transform_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"colliderSB") ) { outValue = colliderSB; return true;  }
		if (HX_FIELD_EQ(inName,"Initialize") ) { outValue = Initialize_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"color_white") ) { outValue = color_white; return true;  }
		if (HX_FIELD_EQ(inName,"color_light") ) { outValue = color_light; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"colliderAABB") ) { outValue = colliderAABB; return true;  }
		if (HX_FIELD_EQ(inName,"rendererAABB") ) { outValue = rendererAABB; return true;  }
		if (HX_FIELD_EQ(inName,"BoundingAABB") ) { outValue = BoundingAABB_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"MeshRenderer") ) { outValue = MeshRenderer_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"color_trigger") ) { outValue = color_trigger; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"color_collider") ) { outValue = color_collider; return true;  }
		if (HX_FIELD_EQ(inName,"color_bounding") ) { outValue = color_bounding; return true;  }
		if (HX_FIELD_EQ(inName,"color_renderer") ) { outValue = color_renderer; return true;  }
		if (HX_FIELD_EQ(inName,"BoundingSphere") ) { outValue = BoundingSphere_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &Debug_obj::collider,HX_HCSTRING("collider","\x34","\xdf","\xd5","\xc9")},
	{hx::fsBool,(void *) &Debug_obj::colliderAABB,HX_HCSTRING("colliderAABB","\xd4","\xf3","\xaf","\x4f")},
	{hx::fsBool,(void *) &Debug_obj::colliderSB,HX_HCSTRING("colliderSB","\xc3","\x5c","\x73","\x52")},
	{hx::fsBool,(void *) &Debug_obj::transform,HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45")},
	{hx::fsBool,(void *) &Debug_obj::renderer,HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2")},
	{hx::fsBool,(void *) &Debug_obj::rendererAABB,HX_HCSTRING("rendererAABB","\x63","\x8d","\xa3","\x6b")},
	{hx::fsBool,(void *) &Debug_obj::light,HX_HCSTRING("light","\xd6","\x90","\xfc","\x74")},
	{hx::fsObject /*::haxor::math::Color*/ ,(void *) &Debug_obj::color_white,HX_HCSTRING("color_white","\x8d","\xaf","\x38","\x4b")},
	{hx::fsObject /*::haxor::math::Color*/ ,(void *) &Debug_obj::color_collider,HX_HCSTRING("color_collider","\xd0","\xa0","\x45","\xd7")},
	{hx::fsObject /*::haxor::math::Color*/ ,(void *) &Debug_obj::color_trigger,HX_HCSTRING("color_trigger","\x1c","\xbb","\xa8","\x88")},
	{hx::fsObject /*::haxor::math::Color*/ ,(void *) &Debug_obj::color_bounding,HX_HCSTRING("color_bounding","\x00","\x59","\xcc","\x5a")},
	{hx::fsObject /*::haxor::math::Color*/ ,(void *) &Debug_obj::color_renderer,HX_HCSTRING("color_renderer","\xdf","\x86","\x4b","\xc0")},
	{hx::fsObject /*::haxor::math::Color*/ ,(void *) &Debug_obj::color_light,HX_HCSTRING("color_light","\xba","\xf5","\x77","\xf6")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Debug_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Debug_obj::collider,"collider");
	HX_MARK_MEMBER_NAME(Debug_obj::colliderAABB,"colliderAABB");
	HX_MARK_MEMBER_NAME(Debug_obj::colliderSB,"colliderSB");
	HX_MARK_MEMBER_NAME(Debug_obj::transform,"transform");
	HX_MARK_MEMBER_NAME(Debug_obj::renderer,"renderer");
	HX_MARK_MEMBER_NAME(Debug_obj::rendererAABB,"rendererAABB");
	HX_MARK_MEMBER_NAME(Debug_obj::light,"light");
	HX_MARK_MEMBER_NAME(Debug_obj::color_white,"color_white");
	HX_MARK_MEMBER_NAME(Debug_obj::color_collider,"color_collider");
	HX_MARK_MEMBER_NAME(Debug_obj::color_trigger,"color_trigger");
	HX_MARK_MEMBER_NAME(Debug_obj::color_bounding,"color_bounding");
	HX_MARK_MEMBER_NAME(Debug_obj::color_renderer,"color_renderer");
	HX_MARK_MEMBER_NAME(Debug_obj::color_light,"color_light");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Debug_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Debug_obj::collider,"collider");
	HX_VISIT_MEMBER_NAME(Debug_obj::colliderAABB,"colliderAABB");
	HX_VISIT_MEMBER_NAME(Debug_obj::colliderSB,"colliderSB");
	HX_VISIT_MEMBER_NAME(Debug_obj::transform,"transform");
	HX_VISIT_MEMBER_NAME(Debug_obj::renderer,"renderer");
	HX_VISIT_MEMBER_NAME(Debug_obj::rendererAABB,"rendererAABB");
	HX_VISIT_MEMBER_NAME(Debug_obj::light,"light");
	HX_VISIT_MEMBER_NAME(Debug_obj::color_white,"color_white");
	HX_VISIT_MEMBER_NAME(Debug_obj::color_collider,"color_collider");
	HX_VISIT_MEMBER_NAME(Debug_obj::color_trigger,"color_trigger");
	HX_VISIT_MEMBER_NAME(Debug_obj::color_bounding,"color_bounding");
	HX_VISIT_MEMBER_NAME(Debug_obj::color_renderer,"color_renderer");
	HX_VISIT_MEMBER_NAME(Debug_obj::color_light,"color_light");
};

#endif

hx::Class Debug_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("collider","\x34","\xdf","\xd5","\xc9"),
	HX_HCSTRING("colliderAABB","\xd4","\xf3","\xaf","\x4f"),
	HX_HCSTRING("colliderSB","\xc3","\x5c","\x73","\x52"),
	HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"),
	HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"),
	HX_HCSTRING("rendererAABB","\x63","\x8d","\xa3","\x6b"),
	HX_HCSTRING("light","\xd6","\x90","\xfc","\x74"),
	HX_HCSTRING("color_white","\x8d","\xaf","\x38","\x4b"),
	HX_HCSTRING("color_collider","\xd0","\xa0","\x45","\xd7"),
	HX_HCSTRING("color_trigger","\x1c","\xbb","\xa8","\x88"),
	HX_HCSTRING("color_bounding","\x00","\x59","\xcc","\x5a"),
	HX_HCSTRING("color_renderer","\xdf","\x86","\x4b","\xc0"),
	HX_HCSTRING("color_light","\xba","\xf5","\x77","\xf6"),
	HX_HCSTRING("Initialize","\x70","\x35","\x6c","\xe3"),
	HX_HCSTRING("Collider","\x54","\x9b","\x87","\xa3"),
	HX_HCSTRING("BoundingAABB","\x24","\xd0","\x40","\x34"),
	HX_HCSTRING("BoundingSphere","\xb1","\xf1","\xaa","\xbd"),
	HX_HCSTRING("MeshRenderer","\x70","\x4c","\x68","\x3e"),
	HX_HCSTRING("Transform","\x4c","\x0d","\x66","\xe7"),
	HX_HCSTRING("Camera","\xc5","\xba","\x20","\xec"),
	HX_HCSTRING("Light","\xb6","\x00","\x2a","\x08"),
	String(null()) };

void Debug_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.core.Debug","\x90","\xbc","\x72","\xd0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Debug_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Debug_obj >;
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

void Debug_obj::__boot()
{
	color_white= ::haxor::math::Color_obj::__new((int)1,(int)1,(int)1,(int)1);
	color_collider= ::haxor::math::Color_obj::__new(((Float)0.5),((Float)0.9),((Float)0.5),(int)1);
	color_trigger= ::haxor::math::Color_obj::__new(((Float)0.9),((Float)0.5),((Float)0.5),(int)1);
	color_bounding= ::haxor::math::Color_obj::__new(((Float)0.3),((Float)0.3),((Float)0.9),(int)1);
	color_renderer= ::haxor::math::Color_obj::__new(((Float)0.5),((Float)0.5),((Float)0.9),(int)1);
	color_light= ::haxor::math::Color_obj::__new(((Float)0.9),((Float)0.9),((Float)0.5),(int)1);
}

} // end namespace haxor
} // end namespace core
