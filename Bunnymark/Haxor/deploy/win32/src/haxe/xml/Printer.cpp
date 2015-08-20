#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_xml_Printer
#include <haxe/xml/Printer.h>
#endif
namespace haxe{
namespace xml{

Void Printer_obj::__construct(bool pretty)
{
HX_STACK_FRAME("haxe.xml.Printer","new",0x896dce4d,"haxe.xml.Printer.new","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/haxe/xml/Printer.hx",42,0x06dd14b6)
HX_STACK_THIS(this)
HX_STACK_ARG(pretty,"pretty")
{
	HX_STACK_LINE(43)
	::StringBuf tmp = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	this->output = tmp;
	HX_STACK_LINE(44)
	this->pretty = pretty;
}
;
	return null();
}

//Printer_obj::~Printer_obj() { }

Dynamic Printer_obj::__CreateEmpty() { return  new Printer_obj; }
hx::ObjectPtr< Printer_obj > Printer_obj::__new(bool pretty)
{  hx::ObjectPtr< Printer_obj > _result_ = new Printer_obj();
	_result_->__construct(pretty);
	return _result_;}

Dynamic Printer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Printer_obj > _result_ = new Printer_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Printer_obj::writeNode( ::Xml value,::String tabs){
{
		HX_STACK_FRAME("haxe.xml.Printer","writeNode",0x6952ac2e,"haxe.xml.Printer.writeNode","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/haxe/xml/Printer.hx",48,0x06dd14b6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(tabs,"tabs")
		HX_STACK_LINE(48)
		int _g = value->nodeType;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(48)
		int tmp = _g;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		switch( (int)(tmp)){
			case (int)2: {
				HX_STACK_LINE(50)
				{
					HX_STACK_LINE(50)
					::StringBuf tmp1 = this->output;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(50)
					::String tmp2 = (tabs + HX_HCSTRING("<![CDATA[","\xa4","\xfc","\x95","\xb4"));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(50)
					tmp1->add(tmp2);
				}
				HX_STACK_LINE(51)
				{
					HX_STACK_LINE(51)
					::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(51)
					{
						HX_STACK_LINE(51)
						int tmp2 = value->nodeType;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(51)
						int tmp3 = ::Xml_obj::Document;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(51)
						bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(51)
						bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(51)
						bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(51)
						if ((tmp5)){
							HX_STACK_LINE(51)
							int tmp7 = value->nodeType;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(51)
							int tmp8 = ::Xml_obj::Element;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(51)
							int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(51)
							tmp6 = (tmp7 == tmp9);
						}
						else{
							HX_STACK_LINE(51)
							tmp6 = true;
						}
						HX_STACK_LINE(51)
						if ((tmp6)){
							HX_STACK_LINE(51)
							::String tmp7 = (HX_HCSTRING("Bad node type, unexpected ","\xbe","\x79","\xd5","\x11") + value->nodeType);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(51)
							HX_STACK_DO_THROW(tmp7);
						}
						HX_STACK_LINE(51)
						tmp1 = value->nodeValue;
					}
					HX_STACK_LINE(51)
					::String tmp2 = ::StringTools_obj::trim(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(51)
					::String input = tmp2;		HX_STACK_VAR(input,"input");
					HX_STACK_LINE(51)
					::StringBuf tmp3 = this->output;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(51)
					::String tmp4 = input;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(51)
					tmp3->add(tmp4);
				}
				HX_STACK_LINE(52)
				{
					HX_STACK_LINE(52)
					::StringBuf tmp1 = this->output;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(52)
					tmp1->add(HX_HCSTRING("]]>","\xde","\xe2","\x46","\x00"));
				}
				HX_STACK_LINE(53)
				{
					HX_STACK_LINE(53)
					bool tmp1 = this->pretty;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(53)
					if ((tmp1)){
						HX_STACK_LINE(53)
						::StringBuf tmp2 = this->output;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(53)
						tmp2->add(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
					}
				}
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(55)
				::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(55)
				{
					HX_STACK_LINE(55)
					int tmp2 = value->nodeType;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(55)
					int tmp3 = ::Xml_obj::Document;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(55)
					bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(55)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(55)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(55)
					if ((tmp5)){
						HX_STACK_LINE(55)
						int tmp7 = value->nodeType;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(55)
						int tmp8 = ::Xml_obj::Element;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(55)
						int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(55)
						tmp6 = (tmp7 == tmp9);
					}
					else{
						HX_STACK_LINE(55)
						tmp6 = true;
					}
					HX_STACK_LINE(55)
					if ((tmp6)){
						HX_STACK_LINE(55)
						::String tmp7 = (HX_HCSTRING("Bad node type, unexpected ","\xbe","\x79","\xd5","\x11") + value->nodeType);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(55)
						HX_STACK_DO_THROW(tmp7);
					}
					HX_STACK_LINE(55)
					tmp1 = value->nodeValue;
				}
				HX_STACK_LINE(55)
				::String commentContent = tmp1;		HX_STACK_VAR(commentContent,"commentContent");
				HX_STACK_LINE(56)
				::EReg tmp2 = ::EReg_obj::__new(HX_HCSTRING("[\n\r\t]+","\x59","\x8e","\x1a","\x2d"),HX_HCSTRING("g","\x67","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(56)
				::String tmp3 = commentContent;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(56)
				::String tmp4 = tmp2->replace(tmp3,HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(56)
				commentContent = tmp4;
				HX_STACK_LINE(57)
				::String tmp5 = (HX_HCSTRING("<!--","\x05","\xff","\xc1","\x27") + commentContent);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(57)
				::String tmp6 = (tmp5 + HX_HCSTRING("-->","\xde","\x4c","\x22","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(57)
				commentContent = tmp6;
				HX_STACK_LINE(58)
				{
					HX_STACK_LINE(58)
					::StringBuf tmp7 = this->output;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(58)
					::String tmp8 = tabs;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(58)
					tmp7->add(tmp8);
				}
				HX_STACK_LINE(59)
				{
					HX_STACK_LINE(59)
					::String tmp7 = commentContent;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(59)
					::String tmp8 = ::StringTools_obj::trim(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(59)
					::String input = tmp8;		HX_STACK_VAR(input,"input");
					HX_STACK_LINE(59)
					::StringBuf tmp9 = this->output;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(59)
					::String tmp10 = input;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(59)
					tmp9->add(tmp10);
				}
				HX_STACK_LINE(60)
				{
					HX_STACK_LINE(60)
					bool tmp7 = this->pretty;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(60)
					if ((tmp7)){
						HX_STACK_LINE(60)
						::StringBuf tmp8 = this->output;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(60)
						tmp8->add(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
					}
				}
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(62)
				Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(62)
				{
					HX_STACK_LINE(62)
					{
						HX_STACK_LINE(62)
						int tmp2 = value->nodeType;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(62)
						int tmp3 = ::Xml_obj::Document;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(62)
						bool tmp4 = (tmp2 != tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(62)
						bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(62)
						if ((tmp4)){
							HX_STACK_LINE(62)
							int tmp6 = value->nodeType;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(62)
							int tmp7 = ::Xml_obj::Element;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(62)
							int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(62)
							tmp5 = (tmp6 != tmp8);
						}
						else{
							HX_STACK_LINE(62)
							tmp5 = false;
						}
						HX_STACK_LINE(62)
						if ((tmp5)){
							HX_STACK_LINE(62)
							::String tmp6 = (HX_HCSTRING("Bad node type, expected Element or Document but found ","\xa0","\xd6","\xba","\x79") + value->nodeType);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(62)
							HX_STACK_DO_THROW(tmp6);
						}
					}
					HX_STACK_LINE(62)
					tmp1 = value->children->iteratorFast< ::Xml >();
				}
				HX_STACK_LINE(62)
				for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(tmp1);  __it->hasNext(); ){
					::Xml child = __it->next();
					{
						HX_STACK_LINE(63)
						::Xml tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(63)
						::String tmp3 = tabs;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(63)
						this->writeNode(tmp2,tmp3);
					}
;
				}
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(66)
				{
					HX_STACK_LINE(66)
					::StringBuf tmp1 = this->output;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(66)
					::String tmp2 = (tabs + HX_HCSTRING("<","\x3c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(66)
					tmp1->add(tmp2);
				}
				HX_STACK_LINE(67)
				{
					HX_STACK_LINE(67)
					::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(67)
					{
						HX_STACK_LINE(67)
						int tmp2 = value->nodeType;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(67)
						int tmp3 = ::Xml_obj::Element;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(67)
						bool tmp4 = (tmp2 != tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(67)
						if ((tmp4)){
							HX_STACK_LINE(67)
							::String tmp5 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + value->nodeType);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(67)
							HX_STACK_DO_THROW(tmp5);
						}
						HX_STACK_LINE(67)
						tmp1 = value->nodeName;
					}
					HX_STACK_LINE(67)
					::String input = tmp1;		HX_STACK_VAR(input,"input");
					HX_STACK_LINE(67)
					::StringBuf tmp2 = this->output;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(67)
					::String tmp3 = input;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(67)
					tmp2->add(tmp3);
				}
				HX_STACK_LINE(68)
				Dynamic tmp1 = value->attributes();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(68)
				for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp1);  __it->hasNext(); ){
					::String attribute = __it->next();
					{
						HX_STACK_LINE(69)
						{
							HX_STACK_LINE(69)
							::StringBuf tmp2 = this->output;		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(69)
							::String tmp3 = (HX_HCSTRING(" ","\x20","\x00","\x00","\x00") + attribute);		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(69)
							::String tmp4 = (tmp3 + HX_HCSTRING("=\"","\x45","\x35","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(69)
							tmp2->add(tmp4);
						}
						HX_STACK_LINE(70)
						{
							HX_STACK_LINE(70)
							::String tmp2 = attribute;		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(70)
							::String tmp3 = value->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(70)
							::String tmp4 = ::StringTools_obj::htmlEscape(tmp3,true);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(70)
							::String input = tmp4;		HX_STACK_VAR(input,"input");
							HX_STACK_LINE(70)
							::StringBuf tmp5 = this->output;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(70)
							::String tmp6 = input;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(70)
							tmp5->add(tmp6);
						}
						HX_STACK_LINE(71)
						{
							HX_STACK_LINE(71)
							::StringBuf tmp2 = this->output;		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(71)
							tmp2->add(HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));
						}
					}
;
				}
				HX_STACK_LINE(73)
				::Xml tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(73)
				bool tmp3 = this->hasChildren(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(73)
				if ((tmp3)){
					HX_STACK_LINE(74)
					{
						HX_STACK_LINE(74)
						::StringBuf tmp4 = this->output;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(74)
						tmp4->add(HX_HCSTRING(">","\x3e","\x00","\x00","\x00"));
					}
					HX_STACK_LINE(75)
					{
						HX_STACK_LINE(75)
						bool tmp4 = this->pretty;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(75)
						if ((tmp4)){
							HX_STACK_LINE(75)
							::StringBuf tmp5 = this->output;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(75)
							tmp5->add(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
						}
					}
					HX_STACK_LINE(76)
					Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(76)
					{
						HX_STACK_LINE(76)
						{
							HX_STACK_LINE(76)
							int tmp5 = value->nodeType;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(76)
							int tmp6 = ::Xml_obj::Document;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(76)
							bool tmp7 = (tmp5 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(76)
							bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(76)
							if ((tmp7)){
								HX_STACK_LINE(76)
								int tmp9 = value->nodeType;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(76)
								int tmp10 = ::Xml_obj::Element;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(76)
								int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(76)
								tmp8 = (tmp9 != tmp11);
							}
							else{
								HX_STACK_LINE(76)
								tmp8 = false;
							}
							HX_STACK_LINE(76)
							if ((tmp8)){
								HX_STACK_LINE(76)
								::String tmp9 = (HX_HCSTRING("Bad node type, expected Element or Document but found ","\xa0","\xd6","\xba","\x79") + value->nodeType);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(76)
								HX_STACK_DO_THROW(tmp9);
							}
						}
						HX_STACK_LINE(76)
						tmp4 = value->children->iteratorFast< ::Xml >();
					}
					HX_STACK_LINE(76)
					for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(tmp4);  __it->hasNext(); ){
						::Xml child = __it->next();
						{
							HX_STACK_LINE(77)
							::Xml tmp5 = child;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(77)
							bool tmp6 = this->pretty;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(77)
							::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(77)
							if ((tmp6)){
								HX_STACK_LINE(77)
								tmp7 = (tabs + HX_HCSTRING("\t","\x09","\x00","\x00","\x00"));
							}
							else{
								HX_STACK_LINE(77)
								tmp7 = tabs;
							}
							HX_STACK_LINE(77)
							this->writeNode(tmp5,tmp7);
						}
;
					}
					HX_STACK_LINE(79)
					{
						HX_STACK_LINE(79)
						::StringBuf tmp5 = this->output;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(79)
						::String tmp6 = (tabs + HX_HCSTRING("</","\x73","\x34","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(79)
						tmp5->add(tmp6);
					}
					HX_STACK_LINE(80)
					{
						HX_STACK_LINE(80)
						::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(80)
						{
							HX_STACK_LINE(80)
							int tmp6 = value->nodeType;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(80)
							int tmp7 = ::Xml_obj::Element;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(80)
							bool tmp8 = (tmp6 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(80)
							if ((tmp8)){
								HX_STACK_LINE(80)
								::String tmp9 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + value->nodeType);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(80)
								HX_STACK_DO_THROW(tmp9);
							}
							HX_STACK_LINE(80)
							tmp5 = value->nodeName;
						}
						HX_STACK_LINE(80)
						::String input = tmp5;		HX_STACK_VAR(input,"input");
						HX_STACK_LINE(80)
						::StringBuf tmp6 = this->output;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(80)
						::String tmp7 = input;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(80)
						tmp6->add(tmp7);
					}
					HX_STACK_LINE(81)
					{
						HX_STACK_LINE(81)
						::StringBuf tmp5 = this->output;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(81)
						tmp5->add(HX_HCSTRING(">","\x3e","\x00","\x00","\x00"));
					}
					HX_STACK_LINE(82)
					{
						HX_STACK_LINE(82)
						bool tmp5 = this->pretty;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(82)
						if ((tmp5)){
							HX_STACK_LINE(82)
							::StringBuf tmp6 = this->output;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(82)
							tmp6->add(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
						}
					}
				}
				else{
					HX_STACK_LINE(84)
					{
						HX_STACK_LINE(84)
						::StringBuf tmp4 = this->output;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(84)
						tmp4->add(HX_HCSTRING("/>","\x2f","\x29","\x00","\x00"));
					}
					HX_STACK_LINE(85)
					{
						HX_STACK_LINE(85)
						bool tmp4 = this->pretty;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(85)
						if ((tmp4)){
							HX_STACK_LINE(85)
							::StringBuf tmp5 = this->output;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(85)
							tmp5->add(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
						}
					}
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(88)
				::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(88)
				{
					HX_STACK_LINE(88)
					int tmp2 = value->nodeType;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(88)
					int tmp3 = ::Xml_obj::Document;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(88)
					bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(88)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(88)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(88)
					if ((tmp5)){
						HX_STACK_LINE(88)
						int tmp7 = value->nodeType;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(88)
						int tmp8 = ::Xml_obj::Element;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(88)
						int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(88)
						tmp6 = (tmp7 == tmp9);
					}
					else{
						HX_STACK_LINE(88)
						tmp6 = true;
					}
					HX_STACK_LINE(88)
					if ((tmp6)){
						HX_STACK_LINE(88)
						::String tmp7 = (HX_HCSTRING("Bad node type, unexpected ","\xbe","\x79","\xd5","\x11") + value->nodeType);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(88)
						HX_STACK_DO_THROW(tmp7);
					}
					HX_STACK_LINE(88)
					tmp1 = value->nodeValue;
				}
				HX_STACK_LINE(88)
				::String nodeValue = tmp1;		HX_STACK_VAR(nodeValue,"nodeValue");
				HX_STACK_LINE(89)
				bool tmp2 = (nodeValue.length != (int)0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(89)
				if ((tmp2)){
					HX_STACK_LINE(90)
					{
						HX_STACK_LINE(90)
						::String tmp3 = tabs;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(90)
						::String tmp4 = nodeValue;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(90)
						::String tmp5 = ::StringTools_obj::htmlEscape(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(90)
						::String tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(90)
						::String input = tmp6;		HX_STACK_VAR(input,"input");
						HX_STACK_LINE(90)
						::StringBuf tmp7 = this->output;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(90)
						::String tmp8 = input;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(90)
						tmp7->add(tmp8);
					}
					HX_STACK_LINE(91)
					{
						HX_STACK_LINE(91)
						bool tmp3 = this->pretty;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(91)
						if ((tmp3)){
							HX_STACK_LINE(91)
							::StringBuf tmp4 = this->output;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(91)
							tmp4->add(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
						}
					}
				}
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(94)
				::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(94)
				{
					HX_STACK_LINE(94)
					int tmp2 = value->nodeType;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(94)
					int tmp3 = ::Xml_obj::Document;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(94)
					bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(94)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(94)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(94)
					if ((tmp5)){
						HX_STACK_LINE(94)
						int tmp7 = value->nodeType;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(94)
						int tmp8 = ::Xml_obj::Element;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(94)
						int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(94)
						tmp6 = (tmp7 == tmp9);
					}
					else{
						HX_STACK_LINE(94)
						tmp6 = true;
					}
					HX_STACK_LINE(94)
					if ((tmp6)){
						HX_STACK_LINE(94)
						::String tmp7 = (HX_HCSTRING("Bad node type, unexpected ","\xbe","\x79","\xd5","\x11") + value->nodeType);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(94)
						HX_STACK_DO_THROW(tmp7);
					}
					HX_STACK_LINE(94)
					tmp1 = value->nodeValue;
				}
				HX_STACK_LINE(94)
				::String tmp2 = (HX_HCSTRING("<?","\x83","\x34","\x00","\x00") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(94)
				::String tmp3 = (tmp2 + HX_HCSTRING("?>","\x1f","\x37","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(94)
				::String input = tmp3;		HX_STACK_VAR(input,"input");
				HX_STACK_LINE(94)
				::StringBuf tmp4 = this->output;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(94)
				::String tmp5 = input;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(94)
				tmp4->add(tmp5);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(96)
				::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(96)
				{
					HX_STACK_LINE(96)
					int tmp2 = value->nodeType;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(96)
					int tmp3 = ::Xml_obj::Document;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(96)
					bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(96)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(96)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(96)
					if ((tmp5)){
						HX_STACK_LINE(96)
						int tmp7 = value->nodeType;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(96)
						int tmp8 = ::Xml_obj::Element;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(96)
						int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(96)
						tmp6 = (tmp7 == tmp9);
					}
					else{
						HX_STACK_LINE(96)
						tmp6 = true;
					}
					HX_STACK_LINE(96)
					if ((tmp6)){
						HX_STACK_LINE(96)
						::String tmp7 = (HX_HCSTRING("Bad node type, unexpected ","\xbe","\x79","\xd5","\x11") + value->nodeType);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(96)
						HX_STACK_DO_THROW(tmp7);
					}
					HX_STACK_LINE(96)
					tmp1 = value->nodeValue;
				}
				HX_STACK_LINE(96)
				::String tmp2 = (HX_HCSTRING("<!DOCTYPE ","\x33","\x6c","\xbb","\xab") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(96)
				::String tmp3 = (tmp2 + HX_HCSTRING(">","\x3e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(96)
				::String input = tmp3;		HX_STACK_VAR(input,"input");
				HX_STACK_LINE(96)
				::StringBuf tmp4 = this->output;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(96)
				::String tmp5 = input;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(96)
				tmp4->add(tmp5);
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Printer_obj,writeNode,(void))

bool Printer_obj::hasChildren( ::Xml value){
	HX_STACK_FRAME("haxe.xml.Printer","hasChildren",0xeb7e31a6,"haxe.xml.Printer.hasChildren","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/haxe/xml/Printer.hx",110,0x06dd14b6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(111)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(111)
	{
		HX_STACK_LINE(111)
		{
			HX_STACK_LINE(111)
			int tmp1 = value->nodeType;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(111)
			int tmp2 = ::Xml_obj::Document;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(111)
			bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(111)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(111)
			if ((tmp3)){
				HX_STACK_LINE(111)
				int tmp5 = value->nodeType;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(111)
				int tmp6 = ::Xml_obj::Element;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(111)
				int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(111)
				tmp4 = (tmp5 != tmp7);
			}
			else{
				HX_STACK_LINE(111)
				tmp4 = false;
			}
			HX_STACK_LINE(111)
			if ((tmp4)){
				HX_STACK_LINE(111)
				::String tmp5 = (HX_HCSTRING("Bad node type, expected Element or Document but found ","\xa0","\xd6","\xba","\x79") + value->nodeType);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(111)
				HX_STACK_DO_THROW(tmp5);
			}
		}
		HX_STACK_LINE(111)
		tmp = value->children->iteratorFast< ::Xml >();
	}
	HX_STACK_LINE(111)
	for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(tmp);  __it->hasNext(); ){
		::Xml child = __it->next();
		{
			HX_STACK_LINE(112)
			int _g = child->nodeType;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(112)
			int tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(112)
			switch( (int)(tmp1)){
				case (int)0: case (int)1: {
					HX_STACK_LINE(114)
					return true;
				}
				;break;
				case (int)2: case (int)3: {
					HX_STACK_LINE(116)
					::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(116)
					{
						HX_STACK_LINE(116)
						int tmp3 = child->nodeType;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(116)
						int tmp4 = ::Xml_obj::Document;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(116)
						bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(116)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(116)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(116)
						if ((tmp6)){
							HX_STACK_LINE(116)
							int tmp8 = child->nodeType;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(116)
							int tmp9 = ::Xml_obj::Element;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(116)
							int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(116)
							tmp7 = (tmp8 == tmp10);
						}
						else{
							HX_STACK_LINE(116)
							tmp7 = true;
						}
						HX_STACK_LINE(116)
						if ((tmp7)){
							HX_STACK_LINE(116)
							::String tmp8 = (HX_HCSTRING("Bad node type, unexpected ","\xbe","\x79","\xd5","\x11") + child->nodeType);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(116)
							HX_STACK_DO_THROW(tmp8);
						}
						HX_STACK_LINE(116)
						tmp2 = child->nodeValue;
					}
					HX_STACK_LINE(116)
					::String tmp3 = ::StringTools_obj::ltrim(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(116)
					int tmp4 = tmp3.length;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(116)
					bool tmp5 = (tmp4 != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(116)
					if ((tmp5)){
						HX_STACK_LINE(117)
						return true;
					}
				}
				;break;
				default: {
				}
			}
		}
;
	}
	HX_STACK_LINE(122)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Printer_obj,hasChildren,return )

::String Printer_obj::print( ::Xml xml,Dynamic __o_pretty){
Dynamic pretty = __o_pretty.Default(false);
	HX_STACK_FRAME("haxe.xml.Printer","print",0x4a926b5a,"haxe.xml.Printer.print","F:\\development\\resource\\platform\\haxe\\3-2-0\\haxe\\std/haxe/xml/Printer.hx",33,0x06dd14b6)
	HX_STACK_ARG(xml,"xml")
	HX_STACK_ARG(pretty,"pretty")
{
		HX_STACK_LINE(34)
		::haxe::xml::Printer tmp = ::haxe::xml::Printer_obj::__new(pretty);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		::haxe::xml::Printer printer = tmp;		HX_STACK_VAR(printer,"printer");
		HX_STACK_LINE(35)
		::Xml tmp1 = xml;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(35)
		printer->writeNode(tmp1,HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		HX_STACK_LINE(36)
		Array< ::String > tmp2 = printer->output->b;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(36)
		::String tmp3 = tmp2->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(36)
		return tmp3;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Printer_obj,print,return )


Printer_obj::Printer_obj()
{
}

void Printer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Printer);
	HX_MARK_MEMBER_NAME(output,"output");
	HX_MARK_MEMBER_NAME(pretty,"pretty");
	HX_MARK_END_CLASS();
}

void Printer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(output,"output");
	HX_VISIT_MEMBER_NAME(pretty,"pretty");
}

Dynamic Printer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"output") ) { return output; }
		if (HX_FIELD_EQ(inName,"pretty") ) { return pretty; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"writeNode") ) { return writeNode_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hasChildren") ) { return hasChildren_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Printer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"print") ) { outValue = print_dyn(); return true;  }
	}
	return false;
}

Dynamic Printer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"output") ) { output=inValue.Cast< ::StringBuf >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pretty") ) { pretty=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Printer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Printer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("output","\x01","\x0f","\x81","\x0c"));
	outFields->push(HX_HCSTRING("pretty","\xb6","\x82","\xc1","\xae"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::StringBuf*/ ,(int)offsetof(Printer_obj,output),HX_HCSTRING("output","\x01","\x0f","\x81","\x0c")},
	{hx::fsBool,(int)offsetof(Printer_obj,pretty),HX_HCSTRING("pretty","\xb6","\x82","\xc1","\xae")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("output","\x01","\x0f","\x81","\x0c"),
	HX_HCSTRING("pretty","\xb6","\x82","\xc1","\xae"),
	HX_HCSTRING("writeNode","\x81","\xfe","\xbd","\x51"),
	HX_HCSTRING("hasChildren","\xb9","\xfe","\x20","\x43"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Printer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Printer_obj::__mClass,"__mClass");
};

#endif

hx::Class Printer_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("print","\x2d","\x58","\x8b","\xc8"),
	String(null()) };

void Printer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.xml.Printer","\xdb","\xa3","\xe3","\xd3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Printer_obj::__GetStatic;
	__mClass->mSetStaticField = &Printer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Printer_obj >;
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

} // end namespace haxe
} // end namespace xml
