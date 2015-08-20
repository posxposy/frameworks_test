#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxor_component_Behaviour
#include <haxor/component/Behaviour.h>
#endif
#ifndef INCLUDED_haxor_component_Component
#include <haxor/component/Component.h>
#endif
#ifndef INCLUDED_haxor_component_animation_Animation
#include <haxor/component/animation/Animation.h>
#endif
#ifndef INCLUDED_haxor_context_BaseProcess
#include <haxor/context/BaseProcess.h>
#endif
#ifndef INCLUDED_haxor_context_EngineContext
#include <haxor/context/EngineContext.h>
#endif
#ifndef INCLUDED_haxor_context_PhysicsContext
#include <haxor/context/PhysicsContext.h>
#endif
#ifndef INCLUDED_haxor_context_Process
#include <haxor/context/Process.h>
#endif
#ifndef INCLUDED_haxor_core_Console
#include <haxor/core/Console.h>
#endif
#ifndef INCLUDED_haxor_core_Engine
#include <haxor/core/Engine.h>
#endif
#ifndef INCLUDED_haxor_core_EngineState
#include <haxor/core/EngineState.h>
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
#ifndef INCLUDED_haxor_core_RenderEngine
#include <haxor/core/RenderEngine.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_graphics_Screen
#include <haxor/graphics/Screen.h>
#endif
namespace haxor{
namespace core{

Void Engine_obj::__construct()
{
	return null();
}

//Engine_obj::~Engine_obj() { }

Dynamic Engine_obj::__CreateEmpty() { return  new Engine_obj; }
hx::ObjectPtr< Engine_obj > Engine_obj::__new()
{  hx::ObjectPtr< Engine_obj > _result_ = new Engine_obj();
	_result_->__construct();
	return _result_;}

Dynamic Engine_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Engine_obj > _result_ = new Engine_obj();
	_result_->__construct();
	return _result_;}

::haxor::core::EngineState Engine_obj::state;

Void Engine_obj::Initialize( ){
{
		HX_STACK_FRAME("haxor.core.Engine","Initialize",0x7c7ff859,"haxor.core.Engine.Initialize","haxor/core/Engine.hx",37,0xa988a499)
		HX_STACK_LINE(38)
		{
			HX_STACK_LINE(38)
			int tmp = ::haxor::core::Console_obj::verbose;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(38)
			bool tmp1 = (tmp >= (int)3);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(38)
			if ((tmp1)){
				HX_STACK_LINE(38)
				::cpp::Lib_obj::println(HX_HCSTRING("Haxor> Engine Initialize.","\x44","\x31","\x14","\x07"));
			}
		}
		HX_STACK_LINE(39)
		::haxor::context::EngineContext_obj::Initialize();
		HX_STACK_LINE(40)
		::haxor::core::Engine_obj::state = ::haxor::core::EngineState_obj::Play;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,Initialize,(void))

Void Engine_obj::Collect( ){
{
		HX_STACK_FRAME("haxor.core.Engine","Collect",0x5d050f01,"haxor.core.Engine.Collect","haxor/core/Engine.hx",47,0xa988a499)
		HX_STACK_LINE(48)
		::haxor::context::Process tmp = ::haxor::context::EngineContext_obj::disposables;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		::haxor::context::Process dp = tmp;		HX_STACK_VAR(dp,"dp");
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(49)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(49)
			int tmp1 = ::haxor::context::EngineContext_obj::collectRate;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(49)
			int _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(49)
			while((true)){
				HX_STACK_LINE(49)
				bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(49)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(49)
				if ((tmp3)){
					HX_STACK_LINE(49)
					break;
				}
				HX_STACK_LINE(49)
				int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(49)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(51)
				bool tmp5 = (dp->m_length <= (int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(51)
				if ((tmp5)){
					HX_STACK_LINE(51)
					break;
				}
				HX_STACK_LINE(52)
				::haxor::core::IDisposable tmp6 = dp->list->__GetItem((int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(52)
				::haxor::core::IDisposable o = tmp6;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(53)
				o->OnDestroy();
				HX_STACK_LINE(54)
				::haxor::core::Resource tmp7 = ((::haxor::core::Resource)(o));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(54)
				dp->Remove(tmp7);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,Collect,(void))

Void Engine_obj::Update( ){
{
		HX_STACK_FRAME("haxor.core.Engine","Update",0x23a5d492,"haxor.core.Engine.Update","haxor/core/Engine.hx",62,0xa988a499)
		HX_STACK_LINE(64)
		::haxor::core::EngineState tmp = ::haxor::core::Engine_obj::state;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(64)
		bool tmp1 = (tmp == ::haxor::core::EngineState_obj::Editor);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(64)
		if ((tmp1)){
			HX_STACK_LINE(64)
			return null();
		}
		HX_STACK_LINE(66)
		Array< ::Dynamic > bl;		HX_STACK_VAR(bl,"bl");
		HX_STACK_LINE(67)
		int k;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(69)
		Array< ::Dynamic > tmp2 = ::haxor::context::EngineContext_obj::awake;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(69)
		bl = tmp2;
		HX_STACK_LINE(70)
		{
			HX_STACK_LINE(70)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(70)
			int _g = bl->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(70)
			while((true)){
				HX_STACK_LINE(70)
				bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(70)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(70)
				if ((tmp4)){
					HX_STACK_LINE(70)
					break;
				}
				HX_STACK_LINE(70)
				int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(70)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(72)
				::haxor::component::Behaviour tmp6 = bl->shift().StaticCast< ::haxor::component::Behaviour >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(72)
				::haxor::component::Behaviour b = tmp6;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(73)
				b->OnAwake();
				HX_STACK_LINE(74)
				b->m_is_awake = true;
			}
		}
		HX_STACK_LINE(78)
		Array< ::Dynamic > tmp3 = ::haxor::context::EngineContext_obj::start;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(78)
		bl = tmp3;
		HX_STACK_LINE(78)
		k = (int)0;
		HX_STACK_LINE(79)
		while((true)){
			HX_STACK_LINE(79)
			bool tmp4 = (k < bl->length);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(79)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(79)
			if ((tmp5)){
				HX_STACK_LINE(79)
				break;
			}
			HX_STACK_LINE(81)
			Array< ::Dynamic > tmp6 = bl;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(81)
			int tmp7 = (k)++;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(81)
			::haxor::component::Behaviour tmp8 = tmp6->__get(tmp7).StaticCast< ::haxor::component::Behaviour >();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(81)
			::haxor::component::Behaviour b = tmp8;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(82)
			bool tmp9 = b->get_enabled();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(82)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(82)
			if ((tmp10)){
				HX_STACK_LINE(82)
				continue;
			}
			HX_STACK_LINE(83)
			bool tmp11 = b->m_is_awake;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(83)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(83)
			if ((tmp12)){
				HX_STACK_LINE(83)
				continue;
			}
			HX_STACK_LINE(84)
			b->OnStart();
			HX_STACK_LINE(85)
			b->m_is_start = true;
			HX_STACK_LINE(86)
			::haxor::component::Behaviour tmp13 = b;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(86)
			bl->remove(tmp13);
			HX_STACK_LINE(87)
			(k)--;
		}
		HX_STACK_LINE(90)
		::haxor::context::Process tmp4 = ::haxor::context::EngineContext_obj::update;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(90)
		::haxor::context::Process up = tmp4;		HX_STACK_VAR(up,"up");
		HX_STACK_LINE(92)
		{
			HX_STACK_LINE(92)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(92)
			int _g = up->m_length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(92)
			while((true)){
				HX_STACK_LINE(92)
				bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(92)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(92)
				if ((tmp6)){
					HX_STACK_LINE(92)
					break;
				}
				HX_STACK_LINE(92)
				int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(92)
				int i = tmp7;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(94)
				::haxor::core::IUpdateable tmp8 = up->list->__GetItem(i);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(94)
				::haxor::core::Resource r = ((::haxor::core::Resource)(tmp8));		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(95)
				bool tmp9 = (r == null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(95)
				if ((tmp9)){
					HX_STACK_LINE(95)
					continue;
				}
				HX_STACK_LINE(96)
				bool tmp10 = r->m_destroyed;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(96)
				if ((tmp10)){
					HX_STACK_LINE(96)
					continue;
				}
				HX_STACK_LINE(97)
				bool tmp11 = r->m_is_behaviour;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(97)
				if ((tmp11)){
					HX_STACK_LINE(99)
					::haxor::component::Behaviour b = ((::haxor::component::Behaviour)(r));		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(100)
					bool tmp12 = b->m_is_awake;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(100)
					bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(100)
					if ((tmp13)){
						HX_STACK_LINE(100)
						continue;
					}
					HX_STACK_LINE(101)
					bool tmp14 = b->m_is_start;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(101)
					bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(101)
					if ((tmp15)){
						HX_STACK_LINE(101)
						continue;
					}
				}
				HX_STACK_LINE(103)
				::haxor::core::IUpdateable tmp12 = up->list->__GetItem(i);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(103)
				tmp12->OnUpdate();
			}
		}
		HX_STACK_LINE(107)
		::haxor::component::animation::Animation_obj::Update();
		HX_STACK_LINE(108)
		::haxor::context::PhysicsContext tmp5 = ::haxor::context::EngineContext_obj::physics;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(108)
		tmp5->Step();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,Update,(void))

Void Engine_obj::Render( ){
{
		HX_STACK_FRAME("haxor.core.Engine","Render",0xa1c9b9df,"haxor.core.Engine.Render","haxor/core/Engine.hx",117,0xa988a499)
		HX_STACK_LINE(120)
		::haxor::core::RenderEngine_obj::Render();
		HX_STACK_LINE(123)
		::haxor::core::Engine_obj::RenderIRenderers();
		HX_STACK_LINE(126)
		::haxor::core::RenderEngine_obj::RenderFinish();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,Render,(void))

Void Engine_obj::RenderIRenderers( ){
{
		HX_STACK_FRAME("haxor.core.Engine","RenderIRenderers",0x58ca4ae6,"haxor.core.Engine.RenderIRenderers","haxor/core/Engine.hx",135,0xa988a499)
		HX_STACK_LINE(136)
		::haxor::context::Process tmp = ::haxor::context::EngineContext_obj::render;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(136)
		::haxor::context::Process rp = tmp;		HX_STACK_VAR(rp,"rp");
		HX_STACK_LINE(138)
		{
			HX_STACK_LINE(138)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(138)
			int _g = rp->m_length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(138)
			while((true)){
				HX_STACK_LINE(138)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(138)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(138)
				if ((tmp2)){
					HX_STACK_LINE(138)
					break;
				}
				HX_STACK_LINE(138)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(138)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(140)
				::haxor::core::IRenderable tmp4 = rp->list->__GetItem(i);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(140)
				::haxor::core::Resource r = ((::haxor::core::Resource)(tmp4));		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(141)
				bool tmp5 = r->m_destroyed;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(141)
				if ((tmp5)){
					HX_STACK_LINE(141)
					continue;
				}
				HX_STACK_LINE(142)
				::haxor::core::IRenderable tmp6 = rp->list->__GetItem(i);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(142)
				tmp6->OnRender();
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,RenderIRenderers,(void))

Void Engine_obj::Resize( ){
{
		HX_STACK_FRAME("haxor.core.Engine","Resize",0xa51ba87d,"haxor.core.Engine.Resize","haxor/core/Engine.hx",150,0xa988a499)
		HX_STACK_LINE(152)
		::haxor::core::RenderEngine_obj::Resize();
		HX_STACK_LINE(155)
		::haxor::core::EngineState tmp = ::haxor::core::Engine_obj::state;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(155)
		bool tmp1 = (tmp == ::haxor::core::EngineState_obj::Editor);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(155)
		if ((tmp1)){
			HX_STACK_LINE(155)
			return null();
		}
		HX_STACK_LINE(157)
		::haxor::context::Process tmp2 = ::haxor::context::EngineContext_obj::resize;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(157)
		::haxor::context::Process rp = tmp2;		HX_STACK_VAR(rp,"rp");
		HX_STACK_LINE(158)
		{
			HX_STACK_LINE(158)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(158)
			int _g = rp->m_length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(158)
			while((true)){
				HX_STACK_LINE(158)
				bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(158)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(158)
				if ((tmp4)){
					HX_STACK_LINE(158)
					break;
				}
				HX_STACK_LINE(158)
				int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(158)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(160)
				::haxor::core::IResizeable tmp6 = rp->list->__GetItem(i);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(160)
				::haxor::core::Resource r = ((::haxor::core::Resource)(tmp6));		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(161)
				bool tmp7 = r->m_destroyed;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(161)
				if ((tmp7)){
					HX_STACK_LINE(161)
					continue;
				}
				HX_STACK_LINE(162)
				::haxor::core::IResizeable tmp8 = rp->list->__GetItem(i);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(162)
				Float tmp9 = ::haxor::graphics::Screen_obj::m_width;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(162)
				Float tmp10 = ::haxor::graphics::Screen_obj::m_height;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(162)
				tmp8->OnResize(tmp9,tmp10);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,Resize,(void))


Engine_obj::Engine_obj()
{
}

bool Engine_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { outValue = state; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"Update") ) { outValue = Update_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Render") ) { outValue = Render_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Resize") ) { outValue = Resize_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"Collect") ) { outValue = Collect_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"Initialize") ) { outValue = Initialize_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"RenderIRenderers") ) { outValue = RenderIRenderers_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxor::core::EngineState*/ ,(void *) &Engine_obj::state,HX_HCSTRING("state","\x11","\x76","\x0b","\x84")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Engine_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Engine_obj::state,"state");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Engine_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Engine_obj::state,"state");
};

#endif

hx::Class Engine_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("state","\x11","\x76","\x0b","\x84"),
	HX_HCSTRING("Initialize","\x70","\x35","\x6c","\xe3"),
	HX_HCSTRING("Collect","\x8a","\xcd","\xb1","\xba"),
	HX_HCSTRING("Update","\x29","\xfa","\x99","\xbb"),
	HX_HCSTRING("Render","\x76","\xdf","\xbd","\x39"),
	HX_HCSTRING("RenderIRenderers","\x3d","\xf3","\x6f","\x12"),
	HX_HCSTRING("Resize","\x14","\xce","\x0f","\x3d"),
	String(null()) };

void Engine_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.core.Engine","\xe5","\xd2","\x2d","\x2c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Engine_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Engine_obj >;
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
