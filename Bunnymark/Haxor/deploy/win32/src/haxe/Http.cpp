#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
#endif
#ifndef INCLUDED_haxe_Http
#include <haxe/Http.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_haxe_io_BytesOutput
#include <haxe/io/BytesOutput.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_sys_net_Host
#include <sys/net/Host.h>
#endif
#ifndef INCLUDED_sys_net_Socket
#include <sys/net/Socket.h>
#endif
namespace haxe{

Void Http_obj::__construct(::String url)
{
HX_STACK_FRAME("haxe.Http","new",0x57ac51e2,"haxe.Http.new","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/haxe/Http.hx",88,0x89528ddc)
HX_STACK_THIS(this)
HX_STACK_ARG(url,"url")
{
	HX_STACK_LINE(89)
	this->url = url;
	HX_STACK_LINE(90)
	::List tmp = ::List_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(90)
	this->headers = tmp;
	HX_STACK_LINE(91)
	::List tmp1 = ::List_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(91)
	this->params = tmp1;
	HX_STACK_LINE(96)
	this->cnxTimeout = (int)10;
}
;
	return null();
}

//Http_obj::~Http_obj() { }

Dynamic Http_obj::__CreateEmpty() { return  new Http_obj; }
hx::ObjectPtr< Http_obj > Http_obj::__new(::String url)
{  hx::ObjectPtr< Http_obj > _result_ = new Http_obj();
	_result_->__construct(url);
	return _result_;}

Dynamic Http_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Http_obj > _result_ = new Http_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Http_obj::request( Dynamic post){
{
		HX_STACK_FRAME("haxe.Http","request",0xb2c949d1,"haxe.Http.request","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/haxe/Http.hx",195,0x89528ddc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(post,"post")
		HX_STACK_LINE(195)
		::haxe::Http _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(196)
		::haxe::Http me = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(me,"me");
		HX_STACK_LINE(332)
		::haxe::Http me1 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(me1,"me1");
		HX_STACK_LINE(333)
		::haxe::io::BytesOutput tmp = ::haxe::io::BytesOutput_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(333)
		::haxe::io::BytesOutput output = tmp;		HX_STACK_VAR(output,"output");
		HX_STACK_LINE(334)
		Dynamic tmp1 = this->onError_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(334)
		Dynamic old = tmp1;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(335)
		Array< bool > err = Array_obj< bool >::__new().Add(false);		HX_STACK_VAR(err,"err");

		HX_BEGIN_LOCAL_FUNC_S5(hx::LocalFunc,_Function_1_1,Dynamic,old,::haxe::Http,_g,::haxe::Http,me1,::haxe::io::BytesOutput,output,Array< bool >,err)
		int __ArgCount() const { return 1; }
		Void run(::String e){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/haxe/Http.hx",336,0x89528ddc)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(340)
				::haxe::io::Bytes tmp2 = output->getBytes();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(340)
				::String tmp3 = tmp2->toString();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(340)
				me1->responseData = tmp3;
				HX_STACK_LINE(342)
				err[(int)0] = true;
				HX_STACK_LINE(344)
				_g->onError = old;
				HX_STACK_LINE(345)
				::String tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(345)
				_g->onError(tmp4);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(336)
		this->onError =  Dynamic(new _Function_1_1(old,_g,me1,output,err));
		HX_STACK_LINE(347)
		Dynamic tmp2 = post;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(347)
		::haxe::io::BytesOutput tmp3 = output;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(347)
		this->customRequest(tmp2,tmp3,null(),null());
		HX_STACK_LINE(348)
		bool tmp4 = err->__get((int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(348)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(348)
		if ((tmp5)){
			HX_STACK_LINE(352)
			::haxe::io::Bytes tmp6 = output->getBytes();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(352)
			::String tmp7 = tmp6->toString();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(352)
			::String tmp8 = me1->responseData = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(352)
			me1->onData(tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Http_obj,request,(void))

Void Http_obj::customRequest( bool post,::haxe::io::Output api,Dynamic sock,::String method){
{
		HX_STACK_FRAME("haxe.Http","customRequest",0x68e97fa0,"haxe.Http.customRequest","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/haxe/Http.hx",371,0x89528ddc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(post,"post")
		HX_STACK_ARG(api,"api")
		HX_STACK_ARG(sock,"sock")
		HX_STACK_ARG(method,"method")
		HX_STACK_LINE(372)
		this->responseData = null();
		HX_STACK_LINE(373)
		::EReg tmp = ::EReg_obj::__new(HX_HCSTRING("^(https?://)?([a-zA-Z\\.0-9_-]+)(:[0-9]+)?(.*)$","\x00","\x3e","\x3a","\x6c"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(373)
		::EReg url_regexp = tmp;		HX_STACK_VAR(url_regexp,"url_regexp");
		HX_STACK_LINE(374)
		::String tmp1 = this->url;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(374)
		bool tmp2 = url_regexp->match(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(374)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(374)
		if ((tmp3)){
			HX_STACK_LINE(375)
			this->onError(HX_HCSTRING("Invalid URL","\x86","\x55","\xd0","\x76"));
			HX_STACK_LINE(376)
			return null();
		}
		HX_STACK_LINE(378)
		::String tmp4 = url_regexp->matched((int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(378)
		bool tmp5 = (tmp4 == HX_HCSTRING("https://","\xcf","\xb4","\xae","\x3e"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(378)
		bool secure = tmp5;		HX_STACK_VAR(secure,"secure");
		HX_STACK_LINE(379)
		bool tmp6 = (sock == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(379)
		if ((tmp6)){
			HX_STACK_LINE(380)
			bool tmp7 = secure;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(380)
			if ((tmp7)){
				HX_STACK_LINE(388)
				HX_STACK_DO_THROW(HX_HCSTRING("Https is only supported with -lib hxssl","\xe9","\xc3","\x05","\x32"));
			}
			else{
				HX_STACK_LINE(391)
				::sys::net::Socket tmp8 = ::sys::net::Socket_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(391)
				sock = tmp8;
			}
		}
		HX_STACK_LINE(393)
		::String tmp7 = url_regexp->matched((int)2);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(393)
		::String host = tmp7;		HX_STACK_VAR(host,"host");
		HX_STACK_LINE(394)
		::String tmp8 = url_regexp->matched((int)3);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(394)
		::String portString = tmp8;		HX_STACK_VAR(portString,"portString");
		HX_STACK_LINE(395)
		::String tmp9 = url_regexp->matched((int)4);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(395)
		::String request = tmp9;		HX_STACK_VAR(request,"request");
		HX_STACK_LINE(396)
		bool tmp10 = (request == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(396)
		if ((tmp10)){
			HX_STACK_LINE(397)
			request = HX_HCSTRING("/","\x2f","\x00","\x00","\x00");
		}
		HX_STACK_LINE(398)
		bool tmp11 = (portString == null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(398)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(398)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(398)
		if ((tmp12)){
			HX_STACK_LINE(398)
			tmp13 = (portString == HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(398)
			tmp13 = true;
		}
		HX_STACK_LINE(398)
		Dynamic tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(398)
		if ((tmp13)){
			HX_STACK_LINE(398)
			bool tmp15 = secure;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(398)
			if ((tmp15)){
				HX_STACK_LINE(398)
				tmp14 = (int)443;
			}
			else{
				HX_STACK_LINE(398)
				tmp14 = (int)80;
			}
		}
		else{
			HX_STACK_LINE(398)
			int tmp15 = (portString.length - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(398)
			::String tmp16 = portString.substr((int)1,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(398)
			tmp14 = ::Std_obj::parseInt(tmp16);
		}
		HX_STACK_LINE(398)
		Dynamic port = tmp14;		HX_STACK_VAR(port,"port");
		HX_STACK_LINE(399)
		Dynamic data;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(401)
		Dynamic tmp15 = this->file;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(401)
		bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(401)
		bool multipart = tmp16;		HX_STACK_VAR(multipart,"multipart");
		HX_STACK_LINE(402)
		::String boundary = null();		HX_STACK_VAR(boundary,"boundary");
		HX_STACK_LINE(403)
		::String uri = null();		HX_STACK_VAR(uri,"uri");
		HX_STACK_LINE(404)
		bool tmp17 = multipart;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(404)
		if ((tmp17)){
			HX_STACK_LINE(405)
			post = true;
			HX_STACK_LINE(406)
			int tmp18 = ::Std_obj::random((int)1000);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(406)
			::String tmp19 = ::Std_obj::string(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(406)
			int tmp20 = ::Std_obj::random((int)1000);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(406)
			::String tmp21 = ::Std_obj::string(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(406)
			::String tmp22 = (tmp19 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(406)
			int tmp23 = ::Std_obj::random((int)1000);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(406)
			::String tmp24 = ::Std_obj::string(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(406)
			::String tmp25 = (tmp22 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(406)
			int tmp26 = ::Std_obj::random((int)1000);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(406)
			::String tmp27 = ::Std_obj::string(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(406)
			::String tmp28 = (tmp25 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(406)
			boundary = tmp28;
			HX_STACK_LINE(407)
			while((true)){
				HX_STACK_LINE(407)
				bool tmp29 = (boundary.length < (int)38);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(407)
				bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(407)
				if ((tmp30)){
					HX_STACK_LINE(407)
					break;
				}
				HX_STACK_LINE(408)
				::String tmp31 = (HX_HCSTRING("-","\x2d","\x00","\x00","\x00") + boundary);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(408)
				boundary = tmp31;
			}
			HX_STACK_LINE(409)
			::StringBuf tmp29 = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(409)
			::StringBuf b = tmp29;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(410)
			{
				HX_STACK_LINE(410)
				::List tmp30 = this->params;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(410)
				Dynamic tmp31 = tmp30->h;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(410)
				::_List::ListIterator tmp32 = ::_List::ListIterator_obj::__new(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(410)
				::_List::ListIterator _g = tmp32;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(410)
				while((true)){
					HX_STACK_LINE(410)
					bool tmp33 = (_g->head != null());		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(410)
					bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(410)
					if ((tmp34)){
						HX_STACK_LINE(410)
						break;
					}
					HX_STACK_LINE(410)
					Dynamic tmp35;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(410)
					{
						HX_STACK_LINE(410)
						Dynamic tmp36 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(410)
						_g->val = tmp36;
						HX_STACK_LINE(410)
						Dynamic tmp37 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(410)
						_g->head = tmp37;
						HX_STACK_LINE(410)
						tmp35 = _g->val;
					}
					HX_STACK_LINE(410)
					Dynamic p = tmp35;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(411)
					b->add(HX_HCSTRING("--","\x60","\x27","\x00","\x00"));
					HX_STACK_LINE(412)
					::String tmp36 = boundary;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(412)
					b->add(tmp36);
					HX_STACK_LINE(413)
					b->add(HX_HCSTRING("\r\n","\x5d","\x0b","\x00","\x00"));
					HX_STACK_LINE(414)
					b->add(HX_HCSTRING("Content-Disposition: form-data; name=\"","\xbf","\x46","\x3a","\x1c"));
					HX_STACK_LINE(415)
					::String tmp37 = p->__Field(HX_HCSTRING("param","\x8d","\x80","\x55","\xbd"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(415)
					b->add(tmp37);
					HX_STACK_LINE(416)
					b->add(HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));
					HX_STACK_LINE(417)
					b->add(HX_HCSTRING("\r\n","\x5d","\x0b","\x00","\x00"));
					HX_STACK_LINE(418)
					b->add(HX_HCSTRING("\r\n","\x5d","\x0b","\x00","\x00"));
					HX_STACK_LINE(419)
					::String tmp38 = p->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic );		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(419)
					b->add(tmp38);
					HX_STACK_LINE(420)
					b->add(HX_HCSTRING("\r\n","\x5d","\x0b","\x00","\x00"));
				}
			}
			HX_STACK_LINE(422)
			b->add(HX_HCSTRING("--","\x60","\x27","\x00","\x00"));
			HX_STACK_LINE(423)
			::String tmp30 = boundary;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(423)
			b->add(tmp30);
			HX_STACK_LINE(424)
			b->add(HX_HCSTRING("\r\n","\x5d","\x0b","\x00","\x00"));
			HX_STACK_LINE(425)
			b->add(HX_HCSTRING("Content-Disposition: form-data; name=\"","\xbf","\x46","\x3a","\x1c"));
			HX_STACK_LINE(426)
			Dynamic tmp31 = this->file;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(426)
			::String tmp32 = tmp31->__Field(HX_HCSTRING("param","\x8d","\x80","\x55","\xbd"), hx::paccDynamic );		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(426)
			b->add(tmp32);
			HX_STACK_LINE(427)
			b->add(HX_HCSTRING("\"; filename=\"","\xb3","\x3a","\xe5","\x4f"));
			HX_STACK_LINE(428)
			Dynamic tmp33 = this->file;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(428)
			::String tmp34 = tmp33->__Field(HX_HCSTRING("filename","\xc7","\x2e","\x6a","\x77"), hx::paccDynamic );		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(428)
			b->add(tmp34);
			HX_STACK_LINE(429)
			b->add(HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));
			HX_STACK_LINE(430)
			b->add(HX_HCSTRING("\r\n","\x5d","\x0b","\x00","\x00"));
			HX_STACK_LINE(431)
			Dynamic tmp35 = this->file;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(431)
			::String tmp36 = tmp35->__Field(HX_HCSTRING("mimeType","\x8e","\x56","\x09","\x5d"), hx::paccDynamic );		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(431)
			::String tmp37 = (HX_HCSTRING("Content-Type: ","\xf4","\x2b","\xe6","\x1d") + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(431)
			::String tmp38 = (tmp37 + HX_HCSTRING("\r\n","\x5d","\x0b","\x00","\x00"));		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(431)
			::String tmp39 = (tmp38 + HX_HCSTRING("\r\n","\x5d","\x0b","\x00","\x00"));		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(431)
			b->add(tmp39);
			HX_STACK_LINE(432)
			::String tmp40 = b->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(432)
			uri = tmp40;
		}
		else{
			HX_STACK_LINE(434)
			::List tmp18 = this->params;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(434)
			Dynamic tmp19 = tmp18->h;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(434)
			::_List::ListIterator tmp20 = ::_List::ListIterator_obj::__new(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(434)
			::_List::ListIterator _g = tmp20;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(434)
			while((true)){
				HX_STACK_LINE(434)
				bool tmp21 = (_g->head != null());		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(434)
				bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(434)
				if ((tmp22)){
					HX_STACK_LINE(434)
					break;
				}
				HX_STACK_LINE(434)
				Dynamic tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(434)
				{
					HX_STACK_LINE(434)
					Dynamic tmp24 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(434)
					_g->val = tmp24;
					HX_STACK_LINE(434)
					Dynamic tmp25 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(434)
					_g->head = tmp25;
					HX_STACK_LINE(434)
					tmp23 = _g->val;
				}
				HX_STACK_LINE(434)
				Dynamic p = tmp23;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(435)
				bool tmp24 = (uri == null());		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(435)
				if ((tmp24)){
					HX_STACK_LINE(436)
					uri = HX_HCSTRING("","\x00","\x00","\x00","\x00");
				}
				else{
					HX_STACK_LINE(438)
					hx::AddEq(uri,HX_HCSTRING("&","\x26","\x00","\x00","\x00"));
				}
				HX_STACK_LINE(439)
				::String tmp25 = p->__Field(HX_HCSTRING("param","\x8d","\x80","\x55","\xbd"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(439)
				::String tmp26 = ::StringTools_obj::urlEncode(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(439)
				::String tmp27 = (tmp26 + HX_HCSTRING("=","\x3d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(439)
				::String tmp28 = p->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(439)
				::String tmp29 = ::StringTools_obj::urlEncode(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(439)
				::String tmp30 = (tmp27 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(439)
				hx::AddEq(uri,tmp30);
			}
		}
		HX_STACK_LINE(443)
		::StringBuf tmp18 = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(443)
		::StringBuf b = tmp18;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(444)
		bool tmp19 = (method != null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(444)
		if ((tmp19)){
			HX_STACK_LINE(445)
			::String tmp20 = method;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(445)
			b->add(tmp20);
			HX_STACK_LINE(446)
			b->add(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(447)
			bool tmp20 = post;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(447)
			if ((tmp20)){
				HX_STACK_LINE(448)
				b->add(HX_HCSTRING("POST ","\xc0","\x87","\x85","\x44"));
			}
			else{
				HX_STACK_LINE(450)
				b->add(HX_HCSTRING("GET ","\xea","\xca","\x22","\x2f"));
			}
		}
		HX_STACK_LINE(452)
		Dynamic tmp20 = ::haxe::Http_obj::PROXY;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(452)
		bool tmp21 = (tmp20 != null());		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(452)
		if ((tmp21)){
			HX_STACK_LINE(453)
			b->add(HX_HCSTRING("http://","\x52","\x75","\xcd","\x5a"));
			HX_STACK_LINE(454)
			::String tmp22 = host;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(454)
			b->add(tmp22);
			HX_STACK_LINE(455)
			bool tmp23 = (port != (int)80);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(455)
			if ((tmp23)){
				HX_STACK_LINE(456)
				b->add(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));
				HX_STACK_LINE(457)
				Dynamic tmp24 = port;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(457)
				b->add(tmp24);
			}
		}
		HX_STACK_LINE(460)
		::String tmp22 = request;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(460)
		b->add(tmp22);
		HX_STACK_LINE(462)
		bool tmp23 = post;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(462)
		bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(462)
		bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(462)
		bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(462)
		if ((tmp25)){
			HX_STACK_LINE(462)
			tmp26 = (uri != null());
		}
		else{
			HX_STACK_LINE(462)
			tmp26 = false;
		}
		HX_STACK_LINE(462)
		if ((tmp26)){
			HX_STACK_LINE(463)
			int tmp27 = request.indexOf(HX_HCSTRING("?","\x3f","\x00","\x00","\x00"),(int)0);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(463)
			bool tmp28 = (tmp27 >= (int)0);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(463)
			if ((tmp28)){
				HX_STACK_LINE(464)
				b->add(HX_HCSTRING("&","\x26","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(466)
				b->add(HX_HCSTRING("?","\x3f","\x00","\x00","\x00"));
			}
			HX_STACK_LINE(467)
			::String tmp29 = uri;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(467)
			b->add(tmp29);
		}
		HX_STACK_LINE(469)
		::String tmp27 = (HX_HCSTRING(" HTTP/1.1\r\nHost: ","\xd8","\xa9","\xd9","\x24") + host);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(469)
		::String tmp28 = (tmp27 + HX_HCSTRING("\r\n","\x5d","\x0b","\x00","\x00"));		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(469)
		b->add(tmp28);
		HX_STACK_LINE(470)
		::String tmp29 = this->postData;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(470)
		bool tmp30 = (tmp29 != null());		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(470)
		if ((tmp30)){
			HX_STACK_LINE(471)
			::String tmp31 = this->postData;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(471)
			int tmp32 = tmp31.length;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(471)
			::String tmp33 = (HX_HCSTRING("Content-Length: ","\x20","\xde","\x22","\x7c") + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(471)
			::String tmp34 = (tmp33 + HX_HCSTRING("\r\n","\x5d","\x0b","\x00","\x00"));		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(471)
			b->add(tmp34);
		}
		else{
			HX_STACK_LINE(472)
			bool tmp31 = post;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(472)
			bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(472)
			if ((tmp31)){
				HX_STACK_LINE(472)
				tmp32 = (uri != null());
			}
			else{
				HX_STACK_LINE(472)
				tmp32 = false;
			}
			HX_STACK_LINE(472)
			if ((tmp32)){
				HX_STACK_LINE(473)
				bool tmp33 = multipart;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(473)
				bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(473)
				bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(473)
				if ((tmp34)){
					HX_STACK_LINE(473)
					::List tmp36 = this->headers;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(473)
					::List tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(473)
					::List tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");

					HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_4_1)
					int __ArgCount() const { return 1; }
					bool run(Dynamic h){
						HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/haxe/Http.hx",473,0x89528ddc)
						HX_STACK_ARG(h,"h")
						{
							HX_STACK_LINE(473)
							bool tmp39 = (h->__Field(HX_HCSTRING("header","\x8d","\x09","\x00","\xfd"), hx::paccDynamic ) == HX_HCSTRING("Content-Type","\xce","\x69","\x5d","\x3c"));		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(473)
							bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(473)
							bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(473)
							return tmp41;
						}
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					HX_STACK_LINE(473)
					bool tmp39 = ::Lambda_obj::exists(tmp38, Dynamic(new _Function_4_1()));		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(473)
					bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(473)
					bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(473)
					tmp35 = !(tmp41);
				}
				else{
					HX_STACK_LINE(473)
					tmp35 = true;
				}
				HX_STACK_LINE(473)
				if ((tmp35)){
					HX_STACK_LINE(474)
					b->add(HX_HCSTRING("Content-Type: ","\xf4","\x2b","\xe6","\x1d"));
					HX_STACK_LINE(475)
					bool tmp36 = multipart;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(475)
					if ((tmp36)){
						HX_STACK_LINE(476)
						b->add(HX_HCSTRING("multipart/form-data","\xf0","\xf8","\x88","\xdb"));
						HX_STACK_LINE(477)
						b->add(HX_HCSTRING("; boundary=","\xee","\xf7","\xf2","\x1a"));
						HX_STACK_LINE(478)
						::String tmp37 = boundary;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(478)
						b->add(tmp37);
					}
					else{
						HX_STACK_LINE(480)
						b->add(HX_HCSTRING("application/x-www-form-urlencoded","\x9e","\x61","\x91","\xfa"));
					}
					HX_STACK_LINE(481)
					b->add(HX_HCSTRING("\r\n","\x5d","\x0b","\x00","\x00"));
				}
				HX_STACK_LINE(483)
				bool tmp36 = multipart;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(483)
				if ((tmp36)){
					HX_STACK_LINE(484)
					int tmp37 = uri.length;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(484)
					Dynamic tmp38 = this->file;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(484)
					int tmp39 = tmp38->__Field(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(484)
					int tmp40 = (tmp37 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(484)
					int tmp41 = boundary.length;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(484)
					int tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(484)
					int tmp43 = (tmp42 + (int)6);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(484)
					::String tmp44 = (HX_HCSTRING("Content-Length: ","\x20","\xde","\x22","\x7c") + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(484)
					::String tmp45 = (tmp44 + HX_HCSTRING("\r\n","\x5d","\x0b","\x00","\x00"));		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(484)
					b->add(tmp45);
				}
				else{
					HX_STACK_LINE(486)
					::String tmp37 = (HX_HCSTRING("Content-Length: ","\x20","\xde","\x22","\x7c") + uri.length);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(486)
					::String tmp38 = (tmp37 + HX_HCSTRING("\r\n","\x5d","\x0b","\x00","\x00"));		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(486)
					b->add(tmp38);
				}
			}
		}
		HX_STACK_LINE(488)
		{
			HX_STACK_LINE(488)
			::List tmp31 = this->headers;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(488)
			Dynamic tmp32 = tmp31->h;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(488)
			::_List::ListIterator tmp33 = ::_List::ListIterator_obj::__new(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(488)
			::_List::ListIterator _g = tmp33;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(488)
			while((true)){
				HX_STACK_LINE(488)
				bool tmp34 = (_g->head != null());		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(488)
				bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(488)
				if ((tmp35)){
					HX_STACK_LINE(488)
					break;
				}
				HX_STACK_LINE(488)
				Dynamic tmp36;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(488)
				{
					HX_STACK_LINE(488)
					Dynamic tmp37 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(488)
					_g->val = tmp37;
					HX_STACK_LINE(488)
					Dynamic tmp38 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(488)
					_g->head = tmp38;
					HX_STACK_LINE(488)
					tmp36 = _g->val;
				}
				HX_STACK_LINE(488)
				Dynamic h = tmp36;		HX_STACK_VAR(h,"h");
				HX_STACK_LINE(489)
				::String tmp37 = h->__Field(HX_HCSTRING("header","\x8d","\x09","\x00","\xfd"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(489)
				b->add(tmp37);
				HX_STACK_LINE(490)
				b->add(HX_HCSTRING(": ","\xa6","\x32","\x00","\x00"));
				HX_STACK_LINE(491)
				::String tmp38 = h->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic );		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(491)
				b->add(tmp38);
				HX_STACK_LINE(492)
				b->add(HX_HCSTRING("\r\n","\x5d","\x0b","\x00","\x00"));
			}
		}
		HX_STACK_LINE(494)
		b->add(HX_HCSTRING("\r\n","\x5d","\x0b","\x00","\x00"));
		HX_STACK_LINE(495)
		::String tmp31 = this->postData;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(495)
		bool tmp32 = (tmp31 != null());		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(495)
		if ((tmp32)){
			HX_STACK_LINE(496)
			::String tmp33 = this->postData;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(496)
			b->add(tmp33);
		}
		else{
			HX_STACK_LINE(497)
			bool tmp33 = post;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(497)
			bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(497)
			if ((tmp33)){
				HX_STACK_LINE(497)
				tmp34 = (uri != null());
			}
			else{
				HX_STACK_LINE(497)
				tmp34 = false;
			}
			HX_STACK_LINE(497)
			if ((tmp34)){
				HX_STACK_LINE(498)
				::String tmp35 = uri;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(498)
				b->add(tmp35);
			}
		}
		HX_STACK_LINE(499)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(500)
			Dynamic tmp33 = ::haxe::Http_obj::PROXY;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(500)
			bool tmp34 = (tmp33 != null());		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(500)
			if ((tmp34)){
				HX_STACK_LINE(501)
				Dynamic tmp35 = ::haxe::Http_obj::PROXY;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(501)
				::String tmp36 = tmp35->__Field(HX_HCSTRING("host","\x68","\xcf","\x12","\x45"), hx::paccDynamic );		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(501)
				::sys::net::Host tmp37 = ::sys::net::Host_obj::__new(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(501)
				Dynamic tmp38 = ::haxe::Http_obj::PROXY;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(501)
				int tmp39 = tmp38->__Field(HX_HCSTRING("port","\x81","\x83","\x5c","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(501)
				sock->__Field(HX_HCSTRING("connect","\xea","\x3b","\x80","\x15"), hx::paccDynamic )(tmp37,tmp39);
			}
			else{
				HX_STACK_LINE(503)
				::sys::net::Host tmp35 = ::sys::net::Host_obj::__new(host);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(503)
				Dynamic tmp36 = port;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(503)
				sock->__Field(HX_HCSTRING("connect","\xea","\x3b","\x80","\x15"), hx::paccDynamic )(tmp35,tmp36);
			}
			HX_STACK_LINE(504)
			::String tmp35 = b->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(504)
			sock->__Field(HX_HCSTRING("write","\xdf","\x6c","\x59","\xd0"), hx::paccDynamic )(tmp35);
			HX_STACK_LINE(505)
			bool tmp36 = multipart;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(505)
			if ((tmp36)){
				HX_STACK_LINE(506)
				int bufsize = (int)4096;		HX_STACK_VAR(bufsize,"bufsize");
				HX_STACK_LINE(507)
				int tmp37 = bufsize;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(507)
				::haxe::io::Bytes tmp38 = ::haxe::io::Bytes_obj::alloc(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(507)
				::haxe::io::Bytes buf = tmp38;		HX_STACK_VAR(buf,"buf");
				HX_STACK_LINE(508)
				while((true)){
					HX_STACK_LINE(508)
					Dynamic tmp39 = this->file;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(508)
					int tmp40 = tmp39->__Field(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(508)
					bool tmp41 = (tmp40 > (int)0);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(508)
					bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(508)
					if ((tmp42)){
						HX_STACK_LINE(508)
						break;
					}
					HX_STACK_LINE(509)
					Dynamic tmp43 = this->file;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(509)
					int tmp44 = tmp43->__Field(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(509)
					int tmp45 = bufsize;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(509)
					bool tmp46 = (tmp44 > tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(509)
					int tmp47;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(509)
					if ((tmp46)){
						HX_STACK_LINE(509)
						tmp47 = bufsize;
					}
					else{
						HX_STACK_LINE(509)
						Dynamic tmp48 = this->file;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(509)
						tmp47 = tmp48->__Field(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"), hx::paccDynamic );
					}
					HX_STACK_LINE(509)
					int size = tmp47;		HX_STACK_VAR(size,"size");
					HX_STACK_LINE(510)
					int len = (int)0;		HX_STACK_VAR(len,"len");
					HX_STACK_LINE(511)
					try
					{
					HX_STACK_CATCHABLE(::haxe::io::Eof, 0);
					{
						HX_STACK_LINE(512)
						Dynamic tmp48 = this->file;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(512)
						::haxe::io::Bytes tmp49 = buf;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(512)
						int tmp50 = size;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(512)
						int tmp51 = tmp48->__Field(HX_HCSTRING("io","\xe6","\x5b","\x00","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("readBytes","\x35","\x55","\x7f","\x8e"), hx::paccDynamic )(tmp49,(int)0,tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(512)
						len = tmp51;
					}
					}
					catch(Dynamic __e){
						if (__e.IsClass< ::haxe::io::Eof >() ){
							HX_STACK_BEGIN_CATCH
							::haxe::io::Eof e = __e;{
								HX_STACK_LINE(513)
								break;
							}
						}
						else {
						    HX_STACK_DO_THROW(__e);
						}
					}
					HX_STACK_LINE(514)
					::haxe::io::Bytes tmp48 = buf;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(514)
					int tmp49 = len;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(514)
					sock->__Field(HX_HCSTRING("output","\x01","\x0f","\x81","\x0c"), hx::paccDynamic )->__Field(HX_HCSTRING("writeFullBytes","\x7d","\xe7","\x66","\xa4"), hx::paccDynamic )(tmp48,(int)0,tmp49);
					HX_STACK_LINE(515)
					Dynamic tmp50 = this->file;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(515)
					hx::SubEq(tmp50->__FieldRef(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c")),len);
				}
				HX_STACK_LINE(517)
				sock->__Field(HX_HCSTRING("write","\xdf","\x6c","\x59","\xd0"), hx::paccDynamic )(HX_HCSTRING("\r\n","\x5d","\x0b","\x00","\x00"));
				HX_STACK_LINE(518)
				sock->__Field(HX_HCSTRING("write","\xdf","\x6c","\x59","\xd0"), hx::paccDynamic )(HX_HCSTRING("--","\x60","\x27","\x00","\x00"));
				HX_STACK_LINE(519)
				::String tmp39 = boundary;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(519)
				sock->__Field(HX_HCSTRING("write","\xdf","\x6c","\x59","\xd0"), hx::paccDynamic )(tmp39);
				HX_STACK_LINE(520)
				sock->__Field(HX_HCSTRING("write","\xdf","\x6c","\x59","\xd0"), hx::paccDynamic )(HX_HCSTRING("--","\x60","\x27","\x00","\x00"));
			}
			HX_STACK_LINE(522)
			::haxe::io::Output tmp37 = api;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(522)
			Dynamic tmp38 = sock;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(522)
			this->readHttpResponse(tmp37,tmp38);
			HX_STACK_LINE(523)
			sock->__Field(HX_HCSTRING("close","\xb8","\x17","\x63","\x48"), hx::paccDynamic )();
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(525)
					try
					{
					HX_STACK_CATCHABLE(Dynamic, 0);
					{
						HX_STACK_LINE(525)
						sock->__Field(HX_HCSTRING("close","\xb8","\x17","\x63","\x48"), hx::paccDynamic )();
					}
					}
					catch(Dynamic __e){
						{
							HX_STACK_BEGIN_CATCH
							Dynamic e1 = __e;{
							}
						}
					}
					HX_STACK_LINE(526)
					Dynamic tmp33 = e;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(526)
					::String tmp34 = ::Std_obj::string(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(526)
					this->onError(tmp34);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Http_obj,customRequest,(void))

Void Http_obj::readHttpResponse( ::haxe::io::Output api,Dynamic sock){
{
		HX_STACK_FRAME("haxe.Http","readHttpResponse",0x6bff43dd,"haxe.Http.readHttpResponse","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/haxe/Http.hx",530,0x89528ddc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(api,"api")
		HX_STACK_ARG(sock,"sock")
		HX_STACK_LINE(532)
		::haxe::io::BytesBuffer tmp = ::haxe::io::BytesBuffer_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(532)
		::haxe::io::BytesBuffer b = tmp;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(533)
		int k = (int)4;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(534)
		::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::alloc((int)4);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(534)
		::haxe::io::Bytes s = tmp1;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(535)
		Float tmp2 = this->cnxTimeout;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(535)
		sock->__Field(HX_HCSTRING("setTimeout","\x1f","\x3f","\xd6","\x2b"), hx::paccDynamic )(tmp2);
		HX_STACK_LINE(536)
		while((true)){
			HX_STACK_LINE(537)
			::haxe::io::Bytes tmp3 = s;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(537)
			int tmp4 = k;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(537)
			int tmp5 = sock->__Field(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"), hx::paccDynamic )->__Field(HX_HCSTRING("readBytes","\x35","\x55","\x7f","\x8e"), hx::paccDynamic )(tmp3,(int)0,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(537)
			int p = tmp5;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(538)
			while((true)){
				HX_STACK_LINE(538)
				bool tmp6 = (p != k);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(538)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(538)
				if ((tmp7)){
					HX_STACK_LINE(538)
					break;
				}
				HX_STACK_LINE(539)
				::haxe::io::Bytes tmp8 = s;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(539)
				int tmp9 = p;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(539)
				int tmp10 = (k - p);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(539)
				int tmp11 = sock->__Field(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"), hx::paccDynamic )->__Field(HX_HCSTRING("readBytes","\x35","\x55","\x7f","\x8e"), hx::paccDynamic )(tmp8,tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(539)
				hx::AddEq(p,tmp11);
			}
			HX_STACK_LINE(540)
			{
				HX_STACK_LINE(540)
				bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(540)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(540)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(540)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(540)
				if ((tmp8)){
					HX_STACK_LINE(540)
					tmp9 = (k < (int)0);
				}
				else{
					HX_STACK_LINE(540)
					tmp9 = true;
				}
				HX_STACK_LINE(540)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(540)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(540)
				if ((tmp10)){
					HX_STACK_LINE(540)
					int tmp12 = k;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(540)
					int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(540)
					int tmp14 = s->length;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(540)
					tmp11 = (tmp13 > tmp14);
				}
				else{
					HX_STACK_LINE(540)
					tmp11 = true;
				}
				HX_STACK_LINE(540)
				if ((tmp11)){
					HX_STACK_LINE(540)
					HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
				}
				HX_STACK_LINE(540)
				Array< unsigned char > b1 = b->b;		HX_STACK_VAR(b1,"b1");
				HX_STACK_LINE(540)
				Array< unsigned char > b2 = s->b;		HX_STACK_VAR(b2,"b2");
				HX_STACK_LINE(540)
				{
					HX_STACK_LINE(540)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(540)
					int tmp12 = k;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(540)
					int _g = tmp12;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(540)
					while((true)){
						HX_STACK_LINE(540)
						bool tmp13 = (_g1 < _g);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(540)
						bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(540)
						if ((tmp14)){
							HX_STACK_LINE(540)
							break;
						}
						HX_STACK_LINE(540)
						int tmp15 = (_g1)++;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(540)
						int i = tmp15;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(540)
						unsigned char tmp16 = b2->__get(i);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(540)
						b->b->push(tmp16);
					}
				}
			}
			HX_STACK_LINE(541)
			int tmp6 = k;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(541)
			int _switch_1 = (tmp6);
			if (  ( _switch_1==(int)1)){
				HX_STACK_LINE(543)
				int tmp7 = s->b->__get((int)0);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(543)
				int c = tmp7;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(544)
				bool tmp8 = (c == (int)10);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(544)
				if ((tmp8)){
					HX_STACK_LINE(545)
					break;
				}
				HX_STACK_LINE(546)
				bool tmp9 = (c == (int)13);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(546)
				if ((tmp9)){
					HX_STACK_LINE(547)
					k = (int)3;
				}
				else{
					HX_STACK_LINE(549)
					k = (int)4;
				}
			}
			else if (  ( _switch_1==(int)2)){
				HX_STACK_LINE(551)
				int tmp7 = s->b->__get((int)1);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(551)
				int c = tmp7;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(552)
				bool tmp8 = (c == (int)10);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(552)
				if ((tmp8)){
					HX_STACK_LINE(553)
					int tmp9 = s->b->__get((int)0);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(553)
					bool tmp10 = (tmp9 == (int)13);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(553)
					if ((tmp10)){
						HX_STACK_LINE(554)
						break;
					}
					HX_STACK_LINE(555)
					k = (int)4;
				}
				else{
					HX_STACK_LINE(556)
					bool tmp9 = (c == (int)13);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(556)
					if ((tmp9)){
						HX_STACK_LINE(557)
						k = (int)3;
					}
					else{
						HX_STACK_LINE(559)
						k = (int)4;
					}
				}
			}
			else if (  ( _switch_1==(int)3)){
				HX_STACK_LINE(561)
				int tmp7 = s->b->__get((int)2);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(561)
				int c = tmp7;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(562)
				bool tmp8 = (c == (int)10);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(562)
				if ((tmp8)){
					HX_STACK_LINE(563)
					int tmp9 = s->b->__get((int)1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(563)
					bool tmp10 = (tmp9 != (int)13);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(563)
					if ((tmp10)){
						HX_STACK_LINE(564)
						k = (int)4;
					}
					else{
						HX_STACK_LINE(565)
						int tmp11 = s->b->__get((int)0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(565)
						bool tmp12 = (tmp11 != (int)10);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(565)
						if ((tmp12)){
							HX_STACK_LINE(566)
							k = (int)2;
						}
						else{
							HX_STACK_LINE(568)
							break;
						}
					}
				}
				else{
					HX_STACK_LINE(569)
					bool tmp9 = (c == (int)13);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(569)
					if ((tmp9)){
						HX_STACK_LINE(570)
						int tmp10 = s->b->__get((int)1);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(570)
						bool tmp11 = (tmp10 != (int)10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(570)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(570)
						bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(570)
						if ((tmp12)){
							HX_STACK_LINE(570)
							int tmp14 = s->b->__get((int)0);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(570)
							int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(570)
							tmp13 = (tmp15 != (int)13);
						}
						else{
							HX_STACK_LINE(570)
							tmp13 = true;
						}
						HX_STACK_LINE(570)
						if ((tmp13)){
							HX_STACK_LINE(571)
							k = (int)1;
						}
						else{
							HX_STACK_LINE(573)
							k = (int)3;
						}
					}
					else{
						HX_STACK_LINE(575)
						k = (int)4;
					}
				}
			}
			else if (  ( _switch_1==(int)4)){
				HX_STACK_LINE(577)
				int tmp7 = s->b->__get((int)3);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(577)
				int c = tmp7;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(578)
				bool tmp8 = (c == (int)10);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(578)
				if ((tmp8)){
					HX_STACK_LINE(579)
					int tmp9 = s->b->__get((int)2);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(579)
					bool tmp10 = (tmp9 != (int)13);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(579)
					if ((tmp10)){
						HX_STACK_LINE(580)
						continue;
					}
					else{
						HX_STACK_LINE(581)
						int tmp11 = s->b->__get((int)1);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(581)
						bool tmp12 = (tmp11 != (int)10);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(581)
						bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(581)
						bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(581)
						if ((tmp13)){
							HX_STACK_LINE(581)
							int tmp15 = s->b->__get((int)0);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(581)
							int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(581)
							tmp14 = (tmp16 != (int)13);
						}
						else{
							HX_STACK_LINE(581)
							tmp14 = true;
						}
						HX_STACK_LINE(581)
						if ((tmp14)){
							HX_STACK_LINE(582)
							k = (int)2;
						}
						else{
							HX_STACK_LINE(584)
							break;
						}
					}
				}
				else{
					HX_STACK_LINE(585)
					bool tmp9 = (c == (int)13);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(585)
					if ((tmp9)){
						HX_STACK_LINE(586)
						int tmp10 = s->b->__get((int)2);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(586)
						bool tmp11 = (tmp10 != (int)10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(586)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(586)
						bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(586)
						if ((tmp12)){
							HX_STACK_LINE(586)
							int tmp14 = s->b->__get((int)1);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(586)
							int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(586)
							tmp13 = (tmp15 != (int)13);
						}
						else{
							HX_STACK_LINE(586)
							tmp13 = true;
						}
						HX_STACK_LINE(586)
						if ((tmp13)){
							HX_STACK_LINE(587)
							k = (int)3;
						}
						else{
							HX_STACK_LINE(589)
							k = (int)1;
						}
					}
				}
			}
		}
		HX_STACK_LINE(596)
		::haxe::io::Bytes tmp3 = b->getBytes();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(596)
		::String tmp4 = tmp3->toString();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(596)
		Array< ::String > tmp5 = tmp4.split(HX_HCSTRING("\r\n","\x5d","\x0b","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(596)
		Array< ::String > headers = tmp5;		HX_STACK_VAR(headers,"headers");
		HX_STACK_LINE(598)
		::String tmp6 = headers->shift();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(598)
		::String response = tmp6;		HX_STACK_VAR(response,"response");
		HX_STACK_LINE(599)
		Array< ::String > tmp7 = response.split(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(599)
		Array< ::String > rp = tmp7;		HX_STACK_VAR(rp,"rp");
		HX_STACK_LINE(600)
		::String tmp8 = rp->__get((int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(600)
		Dynamic tmp9 = ::Std_obj::parseInt(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(600)
		Dynamic status = tmp9;		HX_STACK_VAR(status,"status");
		HX_STACK_LINE(601)
		bool tmp10 = (status == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(601)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(601)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(601)
		if ((tmp11)){
			HX_STACK_LINE(601)
			tmp12 = (status == null());
		}
		else{
			HX_STACK_LINE(601)
			tmp12 = true;
		}
		HX_STACK_LINE(601)
		if ((tmp12)){
			HX_STACK_LINE(602)
			HX_STACK_DO_THROW(HX_HCSTRING("Response status error","\x39","\x25","\x42","\xe1"));
		}
		HX_STACK_LINE(605)
		headers->pop();
		HX_STACK_LINE(606)
		headers->pop();
		HX_STACK_LINE(607)
		::haxe::ds::StringMap tmp13 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(607)
		this->responseHeaders = tmp13;
		HX_STACK_LINE(608)
		Dynamic size = null();		HX_STACK_VAR(size,"size");
		HX_STACK_LINE(609)
		bool chunked = false;		HX_STACK_VAR(chunked,"chunked");
		HX_STACK_LINE(610)
		{
			HX_STACK_LINE(610)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(610)
			while((true)){
				HX_STACK_LINE(610)
				bool tmp14 = (_g < headers->length);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(610)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(610)
				if ((tmp15)){
					HX_STACK_LINE(610)
					break;
				}
				HX_STACK_LINE(610)
				::String tmp16 = headers->__get(_g);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(610)
				::String hline = tmp16;		HX_STACK_VAR(hline,"hline");
				HX_STACK_LINE(610)
				++(_g);
				HX_STACK_LINE(611)
				Array< ::String > tmp17 = hline.split(HX_HCSTRING(": ","\xa6","\x32","\x00","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(611)
				Array< ::String > a = tmp17;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(612)
				::String tmp18 = a->shift();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(612)
				::String hname = tmp18;		HX_STACK_VAR(hname,"hname");
				HX_STACK_LINE(613)
				bool tmp19 = (a->length == (int)1);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(613)
				::String tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(613)
				if ((tmp19)){
					HX_STACK_LINE(613)
					tmp20 = a->__get((int)0);
				}
				else{
					HX_STACK_LINE(613)
					tmp20 = a->join(HX_HCSTRING(": ","\xa6","\x32","\x00","\x00"));
				}
				HX_STACK_LINE(613)
				::String hval = tmp20;		HX_STACK_VAR(hval,"hval");
				HX_STACK_LINE(614)
				::String tmp21 = hval;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(614)
				::String tmp22 = ::StringTools_obj::rtrim(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(614)
				::String tmp23 = ::StringTools_obj::ltrim(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(614)
				hval = tmp23;
				HX_STACK_LINE(615)
				::haxe::ds::StringMap tmp24 = this->responseHeaders;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(615)
				::String tmp25 = hname;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(615)
				::String tmp26 = hval;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(615)
				tmp24->set(tmp25,tmp26);
				HX_STACK_LINE(616)
				{
					HX_STACK_LINE(616)
					::String tmp27 = hname.toLowerCase();		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(616)
					::String _g1 = tmp27;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(616)
					::String tmp28 = _g1;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(616)
					::String _switch_2 = (tmp28);
					if (  ( _switch_2==HX_HCSTRING("content-length","\xba","\xf0","\xcc","\x86"))){
						HX_STACK_LINE(619)
						::String tmp29 = hval;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(619)
						Dynamic tmp30 = ::Std_obj::parseInt(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(619)
						size = tmp30;
					}
					else if (  ( _switch_2==HX_HCSTRING("transfer-encoding","\x75","\x95","\x2e","\x69"))){
						HX_STACK_LINE(621)
						::String tmp29 = hval.toLowerCase();		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(621)
						bool tmp30 = (tmp29 == HX_HCSTRING("chunked","\x0c","\x54","\xd3","\x50"));		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(621)
						chunked = tmp30;
					}
				}
			}
		}
		HX_STACK_LINE(625)
		Dynamic tmp14 = status;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(625)
		this->onStatus(tmp14);
		HX_STACK_LINE(627)
		::EReg tmp15 = ::EReg_obj::__new(HX_HCSTRING("^([0-9A-Fa-f]+)[ ]*\r\n","\xdf","\x97","\xed","\x19"),HX_HCSTRING("m","\x6d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(627)
		::EReg chunk_re = tmp15;		HX_STACK_VAR(chunk_re,"chunk_re");
		HX_STACK_LINE(628)
		this->chunk_size = null();
		HX_STACK_LINE(629)
		this->chunk_buf = null();
		HX_STACK_LINE(631)
		int bufsize = (int)1024;		HX_STACK_VAR(bufsize,"bufsize");
		HX_STACK_LINE(632)
		int tmp16 = bufsize;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(632)
		::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(632)
		::haxe::io::Bytes buf = tmp17;		HX_STACK_VAR(buf,"buf");
		HX_STACK_LINE(633)
		bool tmp18 = (size == null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(633)
		if ((tmp18)){
			HX_STACK_LINE(634)
			bool tmp19 = this->noShutdown;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(634)
			bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(634)
			if ((tmp20)){
				HX_STACK_LINE(635)
				sock->__Field(HX_HCSTRING("shutdown","\x96","\xfc","\x0b","\x6b"), hx::paccDynamic )(false,true);
			}
			HX_STACK_LINE(636)
			try
			{
			HX_STACK_CATCHABLE(::haxe::io::Eof, 0);
			{
				HX_STACK_LINE(637)
				while((true)){
					HX_STACK_LINE(638)
					::haxe::io::Bytes tmp21 = buf;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(638)
					int tmp22 = bufsize;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(638)
					int tmp23 = sock->__Field(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"), hx::paccDynamic )->__Field(HX_HCSTRING("readBytes","\x35","\x55","\x7f","\x8e"), hx::paccDynamic )(tmp21,(int)0,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(638)
					int len = tmp23;		HX_STACK_VAR(len,"len");
					HX_STACK_LINE(639)
					bool tmp24 = chunked;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(639)
					if ((tmp24)){
						HX_STACK_LINE(640)
						::EReg tmp25 = chunk_re;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(640)
						::haxe::io::Output tmp26 = api;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(640)
						::haxe::io::Bytes tmp27 = buf;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(640)
						int tmp28 = len;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(640)
						bool tmp29 = this->readChunk(tmp25,tmp26,tmp27,tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(640)
						bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(640)
						if ((tmp30)){
							HX_STACK_LINE(641)
							break;
						}
					}
					else{
						HX_STACK_LINE(643)
						::haxe::io::Bytes tmp25 = buf;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(643)
						int tmp26 = len;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(643)
						api->writeBytes(tmp25,(int)0,tmp26);
					}
				}
			}
			}
			catch(Dynamic __e){
				if (__e.IsClass< ::haxe::io::Eof >() ){
					HX_STACK_BEGIN_CATCH
					::haxe::io::Eof e = __e;{
					}
				}
				else {
				    HX_STACK_DO_THROW(__e);
				}
			}
		}
		else{
			HX_STACK_LINE(648)
			Dynamic tmp19 = size;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(648)
			api->prepare(tmp19);
			HX_STACK_LINE(649)
			try
			{
			HX_STACK_CATCHABLE(::haxe::io::Eof, 0);
			{
				HX_STACK_LINE(650)
				while((true)){
					HX_STACK_LINE(650)
					bool tmp20 = (size > (int)0);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(650)
					bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(650)
					if ((tmp21)){
						HX_STACK_LINE(650)
						break;
					}
					HX_STACK_LINE(651)
					::haxe::io::Bytes tmp22 = buf;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(651)
					bool tmp23 = (size > bufsize);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(651)
					int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(651)
					if ((tmp23)){
						HX_STACK_LINE(651)
						tmp24 = bufsize;
					}
					else{
						HX_STACK_LINE(651)
						tmp24 = size;
					}
					HX_STACK_LINE(651)
					int tmp25 = sock->__Field(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"), hx::paccDynamic )->__Field(HX_HCSTRING("readBytes","\x35","\x55","\x7f","\x8e"), hx::paccDynamic )(tmp22,(int)0,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(651)
					int len = tmp25;		HX_STACK_VAR(len,"len");
					HX_STACK_LINE(652)
					bool tmp26 = chunked;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(652)
					if ((tmp26)){
						HX_STACK_LINE(653)
						::EReg tmp27 = chunk_re;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(653)
						::haxe::io::Output tmp28 = api;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(653)
						::haxe::io::Bytes tmp29 = buf;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(653)
						int tmp30 = len;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(653)
						bool tmp31 = this->readChunk(tmp27,tmp28,tmp29,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(653)
						bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(653)
						if ((tmp32)){
							HX_STACK_LINE(654)
							break;
						}
					}
					else{
						HX_STACK_LINE(656)
						::haxe::io::Bytes tmp27 = buf;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(656)
						int tmp28 = len;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(656)
						api->writeBytes(tmp27,(int)0,tmp28);
					}
					HX_STACK_LINE(657)
					hx::SubEq(size,len);
				}
			}
			}
			catch(Dynamic __e){
				if (__e.IsClass< ::haxe::io::Eof >() ){
					HX_STACK_BEGIN_CATCH
					::haxe::io::Eof e = __e;{
						HX_STACK_LINE(660)
						HX_STACK_DO_THROW(HX_HCSTRING("Transfer aborted","\x3a","\xe2","\xd2","\x6a"));
					}
				}
				else {
				    HX_STACK_DO_THROW(__e);
				}
			}
		}
		HX_STACK_LINE(663)
		bool tmp19 = chunked;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(663)
		bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(663)
		if ((tmp19)){
			HX_STACK_LINE(663)
			Dynamic tmp21 = this->chunk_size;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(663)
			Dynamic tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(663)
			bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(663)
			bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(663)
			bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(663)
			bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(663)
			bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(663)
			bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(663)
			if ((tmp28)){
				HX_STACK_LINE(663)
				::haxe::io::Bytes tmp29 = this->chunk_buf;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(663)
				::haxe::io::Bytes tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(663)
				::haxe::io::Bytes tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(663)
				tmp20 = (tmp31 != null());
			}
			else{
				HX_STACK_LINE(663)
				tmp20 = true;
			}
		}
		else{
			HX_STACK_LINE(663)
			tmp20 = false;
		}
		HX_STACK_LINE(663)
		if ((tmp20)){
			HX_STACK_LINE(664)
			HX_STACK_DO_THROW(HX_HCSTRING("Invalid chunk","\x64","\x90","\xfb","\x29"));
		}
		HX_STACK_LINE(665)
		bool tmp21 = (status < (int)200);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(665)
		bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(665)
		bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(665)
		if ((tmp22)){
			HX_STACK_LINE(665)
			tmp23 = (status >= (int)400);
		}
		else{
			HX_STACK_LINE(665)
			tmp23 = true;
		}
		HX_STACK_LINE(665)
		if ((tmp23)){
			HX_STACK_LINE(666)
			::String tmp24 = (HX_HCSTRING("Http Error #","\x33","\x85","\xa5","\x2b") + status);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(666)
			HX_STACK_DO_THROW(tmp24);
		}
		HX_STACK_LINE(667)
		api->close();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Http_obj,readHttpResponse,(void))

bool Http_obj::readChunk( ::EReg chunk_re,::haxe::io::Output api,::haxe::io::Bytes buf,int len){
	HX_STACK_FRAME("haxe.Http","readChunk",0xeebfa239,"haxe.Http.readChunk","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/haxe/Http.hx",670,0x89528ddc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(chunk_re,"chunk_re")
	HX_STACK_ARG(api,"api")
	HX_STACK_ARG(buf,"buf")
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(671)
	Dynamic tmp = this->chunk_size;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(671)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(671)
	if ((tmp1)){
		HX_STACK_LINE(672)
		::haxe::io::Bytes tmp2 = this->chunk_buf;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(672)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(672)
		if ((tmp3)){
			HX_STACK_LINE(673)
			::haxe::io::BytesBuffer tmp4 = ::haxe::io::BytesBuffer_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(673)
			::haxe::io::BytesBuffer b = tmp4;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(674)
			{
				HX_STACK_LINE(674)
				::haxe::io::Bytes tmp5 = this->chunk_buf;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(674)
				::haxe::io::Bytes src = tmp5;		HX_STACK_VAR(src,"src");
				HX_STACK_LINE(674)
				Array< unsigned char > b1 = b->b;		HX_STACK_VAR(b1,"b1");
				HX_STACK_LINE(674)
				Array< unsigned char > b2 = src->b;		HX_STACK_VAR(b2,"b2");
				HX_STACK_LINE(674)
				{
					HX_STACK_LINE(674)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(674)
					int _g = src->length;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(674)
					while((true)){
						HX_STACK_LINE(674)
						bool tmp6 = (_g1 < _g);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(674)
						bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(674)
						if ((tmp7)){
							HX_STACK_LINE(674)
							break;
						}
						HX_STACK_LINE(674)
						int tmp8 = (_g1)++;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(674)
						int i = tmp8;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(674)
						unsigned char tmp9 = b2->__get(i);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(674)
						b->b->push(tmp9);
					}
				}
			}
			HX_STACK_LINE(675)
			{
				HX_STACK_LINE(675)
				bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(675)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(675)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(675)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(675)
				if ((tmp7)){
					HX_STACK_LINE(675)
					tmp8 = (len < (int)0);
				}
				else{
					HX_STACK_LINE(675)
					tmp8 = true;
				}
				HX_STACK_LINE(675)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(675)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(675)
				if ((tmp9)){
					HX_STACK_LINE(675)
					int tmp11 = len;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(675)
					int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(675)
					int tmp13 = buf->length;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(675)
					tmp10 = (tmp12 > tmp13);
				}
				else{
					HX_STACK_LINE(675)
					tmp10 = true;
				}
				HX_STACK_LINE(675)
				if ((tmp10)){
					HX_STACK_LINE(675)
					HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
				}
				HX_STACK_LINE(675)
				Array< unsigned char > b1 = b->b;		HX_STACK_VAR(b1,"b1");
				HX_STACK_LINE(675)
				Array< unsigned char > b2 = buf->b;		HX_STACK_VAR(b2,"b2");
				HX_STACK_LINE(675)
				{
					HX_STACK_LINE(675)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(675)
					int tmp11 = len;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(675)
					int _g = tmp11;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(675)
					while((true)){
						HX_STACK_LINE(675)
						bool tmp12 = (_g1 < _g);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(675)
						bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(675)
						if ((tmp13)){
							HX_STACK_LINE(675)
							break;
						}
						HX_STACK_LINE(675)
						int tmp14 = (_g1)++;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(675)
						int i = tmp14;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(675)
						unsigned char tmp15 = b2->__get(i);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(675)
						b->b->push(tmp15);
					}
				}
			}
			HX_STACK_LINE(676)
			::haxe::io::Bytes tmp5 = b->getBytes();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(676)
			buf = tmp5;
			HX_STACK_LINE(677)
			::haxe::io::Bytes tmp6 = this->chunk_buf;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(677)
			hx::AddEq(len,tmp6->length);
			HX_STACK_LINE(678)
			this->chunk_buf = null();
		}
		HX_STACK_LINE(683)
		::String tmp4 = buf->toString();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(683)
		bool tmp5 = chunk_re->match(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(683)
		if ((tmp5)){
			HX_STACK_LINE(685)
			Dynamic tmp6 = chunk_re->matchedPos();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(685)
			Dynamic p = tmp6;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(686)
			bool tmp7 = (p->__Field(HX_HCSTRING("len","\xd5","\x4b","\x52","\x00"), hx::paccDynamic ) <= len);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(686)
			if ((tmp7)){
				HX_STACK_LINE(687)
				::String tmp8 = chunk_re->matched((int)1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(687)
				::String cstr = tmp8;		HX_STACK_VAR(cstr,"cstr");
				HX_STACK_LINE(688)
				::String tmp9 = (HX_HCSTRING("0x","\x48","\x2a","\x00","\x00") + cstr);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(688)
				Dynamic tmp10 = ::Std_obj::parseInt(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(688)
				this->chunk_size = tmp10;
				HX_STACK_LINE(689)
				bool tmp11 = (cstr == HX_HCSTRING("0","\x30","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(689)
				if ((tmp11)){
					HX_STACK_LINE(690)
					this->chunk_size = null();
					HX_STACK_LINE(691)
					this->chunk_buf = null();
					HX_STACK_LINE(692)
					return false;
				}
				HX_STACK_LINE(694)
				hx::SubEq(len,p->__Field(HX_HCSTRING("len","\xd5","\x4b","\x52","\x00"), hx::paccDynamic ));
				HX_STACK_LINE(695)
				::EReg tmp12 = chunk_re;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(695)
				::haxe::io::Output tmp13 = api;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(695)
				int tmp14 = p->__Field(HX_HCSTRING("len","\xd5","\x4b","\x52","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(695)
				int tmp15 = len;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(695)
				::haxe::io::Bytes tmp16 = buf->sub(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(695)
				int tmp17 = len;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(695)
				bool tmp18 = this->readChunk(tmp12,tmp13,tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(695)
				return tmp18;
			}
		}
		HX_STACK_LINE(699)
		bool tmp6 = (len > (int)10);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(699)
		if ((tmp6)){
			HX_STACK_LINE(700)
			this->onError(HX_HCSTRING("Invalid chunk","\x64","\x90","\xfb","\x29"));
			HX_STACK_LINE(701)
			return false;
		}
		HX_STACK_LINE(703)
		int tmp7 = len;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(703)
		::haxe::io::Bytes tmp8 = buf->sub((int)0,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(703)
		this->chunk_buf = tmp8;
		HX_STACK_LINE(704)
		return true;
	}
	HX_STACK_LINE(706)
	Dynamic tmp2 = this->chunk_size;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(706)
	int tmp3 = len;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(706)
	bool tmp4 = (tmp2 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(706)
	if ((tmp4)){
		HX_STACK_LINE(707)
		hx::SubEq(this->chunk_size,len);
		HX_STACK_LINE(708)
		::haxe::io::Bytes tmp5 = buf;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(708)
		int tmp6 = len;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(708)
		api->writeBytes(tmp5,(int)0,tmp6);
		HX_STACK_LINE(709)
		return true;
	}
	HX_STACK_LINE(711)
	Dynamic tmp5 = this->chunk_size;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(711)
	int tmp6 = (tmp5 + (int)2);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(711)
	int end = tmp6;		HX_STACK_VAR(end,"end");
	HX_STACK_LINE(712)
	bool tmp7 = (len >= end);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(712)
	if ((tmp7)){
		HX_STACK_LINE(713)
		Dynamic tmp8 = this->chunk_size;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(713)
		bool tmp9 = (tmp8 > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(713)
		if ((tmp9)){
			HX_STACK_LINE(714)
			::haxe::io::Bytes tmp10 = buf;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(714)
			Dynamic tmp11 = this->chunk_size;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(714)
			api->writeBytes(tmp10,(int)0,tmp11);
		}
		HX_STACK_LINE(715)
		hx::SubEq(len,end);
		HX_STACK_LINE(716)
		this->chunk_size = null();
		HX_STACK_LINE(717)
		bool tmp10 = (len == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(717)
		if ((tmp10)){
			HX_STACK_LINE(718)
			return true;
		}
		HX_STACK_LINE(719)
		::EReg tmp11 = chunk_re;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(719)
		::haxe::io::Output tmp12 = api;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(719)
		int tmp13 = end;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(719)
		int tmp14 = len;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(719)
		::haxe::io::Bytes tmp15 = buf->sub(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(719)
		int tmp16 = len;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(719)
		bool tmp17 = this->readChunk(tmp11,tmp12,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(719)
		return tmp17;
	}
	HX_STACK_LINE(721)
	Dynamic tmp8 = this->chunk_size;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(721)
	bool tmp9 = (tmp8 > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(721)
	if ((tmp9)){
		HX_STACK_LINE(722)
		::haxe::io::Bytes tmp10 = buf;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(722)
		Dynamic tmp11 = this->chunk_size;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(722)
		api->writeBytes(tmp10,(int)0,tmp11);
	}
	HX_STACK_LINE(723)
	hx::SubEq(this->chunk_size,len);
	HX_STACK_LINE(724)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC4(Http_obj,readChunk,return )

HX_BEGIN_DEFAULT_FUNC(__default_onData,Http_obj)
Void run(::String data){
{
		HX_STACK_FRAME("haxe.Http","onData",0x4f093aa7,"haxe.Http.onData","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/haxe/Http.hx",736,0x89528ddc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
	}
return null();
}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_onError,Http_obj)
Void run(::String msg){
{
		HX_STACK_FRAME("haxe.Http","onError",0x77abd4ab,"haxe.Http.onError","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/haxe/Http.hx",746,0x89528ddc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(msg,"msg")
	}
return null();
}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_onStatus,Http_obj)
Void run(int status){
{
		HX_STACK_FRAME("haxe.Http","onStatus",0xf341a4ef,"haxe.Http.onStatus","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/haxe/Http.hx",756,0x89528ddc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(status,"status")
	}
return null();
}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

Dynamic Http_obj::PROXY;


Http_obj::Http_obj()
{
	onData = new __default_onData(this);
	onError = new __default_onError(this);
	onStatus = new __default_onStatus(this);
}

void Http_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Http);
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_MEMBER_NAME(responseData,"responseData");
	HX_MARK_MEMBER_NAME(noShutdown,"noShutdown");
	HX_MARK_MEMBER_NAME(cnxTimeout,"cnxTimeout");
	HX_MARK_MEMBER_NAME(responseHeaders,"responseHeaders");
	HX_MARK_MEMBER_NAME(chunk_size,"chunk_size");
	HX_MARK_MEMBER_NAME(chunk_buf,"chunk_buf");
	HX_MARK_MEMBER_NAME(file,"file");
	HX_MARK_MEMBER_NAME(postData,"postData");
	HX_MARK_MEMBER_NAME(headers,"headers");
	HX_MARK_MEMBER_NAME(params,"params");
	HX_MARK_MEMBER_NAME(onData,"onData");
	HX_MARK_MEMBER_NAME(onError,"onError");
	HX_MARK_MEMBER_NAME(onStatus,"onStatus");
	HX_MARK_END_CLASS();
}

void Http_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(url,"url");
	HX_VISIT_MEMBER_NAME(responseData,"responseData");
	HX_VISIT_MEMBER_NAME(noShutdown,"noShutdown");
	HX_VISIT_MEMBER_NAME(cnxTimeout,"cnxTimeout");
	HX_VISIT_MEMBER_NAME(responseHeaders,"responseHeaders");
	HX_VISIT_MEMBER_NAME(chunk_size,"chunk_size");
	HX_VISIT_MEMBER_NAME(chunk_buf,"chunk_buf");
	HX_VISIT_MEMBER_NAME(file,"file");
	HX_VISIT_MEMBER_NAME(postData,"postData");
	HX_VISIT_MEMBER_NAME(headers,"headers");
	HX_VISIT_MEMBER_NAME(params,"params");
	HX_VISIT_MEMBER_NAME(onData,"onData");
	HX_VISIT_MEMBER_NAME(onError,"onError");
	HX_VISIT_MEMBER_NAME(onStatus,"onStatus");
}

Dynamic Http_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { return url; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { return file; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { return params; }
		if (HX_FIELD_EQ(inName,"onData") ) { return onData; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"headers") ) { return headers; }
		if (HX_FIELD_EQ(inName,"request") ) { return request_dyn(); }
		if (HX_FIELD_EQ(inName,"onError") ) { return onError; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"postData") ) { return postData; }
		if (HX_FIELD_EQ(inName,"onStatus") ) { return onStatus; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"chunk_buf") ) { return chunk_buf; }
		if (HX_FIELD_EQ(inName,"readChunk") ) { return readChunk_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"noShutdown") ) { return noShutdown; }
		if (HX_FIELD_EQ(inName,"cnxTimeout") ) { return cnxTimeout; }
		if (HX_FIELD_EQ(inName,"chunk_size") ) { return chunk_size; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"responseData") ) { return responseData; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"customRequest") ) { return customRequest_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"responseHeaders") ) { return responseHeaders; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"readHttpResponse") ) { return readHttpResponse_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Http_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"PROXY") ) { outValue = PROXY; return true;  }
	}
	return false;
}

Dynamic Http_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { file=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { params=inValue.Cast< ::List >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onData") ) { onData=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"headers") ) { headers=inValue.Cast< ::List >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onError") ) { onError=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"postData") ) { postData=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onStatus") ) { onStatus=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"chunk_buf") ) { chunk_buf=inValue.Cast< ::haxe::io::Bytes >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"noShutdown") ) { noShutdown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cnxTimeout") ) { cnxTimeout=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"chunk_size") ) { chunk_size=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"responseData") ) { responseData=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"responseHeaders") ) { responseHeaders=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Http_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"PROXY") ) { PROXY=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void Http_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"));
	outFields->push(HX_HCSTRING("responseData","\x4b","\x05","\xe9","\xc4"));
	outFields->push(HX_HCSTRING("noShutdown","\xf7","\xc1","\x69","\x5b"));
	outFields->push(HX_HCSTRING("cnxTimeout","\xb4","\x3a","\x75","\x76"));
	outFields->push(HX_HCSTRING("responseHeaders","\xc5","\x0d","\xca","\x43"));
	outFields->push(HX_HCSTRING("chunk_size","\x13","\x8b","\xba","\xd8"));
	outFields->push(HX_HCSTRING("chunk_buf","\x21","\x09","\x61","\xa7"));
	outFields->push(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"));
	outFields->push(HX_HCSTRING("postData","\xaa","\xb6","\xa2","\x00"));
	outFields->push(HX_HCSTRING("headers","\x46","\x52","\x08","\x63"));
	outFields->push(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Http_obj,url),HX_HCSTRING("url","\x6f","\x2b","\x59","\x00")},
	{hx::fsString,(int)offsetof(Http_obj,responseData),HX_HCSTRING("responseData","\x4b","\x05","\xe9","\xc4")},
	{hx::fsBool,(int)offsetof(Http_obj,noShutdown),HX_HCSTRING("noShutdown","\xf7","\xc1","\x69","\x5b")},
	{hx::fsFloat,(int)offsetof(Http_obj,cnxTimeout),HX_HCSTRING("cnxTimeout","\xb4","\x3a","\x75","\x76")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Http_obj,responseHeaders),HX_HCSTRING("responseHeaders","\xc5","\x0d","\xca","\x43")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Http_obj,chunk_size),HX_HCSTRING("chunk_size","\x13","\x8b","\xba","\xd8")},
	{hx::fsObject /*::haxe::io::Bytes*/ ,(int)offsetof(Http_obj,chunk_buf),HX_HCSTRING("chunk_buf","\x21","\x09","\x61","\xa7")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Http_obj,file),HX_HCSTRING("file","\x7c","\xce","\xbb","\x43")},
	{hx::fsString,(int)offsetof(Http_obj,postData),HX_HCSTRING("postData","\xaa","\xb6","\xa2","\x00")},
	{hx::fsObject /*::List*/ ,(int)offsetof(Http_obj,headers),HX_HCSTRING("headers","\x46","\x52","\x08","\x63")},
	{hx::fsObject /*::List*/ ,(int)offsetof(Http_obj,params),HX_HCSTRING("params","\x46","\xfb","\x7a","\xed")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Http_obj,onData),HX_HCSTRING("onData","\xe9","\x5e","\xed","\xe4")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Http_obj,onError),HX_HCSTRING("onError","\x29","\x6a","\x67","\x09")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Http_obj,onStatus),HX_HCSTRING("onStatus","\xb1","\xdd","\xa8","\xe5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Http_obj::PROXY,HX_HCSTRING("PROXY","\x4e","\x26","\x7e","\x46")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"),
	HX_HCSTRING("responseData","\x4b","\x05","\xe9","\xc4"),
	HX_HCSTRING("noShutdown","\xf7","\xc1","\x69","\x5b"),
	HX_HCSTRING("cnxTimeout","\xb4","\x3a","\x75","\x76"),
	HX_HCSTRING("responseHeaders","\xc5","\x0d","\xca","\x43"),
	HX_HCSTRING("chunk_size","\x13","\x8b","\xba","\xd8"),
	HX_HCSTRING("chunk_buf","\x21","\x09","\x61","\xa7"),
	HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"),
	HX_HCSTRING("postData","\xaa","\xb6","\xa2","\x00"),
	HX_HCSTRING("headers","\x46","\x52","\x08","\x63"),
	HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"),
	HX_HCSTRING("request","\x4f","\xdf","\x84","\x44"),
	HX_HCSTRING("customRequest","\x9e","\x47","\x93","\xee"),
	HX_HCSTRING("readHttpResponse","\x9f","\x0e","\x50","\x47"),
	HX_HCSTRING("readChunk","\x37","\x13","\xaa","\x16"),
	HX_HCSTRING("onData","\xe9","\x5e","\xed","\xe4"),
	HX_HCSTRING("onError","\x29","\x6a","\x67","\x09"),
	HX_HCSTRING("onStatus","\xb1","\xdd","\xa8","\xe5"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Http_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Http_obj::PROXY,"PROXY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Http_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Http_obj::PROXY,"PROXY");
};

#endif

hx::Class Http_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("PROXY","\x4e","\x26","\x7e","\x46"),
	String(null()) };

void Http_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.Http","\xf0","\x78","\xa9","\xea");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Http_obj::__GetStatic;
	__mClass->mSetStaticField = &Http_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Http_obj >;
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

void Http_obj::__boot()
{
	PROXY= null();
}

} // end namespace haxe
