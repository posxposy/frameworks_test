#include <hxcpp.h>

#ifndef INCLUDED_haxor_context_AxisGizmo
#include <haxor/context/AxisGizmo.h>
#endif
#ifndef INCLUDED_haxor_context_Gizmo
#include <haxor/context/Gizmo.h>
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
#ifndef INCLUDED_haxor_math_Color
#include <haxor/math/Color.h>
#endif
namespace haxor{
namespace context{

Void AxisGizmo_obj::__construct()
{
HX_STACK_FRAME("haxor.context.AxisGizmo","new",0x2c9d8080,"haxor.context.AxisGizmo.new","haxor/context/GizmoContext.hx",589,0xa99c50bc)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(589)
	int tmp = ::haxor::context::Gizmo_obj::AXIS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(589)
	int tmp1 = ::haxor::context::Gizmo_obj::MAX_GIZMOS;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(589)
	super::__construct(tmp,tmp1);
}
;
	return null();
}

//AxisGizmo_obj::~AxisGizmo_obj() { }

Dynamic AxisGizmo_obj::__CreateEmpty() { return  new AxisGizmo_obj; }
hx::ObjectPtr< AxisGizmo_obj > AxisGizmo_obj::__new()
{  hx::ObjectPtr< AxisGizmo_obj > _result_ = new AxisGizmo_obj();
	_result_->__construct();
	return _result_;}

Dynamic AxisGizmo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AxisGizmo_obj > _result_ = new AxisGizmo_obj();
	_result_->__construct();
	return _result_;}

Void AxisGizmo_obj::OnBuild( ){
{
		HX_STACK_FRAME("haxor.context.AxisGizmo","OnBuild",0x962de18f,"haxor.context.AxisGizmo.OnBuild","haxor/context/GizmoContext.hx",595,0xa99c50bc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(596)
		::haxor::graphics::mesh::Mesh3 tmp = ::haxor::graphics::mesh::Mesh3_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(596)
		::haxor::graphics::mesh::Mesh3 m = tmp;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(597)
		m->set_name(HX_HCSTRING("$GizmoAxisMesh","\x04","\xe0","\x45","\xda"));
		HX_STACK_LINE(598)
		m->primitive = (int)1;
		HX_STACK_LINE(600)
		::haxor::math::Color tmp1 = ::haxor::math::Color_obj::__new(((Float)0.9),((Float)0.3),((Float)0.3),(int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(600)
		::haxor::math::Color cr = tmp1;		HX_STACK_VAR(cr,"cr");
		HX_STACK_LINE(601)
		::haxor::math::Color tmp2 = ::haxor::math::Color_obj::__new(((Float)0.3),((Float)0.9),((Float)0.3),(int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(601)
		::haxor::math::Color cg = tmp2;		HX_STACK_VAR(cg,"cg");
		HX_STACK_LINE(602)
		::haxor::math::Color tmp3 = ::haxor::math::Color_obj::__new(((Float)0.3),((Float)0.3),((Float)0.9),(int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(602)
		::haxor::math::Color cb = tmp3;		HX_STACK_VAR(cb,"cb");
		HX_STACK_LINE(604)
		Float id = ((Float)0.0);		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(605)
		int tmp4 = this->m_gizmo_count;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(605)
		int tmp5 = (tmp4 * (int)6);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(605)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(605)
		::haxor::io::FloatArray tmp7 = ::haxor::io::FloatArray_obj::__new(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(605)
		::haxor::io::FloatArray ia = tmp7;		HX_STACK_VAR(ia,"ia");
		HX_STACK_LINE(606)
		int tmp8 = this->m_gizmo_count;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(606)
		int tmp9 = (tmp8 * (int)6);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(606)
		int tmp10 = (tmp9 * (int)3);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(606)
		::haxor::io::FloatArray tmp11 = ::haxor::io::FloatArray_obj::__new(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(606)
		::haxor::io::FloatArray va = tmp11;		HX_STACK_VAR(va,"va");
		HX_STACK_LINE(607)
		int tmp12 = this->m_gizmo_count;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(607)
		int tmp13 = (tmp12 * (int)6);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(607)
		int tmp14 = (tmp13 * (int)3);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(607)
		::haxor::io::FloatArray tmp15 = ::haxor::io::FloatArray_obj::__new(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(607)
		::haxor::io::FloatArray ca = tmp15;		HX_STACK_VAR(ca,"ca");
		HX_STACK_LINE(609)
		int va_k = (int)0;		HX_STACK_VAR(va_k,"va_k");
		HX_STACK_LINE(610)
		int ca_k = (int)0;		HX_STACK_VAR(ca_k,"ca_k");
		HX_STACK_LINE(611)
		int ia_k = (int)0;		HX_STACK_VAR(ia_k,"ia_k");
		HX_STACK_LINE(613)
		{
			HX_STACK_LINE(613)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(613)
			int tmp16 = this->m_gizmo_count;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(613)
			int _g = tmp16;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(613)
			while((true)){
				HX_STACK_LINE(613)
				bool tmp17 = (_g1 < _g);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(613)
				bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(613)
				if ((tmp18)){
					HX_STACK_LINE(613)
					break;
				}
				HX_STACK_LINE(613)
				int tmp19 = (_g1)++;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(613)
				int k = tmp19;		HX_STACK_VAR(k,"k");
				HX_STACK_LINE(616)
				int tmp20 = (va_k)++;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(616)
				va->Set(tmp20,((Float)0.0));
				HX_STACK_LINE(616)
				int tmp21 = (va_k)++;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(616)
				va->Set(tmp21,((Float)0.0));
				HX_STACK_LINE(616)
				int tmp22 = (va_k)++;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(616)
				va->Set(tmp22,((Float)0.0));
				HX_STACK_LINE(616)
				int tmp23 = (ia_k)++;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(616)
				Float tmp24 = id;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(616)
				ia->Set(tmp23,tmp24);
				HX_STACK_LINE(617)
				int tmp25 = (va_k)++;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(617)
				va->Set(tmp25,((Float)1.0));
				HX_STACK_LINE(617)
				int tmp26 = (va_k)++;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(617)
				va->Set(tmp26,((Float)0.0));
				HX_STACK_LINE(617)
				int tmp27 = (va_k)++;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(617)
				va->Set(tmp27,((Float)0.0));
				HX_STACK_LINE(617)
				int tmp28 = (ia_k)++;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(617)
				Float tmp29 = id;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(617)
				ia->Set(tmp28,tmp29);
				HX_STACK_LINE(618)
				int tmp30 = (va_k)++;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(618)
				va->Set(tmp30,((Float)0.0));
				HX_STACK_LINE(618)
				int tmp31 = (va_k)++;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(618)
				va->Set(tmp31,((Float)0.0));
				HX_STACK_LINE(618)
				int tmp32 = (va_k)++;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(618)
				va->Set(tmp32,((Float)0.0));
				HX_STACK_LINE(618)
				int tmp33 = (ia_k)++;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(618)
				Float tmp34 = id;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(618)
				ia->Set(tmp33,tmp34);
				HX_STACK_LINE(619)
				int tmp35 = (va_k)++;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(619)
				va->Set(tmp35,((Float)0.0));
				HX_STACK_LINE(619)
				int tmp36 = (va_k)++;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(619)
				va->Set(tmp36,((Float)1.0));
				HX_STACK_LINE(619)
				int tmp37 = (va_k)++;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(619)
				va->Set(tmp37,((Float)0.0));
				HX_STACK_LINE(619)
				int tmp38 = (ia_k)++;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(619)
				Float tmp39 = id;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(619)
				ia->Set(tmp38,tmp39);
				HX_STACK_LINE(620)
				int tmp40 = (va_k)++;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(620)
				va->Set(tmp40,((Float)0.0));
				HX_STACK_LINE(620)
				int tmp41 = (va_k)++;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(620)
				va->Set(tmp41,((Float)0.0));
				HX_STACK_LINE(620)
				int tmp42 = (va_k)++;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(620)
				va->Set(tmp42,((Float)0.0));
				HX_STACK_LINE(620)
				int tmp43 = (ia_k)++;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(620)
				Float tmp44 = id;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(620)
				ia->Set(tmp43,tmp44);
				HX_STACK_LINE(621)
				int tmp45 = (va_k)++;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(621)
				va->Set(tmp45,((Float)0.0));
				HX_STACK_LINE(621)
				int tmp46 = (va_k)++;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(621)
				va->Set(tmp46,((Float)0.0));
				HX_STACK_LINE(621)
				int tmp47 = (va_k)++;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(621)
				va->Set(tmp47,((Float)1.0));
				HX_STACK_LINE(621)
				int tmp48 = (ia_k)++;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(621)
				Float tmp49 = id;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(621)
				ia->Set(tmp48,tmp49);
				HX_STACK_LINE(622)
				::haxor::math::Color c;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(623)
				c = cr;
				HX_STACK_LINE(624)
				int tmp50 = (ca_k)++;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(624)
				Float tmp51 = c->r;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(624)
				ca->Set(tmp50,tmp51);
				HX_STACK_LINE(624)
				int tmp52 = (ca_k)++;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(624)
				Float tmp53 = c->g;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(624)
				ca->Set(tmp52,tmp53);
				HX_STACK_LINE(624)
				int tmp54 = (ca_k)++;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(624)
				Float tmp55 = c->b;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(624)
				ca->Set(tmp54,tmp55);
				HX_STACK_LINE(624)
				int tmp56 = (ca_k)++;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(624)
				Float tmp57 = c->a;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(624)
				ca->Set(tmp56,tmp57);
				HX_STACK_LINE(625)
				int tmp58 = (ca_k)++;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(625)
				Float tmp59 = c->r;		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(625)
				ca->Set(tmp58,tmp59);
				HX_STACK_LINE(625)
				int tmp60 = (ca_k)++;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(625)
				Float tmp61 = c->g;		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(625)
				ca->Set(tmp60,tmp61);
				HX_STACK_LINE(625)
				int tmp62 = (ca_k)++;		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(625)
				Float tmp63 = c->b;		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(625)
				ca->Set(tmp62,tmp63);
				HX_STACK_LINE(625)
				int tmp64 = (ca_k)++;		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(625)
				Float tmp65 = c->a;		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(625)
				ca->Set(tmp64,tmp65);
				HX_STACK_LINE(626)
				c = cg;
				HX_STACK_LINE(627)
				int tmp66 = (ca_k)++;		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(627)
				Float tmp67 = c->r;		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(627)
				ca->Set(tmp66,tmp67);
				HX_STACK_LINE(627)
				int tmp68 = (ca_k)++;		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(627)
				Float tmp69 = c->g;		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(627)
				ca->Set(tmp68,tmp69);
				HX_STACK_LINE(627)
				int tmp70 = (ca_k)++;		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(627)
				Float tmp71 = c->b;		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(627)
				ca->Set(tmp70,tmp71);
				HX_STACK_LINE(627)
				int tmp72 = (ca_k)++;		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(627)
				Float tmp73 = c->a;		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(627)
				ca->Set(tmp72,tmp73);
				HX_STACK_LINE(628)
				int tmp74 = (ca_k)++;		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(628)
				Float tmp75 = c->r;		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(628)
				ca->Set(tmp74,tmp75);
				HX_STACK_LINE(628)
				int tmp76 = (ca_k)++;		HX_STACK_VAR(tmp76,"tmp76");
				HX_STACK_LINE(628)
				Float tmp77 = c->g;		HX_STACK_VAR(tmp77,"tmp77");
				HX_STACK_LINE(628)
				ca->Set(tmp76,tmp77);
				HX_STACK_LINE(628)
				int tmp78 = (ca_k)++;		HX_STACK_VAR(tmp78,"tmp78");
				HX_STACK_LINE(628)
				Float tmp79 = c->b;		HX_STACK_VAR(tmp79,"tmp79");
				HX_STACK_LINE(628)
				ca->Set(tmp78,tmp79);
				HX_STACK_LINE(628)
				int tmp80 = (ca_k)++;		HX_STACK_VAR(tmp80,"tmp80");
				HX_STACK_LINE(628)
				Float tmp81 = c->a;		HX_STACK_VAR(tmp81,"tmp81");
				HX_STACK_LINE(628)
				ca->Set(tmp80,tmp81);
				HX_STACK_LINE(629)
				c = cb;
				HX_STACK_LINE(630)
				int tmp82 = (ca_k)++;		HX_STACK_VAR(tmp82,"tmp82");
				HX_STACK_LINE(630)
				Float tmp83 = c->r;		HX_STACK_VAR(tmp83,"tmp83");
				HX_STACK_LINE(630)
				ca->Set(tmp82,tmp83);
				HX_STACK_LINE(630)
				int tmp84 = (ca_k)++;		HX_STACK_VAR(tmp84,"tmp84");
				HX_STACK_LINE(630)
				Float tmp85 = c->g;		HX_STACK_VAR(tmp85,"tmp85");
				HX_STACK_LINE(630)
				ca->Set(tmp84,tmp85);
				HX_STACK_LINE(630)
				int tmp86 = (ca_k)++;		HX_STACK_VAR(tmp86,"tmp86");
				HX_STACK_LINE(630)
				Float tmp87 = c->b;		HX_STACK_VAR(tmp87,"tmp87");
				HX_STACK_LINE(630)
				ca->Set(tmp86,tmp87);
				HX_STACK_LINE(630)
				int tmp88 = (ca_k)++;		HX_STACK_VAR(tmp88,"tmp88");
				HX_STACK_LINE(630)
				Float tmp89 = c->a;		HX_STACK_VAR(tmp89,"tmp89");
				HX_STACK_LINE(630)
				ca->Set(tmp88,tmp89);
				HX_STACK_LINE(631)
				int tmp90 = (ca_k)++;		HX_STACK_VAR(tmp90,"tmp90");
				HX_STACK_LINE(631)
				Float tmp91 = c->r;		HX_STACK_VAR(tmp91,"tmp91");
				HX_STACK_LINE(631)
				ca->Set(tmp90,tmp91);
				HX_STACK_LINE(631)
				int tmp92 = (ca_k)++;		HX_STACK_VAR(tmp92,"tmp92");
				HX_STACK_LINE(631)
				Float tmp93 = c->g;		HX_STACK_VAR(tmp93,"tmp93");
				HX_STACK_LINE(631)
				ca->Set(tmp92,tmp93);
				HX_STACK_LINE(631)
				int tmp94 = (ca_k)++;		HX_STACK_VAR(tmp94,"tmp94");
				HX_STACK_LINE(631)
				Float tmp95 = c->b;		HX_STACK_VAR(tmp95,"tmp95");
				HX_STACK_LINE(631)
				ca->Set(tmp94,tmp95);
				HX_STACK_LINE(631)
				int tmp96 = (ca_k)++;		HX_STACK_VAR(tmp96,"tmp96");
				HX_STACK_LINE(631)
				Float tmp97 = c->a;		HX_STACK_VAR(tmp97,"tmp97");
				HX_STACK_LINE(631)
				ca->Set(tmp96,tmp97);
				HX_STACK_LINE(632)
				hx::AddEq(id,((Float)1.0));
			}
		}
		HX_STACK_LINE(634)
		::haxor::io::FloatArray tmp16 = ia;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(634)
		m->Set(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),tmp16,(int)1);
		HX_STACK_LINE(635)
		::haxor::io::FloatArray tmp17 = va;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(635)
		m->Set(HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1"),tmp17,(int)3);
		HX_STACK_LINE(636)
		::haxor::io::FloatArray tmp18 = ca;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(636)
		m->Set(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),tmp18,(int)4);
		HX_STACK_LINE(637)
		this->mesh = m;
	}
return null();
}



AxisGizmo_obj::AxisGizmo_obj()
{
}

Dynamic AxisGizmo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(AxisGizmo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AxisGizmo_obj::__mClass,"__mClass");
};

#endif

hx::Class AxisGizmo_obj::__mClass;

void AxisGizmo_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.context.AxisGizmo","\x8e","\x80","\x3b","\x47");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AxisGizmo_obj >;
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
