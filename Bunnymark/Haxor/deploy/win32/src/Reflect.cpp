#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif

Void Reflect_obj::__construct()
{
	return null();
}

//Reflect_obj::~Reflect_obj() { }

Dynamic Reflect_obj::__CreateEmpty() { return  new Reflect_obj; }
hx::ObjectPtr< Reflect_obj > Reflect_obj::__new()
{  hx::ObjectPtr< Reflect_obj > _result_ = new Reflect_obj();
	_result_->__construct();
	return _result_;}

Dynamic Reflect_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Reflect_obj > _result_ = new Reflect_obj();
	_result_->__construct();
	return _result_;}

bool Reflect_obj::hasField( Dynamic o,::String field){
	HX_STACK_FRAME("Reflect","hasField",0xef8c2571,"Reflect.hasField","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/cpp/_std/Reflect.hx",24,0x887df851)
	HX_STACK_ARG(o,"o")
	HX_STACK_ARG(field,"field")
	HX_STACK_LINE(25)
	bool tmp = (o != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	if ((tmp)){
		HX_STACK_LINE(25)
		tmp1 = o->__HasField(field);
	}
	else{
		HX_STACK_LINE(25)
		tmp1 = false;
	}
	HX_STACK_LINE(25)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Reflect_obj,hasField,return )

Dynamic Reflect_obj::field( Dynamic o,::String field){
	HX_STACK_FRAME("Reflect","field",0x54b04da9,"Reflect.field","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/cpp/_std/Reflect.hx",28,0x887df851)
	HX_STACK_ARG(o,"o")
	HX_STACK_ARG(field,"field")
	HX_STACK_LINE(29)
	bool tmp = (o == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	if ((tmp)){
		HX_STACK_LINE(29)
		tmp1 = null();
	}
	else{
		HX_STACK_LINE(29)
		tmp1 = o->__Field(field,hx::paccNever);
	}
	HX_STACK_LINE(29)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Reflect_obj,field,return )

Void Reflect_obj::setField( Dynamic o,::String field,Dynamic value){
{
		HX_STACK_FRAME("Reflect","setField",0x71684429,"Reflect.setField","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/cpp/_std/Reflect.hx",32,0x887df851)
		HX_STACK_ARG(o,"o")
		HX_STACK_ARG(field,"field")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(33)
		bool tmp = (o != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		if ((tmp)){
			HX_STACK_LINE(34)
			o->__SetField(field,value,hx::paccNever);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Reflect_obj,setField,(void))

Dynamic Reflect_obj::getProperty( Dynamic o,::String field){
	HX_STACK_FRAME("Reflect","getProperty",0x632ca13a,"Reflect.getProperty","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/cpp/_std/Reflect.hx",37,0x887df851)
	HX_STACK_ARG(o,"o")
	HX_STACK_ARG(field,"field")
	HX_STACK_LINE(38)
	bool tmp = (o == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(38)
	if ((tmp)){
		HX_STACK_LINE(38)
		tmp1 = null();
	}
	else{
		HX_STACK_LINE(38)
		tmp1 = o->__Field(field,hx::paccAlways);
	}
	HX_STACK_LINE(38)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Reflect_obj,getProperty,return )

Void Reflect_obj::setProperty( Dynamic o,::String field,Dynamic value){
{
		HX_STACK_FRAME("Reflect","setProperty",0x6d99a846,"Reflect.setProperty","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/cpp/_std/Reflect.hx",41,0x887df851)
		HX_STACK_ARG(o,"o")
		HX_STACK_ARG(field,"field")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(42)
		bool tmp = (o != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(42)
		if ((tmp)){
			HX_STACK_LINE(43)
			o->__SetField(field,value,hx::paccAlways);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Reflect_obj,setProperty,(void))

Array< ::String > Reflect_obj::fields( Dynamic o){
	HX_STACK_FRAME("Reflect","fields",0xc593a6aa,"Reflect.fields","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/cpp/_std/Reflect.hx",53,0x887df851)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(54)
	bool tmp = (o == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	if ((tmp)){
		HX_STACK_LINE(54)
		Array< ::String > tmp1 = Array_obj< ::String >::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(54)
		return tmp1;
	}
	HX_STACK_LINE(55)
	Array< ::String > tmp1 = Array_obj< ::String >::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(55)
	Array< ::String > a = tmp1;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(56)
	o->__GetFields(a);
	HX_STACK_LINE(57)
	Array< ::String > tmp2 = a;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(57)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reflect_obj,fields,return )

bool Reflect_obj::isFunction( Dynamic f){
	HX_STACK_FRAME("Reflect","isFunction",0x0f1541d3,"Reflect.isFunction","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/cpp/_std/Reflect.hx",60,0x887df851)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(61)
	bool tmp = (f != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(61)
	if ((tmp)){
		HX_STACK_LINE(61)
		Dynamic tmp2 = f->__GetType();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(61)
		Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(61)
		Dynamic tmp4 = ::vtFunction;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(61)
		tmp1 = (tmp3 == tmp4);
	}
	else{
		HX_STACK_LINE(61)
		tmp1 = false;
	}
	HX_STACK_LINE(61)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reflect_obj,isFunction,return )

bool Reflect_obj::isObject( Dynamic v){
	HX_STACK_FRAME("Reflect","isObject",0xd04960ba,"Reflect.isObject","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/cpp/_std/Reflect.hx",76,0x887df851)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(77)
	bool tmp = (v == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	if ((tmp)){
		HX_STACK_LINE(77)
		return false;
	}
	HX_STACK_LINE(78)
	Dynamic tmp1 = v->__GetType();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(78)
	int t = tmp1;		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(79)
	bool tmp2 = (t == ::vtObject);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(79)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(79)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(79)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(79)
	if ((tmp4)){
		HX_STACK_LINE(79)
		tmp5 = (t == ::vtClass);
	}
	else{
		HX_STACK_LINE(79)
		tmp5 = true;
	}
	HX_STACK_LINE(79)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(79)
	bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(79)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(79)
	if ((tmp7)){
		HX_STACK_LINE(79)
		tmp8 = (t == ::vtString);
	}
	else{
		HX_STACK_LINE(79)
		tmp8 = true;
	}
	HX_STACK_LINE(79)
	bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(79)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(79)
	if ((tmp9)){
		HX_STACK_LINE(80)
		tmp10 = (t == ::vtArray);
	}
	else{
		HX_STACK_LINE(79)
		tmp10 = true;
	}
	HX_STACK_LINE(79)
	return tmp10;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reflect_obj,isObject,return )


Reflect_obj::Reflect_obj()
{
}

bool Reflect_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"field") ) { outValue = field_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"fields") ) { outValue = fields_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hasField") ) { outValue = hasField_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setField") ) { outValue = setField_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isObject") ) { outValue = isObject_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isFunction") ) { outValue = isFunction_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getProperty") ) { outValue = getProperty_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setProperty") ) { outValue = setProperty_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Reflect_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Reflect_obj::__mClass,"__mClass");
};

#endif

hx::Class Reflect_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("hasField","\x00","\xdf","\xeb","\x8c"),
	HX_HCSTRING("field","\xba","\x94","\x93","\x00"),
	HX_HCSTRING("setField","\xb8","\xfd","\xc7","\x0e"),
	HX_HCSTRING("getProperty","\x0b","\x0b","\x2c","\xd2"),
	HX_HCSTRING("setProperty","\x17","\x12","\x99","\xdc"),
	HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80"),
	HX_HCSTRING("isFunction","\x22","\xbd","\x01","\x8f"),
	HX_HCSTRING("isObject","\x49","\x1a","\xa9","\x6d"),
	String(null()) };

void Reflect_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Reflect","\x1d","\xac","\x7a","\xb6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Reflect_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Reflect_obj >;
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

