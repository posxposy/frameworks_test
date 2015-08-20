#include <hxcpp.h>

#ifndef INCLUDED_haxor_component_Behaviour
#include <haxor/component/Behaviour.h>
#endif
#ifndef INCLUDED_haxor_component_Camera
#include <haxor/component/Camera.h>
#endif
#ifndef INCLUDED_haxor_component_Component
#include <haxor/component/Component.h>
#endif
#ifndef INCLUDED_haxor_component_Renderer
#include <haxor/component/Renderer.h>
#endif
#ifndef INCLUDED_haxor_component_Transform
#include <haxor/component/Transform.h>
#endif
#ifndef INCLUDED_haxor_context_BaseProcess
#include <haxor/context/BaseProcess.h>
#endif
#ifndef INCLUDED_haxor_context_CameraContext
#include <haxor/context/CameraContext.h>
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
#ifndef INCLUDED_haxor_context_Process
#include <haxor/context/Process.h>
#endif
#ifndef INCLUDED_haxor_context_RendererContext
#include <haxor/context/RendererContext.h>
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
#ifndef INCLUDED_haxor_core_RenderEngine
#include <haxor/core/RenderEngine.h>
#endif
#ifndef INCLUDED_haxor_core_RenderStats
#include <haxor/core/RenderStats.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_graphics_mesh_Mesh
#include <haxor/graphics/mesh/Mesh.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_ISerializable
#include <haxor/io/serialization/ISerializable.h>
#endif
namespace haxor{
namespace core{

Void RenderEngine_obj::__construct()
{
	return null();
}

//RenderEngine_obj::~RenderEngine_obj() { }

Dynamic RenderEngine_obj::__CreateEmpty() { return  new RenderEngine_obj; }
hx::ObjectPtr< RenderEngine_obj > RenderEngine_obj::__new()
{  hx::ObjectPtr< RenderEngine_obj > _result_ = new RenderEngine_obj();
	_result_->__construct();
	return _result_;}

Dynamic RenderEngine_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RenderEngine_obj > _result_ = new RenderEngine_obj();
	_result_->__construct();
	return _result_;}

Dynamic RenderEngine_obj::onfinish;

Void RenderEngine_obj::Render( ){
{
		HX_STACK_FRAME("haxor.core.RenderEngine","Render",0xee5e4c69,"haxor.core.RenderEngine.Render","haxor/core/RenderEngine.hx",26,0xca802223)
		HX_STACK_LINE(28)
		::haxor::core::RenderStats_obj::BeginRender();
		HX_STACK_LINE(35)
		::haxor::core::RenderEngine_obj::RenderCameras();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(RenderEngine_obj,Render,(void))

Void RenderEngine_obj::RenderCameras( ){
{
		HX_STACK_FRAME("haxor.core.RenderEngine","RenderCameras",0xd976b4c5,"haxor.core.RenderEngine.RenderCameras","haxor/core/RenderEngine.hx",44,0xca802223)
		HX_STACK_LINE(45)
		::haxor::context::CameraContext tmp = ::haxor::context::EngineContext_obj::camera;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		Array< ::Dynamic > cl = tmp->list;		HX_STACK_VAR(cl,"cl");
		HX_STACK_LINE(46)
		{
			HX_STACK_LINE(46)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(46)
			int _g = cl->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(46)
			while((true)){
				HX_STACK_LINE(46)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(46)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(46)
				if ((tmp2)){
					HX_STACK_LINE(46)
					break;
				}
				HX_STACK_LINE(46)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(46)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(48)
				::haxor::component::Camera tmp4 = cl->__get(i).StaticCast< ::haxor::component::Camera >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(48)
				::haxor::component::Camera tmp5 = ::haxor::component::Camera_obj::m_current = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(48)
				::haxor::component::Camera c = tmp5;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(49)
				::haxor::component::Camera tmp6 = c;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(49)
				::haxor::core::RenderEngine_obj::RenderCamera(tmp6);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(RenderEngine_obj,RenderCameras,(void))

Void RenderEngine_obj::RenderCamera( ::haxor::component::Camera c){
{
		HX_STACK_FRAME("haxor.core.RenderEngine","RenderCamera",0x628dbbee,"haxor.core.RenderEngine.RenderCamera","haxor/core/RenderEngine.hx",60,0xca802223)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(61)
		bool tmp = c->get_enabled();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(61)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(61)
		if ((tmp1)){
			HX_STACK_LINE(61)
			return null();
		}
		HX_STACK_LINE(63)
		::haxor::context::CameraContext tmp2 = ::haxor::context::EngineContext_obj::camera;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(63)
		::haxor::component::Camera tmp3 = c;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(63)
		tmp2->Bind(tmp3);
		HX_STACK_LINE(66)
		Array< int > layers = c->m_layers;		HX_STACK_VAR(layers,"layers");
		HX_STACK_LINE(68)
		{
			HX_STACK_LINE(68)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(68)
			int _g = layers->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(68)
			while((true)){
				HX_STACK_LINE(68)
				bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(68)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(68)
				if ((tmp5)){
					HX_STACK_LINE(68)
					break;
				}
				HX_STACK_LINE(68)
				int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(68)
				int i = tmp6;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(70)
				int tmp7 = layers->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(70)
				int l = tmp7;		HX_STACK_VAR(l,"l");
				HX_STACK_LINE(71)
				int tmp8 = l;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(71)
				::haxor::component::Camera tmp9 = c;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(71)
				::haxor::core::RenderEngine_obj::RenderCameraLayer(tmp8,tmp9);
			}
		}
		HX_STACK_LINE(77)
		::haxor::component::Camera tmp4 = c;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(77)
		::haxor::component::Camera tmp5 = ::haxor::component::Camera_obj::m_main;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(77)
		bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(77)
		if ((tmp6)){
			HX_STACK_LINE(79)
			Dynamic tmp7 = ::haxor::core::RenderEngine_obj::onfinish_dyn();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(79)
			bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(79)
			if ((tmp8)){
				HX_STACK_LINE(79)
				::haxor::core::RenderEngine_obj::onfinish();
			}
			HX_STACK_LINE(80)
			::haxor::context::GizmoContext tmp9 = ::haxor::context::EngineContext_obj::gizmo;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(80)
			tmp9->Render();
		}
		HX_STACK_LINE(83)
		::haxor::context::CameraContext tmp7 = ::haxor::context::EngineContext_obj::camera;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(83)
		::haxor::component::Camera tmp8 = c;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(83)
		tmp7->Unbind(tmp8);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RenderEngine_obj,RenderCamera,(void))

Void RenderEngine_obj::RenderCameraLayer( int l,::haxor::component::Camera c){
{
		HX_STACK_FRAME("haxor.core.RenderEngine","RenderCameraLayer",0x26aa3703,"haxor.core.RenderEngine.RenderCameraLayer","haxor/core/RenderEngine.hx",94,0xca802223)
		HX_STACK_ARG(l,"l")
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(96)
		::haxor::component::Transform lt = null();		HX_STACK_VAR(lt,"lt");
		HX_STACK_LINE(97)
		::haxor::context::RendererContext tmp = ::haxor::context::EngineContext_obj::renderer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(97)
		Array< ::Dynamic > tmp1 = tmp->display;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(97)
		int tmp2 = l;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(97)
		::haxor::context::Process tmp3 = tmp1->__get(tmp2).StaticCast< ::haxor::context::Process >();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(97)
		::haxor::context::Process renderers = tmp3;		HX_STACK_VAR(renderers,"renderers");
		HX_STACK_LINE(99)
		{
			HX_STACK_LINE(99)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(99)
			int _g = renderers->m_length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(99)
			while((true)){
				HX_STACK_LINE(99)
				bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(99)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(99)
				if ((tmp5)){
					HX_STACK_LINE(99)
					break;
				}
				HX_STACK_LINE(99)
				int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(99)
				int j = tmp6;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(101)
				::haxor::component::Renderer tmp7 = renderers->list->__GetItem(j);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(101)
				::haxor::component::Renderer r = tmp7;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(103)
				int tmp8 = r->m_entity->m_layer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(103)
				int tmp9 = l;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(103)
				int tmp10 = (int(tmp8) & int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(103)
				bool tmp11 = (tmp10 == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(103)
				if ((tmp11)){
					HX_STACK_LINE(103)
					continue;
				}
				HX_STACK_LINE(105)
				bool tmp12 = ::haxor::component::Camera_obj::SAPCulling;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(105)
				if ((tmp12)){
					HX_STACK_LINE(105)
					::haxor::context::RendererContext tmp13 = ::haxor::context::EngineContext_obj::renderer;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(105)
					::haxor::component::Renderer tmp14 = r;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(105)
					::haxor::component::Camera tmp15 = c;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(105)
					bool tmp16 = tmp13->IsSAPCulled(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(105)
					if ((tmp16)){
						HX_STACK_LINE(105)
						continue;
					}
				}
				HX_STACK_LINE(108)
				::haxor::component::Renderer tmp13 = r;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(108)
				::haxor::core::RenderEngine_obj::RenderRenderer(tmp13);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(RenderEngine_obj,RenderCameraLayer,(void))

Void RenderEngine_obj::RenderRenderer( ::haxor::component::Renderer r){
{
		HX_STACK_FRAME("haxor.core.RenderEngine","RenderRenderer",0x391bdecc,"haxor.core.RenderEngine.RenderRenderer","haxor/core/RenderEngine.hx",117,0xca802223)
		HX_STACK_ARG(r,"r")
		HX_STACK_LINE(119)
		r->UpdateCulling();
		HX_STACK_LINE(131)
		(::haxor::core::RenderStats_obj::visible)++;
		HX_STACK_LINE(135)
		r->OnRender();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RenderEngine_obj,RenderRenderer,(void))

Void RenderEngine_obj::RenderFinish( ){
{
		HX_STACK_FRAME("haxor.core.RenderEngine","RenderFinish",0x3180b59c,"haxor.core.RenderEngine.RenderFinish","haxor/core/RenderEngine.hx",144,0xca802223)
		HX_STACK_LINE(145)
		::haxor::context::CameraContext tmp = ::haxor::context::EngineContext_obj::camera;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(145)
		Array< ::Dynamic > cl = tmp->list;		HX_STACK_VAR(cl,"cl");
		HX_STACK_LINE(146)
		{
			HX_STACK_LINE(146)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(146)
			int _g = cl->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(146)
			while((true)){
				HX_STACK_LINE(146)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(146)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(146)
				if ((tmp2)){
					HX_STACK_LINE(146)
					break;
				}
				HX_STACK_LINE(146)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(146)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(148)
				::haxor::component::Camera tmp4 = cl->__get(i).StaticCast< ::haxor::component::Camera >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(148)
				tmp4->m_view_uniform_dirty = false;
				HX_STACK_LINE(149)
				::haxor::component::Camera tmp5 = cl->__get(i).StaticCast< ::haxor::component::Camera >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(149)
				tmp5->m_proj_uniform_dirty = false;
			}
		}
		HX_STACK_LINE(151)
		::haxor::context::RendererContext tmp1 = ::haxor::context::EngineContext_obj::renderer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(151)
		tmp1->sap_dirty = false;
		HX_STACK_LINE(152)
		::haxor::context::KernelContext tmp2 = ::haxor::context::EngineContext_obj::kernel;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(152)
		tmp2->Execute();
		HX_STACK_LINE(153)
		::haxor::context::MaterialContext tmp3 = ::haxor::context::EngineContext_obj::material;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(153)
		tmp3->Unbind();
		HX_STACK_LINE(154)
		::haxor::context::MeshContext tmp4 = ::haxor::context::EngineContext_obj::mesh;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(154)
		tmp4->Unbind(null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(RenderEngine_obj,RenderFinish,(void))

Void RenderEngine_obj::Resize( ){
{
		HX_STACK_FRAME("haxor.core.RenderEngine","Resize",0xf1b03b07,"haxor.core.RenderEngine.Resize","haxor/core/RenderEngine.hx",161,0xca802223)
		HX_STACK_LINE(162)
		::haxor::context::CameraContext tmp = ::haxor::context::EngineContext_obj::camera;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(162)
		tmp->Resize();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(RenderEngine_obj,Resize,(void))


RenderEngine_obj::RenderEngine_obj()
{
}

bool RenderEngine_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"Render") ) { outValue = Render_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Resize") ) { outValue = Resize_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onfinish") ) { outValue = onfinish; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"RenderCamera") ) { outValue = RenderCamera_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"RenderFinish") ) { outValue = RenderFinish_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"RenderCameras") ) { outValue = RenderCameras_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"RenderRenderer") ) { outValue = RenderRenderer_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"RenderCameraLayer") ) { outValue = RenderCameraLayer_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &RenderEngine_obj::onfinish,HX_HCSTRING("onfinish","\xb2","\xc2","\x97","\x31")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RenderEngine_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(RenderEngine_obj::onfinish,"onfinish");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RenderEngine_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(RenderEngine_obj::onfinish,"onfinish");
};

#endif

hx::Class RenderEngine_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("onfinish","\xb2","\xc2","\x97","\x31"),
	HX_HCSTRING("Render","\x76","\xdf","\xbd","\x39"),
	HX_HCSTRING("RenderCameras","\x58","\x4d","\x0f","\x27"),
	HX_HCSTRING("RenderCamera","\xbb","\x96","\xf4","\xee"),
	HX_HCSTRING("RenderCameraLayer","\x16","\x15","\x56","\xac"),
	HX_HCSTRING("RenderRenderer","\xd9","\xc6","\x08","\xd1"),
	HX_HCSTRING("RenderFinish","\x69","\x90","\xe7","\xbd"),
	HX_HCSTRING("Resize","\x14","\xce","\x0f","\x3d"),
	String(null()) };

void RenderEngine_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.core.RenderEngine","\x1b","\x53","\x2d","\x17");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &RenderEngine_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< RenderEngine_obj >;
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
} // end namespace core
