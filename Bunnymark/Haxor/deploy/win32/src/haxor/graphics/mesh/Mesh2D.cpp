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
#ifndef INCLUDED_haxor_graphics_mesh_Mesh2D
#include <haxor/graphics/mesh/Mesh2D.h>
#endif
#ifndef INCLUDED_haxor_graphics_mesh_MeshLayout
#include <haxor/graphics/mesh/MeshLayout.h>
#endif
namespace haxor{
namespace graphics{
namespace mesh{

Void Mesh2D_obj::__construct(::String __o_p_name)
{
HX_STACK_FRAME("haxor.graphics.mesh.Mesh2D","new",0xfb97be7b,"haxor.graphics.mesh.Mesh2D.new","haxor/graphics/mesh/MeshLayout.hx",161,0x92e5291c)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_p_name,"p_name")
::String p_name = __o_p_name.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(161)
	::String tmp = p_name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(161)
	super::__construct(tmp);
}
;
	return null();
}

//Mesh2D_obj::~Mesh2D_obj() { }

Dynamic Mesh2D_obj::__CreateEmpty() { return  new Mesh2D_obj; }
hx::ObjectPtr< Mesh2D_obj > Mesh2D_obj::__new(::String __o_p_name)
{  hx::ObjectPtr< Mesh2D_obj > _result_ = new Mesh2D_obj();
	_result_->__construct(__o_p_name);
	return _result_;}

Dynamic Mesh2D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Mesh2D_obj > _result_ = new Mesh2D_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}


Mesh2D_obj::Mesh2D_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mesh2D_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mesh2D_obj::__mClass,"__mClass");
};

#endif

hx::Class Mesh2D_obj::__mClass;

void Mesh2D_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.graphics.mesh.Mesh2D","\x09","\x65","\xaa","\x98");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Mesh2D_obj >;
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
