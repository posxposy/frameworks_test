#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxor_context_BaseProcess
#include <haxor/context/BaseProcess.h>
#endif
#ifndef INCLUDED_haxor_context_Process
#include <haxor/context/Process.h>
#endif
#ifndef INCLUDED_haxor_core_Console
#include <haxor/core/Console.h>
#endif
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
namespace haxor{
namespace context{

Void Process_obj::__construct(::String p_name,int p_size,hx::Null< bool >  __o_p_update_cid)
{
HX_STACK_FRAME("haxor.context.Process","new",0x44f4a996,"haxor.context.Process.new","haxor/context/Process.hx",31,0x5f329a1c)
HX_STACK_THIS(this)
HX_STACK_ARG(p_name,"p_name")
HX_STACK_ARG(p_size,"p_size")
HX_STACK_ARG(__o_p_update_cid,"p_update_cid")
bool p_update_cid = __o_p_update_cid.Default(true);
{
	HX_STACK_LINE(32)
	::String tmp = p_name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	bool tmp1 = p_update_cid;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(33)
	Dynamic tmp2 = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(33)
	this->list = tmp2;
	HX_STACK_LINE(34)
	this->m_length = (int)0;
	HX_STACK_LINE(36)
	{
		HX_STACK_LINE(36)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(36)
		while((true)){
			HX_STACK_LINE(36)
			bool tmp3 = (_g < p_size);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(36)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(36)
			if ((tmp4)){
				HX_STACK_LINE(36)
				break;
			}
			HX_STACK_LINE(36)
			int tmp5 = (_g)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(36)
			int i = tmp5;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(38)
			Dynamic tmp6 = this->list;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(38)
			tmp6->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(null());
		}
	}
}
;
	return null();
}

//Process_obj::~Process_obj() { }

Dynamic Process_obj::__CreateEmpty() { return  new Process_obj; }
hx::ObjectPtr< Process_obj > Process_obj::__new(::String p_name,int p_size,hx::Null< bool >  __o_p_update_cid)
{  hx::ObjectPtr< Process_obj > _result_ = new Process_obj();
	_result_->__construct(p_name,p_size,__o_p_update_cid);
	return _result_;}

Dynamic Process_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Process_obj > _result_ = new Process_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

int Process_obj::get_length( ){
	HX_STACK_FRAME("haxor.context.Process","get_length",0xf24f5e39,"haxor.context.Process.get_length","haxor/context/Process.hx",21,0x5f329a1c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(21)
	int tmp = this->m_length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	return tmp;
}


Void Process_obj::Add( ::haxor::core::Resource p_item){
{
		HX_STACK_FRAME("haxor.context.Process","Add",0x44d28337,"haxor.context.Process.Add","haxor/context/Process.hx",49,0x5f329a1c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_item,"p_item")
		HX_STACK_LINE(50)
		Array< int > tmp = p_item->__pid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(50)
		int tmp1 = this->__cid;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(50)
		int tmp2 = tmp->__get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(50)
		int iid = tmp2;		HX_STACK_VAR(iid,"iid");
		HX_STACK_LINE(52)
		bool tmp3 = (iid >= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(52)
		if ((tmp3)){
			HX_STACK_LINE(54)
			{
				HX_STACK_LINE(54)
				::String tmp4 = this->name;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(54)
				::String tmp5 = (HX_HCSTRING("Process ","\xf1","\x3a","\xb5","\x09") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(54)
				::String tmp6 = (tmp5 + HX_HCSTRING("> Failed to Add [","\xd8","\x0a","\xcd","\x36"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(54)
				::String tmp7 = p_item->get_name();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(54)
				::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(54)
				::String tmp9 = (tmp8 + HX_HCSTRING("@","\x40","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(54)
				::String tmp10 = p_item->m_type_name;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(54)
				::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(54)
				::String tmp12 = (tmp11 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(54)
				Dynamic p_msg = tmp12;		HX_STACK_VAR(p_msg,"p_msg");
				HX_STACK_LINE(54)
				int tmp13 = ::haxor::core::Console_obj::verbose;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(54)
				bool tmp14 = (tmp13 >= (int)7);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(54)
				if ((tmp14)){
					HX_STACK_LINE(54)
					Dynamic tmp15 = p_msg;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(54)
					::cpp::Lib_obj::println(tmp15);
				}
			}
			HX_STACK_LINE(55)
			return null();
		}
		HX_STACK_LINE(57)
		int tmp4 = this->m_length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(57)
		Dynamic tmp5 = this->list;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(57)
		int tmp6 = tmp5->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(57)
		bool tmp7 = (tmp4 >= tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(57)
		if ((tmp7)){
			HX_STACK_LINE(57)
			Dynamic tmp8 = this->list;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(57)
			tmp8->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(null());
		}
		HX_STACK_LINE(58)
		Dynamic tmp8 = this->list;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(58)
		int tmp9 = this->m_length;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(58)
		Dynamic tmp10 = ((Dynamic)(p_item));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(58)
		hx::IndexRef((tmp8).mPtr,tmp9) = tmp10;
		HX_STACK_LINE(59)
		Array< int > tmp11 = p_item->__pid;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(59)
		int tmp12 = this->__cid;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(59)
		int tmp13 = this->m_length;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(59)
		tmp11[tmp12] = tmp13;
		HX_STACK_LINE(60)
		(this->m_length)++;
	}
return null();
}


Void Process_obj::Remove( ::haxor::core::Resource p_item){
{
		HX_STACK_FRAME("haxor.context.Process","Remove",0x2b7b5cee,"haxor.context.Process.Remove","haxor/context/Process.hx",69,0x5f329a1c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_item,"p_item")
		HX_STACK_LINE(70)
		Array< int > tmp = p_item->__pid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(70)
		int tmp1 = this->__cid;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(70)
		int tmp2 = tmp->__get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(70)
		int iid = tmp2;		HX_STACK_VAR(iid,"iid");
		HX_STACK_LINE(71)
		bool tmp3 = (iid < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(71)
		if ((tmp3)){
			HX_STACK_LINE(73)
			{
				HX_STACK_LINE(73)
				::String tmp4 = this->name;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(73)
				::String tmp5 = (HX_HCSTRING("Process ","\xf1","\x3a","\xb5","\x09") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(73)
				::String tmp6 = (tmp5 + HX_HCSTRING("> Failed to Remove [","\xc3","\xec","\x2d","\x90"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(73)
				::String tmp7 = p_item->get_name();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(73)
				::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(73)
				::String tmp9 = (tmp8 + HX_HCSTRING("@","\x40","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(73)
				::String tmp10 = p_item->m_type_name;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(73)
				::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(73)
				::String tmp12 = (tmp11 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(73)
				Dynamic p_msg = tmp12;		HX_STACK_VAR(p_msg,"p_msg");
				HX_STACK_LINE(73)
				int tmp13 = ::haxor::core::Console_obj::verbose;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(73)
				bool tmp14 = (tmp13 >= (int)7);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(73)
				if ((tmp14)){
					HX_STACK_LINE(73)
					Dynamic tmp15 = p_msg;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(73)
					::cpp::Lib_obj::println(tmp15);
				}
			}
			HX_STACK_LINE(74)
			return null();
		}
		HX_STACK_LINE(76)
		::haxor::core::Resource old_item = p_item;		HX_STACK_VAR(old_item,"old_item");
		HX_STACK_LINE(77)
		Dynamic tmp4 = this->list;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(77)
		int tmp5 = this->m_length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(77)
		int tmp6 = (tmp5 - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(77)
		Dynamic tmp7 = tmp4->__GetItem(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(77)
		::haxor::core::Resource new_item = ((::haxor::core::Resource)(tmp7));		HX_STACK_VAR(new_item,"new_item");
		HX_STACK_LINE(78)
		Array< int > tmp8 = new_item->__pid;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(78)
		int tmp9 = this->__cid;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(78)
		Array< int > tmp10 = old_item->__pid;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(78)
		int tmp11 = this->__cid;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(78)
		int tmp12 = tmp10->__get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(78)
		tmp8[tmp9] = tmp12;
		HX_STACK_LINE(79)
		Array< int > tmp13 = old_item->__pid;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(79)
		int tmp14 = this->__cid;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(79)
		tmp13[tmp14] = (int)-1;
		HX_STACK_LINE(80)
		Dynamic tmp15 = this->list;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(80)
		int tmp16 = iid;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(80)
		Dynamic tmp17 = ((Dynamic)(new_item));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(80)
		hx::IndexRef((tmp15).mPtr,tmp16) = tmp17;
		HX_STACK_LINE(81)
		Dynamic tmp18 = this->list;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(81)
		int tmp19 = this->m_length;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(81)
		int tmp20 = (tmp19 - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(81)
		Dynamic tmp21 = ((Dynamic)(old_item));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(81)
		hx::IndexRef((tmp18).mPtr,tmp20) = tmp21;
		HX_STACK_LINE(82)
		(this->m_length)--;
	}
return null();
}


Void Process_obj::Swap( Dynamic p_a,Dynamic p_b,hx::Null< bool >  __o_p_index_only){
bool p_index_only = __o_p_index_only.Default(false);
	HX_STACK_FRAME("haxor.context.Process","Swap",0xff548cbd,"haxor.context.Process.Swap","haxor/context/Process.hx",92,0x5f329a1c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_a,"p_a")
	HX_STACK_ARG(p_b,"p_b")
	HX_STACK_ARG(p_index_only,"p_index_only")
{
		HX_STACK_LINE(93)
		::haxor::core::Resource ra = ((::haxor::core::Resource)(p_a));		HX_STACK_VAR(ra,"ra");
		HX_STACK_LINE(94)
		::haxor::core::Resource rb = ((::haxor::core::Resource)(p_b));		HX_STACK_VAR(rb,"rb");
		HX_STACK_LINE(95)
		Array< int > tmp = ra->__pid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(95)
		int tmp1 = this->__cid;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(95)
		int tmp2 = tmp->__get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(95)
		int ia = tmp2;		HX_STACK_VAR(ia,"ia");
		HX_STACK_LINE(96)
		bool tmp3 = (ia < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(96)
		if ((tmp3)){
			HX_STACK_LINE(96)
			return null();
		}
		HX_STACK_LINE(97)
		Array< int > tmp4 = rb->__pid;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(97)
		int tmp5 = this->__cid;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(97)
		int tmp6 = tmp4->__get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(97)
		int ib = tmp6;		HX_STACK_VAR(ib,"ib");
		HX_STACK_LINE(98)
		bool tmp7 = (ib < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(98)
		if ((tmp7)){
			HX_STACK_LINE(98)
			return null();
		}
		HX_STACK_LINE(100)
		bool tmp8 = p_index_only;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(100)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(100)
		if ((tmp9)){
			HX_STACK_LINE(102)
			Dynamic tmp10 = this->list;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(102)
			int tmp11 = ia;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(102)
			Dynamic tmp12 = p_b;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(102)
			hx::IndexRef((tmp10).mPtr,tmp11) = tmp12;
			HX_STACK_LINE(103)
			Dynamic tmp13 = this->list;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(103)
			int tmp14 = ib;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(103)
			Dynamic tmp15 = p_a;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(103)
			hx::IndexRef((tmp13).mPtr,tmp14) = tmp15;
		}
		HX_STACK_LINE(106)
		Array< int > tmp10 = rb->__pid;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(106)
		int tmp11 = this->__cid;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(106)
		int tmp12 = ia;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(106)
		tmp10[tmp11] = tmp12;
		HX_STACK_LINE(107)
		Array< int > tmp13 = ra->__pid;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(107)
		int tmp14 = this->__cid;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(107)
		int tmp15 = ib;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(107)
		tmp13[tmp14] = tmp15;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Process_obj,Swap,(void))

Void Process_obj::Clear( ){
{
		HX_STACK_FRAME("haxor.context.Process","Clear",0x2cfaf423,"haxor.context.Process.Clear","haxor/context/Process.hx",114,0x5f329a1c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(115)
		this->m_length = (int)0;
		HX_STACK_LINE(116)
		Dynamic tmp = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(116)
		this->list = tmp;
	}
return null();
}


Void Process_obj::Sort( Dynamic p_method){
{
		HX_STACK_FRAME("haxor.context.Process","Sort",0xff4e8988,"haxor.context.Process.Sort","haxor/context/Process.hx",124,0x5f329a1c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_method,"p_method")
		HX_STACK_LINE(125)
		Dynamic tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(125)
		Dynamic tmp1 = p_method;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(125)
		tmp->__Field(HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"), hx::paccDynamic )(tmp1);
		HX_STACK_LINE(126)
		{
			HX_STACK_LINE(126)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(126)
			int tmp2 = this->m_length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(126)
			int _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(126)
			while((true)){
				HX_STACK_LINE(126)
				bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(126)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(126)
				if ((tmp4)){
					HX_STACK_LINE(126)
					break;
				}
				HX_STACK_LINE(126)
				int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(126)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(128)
				Dynamic tmp6 = this->list;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(128)
				int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(128)
				Dynamic tmp8 = tmp6->__GetItem(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(128)
				::haxor::core::Resource it = ((::haxor::core::Resource)(tmp8));		HX_STACK_VAR(it,"it");
				HX_STACK_LINE(129)
				bool tmp9 = (it != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(129)
				if ((tmp9)){
					HX_STACK_LINE(129)
					Array< int > tmp10 = it->__pid;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(129)
					int tmp11 = this->__cid;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(129)
					int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(129)
					tmp10[tmp11] = tmp12;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Process_obj,Sort,(void))

::String Process_obj::ToString( ){
	HX_STACK_FRAME("haxor.context.Process","ToString",0x12128fd6,"haxor.context.Process.ToString","haxor/context/Process.hx",138,0x5f329a1c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(139)
	::String log = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(log,"log");
	HX_STACK_LINE(140)
	{
		HX_STACK_LINE(140)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(140)
		int tmp = this->m_length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(140)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(140)
		while((true)){
			HX_STACK_LINE(140)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(140)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(140)
			if ((tmp2)){
				HX_STACK_LINE(140)
				break;
			}
			HX_STACK_LINE(140)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(140)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(142)
			Dynamic tmp4 = this->list;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(142)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(142)
			Dynamic tmp6 = tmp4->__GetItem(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(142)
			::haxor::core::Resource it = ((::haxor::core::Resource)(tmp6));		HX_STACK_VAR(it,"it");
			HX_STACK_LINE(143)
			::String tmp7 = it->get_name();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(143)
			::String tmp8 = (HX_HCSTRING("[","\x5b","\x00","\x00","\x00") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(143)
			::String tmp9 = (tmp8 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(143)
			Array< int > tmp10 = it->__pid;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(143)
			int tmp11 = this->__cid;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(143)
			int tmp12 = tmp10->__get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(143)
			::String tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(143)
			::String tmp14 = (tmp13 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(143)
			hx::AddEq(log,tmp14);
		}
	}
	HX_STACK_LINE(145)
	::String tmp = log;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(145)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Process_obj,ToString,return )


Process_obj::Process_obj()
{
}

void Process_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Process);
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(m_length,"m_length");
	::haxor::context::BaseProcess_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Process_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(m_length,"m_length");
	::haxor::context::BaseProcess_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Process_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"Add") ) { return Add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		if (HX_FIELD_EQ(inName,"Swap") ) { return Swap_dyn(); }
		if (HX_FIELD_EQ(inName,"Sort") ) { return Sort_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"Clear") ) { return Clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"Remove") ) { return Remove_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_length") ) { return m_length; }
		if (HX_FIELD_EQ(inName,"ToString") ) { return ToString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Process_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_length") ) { m_length=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Process_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Process_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"));
	outFields->push(HX_HCSTRING("m_length","\xb8","\x3d","\xf9","\x67"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Process_obj,list),HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47")},
	{hx::fsInt,(int)offsetof(Process_obj,m_length),HX_HCSTRING("m_length","\xb8","\x3d","\xf9","\x67")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("m_length","\xb8","\x3d","\xf9","\x67"),
	HX_HCSTRING("Add","\x01","\xaa","\x31","\x00"),
	HX_HCSTRING("Remove","\x64","\x10","\x1d","\x39"),
	HX_HCSTRING("Swap","\xb3","\x56","\x37","\x37"),
	HX_HCSTRING("Clear","\x6d","\xe1","\x88","\xdb"),
	HX_HCSTRING("Sort","\x7e","\x53","\x31","\x37"),
	HX_HCSTRING("ToString","\xcc","\x8c","\x20","\x12"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Process_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Process_obj::__mClass,"__mClass");
};

#endif

hx::Class Process_obj::__mClass;

void Process_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.context.Process","\xa4","\xe6","\x16","\xcc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Process_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Process_obj >;
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
} // end namespace context
