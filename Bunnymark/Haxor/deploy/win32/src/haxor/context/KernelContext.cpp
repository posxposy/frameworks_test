#include <hxcpp.h>

#ifndef INCLUDED_haxor_context_KernelContext
#include <haxor/context/KernelContext.h>
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
#ifndef INCLUDED_haxor_graphics_mesh_Mesh
#include <haxor/graphics/mesh/Mesh.h>
#endif
#ifndef INCLUDED_haxor_graphics_mesh_Mesh3
#include <haxor/graphics/mesh/Mesh3.h>
#endif
#ifndef INCLUDED_haxor_graphics_mesh_MeshLayout
#include <haxor/graphics/mesh/MeshLayout.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_ISerializable
#include <haxor/io/serialization/ISerializable.h>
#endif
#ifndef INCLUDED_haxor_thread_Kernel
#include <haxor/thread/Kernel.h>
#endif
namespace haxor{
namespace context{

Void KernelContext_obj::__construct()
{
HX_STACK_FRAME("haxor.context.KernelContext","new",0x1b922419,"haxor.context.KernelContext.new","haxor/context/KernelContext.hx",30,0x8c1aae79)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//KernelContext_obj::~KernelContext_obj() { }

Dynamic KernelContext_obj::__CreateEmpty() { return  new KernelContext_obj; }
hx::ObjectPtr< KernelContext_obj > KernelContext_obj::__new()
{  hx::ObjectPtr< KernelContext_obj > _result_ = new KernelContext_obj();
	_result_->__construct();
	return _result_;}

Dynamic KernelContext_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< KernelContext_obj > _result_ = new KernelContext_obj();
	_result_->__construct();
	return _result_;}

Void KernelContext_obj::Initialize( ){
{
		HX_STACK_FRAME("haxor.context.KernelContext","Initialize",0x7c62bad7,"haxor.context.KernelContext.Initialize","haxor/context/KernelContext.hx",36,0x8c1aae79)
		HX_STACK_THIS(this)
		HX_STACK_LINE(37)
		Array< ::Dynamic > tmp = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(37)
		this->list = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(KernelContext_obj,Initialize,(void))

Void KernelContext_obj::Execute( ){
{
		HX_STACK_FRAME("haxor.context.KernelContext","Execute",0xf2e3564e,"haxor.context.KernelContext.Execute","haxor/context/KernelContext.hx",45,0x8c1aae79)
		HX_STACK_THIS(this)
		HX_STACK_LINE(45)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(45)
		Array< ::Dynamic > tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		int _g = tmp->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(45)
		while((true)){
			HX_STACK_LINE(45)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(45)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(45)
			if ((tmp2)){
				HX_STACK_LINE(45)
				break;
			}
			HX_STACK_LINE(45)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(45)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(45)
			Array< ::Dynamic > tmp4 = this->list;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(45)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(45)
			::haxor::thread::Kernel tmp6 = tmp4->__get(tmp5).StaticCast< ::haxor::thread::Kernel >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(45)
			tmp6->Execute();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(KernelContext_obj,Execute,(void))

Void KernelContext_obj::OnCreate( ::haxor::thread::Kernel k){
{
		HX_STACK_FRAME("haxor.context.KernelContext","OnCreate",0x3068a742,"haxor.context.KernelContext.OnCreate","haxor/context/KernelContext.hx",53,0x8c1aae79)
		HX_STACK_THIS(this)
		HX_STACK_ARG(k,"k")
		HX_STACK_LINE(54)
		Array< ::Dynamic > tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(54)
		::haxor::thread::Kernel tmp1 = k;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(54)
		tmp->push(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(KernelContext_obj,OnCreate,(void))

Void KernelContext_obj::OnDestroy( ::haxor::thread::Kernel k){
{
		HX_STACK_FRAME("haxor.context.KernelContext","OnDestroy",0x3e4529f4,"haxor.context.KernelContext.OnDestroy","haxor/context/KernelContext.hx",62,0x8c1aae79)
		HX_STACK_THIS(this)
		HX_STACK_ARG(k,"k")
		HX_STACK_LINE(63)
		Array< ::Dynamic > tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(63)
		::haxor::thread::Kernel tmp1 = k;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(63)
		tmp->remove(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(KernelContext_obj,OnDestroy,(void))


KernelContext_obj::KernelContext_obj()
{
}

void KernelContext_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(KernelContext);
	HX_MARK_MEMBER_NAME(m_plane,"m_plane");
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_END_CLASS();
}

void KernelContext_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_plane,"m_plane");
	HX_VISIT_MEMBER_NAME(list,"list");
}

Dynamic KernelContext_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_plane") ) { return m_plane; }
		if (HX_FIELD_EQ(inName,"Execute") ) { return Execute_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"OnCreate") ) { return OnCreate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"OnDestroy") ) { return OnDestroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"Initialize") ) { return Initialize_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic KernelContext_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_plane") ) { m_plane=inValue.Cast< ::haxor::graphics::mesh::Mesh3 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool KernelContext_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void KernelContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("m_plane","\xca","\xd5","\x18","\x75"));
	outFields->push(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::graphics::mesh::Mesh3*/ ,(int)offsetof(KernelContext_obj,m_plane),HX_HCSTRING("m_plane","\xca","\xd5","\x18","\x75")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(KernelContext_obj,list),HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("m_plane","\xca","\xd5","\x18","\x75"),
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("Initialize","\x70","\x35","\x6c","\xe3"),
	HX_HCSTRING("Execute","\x15","\x32","\x5e","\x99"),
	HX_HCSTRING("OnCreate","\x9b","\x19","\x6e","\x35"),
	HX_HCSTRING("OnDestroy","\x7b","\xc5","\x03","\x9e"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(KernelContext_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(KernelContext_obj::__mClass,"__mClass");
};

#endif

hx::Class KernelContext_obj::__mClass;

void KernelContext_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.context.KernelContext","\xa7","\x23","\x9e","\xa7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &KernelContext_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< KernelContext_obj >;
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
