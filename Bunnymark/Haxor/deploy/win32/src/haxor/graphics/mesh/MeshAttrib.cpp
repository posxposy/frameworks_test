#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxor_context_EngineContext
#include <haxor/context/EngineContext.h>
#endif
#ifndef INCLUDED_haxor_context_MeshContext
#include <haxor/context/MeshContext.h>
#endif
#ifndef INCLUDED_haxor_context_UID
#include <haxor/context/UID.h>
#endif
#ifndef INCLUDED_haxor_graphics_mesh_MeshAttrib
#include <haxor/graphics/mesh/MeshAttrib.h>
#endif
#ifndef INCLUDED_haxor_io_Buffer
#include <haxor/io/Buffer.h>
#endif
namespace haxor{
namespace graphics{
namespace mesh{

Void MeshAttrib_obj::__construct()
{
HX_STACK_FRAME("haxor.graphics.mesh.MeshAttrib","new",0xc418c193,"haxor.graphics.mesh.MeshAttrib.new","haxor/graphics/mesh/Mesh.hx",306,0xbfac53a6)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(307)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(307)
	{
		HX_STACK_LINE(307)
		::haxor::context::MeshContext tmp1 = ::haxor::context::EngineContext_obj::mesh;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(307)
		::haxor::context::UID _this = tmp1->aid;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(307)
		int tmp2 = _this->m_cache->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(307)
		bool tmp3 = (tmp2 <= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(307)
		if ((tmp3)){
			HX_STACK_LINE(307)
			tmp = (_this->m_id)++;
		}
		else{
			HX_STACK_LINE(307)
			tmp = _this->m_cache->shift();
		}
	}
	HX_STACK_LINE(307)
	this->__cid = tmp;
	HX_STACK_LINE(308)
	this->_loc_ = (int)-1;
	HX_STACK_LINE(309)
	this->m_name = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(310)
	this->data = null();
	HX_STACK_LINE(311)
	this->offset = (int)0;
}
;
	return null();
}

//MeshAttrib_obj::~MeshAttrib_obj() { }

Dynamic MeshAttrib_obj::__CreateEmpty() { return  new MeshAttrib_obj; }
hx::ObjectPtr< MeshAttrib_obj > MeshAttrib_obj::__new()
{  hx::ObjectPtr< MeshAttrib_obj > _result_ = new MeshAttrib_obj();
	_result_->__construct();
	return _result_;}

Dynamic MeshAttrib_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MeshAttrib_obj > _result_ = new MeshAttrib_obj();
	_result_->__construct();
	return _result_;}

::String MeshAttrib_obj::get_name( ){
	HX_STACK_FRAME("haxor.graphics.mesh.MeshAttrib","get_name",0x449f03c1,"haxor.graphics.mesh.MeshAttrib.get_name","haxor/graphics/mesh/Mesh.hx",286,0xbfac53a6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(286)
	::String tmp = this->m_name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(286)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MeshAttrib_obj,get_name,return )

int MeshAttrib_obj::get_count( ){
	HX_STACK_FRAME("haxor.graphics.mesh.MeshAttrib","get_count",0x7a62fa99,"haxor.graphics.mesh.MeshAttrib.get_count","haxor/graphics/mesh/Mesh.hx",303,0xbfac53a6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(303)
	::haxor::io::Buffer tmp = this->data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(303)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(303)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(303)
	if ((tmp1)){
		HX_STACK_LINE(303)
		tmp2 = (int)0;
	}
	else{
		HX_STACK_LINE(303)
		::haxor::io::Buffer tmp3 = this->data;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(303)
		int tmp4 = tmp3->m_length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(303)
		int tmp5 = this->offset;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(303)
		Float tmp6 = (Float(tmp4) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(303)
		tmp2 = ::Std_obj::_int(tmp6);
	}
	HX_STACK_LINE(303)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(MeshAttrib_obj,get_count,return )


MeshAttrib_obj::MeshAttrib_obj()
{
}

void MeshAttrib_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MeshAttrib);
	HX_MARK_MEMBER_NAME(__cid,"__cid");
	HX_MARK_MEMBER_NAME(_loc_,"_loc_");
	HX_MARK_MEMBER_NAME(m_name,"m_name");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_END_CLASS();
}

void MeshAttrib_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__cid,"__cid");
	HX_VISIT_MEMBER_NAME(_loc_,"_loc_");
	HX_VISIT_MEMBER_NAME(m_name,"m_name");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(offset,"offset");
}

Dynamic MeshAttrib_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == hx::paccAlways) return get_name(); }
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"__cid") ) { return __cid; }
		if (HX_FIELD_EQ(inName,"_loc_") ) { return _loc_; }
		if (HX_FIELD_EQ(inName,"count") ) { if (inCallProp == hx::paccAlways) return get_count(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_name") ) { return m_name; }
		if (HX_FIELD_EQ(inName,"offset") ) { return offset; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_name") ) { return get_name_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_count") ) { return get_count_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MeshAttrib_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::haxor::io::Buffer >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"__cid") ) { __cid=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_loc_") ) { _loc_=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_name") ) { m_name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MeshAttrib_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void MeshAttrib_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__cid","\xde","\xdb","\x27","\xf2"));
	outFields->push(HX_HCSTRING("_loc_","\xbe","\xb7","\xc8","\xfa"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("m_name","\x9d","\xe2","\xf6","\x90"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"));
	outFields->push(HX_HCSTRING("count","\xcf","\x44","\x63","\x4a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(MeshAttrib_obj,__cid),HX_HCSTRING("__cid","\xde","\xdb","\x27","\xf2")},
	{hx::fsInt,(int)offsetof(MeshAttrib_obj,_loc_),HX_HCSTRING("_loc_","\xbe","\xb7","\xc8","\xfa")},
	{hx::fsString,(int)offsetof(MeshAttrib_obj,m_name),HX_HCSTRING("m_name","\x9d","\xe2","\xf6","\x90")},
	{hx::fsObject /*::haxor::io::Buffer*/ ,(int)offsetof(MeshAttrib_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsInt,(int)offsetof(MeshAttrib_obj,offset),HX_HCSTRING("offset","\x93","\x97","\x3f","\x60")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__cid","\xde","\xdb","\x27","\xf2"),
	HX_HCSTRING("_loc_","\xbe","\xb7","\xc8","\xfa"),
	HX_HCSTRING("get_name","\xd4","\x2d","\xba","\xc8"),
	HX_HCSTRING("m_name","\x9d","\xe2","\xf6","\x90"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"),
	HX_HCSTRING("get_count","\x26","\xa1","\x0c","\x8e"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MeshAttrib_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MeshAttrib_obj::__mClass,"__mClass");
};

#endif

hx::Class MeshAttrib_obj::__mClass;

void MeshAttrib_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.graphics.mesh.MeshAttrib","\x21","\xfc","\x75","\xcc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &MeshAttrib_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MeshAttrib_obj >;
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
