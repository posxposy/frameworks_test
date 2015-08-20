#include <hxcpp.h>

#ifndef INCLUDED_haxor_context_Gizmo
#include <haxor/context/Gizmo.h>
#endif
#ifndef INCLUDED_haxor_context_PointGizmo
#include <haxor/context/PointGizmo.h>
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

Void PointGizmo_obj::__construct()
{
HX_STACK_FRAME("haxor.context.PointGizmo","new",0xdc90fd67,"haxor.context.PointGizmo.new","haxor/context/GizmoContext.hx",684,0xa99c50bc)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(684)
	int tmp = ::haxor::context::Gizmo_obj::POINT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(684)
	super::__construct(tmp,(int)10);
}
;
	return null();
}

//PointGizmo_obj::~PointGizmo_obj() { }

Dynamic PointGizmo_obj::__CreateEmpty() { return  new PointGizmo_obj; }
hx::ObjectPtr< PointGizmo_obj > PointGizmo_obj::__new()
{  hx::ObjectPtr< PointGizmo_obj > _result_ = new PointGizmo_obj();
	_result_->__construct();
	return _result_;}

Dynamic PointGizmo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PointGizmo_obj > _result_ = new PointGizmo_obj();
	_result_->__construct();
	return _result_;}

Void PointGizmo_obj::OnBuild( ){
{
		HX_STACK_FRAME("haxor.context.PointGizmo","OnBuild",0x6d1f5df6,"haxor.context.PointGizmo.OnBuild","haxor/context/GizmoContext.hx",690,0xa99c50bc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(691)
		::haxor::graphics::mesh::Mesh3 tmp = ::haxor::graphics::mesh::Mesh3_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(691)
		::haxor::graphics::mesh::Mesh3 m = tmp;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(692)
		m->set_name(HX_HCSTRING("$GizmoPointMesh","\xc7","\x64","\x2d","\xe1"));
		HX_STACK_LINE(693)
		m->primitive = (int)0;
		HX_STACK_LINE(694)
		Float id = ((Float)0.0);		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(695)
		int tmp1 = this->m_gizmo_count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(695)
		int tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(695)
		int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(695)
		::haxor::io::FloatArray tmp4 = ::haxor::io::FloatArray_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(695)
		::haxor::io::FloatArray ia = tmp4;		HX_STACK_VAR(ia,"ia");
		HX_STACK_LINE(696)
		int tmp5 = this->m_gizmo_count;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(696)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(696)
		int tmp7 = (tmp6 * (int)3);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(696)
		::haxor::io::FloatArray tmp8 = ::haxor::io::FloatArray_obj::__new(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(696)
		::haxor::io::FloatArray va = tmp8;		HX_STACK_VAR(va,"va");
		HX_STACK_LINE(697)
		int va_k = (int)0;		HX_STACK_VAR(va_k,"va_k");
		HX_STACK_LINE(698)
		int ia_k = (int)0;		HX_STACK_VAR(ia_k,"ia_k");
		HX_STACK_LINE(699)
		{
			HX_STACK_LINE(699)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(699)
			int tmp9 = this->m_gizmo_count;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(699)
			int _g = tmp9;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(699)
			while((true)){
				HX_STACK_LINE(699)
				bool tmp10 = (_g1 < _g);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(699)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(699)
				if ((tmp11)){
					HX_STACK_LINE(699)
					break;
				}
				HX_STACK_LINE(699)
				int tmp12 = (_g1)++;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(699)
				int k = tmp12;		HX_STACK_VAR(k,"k");
				HX_STACK_LINE(701)
				int tmp13 = (va_k)++;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(701)
				va->Set(tmp13,((Float)0.0));
				HX_STACK_LINE(701)
				int tmp14 = (va_k)++;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(701)
				va->Set(tmp14,((Float)0.0));
				HX_STACK_LINE(701)
				int tmp15 = (va_k)++;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(701)
				va->Set(tmp15,((Float)0.0));
				HX_STACK_LINE(701)
				int tmp16 = (ia_k)++;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(701)
				Float tmp17 = id;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(701)
				ia->Set(tmp16,tmp17);
				HX_STACK_LINE(702)
				hx::AddEq(id,((Float)1.0));
			}
		}
		HX_STACK_LINE(704)
		::haxor::io::FloatArray tmp9 = ia;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(704)
		m->Set(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),tmp9,(int)1);
		HX_STACK_LINE(705)
		::haxor::io::FloatArray tmp10 = va;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(705)
		m->Set(HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1"),tmp10,(int)3);
		HX_STACK_LINE(706)
		this->mesh = m;
	}
return null();
}



PointGizmo_obj::PointGizmo_obj()
{
}

Dynamic PointGizmo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(PointGizmo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PointGizmo_obj::__mClass,"__mClass");
};

#endif

hx::Class PointGizmo_obj::__mClass;

void PointGizmo_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.context.PointGizmo","\xf5","\xbd","\x06","\x76");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PointGizmo_obj >;
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
