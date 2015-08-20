#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_xml_Printer
#include <haxe/xml/Printer.h>
#endif
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_io_file_AssetFile
#include <haxor/io/file/AssetFile.h>
#endif
#ifndef INCLUDED_haxor_io_file_AssetXML
#include <haxor/io/file/AssetXML.h>
#endif
namespace haxor{
namespace io{
namespace file{

Void AssetXML_obj::__construct(::String p_name,::String p_src)
{
HX_STACK_FRAME("haxor.io.file.AssetXML","new",0x9d0b4eaf,"haxor.io.file.AssetXML.new","haxor/io/file/AssetXML.hx",22,0xd2413fe0)
HX_STACK_THIS(this)
HX_STACK_ARG(p_name,"p_name")
HX_STACK_ARG(p_src,"p_src")
{
	HX_STACK_LINE(23)
	::String tmp = p_name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	super::__construct(tmp);
	HX_STACK_LINE(24)
	::String tmp1 = p_src;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	::Xml tmp2 = ::Xml_obj::parse(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(24)
	this->x = tmp2;
	HX_STACK_LINE(25)
	::Xml tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(25)
	::Xml tmp4 = tmp3->firstElement();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(25)
	this->TraverseStep(tmp4);
}
;
	return null();
}

//AssetXML_obj::~AssetXML_obj() { }

Dynamic AssetXML_obj::__CreateEmpty() { return  new AssetXML_obj; }
hx::ObjectPtr< AssetXML_obj > AssetXML_obj::__new(::String p_name,::String p_src)
{  hx::ObjectPtr< AssetXML_obj > _result_ = new AssetXML_obj();
	_result_->__construct(p_name,p_src);
	return _result_;}

Dynamic AssetXML_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetXML_obj > _result_ = new AssetXML_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void AssetXML_obj::Parse( ::Xml n){
{
		HX_STACK_FRAME("haxor.io.file.AssetXML","Parse",0x28d1f022,"haxor.io.file.AssetXML.Parse","haxor/io/file/AssetXML.hx",32,0xd2413fe0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(n,"n")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetXML_obj,Parse,(void))

Void AssetXML_obj::TraverseStep( ::Xml n){
{
		HX_STACK_FRAME("haxor.io.file.AssetXML","TraverseStep",0x0eeb5e0f,"haxor.io.file.AssetXML.TraverseStep","haxor/io/file/AssetXML.hx",39,0xd2413fe0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(n,"n")
		HX_STACK_LINE(40)
		::Xml tmp = n;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(40)
		this->Parse(tmp);
		HX_STACK_LINE(41)
		Dynamic tmp1 = n->elements();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(41)
		Dynamic l = tmp1;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(42)
		while((true)){
			HX_STACK_LINE(42)
			bool tmp2 = l->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic )();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(42)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(42)
			if ((tmp3)){
				HX_STACK_LINE(42)
				break;
			}
			HX_STACK_LINE(42)
			::Xml tmp4 = l->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(42)
			this->TraverseStep(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetXML_obj,TraverseStep,(void))

::String AssetXML_obj::_a( ::Xml n,::String a,Dynamic v){
	HX_STACK_FRAME("haxor.io.file.AssetXML","_a",0xa72953b3,"haxor.io.file.AssetXML._a","haxor/io/file/AssetXML.hx",52,0xd2413fe0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(n,"n")
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(52)
	::String tmp = a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	bool tmp1 = n->exists(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(52)
	::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(52)
	if ((tmp1)){
		HX_STACK_LINE(52)
		::String tmp3 = a;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(52)
		tmp2 = n->get(tmp3);
	}
	else{
		HX_STACK_LINE(52)
		tmp2 = v;
	}
	HX_STACK_LINE(52)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC3(AssetXML_obj,_a,return )

::String AssetXML_obj::_tla( ::Xml n,::String a,Dynamic v){
	HX_STACK_FRAME("haxor.io.file.AssetXML","_tla",0xc2faafbb,"haxor.io.file.AssetXML._tla","haxor/io/file/AssetXML.hx",61,0xd2413fe0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(n,"n")
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(61)
	::String tmp = a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	bool tmp1 = n->exists(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(61)
	::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(61)
	if ((tmp1)){
		HX_STACK_LINE(61)
		::String tmp3 = a;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(61)
		::String tmp4 = n->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(61)
		::String tmp5 = ::StringTools_obj::trim(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(61)
		tmp2 = tmp5.toLowerCase();
	}
	else{
		HX_STACK_LINE(61)
		tmp2 = v;
	}
	HX_STACK_LINE(61)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC3(AssetXML_obj,_tla,return )

Dynamic AssetXML_obj::_p( ::Xml n,::String p,Dynamic v,hx::Null< bool >  __o_t,hx::Null< bool >  __o_tl){
bool t = __o_t.Default(false);
bool tl = __o_tl.Default(false);
	HX_STACK_FRAME("haxor.io.file.AssetXML","_p",0xa72953c2,"haxor.io.file.AssetXML._p","haxor/io/file/AssetXML.hx",73,0xd2413fe0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(n,"n")
	HX_STACK_ARG(p,"p")
	HX_STACK_ARG(v,"v")
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(tl,"tl")
{
		HX_STACK_LINE(74)
		Array< ::String > tmp = p.split(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(74)
		Array< ::String > l = tmp;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(75)
		::Xml it = n;		HX_STACK_VAR(it,"it");
		HX_STACK_LINE(76)
		{
			HX_STACK_LINE(76)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(76)
			int _g = l->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(76)
			while((true)){
				HX_STACK_LINE(76)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(76)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(76)
				if ((tmp2)){
					HX_STACK_LINE(76)
					break;
				}
				HX_STACK_LINE(76)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(76)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(78)
				::String tmp4 = l->__get(i);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(78)
				::String tk = tmp4;		HX_STACK_VAR(tk,"tk");
				HX_STACK_LINE(79)
				::String tmp5 = tk;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(79)
				::String _switch_1 = (tmp5);
				if (  ( _switch_1==HX_HCSTRING("$text","\xd1","\xae","\x66","\x07"))){
					HX_STACK_LINE(82)
					::Xml tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(82)
					{
						HX_STACK_LINE(82)
						{
							HX_STACK_LINE(82)
							int tmp7 = it->nodeType;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(82)
							int tmp8 = ::Xml_obj::Document;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(82)
							bool tmp9 = (tmp7 != tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(82)
							bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(82)
							if ((tmp9)){
								HX_STACK_LINE(82)
								int tmp11 = it->nodeType;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(82)
								int tmp12 = ::Xml_obj::Element;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(82)
								int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(82)
								tmp10 = (tmp11 != tmp13);
							}
							else{
								HX_STACK_LINE(82)
								tmp10 = false;
							}
							HX_STACK_LINE(82)
							if ((tmp10)){
								HX_STACK_LINE(82)
								::String tmp11 = (HX_HCSTRING("Bad node type, expected Element or Document but found ","\xa0","\xd6","\xba","\x79") + it->nodeType);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(82)
								HX_STACK_DO_THROW(tmp11);
							}
						}
						HX_STACK_LINE(82)
						tmp6 = it->children->__get((int)0).StaticCast< ::Xml >();
					}
					HX_STACK_LINE(82)
					bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(82)
					if ((tmp7)){
						HX_STACK_LINE(82)
						Dynamic tmp8 = v;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(82)
						return tmp8;
					}
					HX_STACK_LINE(83)
					::String tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(83)
					{
						HX_STACK_LINE(83)
						::Xml tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(83)
						{
							HX_STACK_LINE(83)
							{
								HX_STACK_LINE(83)
								int tmp10 = it->nodeType;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(83)
								int tmp11 = ::Xml_obj::Document;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(83)
								bool tmp12 = (tmp10 != tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(83)
								bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(83)
								if ((tmp12)){
									HX_STACK_LINE(83)
									int tmp14 = it->nodeType;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(83)
									int tmp15 = ::Xml_obj::Element;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(83)
									int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(83)
									tmp13 = (tmp14 != tmp16);
								}
								else{
									HX_STACK_LINE(83)
									tmp13 = false;
								}
								HX_STACK_LINE(83)
								if ((tmp13)){
									HX_STACK_LINE(83)
									::String tmp14 = (HX_HCSTRING("Bad node type, expected Element or Document but found ","\xa0","\xd6","\xba","\x79") + it->nodeType);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(83)
									HX_STACK_DO_THROW(tmp14);
								}
							}
							HX_STACK_LINE(83)
							tmp9 = it->children->__get((int)0).StaticCast< ::Xml >();
						}
						HX_STACK_LINE(83)
						::Xml _this = tmp9;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(83)
						::Xml tmp10 = _this;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(83)
						tmp8 = ::haxe::xml::Printer_obj::print(tmp10,null());
					}
					HX_STACK_LINE(83)
					::String txt = tmp8;		HX_STACK_VAR(txt,"txt");
					HX_STACK_LINE(84)
					bool tmp9 = t;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(84)
					if ((tmp9)){
						HX_STACK_LINE(84)
						::String tmp10 = txt;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(84)
						::String tmp11 = ::StringTools_obj::trim(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(84)
						txt = tmp11;
					}
					HX_STACK_LINE(85)
					bool tmp10 = tl;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(85)
					if ((tmp10)){
						HX_STACK_LINE(85)
						::String tmp11 = txt.toLowerCase();		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(85)
						txt = tmp11;
					}
					HX_STACK_LINE(86)
					::String tmp11 = txt;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(86)
					return tmp11;
				}
				else  {
					HX_STACK_LINE(89)
					::String tmp6 = tk.charAt((int)0);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(89)
					bool tmp7 = (tmp6 == HX_HCSTRING("@","\x40","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(89)
					if ((tmp7)){
						HX_STACK_LINE(91)
						bool tmp8 = t;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(91)
						if ((tmp8)){
							HX_STACK_LINE(91)
							bool tmp9 = tl;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(91)
							if ((tmp9)){
								HX_STACK_LINE(91)
								::Xml tmp10 = it;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(91)
								::String tmp11 = tk.substr((int)1,null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(91)
								Dynamic tmp12 = v;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(91)
								::String tmp13 = this->_tla(tmp10,tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(91)
								return tmp13;
							}
						}
						HX_STACK_LINE(92)
						::Xml tmp9 = it;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(92)
						::String tmp10 = tk.substr((int)1,null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(92)
						Dynamic tmp11 = v;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(92)
						::String tmp12 = this->_a(tmp9,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(92)
						return tmp12;
					}
					HX_STACK_LINE(94)
					::String tmp8 = tk;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(94)
					Dynamic tmp9 = it->elementsNamed(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(94)
					Dynamic eit = tmp9;		HX_STACK_VAR(eit,"eit");
					HX_STACK_LINE(95)
					bool tmp10 = (eit == null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(95)
					if ((tmp10)){
						HX_STACK_LINE(95)
						Dynamic tmp11 = v;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(95)
						return tmp11;
					}
					HX_STACK_LINE(96)
					int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(96)
					int tmp12 = (l->length - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(96)
					bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(96)
					if ((tmp13)){
						HX_STACK_LINE(96)
						Dynamic tmp14 = eit;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(96)
						return tmp14;
					}
					HX_STACK_LINE(97)
					bool tmp14 = eit->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic )();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(97)
					bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(97)
					if ((tmp15)){
						HX_STACK_LINE(97)
						Dynamic tmp16 = v;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(97)
						return tmp16;
					}
					HX_STACK_LINE(98)
					::Xml tmp16 = eit->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(98)
					it = tmp16;
				}
;
;
			}
		}
		HX_STACK_LINE(101)
		Dynamic tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(101)
		return tmp1;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(AssetXML_obj,_p,return )

::Xml AssetXML_obj::_f( ::Xml n,::String p,::String a,::String t){
	HX_STACK_FRAME("haxor.io.file.AssetXML","_f",0xa72953b8,"haxor.io.file.AssetXML._f","haxor/io/file/AssetXML.hx",113,0xd2413fe0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(n,"n")
	HX_STACK_ARG(p,"p")
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(114)
	::Xml tmp = n;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(114)
	::String tmp1 = p;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(114)
	Dynamic tmp2 = this->_p(tmp,tmp1,HX_HCSTRING("","\x00","\x00","\x00","\x00"),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(114)
	Dynamic f = tmp2;		HX_STACK_VAR(f,"f");
	HX_STACK_LINE(115)
	bool tmp3 = (f == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(115)
	Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(115)
	if ((tmp3)){
		HX_STACK_LINE(115)
		tmp4 = null();
	}
	else{
		HX_STACK_LINE(115)
		tmp4 = f;
	}
	HX_STACK_LINE(115)
	Dynamic it = tmp4;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(116)
	bool tmp5 = (it == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(116)
	if ((tmp5)){
		HX_STACK_LINE(116)
		return null();
	}
	HX_STACK_LINE(117)
	while((true)){
		HX_STACK_LINE(117)
		bool tmp6 = it->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic )();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(117)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(117)
		if ((tmp7)){
			HX_STACK_LINE(117)
			break;
		}
		HX_STACK_LINE(117)
		::Xml tmp8 = it->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(117)
		::Xml e = tmp8;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(117)
		::Xml tmp9 = e;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(117)
		::String tmp10 = a;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(117)
		::String tmp11 = this->_a(tmp9,tmp10,HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(117)
		::String tmp12 = t;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(117)
		bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(117)
		if ((tmp13)){
			HX_STACK_LINE(117)
			::Xml tmp14 = e;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(117)
			return tmp14;
		}
	}
	HX_STACK_LINE(118)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC4(AssetXML_obj,_f,return )


AssetXML_obj::AssetXML_obj()
{
}

void AssetXML_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetXML);
	HX_MARK_MEMBER_NAME(x,"x");
	::haxor::io::file::AssetFile_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AssetXML_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	::haxor::io::file::AssetFile_obj::__Visit(HX_VISIT_ARG);
}

Dynamic AssetXML_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"_a") ) { return _a_dyn(); }
		if (HX_FIELD_EQ(inName,"_p") ) { return _p_dyn(); }
		if (HX_FIELD_EQ(inName,"_f") ) { return _f_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_tla") ) { return _tla_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"Parse") ) { return Parse_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"TraverseStep") ) { return TraverseStep_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AssetXML_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< ::Xml >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool AssetXML_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void AssetXML_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Xml*/ ,(int)offsetof(AssetXML_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("Parse","\x13","\x00","\x83","\x50"),
	HX_HCSTRING("TraverseStep","\x3e","\x9e","\x87","\x7c"),
	HX_HCSTRING("_a","\x22","\x53","\x00","\x00"),
	HX_HCSTRING("_tla","\xea","\xa8","\x23","\x3f"),
	HX_HCSTRING("_p","\x31","\x53","\x00","\x00"),
	HX_HCSTRING("_f","\x27","\x53","\x00","\x00"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetXML_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetXML_obj::__mClass,"__mClass");
};

#endif

hx::Class AssetXML_obj::__mClass;

void AssetXML_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.io.file.AssetXML","\x3d","\xcb","\x1c","\x49");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &AssetXML_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AssetXML_obj >;
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
} // end namespace file
