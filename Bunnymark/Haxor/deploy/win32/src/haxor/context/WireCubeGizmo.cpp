#include <hxcpp.h>

#ifndef INCLUDED_haxor_context_Gizmo
#include <haxor/context/Gizmo.h>
#endif
#ifndef INCLUDED_haxor_context_WireCubeGizmo
#include <haxor/context/WireCubeGizmo.h>
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
#ifndef INCLUDED_haxor_math_Vector3
#include <haxor/math/Vector3.h>
#endif
namespace haxor{
namespace context{

Void WireCubeGizmo_obj::__construct()
{
HX_STACK_FRAME("haxor.context.WireCubeGizmo","new",0x323c28a7,"haxor.context.WireCubeGizmo.new","haxor/context/GizmoContext.hx",532,0xa99c50bc)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(532)
	int tmp = ::haxor::context::Gizmo_obj::WIRE_CUBE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(532)
	int tmp1 = ::haxor::context::Gizmo_obj::MAX_GIZMOS;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(532)
	super::__construct(tmp,tmp1);
}
;
	return null();
}

//WireCubeGizmo_obj::~WireCubeGizmo_obj() { }

Dynamic WireCubeGizmo_obj::__CreateEmpty() { return  new WireCubeGizmo_obj; }
hx::ObjectPtr< WireCubeGizmo_obj > WireCubeGizmo_obj::__new()
{  hx::ObjectPtr< WireCubeGizmo_obj > _result_ = new WireCubeGizmo_obj();
	_result_->__construct();
	return _result_;}

Dynamic WireCubeGizmo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WireCubeGizmo_obj > _result_ = new WireCubeGizmo_obj();
	_result_->__construct();
	return _result_;}

Void WireCubeGizmo_obj::OnBuild( ){
{
		HX_STACK_FRAME("haxor.context.WireCubeGizmo","OnBuild",0x88e12936,"haxor.context.WireCubeGizmo.OnBuild","haxor/context/GizmoContext.hx",538,0xa99c50bc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(539)
		::haxor::graphics::mesh::Mesh3 tmp = ::haxor::graphics::mesh::Mesh3_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(539)
		::haxor::graphics::mesh::Mesh3 m = tmp;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(540)
		m->set_name(HX_HCSTRING("$GizmoWireCubeMesh","\xbd","\x5a","\x72","\x4d"));
		HX_STACK_LINE(541)
		m->primitive = (int)1;
		HX_STACK_LINE(542)
		Float a = ((Float)-0.5);		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(543)
		Float b = ((Float)0.5);		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(546)
		::haxor::math::Vector3 tmp1 = ::haxor::math::Vector3_obj::__new(a,a,a);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(546)
		::haxor::math::Vector3 tmp2 = ::haxor::math::Vector3_obj::__new(a,a,b);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(546)
		::haxor::math::Vector3 tmp3 = ::haxor::math::Vector3_obj::__new(b,a,b);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(546)
		::haxor::math::Vector3 tmp4 = ::haxor::math::Vector3_obj::__new(b,a,a);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(547)
		::haxor::math::Vector3 tmp5 = ::haxor::math::Vector3_obj::__new(a,b,a);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(547)
		::haxor::math::Vector3 tmp6 = ::haxor::math::Vector3_obj::__new(a,b,b);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(547)
		::haxor::math::Vector3 tmp7 = ::haxor::math::Vector3_obj::__new(b,b,b);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(547)
		::haxor::math::Vector3 tmp8 = ::haxor::math::Vector3_obj::__new(b,b,a);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(545)
		Array< ::Dynamic > tmp9 = Array_obj< ::Dynamic >::__new().Add(tmp1).Add(tmp2).Add(tmp3).Add(tmp4).Add(tmp5).Add(tmp6).Add(tmp7).Add(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(545)
		Array< ::Dynamic > p = tmp9;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(550)
		Array< int > tmp10 = Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)1).Add((int)2).Add((int)2).Add((int)3).Add((int)3).Add((int)0).Add((int)4).Add((int)5).Add((int)5).Add((int)6).Add((int)6).Add((int)7).Add((int)7).Add((int)4).Add((int)0).Add((int)1).Add((int)1).Add((int)5).Add((int)5).Add((int)4).Add((int)4).Add((int)0).Add((int)3).Add((int)2).Add((int)2).Add((int)6).Add((int)6).Add((int)7).Add((int)7).Add((int)3).Add((int)0).Add((int)3).Add((int)3).Add((int)7).Add((int)7).Add((int)4).Add((int)4).Add((int)0).Add((int)1).Add((int)5).Add((int)5).Add((int)6).Add((int)6).Add((int)2).Add((int)2).Add((int)1);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(550)
		Array< int > tp = tmp10;		HX_STACK_VAR(tp,"tp");
		HX_STACK_LINE(558)
		int tmp11 = (tp->length * (int)3);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(558)
		int tmp12 = this->m_gizmo_count;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(558)
		int tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(558)
		::haxor::io::FloatArray tmp14 = ::haxor::io::FloatArray_obj::__new(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(558)
		::haxor::io::FloatArray va = tmp14;		HX_STACK_VAR(va,"va");
		HX_STACK_LINE(559)
		int tmp15 = tp->length;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(559)
		int tmp16 = this->m_gizmo_count;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(559)
		int tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(559)
		::haxor::io::FloatArray tmp18 = ::haxor::io::FloatArray_obj::__new(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(559)
		::haxor::io::FloatArray ia = tmp18;		HX_STACK_VAR(ia,"ia");
		HX_STACK_LINE(560)
		int va_k = (int)0;		HX_STACK_VAR(va_k,"va_k");
		HX_STACK_LINE(561)
		int ia_k = (int)0;		HX_STACK_VAR(ia_k,"ia_k");
		HX_STACK_LINE(562)
		Float id = ((Float)0.0);		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(563)
		{
			HX_STACK_LINE(563)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(563)
			int tmp19 = this->m_gizmo_count;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(563)
			int _g = tmp19;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(563)
			while((true)){
				HX_STACK_LINE(563)
				bool tmp20 = (_g1 < _g);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(563)
				bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(563)
				if ((tmp21)){
					HX_STACK_LINE(563)
					break;
				}
				HX_STACK_LINE(563)
				int tmp22 = (_g1)++;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(563)
				int k = tmp22;		HX_STACK_VAR(k,"k");
				HX_STACK_LINE(565)
				{
					HX_STACK_LINE(565)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(565)
					int _g2 = tp->length;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(565)
					while((true)){
						HX_STACK_LINE(565)
						bool tmp23 = (_g3 < _g2);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(565)
						bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(565)
						if ((tmp24)){
							HX_STACK_LINE(565)
							break;
						}
						HX_STACK_LINE(565)
						int tmp25 = (_g3)++;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(565)
						int i = tmp25;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(567)
						int tmp26 = tp->__get(i);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(567)
						int vid = tmp26;		HX_STACK_VAR(vid,"vid");
						HX_STACK_LINE(568)
						int tmp27 = (va_k)++;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(568)
						::haxor::math::Vector3 tmp28 = p->__get(vid).StaticCast< ::haxor::math::Vector3 >();		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(568)
						Float tmp29 = tmp28->x;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(568)
						va->Set(tmp27,tmp29);
						HX_STACK_LINE(569)
						int tmp30 = (va_k)++;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(569)
						::haxor::math::Vector3 tmp31 = p->__get(vid).StaticCast< ::haxor::math::Vector3 >();		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(569)
						Float tmp32 = tmp31->y;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(569)
						va->Set(tmp30,tmp32);
						HX_STACK_LINE(570)
						int tmp33 = (va_k)++;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(570)
						::haxor::math::Vector3 tmp34 = p->__get(vid).StaticCast< ::haxor::math::Vector3 >();		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(570)
						Float tmp35 = tmp34->z;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(570)
						va->Set(tmp33,tmp35);
						HX_STACK_LINE(571)
						int tmp36 = (ia_k)++;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(571)
						Float tmp37 = id;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(571)
						ia->Set(tmp36,tmp37);
					}
				}
				HX_STACK_LINE(573)
				hx::AddEq(id,((Float)1.0));
			}
		}
		HX_STACK_LINE(575)
		::haxor::io::FloatArray tmp19 = ia;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(575)
		m->Set(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),tmp19,(int)1);
		HX_STACK_LINE(576)
		::haxor::io::FloatArray tmp20 = va;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(576)
		m->Set(HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1"),tmp20,(int)3);
		HX_STACK_LINE(577)
		this->mesh = m;
	}
return null();
}



WireCubeGizmo_obj::WireCubeGizmo_obj()
{
}

Dynamic WireCubeGizmo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(WireCubeGizmo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WireCubeGizmo_obj::__mClass,"__mClass");
};

#endif

hx::Class WireCubeGizmo_obj::__mClass;

void WireCubeGizmo_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.context.WireCubeGizmo","\x35","\x49","\x6b","\xbd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< WireCubeGizmo_obj >;
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
