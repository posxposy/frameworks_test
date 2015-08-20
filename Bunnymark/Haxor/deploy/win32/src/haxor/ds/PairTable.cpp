#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_haxor_ds_PairTable
#include <haxor/ds/PairTable.h>
#endif
namespace haxor{
namespace ds{

Void PairTable_obj::__construct(int p_count,Dynamic p_default,hx::Null< bool >  __o_p_mirror)
{
HX_STACK_FRAME("haxor.ds.PairTable","new",0xa64462f3,"haxor.ds.PairTable.new","haxor/ds/PairTable.hx",39,0xfd9d227d)
HX_STACK_THIS(this)
HX_STACK_ARG(p_count,"p_count")
HX_STACK_ARG(p_default,"p_default")
HX_STACK_ARG(__o_p_mirror,"p_mirror")
bool p_mirror = __o_p_mirror.Default(false);
{
	HX_STACK_LINE(40)
	this->m_mirror = p_mirror;
	HX_STACK_LINE(41)
	Dynamic tmp = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	this->m_table = tmp;
	HX_STACK_LINE(43)
	bool tmp1 = p_mirror;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(43)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(43)
	if ((tmp1)){
		HX_STACK_LINE(43)
		tmp2 = (int)0;
	}
	else{
		HX_STACK_LINE(43)
		tmp2 = p_count;
	}
	HX_STACK_LINE(43)
	int lc = tmp2;		HX_STACK_VAR(lc,"lc");
	HX_STACK_LINE(44)
	{
		HX_STACK_LINE(44)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(44)
		while((true)){
			HX_STACK_LINE(44)
			bool tmp3 = (_g < p_count);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(44)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(44)
			if ((tmp4)){
				HX_STACK_LINE(44)
				break;
			}
			HX_STACK_LINE(44)
			int tmp5 = (_g)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(44)
			int i = tmp5;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(46)
			Dynamic tmp6 = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(46)
			Dynamic l = tmp6;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(47)
			Dynamic tmp7 = this->m_table;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(47)
			Dynamic tmp8 = l;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(47)
			tmp7->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp8);
			HX_STACK_LINE(48)
			{
				HX_STACK_LINE(48)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(48)
				while((true)){
					HX_STACK_LINE(48)
					bool tmp9 = (_g1 < lc);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(48)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(48)
					if ((tmp10)){
						HX_STACK_LINE(48)
						break;
					}
					HX_STACK_LINE(48)
					int tmp11 = (_g1)++;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(48)
					int j = tmp11;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(50)
					Dynamic tmp12 = p_default;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(50)
					l->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp12);
				}
			}
			HX_STACK_LINE(52)
			bool tmp9 = p_mirror;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(52)
			if ((tmp9)){
				HX_STACK_LINE(52)
				(lc)++;
			}
		}
	}
}
;
	return null();
}

//PairTable_obj::~PairTable_obj() { }

Dynamic PairTable_obj::__CreateEmpty() { return  new PairTable_obj; }
hx::ObjectPtr< PairTable_obj > PairTable_obj::__new(int p_count,Dynamic p_default,hx::Null< bool >  __o_p_mirror)
{  hx::ObjectPtr< PairTable_obj > _result_ = new PairTable_obj();
	_result_->__construct(p_count,p_default,__o_p_mirror);
	return _result_;}

Dynamic PairTable_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PairTable_obj > _result_ = new PairTable_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

bool PairTable_obj::get_mirror( ){
	HX_STACK_FRAME("haxor.ds.PairTable","get_mirror",0xdb4f17d5,"haxor.ds.PairTable.get_mirror","haxor/ds/PairTable.hx",14,0xfd9d227d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(14)
	bool tmp = this->m_mirror;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(PairTable_obj,get_mirror,return )

int PairTable_obj::get_rows( ){
	HX_STACK_FRAME("haxor.ds.PairTable","get_rows",0x809de92f,"haxor.ds.PairTable.get_rows","haxor/ds/PairTable.hx",21,0xfd9d227d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(21)
	Dynamic tmp = this->m_table;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	int tmp1 = tmp->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(21)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(PairTable_obj,get_rows,return )

int PairTable_obj::get_cols( ){
	HX_STACK_FRAME("haxor.ds.PairTable","get_cols",0x76b3ac49,"haxor.ds.PairTable.get_cols","haxor/ds/PairTable.hx",27,0xfd9d227d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(27)
	Dynamic tmp = this->m_table;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	int tmp1 = tmp->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(PairTable_obj,get_cols,return )

Dynamic PairTable_obj::Get( int p_x,int p_y){
	HX_STACK_FRAME("haxor.ds.PairTable","Get",0xa626cb09,"haxor.ds.PairTable.Get","haxor/ds/PairTable.hx",63,0xfd9d227d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_x,"p_x")
	HX_STACK_ARG(p_y,"p_y")
	HX_STACK_LINE(64)
	bool tmp = this->get_mirror();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	if ((tmp)){
		HX_STACK_LINE(65)
		Dynamic tmp1 = this->m_table;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(65)
		Float tmp2 = ((Float)(p_x));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(65)
		Float tmp3 = ((Float)(p_y));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(65)
		Float tmp4 = ::Math_obj::max(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(65)
		int tmp5 = ((int)(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(65)
		Dynamic tmp6 = tmp1->__GetItem(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(65)
		Float tmp7 = ((Float)(p_x));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(65)
		Float tmp8 = ((Float)(p_y));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(65)
		Float tmp9 = ::Math_obj::min(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(65)
		int tmp10 = ((int)(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(65)
		Dynamic tmp11 = tmp6->__GetItem(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(65)
		return tmp11;
	}
	HX_STACK_LINE(66)
	Dynamic tmp1 = this->m_table;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(66)
	int tmp2 = p_x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(66)
	Dynamic tmp3 = tmp1->__GetItem(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(66)
	int tmp4 = p_y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(66)
	Dynamic tmp5 = tmp3->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(66)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(PairTable_obj,Get,return )

Void PairTable_obj::Set( int p_x,int p_y,Dynamic p_value){
{
		HX_STACK_FRAME("haxor.ds.PairTable","Set",0xa62fe615,"haxor.ds.PairTable.Set","haxor/ds/PairTable.hx",76,0xfd9d227d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_x,"p_x")
		HX_STACK_ARG(p_y,"p_y")
		HX_STACK_ARG(p_value,"p_value")
		HX_STACK_LINE(77)
		bool tmp = this->get_mirror();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(77)
		if ((tmp)){
			HX_STACK_LINE(78)
			Dynamic tmp1 = this->m_table;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(78)
			Float tmp2 = ((Float)(p_x));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(78)
			Float tmp3 = ((Float)(p_y));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(78)
			Float tmp4 = ::Math_obj::max(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(78)
			int tmp5 = ((int)(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(78)
			Dynamic tmp6 = tmp1->__GetItem(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(78)
			Float tmp7 = ((Float)(p_x));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(78)
			Float tmp8 = ((Float)(p_y));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(78)
			Float tmp9 = ::Math_obj::min(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(78)
			int tmp10 = ((int)(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(78)
			Dynamic tmp11 = p_value;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(78)
			hx::IndexRef((tmp6).mPtr,tmp10) = tmp11;
			HX_STACK_LINE(78)
			return null();
		}
		HX_STACK_LINE(79)
		Dynamic tmp1 = this->m_table;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(79)
		int tmp2 = p_x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(79)
		Dynamic tmp3 = tmp1->__GetItem(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(79)
		int tmp4 = p_y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(79)
		Dynamic tmp5 = p_value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(79)
		hx::IndexRef((tmp3).mPtr,tmp4) = tmp5;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(PairTable_obj,Set,(void))

Dynamic PairTable_obj::Line( int p_index){
	HX_STACK_FRAME("haxor.ds.PairTable","Line",0xbf1bf221,"haxor.ds.PairTable.Line","haxor/ds/PairTable.hx",87,0xfd9d227d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_index,"p_index")
	HX_STACK_LINE(87)
	Dynamic tmp = this->m_table;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(87)
	int tmp1 = p_index;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(87)
	Dynamic tmp2 = tmp->__GetItem(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(87)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(PairTable_obj,Line,return )

Void PairTable_obj::Iterate( Dynamic p_callback){
{
		HX_STACK_FRAME("haxor.ds.PairTable","Iterate",0x32aa79ed,"haxor.ds.PairTable.Iterate","haxor/ds/PairTable.hx",96,0xfd9d227d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_callback,"p_callback")
		HX_STACK_LINE(96)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(96)
		Dynamic tmp = this->m_table;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(96)
		int _g = tmp->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(96)
		while((true)){
			HX_STACK_LINE(96)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(96)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(96)
			if ((tmp2)){
				HX_STACK_LINE(96)
				break;
			}
			HX_STACK_LINE(96)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(96)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(98)
			Dynamic tmp4 = this->m_table;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(98)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(98)
			Dynamic tmp6 = tmp4->__GetItem(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(98)
			Dynamic l = tmp6;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(99)
			{
				HX_STACK_LINE(99)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(99)
				int _g2 = l->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(99)
				while((true)){
					HX_STACK_LINE(99)
					bool tmp7 = (_g3 < _g2);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(99)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(99)
					if ((tmp8)){
						HX_STACK_LINE(99)
						break;
					}
					HX_STACK_LINE(99)
					int tmp9 = (_g3)++;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(99)
					int j = tmp9;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(101)
					int tmp10 = j;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(101)
					int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(101)
					Dynamic tmp12 = l->__GetItem(j);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(101)
					p_callback(tmp10,tmp11,tmp12).Cast< Void >();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PairTable_obj,Iterate,(void))


PairTable_obj::PairTable_obj()
{
}

void PairTable_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PairTable);
	HX_MARK_MEMBER_NAME(m_mirror,"m_mirror");
	HX_MARK_MEMBER_NAME(m_table,"m_table");
	HX_MARK_END_CLASS();
}

void PairTable_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_mirror,"m_mirror");
	HX_VISIT_MEMBER_NAME(m_table,"m_table");
}

Dynamic PairTable_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"Get") ) { return Get_dyn(); }
		if (HX_FIELD_EQ(inName,"Set") ) { return Set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { if (inCallProp == hx::paccAlways) return get_rows(); }
		if (HX_FIELD_EQ(inName,"cols") ) { if (inCallProp == hx::paccAlways) return get_cols(); }
		if (HX_FIELD_EQ(inName,"Line") ) { return Line_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mirror") ) { if (inCallProp == hx::paccAlways) return get_mirror(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_table") ) { return m_table; }
		if (HX_FIELD_EQ(inName,"Iterate") ) { return Iterate_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_mirror") ) { return m_mirror; }
		if (HX_FIELD_EQ(inName,"get_rows") ) { return get_rows_dyn(); }
		if (HX_FIELD_EQ(inName,"get_cols") ) { return get_cols_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_mirror") ) { return get_mirror_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PairTable_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"m_table") ) { m_table=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_mirror") ) { m_mirror=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PairTable_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void PairTable_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("mirror","\x3f","\x72","\xaa","\x55"));
	outFields->push(HX_HCSTRING("m_mirror","\x11","\x1b","\x9c","\x1e"));
	outFields->push(HX_HCSTRING("rows","\x19","\xf5","\xae","\x4b"));
	outFields->push(HX_HCSTRING("cols","\x33","\xb8","\xc4","\x41"));
	outFields->push(HX_HCSTRING("m_table","\x7c","\x8f","\x6e","\xbb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(PairTable_obj,m_mirror),HX_HCSTRING("m_mirror","\x11","\x1b","\x9c","\x1e")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(PairTable_obj,m_table),HX_HCSTRING("m_table","\x7c","\x8f","\x6e","\xbb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get_mirror","\x08","\xe2","\x31","\x46"),
	HX_HCSTRING("m_mirror","\x11","\x1b","\x9c","\x1e"),
	HX_HCSTRING("get_rows","\xa2","\xb0","\x69","\xcb"),
	HX_HCSTRING("get_cols","\xbc","\x73","\x7f","\xc1"),
	HX_HCSTRING("m_table","\x7c","\x8f","\x6e","\xbb"),
	HX_HCSTRING("Get","\x76","\x38","\x36","\x00"),
	HX_HCSTRING("Set","\x82","\x53","\x3f","\x00"),
	HX_HCSTRING("Line","\x14","\x44","\x8c","\x32"),
	HX_HCSTRING("Iterate","\xda","\xa1","\x21","\xb0"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PairTable_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PairTable_obj::__mClass,"__mClass");
};

#endif

hx::Class PairTable_obj::__mClass;

void PairTable_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.ds.PairTable","\x81","\x6d","\x1d","\x41");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &PairTable_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PairTable_obj >;
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
} // end namespace ds
