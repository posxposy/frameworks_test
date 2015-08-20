#include <hxcpp.h>

#ifndef INCLUDED_haxor_component_Behaviour
#include <haxor/component/Behaviour.h>
#endif
#ifndef INCLUDED_haxor_component_Component
#include <haxor/component/Component.h>
#endif
#ifndef INCLUDED_haxor_component_Renderer
#include <haxor/component/Renderer.h>
#endif
#ifndef INCLUDED_haxor_context_EngineContext
#include <haxor/context/EngineContext.h>
#endif
#ifndef INCLUDED_haxor_context_RendererContext
#include <haxor/context/RendererContext.h>
#endif
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_graphics_material_Material
#include <haxor/graphics/material/Material.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_ISerializable
#include <haxor/io/serialization/ISerializable.h>
#endif
namespace haxor{
namespace component{

Void Renderer_obj::__construct(::String __o_p_name)
{
HX_STACK_FRAME("haxor.component.Renderer","new",0x83675ed2,"haxor.component.Renderer.new","haxor/component/Renderer.hx",14,0x7c4f98dc)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_p_name,"p_name")
::String p_name = __o_p_name.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(45)
	this->m_has_mesh = false;
	HX_STACK_LINE(14)
	::String tmp = p_name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	super::__construct(tmp);
}
;
	return null();
}

//Renderer_obj::~Renderer_obj() { }

Dynamic Renderer_obj::__CreateEmpty() { return  new Renderer_obj; }
hx::ObjectPtr< Renderer_obj > Renderer_obj::__new(::String __o_p_name)
{  hx::ObjectPtr< Renderer_obj > _result_ = new Renderer_obj();
	_result_->__construct(__o_p_name);
	return _result_;}

Dynamic Renderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Renderer_obj > _result_ = new Renderer_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::haxor::graphics::material::Material Renderer_obj::get_material( ){
	HX_STACK_FRAME("haxor.component.Renderer","get_material",0x97f323fe,"haxor.component.Renderer.get_material","haxor/component/Renderer.hx",22,0x7c4f98dc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(22)
	::haxor::graphics::material::Material tmp = this->m_material;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,get_material,return )

::haxor::graphics::material::Material Renderer_obj::set_material( ::haxor::graphics::material::Material v){
	HX_STACK_FRAME("haxor.component.Renderer","set_material",0xacec4772,"haxor.component.Renderer.set_material","haxor/component/Renderer.hx",24,0x7c4f98dc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(25)
	::haxor::graphics::material::Material tmp = this->m_material;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	::haxor::graphics::material::Material tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(25)
	if ((tmp2)){
		HX_STACK_LINE(25)
		::haxor::graphics::material::Material tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(25)
		return tmp3;
	}
	HX_STACK_LINE(26)
	this->m_material = v;
	HX_STACK_LINE(27)
	bool tmp3 = (v == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(27)
	int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(27)
	if ((tmp3)){
		HX_STACK_LINE(27)
		tmp4 = (int)-1;
	}
	else{
		HX_STACK_LINE(27)
		tmp4 = v->queue;
	}
	HX_STACK_LINE(27)
	this->m_last_queue = tmp4;
	HX_STACK_LINE(28)
	::haxor::context::RendererContext tmp5 = ::haxor::context::EngineContext_obj::renderer;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(28)
	tmp5->OnMaterialChange(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(29)
	::haxor::graphics::material::Material tmp6 = v;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(29)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,set_material,return )

bool Renderer_obj::get_visible( ){
	HX_STACK_FRAME("haxor.component.Renderer","get_visible",0x4ef128fb,"haxor.component.Renderer.get_visible","haxor/component/Renderer.hx",37,0x7c4f98dc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(37)
	bool tmp = this->m_visible;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	if ((tmp)){
		HX_STACK_LINE(37)
		bool tmp2 = this->m_culled;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(37)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(37)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(37)
		tmp1 = !(tmp4);
	}
	else{
		HX_STACK_LINE(37)
		tmp1 = false;
	}
	HX_STACK_LINE(37)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,get_visible,return )

bool Renderer_obj::set_visible( bool v){
	HX_STACK_FRAME("haxor.component.Renderer","set_visible",0x595e3007,"haxor.component.Renderer.set_visible","haxor/component/Renderer.hx",38,0x7c4f98dc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(38)
	this->m_visible = v;
	HX_STACK_LINE(38)
	bool tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,set_visible,return )

Void Renderer_obj::OnBuild( ){
{
		HX_STACK_FRAME("haxor.component.Renderer","OnBuild",0xb11a50e1,"haxor.component.Renderer.OnBuild","haxor/component/Renderer.hx",56,0x7c4f98dc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(57)
		this->super::OnBuild();
		HX_STACK_LINE(58)
		this->m_last_queue = (int)-1;
		HX_STACK_LINE(59)
		this->m_visible = true;
		HX_STACK_LINE(60)
		this->m_culled = false;
		HX_STACK_LINE(61)
		::haxor::context::RendererContext tmp = ::haxor::context::EngineContext_obj::renderer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(61)
		tmp->Create(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


Void Renderer_obj::OnRender( ){
{
		HX_STACK_FRAME("haxor.component.Renderer","OnRender",0x7880f243,"haxor.component.Renderer.OnRender","haxor/component/Renderer.hx",67,0x7c4f98dc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(68)
		::haxor::graphics::material::Material tmp = this->m_material;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(68)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(68)
		if ((tmp1)){
			HX_STACK_LINE(69)
			int tmp2 = this->m_last_queue;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(69)
			::haxor::graphics::material::Material tmp3 = this->m_material;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(69)
			int tmp4 = tmp3->queue;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(69)
			bool tmp5 = (tmp2 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(69)
			if ((tmp5)){
				HX_STACK_LINE(71)
				::haxor::graphics::material::Material tmp6 = this->m_material;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(71)
				this->m_last_queue = tmp6->queue;
				HX_STACK_LINE(72)
				::haxor::context::RendererContext tmp7 = ::haxor::context::EngineContext_obj::renderer;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(72)
				tmp7->OnMaterialChange(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,OnRender,(void))

Void Renderer_obj::UpdateCulling( ){
{
		HX_STACK_FRAME("haxor.component.Renderer","UpdateCulling",0x62436839,"haxor.component.Renderer.UpdateCulling","haxor/component/Renderer.hx",80,0x7c4f98dc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(83)
		bool tmp = this->m_culled;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(83)
		bool v0 = tmp;		HX_STACK_VAR(v0,"v0");
		HX_STACK_LINE(84)
		bool tmp1 = this->CheckCulling();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(84)
		bool v1 = tmp1;		HX_STACK_VAR(v1,"v1");
		HX_STACK_LINE(85)
		this->m_culled = v1;
		HX_STACK_LINE(87)
		bool tmp2 = (v0 != v1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(87)
		if ((tmp2)){
			HX_STACK_LINE(89)
			::haxor::context::RendererContext tmp3 = ::haxor::context::EngineContext_obj::renderer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(89)
			bool tmp4 = v1;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(89)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(89)
			tmp3->OnVisibilityChange(hx::ObjectPtr<OBJ_>(this),tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,UpdateCulling,(void))

bool Renderer_obj::CheckCulling( ){
	HX_STACK_FRAME("haxor.component.Renderer","CheckCulling",0xfb54f9f6,"haxor.component.Renderer.CheckCulling","haxor/component/Renderer.hx",97,0x7c4f98dc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(97)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,CheckCulling,return )

Void Renderer_obj::OnDestroy( ){
{
		HX_STACK_FRAME("haxor.component.Renderer","OnDestroy",0x9dc4b56d,"haxor.component.Renderer.OnDestroy","haxor/component/Renderer.hx",103,0x7c4f98dc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(104)
		::haxor::context::RendererContext tmp = ::haxor::context::EngineContext_obj::renderer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(104)
		tmp->Destroy(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}



Renderer_obj::Renderer_obj()
{
}

void Renderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Renderer);
	HX_MARK_MEMBER_NAME(m_material,"m_material");
	HX_MARK_MEMBER_NAME(m_visible,"m_visible");
	HX_MARK_MEMBER_NAME(m_culled,"m_culled");
	HX_MARK_MEMBER_NAME(m_has_mesh,"m_has_mesh");
	HX_MARK_MEMBER_NAME(m_last_queue,"m_last_queue");
	::haxor::component::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Renderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_material,"m_material");
	HX_VISIT_MEMBER_NAME(m_visible,"m_visible");
	HX_VISIT_MEMBER_NAME(m_culled,"m_culled");
	HX_VISIT_MEMBER_NAME(m_has_mesh,"m_has_mesh");
	HX_VISIT_MEMBER_NAME(m_last_queue,"m_last_queue");
	::haxor::component::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Renderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == hx::paccAlways) return get_visible(); }
		if (HX_FIELD_EQ(inName,"OnBuild") ) { return OnBuild_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"material") ) { if (inCallProp == hx::paccAlways) return get_material(); }
		if (HX_FIELD_EQ(inName,"m_culled") ) { return m_culled; }
		if (HX_FIELD_EQ(inName,"OnRender") ) { return OnRender_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"m_visible") ) { return m_visible; }
		if (HX_FIELD_EQ(inName,"OnDestroy") ) { return OnDestroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_material") ) { return m_material; }
		if (HX_FIELD_EQ(inName,"m_has_mesh") ) { return m_has_mesh; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_visible") ) { return get_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_material") ) { return get_material_dyn(); }
		if (HX_FIELD_EQ(inName,"set_material") ) { return set_material_dyn(); }
		if (HX_FIELD_EQ(inName,"m_last_queue") ) { return m_last_queue; }
		if (HX_FIELD_EQ(inName,"CheckCulling") ) { return CheckCulling_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"UpdateCulling") ) { return UpdateCulling_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Renderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"material") ) { if (inCallProp == hx::paccAlways) return set_material(inValue); }
		if (HX_FIELD_EQ(inName,"m_culled") ) { m_culled=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"m_visible") ) { m_visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_material") ) { m_material=inValue.Cast< ::haxor::graphics::material::Material >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_has_mesh") ) { m_has_mesh=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"m_last_queue") ) { m_last_queue=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Renderer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Renderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("material","\xa7","\x5c","\xa5","\xf0"));
	outFields->push(HX_HCSTRING("m_material","\xf9","\x5d","\xf0","\x17"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("m_visible","\x60","\x87","\xa6","\xad"));
	outFields->push(HX_HCSTRING("m_culled","\x63","\x97","\xdd","\x03"));
	outFields->push(HX_HCSTRING("m_has_mesh","\x84","\x41","\xe0","\x1b"));
	outFields->push(HX_HCSTRING("m_last_queue","\x7a","\xbd","\x23","\xc1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::graphics::material::Material*/ ,(int)offsetof(Renderer_obj,m_material),HX_HCSTRING("m_material","\xf9","\x5d","\xf0","\x17")},
	{hx::fsBool,(int)offsetof(Renderer_obj,m_visible),HX_HCSTRING("m_visible","\x60","\x87","\xa6","\xad")},
	{hx::fsBool,(int)offsetof(Renderer_obj,m_culled),HX_HCSTRING("m_culled","\x63","\x97","\xdd","\x03")},
	{hx::fsBool,(int)offsetof(Renderer_obj,m_has_mesh),HX_HCSTRING("m_has_mesh","\x84","\x41","\xe0","\x1b")},
	{hx::fsInt,(int)offsetof(Renderer_obj,m_last_queue),HX_HCSTRING("m_last_queue","\x7a","\xbd","\x23","\xc1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get_material","\xb0","\x10","\xbf","\xa5"),
	HX_HCSTRING("set_material","\x24","\x34","\xb8","\xba"),
	HX_HCSTRING("m_material","\xf9","\x5d","\xf0","\x17"),
	HX_HCSTRING("get_visible","\x89","\xd8","\x1e","\x29"),
	HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"),
	HX_HCSTRING("m_visible","\x60","\x87","\xa6","\xad"),
	HX_HCSTRING("m_culled","\x63","\x97","\xdd","\x03"),
	HX_HCSTRING("m_has_mesh","\x84","\x41","\xe0","\x1b"),
	HX_HCSTRING("m_last_queue","\x7a","\xbd","\x23","\xc1"),
	HX_HCSTRING("OnBuild","\x6f","\xa1","\x79","\x1e"),
	HX_HCSTRING("OnRender","\xf5","\x1d","\x88","\xbe"),
	HX_HCSTRING("UpdateCulling","\x47","\x97","\xe6","\x66"),
	HX_HCSTRING("CheckCulling","\xa8","\xe6","\x20","\x09"),
	HX_HCSTRING("OnDestroy","\x7b","\xc5","\x03","\x9e"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Renderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Renderer_obj::__mClass,"__mClass");
};

#endif

hx::Class Renderer_obj::__mClass;

void Renderer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.component.Renderer","\xe0","\x4d","\xbf","\xc4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Renderer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Renderer_obj >;
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
} // end namespace component
