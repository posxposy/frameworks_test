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
#ifndef INCLUDED_haxor_io_FloatArray
#include <haxor/io/FloatArray.h>
#endif
namespace haxor{
namespace io{

Void FloatArray_obj::__construct(int p_length)
{
HX_STACK_FRAME("haxor.io.FloatArray","new",0x4aef304b,"haxor.io.FloatArray.new","haxor/io/FloatArray.hx",16,0xf103c6e5)
HX_STACK_THIS(this)
HX_STACK_ARG(p_length,"p_length")
{
	HX_STACK_LINE(16)
	int tmp = p_length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	super::__construct(tmp);
}
;
	return null();
}

//FloatArray_obj::~FloatArray_obj() { }

Dynamic FloatArray_obj::__CreateEmpty() { return  new FloatArray_obj; }
hx::ObjectPtr< FloatArray_obj > FloatArray_obj::__new(int p_length)
{  hx::ObjectPtr< FloatArray_obj > _result_ = new FloatArray_obj();
	_result_->__construct(p_length);
	return _result_;}

Dynamic FloatArray_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FloatArray_obj > _result_ = new FloatArray_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

int FloatArray_obj::get_bytesPerElement( ){
	HX_STACK_FRAME("haxor.io.FloatArray","get_bytesPerElement",0xc4ef5cac,"haxor.io.FloatArray.get_bytesPerElement","haxor/io/FloatArray.hx",48,0xf103c6e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(48)
	return (int)4;
}


Void FloatArray_obj::Resize( int p_length){
{
		HX_STACK_FRAME("haxor.io.FloatArray","Resize",0xabeef309,"haxor.io.FloatArray.Resize","haxor/io/FloatArray.hx",63,0xf103c6e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_length,"p_length")
		HX_STACK_LINE(64)
		int tmp = p_length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(64)
		this->super::Resize(tmp);
	}
return null();
}


Float FloatArray_obj::Get( int p_index){
	HX_STACK_FRAME("haxor.io.FloatArray","Get",0x4ad19861,"haxor.io.FloatArray.Get","haxor/io/FloatArray.hx",80,0xf103c6e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_index,"p_index")
	HX_STACK_LINE(87)
	::haxe::io::Bytes tmp = this->m_buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(87)
	::haxe::io::Bytes aux = tmp;		HX_STACK_VAR(aux,"aux");
	HX_STACK_LINE(88)
	int tmp1 = (p_index * (int)4);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(88)
	int p = tmp1;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(89)
	
		float v = 0.0;
		char* ptr = (char*)(&v);
		ptr[0] = (char) aux->b[p];
		ptr[1] = (char) aux->b[p+1];
		ptr[2] = (char) aux->b[p+2];
		ptr[3] = (char) aux->b[p+3];
		return v;
		;
	HX_STACK_LINE(98)
	return ((Float)0.0);
}


HX_DEFINE_DYNAMIC_FUNC1(FloatArray_obj,Get,return )

Void FloatArray_obj::Set( int p_index,Float p_value){
{
		HX_STACK_FRAME("haxor.io.FloatArray","Set",0x4adab36d,"haxor.io.FloatArray.Set","haxor/io/FloatArray.hx",112,0xf103c6e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_index,"p_index")
		HX_STACK_ARG(p_value,"p_value")
		HX_STACK_LINE(119)
		::haxe::io::Bytes tmp = this->m_buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(119)
		::haxe::io::Bytes aux = tmp;		HX_STACK_VAR(aux,"aux");
		HX_STACK_LINE(120)
		int tmp1 = (p_index * (int)4);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(120)
		int p = tmp1;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(121)
		
		float v   = p_value;
		char * ptr = (char * )( & v);		
		aux->b[p]   = ptr[0];
		aux->b[p+1] = ptr[1];
		aux->b[p+2] = ptr[2];
		aux->b[p+3] = ptr[3];
		;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FloatArray_obj,Set,(void))

Void FloatArray_obj::SetRange( Array< Float > p_data,hx::Null< int >  __o_p_offset){
int p_offset = __o_p_offset.Default(0);
	HX_STACK_FRAME("haxor.io.FloatArray","SetRange",0x0cafd710,"haxor.io.FloatArray.SetRange","haxor/io/FloatArray.hx",143,0xf103c6e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_data,"p_data")
	HX_STACK_ARG(p_offset,"p_offset")
{
		HX_STACK_LINE(143)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(143)
		int _g = p_data->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(143)
		while((true)){
			HX_STACK_LINE(143)
			bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(143)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(143)
			if ((tmp1)){
				HX_STACK_LINE(143)
				break;
			}
			HX_STACK_LINE(143)
			int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(143)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(143)
			int tmp3 = (i + p_offset);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(143)
			Float tmp4 = p_data->__get(i);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(143)
			this->Set(tmp3,tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FloatArray_obj,SetRange,(void))

Array< Float > FloatArray_obj::ToArray( ){
	HX_STACK_FRAME("haxor.io.FloatArray","ToArray",0x53c61369,"haxor.io.FloatArray.ToArray","haxor/io/FloatArray.hx",151,0xf103c6e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(152)
	Array< Float > tmp = Array_obj< Float >::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(152)
	Array< Float > res = tmp;		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(153)
	{
		HX_STACK_LINE(153)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(153)
		int tmp1 = this->m_length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(153)
		int _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(153)
		while((true)){
			HX_STACK_LINE(153)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(153)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(153)
			if ((tmp3)){
				HX_STACK_LINE(153)
				break;
			}
			HX_STACK_LINE(153)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(153)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(153)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(153)
			Float tmp6 = this->Get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(153)
			res->push(tmp6);
		}
	}
	HX_STACK_LINE(154)
	Array< Float > tmp1 = res;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(154)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FloatArray_obj,ToArray,return )

Void FloatArray_obj::SetViewSlice( int p_start,int p_length){
{
		HX_STACK_FRAME("haxor.io.FloatArray","SetViewSlice",0xdc9b0a80,"haxor.io.FloatArray.SetViewSlice","haxor/io/FloatArray.hx",163,0xf103c6e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_start,"p_start")
		HX_STACK_ARG(p_length,"p_length")
		HX_STACK_LINE(164)
		int tmp = p_start;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(164)
		int tmp1 = p_length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(164)
		this->super::SetViewSlice(tmp,tmp1);
	}
return null();
}


::haxor::io::FloatArray FloatArray_obj::Alloc( Array< Float > p_data){
	HX_STACK_FRAME("haxor.io.FloatArray","Alloc",0x64e48500,"haxor.io.FloatArray.Alloc","haxor/io/FloatArray.hx",25,0xf103c6e5)
	HX_STACK_ARG(p_data,"p_data")
	HX_STACK_LINE(26)
	::haxor::io::FloatArray tmp = ::haxor::io::FloatArray_obj::__new(p_data->length);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	::haxor::io::FloatArray b = tmp;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(27)
	Array< Float > tmp1 = p_data;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	b->SetRange(tmp1,null());
	HX_STACK_LINE(28)
	::haxor::io::FloatArray tmp2 = b;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(28)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FloatArray_obj,Alloc,return )

::haxor::io::FloatArray FloatArray_obj::FromBase64( ::String p_data){
	HX_STACK_FRAME("haxor.io.FloatArray","FromBase64",0xd78a4a2e,"haxor.io.FloatArray.FromBase64","haxor/io/FloatArray.hx",37,0xf103c6e5)
	HX_STACK_ARG(p_data,"p_data")
	HX_STACK_LINE(38)
	Float tmp = (Float(p_data.length) / Float((int)4));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(38)
	::haxor::io::FloatArray tmp2 = ::haxor::io::FloatArray_obj::__new(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(38)
	::haxor::io::FloatArray b = tmp2;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(39)
	::String tmp3 = p_data;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(39)
	b->SetString(tmp3,null());
	HX_STACK_LINE(40)
	b->DecodeBase64();
	HX_STACK_LINE(41)
	::haxor::io::FloatArray tmp4 = b;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(41)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FloatArray_obj,FromBase64,return )

::haxor::io::FloatArray FloatArray_obj::Parse( ::String p_data,::String __o_p_delimiter,hx::Null< bool >  __o_p_is_byte){
::String p_delimiter = __o_p_delimiter.Default(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
bool p_is_byte = __o_p_is_byte.Default(false);
	HX_STACK_FRAME("haxor.io.FloatArray","Parse",0x00a670be,"haxor.io.FloatArray.Parse","haxor/io/FloatArray.hx",179,0xf103c6e5)
	HX_STACK_ARG(p_data,"p_data")
	HX_STACK_ARG(p_delimiter,"p_delimiter")
	HX_STACK_ARG(p_is_byte,"p_is_byte")
{
		HX_STACK_LINE(180)
		::String tmp = p_delimiter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(180)
		Array< ::String > tmp1 = p_data.split(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(180)
		Array< ::String > tk = tmp1;		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(181)
		int len = tk->length;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(182)
		bool tmp2 = p_is_byte;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(182)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(182)
		if ((tmp2)){
			HX_STACK_LINE(182)
			Float tmp4 = (Float(len) / Float((int)4));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(182)
			tmp3 = ::Std_obj::_int(tmp4);
		}
		else{
			HX_STACK_LINE(182)
			tmp3 = len;
		}
		HX_STACK_LINE(182)
		::haxor::io::FloatArray tmp4 = ::haxor::io::FloatArray_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(182)
		::haxor::io::FloatArray res = tmp4;		HX_STACK_VAR(res,"res");
		HX_STACK_LINE(183)
		{
			HX_STACK_LINE(183)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(183)
			while((true)){
				HX_STACK_LINE(183)
				bool tmp5 = (_g < len);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(183)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(183)
				if ((tmp6)){
					HX_STACK_LINE(183)
					break;
				}
				HX_STACK_LINE(183)
				int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(183)
				int i = tmp7;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(185)
				bool tmp8 = p_is_byte;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(185)
				if ((tmp8)){
					HX_STACK_LINE(187)
					::String tmp9 = tk->__get(i);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(187)
					::String tmp10 = ::StringTools_obj::trim(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(187)
					Dynamic tmp11 = ::Std_obj::parseInt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(187)
					int v = tmp11;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(188)
					int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(188)
					int tmp13 = v;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(188)
					res->SetByte(tmp12,tmp13);
				}
				else{
					HX_STACK_LINE(192)
					::String tmp9 = tk->__get(i);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(192)
					::String tmp10 = ::StringTools_obj::trim(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(192)
					Float tmp11 = ::Std_obj::parseFloat(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(192)
					Float v = tmp11;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(193)
					int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(193)
					Float tmp13 = v;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(193)
					res->Set(tmp12,tmp13);
				}
			}
		}
		HX_STACK_LINE(196)
		::haxor::io::FloatArray tmp5 = res;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(196)
		return tmp5;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FloatArray_obj,Parse,return )


FloatArray_obj::FloatArray_obj()
{
}

Dynamic FloatArray_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

bool FloatArray_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"Alloc") ) { outValue = Alloc_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Parse") ) { outValue = Parse_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"FromBase64") ) { outValue = FromBase64_dyn(); return true;  }
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
	HX_MARK_MEMBER_NAME(FloatArray_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FloatArray_obj::__mClass,"__mClass");
};

#endif

hx::Class FloatArray_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("Alloc","\x55","\x14","\xc1","\xb4"),
	HX_HCSTRING("FromBase64","\xb9","\x06","\x1d","\x8f"),
	HX_HCSTRING("Parse","\x13","\x00","\x83","\x50"),
	String(null()) };

void FloatArray_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.io.FloatArray","\xd9","\xae","\x50","\x99");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FloatArray_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FloatArray_obj >;
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
