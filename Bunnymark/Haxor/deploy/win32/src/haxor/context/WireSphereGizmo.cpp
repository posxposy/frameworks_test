#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_haxor_context_Gizmo
#include <haxor/context/Gizmo.h>
#endif
#ifndef INCLUDED_haxor_context_WireSphereGizmo
#include <haxor/context/WireSphereGizmo.h>
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

Void WireSphereGizmo_obj::__construct()
{
HX_STACK_FRAME("haxor.context.WireSphereGizmo","new",0x9f2ccf8f,"haxor.context.WireSphereGizmo.new","haxor/context/GizmoContext.hx",479,0xa99c50bc)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(479)
	int tmp = ::haxor::context::Gizmo_obj::WIRE_SPHERE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(479)
	int tmp1 = ::haxor::context::Gizmo_obj::MAX_GIZMOS;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(479)
	super::__construct(tmp,tmp1);
}
;
	return null();
}

//WireSphereGizmo_obj::~WireSphereGizmo_obj() { }

Dynamic WireSphereGizmo_obj::__CreateEmpty() { return  new WireSphereGizmo_obj; }
hx::ObjectPtr< WireSphereGizmo_obj > WireSphereGizmo_obj::__new()
{  hx::ObjectPtr< WireSphereGizmo_obj > _result_ = new WireSphereGizmo_obj();
	_result_->__construct();
	return _result_;}

Dynamic WireSphereGizmo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WireSphereGizmo_obj > _result_ = new WireSphereGizmo_obj();
	_result_->__construct();
	return _result_;}

Void WireSphereGizmo_obj::OnBuild( ){
{
		HX_STACK_FRAME("haxor.context.WireSphereGizmo","OnBuild",0x4713641e,"haxor.context.WireSphereGizmo.OnBuild","haxor/context/GizmoContext.hx",485,0xa99c50bc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(486)
		::haxor::graphics::mesh::Mesh3 tmp = ::haxor::graphics::mesh::Mesh3_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(486)
		::haxor::graphics::mesh::Mesh3 m = tmp;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(487)
		m->set_name(HX_HCSTRING("$GizmoWireSphereMesh","\x95","\xbd","\xff","\x41"));
		HX_STACK_LINE(488)
		m->primitive = (int)1;
		HX_STACK_LINE(489)
		Float r = ((Float)1.0);		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(490)
		::haxor::math::Vector3 v;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(491)
		int steps = (int)720;		HX_STACK_VAR(steps,"steps");
		HX_STACK_LINE(492)
		int tmp1 = (steps * (int)6);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(492)
		int tmp2 = this->m_gizmo_count;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(492)
		int tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(492)
		::haxor::io::FloatArray tmp4 = ::haxor::io::FloatArray_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(492)
		::haxor::io::FloatArray ia = tmp4;		HX_STACK_VAR(ia,"ia");
		HX_STACK_LINE(493)
		int tmp5 = (steps * (int)18);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(493)
		int tmp6 = this->m_gizmo_count;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(493)
		int tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(493)
		::haxor::io::FloatArray tmp8 = ::haxor::io::FloatArray_obj::__new(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(493)
		::haxor::io::FloatArray va = tmp8;		HX_STACK_VAR(va,"va");
		HX_STACK_LINE(494)
		int va_k = (int)0;		HX_STACK_VAR(va_k,"va_k");
		HX_STACK_LINE(495)
		int ia_k = (int)0;		HX_STACK_VAR(ia_k,"ia_k");
		HX_STACK_LINE(496)
		Float id = ((Float)0.0);		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(497)
		{
			HX_STACK_LINE(497)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(497)
			int tmp9 = this->m_gizmo_count;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(497)
			int _g = tmp9;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(497)
			while((true)){
				HX_STACK_LINE(497)
				bool tmp10 = (_g1 < _g);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(497)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(497)
				if ((tmp11)){
					HX_STACK_LINE(497)
					break;
				}
				HX_STACK_LINE(497)
				int tmp12 = (_g1)++;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(497)
				int k = tmp12;		HX_STACK_VAR(k,"k");
				HX_STACK_LINE(499)
				{
					HX_STACK_LINE(499)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(499)
					while((true)){
						HX_STACK_LINE(499)
						bool tmp13 = (_g2 < steps);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(499)
						bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(499)
						if ((tmp14)){
							HX_STACK_LINE(499)
							break;
						}
						HX_STACK_LINE(499)
						int tmp15 = (_g2)++;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(499)
						int i = tmp15;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(501)
						int tmp16 = (steps - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(501)
						Float tmp17 = (Float(((Float)1.0)) / Float(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(501)
						Float astp = tmp17;		HX_STACK_VAR(astp,"astp");
						HX_STACK_LINE(502)
						Float a;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(503)
						int tmp18 = ((int)360 * i);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(503)
						Float tmp19 = astp;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(503)
						Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(503)
						a = tmp20;
						HX_STACK_LINE(504)
						Float tmp21 = (a * ((Float)0.01745329251994329576923690768489));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(504)
						Float tmp22 = ::Math_obj::sin(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(504)
						Float tmp23 = r;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(504)
						Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(504)
						Float tmp25 = (tmp24 * ((Float)0.5));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(504)
						Float sv0 = tmp25;		HX_STACK_VAR(sv0,"sv0");
						HX_STACK_LINE(505)
						Float tmp26 = (a * ((Float)0.01745329251994329576923690768489));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(505)
						Float tmp27 = ::Math_obj::cos(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(505)
						Float tmp28 = r;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(505)
						Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(505)
						Float tmp30 = (tmp29 * ((Float)0.5));		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(505)
						Float cv0 = tmp30;		HX_STACK_VAR(cv0,"cv0");
						HX_STACK_LINE(506)
						int tmp31 = (i + (int)1);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(506)
						int tmp32 = ((int)360 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(506)
						Float tmp33 = astp;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(506)
						Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(506)
						a = tmp34;
						HX_STACK_LINE(507)
						Float tmp35 = (a * ((Float)0.01745329251994329576923690768489));		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(507)
						Float tmp36 = ::Math_obj::sin(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(507)
						Float tmp37 = r;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(507)
						Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(507)
						Float tmp39 = (tmp38 * ((Float)0.5));		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(507)
						Float sv1 = tmp39;		HX_STACK_VAR(sv1,"sv1");
						HX_STACK_LINE(508)
						Float tmp40 = (a * ((Float)0.01745329251994329576923690768489));		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(508)
						Float tmp41 = ::Math_obj::cos(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(508)
						Float tmp42 = r;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(508)
						Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(508)
						Float tmp44 = (tmp43 * ((Float)0.5));		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(508)
						Float cv1 = tmp44;		HX_STACK_VAR(cv1,"cv1");
						HX_STACK_LINE(509)
						int tmp45 = (va_k)++;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(509)
						Float tmp46 = cv0;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(509)
						va->Set(tmp45,tmp46);
						HX_STACK_LINE(509)
						int tmp47 = (va_k)++;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(509)
						va->Set(tmp47,((Float)0.0));
						HX_STACK_LINE(509)
						int tmp48 = (va_k)++;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(509)
						Float tmp49 = sv0;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(509)
						va->Set(tmp48,tmp49);
						HX_STACK_LINE(509)
						int tmp50 = (ia_k)++;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(509)
						Float tmp51 = id;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(509)
						ia->Set(tmp50,tmp51);
						HX_STACK_LINE(510)
						int tmp52 = (va_k)++;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(510)
						Float tmp53 = cv1;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(510)
						va->Set(tmp52,tmp53);
						HX_STACK_LINE(510)
						int tmp54 = (va_k)++;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(510)
						va->Set(tmp54,((Float)0.0));
						HX_STACK_LINE(510)
						int tmp55 = (va_k)++;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(510)
						Float tmp56 = sv1;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(510)
						va->Set(tmp55,tmp56);
						HX_STACK_LINE(510)
						int tmp57 = (ia_k)++;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(510)
						Float tmp58 = id;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(510)
						ia->Set(tmp57,tmp58);
						HX_STACK_LINE(511)
						int tmp59 = (va_k)++;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(511)
						va->Set(tmp59,((Float)0.0));
						HX_STACK_LINE(511)
						int tmp60 = (va_k)++;		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(511)
						Float tmp61 = cv0;		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(511)
						va->Set(tmp60,tmp61);
						HX_STACK_LINE(511)
						int tmp62 = (va_k)++;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(511)
						Float tmp63 = sv0;		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(511)
						va->Set(tmp62,tmp63);
						HX_STACK_LINE(511)
						int tmp64 = (ia_k)++;		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(511)
						Float tmp65 = id;		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(511)
						ia->Set(tmp64,tmp65);
						HX_STACK_LINE(512)
						int tmp66 = (va_k)++;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(512)
						va->Set(tmp66,((Float)0.0));
						HX_STACK_LINE(512)
						int tmp67 = (va_k)++;		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(512)
						Float tmp68 = cv1;		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(512)
						va->Set(tmp67,tmp68);
						HX_STACK_LINE(512)
						int tmp69 = (va_k)++;		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(512)
						Float tmp70 = sv1;		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(512)
						va->Set(tmp69,tmp70);
						HX_STACK_LINE(512)
						int tmp71 = (ia_k)++;		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(512)
						Float tmp72 = id;		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(512)
						ia->Set(tmp71,tmp72);
						HX_STACK_LINE(513)
						int tmp73 = (va_k)++;		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(513)
						Float tmp74 = cv0;		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(513)
						va->Set(tmp73,tmp74);
						HX_STACK_LINE(513)
						int tmp75 = (va_k)++;		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(513)
						Float tmp76 = sv0;		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(513)
						va->Set(tmp75,tmp76);
						HX_STACK_LINE(513)
						int tmp77 = (va_k)++;		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(513)
						va->Set(tmp77,((Float)0.0));
						HX_STACK_LINE(513)
						int tmp78 = (ia_k)++;		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(513)
						Float tmp79 = id;		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(513)
						ia->Set(tmp78,tmp79);
						HX_STACK_LINE(514)
						int tmp80 = (va_k)++;		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(514)
						Float tmp81 = cv1;		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(514)
						va->Set(tmp80,tmp81);
						HX_STACK_LINE(514)
						int tmp82 = (va_k)++;		HX_STACK_VAR(tmp82,"tmp82");
						HX_STACK_LINE(514)
						Float tmp83 = sv1;		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(514)
						va->Set(tmp82,tmp83);
						HX_STACK_LINE(514)
						int tmp84 = (va_k)++;		HX_STACK_VAR(tmp84,"tmp84");
						HX_STACK_LINE(514)
						va->Set(tmp84,((Float)0.0));
						HX_STACK_LINE(514)
						int tmp85 = (ia_k)++;		HX_STACK_VAR(tmp85,"tmp85");
						HX_STACK_LINE(514)
						Float tmp86 = id;		HX_STACK_VAR(tmp86,"tmp86");
						HX_STACK_LINE(514)
						ia->Set(tmp85,tmp86);
					}
				}
				HX_STACK_LINE(516)
				hx::AddEq(id,((Float)1.0));
			}
		}
		HX_STACK_LINE(518)
		::haxor::io::FloatArray tmp9 = ia;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(518)
		m->Set(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),tmp9,(int)1);
		HX_STACK_LINE(519)
		::haxor::io::FloatArray tmp10 = va;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(519)
		m->Set(HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1"),tmp10,(int)3);
		HX_STACK_LINE(520)
		this->mesh = m;
	}
return null();
}



WireSphereGizmo_obj::WireSphereGizmo_obj()
{
}

Dynamic WireSphereGizmo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(WireSphereGizmo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WireSphereGizmo_obj::__mClass,"__mClass");
};

#endif

hx::Class WireSphereGizmo_obj::__mClass;

void WireSphereGizmo_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.context.WireSphereGizmo","\x1d","\x5c","\x74","\xa6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< WireSphereGizmo_obj >;
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
