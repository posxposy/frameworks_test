#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
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
#ifndef INCLUDED_haxor_component_Transform
#include <haxor/component/Transform.h>
#endif
#ifndef INCLUDED_haxor_component_animation_Animation
#include <haxor/component/animation/Animation.h>
#endif
#ifndef INCLUDED_haxor_context_BaseProcess
#include <haxor/context/BaseProcess.h>
#endif
#ifndef INCLUDED_haxor_context_CameraContext
#include <haxor/context/CameraContext.h>
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
#ifndef INCLUDED_haxor_context_KernelContext
#include <haxor/context/KernelContext.h>
#endif
#ifndef INCLUDED_haxor_context_MaterialContext
#include <haxor/context/MaterialContext.h>
#endif
#ifndef INCLUDED_haxor_context_MeshContext
#include <haxor/context/MeshContext.h>
#endif
#ifndef INCLUDED_haxor_context_ParticleContext
#include <haxor/context/ParticleContext.h>
#endif
#ifndef INCLUDED_haxor_context_PhysicsContext
#include <haxor/context/PhysicsContext.h>
#endif
#ifndef INCLUDED_haxor_context_Process
#include <haxor/context/Process.h>
#endif
#ifndef INCLUDED_haxor_context_RendererContext
#include <haxor/context/RendererContext.h>
#endif
#ifndef INCLUDED_haxor_context_TextureContext
#include <haxor/context/TextureContext.h>
#endif
#ifndef INCLUDED_haxor_context_TransformContext
#include <haxor/context/TransformContext.h>
#endif
#ifndef INCLUDED_haxor_core_Console
#include <haxor/core/Console.h>
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
#ifndef INCLUDED_haxor_core_IFixedUpdateable
#include <haxor/core/IFixedUpdateable.h>
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
#ifndef INCLUDED_haxor_io_serialization_ISerializable
#include <haxor/io/serialization/ISerializable.h>
#endif
#ifndef INCLUDED_haxor_physics_Physics
#include <haxor/physics/Physics.h>
#endif
namespace haxor{
namespace context{

Void EngineContext_obj::__construct()
{
	return null();
}

//EngineContext_obj::~EngineContext_obj() { }

Dynamic EngineContext_obj::__CreateEmpty() { return  new EngineContext_obj; }
hx::ObjectPtr< EngineContext_obj > EngineContext_obj::__new()
{  hx::ObjectPtr< EngineContext_obj > _result_ = new EngineContext_obj();
	_result_->__construct();
	return _result_;}

Dynamic EngineContext_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EngineContext_obj > _result_ = new EngineContext_obj();
	_result_->__construct();
	return _result_;}

int EngineContext_obj::uid;

int EngineContext_obj::maxNodes;

int EngineContext_obj::collectRate;

::haxor::context::Process EngineContext_obj::update;

::haxor::context::Process EngineContext_obj::fixed_update;

Array< ::Dynamic > EngineContext_obj::awake;

Array< ::Dynamic > EngineContext_obj::start;

::haxor::context::Process EngineContext_obj::resize;

::haxor::context::Process EngineContext_obj::render;

::haxor::context::Process EngineContext_obj::resources;

::haxor::context::Process EngineContext_obj::disposables;

Array< ::Dynamic > EngineContext_obj::list;

::haxor::context::MeshContext EngineContext_obj::mesh;

::haxor::context::MaterialContext EngineContext_obj::material;

::haxor::context::TextureContext EngineContext_obj::texture;

::haxor::context::CameraContext EngineContext_obj::camera;

::haxor::context::RendererContext EngineContext_obj::renderer;

::haxor::context::ParticleContext EngineContext_obj::particle;

::haxor::context::GizmoContext EngineContext_obj::gizmo;

::haxor::context::DataContext EngineContext_obj::data;

::haxor::context::TransformContext EngineContext_obj::transform;

::haxor::context::PhysicsContext EngineContext_obj::physics;

::haxor::context::KernelContext EngineContext_obj::kernel;

Void EngineContext_obj::Initialize( ){
{
		HX_STACK_FRAME("haxor.context.EngineContext","Initialize",0x8336921c,"haxor.context.EngineContext.Initialize","haxor/context/EngineContext.hx",151,0x2d4338be)
		HX_STACK_LINE(152)
		{
			HX_STACK_LINE(152)
			int tmp = ::haxor::core::Console_obj::verbose;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(152)
			bool tmp1 = (tmp >= (int)3);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(152)
			if ((tmp1)){
				HX_STACK_LINE(152)
				::cpp::Lib_obj::println(HX_HCSTRING("Haxor> Engine Context Initialize.","\x73","\x93","\xb8","\x7f"));
			}
		}
		HX_STACK_LINE(153)
		int tmp = ::haxor::context::EngineContext_obj::maxNodes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(153)
		::haxor::context::Process tmp1 = ::haxor::context::Process_obj::__new(HX_HCSTRING("process.update","\x28","\xf6","\xed","\xe4"),tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(153)
		::haxor::context::EngineContext_obj::update = tmp1;
		HX_STACK_LINE(154)
		int tmp2 = ::haxor::context::EngineContext_obj::maxNodes;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(154)
		::haxor::context::Process tmp3 = ::haxor::context::Process_obj::__new(HX_HCSTRING("process.fixed-update","\x61","\x14","\x9c","\xc0"),tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(154)
		::haxor::context::EngineContext_obj::fixed_update = tmp3;
		HX_STACK_LINE(155)
		int tmp4 = ::haxor::context::EngineContext_obj::maxNodes;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(155)
		::haxor::context::Process tmp5 = ::haxor::context::Process_obj::__new(HX_HCSTRING("process.render","\x75","\xdb","\x11","\x63"),tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(155)
		::haxor::context::EngineContext_obj::render = tmp5;
		HX_STACK_LINE(156)
		int tmp6 = ::haxor::context::EngineContext_obj::maxNodes;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(156)
		::haxor::context::Process tmp7 = ::haxor::context::Process_obj::__new(HX_HCSTRING("process.resize","\x13","\xca","\x63","\x66"),tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(156)
		::haxor::context::EngineContext_obj::resize = tmp7;
		HX_STACK_LINE(157)
		int tmp8 = ::haxor::context::EngineContext_obj::maxNodes;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(157)
		::haxor::context::Process tmp9 = ::haxor::context::Process_obj::__new(HX_HCSTRING("process.resources","\x26","\x05","\x2c","\x99"),tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(157)
		::haxor::context::EngineContext_obj::resources = tmp9;
		HX_STACK_LINE(158)
		int tmp10 = ::haxor::context::EngineContext_obj::maxNodes;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(158)
		::haxor::context::Process tmp11 = ::haxor::context::Process_obj::__new(HX_HCSTRING("process.disposables","\x54","\x5e","\x53","\xb2"),tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(158)
		::haxor::context::EngineContext_obj::disposables = tmp11;
		HX_STACK_LINE(160)
		Array< ::Dynamic > tmp12 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(160)
		::haxor::context::EngineContext_obj::awake = tmp12;
		HX_STACK_LINE(161)
		Array< ::Dynamic > tmp13 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(161)
		::haxor::context::EngineContext_obj::start = tmp13;
		HX_STACK_LINE(163)
		::haxor::context::Process tmp14 = ::haxor::context::EngineContext_obj::update;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(163)
		::haxor::context::Process tmp15 = ::haxor::context::EngineContext_obj::render;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(163)
		::haxor::context::Process tmp16 = ::haxor::context::EngineContext_obj::resize;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(163)
		::haxor::context::Process tmp17 = ::haxor::context::EngineContext_obj::resources;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(163)
		::haxor::context::Process tmp18 = ::haxor::context::EngineContext_obj::disposables;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(163)
		Array< ::Dynamic > tmp19 = Array_obj< ::Dynamic >::__new().Add(tmp14).Add(tmp15).Add(tmp16).Add(tmp17).Add(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(163)
		::haxor::context::EngineContext_obj::list = tmp19;
		HX_STACK_LINE(165)
		::haxor::context::DataContext tmp20 = ::haxor::context::DataContext_obj::__new();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(165)
		::haxor::context::EngineContext_obj::data = tmp20;
		HX_STACK_LINE(170)
		::haxor::component::animation::Animation_obj::Initialize();
		HX_STACK_LINE(171)
		::haxor::physics::Physics_obj::Initialize();
		HX_STACK_LINE(172)
		::haxor::core::Debug_obj::Initialize();
		HX_STACK_LINE(174)
		::haxor::context::RendererContext tmp21 = ::haxor::context::RendererContext_obj::__new();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(174)
		::haxor::context::EngineContext_obj::renderer = tmp21;
		HX_STACK_LINE(175)
		::haxor::context::ParticleContext tmp22 = ::haxor::context::ParticleContext_obj::__new();		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(175)
		::haxor::context::EngineContext_obj::particle = tmp22;
		HX_STACK_LINE(176)
		::haxor::context::MeshContext tmp23 = ::haxor::context::MeshContext_obj::__new();		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(176)
		::haxor::context::EngineContext_obj::mesh = tmp23;
		HX_STACK_LINE(177)
		::haxor::context::MaterialContext tmp24 = ::haxor::context::MaterialContext_obj::__new();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(177)
		::haxor::context::EngineContext_obj::material = tmp24;
		HX_STACK_LINE(178)
		::haxor::context::TextureContext tmp25 = ::haxor::context::TextureContext_obj::__new();		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(178)
		::haxor::context::EngineContext_obj::texture = tmp25;
		HX_STACK_LINE(179)
		::haxor::context::GizmoContext tmp26 = ::haxor::context::GizmoContext_obj::__new();		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(179)
		::haxor::context::EngineContext_obj::gizmo = tmp26;
		HX_STACK_LINE(180)
		::haxor::context::CameraContext tmp27 = ::haxor::context::CameraContext_obj::__new();		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(180)
		::haxor::context::EngineContext_obj::camera = tmp27;
		HX_STACK_LINE(181)
		::haxor::context::TransformContext tmp28 = ::haxor::context::TransformContext_obj::__new();		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(181)
		::haxor::context::EngineContext_obj::transform = tmp28;
		HX_STACK_LINE(182)
		::haxor::context::PhysicsContext tmp29 = ::haxor::context::PhysicsContext_obj::__new();		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(182)
		::haxor::context::EngineContext_obj::physics = tmp29;
		HX_STACK_LINE(183)
		::haxor::context::KernelContext tmp30 = ::haxor::context::KernelContext_obj::__new();		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(183)
		::haxor::context::EngineContext_obj::kernel = tmp30;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(EngineContext_obj,Initialize,(void))

Void EngineContext_obj::Build( ){
{
		HX_STACK_FRAME("haxor.context.EngineContext","Build",0x61432de2,"haxor.context.EngineContext.Build","haxor/context/EngineContext.hx",192,0x2d4338be)
		HX_STACK_LINE(194)
		::haxor::context::MeshContext tmp = ::haxor::context::EngineContext_obj::mesh;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(194)
		tmp->Initialize();
		HX_STACK_LINE(195)
		::haxor::context::MaterialContext tmp1 = ::haxor::context::EngineContext_obj::material;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(195)
		tmp1->Initialize();
		HX_STACK_LINE(196)
		::haxor::context::TextureContext tmp2 = ::haxor::context::EngineContext_obj::texture;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(196)
		tmp2->Initialize();
		HX_STACK_LINE(197)
		::haxor::context::GizmoContext tmp3 = ::haxor::context::EngineContext_obj::gizmo;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(197)
		tmp3->Initialize();
		HX_STACK_LINE(198)
		::haxor::context::TransformContext tmp4 = ::haxor::context::EngineContext_obj::transform;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(198)
		tmp4->Initialize();
		HX_STACK_LINE(199)
		::haxor::context::RendererContext tmp5 = ::haxor::context::EngineContext_obj::renderer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(199)
		tmp5->Initialize();
		HX_STACK_LINE(200)
		::haxor::context::ParticleContext tmp6 = ::haxor::context::EngineContext_obj::particle;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(200)
		tmp6->Initialize();
		HX_STACK_LINE(201)
		::haxor::context::PhysicsContext tmp7 = ::haxor::context::EngineContext_obj::physics;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(201)
		tmp7->Initialize();
		HX_STACK_LINE(202)
		::haxor::context::KernelContext tmp8 = ::haxor::context::EngineContext_obj::kernel;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(202)
		tmp8->Initialize();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(EngineContext_obj,Build,(void))

Void EngineContext_obj::Enable( ::haxor::core::Resource p_resource){
{
		HX_STACK_FRAME("haxor.context.EngineContext","Enable",0xdf77b94f,"haxor.context.EngineContext.Enable","haxor/context/EngineContext.hx",211,0x2d4338be)
		HX_STACK_ARG(p_resource,"p_resource")
		HX_STACK_LINE(212)
		::haxor::core::Resource tmp = p_resource;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(212)
		bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::haxor::core::IUpdateable >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(212)
		if ((tmp1)){
			HX_STACK_LINE(212)
			::haxor::context::Process tmp2 = ::haxor::context::EngineContext_obj::update;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(212)
			::haxor::core::Resource tmp3 = p_resource;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(212)
			tmp2->Add(tmp3);
		}
		HX_STACK_LINE(213)
		::haxor::core::Resource tmp2 = p_resource;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(213)
		bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::haxor::core::IFixedUpdateable >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(213)
		if ((tmp3)){
			HX_STACK_LINE(213)
			::haxor::context::Process tmp4 = ::haxor::context::EngineContext_obj::fixed_update;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(213)
			::haxor::core::Resource tmp5 = p_resource;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(213)
			tmp4->Add(tmp5);
		}
		HX_STACK_LINE(214)
		::haxor::core::Resource tmp4 = p_resource;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(214)
		bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::haxor::core::IRenderable >());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(214)
		if ((tmp5)){
			HX_STACK_LINE(214)
			::haxor::context::Process tmp6 = ::haxor::context::EngineContext_obj::render;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(214)
			::haxor::core::Resource tmp7 = p_resource;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(214)
			tmp6->Add(tmp7);
		}
		HX_STACK_LINE(215)
		::haxor::core::Resource tmp6 = p_resource;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(215)
		bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::haxor::core::IResizeable >());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(215)
		if ((tmp7)){
			HX_STACK_LINE(215)
			::haxor::context::Process tmp8 = ::haxor::context::EngineContext_obj::resize;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(215)
			::haxor::core::Resource tmp9 = p_resource;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(215)
			tmp8->Add(tmp9);
		}
		HX_STACK_LINE(218)
		::haxor::core::Resource tmp8 = p_resource;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(218)
		bool tmp9 = ::Std_obj::is(tmp8,hx::ClassOf< ::haxor::component::Renderer >());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(218)
		if ((tmp9)){
			HX_STACK_LINE(218)
			::haxor::context::RendererContext tmp10 = ::haxor::context::EngineContext_obj::renderer;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(218)
			::haxor::component::Renderer tmp11 = ((::haxor::component::Renderer)(p_resource));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(218)
			tmp10->Enable(tmp11);
		}
		HX_STACK_LINE(220)
		::haxor::core::Resource tmp10 = p_resource;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(220)
		bool tmp11 = ::Std_obj::is(tmp10,hx::ClassOf< ::haxor::core::Entity >());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(220)
		if ((tmp11)){
			HX_STACK_LINE(222)
			::haxor::core::Entity e = ((::haxor::core::Entity)(p_resource));		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(223)
			{
				HX_STACK_LINE(223)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(223)
				int tmp12 = e->m_components->length;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(223)
				int _g = tmp12;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(223)
				while((true)){
					HX_STACK_LINE(223)
					bool tmp13 = (_g1 < _g);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(223)
					bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(223)
					if ((tmp14)){
						HX_STACK_LINE(223)
						break;
					}
					HX_STACK_LINE(223)
					int tmp15 = (_g1)++;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(223)
					int i = tmp15;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(225)
					::haxor::component::Component tmp16 = e->m_components->__get(i).StaticCast< ::haxor::component::Component >();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(225)
					::haxor::component::Component c = tmp16;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(226)
					::haxor::component::Component tmp17 = c;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(226)
					bool tmp18 = ::Std_obj::is(tmp17,hx::ClassOf< ::haxor::component::MeshRenderer >());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(226)
					if ((tmp18)){
						HX_STACK_LINE(228)
						::haxor::context::RendererContext tmp19 = ::haxor::context::EngineContext_obj::renderer;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(228)
						::haxor::component::Renderer tmp20 = ((::haxor::component::Renderer)(c));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(228)
						tmp19->Enable(tmp20);
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EngineContext_obj,Enable,(void))

Void EngineContext_obj::Disable( ::haxor::core::Resource p_resource){
{
		HX_STACK_FRAME("haxor.context.EngineContext","Disable",0xdc71d19c,"haxor.context.EngineContext.Disable","haxor/context/EngineContext.hx",240,0x2d4338be)
		HX_STACK_ARG(p_resource,"p_resource")
		HX_STACK_LINE(241)
		::haxor::core::Resource tmp = p_resource;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(241)
		bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::haxor::core::IUpdateable >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(241)
		if ((tmp1)){
			HX_STACK_LINE(241)
			::haxor::context::Process tmp2 = ::haxor::context::EngineContext_obj::update;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(241)
			::haxor::core::Resource tmp3 = p_resource;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(241)
			tmp2->Remove(tmp3);
		}
		HX_STACK_LINE(242)
		::haxor::core::Resource tmp2 = p_resource;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(242)
		bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::haxor::core::IFixedUpdateable >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(242)
		if ((tmp3)){
			HX_STACK_LINE(242)
			::haxor::context::Process tmp4 = ::haxor::context::EngineContext_obj::fixed_update;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(242)
			::haxor::core::Resource tmp5 = p_resource;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(242)
			tmp4->Remove(tmp5);
		}
		HX_STACK_LINE(243)
		::haxor::core::Resource tmp4 = p_resource;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(243)
		bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::haxor::core::IRenderable >());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(243)
		if ((tmp5)){
			HX_STACK_LINE(243)
			::haxor::context::Process tmp6 = ::haxor::context::EngineContext_obj::render;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(243)
			::haxor::core::Resource tmp7 = p_resource;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(243)
			tmp6->Remove(tmp7);
		}
		HX_STACK_LINE(244)
		::haxor::core::Resource tmp6 = p_resource;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(244)
		bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::haxor::core::IResizeable >());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(244)
		if ((tmp7)){
			HX_STACK_LINE(244)
			::haxor::context::Process tmp8 = ::haxor::context::EngineContext_obj::resize;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(244)
			::haxor::core::Resource tmp9 = p_resource;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(244)
			tmp8->Remove(tmp9);
		}
		HX_STACK_LINE(245)
		::haxor::core::Resource tmp8 = p_resource;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(245)
		bool tmp9 = ::Std_obj::is(tmp8,hx::ClassOf< ::haxor::component::Renderer >());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(245)
		if ((tmp9)){
			HX_STACK_LINE(245)
			::haxor::context::RendererContext tmp10 = ::haxor::context::EngineContext_obj::renderer;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(245)
			::haxor::component::Renderer tmp11 = ((::haxor::component::Renderer)(p_resource));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(245)
			tmp10->Disable(tmp11);
		}
		HX_STACK_LINE(246)
		::haxor::core::Resource tmp10 = p_resource;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(246)
		bool tmp11 = ::Std_obj::is(tmp10,hx::ClassOf< ::haxor::core::Entity >());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(246)
		if ((tmp11)){
			HX_STACK_LINE(248)
			::haxor::core::Entity e = ((::haxor::core::Entity)(p_resource));		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(249)
			{
				HX_STACK_LINE(249)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(249)
				int tmp12 = e->m_components->length;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(249)
				int _g = tmp12;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(249)
				while((true)){
					HX_STACK_LINE(249)
					bool tmp13 = (_g1 < _g);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(249)
					bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(249)
					if ((tmp14)){
						HX_STACK_LINE(249)
						break;
					}
					HX_STACK_LINE(249)
					int tmp15 = (_g1)++;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(249)
					int i = tmp15;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(251)
					::haxor::component::Component tmp16 = e->m_components->__get(i).StaticCast< ::haxor::component::Component >();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(251)
					::haxor::component::Component c = tmp16;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(252)
					::haxor::component::Component tmp17 = c;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(252)
					bool tmp18 = ::Std_obj::is(tmp17,hx::ClassOf< ::haxor::component::MeshRenderer >());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(252)
					if ((tmp18)){
						HX_STACK_LINE(252)
						::haxor::context::RendererContext tmp19 = ::haxor::context::EngineContext_obj::renderer;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(252)
						::haxor::component::Renderer tmp20 = ((::haxor::component::Renderer)(c));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(252)
						tmp19->Disable(tmp20);
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EngineContext_obj,Disable,(void))

Void EngineContext_obj::OnEntiyLayerChange( ::haxor::core::Entity p_entity,int p_from,int p_to){
{
		HX_STACK_FRAME("haxor.context.EngineContext","OnEntiyLayerChange",0x553c7951,"haxor.context.EngineContext.OnEntiyLayerChange","haxor/context/EngineContext.hx",263,0x2d4338be)
		HX_STACK_ARG(p_entity,"p_entity")
		HX_STACK_ARG(p_from,"p_from")
		HX_STACK_ARG(p_to,"p_to")
		HX_STACK_LINE(264)
		::haxor::core::Entity e = p_entity;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(265)
		{
			HX_STACK_LINE(265)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(265)
			int tmp = e->m_components->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(265)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(265)
			while((true)){
				HX_STACK_LINE(265)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(265)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(265)
				if ((tmp2)){
					HX_STACK_LINE(265)
					break;
				}
				HX_STACK_LINE(265)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(265)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(267)
				::haxor::component::Component tmp4 = e->m_components->__get(i).StaticCast< ::haxor::component::Component >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(267)
				::haxor::component::Component c = tmp4;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(269)
				::haxor::component::Component tmp5 = c;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(269)
				bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::haxor::component::Renderer >());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(269)
				if ((tmp6)){
					HX_STACK_LINE(269)
					::haxor::context::RendererContext tmp7 = ::haxor::context::EngineContext_obj::renderer;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(269)
					::haxor::component::Renderer tmp8 = ((::haxor::component::Renderer)(c));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(269)
					int tmp9 = p_from;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(269)
					int tmp10 = p_to;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(269)
					tmp7->OnLayerChange(tmp8,tmp9,tmp10);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(EngineContext_obj,OnEntiyLayerChange,(void))

Void EngineContext_obj::OnGUIDChange( ::haxor::core::Resource p_resource){
{
		HX_STACK_FRAME("haxor.context.EngineContext","OnGUIDChange",0x3c2d0184,"haxor.context.EngineContext.OnGUIDChange","haxor/context/EngineContext.hx",279,0x2d4338be)
		HX_STACK_ARG(p_resource,"p_resource")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EngineContext_obj,OnGUIDChange,(void))

::haxor::core::Resource EngineContext_obj::FindByGUID( ::String p_guid){
	HX_STACK_FRAME("haxor.context.EngineContext","FindByGUID",0xc97388c5,"haxor.context.EngineContext.FindByGUID","haxor/context/EngineContext.hx",289,0x2d4338be)
	HX_STACK_ARG(p_guid,"p_guid")
	HX_STACK_LINE(290)
	::haxor::context::Process tmp = ::haxor::context::EngineContext_obj::resources;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(290)
	Array< ::Dynamic > l = tmp->list;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(291)
	::haxor::context::Process tmp1 = ::haxor::context::EngineContext_obj::resources;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(291)
	int len = tmp1->m_length;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(311)
	{
		HX_STACK_LINE(311)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(311)
		while((true)){
			HX_STACK_LINE(311)
			bool tmp2 = (_g < len);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(311)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(311)
			if ((tmp3)){
				HX_STACK_LINE(311)
				break;
			}
			HX_STACK_LINE(311)
			int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(311)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(311)
			::haxor::core::Resource tmp5 = l->__get(i).StaticCast< ::haxor::core::Resource >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(311)
			bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(311)
			if ((tmp6)){
				HX_STACK_LINE(311)
				::haxor::core::Resource tmp7 = l->__get(i).StaticCast< ::haxor::core::Resource >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(311)
				::String tmp8 = tmp7->m_guid;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(311)
				::String tmp9 = p_guid;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(311)
				bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(311)
				if ((tmp10)){
					HX_STACK_LINE(311)
					::haxor::core::Resource tmp11 = l->__get(i).StaticCast< ::haxor::core::Resource >();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(311)
					return tmp11;
				}
			}
		}
	}
	HX_STACK_LINE(312)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EngineContext_obj,FindByGUID,return )

Void EngineContext_obj::Destroy( ::haxor::core::Resource p_resource){
{
		HX_STACK_FRAME("haxor.context.EngineContext","Destroy",0x4f9f94ae,"haxor.context.EngineContext.Destroy","haxor/context/EngineContext.hx",320,0x2d4338be)
		HX_STACK_ARG(p_resource,"p_resource")
		HX_STACK_LINE(321)
		bool tmp = p_resource->m_destroyed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(321)
		if ((tmp)){
			HX_STACK_LINE(321)
			return null();
		}
		HX_STACK_LINE(322)
		::haxor::core::Resource tmp1 = p_resource;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(322)
		::haxor::context::EngineContext_obj::ScheduleDestroy(tmp1);
		HX_STACK_LINE(323)
		::haxor::core::Resource tmp2 = p_resource;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(323)
		bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::haxor::core::Entity >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(323)
		if ((tmp3)){
			HX_STACK_LINE(325)
			Array< ::Dynamic > tmp4 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(325)
			Array< ::Dynamic > el = tmp4;		HX_STACK_VAR(el,"el");
			HX_STACK_LINE(326)
			::haxor::core::Entity res = ((::haxor::core::Entity)(p_resource));		HX_STACK_VAR(res,"res");
			HX_STACK_LINE(327)
			::haxor::component::Transform t = res->m_transform;		HX_STACK_VAR(t,"t");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,el)
			int __ArgCount() const { return 2; }
			bool run(::haxor::component::Transform n,int d){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","haxor/context/EngineContext.hx",329,0x2d4338be)
				HX_STACK_ARG(n,"n")
				HX_STACK_ARG(d,"d")
				{
					HX_STACK_LINE(330)
					::haxor::core::Entity tmp5 = n->m_entity;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(330)
					el->push(tmp5);
					HX_STACK_LINE(331)
					return true;
				}
				return null();
			}
			HX_END_LOCAL_FUNC2(return)

			HX_STACK_LINE(328)
			t->Traverse( Dynamic(new _Function_2_1(el)));
			HX_STACK_LINE(333)
			{
				HX_STACK_LINE(333)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(333)
				while((true)){
					HX_STACK_LINE(333)
					bool tmp5 = (_g < el->length);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(333)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(333)
					if ((tmp6)){
						HX_STACK_LINE(333)
						break;
					}
					HX_STACK_LINE(333)
					::haxor::core::Entity tmp7 = el->__get(_g).StaticCast< ::haxor::core::Entity >();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(333)
					::haxor::core::Entity e = tmp7;		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(333)
					++(_g);
					HX_STACK_LINE(335)
					{
						HX_STACK_LINE(335)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(335)
						Array< ::Dynamic > _g2 = e->m_components;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(335)
						while((true)){
							HX_STACK_LINE(335)
							bool tmp8 = (_g1 < _g2->length);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(335)
							bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(335)
							if ((tmp9)){
								HX_STACK_LINE(335)
								break;
							}
							HX_STACK_LINE(335)
							::haxor::component::Component tmp10 = _g2->__get(_g1).StaticCast< ::haxor::component::Component >();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(335)
							::haxor::component::Component c = tmp10;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(335)
							++(_g1);
							HX_STACK_LINE(335)
							::haxor::component::Component tmp11 = c;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(335)
							::haxor::context::EngineContext_obj::ScheduleDestroy(tmp11);
						}
					}
					HX_STACK_LINE(336)
					::haxor::core::Entity tmp8 = e;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(336)
					::haxor::context::EngineContext_obj::ScheduleDestroy(tmp8);
				}
			}
			HX_STACK_LINE(338)
			Array< ::Dynamic > tmp5 = t->m_parent->m_hierarchy;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(338)
			::haxor::component::Transform tmp6 = t;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(338)
			tmp5->remove(tmp6);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EngineContext_obj,Destroy,(void))

Void EngineContext_obj::ScheduleDestroy( ::haxor::core::Resource p_resource){
{
		HX_STACK_FRAME("haxor.context.EngineContext","ScheduleDestroy",0x1560cf17,"haxor.context.EngineContext.ScheduleDestroy","haxor/context/EngineContext.hx",347,0x2d4338be)
		HX_STACK_ARG(p_resource,"p_resource")
		HX_STACK_LINE(348)
		bool tmp = p_resource->m_destroyed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(348)
		if ((tmp)){
			HX_STACK_LINE(348)
			return null();
		}
		HX_STACK_LINE(349)
		p_resource->m_destroyed = true;
		HX_STACK_LINE(350)
		{
			HX_STACK_LINE(350)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(350)
			Array< ::Dynamic > tmp1 = ::haxor::context::EngineContext_obj::list;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(350)
			int _g = tmp1->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(350)
			while((true)){
				HX_STACK_LINE(350)
				bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(350)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(350)
				if ((tmp3)){
					HX_STACK_LINE(350)
					break;
				}
				HX_STACK_LINE(350)
				int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(350)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(350)
				Array< ::Dynamic > tmp5 = ::haxor::context::EngineContext_obj::list;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(350)
				int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(350)
				::haxor::context::BaseProcess tmp7 = tmp5->__get(tmp6).StaticCast< ::haxor::context::BaseProcess >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(350)
				::haxor::core::Resource tmp8 = p_resource;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(350)
				tmp7->Remove(tmp8);
			}
		}
		HX_STACK_LINE(351)
		::haxor::context::Process tmp1 = ::haxor::context::EngineContext_obj::disposables;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(351)
		::haxor::core::Resource tmp2 = p_resource;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(351)
		tmp1->Add(tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EngineContext_obj,ScheduleDestroy,(void))


EngineContext_obj::EngineContext_obj()
{
}

bool EngineContext_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"uid") ) { outValue = uid; return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { outValue = list; return true;  }
		if (HX_FIELD_EQ(inName,"mesh") ) { outValue = mesh; return true;  }
		if (HX_FIELD_EQ(inName,"data") ) { outValue = data; return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"awake") ) { outValue = awake; return true;  }
		if (HX_FIELD_EQ(inName,"start") ) { outValue = start; return true;  }
		if (HX_FIELD_EQ(inName,"gizmo") ) { outValue = gizmo; return true;  }
		if (HX_FIELD_EQ(inName,"Build") ) { outValue = Build_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { outValue = update; return true;  }
		if (HX_FIELD_EQ(inName,"resize") ) { outValue = resize; return true;  }
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render; return true;  }
		if (HX_FIELD_EQ(inName,"camera") ) { outValue = camera; return true;  }
		if (HX_FIELD_EQ(inName,"kernel") ) { outValue = kernel; return true;  }
		if (HX_FIELD_EQ(inName,"Enable") ) { outValue = Enable_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { outValue = texture; return true;  }
		if (HX_FIELD_EQ(inName,"physics") ) { outValue = physics; return true;  }
		if (HX_FIELD_EQ(inName,"Disable") ) { outValue = Disable_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Destroy") ) { outValue = Destroy_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maxNodes") ) { outValue = maxNodes; return true;  }
		if (HX_FIELD_EQ(inName,"material") ) { outValue = material; return true;  }
		if (HX_FIELD_EQ(inName,"renderer") ) { outValue = renderer; return true;  }
		if (HX_FIELD_EQ(inName,"particle") ) { outValue = particle; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"resources") ) { outValue = resources; return true;  }
		if (HX_FIELD_EQ(inName,"transform") ) { outValue = transform; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"Initialize") ) { outValue = Initialize_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"FindByGUID") ) { outValue = FindByGUID_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"collectRate") ) { outValue = collectRate; return true;  }
		if (HX_FIELD_EQ(inName,"disposables") ) { outValue = disposables; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fixed_update") ) { outValue = fixed_update; return true;  }
		if (HX_FIELD_EQ(inName,"OnGUIDChange") ) { outValue = OnGUIDChange_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"ScheduleDestroy") ) { outValue = ScheduleDestroy_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"OnEntiyLayerChange") ) { outValue = OnEntiyLayerChange_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &EngineContext_obj::uid,HX_HCSTRING("uid","\x90","\x23","\x59","\x00")},
	{hx::fsInt,(void *) &EngineContext_obj::maxNodes,HX_HCSTRING("maxNodes","\xed","\x0a","\xdc","\x49")},
	{hx::fsInt,(void *) &EngineContext_obj::collectRate,HX_HCSTRING("collectRate","\xaa","\x41","\xb3","\x53")},
	{hx::fsObject /*::haxor::context::Process*/ ,(void *) &EngineContext_obj::update,HX_HCSTRING("update","\x09","\x86","\x05","\x87")},
	{hx::fsObject /*::haxor::context::Process*/ ,(void *) &EngineContext_obj::fixed_update,HX_HCSTRING("fixed_update","\xb4","\x74","\xd7","\xb6")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &EngineContext_obj::awake,HX_HCSTRING("awake","\x05","\xa1","\xd0","\x28")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &EngineContext_obj::start,HX_HCSTRING("start","\x62","\x74","\x0b","\x84")},
	{hx::fsObject /*::haxor::context::Process*/ ,(void *) &EngineContext_obj::resize,HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08")},
	{hx::fsObject /*::haxor::context::Process*/ ,(void *) &EngineContext_obj::render,HX_HCSTRING("render","\x56","\x6b","\x29","\x05")},
	{hx::fsObject /*::haxor::context::Process*/ ,(void *) &EngineContext_obj::resources,HX_HCSTRING("resources","\xe5","\xd7","\xb0","\x39")},
	{hx::fsObject /*::haxor::context::Process*/ ,(void *) &EngineContext_obj::disposables,HX_HCSTRING("disposables","\xd3","\x9e","\xc1","\x1b")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &EngineContext_obj::list,HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47")},
	{hx::fsObject /*::haxor::context::MeshContext*/ ,(void *) &EngineContext_obj::mesh,HX_HCSTRING("mesh","\xed","\x49","\x59","\x48")},
	{hx::fsObject /*::haxor::context::MaterialContext*/ ,(void *) &EngineContext_obj::material,HX_HCSTRING("material","\xa7","\x5c","\xa5","\xf0")},
	{hx::fsObject /*::haxor::context::TextureContext*/ ,(void *) &EngineContext_obj::texture,HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e")},
	{hx::fsObject /*::haxor::context::CameraContext*/ ,(void *) &EngineContext_obj::camera,HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7")},
	{hx::fsObject /*::haxor::context::RendererContext*/ ,(void *) &EngineContext_obj::renderer,HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2")},
	{hx::fsObject /*::haxor::context::ParticleContext*/ ,(void *) &EngineContext_obj::particle,HX_HCSTRING("particle","\x46","\x3e","\x91","\x6c")},
	{hx::fsObject /*::haxor::context::GizmoContext*/ ,(void *) &EngineContext_obj::gizmo,HX_HCSTRING("gizmo","\x7a","\x19","\x0a","\x94")},
	{hx::fsObject /*::haxor::context::DataContext*/ ,(void *) &EngineContext_obj::data,HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsObject /*::haxor::context::TransformContext*/ ,(void *) &EngineContext_obj::transform,HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45")},
	{hx::fsObject /*::haxor::context::PhysicsContext*/ ,(void *) &EngineContext_obj::physics,HX_HCSTRING("physics","\xc7","\x38","\x51","\xbe")},
	{hx::fsObject /*::haxor::context::KernelContext*/ ,(void *) &EngineContext_obj::kernel,HX_HCSTRING("kernel","\xbd","\x55","\x56","\x3b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EngineContext_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(EngineContext_obj::uid,"uid");
	HX_MARK_MEMBER_NAME(EngineContext_obj::maxNodes,"maxNodes");
	HX_MARK_MEMBER_NAME(EngineContext_obj::collectRate,"collectRate");
	HX_MARK_MEMBER_NAME(EngineContext_obj::update,"update");
	HX_MARK_MEMBER_NAME(EngineContext_obj::fixed_update,"fixed_update");
	HX_MARK_MEMBER_NAME(EngineContext_obj::awake,"awake");
	HX_MARK_MEMBER_NAME(EngineContext_obj::start,"start");
	HX_MARK_MEMBER_NAME(EngineContext_obj::resize,"resize");
	HX_MARK_MEMBER_NAME(EngineContext_obj::render,"render");
	HX_MARK_MEMBER_NAME(EngineContext_obj::resources,"resources");
	HX_MARK_MEMBER_NAME(EngineContext_obj::disposables,"disposables");
	HX_MARK_MEMBER_NAME(EngineContext_obj::list,"list");
	HX_MARK_MEMBER_NAME(EngineContext_obj::mesh,"mesh");
	HX_MARK_MEMBER_NAME(EngineContext_obj::material,"material");
	HX_MARK_MEMBER_NAME(EngineContext_obj::texture,"texture");
	HX_MARK_MEMBER_NAME(EngineContext_obj::camera,"camera");
	HX_MARK_MEMBER_NAME(EngineContext_obj::renderer,"renderer");
	HX_MARK_MEMBER_NAME(EngineContext_obj::particle,"particle");
	HX_MARK_MEMBER_NAME(EngineContext_obj::gizmo,"gizmo");
	HX_MARK_MEMBER_NAME(EngineContext_obj::data,"data");
	HX_MARK_MEMBER_NAME(EngineContext_obj::transform,"transform");
	HX_MARK_MEMBER_NAME(EngineContext_obj::physics,"physics");
	HX_MARK_MEMBER_NAME(EngineContext_obj::kernel,"kernel");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EngineContext_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(EngineContext_obj::uid,"uid");
	HX_VISIT_MEMBER_NAME(EngineContext_obj::maxNodes,"maxNodes");
	HX_VISIT_MEMBER_NAME(EngineContext_obj::collectRate,"collectRate");
	HX_VISIT_MEMBER_NAME(EngineContext_obj::update,"update");
	HX_VISIT_MEMBER_NAME(EngineContext_obj::fixed_update,"fixed_update");
	HX_VISIT_MEMBER_NAME(EngineContext_obj::awake,"awake");
	HX_VISIT_MEMBER_NAME(EngineContext_obj::start,"start");
	HX_VISIT_MEMBER_NAME(EngineContext_obj::resize,"resize");
	HX_VISIT_MEMBER_NAME(EngineContext_obj::render,"render");
	HX_VISIT_MEMBER_NAME(EngineContext_obj::resources,"resources");
	HX_VISIT_MEMBER_NAME(EngineContext_obj::disposables,"disposables");
	HX_VISIT_MEMBER_NAME(EngineContext_obj::list,"list");
	HX_VISIT_MEMBER_NAME(EngineContext_obj::mesh,"mesh");
	HX_VISIT_MEMBER_NAME(EngineContext_obj::material,"material");
	HX_VISIT_MEMBER_NAME(EngineContext_obj::texture,"texture");
	HX_VISIT_MEMBER_NAME(EngineContext_obj::camera,"camera");
	HX_VISIT_MEMBER_NAME(EngineContext_obj::renderer,"renderer");
	HX_VISIT_MEMBER_NAME(EngineContext_obj::particle,"particle");
	HX_VISIT_MEMBER_NAME(EngineContext_obj::gizmo,"gizmo");
	HX_VISIT_MEMBER_NAME(EngineContext_obj::data,"data");
	HX_VISIT_MEMBER_NAME(EngineContext_obj::transform,"transform");
	HX_VISIT_MEMBER_NAME(EngineContext_obj::physics,"physics");
	HX_VISIT_MEMBER_NAME(EngineContext_obj::kernel,"kernel");
};

#endif

hx::Class EngineContext_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("uid","\x90","\x23","\x59","\x00"),
	HX_HCSTRING("maxNodes","\xed","\x0a","\xdc","\x49"),
	HX_HCSTRING("collectRate","\xaa","\x41","\xb3","\x53"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("fixed_update","\xb4","\x74","\xd7","\xb6"),
	HX_HCSTRING("awake","\x05","\xa1","\xd0","\x28"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("resources","\xe5","\xd7","\xb0","\x39"),
	HX_HCSTRING("disposables","\xd3","\x9e","\xc1","\x1b"),
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("mesh","\xed","\x49","\x59","\x48"),
	HX_HCSTRING("material","\xa7","\x5c","\xa5","\xf0"),
	HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"),
	HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7"),
	HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"),
	HX_HCSTRING("particle","\x46","\x3e","\x91","\x6c"),
	HX_HCSTRING("gizmo","\x7a","\x19","\x0a","\x94"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"),
	HX_HCSTRING("physics","\xc7","\x38","\x51","\xbe"),
	HX_HCSTRING("kernel","\xbd","\x55","\x56","\x3b"),
	HX_HCSTRING("Initialize","\x70","\x35","\x6c","\xe3"),
	HX_HCSTRING("Build","\x0e","\x4b","\x18","\x4e"),
	HX_HCSTRING("Enable","\xa3","\x22","\x1c","\x2d"),
	HX_HCSTRING("Disable","\xc8","\x91","\xa9","\x7e"),
	HX_HCSTRING("OnEntiyLayerChange","\xa5","\x90","\x83","\x5f"),
	HX_HCSTRING("OnGUIDChange","\xd8","\x21","\x91","\x4f"),
	HX_HCSTRING("FindByGUID","\x19","\x2c","\xa9","\x29"),
	HX_HCSTRING("Destroy","\xda","\x54","\xd7","\xf1"),
	HX_HCSTRING("ScheduleDestroy","\x43","\x9b","\xd6","\x96"),
	String(null()) };

void EngineContext_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.context.EngineContext","\x42","\xac","\xee","\xe3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &EngineContext_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< EngineContext_obj >;
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

void EngineContext_obj::__boot()
{
	uid= (int)0;
	maxNodes= (int)5000;
	collectRate= (int)10;
}

} // end namespace haxor
} // end namespace context
