#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
namespace haxe{
namespace io{

Void Input_obj::__construct()
{
	return null();
}

//Input_obj::~Input_obj() { }

Dynamic Input_obj::__CreateEmpty() { return  new Input_obj; }
hx::ObjectPtr< Input_obj > Input_obj::__new()
{  hx::ObjectPtr< Input_obj > _result_ = new Input_obj();
	_result_->__construct();
	return _result_;}

Dynamic Input_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Input_obj > _result_ = new Input_obj();
	_result_->__construct();
	return _result_;}

int Input_obj::readByte( ){
	HX_STACK_FRAME("haxe.io.Input","readByte",0x4de8a3c2,"haxe.io.Input.readByte","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/haxe/io/Input.hx",48,0x3a905063)
	HX_STACK_THIS(this)
	HX_STACK_LINE(48)
	HX_STACK_DO_THROW(HX_HCSTRING("Not implemented","\x15","\x1e","\x32","\x34"));
	HX_STACK_LINE(48)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,readByte,return )

int Input_obj::readBytes( ::haxe::io::Bytes s,int pos,int len){
	HX_STACK_FRAME("haxe.io.Input","readBytes",0xdda6a671,"haxe.io.Input.readBytes","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/haxe/io/Input.hx",61,0x3a905063)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(62)
	int k = len;		HX_STACK_VAR(k,"k");
	HX_STACK_LINE(63)
	Array< unsigned char > b = s->b;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(64)
	bool tmp = (pos < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(64)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(64)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(64)
	if ((tmp2)){
		HX_STACK_LINE(64)
		tmp3 = (len < (int)0);
	}
	else{
		HX_STACK_LINE(64)
		tmp3 = true;
	}
	HX_STACK_LINE(64)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(64)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(64)
	if ((tmp4)){
		HX_STACK_LINE(64)
		int tmp6 = (pos + len);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(64)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(64)
		int tmp8 = s->length;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(64)
		tmp5 = (tmp7 > tmp8);
	}
	else{
		HX_STACK_LINE(64)
		tmp5 = true;
	}
	HX_STACK_LINE(64)
	if ((tmp5)){
		HX_STACK_LINE(65)
		HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
	}
	HX_STACK_LINE(66)
	while((true)){
		HX_STACK_LINE(66)
		bool tmp6 = (k > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(66)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(66)
		if ((tmp7)){
			HX_STACK_LINE(66)
			break;
		}
		HX_STACK_LINE(72)
		unsigned char tmp8 = this->readByte();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(72)
		b[pos] = tmp8;
		HX_STACK_LINE(76)
		(pos)++;
		HX_STACK_LINE(77)
		(k)--;
	}
	HX_STACK_LINE(79)
	int tmp6 = len;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(79)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC3(Input_obj,readBytes,return )

Void Input_obj::close( ){
{
		HX_STACK_FRAME("haxe.io.Input","close",0xfc421af4,"haxe.io.Input.close","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/haxe/io/Input.hx",87,0x3a905063)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,close,(void))


Input_obj::Input_obj()
{
}

Dynamic Input_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readByte") ) { return readByte_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readBytes") ) { return readBytes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("readByte","\x7e","\xf9","\x1a","\x69"),
	HX_HCSTRING("readBytes","\x35","\x55","\x7f","\x8e"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Input_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Input_obj::__mClass,"__mClass");
};

#endif

hx::Class Input_obj::__mClass;

void Input_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.io.Input","\xaa","\x0e","\xf5","\x9f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Input_obj >;
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
} // end namespace io
