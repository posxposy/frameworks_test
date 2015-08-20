#include <hxcpp.h>

#ifndef INCLUDED_haxor_context_Gizmo
#include <haxor/context/Gizmo.h>
#endif
#ifndef INCLUDED_haxor_context_LineGizmo
#include <haxor/context/LineGizmo.h>
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
#ifndef INCLUDED_haxor_graphics_mesh_Mesh3
#include <haxor/graphics/mesh/Mesh3.h>
#endif
#ifndef INCLUDED_haxor_graphics_mesh_MeshAttrib
#include <haxor/graphics/mesh/MeshAttrib.h>
#endif
#ifndef INCLUDED_haxor_graphics_mesh_MeshLayout
#include <haxor/graphics/mesh/MeshLayout.h>
#endif
#ifndef INCLUDED_haxor_io_Buffer
#include <haxor/io/Buffer.h>
#endif
#ifndef INCLUDED_haxor_io_FloatArray
#include <haxor/io/FloatArray.h>
#endif
namespace haxor{
namespace context{

Void LineGizmo_obj::__construct()
{
HX_STACK_FRAME("haxor.context.LineGizmo","new",0x51f102cd,"haxor.context.LineGizmo.new","haxor/context/GizmoContext.hx",649,0xa99c50bc)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(649)
	int tmp = ::haxor::context::Gizmo_obj::LINE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(649)
	int tmp1 = ::haxor::context::Gizmo_obj::MAX_GIZMOS;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(649)
	int tmp2 = (tmp1 * (int)3);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(649)
	super::__construct(tmp,tmp2);
}
;
	return null();
}

//LineGizmo_obj::~LineGizmo_obj() { }

Dynamic LineGizmo_obj::__CreateEmpty() { return  new LineGizmo_obj; }
hx::ObjectPtr< LineGizmo_obj > LineGizmo_obj::__new()
{  hx::ObjectPtr< LineGizmo_obj > _result_ = new LineGizmo_obj();
	_result_->__construct();
	return _result_;}

Dynamic LineGizmo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LineGizmo_obj > _result_ = new LineGizmo_obj();
	_result_->__construct();
	return _result_;}

Void LineGizmo_obj::OnBuild( ){
{
		HX_STACK_FRAME("haxor.context.LineGizmo","OnBuild",0xce450e5c,"haxor.context.LineGizmo.OnBuild","haxor/context/GizmoContext.hx",655,0xa99c50bc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(656)
		::haxor::graphics::mesh::Mesh3 tmp = ::haxor::graphics::mesh::Mesh3_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(656)
		::haxor::graphics::mesh::Mesh3 m = tmp;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(657)
		m->set_name(HX_HCSTRING("$GizmoLineMesh","\xd7","\x80","\xdb","\xcf"));
		HX_STACK_LINE(658)
		m->primitive = (int)1;
		HX_STACK_LINE(659)
		Float id = ((Float)0.0);		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(660)
		int tmp1 = this->m_gizmo_count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(660)
		int tmp2 = (tmp1 * (int)2);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(660)
		int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(660)
		::haxor::io::FloatArray tmp4 = ::haxor::io::FloatArray_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(660)
		::haxor::io::FloatArray ia = tmp4;		HX_STACK_VAR(ia,"ia");
		HX_STACK_LINE(661)
		int tmp5 = this->m_gizmo_count;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(661)
		int tmp6 = (tmp5 * (int)2);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(661)
		int tmp7 = (tmp6 * (int)3);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(661)
		::haxor::io::FloatArray tmp8 = ::haxor::io::FloatArray_obj::__new(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(661)
		::haxor::io::FloatArray va = tmp8;		HX_STACK_VAR(va,"va");
		HX_STACK_LINE(662)
		int va_k = (int)0;		HX_STACK_VAR(va_k,"va_k");
		HX_STACK_LINE(663)
		int ia_k = (int)0;		HX_STACK_VAR(ia_k,"ia_k");
		HX_STACK_LINE(664)
		{
			HX_STACK_LINE(664)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(664)
			int tmp9 = this->m_gizmo_count;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(664)
			int _g = tmp9;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(664)
			while((true)){
				HX_STACK_LINE(664)
				bool tmp10 = (_g1 < _g);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(664)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(664)
				if ((tmp11)){
					HX_STACK_LINE(664)
					break;
				}
				HX_STACK_LINE(664)
				int tmp12 = (_g1)++;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(664)
				int k = tmp12;		HX_STACK_VAR(k,"k");
				HX_STACK_LINE(666)
				int tmp13 = (va_k)++;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(666)
				va->Set(tmp13,((Float)0.0));
				HX_STACK_LINE(666)
				int tmp14 = (va_k)++;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(666)
				va->Set(tmp14,((Float)0.0));
				HX_STACK_LINE(666)
				int tmp15 = (va_k)++;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(666)
				va->Set(tmp15,((Float)0.0));
				HX_STACK_LINE(666)
				int tmp16 = (ia_k)++;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(666)
				Float tmp17 = id;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(666)
				ia->Set(tmp16,tmp17);
				HX_STACK_LINE(667)
				int tmp18 = (va_k)++;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(667)
				va->Set(tmp18,((Float)1.0));
				HX_STACK_LINE(667)
				int tmp19 = (va_k)++;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(667)
				va->Set(tmp19,((Float)1.0));
				HX_STACK_LINE(667)
				int tmp20 = (va_k)++;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(667)
				va->Set(tmp20,((Float)1.0));
				HX_STACK_LINE(667)
				int tmp21 = (ia_k)++;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(667)
				Float tmp22 = id;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(667)
				ia->Set(tmp21,tmp22);
				HX_STACK_LINE(668)
				hx::AddEq(id,((Float)1.0));
			}
		}
		HX_STACK_LINE(670)
		::haxor::io::FloatArray tmp9 = ia;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(670)
		m->Set(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),tmp9,(int)1);
		HX_STACK_LINE(671)
		::haxor::io::FloatArray tmp10 = va;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(671)
		m->Set(HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1"),tmp10,(int)3);
		HX_STACK_LINE(672)
		this->mesh = m;
	}
return null();
}



LineGizmo_obj::LineGizmo_obj()
{
}

Dynamic LineGizmo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"OnBuild") ) { return OnBuild_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("OnBuild","\x6f","\xa1","\x79","\x1e"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LineGizmo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LineGizmo_obj::__mClass,"__mClass");
};

#endif

hx::Class LineGizmo_obj::__mClass;

void LineGizmo_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.context.LineGizmo","\x5b","\x98","\x92","\x34");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LineGizmo_obj >;
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
} // end namespace context
