#include <hxcpp.h>

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
#ifndef INCLUDED_haxor_graphics_mesh_MeshLayout
#include <haxor/graphics/mesh/MeshLayout.h>
#endif
#ifndef INCLUDED_haxor_graphics_mesh_SkinnedMesh3
#include <haxor/graphics/mesh/SkinnedMesh3.h>
#endif
#ifndef INCLUDED_haxor_math_Matrix4
#include <haxor/math/Matrix4.h>
#endif
#ifndef INCLUDED_haxor_math_Vector4
#include <haxor/math/Vector4.h>
#endif
namespace haxor{
namespace graphics{
namespace mesh{

Void SkinnedMesh3_obj::__construct(::String __o_p_name)
{
HX_STACK_FRAME("haxor.graphics.mesh.SkinnedMesh3","new",0x2fa1d812,"haxor.graphics.mesh.SkinnedMesh3.new","haxor/graphics/mesh/MeshLayout.hx",141,0x92e5291c)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_p_name,"p_name")
::String p_name = __o_p_name.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(141)
	::String tmp = p_name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(141)
	super::__construct(tmp);
}
;
	return null();
}

//SkinnedMesh3_obj::~SkinnedMesh3_obj() { }

Dynamic SkinnedMesh3_obj::__CreateEmpty() { return  new SkinnedMesh3_obj; }
hx::ObjectPtr< SkinnedMesh3_obj > SkinnedMesh3_obj::__new(::String __o_p_name)
{  hx::ObjectPtr< SkinnedMesh3_obj > _result_ = new SkinnedMesh3_obj();
	_result_->__construct(__o_p_name);
	return _result_;}

Dynamic SkinnedMesh3_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SkinnedMesh3_obj > _result_ = new SkinnedMesh3_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Array< ::Dynamic > SkinnedMesh3_obj::get_binds( ){
	HX_STACK_FRAME("haxor.graphics.mesh.SkinnedMesh3","get_binds",0x94a3459f,"haxor.graphics.mesh.SkinnedMesh3.get_binds","haxor/graphics/mesh/MeshLayout.hx",144,0x92e5291c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(144)
	Array< ::Dynamic > tmp = this->m_binds;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(144)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(SkinnedMesh3_obj,get_binds,return )

Array< ::Dynamic > SkinnedMesh3_obj::set_binds( Array< ::Dynamic > v){
	HX_STACK_FRAME("haxor.graphics.mesh.SkinnedMesh3","set_binds",0x77f431ab,"haxor.graphics.mesh.SkinnedMesh3.set_binds","haxor/graphics/mesh/MeshLayout.hx",145,0x92e5291c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(145)
	Array< ::Dynamic > tmp = v->copy();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(145)
	this->m_binds = tmp;
	HX_STACK_LINE(145)
	Array< ::Dynamic > tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(145)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(SkinnedMesh3_obj,set_binds,return )

Array< ::Dynamic > SkinnedMesh3_obj::get_bone( ){
	HX_STACK_FRAME("haxor.graphics.mesh.SkinnedMesh3","get_bone",0x01d511db,"haxor.graphics.mesh.SkinnedMesh3.get_bone","haxor/graphics/mesh/MeshLayout.hx",149,0x92e5291c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(149)
	Array< ::Dynamic > tmp = this->m_bone;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(149)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(SkinnedMesh3_obj,get_bone,return )

Array< ::Dynamic > SkinnedMesh3_obj::set_bone( Array< ::Dynamic > v){
	HX_STACK_FRAME("haxor.graphics.mesh.SkinnedMesh3","set_bone",0xb0326b4f,"haxor.graphics.mesh.SkinnedMesh3.set_bone","haxor/graphics/mesh/MeshLayout.hx",150,0x92e5291c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(150)
	Array< ::Dynamic > tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(150)
	Array< ::Dynamic > tmp1 = this->UpdateAttribute(HX_HCSTRING("bone","\x44","\x83","\x1b","\x41"),tmp,false);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(150)
	Array< ::Dynamic > tmp2 = this->m_bone = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(150)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(SkinnedMesh3_obj,set_bone,return )

Array< ::Dynamic > SkinnedMesh3_obj::get_weight( ){
	HX_STACK_FRAME("haxor.graphics.mesh.SkinnedMesh3","get_weight",0x8ed213cf,"haxor.graphics.mesh.SkinnedMesh3.get_weight","haxor/graphics/mesh/MeshLayout.hx",154,0x92e5291c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(154)
	Array< ::Dynamic > tmp = this->m_weight;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(154)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(SkinnedMesh3_obj,get_weight,return )

Array< ::Dynamic > SkinnedMesh3_obj::set_weight( Array< ::Dynamic > v){
	HX_STACK_FRAME("haxor.graphics.mesh.SkinnedMesh3","set_weight",0x924fb243,"haxor.graphics.mesh.SkinnedMesh3.set_weight","haxor/graphics/mesh/MeshLayout.hx",155,0x92e5291c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(155)
	Array< ::Dynamic > tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(155)
	Array< ::Dynamic > tmp1 = this->UpdateAttribute(HX_HCSTRING("weight","\x78","\x71","\xa6","\x01"),tmp,false);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(155)
	Array< ::Dynamic > tmp2 = this->m_weight = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(155)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(SkinnedMesh3_obj,set_weight,return )


SkinnedMesh3_obj::SkinnedMesh3_obj()
{
}

void SkinnedMesh3_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SkinnedMesh3);
	HX_MARK_MEMBER_NAME(m_binds,"m_binds");
	HX_MARK_MEMBER_NAME(m_bone,"m_bone");
	HX_MARK_MEMBER_NAME(m_weight,"m_weight");
	::haxor::graphics::mesh::MeshLayout_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SkinnedMesh3_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_binds,"m_binds");
	HX_VISIT_MEMBER_NAME(m_bone,"m_bone");
	HX_VISIT_MEMBER_NAME(m_weight,"m_weight");
	::haxor::graphics::mesh::MeshLayout_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SkinnedMesh3_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bone") ) { if (inCallProp == hx::paccAlways) return get_bone(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"binds") ) { if (inCallProp == hx::paccAlways) return get_binds(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_bone") ) { return m_bone; }
		if (HX_FIELD_EQ(inName,"weight") ) { if (inCallProp == hx::paccAlways) return get_weight(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_binds") ) { return m_binds; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_bone") ) { return get_bone_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bone") ) { return set_bone_dyn(); }
		if (HX_FIELD_EQ(inName,"m_weight") ) { return m_weight; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_binds") ) { return get_binds_dyn(); }
		if (HX_FIELD_EQ(inName,"set_binds") ) { return set_binds_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_weight") ) { return get_weight_dyn(); }
		if (HX_FIELD_EQ(inName,"set_weight") ) { return set_weight_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SkinnedMesh3_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bone") ) { if (inCallProp == hx::paccAlways) return set_bone(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"binds") ) { if (inCallProp == hx::paccAlways) return set_binds(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_bone") ) { m_bone=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"weight") ) { if (inCallProp == hx::paccAlways) return set_weight(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_binds") ) { m_binds=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_weight") ) { m_weight=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SkinnedMesh3_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void SkinnedMesh3_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("binds","\x16","\x10","\x00","\xb3"));
	outFields->push(HX_HCSTRING("m_binds","\x84","\xe7","\x8a","\x63"));
	outFields->push(HX_HCSTRING("bone","\x44","\x83","\x1b","\x41"));
	outFields->push(HX_HCSTRING("m_bone","\x96","\xf3","\x12","\x89"));
	outFields->push(HX_HCSTRING("weight","\x78","\x71","\xa6","\x01"));
	outFields->push(HX_HCSTRING("m_weight","\x4a","\x1a","\x98","\xca"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(SkinnedMesh3_obj,m_binds),HX_HCSTRING("m_binds","\x84","\xe7","\x8a","\x63")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(SkinnedMesh3_obj,m_bone),HX_HCSTRING("m_bone","\x96","\xf3","\x12","\x89")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(SkinnedMesh3_obj,m_weight),HX_HCSTRING("m_weight","\x4a","\x1a","\x98","\xca")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get_binds","\x6d","\x6c","\xa9","\xf6"),
	HX_HCSTRING("set_binds","\x79","\x58","\xfa","\xd9"),
	HX_HCSTRING("m_binds","\x84","\xe7","\x8a","\x63"),
	HX_HCSTRING("get_bone","\xcd","\x3e","\xd6","\xc0"),
	HX_HCSTRING("set_bone","\x41","\x98","\x33","\x6f"),
	HX_HCSTRING("m_bone","\x96","\xf3","\x12","\x89"),
	HX_HCSTRING("get_weight","\x41","\xe1","\x2d","\xf2"),
	HX_HCSTRING("set_weight","\xb5","\x7f","\xab","\xf5"),
	HX_HCSTRING("m_weight","\x4a","\x1a","\x98","\xca"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SkinnedMesh3_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SkinnedMesh3_obj::__mClass,"__mClass");
};

#endif

hx::Class SkinnedMesh3_obj::__mClass;

void SkinnedMesh3_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.graphics.mesh.SkinnedMesh3","\x20","\x27","\x74","\x39");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &SkinnedMesh3_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SkinnedMesh3_obj >;
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
} // end namespace graphics
} // end namespace mesh
