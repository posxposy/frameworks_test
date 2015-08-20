#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif

Void Type_obj::__construct()
{
	return null();
}

//Type_obj::~Type_obj() { }

Dynamic Type_obj::__CreateEmpty() { return  new Type_obj; }
hx::ObjectPtr< Type_obj > Type_obj::__new()
{  hx::ObjectPtr< Type_obj > _result_ = new Type_obj();
	_result_->__construct();
	return _result_;}

Dynamic Type_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Type_obj > _result_ = new Type_obj();
	_result_->__construct();
	return _result_;}

::hx::Class Type_obj::getClass( Dynamic o){
	HX_STACK_FRAME("Type","getClass",0xc4e49bd6,"Type.getClass","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/cpp/_std/Type.hx",35,0xb55a1c94)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(36)
	bool tmp = (o == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(36)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(36)
	if ((tmp1)){
		HX_STACK_LINE(36)
		Dynamic tmp3 = o;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(36)
		Dynamic tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(36)
		bool tmp5 = ::Reflect_obj::isObject(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(36)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(36)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(36)
		tmp2 = !(tmp7);
	}
	else{
		HX_STACK_LINE(36)
		tmp2 = true;
	}
	HX_STACK_LINE(36)
	if ((tmp2)){
		HX_STACK_LINE(36)
		return null();
	}
	HX_STACK_LINE(37)
	Dynamic tmp3 = o->__GetClass();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(37)
	Dynamic c = tmp3;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(38)
	{
		HX_STACK_LINE(38)
		::String tmp4 = c->toString();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(38)
		::String _g = tmp4;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(38)
		::String tmp5 = _g;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(38)
		::String _switch_1 = (tmp5);
		if (  ( _switch_1==HX_HCSTRING("__Anon","\x8c","\x1a","\x43","\xda"))){
			HX_STACK_LINE(40)
			return null();
		}
		else if (  ( _switch_1==HX_HCSTRING("Class","\x18","\xe8","\x85","\xdb"))){
			HX_STACK_LINE(41)
			return null();
		}
	}
	HX_STACK_LINE(43)
	Dynamic tmp4 = c;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(43)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,getClass,return )

::hx::Class Type_obj::getSuperClass( ::hx::Class c){
	HX_STACK_FRAME("Type","getSuperClass",0xd9ffa85f,"Type.getSuperClass","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/cpp/_std/Type.hx",52,0xb55a1c94)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(53)
	::hx::Class tmp = c->GetSuper();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,getSuperClass,return )

::String Type_obj::getClassName( ::hx::Class c){
	HX_STACK_FRAME("Type","getClassName",0x8e66dd41,"Type.getClassName","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/cpp/_std/Type.hx",56,0xb55a1c94)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(57)
	bool tmp = (c == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(57)
	if ((tmp)){
		HX_STACK_LINE(58)
		return null();
	}
	HX_STACK_LINE(59)
	return c->mName;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,getClassName,return )

::hx::Class Type_obj::resolveClass( ::String name){
	HX_STACK_FRAME("Type","resolveClass",0x23b06bc0,"Type.resolveClass","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/cpp/_std/Type.hx",66,0xb55a1c94)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(67)
	::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	::hx::Class tmp1 = ::hx::Class_obj::Resolve(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(67)
	::hx::Class result = tmp1;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(68)
	bool tmp2 = (result != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(68)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(68)
	if ((tmp2)){
		HX_STACK_LINE(68)
		tmp3 = result->__IsEnum();
	}
	else{
		HX_STACK_LINE(68)
		tmp3 = false;
	}
	HX_STACK_LINE(68)
	if ((tmp3)){
		HX_STACK_LINE(69)
		return null();
	}
	HX_STACK_LINE(70)
	::hx::Class tmp4 = result;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(70)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,resolveClass,return )

Dynamic Type_obj::createInstance( ::hx::Class cl,Dynamic args){
	HX_STACK_FRAME("Type","createInstance",0xab84f9c5,"Type.createInstance","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/cpp/_std/Type.hx",80,0xb55a1c94)
	HX_STACK_ARG(cl,"cl")
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(81)
	bool tmp = (cl != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	if ((tmp)){
		HX_STACK_LINE(82)
		Dynamic tmp1 = args;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(82)
		Dynamic tmp2 = cl->ConstructArgs(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(82)
		return tmp2;
	}
	HX_STACK_LINE(83)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Type_obj,createInstance,return )

::ValueType Type_obj::_typeof( Dynamic v){
	HX_STACK_FRAME("Type","typeof",0xd6c51d65,"Type.typeof","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/cpp/_std/Type.hx",112,0xb55a1c94)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(113)
	bool tmp = (v == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(113)
	if ((tmp)){
		HX_STACK_LINE(113)
		return ::ValueType_obj::TNull;
	}
	HX_STACK_LINE(114)
	int tmp1 = v->__GetType();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(114)
	int t = tmp1;		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(115)
	int tmp2 = t;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(115)
	switch( (int)(tmp2)){
		case (int)2: {
			HX_STACK_LINE(117)
			return ::ValueType_obj::TBool;
		}
		;break;
		case (int)255: {
			HX_STACK_LINE(118)
			return ::ValueType_obj::TInt;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(119)
			return ::ValueType_obj::TFloat;
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(120)
			return ::ValueType_obj::TFunction;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(121)
			return ::ValueType_obj::TObject;
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(122)
			Dynamic tmp3 = v->__GetClass();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(122)
			::ValueType tmp4 = ::ValueType_obj::TEnum(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(122)
			return tmp4;
		}
		;break;
		default: {
			HX_STACK_LINE(124)
			Dynamic tmp3 = v->__GetClass();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(124)
			::ValueType tmp4 = ::ValueType_obj::TClass(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(124)
			return tmp4;
		}
	}
	HX_STACK_LINE(115)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,_typeof,return )


Type_obj::Type_obj()
{
}

bool Type_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"typeof") ) { outValue = _typeof_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getClass") ) { outValue = getClass_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getClassName") ) { outValue = getClassName_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"resolveClass") ) { outValue = resolveClass_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getSuperClass") ) { outValue = getSuperClass_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createInstance") ) { outValue = createInstance_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Type_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Type_obj::__mClass,"__mClass");
};

#endif

hx::Class Type_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("getClass","\xc2","\x87","\x2f","\xa8"),
	HX_HCSTRING("getSuperClass","\xf3","\x04","\x7a","\x04"),
	HX_HCSTRING("getClassName","\x2d","\x2f","\x94","\xeb"),
	HX_HCSTRING("resolveClass","\xac","\xbd","\xdd","\x80"),
	HX_HCSTRING("createInstance","\xb1","\x9e","\x1b","\xac"),
	HX_HCSTRING("typeof","\x51","\xf6","\x36","\x57"),
	String(null()) };

void Type_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Type","\xda","\x1e","\xe2","\x37");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Type_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Type_obj >;
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

