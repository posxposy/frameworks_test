#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_haxor_io_file_ColladaFile
#include <haxor/io/file/ColladaFile.h>
#endif
#ifndef INCLUDED_haxor_io_file_ColladaInput
#include <haxor/io/file/ColladaInput.h>
#endif
#ifndef INCLUDED_haxor_io_file_ColladaPrimitive
#include <haxor/io/file/ColladaPrimitive.h>
#endif
namespace haxor{
namespace io{
namespace file{

Void ColladaPrimitive_obj::__construct()
{
HX_STACK_FRAME("haxor.io.file.ColladaPrimitive","new",0x06746abd,"haxor.io.file.ColladaPrimitive.new","haxor/io/file/ColladaFile.hx",1201,0xa1888587)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(1207)
	this->indexes = null();
	HX_STACK_LINE(1206)
	this->vcount = null();
	HX_STACK_LINE(1205)
	this->inputs = null();
	HX_STACK_LINE(1204)
	this->material = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(1203)
	this->type = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(1235)
	Array< ::Dynamic > tmp = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1235)
	this->inputs = tmp;
	HX_STACK_LINE(1236)
	Array< int > tmp1 = Array_obj< int >::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1236)
	this->vcount = tmp1;
	HX_STACK_LINE(1237)
	Array< ::Dynamic > tmp2 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1237)
	this->indexes = tmp2;
	HX_STACK_LINE(1238)
	this->m_triangles = null();
}
;
	return null();
}

//ColladaPrimitive_obj::~ColladaPrimitive_obj() { }

Dynamic ColladaPrimitive_obj::__CreateEmpty() { return  new ColladaPrimitive_obj; }
hx::ObjectPtr< ColladaPrimitive_obj > ColladaPrimitive_obj::__new()
{  hx::ObjectPtr< ColladaPrimitive_obj > _result_ = new ColladaPrimitive_obj();
	_result_->__construct();
	return _result_;}

Dynamic ColladaPrimitive_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ColladaPrimitive_obj > _result_ = new ColladaPrimitive_obj();
	_result_->__construct();
	return _result_;}

Array< ::Dynamic > ColladaPrimitive_obj::get_triangles( ){
	HX_STACK_FRAME("haxor.io.file.ColladaPrimitive","get_triangles",0xcc17151f,"haxor.io.file.ColladaPrimitive.get_triangles","haxor/io/file/ColladaFile.hx",1211,0xa1888587)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1212)
	Array< ::Dynamic > tmp = this->m_triangles;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1212)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1212)
	if ((tmp1)){
		HX_STACK_LINE(1212)
		Array< ::Dynamic > tmp2 = this->m_triangles;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1212)
		return tmp2;
	}
	HX_STACK_LINE(1213)
	::String tmp2 = this->type;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1213)
	Array< ::Dynamic > tmp3 = this->indexes;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1213)
	Array< int > tmp4 = this->vcount;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1213)
	Array< ::Dynamic > tmp5 = ::haxor::io::file::ColladaFile_obj::GenerateTriangles(tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1213)
	this->m_triangles = tmp5;
	HX_STACK_LINE(1214)
	Array< ::Dynamic > tmp6 = this->m_triangles;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1214)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(ColladaPrimitive_obj,get_triangles,return )

int ColladaPrimitive_obj::get_offset( ){
	HX_STACK_FRAME("haxor.io.file.ColladaPrimitive","get_offset",0x6ea1229f,"haxor.io.file.ColladaPrimitive.get_offset","haxor/io/file/ColladaFile.hx",1222,0xa1888587)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1223)
	int mo = (int)0;		HX_STACK_VAR(mo,"mo");
	HX_STACK_LINE(1224)
	{
		HX_STACK_LINE(1224)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1224)
		Array< ::Dynamic > tmp = this->inputs;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1224)
		int _g = tmp->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1224)
		while((true)){
			HX_STACK_LINE(1224)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1224)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1224)
			if ((tmp2)){
				HX_STACK_LINE(1224)
				break;
			}
			HX_STACK_LINE(1224)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1224)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1226)
			Array< ::Dynamic > tmp4 = this->inputs;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1226)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1226)
			::haxor::io::file::ColladaInput tmp6 = tmp4->__get(tmp5).StaticCast< ::haxor::io::file::ColladaInput >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1226)
			::haxor::io::file::ColladaInput ci = tmp6;		HX_STACK_VAR(ci,"ci");
			HX_STACK_LINE(1227)
			bool tmp7 = (ci == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1227)
			if ((tmp7)){
				HX_STACK_LINE(1227)
				::String tmp8 = this->material;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1227)
				::String tmp9 = (tmp8 + HX_HCSTRING(" ci[","\xd5","\x4e","\x72","\x15"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1227)
				int tmp10 = i;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1227)
				::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1227)
				::String tmp12 = (tmp11 + HX_HCSTRING("] is null","\xba","\xcb","\x3a","\x87"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1227)
				Dynamic tmp13 = hx::SourceInfo(HX_HCSTRING("ColladaFile.hx","\x90","\x3a","\x90","\x07"),1227,HX_HCSTRING("haxor.io.file.ColladaPrimitive","\x4b","\x48","\x67","\x9f"),HX_HCSTRING("get_offset","\x5c","\x07","\xc7","\x50"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1227)
				::haxe::Log_obj::trace(tmp12,tmp13);
				HX_STACK_LINE(1227)
				continue;
			}
			HX_STACK_LINE(1228)
			int tmp8 = mo;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1228)
			int tmp9 = (ci->offset + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1228)
			Float tmp10 = ::Math_obj::max(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1228)
			mo = ((int)(tmp10));
		}
	}
	HX_STACK_LINE(1230)
	int tmp = mo;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1230)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ColladaPrimitive_obj,get_offset,return )

::haxor::io::file::ColladaInput ColladaPrimitive_obj::GetInput( ::String p_semantic,hx::Null< int >  __o_p_set){
int p_set = __o_p_set.Default(-1);
	HX_STACK_FRAME("haxor.io.file.ColladaPrimitive","GetInput",0xe2484437,"haxor.io.file.ColladaPrimitive.GetInput","haxor/io/file/ColladaFile.hx",1242,0xa1888587)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_semantic,"p_semantic")
	HX_STACK_ARG(p_set,"p_set")
{
		HX_STACK_LINE(1243)
		{
			HX_STACK_LINE(1243)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1243)
			Array< ::Dynamic > tmp = this->inputs;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1243)
			int _g = tmp->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1243)
			while((true)){
				HX_STACK_LINE(1243)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1243)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1243)
				if ((tmp2)){
					HX_STACK_LINE(1243)
					break;
				}
				HX_STACK_LINE(1243)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1243)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1245)
				Array< ::Dynamic > tmp4 = this->inputs;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1245)
				int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1245)
				::haxor::io::file::ColladaInput tmp6 = tmp4->__get(tmp5).StaticCast< ::haxor::io::file::ColladaInput >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1245)
				::String tmp7 = tmp6->semantic;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1245)
				::String tmp8 = p_semantic;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1245)
				bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1245)
				if ((tmp9)){
					HX_STACK_LINE(1247)
					bool tmp10 = (p_set < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1247)
					if ((tmp10)){
						HX_STACK_LINE(1247)
						Array< ::Dynamic > tmp11 = this->inputs;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1247)
						int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1247)
						::haxor::io::file::ColladaInput tmp13 = tmp11->__get(tmp12).StaticCast< ::haxor::io::file::ColladaInput >();		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1247)
						return tmp13;
					}
					else{
						HX_STACK_LINE(1249)
						int tmp11 = p_set;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1249)
						Array< ::Dynamic > tmp12 = this->inputs;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1249)
						int tmp13 = i;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1249)
						::haxor::io::file::ColladaInput tmp14 = tmp12->__get(tmp13).StaticCast< ::haxor::io::file::ColladaInput >();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1249)
						int tmp15 = tmp14->set;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1249)
						bool tmp16 = (tmp11 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1249)
						if ((tmp16)){
							HX_STACK_LINE(1249)
							Array< ::Dynamic > tmp17 = this->inputs;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1249)
							int tmp18 = i;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1249)
							::haxor::io::file::ColladaInput tmp19 = tmp17->__get(tmp18).StaticCast< ::haxor::io::file::ColladaInput >();		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1249)
							return tmp19;
						}
					}
				}
			}
		}
		HX_STACK_LINE(1252)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC2(ColladaPrimitive_obj,GetInput,return )

Dynamic ColladaPrimitive_obj::GetTriangulatedVectorArray( ::String p_semantic,hx::Null< int >  __o_p_set,hx::Null< bool >  __o_p_debug){
int p_set = __o_p_set.Default(-1);
bool p_debug = __o_p_debug.Default(false);
	HX_STACK_FRAME("haxor.io.file.ColladaPrimitive","GetTriangulatedVectorArray",0xde1f7a6b,"haxor.io.file.ColladaPrimitive.GetTriangulatedVectorArray","haxor/io/file/ColladaFile.hx",1256,0xa1888587)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_semantic,"p_semantic")
	HX_STACK_ARG(p_set,"p_set")
	HX_STACK_ARG(p_debug,"p_debug")
{
		HX_STACK_LINE(1257)
		::String tmp = p_semantic;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1257)
		int tmp1 = p_set;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1257)
		::haxor::io::file::ColladaInput tmp2 = this->GetInput(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1257)
		::haxor::io::file::ColladaInput ci = tmp2;		HX_STACK_VAR(ci,"ci");
		HX_STACK_LINE(1258)
		::String tmp3 = (HX_HCSTRING("semantic[","\x95","\x54","\xab","\x73") + p_semantic);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1258)
		::String tmp4 = (tmp3 + HX_HCSTRING("][","\x5e","\x51","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1258)
		int tmp5 = p_set;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1258)
		::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1258)
		::String tmp7 = (tmp6 + HX_HCSTRING("] ok[","\x7c","\x5e","\xbf","\xa1"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1258)
		bool tmp8 = (ci != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1258)
		::String tmp9 = ::Std_obj::string(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1258)
		::String tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1258)
		::String tmp11 = (tmp10 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1258)
		Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("ColladaFile.hx","\x90","\x3a","\x90","\x07"),1258,HX_HCSTRING("haxor.io.file.ColladaPrimitive","\x4b","\x48","\x67","\x9f"),HX_HCSTRING("GetTriangulatedVectorArray","\x28","\x69","\x4f","\xef"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1258)
		::haxe::Log_obj::trace(tmp11,tmp12);
		HX_STACK_LINE(1259)
		bool tmp13 = (ci == null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1259)
		if ((tmp13)){
			HX_STACK_LINE(1259)
			Dynamic tmp14 = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1259)
			return tmp14;
		}
		HX_STACK_LINE(1261)
		Dynamic tmp14 = ci->GetVectorArray();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1261)
		Dynamic vec = tmp14;		HX_STACK_VAR(vec,"vec");
		HX_STACK_LINE(1262)
		int off = ci->offset;		HX_STACK_VAR(off,"off");
		HX_STACK_LINE(1263)
		Dynamic tmp15 = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1263)
		Dynamic res = tmp15;		HX_STACK_VAR(res,"res");
		HX_STACK_LINE(1265)
		bool tmp16 = (vec->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) <= (int)0);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1265)
		if ((tmp16)){
			HX_STACK_LINE(1265)
			Dynamic tmp17 = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1265)
			return tmp17;
		}
		HX_STACK_LINE(1266)
		bool tmp17 = (off < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1266)
		if ((tmp17)){
			HX_STACK_LINE(1266)
			Dynamic tmp18 = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1266)
			return tmp18;
		}
		HX_STACK_LINE(1268)
		{
			HX_STACK_LINE(1268)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1268)
			Array< ::Dynamic > tmp18 = this->get_triangles();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1268)
			int _g = tmp18->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1268)
			while((true)){
				HX_STACK_LINE(1268)
				bool tmp19 = (_g1 < _g);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1268)
				bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1268)
				if ((tmp20)){
					HX_STACK_LINE(1268)
					break;
				}
				HX_STACK_LINE(1268)
				int tmp21 = (_g1)++;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1268)
				int i = tmp21;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1270)
				Array< ::Dynamic > tmp22 = this->get_triangles();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1270)
				int tmp23 = i;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1270)
				Array< int > tmp24 = tmp22->__get(tmp23).StaticCast< Array< int > >();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1270)
				Array< int > tuple = tmp24;		HX_STACK_VAR(tuple,"tuple");
				HX_STACK_LINE(1271)
				int tmp25 = tuple->__get(off);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1271)
				int idx = tmp25;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(1272)
				res->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(vec->__GetItem(idx));
			}
		}
		HX_STACK_LINE(1278)
		Dynamic tmp18 = res;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1278)
		return tmp18;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(ColladaPrimitive_obj,GetTriangulatedVectorArray,return )

Dynamic ColladaPrimitive_obj::GetVectorArray( ::String p_semantic,hx::Null< int >  __o_p_set){
int p_set = __o_p_set.Default(-1);
	HX_STACK_FRAME("haxor.io.file.ColladaPrimitive","GetVectorArray",0xc1a8e9c3,"haxor.io.file.ColladaPrimitive.GetVectorArray","haxor/io/file/ColladaFile.hx",1282,0xa1888587)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_semantic,"p_semantic")
	HX_STACK_ARG(p_set,"p_set")
{
		HX_STACK_LINE(1283)
		Dynamic tmp = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1283)
		Dynamic res = tmp;		HX_STACK_VAR(res,"res");
		HX_STACK_LINE(1285)
		{
			HX_STACK_LINE(1285)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1285)
			Array< ::Dynamic > tmp1 = this->inputs;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1285)
			int _g = tmp1->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1285)
			while((true)){
				HX_STACK_LINE(1285)
				bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1285)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1285)
				if ((tmp3)){
					HX_STACK_LINE(1285)
					break;
				}
				HX_STACK_LINE(1285)
				int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1285)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1287)
				Array< ::Dynamic > tmp5 = this->inputs;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1287)
				int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1287)
				::haxor::io::file::ColladaInput tmp7 = tmp5->__get(tmp6).StaticCast< ::haxor::io::file::ColladaInput >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1287)
				::String tmp8 = tmp7->semantic;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1287)
				::String tmp9 = p_semantic;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1287)
				bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1287)
				if ((tmp10)){
					HX_STACK_LINE(1289)
					bool tmp11 = (p_set < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1289)
					if ((tmp11)){
						HX_STACK_LINE(1289)
						Array< ::Dynamic > tmp12 = this->inputs;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1289)
						int tmp13 = i;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1289)
						::haxor::io::file::ColladaInput tmp14 = tmp12->__get(tmp13).StaticCast< ::haxor::io::file::ColladaInput >();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1289)
						Dynamic tmp15 = tmp14->GetVectorArray();		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1289)
						res = tmp15;
						HX_STACK_LINE(1289)
						break;
					}
					else{
						HX_STACK_LINE(1291)
						int tmp12 = p_set;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1291)
						Array< ::Dynamic > tmp13 = this->inputs;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1291)
						int tmp14 = i;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1291)
						::haxor::io::file::ColladaInput tmp15 = tmp13->__get(tmp14).StaticCast< ::haxor::io::file::ColladaInput >();		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1291)
						int tmp16 = tmp15->set;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1291)
						bool tmp17 = (tmp12 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1291)
						if ((tmp17)){
							HX_STACK_LINE(1291)
							Array< ::Dynamic > tmp18 = this->inputs;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1291)
							int tmp19 = i;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1291)
							::haxor::io::file::ColladaInput tmp20 = tmp18->__get(tmp19).StaticCast< ::haxor::io::file::ColladaInput >();		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1291)
							Dynamic tmp21 = tmp20->GetVectorArray();		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1291)
							res = tmp21;
							HX_STACK_LINE(1291)
							break;
						}
					}
				}
			}
		}
		HX_STACK_LINE(1295)
		bool tmp1 = (p_semantic == HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1295)
		if ((tmp1)){
			HX_STACK_LINE(1295)
			bool tmp2 = (p_set < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1295)
			if ((tmp2)){
				HX_STACK_LINE(1297)
				Dynamic tmp3 = this->GetVectorArray(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),(int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1297)
				Dynamic l = tmp3;		HX_STACK_VAR(l,"l");
				HX_STACK_LINE(1298)
				bool tmp4 = (l->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1298)
				if ((tmp4)){
					HX_STACK_LINE(1300)
					Float tmp5 = ::Math_obj::min(l->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ),res->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1300)
					int len = ((int)(tmp5));		HX_STACK_VAR(len,"len");
					HX_STACK_LINE(1301)
					{
						HX_STACK_LINE(1301)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1301)
						while((true)){
							HX_STACK_LINE(1301)
							bool tmp6 = (_g < len);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1301)
							bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1301)
							if ((tmp7)){
								HX_STACK_LINE(1301)
								break;
							}
							HX_STACK_LINE(1301)
							int tmp8 = (_g)++;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1301)
							int i = tmp8;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(1301)
							Dynamic tmp9 = l->__GetItem(i);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1301)
							Dynamic tmp10 = res->__GetItem(i);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1301)
							tmp10->__FieldRef(HX_HCSTRING("a","\x61","\x00","\x00","\x00")) = tmp9->__Field(HX_HCSTRING("r","\x72","\x00","\x00","\x00"), hx::paccDynamic );
						}
					}
				}
			}
		}
		HX_STACK_LINE(1305)
		Dynamic tmp2 = res;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1305)
		return tmp2;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(ColladaPrimitive_obj,GetVectorArray,return )


ColladaPrimitive_obj::ColladaPrimitive_obj()
{
}

void ColladaPrimitive_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ColladaPrimitive);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(material,"material");
	HX_MARK_MEMBER_NAME(inputs,"inputs");
	HX_MARK_MEMBER_NAME(vcount,"vcount");
	HX_MARK_MEMBER_NAME(indexes,"indexes");
	HX_MARK_MEMBER_NAME(m_triangles,"m_triangles");
	HX_MARK_END_CLASS();
}

void ColladaPrimitive_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(material,"material");
	HX_VISIT_MEMBER_NAME(inputs,"inputs");
	HX_VISIT_MEMBER_NAME(vcount,"vcount");
	HX_VISIT_MEMBER_NAME(indexes,"indexes");
	HX_VISIT_MEMBER_NAME(m_triangles,"m_triangles");
}

Dynamic ColladaPrimitive_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"inputs") ) { return inputs; }
		if (HX_FIELD_EQ(inName,"vcount") ) { return vcount; }
		if (HX_FIELD_EQ(inName,"offset") ) { if (inCallProp == hx::paccAlways) return get_offset(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indexes") ) { return indexes; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"material") ) { return material; }
		if (HX_FIELD_EQ(inName,"GetInput") ) { return GetInput_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"triangles") ) { if (inCallProp == hx::paccAlways) return get_triangles(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_offset") ) { return get_offset_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"m_triangles") ) { return m_triangles; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_triangles") ) { return get_triangles_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"GetVectorArray") ) { return GetVectorArray_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"GetTriangulatedVectorArray") ) { return GetTriangulatedVectorArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ColladaPrimitive_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"inputs") ) { inputs=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vcount") ) { vcount=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indexes") ) { indexes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"material") ) { material=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"m_triangles") ) { m_triangles=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ColladaPrimitive_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ColladaPrimitive_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("material","\xa7","\x5c","\xa5","\xf0"));
	outFields->push(HX_HCSTRING("inputs","\x29","\xc5","\xed","\x9b"));
	outFields->push(HX_HCSTRING("vcount","\x99","\xd8","\x7f","\x78"));
	outFields->push(HX_HCSTRING("indexes","\x00","\x5c","\xbf","\xe0"));
	outFields->push(HX_HCSTRING("triangles","\xab","\x30","\x41","\x7f"));
	outFields->push(HX_HCSTRING("m_triangles","\x19","\x57","\x97","\xb9"));
	outFields->push(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(ColladaPrimitive_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsString,(int)offsetof(ColladaPrimitive_obj,material),HX_HCSTRING("material","\xa7","\x5c","\xa5","\xf0")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ColladaPrimitive_obj,inputs),HX_HCSTRING("inputs","\x29","\xc5","\xed","\x9b")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(ColladaPrimitive_obj,vcount),HX_HCSTRING("vcount","\x99","\xd8","\x7f","\x78")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ColladaPrimitive_obj,indexes),HX_HCSTRING("indexes","\x00","\x5c","\xbf","\xe0")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ColladaPrimitive_obj,m_triangles),HX_HCSTRING("m_triangles","\x19","\x57","\x97","\xb9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("material","\xa7","\x5c","\xa5","\xf0"),
	HX_HCSTRING("inputs","\x29","\xc5","\xed","\x9b"),
	HX_HCSTRING("vcount","\x99","\xd8","\x7f","\x78"),
	HX_HCSTRING("indexes","\x00","\x5c","\xbf","\xe0"),
	HX_HCSTRING("get_triangles","\x82","\x04","\xa5","\x40"),
	HX_HCSTRING("m_triangles","\x19","\x57","\x97","\xb9"),
	HX_HCSTRING("get_offset","\x5c","\x07","\xc7","\x50"),
	HX_HCSTRING("GetInput","\xb4","\x8f","\xa6","\xf7"),
	HX_HCSTRING("GetTriangulatedVectorArray","\x28","\x69","\x4f","\xef"),
	HX_HCSTRING("GetVectorArray","\x00","\x71","\x4c","\x49"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColladaPrimitive_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColladaPrimitive_obj::__mClass,"__mClass");
};

#endif

hx::Class ColladaPrimitive_obj::__mClass;

void ColladaPrimitive_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.io.file.ColladaPrimitive","\x4b","\x48","\x67","\x9f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ColladaPrimitive_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ColladaPrimitive_obj >;
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
