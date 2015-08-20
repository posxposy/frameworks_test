#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_haxe_io_BytesOutput
#include <haxe/io/BytesOutput.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
namespace haxe{
namespace io{

Void BytesOutput_obj::__construct()
{
HX_STACK_FRAME("haxe.io.BytesOutput","new",0x130b775e,"haxe.io.BytesOutput.new","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/haxe/io/BytesOutput.hx",35,0x1ad0a921)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(40)
	::haxe::io::BytesBuffer tmp = ::haxe::io::BytesBuffer_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	this->b = tmp;
}
;
	return null();
}

//BytesOutput_obj::~BytesOutput_obj() { }

Dynamic BytesOutput_obj::__CreateEmpty() { return  new BytesOutput_obj; }
hx::ObjectPtr< BytesOutput_obj > BytesOutput_obj::__new()
{  hx::ObjectPtr< BytesOutput_obj > _result_ = new BytesOutput_obj();
	_result_->__construct();
	return _result_;}

Dynamic BytesOutput_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BytesOutput_obj > _result_ = new BytesOutput_obj();
	_result_->__construct();
	return _result_;}

Void BytesOutput_obj::writeByte( int c){
{
		HX_STACK_FRAME("haxe.io.BytesOutput","writeByte",0xed1b0d05,"haxe.io.BytesOutput.writeByte","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/haxe/io/BytesOutput.hx",55,0x1ad0a921)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(55)
		::haxe::io::BytesBuffer tmp = this->b;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		int tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(55)
		tmp->b->push(tmp1);
	}
return null();
}


int BytesOutput_obj::writeBytes( ::haxe::io::Bytes buf,int pos,int len){
	HX_STACK_FRAME("haxe.io.BytesOutput","writeBytes",0x8a9057ce,"haxe.io.BytesOutput.writeBytes","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/haxe/io/BytesOutput.hx",59,0x1ad0a921)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buf,"buf")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(64)
	{
		HX_STACK_LINE(64)
		::haxe::io::BytesBuffer tmp = this->b;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(64)
		::haxe::io::BytesBuffer _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(64)
		bool tmp1 = (pos < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(64)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(64)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(64)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(64)
		if ((tmp3)){
			HX_STACK_LINE(64)
			tmp4 = (len < (int)0);
		}
		else{
			HX_STACK_LINE(64)
			tmp4 = true;
		}
		HX_STACK_LINE(64)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(64)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(64)
		if ((tmp5)){
			HX_STACK_LINE(64)
			int tmp7 = (pos + len);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(64)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(64)
			int tmp9 = buf->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(64)
			tmp6 = (tmp8 > tmp9);
		}
		else{
			HX_STACK_LINE(64)
			tmp6 = true;
		}
		HX_STACK_LINE(64)
		if ((tmp6)){
			HX_STACK_LINE(64)
			HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
		}
		HX_STACK_LINE(64)
		Array< unsigned char > b1 = _this->b;		HX_STACK_VAR(b1,"b1");
		HX_STACK_LINE(64)
		Array< unsigned char > b2 = buf->b;		HX_STACK_VAR(b2,"b2");
		HX_STACK_LINE(64)
		{
			HX_STACK_LINE(64)
			int _g1 = pos;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(64)
			int tmp7 = (pos + len);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(64)
			int _g = tmp7;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(64)
			while((true)){
				HX_STACK_LINE(64)
				bool tmp8 = (_g1 < _g);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(64)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(64)
				if ((tmp9)){
					HX_STACK_LINE(64)
					break;
				}
				HX_STACK_LINE(64)
				int tmp10 = (_g1)++;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(64)
				int i = tmp10;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(64)
				unsigned char tmp11 = b2->__get(i);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(64)
				_this->b->push(tmp11);
			}
		}
	}
	HX_STACK_LINE(66)
	int tmp = len;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	return tmp;
}


::haxe::io::Bytes BytesOutput_obj::getBytes( ){
	HX_STACK_FRAME("haxe.io.BytesOutput","getBytes",0x9fe35837,"haxe.io.BytesOutput.getBytes","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/haxe/io/BytesOutput.hx",125,0x1ad0a921)
	HX_STACK_THIS(this)
	HX_STACK_LINE(131)
	::haxe::io::BytesBuffer tmp = this->b;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(131)
	::haxe::io::Bytes tmp1 = tmp->getBytes();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(131)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(BytesOutput_obj,getBytes,return )


BytesOutput_obj::BytesOutput_obj()
{
}

void BytesOutput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BytesOutput);
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_END_CLASS();
}

void BytesOutput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(b,"b");
}

Dynamic BytesOutput_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { return getBytes_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"writeByte") ) { return writeByte_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"writeBytes") ) { return writeBytes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BytesOutput_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< ::haxe::io::BytesBuffer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BytesOutput_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void BytesOutput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("b","\x62","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::io::BytesBuffer*/ ,(int)offsetof(BytesOutput_obj,b),HX_HCSTRING("b","\x62","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("b","\x62","\x00","\x00","\x00"),
	HX_HCSTRING("writeByte","\x87","\x13","\xd7","\x49"),
	HX_HCSTRING("writeBytes","\x0c","\x03","\x5a","\x52"),
	HX_HCSTRING("getBytes","\xf5","\x17","\x6f","\x1d"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BytesOutput_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BytesOutput_obj::__mClass,"__mClass");
};

#endif

hx::Class BytesOutput_obj::__mClass;

void BytesOutput_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.io.BytesOutput","\x6c","\x30","\xb1","\xdc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &BytesOutput_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BytesOutput_obj >;
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
