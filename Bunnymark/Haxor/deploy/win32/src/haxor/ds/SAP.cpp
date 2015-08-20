#include <hxcpp.h>

#ifndef INCLUDED_haxor_ds_SAP
#include <haxor/ds/SAP.h>
#endif
#ifndef INCLUDED_haxor_ds_SAPInterval
#include <haxor/ds/SAPInterval.h>
#endif
#ifndef INCLUDED_haxor_ds_SAPList
#include <haxor/ds/SAPList.h>
#endif
#ifndef INCLUDED_haxor_math_Vector3
#include <haxor/math/Vector3.h>
#endif
namespace haxor{
namespace ds{

Void SAP_obj::__construct(hx::Null< Float >  __o_p_bias,hx::Null< bool >  __o_p_has_query)
{
HX_STACK_FRAME("haxor.ds.SAP","new",0x1bdf50c1,"haxor.ds.SAP.new","haxor/ds/SAP.hx",41,0xbaeeb06f)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_p_bias,"p_bias")
HX_STACK_ARG(__o_p_has_query,"p_has_query")
Float p_bias = __o_p_bias.Default(((Float)0.0));
bool p_has_query = __o_p_has_query.Default(true);
{
	HX_STACK_LINE(42)
	this->m_has_query = p_has_query;
	HX_STACK_LINE(43)
	Float tmp = p_bias;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	bool tmp1 = this->m_has_query;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(43)
	::haxor::ds::SAPList tmp2 = ::haxor::ds::SAPList_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(43)
	this->x = tmp2;
	HX_STACK_LINE(44)
	Float tmp3 = p_bias;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(44)
	bool tmp4 = this->m_has_query;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(44)
	::haxor::ds::SAPList tmp5 = ::haxor::ds::SAPList_obj::__new(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(44)
	this->y = tmp5;
	HX_STACK_LINE(45)
	Float tmp6 = p_bias;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(45)
	bool tmp7 = this->m_has_query;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(45)
	::haxor::ds::SAPList tmp8 = ::haxor::ds::SAPList_obj::__new(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(45)
	this->z = tmp8;
}
;
	return null();
}

//SAP_obj::~SAP_obj() { }

Dynamic SAP_obj::__CreateEmpty() { return  new SAP_obj; }
hx::ObjectPtr< SAP_obj > SAP_obj::__new(hx::Null< Float >  __o_p_bias,hx::Null< bool >  __o_p_has_query)
{  hx::ObjectPtr< SAP_obj > _result_ = new SAP_obj();
	_result_->__construct(__o_p_bias,__o_p_has_query);
	return _result_;}

Dynamic SAP_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SAP_obj > _result_ = new SAP_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void SAP_obj::Create( int p_id){
{
		HX_STACK_FRAME("haxor.ds.SAP","Create",0xf9660d5b,"haxor.ds.SAP.Create","haxor/ds/SAP.hx",53,0xbaeeb06f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_id,"p_id")
		HX_STACK_LINE(54)
		::haxor::ds::SAPList tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(54)
		int tmp1 = p_id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(54)
		tmp->Create(tmp1);
		HX_STACK_LINE(55)
		::haxor::ds::SAPList tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(55)
		int tmp3 = p_id;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(55)
		tmp2->Create(tmp3);
		HX_STACK_LINE(56)
		::haxor::ds::SAPList tmp4 = this->z;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(56)
		int tmp5 = p_id;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(56)
		tmp4->Create(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SAP_obj,Create,(void))

Void SAP_obj::Update( int p_id,Dynamic p_data,::haxor::math::Vector3 p_min,::haxor::math::Vector3 p_max){
{
		HX_STACK_FRAME("haxor.ds.SAP","Update",0x045c2c68,"haxor.ds.SAP.Update","haxor/ds/SAP.hx",66,0xbaeeb06f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_id,"p_id")
		HX_STACK_ARG(p_data,"p_data")
		HX_STACK_ARG(p_min,"p_min")
		HX_STACK_ARG(p_max,"p_max")
		HX_STACK_LINE(67)
		::haxor::ds::SAPList tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(67)
		int tmp1 = p_id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(67)
		Dynamic tmp2 = p_data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(67)
		Float tmp3 = p_min->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(67)
		Float tmp4 = p_max->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(67)
		tmp->Update(tmp1,tmp2,tmp3,tmp4);
		HX_STACK_LINE(68)
		::haxor::ds::SAPList tmp5 = this->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(68)
		int tmp6 = p_id;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(68)
		Dynamic tmp7 = p_data;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(68)
		Float tmp8 = p_min->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(68)
		Float tmp9 = p_max->y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(68)
		tmp5->Update(tmp6,tmp7,tmp8,tmp9);
		HX_STACK_LINE(69)
		::haxor::ds::SAPList tmp10 = this->z;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(69)
		int tmp11 = p_id;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(69)
		Dynamic tmp12 = p_data;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(69)
		Float tmp13 = p_min->z;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(69)
		Float tmp14 = p_max->z;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(69)
		tmp10->Update(tmp11,tmp12,tmp13,tmp14);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(SAP_obj,Update,(void))

Void SAP_obj::Remove( int p_id){
{
		HX_STACK_FRAME("haxor.ds.SAP","Remove",0x81df42a3,"haxor.ds.SAP.Remove","haxor/ds/SAP.hx",77,0xbaeeb06f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_id,"p_id")
		HX_STACK_LINE(78)
		{
			HX_STACK_LINE(78)
			::haxor::ds::SAPList tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(78)
			::haxor::ds::SAPList _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(78)
			::haxor::ds::SAPInterval tmp1 = _this->list->__get(p_id).StaticCast< ::haxor::ds::SAPInterval >();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(78)
			_this->RemoveInterval(tmp1);
		}
		HX_STACK_LINE(79)
		{
			HX_STACK_LINE(79)
			::haxor::ds::SAPList tmp = this->y;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(79)
			::haxor::ds::SAPList _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(79)
			::haxor::ds::SAPInterval tmp1 = _this->list->__get(p_id).StaticCast< ::haxor::ds::SAPInterval >();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(79)
			_this->RemoveInterval(tmp1);
		}
		HX_STACK_LINE(80)
		{
			HX_STACK_LINE(80)
			::haxor::ds::SAPList tmp = this->z;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(80)
			::haxor::ds::SAPList _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(80)
			::haxor::ds::SAPInterval tmp1 = _this->list->__get(p_id).StaticCast< ::haxor::ds::SAPInterval >();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(80)
			_this->RemoveInterval(tmp1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SAP_obj,Remove,(void))

bool SAP_obj::Overlap( int p_a,int p_b){
	HX_STACK_FRAME("haxor.ds.SAP","Overlap",0xd78b3048,"haxor.ds.SAP.Overlap","haxor/ds/SAP.hx",90,0xbaeeb06f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_a,"p_a")
	HX_STACK_ARG(p_b,"p_b")
	HX_STACK_LINE(91)
	::haxor::ds::SAPInterval ia;		HX_STACK_VAR(ia,"ia");
	HX_STACK_LINE(92)
	::haxor::ds::SAPInterval ib;		HX_STACK_VAR(ib,"ib");
	HX_STACK_LINE(94)
	::haxor::ds::SAPList tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(94)
	Array< ::Dynamic > tmp1 = tmp->list;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(94)
	int tmp2 = p_a;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(94)
	::haxor::ds::SAPInterval tmp3 = tmp1->__get(tmp2).StaticCast< ::haxor::ds::SAPInterval >();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(94)
	ia = tmp3;
	HX_STACK_LINE(95)
	::haxor::ds::SAPList tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(95)
	Array< ::Dynamic > tmp5 = tmp4->list;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(95)
	int tmp6 = p_b;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(95)
	::haxor::ds::SAPInterval tmp7 = tmp5->__get(tmp6).StaticCast< ::haxor::ds::SAPInterval >();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(95)
	ib = tmp7;
	HX_STACK_LINE(96)
	::haxor::ds::SAPInterval tmp8 = ib;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(96)
	bool tmp9 = ia->Overlap(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(96)
	bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(96)
	if ((tmp10)){
		HX_STACK_LINE(96)
		return false;
	}
	HX_STACK_LINE(98)
	::haxor::ds::SAPList tmp11 = this->y;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(98)
	Array< ::Dynamic > tmp12 = tmp11->list;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(98)
	int tmp13 = p_a;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(98)
	::haxor::ds::SAPInterval tmp14 = tmp12->__get(tmp13).StaticCast< ::haxor::ds::SAPInterval >();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(98)
	ia = tmp14;
	HX_STACK_LINE(99)
	::haxor::ds::SAPList tmp15 = this->y;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(99)
	Array< ::Dynamic > tmp16 = tmp15->list;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(99)
	int tmp17 = p_b;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(99)
	::haxor::ds::SAPInterval tmp18 = tmp16->__get(tmp17).StaticCast< ::haxor::ds::SAPInterval >();		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(99)
	ib = tmp18;
	HX_STACK_LINE(100)
	::haxor::ds::SAPInterval tmp19 = ib;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(100)
	bool tmp20 = ia->Overlap(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(100)
	bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(100)
	if ((tmp21)){
		HX_STACK_LINE(100)
		return false;
	}
	HX_STACK_LINE(102)
	::haxor::ds::SAPList tmp22 = this->z;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(102)
	Array< ::Dynamic > tmp23 = tmp22->list;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(102)
	int tmp24 = p_a;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(102)
	::haxor::ds::SAPInterval tmp25 = tmp23->__get(tmp24).StaticCast< ::haxor::ds::SAPInterval >();		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(102)
	ia = tmp25;
	HX_STACK_LINE(103)
	::haxor::ds::SAPList tmp26 = this->z;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(103)
	Array< ::Dynamic > tmp27 = tmp26->list;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(103)
	int tmp28 = p_b;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(103)
	::haxor::ds::SAPInterval tmp29 = tmp27->__get(tmp28).StaticCast< ::haxor::ds::SAPInterval >();		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(103)
	ib = tmp29;
	HX_STACK_LINE(104)
	::haxor::ds::SAPInterval tmp30 = ib;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(104)
	bool tmp31 = ia->Overlap(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(104)
	bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(104)
	if ((tmp32)){
		HX_STACK_LINE(104)
		return false;
	}
	HX_STACK_LINE(105)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC2(SAP_obj,Overlap,return )

Void SAP_obj::Query( int p_id,Dynamic p_on_fetch){
{
		HX_STACK_FRAME("haxor.ds.SAP","Query",0xa6cd1589,"haxor.ds.SAP.Query","haxor/ds/SAP.hx",113,0xbaeeb06f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_id,"p_id")
		HX_STACK_ARG(p_on_fetch,"p_on_fetch")
		HX_STACK_LINE(114)
		bool tmp = this->m_has_query;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(114)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(114)
		if ((tmp1)){
			HX_STACK_LINE(114)
			return null();
		}
		HX_STACK_LINE(117)
		::haxor::ds::SAPInterval tx;		HX_STACK_VAR(tx,"tx");
		HX_STACK_LINE(118)
		::haxor::ds::SAPInterval ty;		HX_STACK_VAR(ty,"ty");
		HX_STACK_LINE(119)
		::haxor::ds::SAPInterval tz;		HX_STACK_VAR(tz,"tz");
		HX_STACK_LINE(121)
		::haxor::ds::SAPInterval it;		HX_STACK_VAR(it,"it");
		HX_STACK_LINE(123)
		::haxor::ds::SAPInterval nx;		HX_STACK_VAR(nx,"nx");
		HX_STACK_LINE(124)
		::haxor::ds::SAPInterval ny;		HX_STACK_VAR(ny,"ny");
		HX_STACK_LINE(125)
		::haxor::ds::SAPInterval nz;		HX_STACK_VAR(nz,"nz");
		HX_STACK_LINE(129)
		::haxor::ds::SAPList tmp2 = this->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(129)
		Array< ::Dynamic > tmp3 = tmp2->list;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(129)
		int tmp4 = p_id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(129)
		::haxor::ds::SAPInterval tmp5 = tmp3->__get(tmp4).StaticCast< ::haxor::ds::SAPInterval >();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(129)
		tx = tmp5;
		HX_STACK_LINE(130)
		::haxor::ds::SAPList tmp6 = this->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(130)
		Array< ::Dynamic > tmp7 = tmp6->list;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(130)
		int tmp8 = p_id;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(130)
		::haxor::ds::SAPInterval tmp9 = tmp7->__get(tmp8).StaticCast< ::haxor::ds::SAPInterval >();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(130)
		ty = tmp9;
		HX_STACK_LINE(131)
		::haxor::ds::SAPList tmp10 = this->z;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(131)
		Array< ::Dynamic > tmp11 = tmp10->list;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(131)
		int tmp12 = p_id;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(131)
		::haxor::ds::SAPInterval tmp13 = tmp11->__get(tmp12).StaticCast< ::haxor::ds::SAPInterval >();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(131)
		tz = tmp13;
		HX_STACK_LINE(134)
		it = tx->next;
		HX_STACK_LINE(135)
		while((true)){
			HX_STACK_LINE(135)
			bool tmp14 = (it != null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(135)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(135)
			if ((tmp15)){
				HX_STACK_LINE(135)
				break;
			}
			HX_STACK_LINE(138)
			::haxor::ds::SAPInterval tmp16 = tx;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(138)
			bool tmp17 = it->Overlap(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(138)
			if ((tmp17)){
				HX_STACK_LINE(141)
				::haxor::ds::SAPList tmp18 = this->y;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(141)
				Array< ::Dynamic > tmp19 = tmp18->list;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(141)
				int tmp20 = it->id;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(141)
				::haxor::ds::SAPInterval tmp21 = tmp19->__get(tmp20).StaticCast< ::haxor::ds::SAPInterval >();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(141)
				::haxor::ds::SAPInterval tmp22 = ty;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(141)
				bool tmp23 = tmp21->Overlap(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(141)
				if ((tmp23)){
					HX_STACK_LINE(144)
					::haxor::ds::SAPList tmp24 = this->z;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(144)
					Array< ::Dynamic > tmp25 = tmp24->list;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(144)
					int tmp26 = it->id;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(144)
					::haxor::ds::SAPInterval tmp27 = tmp25->__get(tmp26).StaticCast< ::haxor::ds::SAPInterval >();		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(144)
					::haxor::ds::SAPInterval tmp28 = tz;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(144)
					bool tmp29 = tmp27->Overlap(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(144)
					if ((tmp29)){
						HX_STACK_LINE(146)
						bool tmp30 = (p_on_fetch != null());		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(146)
						if ((tmp30)){
							HX_STACK_LINE(146)
							Dynamic tmp31 = tx->data;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(146)
							Dynamic tmp32 = it->data;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(146)
							p_on_fetch(tmp31,tmp32).Cast< Void >();
						}
					}
				}
			}
			HX_STACK_LINE(150)
			it = it->next;
		}
		HX_STACK_LINE(154)
		it = tx->prev;
		HX_STACK_LINE(155)
		while((true)){
			HX_STACK_LINE(155)
			bool tmp14 = (it != null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(155)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(155)
			if ((tmp15)){
				HX_STACK_LINE(155)
				break;
			}
			HX_STACK_LINE(158)
			::haxor::ds::SAPInterval tmp16 = tx;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(158)
			bool tmp17 = it->Overlap(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(158)
			if ((tmp17)){
				HX_STACK_LINE(161)
				::haxor::ds::SAPList tmp18 = this->y;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(161)
				Array< ::Dynamic > tmp19 = tmp18->list;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(161)
				int tmp20 = it->id;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(161)
				::haxor::ds::SAPInterval tmp21 = tmp19->__get(tmp20).StaticCast< ::haxor::ds::SAPInterval >();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(161)
				::haxor::ds::SAPInterval tmp22 = ty;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(161)
				bool tmp23 = tmp21->Overlap(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(161)
				if ((tmp23)){
					HX_STACK_LINE(164)
					::haxor::ds::SAPList tmp24 = this->z;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(164)
					Array< ::Dynamic > tmp25 = tmp24->list;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(164)
					int tmp26 = it->id;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(164)
					::haxor::ds::SAPInterval tmp27 = tmp25->__get(tmp26).StaticCast< ::haxor::ds::SAPInterval >();		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(164)
					::haxor::ds::SAPInterval tmp28 = tz;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(164)
					bool tmp29 = tmp27->Overlap(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(164)
					if ((tmp29)){
						HX_STACK_LINE(166)
						bool tmp30 = (p_on_fetch != null());		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(166)
						if ((tmp30)){
							HX_STACK_LINE(166)
							Dynamic tmp31 = tx->data;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(166)
							Dynamic tmp32 = it->data;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(166)
							p_on_fetch(tmp31,tmp32).Cast< Void >();
						}
					}
				}
			}
			HX_STACK_LINE(170)
			it = it->prev;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SAP_obj,Query,(void))


SAP_obj::SAP_obj()
{
}

void SAP_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SAP);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(z,"z");
	HX_MARK_MEMBER_NAME(m_has_query,"m_has_query");
	HX_MARK_END_CLASS();
}

void SAP_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(z,"z");
	HX_VISIT_MEMBER_NAME(m_has_query,"m_has_query");
}

Dynamic SAP_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"z") ) { return z; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"Query") ) { return Query_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"Create") ) { return Create_dyn(); }
		if (HX_FIELD_EQ(inName,"Update") ) { return Update_dyn(); }
		if (HX_FIELD_EQ(inName,"Remove") ) { return Remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"Overlap") ) { return Overlap_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"m_has_query") ) { return m_has_query; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SAP_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< ::haxor::ds::SAPList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< ::haxor::ds::SAPList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< ::haxor::ds::SAPList >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"m_has_query") ) { m_has_query=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SAP_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void SAP_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("z","\x7a","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("m_has_query","\x91","\x37","\x7c","\xa0"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::ds::SAPList*/ ,(int)offsetof(SAP_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsObject /*::haxor::ds::SAPList*/ ,(int)offsetof(SAP_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsObject /*::haxor::ds::SAPList*/ ,(int)offsetof(SAP_obj,z),HX_HCSTRING("z","\x7a","\x00","\x00","\x00")},
	{hx::fsBool,(int)offsetof(SAP_obj,m_has_query),HX_HCSTRING("m_has_query","\x91","\x37","\x7c","\xa0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("z","\x7a","\x00","\x00","\x00"),
	HX_HCSTRING("m_has_query","\x91","\x37","\x7c","\xa0"),
	HX_HCSTRING("Create","\x1c","\xdb","\xa3","\xb0"),
	HX_HCSTRING("Update","\x29","\xfa","\x99","\xbb"),
	HX_HCSTRING("Remove","\x64","\x10","\x1d","\x39"),
	HX_HCSTRING("Overlap","\x67","\x6b","\x61","\x76"),
	HX_HCSTRING("Query","\xe8","\xfa","\x17","\xf1"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SAP_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SAP_obj::__mClass,"__mClass");
};

#endif

hx::Class SAP_obj::__mClass;

void SAP_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.ds.SAP","\x4f","\xdc","\x5d","\x66");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &SAP_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SAP_obj >;
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
