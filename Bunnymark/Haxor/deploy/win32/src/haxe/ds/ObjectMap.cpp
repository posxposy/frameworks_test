#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
namespace haxe{
namespace ds{

Void ObjectMap_obj::__construct()
{
HX_STACK_FRAME("haxe.ds.ObjectMap","new",0x27af5498,"haxe.ds.ObjectMap.new","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/cpp/_std/haxe/ds/ObjectMap.hx",42,0xe4bd3208)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//ObjectMap_obj::~ObjectMap_obj() { }

Dynamic ObjectMap_obj::__CreateEmpty() { return  new ObjectMap_obj; }
hx::ObjectPtr< ObjectMap_obj > ObjectMap_obj::__new()
{  hx::ObjectPtr< ObjectMap_obj > _result_ = new ObjectMap_obj();
	_result_->__construct();
	return _result_;}

Dynamic ObjectMap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ObjectMap_obj > _result_ = new ObjectMap_obj();
	_result_->__construct();
	return _result_;}

hx::Object *ObjectMap_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::IMap_obj)) return operator ::haxe::IMap_obj *();
	return super::__ToInterface(inType);
}

ObjectMap_obj::operator ::haxe::IMap_obj *()
	{ return new ::haxe::IMap_delegate_< ObjectMap_obj >(this); }
Void ObjectMap_obj::set( Dynamic key,Dynamic value){
{
		HX_STACK_FRAME("haxe.ds.ObjectMap","set",0x27b31fda,"haxe.ds.ObjectMap.set","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/cpp/_std/haxe/ds/ObjectMap.hx",45,0xe4bd3208)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(45)
		::__object_hash_set(this->h,key,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ObjectMap_obj,set,(void))

Dynamic ObjectMap_obj::get( Dynamic key){
	HX_STACK_FRAME("haxe.ds.ObjectMap","get",0x27aa04ce,"haxe.ds.ObjectMap.get","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/cpp/_std/haxe/ds/ObjectMap.hx",48,0xe4bd3208)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(49)
	Dynamic tmp = ::__object_hash_get(this->h,key);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectMap_obj,get,return )

bool ObjectMap_obj::exists( Dynamic key){
	HX_STACK_FRAME("haxe.ds.ObjectMap","exists",0xc8930ca4,"haxe.ds.ObjectMap.exists","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/cpp/_std/haxe/ds/ObjectMap.hx",52,0xe4bd3208)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(53)
	bool tmp = ::__object_hash_exists(this->h,key);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectMap_obj,exists,return )

Dynamic ObjectMap_obj::keys( ){
	HX_STACK_FRAME("haxe.ds.ObjectMap","keys",0x8fbf0ebc,"haxe.ds.ObjectMap.keys","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/cpp/_std/haxe/ds/ObjectMap.hx",60,0xe4bd3208)
	HX_STACK_THIS(this)
	HX_STACK_LINE(61)
	Dynamic tmp = ::__object_hash_keys(this->h);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	Dynamic a = tmp;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(62)
	Dynamic tmp1 = a->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(62)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMap_obj,keys,return )


ObjectMap_obj::ObjectMap_obj()
{
}

void ObjectMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ObjectMap);
	HX_MARK_MEMBER_NAME(h,"h");
	HX_MARK_END_CLASS();
}

void ObjectMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(h,"h");
}

Dynamic ObjectMap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { return h; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { return keys_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return exists_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ObjectMap_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { h=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ObjectMap_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ObjectMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("h","\x68","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ObjectMap_obj,h),HX_HCSTRING("h","\x68","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("h","\x68","\x00","\x00","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ObjectMap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ObjectMap_obj::__mClass,"__mClass");
};

#endif

hx::Class ObjectMap_obj::__mClass;

void ObjectMap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ds.ObjectMap","\xa6","\x68","\x9b","\xde");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ObjectMap_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ObjectMap_obj >;
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

} // end namespace haxe
} // end namespace ds
