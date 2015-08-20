#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif

Void EReg_obj::__construct(::String r,::String opt)
{
HX_STACK_FRAME("EReg","new",0x8b859e81,"EReg.new","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/cpp/_std/EReg.hx",28,0x5997207f)
HX_STACK_THIS(this)
HX_STACK_ARG(r,"r")
HX_STACK_ARG(opt,"opt")
{
	HX_STACK_LINE(29)
	Array< ::String > tmp = opt.split(HX_HCSTRING("g","\x67","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	Array< ::String > a = tmp;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(30)
	bool tmp1 = (a->length > (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(30)
	this->global = tmp1;
	HX_STACK_LINE(31)
	bool tmp2 = this->global;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(31)
	if ((tmp2)){
		HX_STACK_LINE(32)
		::String tmp3 = a->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(32)
		opt = tmp3;
	}
	HX_STACK_LINE(33)
	::String tmp3 = r;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(33)
	::String tmp4 = opt;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(33)
	Dynamic tmp5 = ::EReg_obj::regexp_new_options(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(33)
	this->r = tmp5;
}
;
	return null();
}

//EReg_obj::~EReg_obj() { }

Dynamic EReg_obj::__CreateEmpty() { return  new EReg_obj; }
hx::ObjectPtr< EReg_obj > EReg_obj::__new(::String r,::String opt)
{  hx::ObjectPtr< EReg_obj > _result_ = new EReg_obj();
	_result_->__construct(r,opt);
	return _result_;}

Dynamic EReg_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EReg_obj > _result_ = new EReg_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

bool EReg_obj::match( ::String s){
	HX_STACK_FRAME("EReg","match",0x18fda1a6,"EReg.match","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/cpp/_std/EReg.hx",36,0x5997207f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(37)
	Dynamic tmp = this->r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	::String tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	int tmp2 = s.length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(37)
	Dynamic tmp3 = ::EReg_obj::regexp_match(tmp,tmp1,(int)0,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(37)
	bool p = tmp3;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(38)
	bool tmp4 = p;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(38)
	if ((tmp4)){
		HX_STACK_LINE(39)
		this->last = s;
	}
	else{
		HX_STACK_LINE(41)
		this->last = null();
	}
	HX_STACK_LINE(42)
	bool tmp5 = p;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(42)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(EReg_obj,match,return )

::String EReg_obj::matched( int n){
	HX_STACK_FRAME("EReg","matched",0x8ce62f85,"EReg.matched","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/cpp/_std/EReg.hx",45,0x5997207f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(46)
	Dynamic tmp = this->r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	int tmp1 = n;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	Dynamic tmp2 = ::EReg_obj::regexp_matched(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(46)
	::String m = tmp2;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(47)
	::String tmp3 = m;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(47)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(EReg_obj,matched,return )

Dynamic EReg_obj::matchedPos( ){
	HX_STACK_FRAME("EReg","matchedPos",0x7007a70f,"EReg.matchedPos","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/cpp/_std/EReg.hx",61,0x5997207f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	Dynamic tmp = this->r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	Dynamic tmp1 = ::EReg_obj::regexp_matched_pos(tmp,(int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(62)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(EReg_obj,matchedPos,return )

::String EReg_obj::replace( ::String s,::String by){
	HX_STACK_FRAME("EReg","replace",0xae923ad5,"EReg.replace","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/cpp/_std/EReg.hx",98,0x5997207f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(by,"by")
	HX_STACK_LINE(99)
	::StringBuf tmp = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(99)
	::StringBuf b = tmp;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(100)
	int pos = (int)0;		HX_STACK_VAR(pos,"pos");
	HX_STACK_LINE(101)
	int len = s.length;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(102)
	Array< ::String > tmp1 = by.split(HX_HCSTRING("$","\x24","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(102)
	Array< ::String > a = tmp1;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(103)
	bool first = true;		HX_STACK_VAR(first,"first");
	HX_STACK_LINE(104)
	while((true)){
		HX_STACK_LINE(105)
		Dynamic tmp2 = this->r;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(105)
		::String tmp3 = s;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(105)
		int tmp4 = pos;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(105)
		int tmp5 = len;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(105)
		Dynamic tmp6 = ::EReg_obj::regexp_match(tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(105)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(105)
		if ((tmp7)){
			HX_STACK_LINE(106)
			break;
		}
		HX_STACK_LINE(107)
		Dynamic tmp8 = this->r;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(107)
		Dynamic tmp9 = ::EReg_obj::regexp_matched_pos(tmp8,(int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(107)
		Dynamic p = tmp9;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(108)
		bool tmp10 = (p->__Field(HX_HCSTRING("len","\xd5","\x4b","\x52","\x00"), hx::paccDynamic ) == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(108)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(108)
		if ((tmp10)){
			HX_STACK_LINE(108)
			bool tmp12 = first;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(108)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(108)
			tmp11 = !(tmp13);
		}
		else{
			HX_STACK_LINE(108)
			tmp11 = false;
		}
		HX_STACK_LINE(108)
		if ((tmp11)){
			HX_STACK_LINE(109)
			bool tmp12 = (p->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic ) == s.length);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(109)
			if ((tmp12)){
				HX_STACK_LINE(110)
				break;
			}
			HX_STACK_LINE(111)
			hx::AddEq(p->__FieldRef(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00")),(int)1);
		}
		HX_STACK_LINE(113)
		{
			HX_STACK_LINE(113)
			int tmp12 = pos;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(113)
			int tmp13 = (p->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic ) - pos);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(113)
			::String tmp14 = s.substr(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(113)
			b->b->push(tmp14);
		}
		HX_STACK_LINE(114)
		bool tmp12 = (a->length > (int)0);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(114)
		if ((tmp12)){
			HX_STACK_LINE(115)
			::String tmp13 = a->__get((int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(115)
			b->add(tmp13);
		}
		HX_STACK_LINE(116)
		int i = (int)1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(117)
		while((true)){
			HX_STACK_LINE(117)
			bool tmp13 = (i < a->length);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(117)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(117)
			if ((tmp14)){
				HX_STACK_LINE(117)
				break;
			}
			HX_STACK_LINE(118)
			::String tmp15 = a->__get(i);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(118)
			::String k = tmp15;		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(119)
			Dynamic tmp16 = k.charCodeAt((int)0);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(119)
			Dynamic c = tmp16;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(121)
			bool tmp17 = (c >= (int)49);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(121)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(121)
			if ((tmp17)){
				HX_STACK_LINE(121)
				tmp18 = (c <= (int)57);
			}
			else{
				HX_STACK_LINE(121)
				tmp18 = false;
			}
			HX_STACK_LINE(121)
			if ((tmp18)){
				HX_STACK_LINE(122)
				Dynamic tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(122)
				try
				{
				HX_STACK_CATCHABLE(::String, 0);
				{
					HX_STACK_LINE(122)
					Dynamic tmp20 = this->r;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(122)
					Dynamic tmp21 = c;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(122)
					int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(122)
					int tmp23 = (tmp22 - (int)48);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(122)
					tmp19 = ::EReg_obj::regexp_matched_pos(tmp20,tmp23);
				}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(122)
							tmp19 = null();
						}
					}
					else {
					    HX_STACK_DO_THROW(__e);
					}
				}
				HX_STACK_LINE(122)
				Dynamic p1 = tmp19;		HX_STACK_VAR(p1,"p1");
				HX_STACK_LINE(123)
				bool tmp20 = (p1 == null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(123)
				if ((tmp20)){
					HX_STACK_LINE(124)
					b->add(HX_HCSTRING("$","\x24","\x00","\x00","\x00"));
					HX_STACK_LINE(125)
					::String tmp21 = k;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(125)
					b->add(tmp21);
				}
				else{
					HX_STACK_LINE(127)
					{
						HX_STACK_LINE(127)
						int tmp21 = p1->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(127)
						int tmp22 = p1->__Field(HX_HCSTRING("len","\xd5","\x4b","\x52","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(127)
						::String tmp23 = s.substr(tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(127)
						b->b->push(tmp23);
					}
					HX_STACK_LINE(128)
					{
						HX_STACK_LINE(128)
						int tmp21 = (k.length - (int)1);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(128)
						::String tmp22 = k.substr((int)1,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(128)
						b->b->push(tmp22);
					}
				}
			}
			else{
				HX_STACK_LINE(130)
				bool tmp19 = (c == null());		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(130)
				if ((tmp19)){
					HX_STACK_LINE(131)
					b->add(HX_HCSTRING("$","\x24","\x00","\x00","\x00"));
					HX_STACK_LINE(132)
					(i)++;
					HX_STACK_LINE(133)
					::String tmp20 = a->__get(i);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(133)
					::String k2 = tmp20;		HX_STACK_VAR(k2,"k2");
					HX_STACK_LINE(134)
					bool tmp21 = (k2 != null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(134)
					bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(134)
					if ((tmp21)){
						HX_STACK_LINE(134)
						tmp22 = (k2.length > (int)0);
					}
					else{
						HX_STACK_LINE(134)
						tmp22 = false;
					}
					HX_STACK_LINE(134)
					if ((tmp22)){
						HX_STACK_LINE(135)
						::String tmp23 = k2;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(135)
						b->add(tmp23);
					}
				}
				else{
					HX_STACK_LINE(137)
					::String tmp20 = (HX_HCSTRING("$","\x24","\x00","\x00","\x00") + k);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(137)
					b->add(tmp20);
				}
			}
			HX_STACK_LINE(138)
			(i)++;
		}
		HX_STACK_LINE(140)
		int tmp13 = (p->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic ) + p->__Field(HX_HCSTRING("len","\xd5","\x4b","\x52","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(140)
		int tmp14 = pos;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(140)
		int tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(140)
		int tot = tmp15;		HX_STACK_VAR(tot,"tot");
		HX_STACK_LINE(141)
		hx::AddEq(pos,tot);
		HX_STACK_LINE(142)
		hx::SubEq(len,tot);
		HX_STACK_LINE(143)
		first = false;
		HX_STACK_LINE(144)
		bool tmp16 = this->global;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(144)
		bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(104)
		if ((tmp17)){
			HX_STACK_LINE(104)
			break;
		}
	}
	HX_STACK_LINE(145)
	{
		HX_STACK_LINE(145)
		int tmp2 = pos;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(145)
		int tmp3 = len;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(145)
		::String tmp4 = s.substr(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(145)
		b->b->push(tmp4);
	}
	HX_STACK_LINE(146)
	::String tmp2 = b->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(146)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(EReg_obj,replace,return )

Dynamic EReg_obj::regexp_new_options;

Dynamic EReg_obj::regexp_match;

Dynamic EReg_obj::regexp_matched;

Dynamic EReg_obj::regexp_matched_pos;


EReg_obj::EReg_obj()
{
}

void EReg_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EReg);
	HX_MARK_MEMBER_NAME(r,"r");
	HX_MARK_MEMBER_NAME(last,"last");
	HX_MARK_MEMBER_NAME(global,"global");
	HX_MARK_END_CLASS();
}

void EReg_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(r,"r");
	HX_VISIT_MEMBER_NAME(last,"last");
	HX_VISIT_MEMBER_NAME(global,"global");
}

Dynamic EReg_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { return r; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { return last; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"match") ) { return match_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"global") ) { return global; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"matched") ) { return matched_dyn(); }
		if (HX_FIELD_EQ(inName,"replace") ) { return replace_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"matchedPos") ) { return matchedPos_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool EReg_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"regexp_match") ) { outValue = regexp_match; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"regexp_matched") ) { outValue = regexp_matched; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"regexp_new_options") ) { outValue = regexp_new_options; return true;  }
		if (HX_FIELD_EQ(inName,"regexp_matched_pos") ) { outValue = regexp_matched_pos; return true;  }
	}
	return false;
}

Dynamic EReg_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { r=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { last=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"global") ) { global=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool EReg_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"regexp_match") ) { regexp_match=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"regexp_matched") ) { regexp_matched=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"regexp_new_options") ) { regexp_new_options=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"regexp_matched_pos") ) { regexp_matched_pos=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void EReg_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("r","\x72","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("last","\x56","\x0a","\xad","\x47"));
	outFields->push(HX_HCSTRING("global","\x63","\x31","\xb2","\xa7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(EReg_obj,r),HX_HCSTRING("r","\x72","\x00","\x00","\x00")},
	{hx::fsString,(int)offsetof(EReg_obj,last),HX_HCSTRING("last","\x56","\x0a","\xad","\x47")},
	{hx::fsBool,(int)offsetof(EReg_obj,global),HX_HCSTRING("global","\x63","\x31","\xb2","\xa7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &EReg_obj::regexp_new_options,HX_HCSTRING("regexp_new_options","\x89","\x34","\xba","\x56")},
	{hx::fsObject /*Dynamic*/ ,(void *) &EReg_obj::regexp_match,HX_HCSTRING("regexp_match","\x0f","\xcd","\x47","\xb6")},
	{hx::fsObject /*Dynamic*/ ,(void *) &EReg_obj::regexp_matched,HX_HCSTRING("regexp_matched","\x2e","\xc7","\xa0","\xb1")},
	{hx::fsObject /*Dynamic*/ ,(void *) &EReg_obj::regexp_matched_pos,HX_HCSTRING("regexp_matched_pos","\xc3","\x98","\x9f","\x7a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("r","\x72","\x00","\x00","\x00"),
	HX_HCSTRING("last","\x56","\x0a","\xad","\x47"),
	HX_HCSTRING("global","\x63","\x31","\xb2","\xa7"),
	HX_HCSTRING("match","\x45","\x49","\x23","\x03"),
	HX_HCSTRING("matched","\xe4","\x3c","\x7c","\x89"),
	HX_HCSTRING("matchedPos","\x10","\xff","\xc2","\xcb"),
	HX_HCSTRING("replace","\x34","\x48","\x28","\xab"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EReg_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(EReg_obj::regexp_new_options,"regexp_new_options");
	HX_MARK_MEMBER_NAME(EReg_obj::regexp_match,"regexp_match");
	HX_MARK_MEMBER_NAME(EReg_obj::regexp_matched,"regexp_matched");
	HX_MARK_MEMBER_NAME(EReg_obj::regexp_matched_pos,"regexp_matched_pos");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EReg_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(EReg_obj::regexp_new_options,"regexp_new_options");
	HX_VISIT_MEMBER_NAME(EReg_obj::regexp_match,"regexp_match");
	HX_VISIT_MEMBER_NAME(EReg_obj::regexp_matched,"regexp_matched");
	HX_VISIT_MEMBER_NAME(EReg_obj::regexp_matched_pos,"regexp_matched_pos");
};

#endif

hx::Class EReg_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("regexp_new_options","\x89","\x34","\xba","\x56"),
	HX_HCSTRING("regexp_match","\x0f","\xcd","\x47","\xb6"),
	HX_HCSTRING("regexp_matched","\x2e","\xc7","\xa0","\xb1"),
	HX_HCSTRING("regexp_matched_pos","\xc3","\x98","\x9f","\x7a"),
	String(null()) };

void EReg_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("EReg","\x0f","\x4a","\xda","\x2d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &EReg_obj::__GetStatic;
	__mClass->mSetStaticField = &EReg_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EReg_obj >;
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

void EReg_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/cpp/_std/EReg.hx",174,0x5997207f)
		{
			HX_STACK_LINE(174)
			Dynamic tmp = ::cpp::Lib_obj::load(HX_HCSTRING("regexp","\xc9","\xbf","\x89","\x00"),HX_HCSTRING("regexp_new_options","\x89","\x34","\xba","\x56"),(int)2);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(174)
			return tmp;
		}
		return null();
	}
};
	regexp_new_options= _Function_0_1::Block();
struct _Function_0_2{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/cpp/_std/EReg.hx",175,0x5997207f)
		{
			HX_STACK_LINE(175)
			Dynamic tmp = ::cpp::Lib_obj::load(HX_HCSTRING("regexp","\xc9","\xbf","\x89","\x00"),HX_HCSTRING("regexp_match","\x0f","\xcd","\x47","\xb6"),(int)4);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(175)
			return tmp;
		}
		return null();
	}
};
	regexp_match= _Function_0_2::Block();
struct _Function_0_3{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/cpp/_std/EReg.hx",176,0x5997207f)
		{
			HX_STACK_LINE(176)
			Dynamic tmp = ::cpp::Lib_obj::load(HX_HCSTRING("regexp","\xc9","\xbf","\x89","\x00"),HX_HCSTRING("regexp_matched","\x2e","\xc7","\xa0","\xb1"),(int)2);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(176)
			return tmp;
		}
		return null();
	}
};
	regexp_matched= _Function_0_3::Block();
struct _Function_0_4{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/cpp/_std/EReg.hx",177,0x5997207f)
		{
			HX_STACK_LINE(177)
			Dynamic tmp = ::cpp::Lib_obj::load(HX_HCSTRING("regexp","\xc9","\xbf","\x89","\x00"),HX_HCSTRING("regexp_matched_pos","\xc3","\x98","\x9f","\x7a"),(int)2);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(177)
			return tmp;
		}
		return null();
	}
};
	regexp_matched_pos= _Function_0_4::Block();
}

