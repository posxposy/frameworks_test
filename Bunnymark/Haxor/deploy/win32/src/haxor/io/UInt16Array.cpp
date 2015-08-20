#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxor_io_Buffer
#include <haxor/io/Buffer.h>
#endif
#ifndef INCLUDED_haxor_io_UInt16Array
#include <haxor/io/UInt16Array.h>
#endif
namespace haxor{
namespace io{

Void UInt16Array_obj::__construct(int p_length)
{
HX_STACK_FRAME("haxor.io.UInt16Array","new",0xd0603430,"haxor.io.UInt16Array.new","haxor/io/UInt16Array.hx",12,0xf538efe0)
HX_STACK_THIS(this)
HX_STACK_ARG(p_length,"p_length")
{
	HX_STACK_LINE(12)
	int tmp = p_length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	super::__construct(tmp);
}
;
	return null();
}

//UInt16Array_obj::~UInt16Array_obj() { }

Dynamic UInt16Array_obj::__CreateEmpty() { return  new UInt16Array_obj; }
hx::ObjectPtr< UInt16Array_obj > UInt16Array_obj::__new(int p_length)
{  hx::ObjectPtr< UInt16Array_obj > _result_ = new UInt16Array_obj();
	_result_->__construct(p_length);
	return _result_;}

Dynamic UInt16Array_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UInt16Array_obj > _result_ = new UInt16Array_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

int UInt16Array_obj::get_bytesPerElement( ){
	HX_STACK_FRAME("haxor.io.UInt16Array","get_bytesPerElement",0xfbf13a91,"haxor.io.UInt16Array.get_bytesPerElement","haxor/io/UInt16Array.hx",38,0xf538efe0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(38)
	return (int)2;
}


Void UInt16Array_obj::Resize( int p_length){
{
		HX_STACK_FRAME("haxor.io.UInt16Array","Resize",0xf61fac44,"haxor.io.UInt16Array.Resize","haxor/io/UInt16Array.hx",45,0xf538efe0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_length,"p_length")
		HX_STACK_LINE(46)
		int tmp = p_length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(46)
		this->super::Resize(tmp);
	}
return null();
}


int UInt16Array_obj::Get( int p_index){
	HX_STACK_FRAME("haxor.io.UInt16Array","Get",0xd0429c46,"haxor.io.UInt16Array.Get","haxor/io/UInt16Array.hx",62,0xf538efe0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_index,"p_index")
	HX_STACK_LINE(69)
	::haxe::io::Bytes tmp = this->m_buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	::haxe::io::Bytes aux = tmp;		HX_STACK_VAR(aux,"aux");
	HX_STACK_LINE(70)
	int tmp1 = (p_index * (int)2);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(70)
	int p = tmp1;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(71)
	
		int v = 0;
		char* ptr = (char*)(&v);
		ptr[0] = (char) aux->b[p];
		ptr[1] = (char) aux->b[p+1];		
		return v;
		;
	HX_STACK_LINE(78)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(UInt16Array_obj,Get,return )

Void UInt16Array_obj::Set( int p_index,int p_value){
{
		HX_STACK_FRAME("haxor.io.UInt16Array","Set",0xd04bb752,"haxor.io.UInt16Array.Set","haxor/io/UInt16Array.hx",92,0xf538efe0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_index,"p_index")
		HX_STACK_ARG(p_value,"p_value")
		HX_STACK_LINE(99)
		::haxe::io::Bytes tmp = this->m_buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(99)
		::haxe::io::Bytes aux = tmp;		HX_STACK_VAR(aux,"aux");
		HX_STACK_LINE(100)
		int tmp1 = (p_index * (int)2);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(100)
		int p = tmp1;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(101)
		
		int v   = p_value;
		char* ptr = (char*)(&v);
		aux->b[p]   = ptr[0];
		aux->b[p+1] = ptr[1];		
		;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UInt16Array_obj,Set,(void))

Void UInt16Array_obj::SetRange( Array< int > p_data,hx::Null< int >  __o_p_offset){
int p_offset = __o_p_offset.Default(0);
	HX_STACK_FRAME("haxor.io.UInt16Array","SetRange",0xcf6d950b,"haxor.io.UInt16Array.SetRange","haxor/io/UInt16Array.hx",121,0xf538efe0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_data,"p_data")
	HX_STACK_ARG(p_offset,"p_offset")
{
		HX_STACK_LINE(121)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(121)
		int _g = p_data->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(121)
		while((true)){
			HX_STACK_LINE(121)
			bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(121)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(121)
			if ((tmp1)){
				HX_STACK_LINE(121)
				break;
			}
			HX_STACK_LINE(121)
			int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(121)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(121)
			int tmp3 = (i + p_offset);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(121)
			int tmp4 = p_data->__get(i);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(121)
			this->Set(tmp3,tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UInt16Array_obj,SetRange,(void))

Array< int > UInt16Array_obj::ToArray( ){
	HX_STACK_FRAME("haxor.io.UInt16Array","ToArray",0xf4376dce,"haxor.io.UInt16Array.ToArray","haxor/io/UInt16Array.hx",129,0xf538efe0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(130)
	Array< int > tmp = Array_obj< int >::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(130)
	Array< int > res = tmp;		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(131)
	{
		HX_STACK_LINE(131)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(131)
		int tmp1 = this->m_length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(131)
		int _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(131)
		while((true)){
			HX_STACK_LINE(131)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(131)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(131)
			if ((tmp3)){
				HX_STACK_LINE(131)
				break;
			}
			HX_STACK_LINE(131)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(131)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(131)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(131)
			int tmp6 = this->Get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(131)
			res->push(tmp6);
		}
	}
	HX_STACK_LINE(132)
	Array< int > tmp1 = res;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(132)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(UInt16Array_obj,ToArray,return )

Void UInt16Array_obj::SetViewSlice( int p_start,int p_length){
{
		HX_STACK_FRAME("haxor.io.UInt16Array","SetViewSlice",0x830ee1fb,"haxor.io.UInt16Array.SetViewSlice","haxor/io/UInt16Array.hx",141,0xf538efe0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_start,"p_start")
		HX_STACK_ARG(p_length,"p_length")
		HX_STACK_LINE(142)
		int tmp = p_start;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(142)
		int tmp1 = p_length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(142)
		this->super::SetViewSlice(tmp,tmp1);
	}
return null();
}


::haxor::io::UInt16Array UInt16Array_obj::Alloc( Array< int > p_data){
	HX_STACK_FRAME("haxor.io.UInt16Array","Alloc",0xeb8a0c25,"haxor.io.UInt16Array.Alloc","haxor/io/UInt16Array.hx",20,0xf538efe0)
	HX_STACK_ARG(p_data,"p_data")
	HX_STACK_LINE(21)
	::haxor::io::UInt16Array tmp = ::haxor::io::UInt16Array_obj::__new(p_data->length);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	::haxor::io::UInt16Array b = tmp;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(22)
	Array< int > tmp1 = p_data;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	b->SetRange(tmp1,null());
	HX_STACK_LINE(23)
	::haxor::io::UInt16Array tmp2 = b;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(23)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UInt16Array_obj,Alloc,return )

::haxor::io::UInt16Array UInt16Array_obj::Parse( ::String p_data,::String __o_p_delimiter,hx::Null< bool >  __o_p_is_byte){
::String p_delimiter = __o_p_delimiter.Default(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
bool p_is_byte = __o_p_is_byte.Default(false);
	HX_STACK_FRAME("haxor.io.UInt16Array","Parse",0x874bf7e3,"haxor.io.UInt16Array.Parse","haxor/io/UInt16Array.hx",157,0xf538efe0)
	HX_STACK_ARG(p_data,"p_data")
	HX_STACK_ARG(p_delimiter,"p_delimiter")
	HX_STACK_ARG(p_is_byte,"p_is_byte")
{
		HX_STACK_LINE(158)
		::String tmp = p_delimiter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(158)
		Array< ::String > tmp1 = p_data.split(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(158)
		Array< ::String > tk = tmp1;		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(159)
		int len = tk->length;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(160)
		bool tmp2 = p_is_byte;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(160)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(160)
		if ((tmp2)){
			HX_STACK_LINE(160)
			Float tmp4 = (Float(len) / Float((int)2));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(160)
			tmp3 = ::Std_obj::_int(tmp4);
		}
		else{
			HX_STACK_LINE(160)
			tmp3 = len;
		}
		HX_STACK_LINE(160)
		::haxor::io::UInt16Array tmp4 = ::haxor::io::UInt16Array_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(160)
		::haxor::io::UInt16Array res = tmp4;		HX_STACK_VAR(res,"res");
		HX_STACK_LINE(161)
		{
			HX_STACK_LINE(161)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(161)
			while((true)){
				HX_STACK_LINE(161)
				bool tmp5 = (_g < len);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(161)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(161)
				if ((tmp6)){
					HX_STACK_LINE(161)
					break;
				}
				HX_STACK_LINE(161)
				int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(161)
				int i = tmp7;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(163)
				bool tmp8 = p_is_byte;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(163)
				if ((tmp8)){
					HX_STACK_LINE(165)
					::String tmp9 = tk->__get(i);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(165)
					::String tmp10 = ::StringTools_obj::trim(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(165)
					Dynamic tmp11 = ::Std_obj::parseInt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(165)
					int v = tmp11;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(166)
					int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(166)
					int tmp13 = v;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(166)
					res->SetByte(tmp12,tmp13);
				}
				else{
					HX_STACK_LINE(170)
					::String tmp9 = tk->__get(i);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(170)
					::String tmp10 = ::StringTools_obj::trim(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(170)
					Dynamic tmp11 = ::Std_obj::parseInt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(170)
					int v = tmp11;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(171)
					int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(171)
					int tmp13 = v;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(171)
					res->Set(tmp12,tmp13);
				}
			}
		}
		HX_STACK_LINE(174)
		::haxor::io::UInt16Array tmp5 = res;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(174)
		return tmp5;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(UInt16Array_obj,Parse,return )


UInt16Array_obj::UInt16Array_obj()
{
}

Dynamic UInt16Array_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"Get") ) { return Get_dyn(); }
		if (HX_FIELD_EQ(inName,"Set") ) { return Set_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"Resize") ) { return Resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ToArray") ) { return ToArray_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"SetRange") ) { return SetRange_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"SetViewSlice") ) { return SetViewSlice_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_bytesPerElement") ) { return get_bytesPerElement_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool UInt16Array_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"Alloc") ) { outValue = Alloc_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Parse") ) { outValue = Parse_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get_bytesPerElement","\xc1","\x36","\x94","\xa3"),
	HX_HCSTRING("Resize","\x14","\xce","\x0f","\x3d"),
	HX_HCSTRING("Get","\x76","\x38","\x36","\x00"),
	HX_HCSTRING("Set","\x82","\x53","\x3f","\x00"),
	HX_HCSTRING("SetRange","\xdb","\xca","\x05","\xcc"),
	HX_HCSTRING("ToArray","\xfe","\xe1","\x64","\xbf"),
	HX_HCSTRING("SetViewSlice","\xcb","\x3f","\xbe","\xab"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UInt16Array_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UInt16Array_obj::__mClass,"__mClass");
};

#endif

hx::Class UInt16Array_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("Alloc","\x55","\x14","\xc1","\xb4"),
	HX_HCSTRING("Parse","\x13","\x00","\x83","\x50"),
	String(null()) };

void UInt16Array_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.io.UInt16Array","\x3e","\x9c","\x4e","\xbd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &UInt16Array_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< UInt16Array_obj >;
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
} // end namespace io
