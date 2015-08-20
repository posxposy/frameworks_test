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
#ifndef INCLUDED_haxor_io_Int32Array
#include <haxor/io/Int32Array.h>
#endif
namespace haxor{
namespace io{

Void Int32Array_obj::__construct(int p_length)
{
HX_STACK_FRAME("haxor.io.Int32Array","new",0xac0b1c59,"haxor.io.Int32Array.new","haxor/io/Int32Array.hx",14,0xda7d9697)
HX_STACK_THIS(this)
HX_STACK_ARG(p_length,"p_length")
{
	HX_STACK_LINE(14)
	int tmp = p_length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	super::__construct(tmp);
}
;
	return null();
}

//Int32Array_obj::~Int32Array_obj() { }

Dynamic Int32Array_obj::__CreateEmpty() { return  new Int32Array_obj; }
hx::ObjectPtr< Int32Array_obj > Int32Array_obj::__new(int p_length)
{  hx::ObjectPtr< Int32Array_obj > _result_ = new Int32Array_obj();
	_result_->__construct(p_length);
	return _result_;}

Dynamic Int32Array_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Int32Array_obj > _result_ = new Int32Array_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

int Int32Array_obj::get_bytesPerElement( ){
	HX_STACK_FRAME("haxor.io.Int32Array","get_bytesPerElement",0x3af8c4ba,"haxor.io.Int32Array.get_bytesPerElement","haxor/io/Int32Array.hx",40,0xda7d9697)
	HX_STACK_THIS(this)
	HX_STACK_LINE(40)
	return (int)4;
}


Void Int32Array_obj::Resize( int p_length){
{
		HX_STACK_FRAME("haxor.io.Int32Array","Resize",0xb54f83bb,"haxor.io.Int32Array.Resize","haxor/io/Int32Array.hx",47,0xda7d9697)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_length,"p_length")
		HX_STACK_LINE(48)
		int tmp = p_length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		this->super::Resize(tmp);
	}
return null();
}


int Int32Array_obj::Get( int p_index){
	HX_STACK_FRAME("haxor.io.Int32Array","Get",0xabed846f,"haxor.io.Int32Array.Get","haxor/io/Int32Array.hx",64,0xda7d9697)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_index,"p_index")
	HX_STACK_LINE(71)
	::haxe::io::Bytes tmp = this->m_buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(71)
	::haxe::io::Bytes aux = tmp;		HX_STACK_VAR(aux,"aux");
	HX_STACK_LINE(72)
	int tmp1 = (p_index * (int)4);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(72)
	int p = tmp1;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(73)
	
		long v = 0;
		char* ptr = (char*)(&v);
		ptr[0] = (char) aux->b[p];
		ptr[1] = (char) aux->b[p + 1];
		ptr[2] = (char) aux->b[p + 2];
		ptr[3] = (char) aux->b[p + 3];
		return v;
		;
	HX_STACK_LINE(82)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(Int32Array_obj,Get,return )

Void Int32Array_obj::Set( int p_index,int p_value){
{
		HX_STACK_FRAME("haxor.io.Int32Array","Set",0xabf69f7b,"haxor.io.Int32Array.Set","haxor/io/Int32Array.hx",96,0xda7d9697)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_index,"p_index")
		HX_STACK_ARG(p_value,"p_value")
		HX_STACK_LINE(103)
		::haxe::io::Bytes tmp = this->m_buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(103)
		::haxe::io::Bytes aux = tmp;		HX_STACK_VAR(aux,"aux");
		HX_STACK_LINE(104)
		int tmp1 = (p_index * (int)4);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(104)
		int p = tmp1;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(105)
		
		long v   = p_value;
		char* ptr = (char*)(&v);
		aux->b[p]   = ptr[0];
		aux->b[p + 1] = ptr[1];		
		aux->b[p + 2] = ptr[2];		
		aux->b[p + 3] = ptr[3];				
		;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Int32Array_obj,Set,(void))

Void Int32Array_obj::SetRange( Array< int > p_data,hx::Null< int >  __o_p_offset){
int p_offset = __o_p_offset.Default(0);
	HX_STACK_FRAME("haxor.io.Int32Array","SetRange",0x9bdb7842,"haxor.io.Int32Array.SetRange","haxor/io/Int32Array.hx",127,0xda7d9697)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_data,"p_data")
	HX_STACK_ARG(p_offset,"p_offset")
{
		HX_STACK_LINE(127)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(127)
		int _g = p_data->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(127)
		while((true)){
			HX_STACK_LINE(127)
			bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(127)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(127)
			if ((tmp1)){
				HX_STACK_LINE(127)
				break;
			}
			HX_STACK_LINE(127)
			int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(127)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(127)
			int tmp3 = (i + p_offset);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(127)
			int tmp4 = p_data->__get(i);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(127)
			this->Set(tmp3,tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Int32Array_obj,SetRange,(void))

Array< int > Int32Array_obj::ToArray( ){
	HX_STACK_FRAME("haxor.io.Int32Array","ToArray",0x7ee41e77,"haxor.io.Int32Array.ToArray","haxor/io/Int32Array.hx",135,0xda7d9697)
	HX_STACK_THIS(this)
	HX_STACK_LINE(136)
	Array< int > tmp = Array_obj< int >::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(136)
	Array< int > res = tmp;		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(137)
	{
		HX_STACK_LINE(137)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(137)
		int tmp1 = this->m_length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(137)
		int _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(137)
		while((true)){
			HX_STACK_LINE(137)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(137)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(137)
			if ((tmp3)){
				HX_STACK_LINE(137)
				break;
			}
			HX_STACK_LINE(137)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(137)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(137)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(137)
			int tmp6 = this->Get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(137)
			res->push(tmp6);
		}
	}
	HX_STACK_LINE(138)
	Array< int > tmp1 = res;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(138)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Int32Array_obj,ToArray,return )

Void Int32Array_obj::SetViewSlice( int p_start,int p_length){
{
		HX_STACK_FRAME("haxor.io.Int32Array","SetViewSlice",0x2ab42cb2,"haxor.io.Int32Array.SetViewSlice","haxor/io/Int32Array.hx",147,0xda7d9697)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_start,"p_start")
		HX_STACK_ARG(p_length,"p_length")
		HX_STACK_LINE(148)
		int tmp = p_start;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(148)
		int tmp1 = p_length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(148)
		this->super::SetViewSlice(tmp,tmp1);
	}
return null();
}


::haxor::io::Int32Array Int32Array_obj::Alloc( Array< int > p_data){
	HX_STACK_FRAME("haxor.io.Int32Array","Alloc",0x35de108e,"haxor.io.Int32Array.Alloc","haxor/io/Int32Array.hx",22,0xda7d9697)
	HX_STACK_ARG(p_data,"p_data")
	HX_STACK_LINE(23)
	::haxor::io::Int32Array tmp = ::haxor::io::Int32Array_obj::__new(p_data->length);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	::haxor::io::Int32Array b = tmp;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(24)
	Array< int > tmp1 = p_data;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	b->SetRange(tmp1,null());
	HX_STACK_LINE(25)
	::haxor::io::Int32Array tmp2 = b;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(25)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int32Array_obj,Alloc,return )

::haxor::io::Int32Array Int32Array_obj::Parse( ::String p_data,::String __o_p_delimiter,hx::Null< bool >  __o_p_is_byte){
::String p_delimiter = __o_p_delimiter.Default(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
bool p_is_byte = __o_p_is_byte.Default(false);
	HX_STACK_FRAME("haxor.io.Int32Array","Parse",0xd19ffc4c,"haxor.io.Int32Array.Parse","haxor/io/Int32Array.hx",163,0xda7d9697)
	HX_STACK_ARG(p_data,"p_data")
	HX_STACK_ARG(p_delimiter,"p_delimiter")
	HX_STACK_ARG(p_is_byte,"p_is_byte")
{
		HX_STACK_LINE(164)
		::String tmp = p_delimiter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(164)
		Array< ::String > tmp1 = p_data.split(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(164)
		Array< ::String > tk = tmp1;		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(165)
		int len = tk->length;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(166)
		bool tmp2 = p_is_byte;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(166)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(166)
		if ((tmp2)){
			HX_STACK_LINE(166)
			Float tmp4 = (Float(len) / Float((int)4));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(166)
			tmp3 = ::Std_obj::_int(tmp4);
		}
		else{
			HX_STACK_LINE(166)
			tmp3 = len;
		}
		HX_STACK_LINE(166)
		::haxor::io::Int32Array tmp4 = ::haxor::io::Int32Array_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(166)
		::haxor::io::Int32Array res = tmp4;		HX_STACK_VAR(res,"res");
		HX_STACK_LINE(167)
		{
			HX_STACK_LINE(167)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(167)
			while((true)){
				HX_STACK_LINE(167)
				bool tmp5 = (_g < len);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(167)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(167)
				if ((tmp6)){
					HX_STACK_LINE(167)
					break;
				}
				HX_STACK_LINE(167)
				int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(167)
				int i = tmp7;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(169)
				bool tmp8 = p_is_byte;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(169)
				if ((tmp8)){
					HX_STACK_LINE(171)
					::String tmp9 = tk->__get(i);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(171)
					::String tmp10 = ::StringTools_obj::trim(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(171)
					Dynamic tmp11 = ::Std_obj::parseInt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(171)
					int v = tmp11;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(172)
					int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(172)
					int tmp13 = v;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(172)
					res->SetByte(tmp12,tmp13);
				}
				else{
					HX_STACK_LINE(176)
					::String tmp9 = tk->__get(i);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(176)
					::String tmp10 = ::StringTools_obj::trim(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(176)
					Dynamic tmp11 = ::Std_obj::parseInt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(176)
					int v = tmp11;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(177)
					int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(177)
					int tmp13 = v;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(177)
					res->Set(tmp12,tmp13);
				}
			}
		}
		HX_STACK_LINE(180)
		::haxor::io::Int32Array tmp5 = res;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(180)
		return tmp5;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Int32Array_obj,Parse,return )


Int32Array_obj::Int32Array_obj()
{
}

Dynamic Int32Array_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

bool Int32Array_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(Int32Array_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Int32Array_obj::__mClass,"__mClass");
};

#endif

hx::Class Int32Array_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("Alloc","\x55","\x14","\xc1","\xb4"),
	HX_HCSTRING("Parse","\x13","\x00","\x83","\x50"),
	String(null()) };

void Int32Array_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.io.Int32Array","\xe7","\xfb","\xa5","\xc1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Int32Array_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Int32Array_obj >;
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
