#include <hxcpp.h>

#ifndef INCLUDED_haxe_rtti_Meta
#include <haxe/rtti/Meta.h>
#endif
namespace haxe{
namespace rtti{

Void Meta_obj::__construct()
{
	return null();
}

//Meta_obj::~Meta_obj() { }

Dynamic Meta_obj::__CreateEmpty() { return  new Meta_obj; }
hx::ObjectPtr< Meta_obj > Meta_obj::__new()
{  hx::ObjectPtr< Meta_obj > _result_ = new Meta_obj();
	_result_->__construct();
	return _result_;}

Dynamic Meta_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Meta_obj > _result_ = new Meta_obj();
	_result_->__construct();
	return _result_;}

Dynamic Meta_obj::getMeta( Dynamic t){
	HX_STACK_FRAME("haxe.rtti.Meta","getMeta",0x629b4ac1,"haxe.rtti.Meta.getMeta","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/haxe/rtti/Meta.hx",58,0x030321db)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(58)
	return t->__Field(HX_HCSTRING("__meta__","\x45","\x04","\x85","\xb1"), hx::paccDynamic );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Meta_obj,getMeta,return )

Dynamic Meta_obj::getFields( Dynamic t){
	HX_STACK_FRAME("haxe.rtti.Meta","getFields",0x2f4d8575,"haxe.rtti.Meta.getFields","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/haxe/rtti/Meta.hx",73,0x030321db)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(74)
	Dynamic tmp = t;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(74)
	Dynamic tmp1 = ::haxe::rtti::Meta_obj::getMeta(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(74)
	Dynamic meta = tmp1;		HX_STACK_VAR(meta,"meta");
	HX_STACK_LINE(75)
	bool tmp2 = (meta == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(75)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(75)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(75)
	if ((tmp3)){
		HX_STACK_LINE(75)
		tmp4 = (meta->__Field(HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80"), hx::paccDynamic ) == null());
	}
	else{
		HX_STACK_LINE(75)
		tmp4 = true;
	}
	HX_STACK_LINE(75)
	Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(75)
	if ((tmp4)){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/haxe/rtti/Meta.hx",75,0x030321db)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(75)
		tmp5 = _Function_2_1::Block();
	}
	else{
		HX_STACK_LINE(75)
		tmp5 = meta->__Field(HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80"), hx::paccDynamic );
	}
	HX_STACK_LINE(75)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Meta_obj,getFields,return )


Meta_obj::Meta_obj()
{
}

bool Meta_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getMeta") ) { outValue = getMeta_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getFields") ) { outValue = getFields_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Meta_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Meta_obj::__mClass,"__mClass");
};

#endif

hx::Class Meta_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("getMeta","\x7b","\xfa","\xdb","\x1a"),
	HX_HCSTRING("getFields","\xaf","\x17","\xe5","\xfc"),
	String(null()) };

void Meta_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.rtti.Meta","\xb4","\xfa","\x66","\x18");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Meta_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Meta_obj >;
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
} // end namespace rtti
