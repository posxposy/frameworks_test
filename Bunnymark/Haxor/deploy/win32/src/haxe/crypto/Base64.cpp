#include <hxcpp.h>

#ifndef INCLUDED_haxe_crypto_Base64
#include <haxe/crypto/Base64.h>
#endif
#ifndef INCLUDED_haxe_crypto_BaseCode
#include <haxe/crypto/BaseCode.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
namespace haxe{
namespace crypto{

Void Base64_obj::__construct()
{
	return null();
}

//Base64_obj::~Base64_obj() { }

Dynamic Base64_obj::__CreateEmpty() { return  new Base64_obj; }
hx::ObjectPtr< Base64_obj > Base64_obj::__new()
{  hx::ObjectPtr< Base64_obj > _result_ = new Base64_obj();
	_result_->__construct();
	return _result_;}

Dynamic Base64_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Base64_obj > _result_ = new Base64_obj();
	_result_->__construct();
	return _result_;}

::String Base64_obj::CHARS;

::haxe::io::Bytes Base64_obj::BYTES;

::String Base64_obj::encode( ::haxe::io::Bytes bytes,hx::Null< bool >  __o_complement){
bool complement = __o_complement.Default(true);
	HX_STACK_FRAME("haxe.crypto.Base64","encode",0xc6961450,"haxe.crypto.Base64.encode","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/haxe/crypto/Base64.hx",32,0xa9d3105b)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(complement,"complement")
{
		HX_STACK_LINE(33)
		::haxe::io::Bytes tmp = ::haxe::crypto::Base64_obj::BYTES;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		::haxe::crypto::BaseCode tmp1 = ::haxe::crypto::BaseCode_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		::haxe::io::Bytes tmp2 = bytes;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(33)
		::haxe::io::Bytes tmp3 = tmp1->encodeBytes(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(33)
		::String tmp4 = tmp3->toString();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(33)
		::String str = tmp4;		HX_STACK_VAR(str,"str");
		HX_STACK_LINE(34)
		bool tmp5 = complement;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(34)
		if ((tmp5)){
			HX_STACK_LINE(35)
			int tmp6 = hx::Mod(bytes->length,(int)3);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(35)
			int _g = tmp6;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(35)
			int tmp7 = _g;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(35)
			switch( (int)(tmp7)){
				case (int)1: {
					HX_STACK_LINE(37)
					hx::AddEq(str,HX_HCSTRING("==","\x60","\x35","\x00","\x00"));
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(39)
					hx::AddEq(str,HX_HCSTRING("=","\x3d","\x00","\x00","\x00"));
				}
				;break;
				default: {
				}
			}
		}
		HX_STACK_LINE(42)
		::String tmp6 = str;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(42)
		return tmp6;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Base64_obj,encode,return )

::haxe::io::Bytes Base64_obj::decode( ::String str,hx::Null< bool >  __o_complement){
bool complement = __o_complement.Default(true);
	HX_STACK_FRAME("haxe.crypto.Base64","decode",0x319f7f68,"haxe.crypto.Base64.decode","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/haxe/crypto/Base64.hx",45,0xa9d3105b)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(complement,"complement")
{
		HX_STACK_LINE(46)
		bool tmp = complement;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(46)
		if ((tmp)){
			HX_STACK_LINE(47)
			while((true)){
				HX_STACK_LINE(47)
				int tmp1 = (str.length - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(47)
				Dynamic tmp2 = str.charCodeAt(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(47)
				bool tmp3 = (tmp2 == (int)61);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(47)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(47)
				if ((tmp4)){
					HX_STACK_LINE(47)
					break;
				}
				HX_STACK_LINE(48)
				::String tmp5 = str.substr((int)0,(int)-1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(48)
				str = tmp5;
			}
		}
		HX_STACK_LINE(49)
		::haxe::io::Bytes tmp1 = ::haxe::crypto::Base64_obj::BYTES;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(49)
		::haxe::crypto::BaseCode tmp2 = ::haxe::crypto::BaseCode_obj::__new(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(49)
		::String tmp3 = str;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(49)
		::haxe::io::Bytes tmp4 = ::haxe::io::Bytes_obj::ofString(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(49)
		::haxe::io::Bytes tmp5 = tmp2->decodeBytes(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(49)
		return tmp5;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Base64_obj,decode,return )


Base64_obj::Base64_obj()
{
}

bool Base64_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"CHARS") ) { outValue = CHARS; return true;  }
		if (HX_FIELD_EQ(inName,"BYTES") ) { outValue = BYTES; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"encode") ) { outValue = encode_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"decode") ) { outValue = decode_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &Base64_obj::CHARS,HX_HCSTRING("CHARS","\xbd","\xd4","\xa1","\xc3")},
	{hx::fsObject /*::haxe::io::Bytes*/ ,(void *) &Base64_obj::BYTES,HX_HCSTRING("BYTES","\x4b","\x40","\x86","\x3b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Base64_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Base64_obj::CHARS,"CHARS");
	HX_MARK_MEMBER_NAME(Base64_obj::BYTES,"BYTES");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Base64_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Base64_obj::CHARS,"CHARS");
	HX_VISIT_MEMBER_NAME(Base64_obj::BYTES,"BYTES");
};

#endif

hx::Class Base64_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("CHARS","\xbd","\xd4","\xa1","\xc3"),
	HX_HCSTRING("BYTES","\x4b","\x40","\x86","\x3b"),
	HX_HCSTRING("encode","\x16","\xf2","\xe3","\xf9"),
	HX_HCSTRING("decode","\x2e","\x5d","\xed","\x64"),
	String(null()) };

void Base64_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.crypto.Base64","\xf4","\x3a","\x39","\xe7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Base64_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Base64_obj >;
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

void Base64_obj::__boot()
{
	CHARS= HX_HCSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/","\x03","\x41","\x03","\x7f");
struct _Function_0_1{
	inline static ::haxe::io::Bytes Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/haxe/crypto/Base64.hx",30,0xa9d3105b)
		{
			HX_STACK_LINE(30)
			::String tmp = ::haxe::crypto::Base64_obj::CHARS;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(30)
			return ::haxe::io::Bytes_obj::ofString(tmp);
		}
		return null();
	}
};
	BYTES= _Function_0_1::Block();
}

} // end namespace haxe
} // end namespace crypto
