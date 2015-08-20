#include <hxcpp.h>

#ifndef INCLUDED_haxor_ds_SAPInterval
#include <haxor/ds/SAPInterval.h>
#endif
#ifndef INCLUDED_haxor_ds_SAPList
#include <haxor/ds/SAPList.h>
#endif
namespace haxor{
namespace ds{

Void SAPList_obj::__construct(hx::Null< Float >  __o_p_bias,hx::Null< bool >  __o_p_has_query)
{
HX_STACK_FRAME("haxor.ds.SAPList","new",0x07a243bf,"haxor.ds.SAPList.new","haxor/ds/SAP.hx",204,0xbaeeb06f)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_p_bias,"p_bias")
HX_STACK_ARG(__o_p_has_query,"p_has_query")
Float p_bias = __o_p_bias.Default(((Float)0.0));
bool p_has_query = __o_p_has_query.Default(true);
{
	HX_STACK_LINE(205)
	Array< ::Dynamic > tmp = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(205)
	this->list = tmp;
	HX_STACK_LINE(206)
	{
		HX_STACK_LINE(206)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(206)
		while((true)){
			HX_STACK_LINE(206)
			bool tmp1 = (_g < (int)1000);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(206)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(206)
			if ((tmp2)){
				HX_STACK_LINE(206)
				break;
			}
			HX_STACK_LINE(206)
			int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(206)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(206)
			Array< ::Dynamic > tmp4 = this->list;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(206)
			tmp4->push(null());
		}
	}
	HX_STACK_LINE(207)
	this->m_has_query = p_has_query;
	HX_STACK_LINE(208)
	this->m_bias = p_bias;
}
;
	return null();
}

//SAPList_obj::~SAPList_obj() { }

Dynamic SAPList_obj::__CreateEmpty() { return  new SAPList_obj; }
hx::ObjectPtr< SAPList_obj > SAPList_obj::__new(hx::Null< Float >  __o_p_bias,hx::Null< bool >  __o_p_has_query)
{  hx::ObjectPtr< SAPList_obj > _result_ = new SAPList_obj();
	_result_->__construct(__o_p_bias,__o_p_has_query);
	return _result_;}

Dynamic SAPList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SAPList_obj > _result_ = new SAPList_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void SAPList_obj::Create( int p_id){
{
		HX_STACK_FRAME("haxor.ds.SAPList","Create",0xf06a8d1d,"haxor.ds.SAPList.Create","haxor/ds/SAP.hx",216,0xbaeeb06f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_id,"p_id")
		HX_STACK_LINE(217)
		while((true)){
			HX_STACK_LINE(217)
			Array< ::Dynamic > tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(217)
			int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(217)
			int tmp2 = p_id;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(217)
			bool tmp3 = (tmp1 <= tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(217)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(217)
			if ((tmp4)){
				HX_STACK_LINE(217)
				break;
			}
			HX_STACK_LINE(217)
			Array< ::Dynamic > tmp5 = this->list;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(217)
			tmp5->push(null());
		}
		HX_STACK_LINE(218)
		Array< ::Dynamic > tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(218)
		int tmp1 = p_id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(218)
		::haxor::ds::SAPInterval tmp2 = tmp->__get(tmp1).StaticCast< ::haxor::ds::SAPInterval >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(218)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(218)
		if ((tmp3)){
			HX_STACK_LINE(218)
			Array< ::Dynamic > tmp4 = this->list;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(218)
			int tmp5 = p_id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(218)
			::haxor::ds::SAPInterval tmp6 = ::haxor::ds::SAPInterval_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(218)
			tmp4[tmp5] = tmp6;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SAPList_obj,Create,(void))

Void SAPList_obj::Update( int p_id,Dynamic p_data,Float p_min,Float p_max){
{
		HX_STACK_FRAME("haxor.ds.SAPList","Update",0xfb60ac2a,"haxor.ds.SAPList.Update","haxor/ds/SAP.hx",228,0xbaeeb06f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_id,"p_id")
		HX_STACK_ARG(p_data,"p_data")
		HX_STACK_ARG(p_min,"p_min")
		HX_STACK_ARG(p_max,"p_max")
		HX_STACK_LINE(229)
		Array< ::Dynamic > tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(229)
		int tmp1 = p_id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(229)
		::haxor::ds::SAPInterval tmp2 = tmp->__get(tmp1).StaticCast< ::haxor::ds::SAPInterval >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(229)
		tmp2->id = p_id;
		HX_STACK_LINE(230)
		Array< ::Dynamic > tmp3 = this->list;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(230)
		int tmp4 = p_id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(230)
		::haxor::ds::SAPInterval tmp5 = tmp3->__get(tmp4).StaticCast< ::haxor::ds::SAPInterval >();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(230)
		tmp5->data = p_data;
		HX_STACK_LINE(231)
		Float tmp6 = (p_max - p_min);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(231)
		Float tmp7 = this->m_bias;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(231)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(231)
		Float tmp9 = (tmp8 * ((Float)0.5));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(231)
		Float d = tmp9;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(232)
		Array< ::Dynamic > tmp10 = this->list;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(232)
		int tmp11 = p_id;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(232)
		::haxor::ds::SAPInterval tmp12 = tmp10->__get(tmp11).StaticCast< ::haxor::ds::SAPInterval >();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(232)
		Float tmp13 = (p_min - d);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(232)
		Float tmp14 = (p_max + d);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(232)
		tmp12->Set(tmp13,tmp14);
		HX_STACK_LINE(233)
		bool tmp15 = this->m_has_query;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(233)
		if ((tmp15)){
			HX_STACK_LINE(233)
			Array< ::Dynamic > tmp16 = this->list;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(233)
			int tmp17 = p_id;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(233)
			::haxor::ds::SAPInterval tmp18 = tmp16->__get(tmp17).StaticCast< ::haxor::ds::SAPInterval >();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(233)
			this->RelocateInterval(tmp18);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(SAPList_obj,Update,(void))

Void SAPList_obj::AddInterval( ::haxor::ds::SAPInterval p_item){
{
		HX_STACK_FRAME("haxor.ds.SAPList","AddInterval",0xfd1ab2c5,"haxor.ds.SAPList.AddInterval","haxor/ds/SAP.hx",241,0xbaeeb06f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_item,"p_item")
		HX_STACK_LINE(242)
		::haxor::ds::SAPInterval tmp = this->start;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(242)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(242)
		if ((tmp1)){
			HX_STACK_LINE(242)
			this->start = p_item;
			HX_STACK_LINE(242)
			::haxor::ds::SAPInterval tmp2 = p_item->prev = null();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(242)
			p_item->next = tmp2;
			HX_STACK_LINE(242)
			return null();
		}
		HX_STACK_LINE(243)
		::haxor::ds::SAPInterval tmp2 = p_item;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(243)
		::haxor::ds::SAPInterval tmp3 = this->start;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(243)
		bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(243)
		if ((tmp4)){
			HX_STACK_LINE(243)
			return null();
		}
		HX_STACK_LINE(244)
		::haxor::ds::SAPInterval tmp5 = this->start;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(244)
		::haxor::ds::SAPInterval it = tmp5;		HX_STACK_VAR(it,"it");
		HX_STACK_LINE(245)
		while((true)){
			HX_STACK_LINE(245)
			bool tmp6 = (it != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(245)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(245)
			if ((tmp7)){
				HX_STACK_LINE(245)
				break;
			}
			HX_STACK_LINE(247)
			bool tmp8 = (p_item->min < it->min);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(247)
			if ((tmp8)){
				HX_STACK_LINE(247)
				::haxor::ds::SAPInterval tmp9 = p_item;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(247)
				::haxor::ds::SAPInterval tmp10 = it;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(247)
				this->InsertInterval(tmp9,tmp10);
				HX_STACK_LINE(247)
				return null();
			}
			HX_STACK_LINE(248)
			bool tmp9 = (it->next == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(248)
			if ((tmp9)){
				HX_STACK_LINE(248)
				::haxor::ds::SAPInterval tmp10 = p_item;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(248)
				::haxor::ds::SAPInterval tmp11 = it;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(248)
				this->InsertInterval(tmp10,tmp11);
				HX_STACK_LINE(248)
				return null();
			}
			HX_STACK_LINE(249)
			it = it->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SAPList_obj,AddInterval,(void))

Void SAPList_obj::InsertInterval( ::haxor::ds::SAPInterval p_item,::haxor::ds::SAPInterval p_at){
{
		HX_STACK_FRAME("haxor.ds.SAPList","InsertInterval",0x395688bf,"haxor.ds.SAPList.InsertInterval","haxor/ds/SAP.hx",259,0xbaeeb06f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_item,"p_item")
		HX_STACK_ARG(p_at,"p_at")
		HX_STACK_LINE(260)
		bool tmp = (p_item == p_at);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(260)
		if ((tmp)){
			HX_STACK_LINE(260)
			return null();
		}
		HX_STACK_LINE(263)
		bool tmp1 = (p_item->min > p_at->min);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(263)
		if ((tmp1)){
			HX_STACK_LINE(265)
			p_item->next = p_at->next;
			HX_STACK_LINE(266)
			p_item->prev = p_at;
			HX_STACK_LINE(267)
			p_at->next = p_item;
			HX_STACK_LINE(268)
			bool tmp2 = (p_item->next != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(268)
			if ((tmp2)){
				HX_STACK_LINE(268)
				p_item->next->prev = p_item;
			}
		}
		else{
			HX_STACK_LINE(272)
			p_item->next = p_at;
			HX_STACK_LINE(273)
			p_item->prev = p_at->prev;
			HX_STACK_LINE(274)
			p_at->prev = p_item;
			HX_STACK_LINE(275)
			bool tmp2 = (p_item->prev != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(275)
			if ((tmp2)){
				HX_STACK_LINE(275)
				p_item->prev->next = p_item;
			}
			HX_STACK_LINE(277)
			::haxor::ds::SAPInterval tmp3 = p_at;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(277)
			::haxor::ds::SAPInterval tmp4 = this->start;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(277)
			bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(277)
			if ((tmp5)){
				HX_STACK_LINE(277)
				this->start = p_item;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SAPList_obj,InsertInterval,(void))

Void SAPList_obj::RelocateInterval( ::haxor::ds::SAPInterval p_item){
{
		HX_STACK_FRAME("haxor.ds.SAPList","RelocateInterval",0xad79634b,"haxor.ds.SAPList.RelocateInterval","haxor/ds/SAP.hx",287,0xbaeeb06f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_item,"p_item")
		HX_STACK_LINE(289)
		bool tmp = (p_item->prev == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(289)
		if ((tmp)){
			HX_STACK_LINE(290)
			bool tmp1 = (p_item->next == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(290)
			if ((tmp1)){
				HX_STACK_LINE(292)
				::haxor::ds::SAPInterval tmp2 = p_item;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(292)
				this->AddInterval(tmp2);
				HX_STACK_LINE(293)
				return null();
			}
		}
		HX_STACK_LINE(296)
		::haxor::ds::SAPInterval it = p_item;		HX_STACK_VAR(it,"it");
		HX_STACK_LINE(297)
		int nav = (int)0;		HX_STACK_VAR(nav,"nav");
		HX_STACK_LINE(298)
		::haxor::ds::SAPInterval location = null();		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(301)
		while((true)){
			HX_STACK_LINE(301)
			bool tmp1 = (it != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(301)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(301)
			if ((tmp2)){
				HX_STACK_LINE(301)
				break;
			}
			HX_STACK_LINE(303)
			::haxor::ds::SAPInterval n = it->next;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(304)
			::haxor::ds::SAPInterval p = it->prev;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(305)
			bool tmp3 = (n == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(305)
			if ((tmp3)){
				HX_STACK_LINE(305)
				bool tmp4 = (p == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(305)
				if ((tmp4)){
					HX_STACK_LINE(305)
					break;
				}
			}
			HX_STACK_LINE(306)
			bool tmp4 = (p != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(306)
			if ((tmp4)){
				HX_STACK_LINE(306)
				bool tmp5 = (p_item->min < p->min);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(306)
				if ((tmp5)){
					HX_STACK_LINE(306)
					nav = (int)-1;
					HX_STACK_LINE(306)
					location = p;
				}
			}
			HX_STACK_LINE(307)
			bool tmp5 = (n != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(307)
			if ((tmp5)){
				HX_STACK_LINE(307)
				bool tmp6 = (p_item->min > n->min);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(307)
				if ((tmp6)){
					HX_STACK_LINE(307)
					nav = (int)1;
					HX_STACK_LINE(307)
					location = n;
				}
			}
			HX_STACK_LINE(308)
			bool tmp6 = (nav == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(308)
			if ((tmp6)){
				HX_STACK_LINE(308)
				break;
			}
			HX_STACK_LINE(309)
			bool tmp7 = (nav < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(309)
			::haxor::ds::SAPInterval tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(309)
			if ((tmp7)){
				HX_STACK_LINE(309)
				tmp8 = p;
			}
			else{
				HX_STACK_LINE(309)
				tmp8 = n;
			}
			HX_STACK_LINE(309)
			it = tmp8;
			HX_STACK_LINE(310)
			nav = (int)0;
		}
		HX_STACK_LINE(313)
		bool tmp1 = (location != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(313)
		if ((tmp1)){
			HX_STACK_LINE(316)
			::haxor::ds::SAPInterval tmp2 = p_item;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(316)
			this->RemoveInterval(tmp2);
			HX_STACK_LINE(318)
			::haxor::ds::SAPInterval tmp3 = p_item;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(318)
			::haxor::ds::SAPInterval tmp4 = location;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(318)
			this->InsertInterval(tmp3,tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SAPList_obj,RelocateInterval,(void))

Void SAPList_obj::Remove( int p_id){
{
		HX_STACK_FRAME("haxor.ds.SAPList","Remove",0x78e3c265,"haxor.ds.SAPList.Remove","haxor/ds/SAP.hx",327,0xbaeeb06f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_id,"p_id")
		HX_STACK_LINE(328)
		Array< ::Dynamic > tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(328)
		int tmp1 = p_id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(328)
		::haxor::ds::SAPInterval tmp2 = tmp->__get(tmp1).StaticCast< ::haxor::ds::SAPInterval >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(328)
		this->RemoveInterval(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SAPList_obj,Remove,(void))

Void SAPList_obj::RemoveInterval( ::haxor::ds::SAPInterval p_item){
{
		HX_STACK_FRAME("haxor.ds.SAPList","RemoveInterval",0xc0e264ca,"haxor.ds.SAPList.RemoveInterval","haxor/ds/SAP.hx",336,0xbaeeb06f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_item,"p_item")
		HX_STACK_LINE(337)
		bool tmp = this->m_has_query;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(337)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(337)
		if ((tmp1)){
			HX_STACK_LINE(337)
			return null();
		}
		HX_STACK_LINE(338)
		::haxor::ds::SAPInterval p = p_item->prev;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(339)
		::haxor::ds::SAPInterval n = p_item->next;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(340)
		bool tmp2 = (p != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(340)
		if ((tmp2)){
			HX_STACK_LINE(340)
			p->next = n;
		}
		HX_STACK_LINE(341)
		bool tmp3 = (n != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(341)
		if ((tmp3)){
			HX_STACK_LINE(341)
			n->prev = p;
		}
		HX_STACK_LINE(342)
		::haxor::ds::SAPInterval tmp4 = p_item->prev = null();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(342)
		p_item->next = tmp4;
		HX_STACK_LINE(344)
		::haxor::ds::SAPInterval tmp5 = p_item;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(344)
		::haxor::ds::SAPInterval tmp6 = this->start;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(344)
		bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(344)
		if ((tmp7)){
			HX_STACK_LINE(344)
			this->start = n;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SAPList_obj,RemoveInterval,(void))

Void SAPList_obj::Iterate( Dynamic p_callback){
{
		HX_STACK_FRAME("haxor.ds.SAPList","Iterate",0x3e36b0b9,"haxor.ds.SAPList.Iterate","haxor/ds/SAP.hx",352,0xbaeeb06f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_callback,"p_callback")
		HX_STACK_LINE(353)
		::haxor::ds::SAPInterval tmp = this->start;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(353)
		::haxor::ds::SAPInterval it = tmp;		HX_STACK_VAR(it,"it");
		HX_STACK_LINE(354)
		while((true)){
			HX_STACK_LINE(354)
			bool tmp1 = (it != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(354)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(354)
			if ((tmp2)){
				HX_STACK_LINE(354)
				break;
			}
			HX_STACK_LINE(356)
			::haxor::ds::SAPInterval tmp3 = it;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(356)
			p_callback(tmp3).Cast< Void >();
			HX_STACK_LINE(357)
			it = it->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SAPList_obj,Iterate,(void))

::String SAPList_obj::ToString( hx::Null< int >  __o_p_places){
int p_places = __o_p_places.Default(2);
	HX_STACK_FRAME("haxor.ds.SAPList","ToString",0xd678810d,"haxor.ds.SAPList.ToString","haxor/ds/SAP.hx",367,0xbaeeb06f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_places,"p_places")
{
		HX_STACK_LINE(368)
		::String s = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(369)
		bool tmp = this->m_has_query;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(369)
		if ((tmp)){
			HX_STACK_LINE(371)
			::haxor::ds::SAPInterval tmp1 = this->start;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(371)
			::haxor::ds::SAPInterval it = tmp1;		HX_STACK_VAR(it,"it");
			HX_STACK_LINE(372)
			while((true)){
				HX_STACK_LINE(372)
				bool tmp2 = (it != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(372)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(372)
				if ((tmp3)){
					HX_STACK_LINE(372)
					break;
				}
				HX_STACK_LINE(374)
				int tmp4 = p_places;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(374)
				::String tmp5 = it->ToString(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(374)
				hx::AddEq(s,tmp5);
				HX_STACK_LINE(375)
				it = it->next;
			}
		}
		else{
			HX_STACK_LINE(380)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(380)
			Array< ::Dynamic > tmp1 = this->list;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(380)
			int _g = tmp1->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(380)
			while((true)){
				HX_STACK_LINE(380)
				bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(380)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(380)
				if ((tmp3)){
					HX_STACK_LINE(380)
					break;
				}
				HX_STACK_LINE(380)
				int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(380)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(380)
				Array< ::Dynamic > tmp5 = this->list;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(380)
				int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(380)
				::haxor::ds::SAPInterval tmp7 = tmp5->__get(tmp6).StaticCast< ::haxor::ds::SAPInterval >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(380)
				int tmp8 = p_places;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(380)
				::String tmp9 = tmp7->ToString(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(380)
				hx::AddEq(s,tmp9);
			}
		}
		HX_STACK_LINE(382)
		::String tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(382)
		return tmp1;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(SAPList_obj,ToString,return )


SAPList_obj::SAPList_obj()
{
}

void SAPList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SAPList);
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(m_has_query,"m_has_query");
	HX_MARK_MEMBER_NAME(m_bias,"m_bias");
	HX_MARK_END_CLASS();
}

void SAPList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(m_has_query,"m_has_query");
	HX_VISIT_MEMBER_NAME(m_bias,"m_bias");
}

Dynamic SAPList_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_bias") ) { return m_bias; }
		if (HX_FIELD_EQ(inName,"Create") ) { return Create_dyn(); }
		if (HX_FIELD_EQ(inName,"Update") ) { return Update_dyn(); }
		if (HX_FIELD_EQ(inName,"Remove") ) { return Remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"Iterate") ) { return Iterate_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ToString") ) { return ToString_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"m_has_query") ) { return m_has_query; }
		if (HX_FIELD_EQ(inName,"AddInterval") ) { return AddInterval_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"InsertInterval") ) { return InsertInterval_dyn(); }
		if (HX_FIELD_EQ(inName,"RemoveInterval") ) { return RemoveInterval_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"RelocateInterval") ) { return RelocateInterval_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SAPList_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< ::haxor::ds::SAPInterval >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_bias") ) { m_bias=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"m_has_query") ) { m_has_query=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SAPList_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void SAPList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"));
	outFields->push(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"));
	outFields->push(HX_HCSTRING("m_has_query","\x91","\x37","\x7c","\xa0"));
	outFields->push(HX_HCSTRING("m_bias","\xcb","\x5a","\x0e","\x89"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::ds::SAPInterval*/ ,(int)offsetof(SAPList_obj,start),HX_HCSTRING("start","\x62","\x74","\x0b","\x84")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(SAPList_obj,list),HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47")},
	{hx::fsBool,(int)offsetof(SAPList_obj,m_has_query),HX_HCSTRING("m_has_query","\x91","\x37","\x7c","\xa0")},
	{hx::fsFloat,(int)offsetof(SAPList_obj,m_bias),HX_HCSTRING("m_bias","\xcb","\x5a","\x0e","\x89")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("m_has_query","\x91","\x37","\x7c","\xa0"),
	HX_HCSTRING("m_bias","\xcb","\x5a","\x0e","\x89"),
	HX_HCSTRING("Create","\x1c","\xdb","\xa3","\xb0"),
	HX_HCSTRING("Update","\x29","\xfa","\x99","\xbb"),
	HX_HCSTRING("AddInterval","\x66","\x48","\x0b","\x3e"),
	HX_HCSTRING("InsertInterval","\xbe","\x6d","\x9c","\x15"),
	HX_HCSTRING("RelocateInterval","\x0a","\xc6","\xc1","\x92"),
	HX_HCSTRING("Remove","\x64","\x10","\x1d","\x39"),
	HX_HCSTRING("RemoveInterval","\xc9","\x49","\x28","\x9d"),
	HX_HCSTRING("Iterate","\xda","\xa1","\x21","\xb0"),
	HX_HCSTRING("ToString","\xcc","\x8c","\x20","\x12"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SAPList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SAPList_obj::__mClass,"__mClass");
};

#endif

hx::Class SAPList_obj::__mClass;

void SAPList_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.ds.SAPList","\x4d","\xf8","\xaf","\x2f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &SAPList_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SAPList_obj >;
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
