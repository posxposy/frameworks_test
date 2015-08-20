#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxor_io_file_ColladaController
#include <haxor/io/file/ColladaController.h>
#endif
#ifndef INCLUDED_haxor_io_file_ColladaInput
#include <haxor/io/file/ColladaInput.h>
#endif
#ifndef INCLUDED_haxor_io_file_ColladaPrimitive
#include <haxor/io/file/ColladaPrimitive.h>
#endif
#ifndef INCLUDED_haxor_math_Matrix4
#include <haxor/math/Matrix4.h>
#endif
#ifndef INCLUDED_haxor_math_Vector4
#include <haxor/math/Vector4.h>
#endif
namespace haxor{
namespace io{
namespace file{

Void ColladaController_obj::__construct()
{
HX_STACK_FRAME("haxor.io.file.ColladaController","new",0x66ccc56a,"haxor.io.file.ColladaController.new","haxor/io/file/ColladaFile.hx",1365,0xa1888587)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(1380)
	this->bones = null();
	HX_STACK_LINE(1378)
	this->weights = null();
	HX_STACK_LINE(1376)
	this->indexes = null();
	HX_STACK_LINE(1375)
	this->vcount = null();
	HX_STACK_LINE(1374)
	this->inputs = null();
	HX_STACK_LINE(1373)
	this->joints = null();
	HX_STACK_LINE(1372)
	this->binds = null();
	HX_STACK_LINE(1371)
	this->matrix = null();
	HX_STACK_LINE(1370)
	this->name = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(1369)
	this->id = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(1368)
	this->source = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(1367)
	this->type = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(1397)
	Array< Float > tmp = Array_obj< Float >::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1397)
	this->matrix = tmp;
	HX_STACK_LINE(1398)
	Array< ::Dynamic > tmp1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1398)
	this->binds = tmp1;
	HX_STACK_LINE(1399)
	Array< ::Dynamic > tmp2 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1399)
	this->inputs = tmp2;
	HX_STACK_LINE(1400)
	Array< ::String > tmp3 = Array_obj< ::String >::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1400)
	this->joints = tmp3;
	HX_STACK_LINE(1401)
	Array< int > tmp4 = Array_obj< int >::__new();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1401)
	this->vcount = tmp4;
	HX_STACK_LINE(1402)
	Array< ::Dynamic > tmp5 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1402)
	this->indexes = tmp5;
}
;
	return null();
}

//ColladaController_obj::~ColladaController_obj() { }

Dynamic ColladaController_obj::__CreateEmpty() { return  new ColladaController_obj; }
hx::ObjectPtr< ColladaController_obj > ColladaController_obj::__new()
{  hx::ObjectPtr< ColladaController_obj > _result_ = new ColladaController_obj();
	_result_->__construct();
	return _result_;}

Dynamic ColladaController_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ColladaController_obj > _result_ = new ColladaController_obj();
	_result_->__construct();
	return _result_;}

int ColladaController_obj::get_offset( ){
	HX_STACK_FRAME("haxor.io.file.ColladaController","get_offset",0xac7f2792,"haxor.io.file.ColladaController.get_offset","haxor/io/file/ColladaFile.hx",1384,0xa1888587)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1385)
	int mo = (int)0;		HX_STACK_VAR(mo,"mo");
	HX_STACK_LINE(1386)
	{
		HX_STACK_LINE(1386)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1386)
		Array< ::Dynamic > tmp = this->inputs;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1386)
		int _g = tmp->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1386)
		while((true)){
			HX_STACK_LINE(1386)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1386)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1386)
			if ((tmp2)){
				HX_STACK_LINE(1386)
				break;
			}
			HX_STACK_LINE(1386)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1386)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1388)
			Array< ::Dynamic > tmp4 = this->inputs;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1388)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1388)
			::haxor::io::file::ColladaInput tmp6 = tmp4->__get(tmp5).StaticCast< ::haxor::io::file::ColladaInput >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1388)
			::haxor::io::file::ColladaInput ci = tmp6;		HX_STACK_VAR(ci,"ci");
			HX_STACK_LINE(1389)
			bool tmp7 = (ci == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1389)
			if ((tmp7)){
				HX_STACK_LINE(1389)
				::String tmp8 = this->name;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1389)
				::String tmp9 = (HX_HCSTRING("ColladaController> name[","\x80","\xaf","\x90","\x3f") + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1389)
				::String tmp10 = (tmp9 + HX_HCSTRING("] ci[","\xb2","\x41","\xb6","\xa1"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1389)
				int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1389)
				::String tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1389)
				::String tmp13 = (tmp12 + HX_HCSTRING("] is null","\xba","\xcb","\x3a","\x87"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1389)
				Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("ColladaFile.hx","\x90","\x3a","\x90","\x07"),1389,HX_HCSTRING("haxor.io.file.ColladaController","\x78","\x88","\x97","\x99"),HX_HCSTRING("get_offset","\x5c","\x07","\xc7","\x50"));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1389)
				::haxe::Log_obj::trace(tmp13,tmp14);
			}
			HX_STACK_LINE(1390)
			int tmp8 = mo;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1390)
			int tmp9 = (ci->offset + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1390)
			Float tmp10 = ::Math_obj::max(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1390)
			mo = ((int)(tmp10));
		}
	}
	HX_STACK_LINE(1392)
	int tmp = mo;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1392)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ColladaController_obj,get_offset,return )

::haxor::math::Matrix4 ColladaController_obj::GetBSM( ){
	HX_STACK_FRAME("haxor.io.file.ColladaController","GetBSM",0xc4189fdc,"haxor.io.file.ColladaController.GetBSM","haxor/io/file/ColladaFile.hx",1406,0xa1888587)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1407)
	::haxor::math::Matrix4 tmp = ::haxor::math::Matrix4_obj::__new((int)1,(int)0,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1407)
	::haxor::math::Matrix4 mtx = tmp;		HX_STACK_VAR(mtx,"mtx");
	HX_STACK_LINE(1409)
	{
		HX_STACK_LINE(1409)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1409)
		Array< Float > tmp1 = this->matrix;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1409)
		int _g = tmp1->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1409)
		while((true)){
			HX_STACK_LINE(1409)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1409)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1409)
			if ((tmp3)){
				HX_STACK_LINE(1409)
				break;
			}
			HX_STACK_LINE(1409)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1409)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1409)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1409)
			Array< Float > tmp6 = this->matrix;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1409)
			int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1409)
			Float tmp8 = tmp6->__get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1409)
			mtx->SetIndex(tmp5,tmp8);
		}
	}
	HX_STACK_LINE(1410)
	::haxor::math::Matrix4 tmp1 = mtx;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1410)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ColladaController_obj,GetBSM,return )

int ColladaController_obj::GetJointIndex( ::String p_joint){
	HX_STACK_FRAME("haxor.io.file.ColladaController","GetJointIndex",0xd243f708,"haxor.io.file.ColladaController.GetJointIndex","haxor/io/file/ColladaFile.hx",1414,0xa1888587)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_joint,"p_joint")
	HX_STACK_LINE(1415)
	{
		HX_STACK_LINE(1415)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1415)
		Array< ::String > tmp = this->joints;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1415)
		int _g = tmp->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1415)
		while((true)){
			HX_STACK_LINE(1415)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1415)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1415)
			if ((tmp2)){
				HX_STACK_LINE(1415)
				break;
			}
			HX_STACK_LINE(1415)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1415)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1415)
			::String tmp4 = p_joint;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1415)
			Array< ::String > tmp5 = this->joints;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1415)
			int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1415)
			::String tmp7 = tmp5->__get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1415)
			bool tmp8 = (tmp4 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1415)
			if ((tmp8)){
				HX_STACK_LINE(1415)
				int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1415)
				return tmp9;
			}
		}
	}
	HX_STACK_LINE(1416)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC1(ColladaController_obj,GetJointIndex,return )

Array< ::Dynamic > ColladaController_obj::GetBinds( ){
	HX_STACK_FRAME("haxor.io.file.ColladaController","GetBinds",0x82096276,"haxor.io.file.ColladaController.GetBinds","haxor/io/file/ColladaFile.hx",1420,0xa1888587)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1421)
	Array< ::Dynamic > tmp = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1421)
	Array< ::Dynamic > res = tmp;		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(1422)
	{
		HX_STACK_LINE(1422)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1422)
		Array< ::Dynamic > tmp1 = this->binds;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1422)
		int _g = tmp1->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1422)
		while((true)){
			HX_STACK_LINE(1422)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1422)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1422)
			if ((tmp3)){
				HX_STACK_LINE(1422)
				break;
			}
			HX_STACK_LINE(1422)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1422)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1424)
			::haxor::math::Matrix4 tmp5 = ::haxor::math::Matrix4_obj::__new((int)1,(int)0,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1424)
			::haxor::math::Matrix4 mtx = tmp5;		HX_STACK_VAR(mtx,"mtx");
			HX_STACK_LINE(1426)
			{
				HX_STACK_LINE(1426)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(1426)
				Array< ::Dynamic > tmp6 = this->binds;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1426)
				int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1426)
				Array< Float > tmp8 = tmp6->__get(tmp7).StaticCast< Array< Float > >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1426)
				int _g2 = tmp8->length;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(1426)
				while((true)){
					HX_STACK_LINE(1426)
					bool tmp9 = (_g3 < _g2);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1426)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1426)
					if ((tmp10)){
						HX_STACK_LINE(1426)
						break;
					}
					HX_STACK_LINE(1426)
					int tmp11 = (_g3)++;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1426)
					int j = tmp11;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(1426)
					int tmp12 = j;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1426)
					Array< ::Dynamic > tmp13 = this->binds;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1426)
					int tmp14 = i;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1426)
					Array< Float > tmp15 = tmp13->__get(tmp14).StaticCast< Array< Float > >();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1426)
					int tmp16 = j;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1426)
					Float tmp17 = tmp15->__get(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1426)
					mtx->SetIndex(tmp12,tmp17);
				}
			}
			HX_STACK_LINE(1427)
			::haxor::math::Matrix4 tmp6 = mtx;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1427)
			res->push(tmp6);
		}
	}
	HX_STACK_LINE(1429)
	Array< ::Dynamic > tmp1 = res;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1429)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ColladaController_obj,GetBinds,return )

Array< ::Dynamic > ColladaController_obj::GetTriangulatedWeights( ::haxor::io::file::ColladaPrimitive cp){
	HX_STACK_FRAME("haxor.io.file.ColladaController","GetTriangulatedWeights",0x87dbbf83,"haxor.io.file.ColladaController.GetTriangulatedWeights","haxor/io/file/ColladaFile.hx",1433,0xa1888587)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cp,"cp")
	HX_STACK_LINE(1434)
	::haxor::io::file::ColladaInput tmp = cp->GetInput(HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1434)
	::haxor::io::file::ColladaInput ci = tmp;		HX_STACK_VAR(ci,"ci");
	HX_STACK_LINE(1435)
	bool tmp1 = (ci == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1435)
	if ((tmp1)){
		HX_STACK_LINE(1435)
		Array< ::Dynamic > tmp2 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1435)
		return tmp2;
	}
	HX_STACK_LINE(1436)
	int v_off = ci->offset;		HX_STACK_VAR(v_off,"v_off");
	HX_STACK_LINE(1437)
	Array< ::Dynamic > tmp2 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1437)
	Array< ::Dynamic > res = tmp2;		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(1438)
	{
		HX_STACK_LINE(1438)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1438)
		Array< ::Dynamic > tmp3 = cp->get_triangles();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1438)
		int _g = tmp3->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1438)
		while((true)){
			HX_STACK_LINE(1438)
			bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1438)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1438)
			if ((tmp5)){
				HX_STACK_LINE(1438)
				break;
			}
			HX_STACK_LINE(1438)
			int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1438)
			int i = tmp6;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1440)
			Array< ::Dynamic > tmp7 = cp->get_triangles();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1440)
			int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1440)
			Array< int > tmp9 = tmp7->__get(tmp8).StaticCast< Array< int > >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1440)
			int tmp10 = v_off;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1440)
			int tmp11 = tmp9->__get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1440)
			int idx = tmp11;		HX_STACK_VAR(idx,"idx");
			HX_STACK_LINE(1441)
			Array< ::Dynamic > tmp12 = this->weights;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1441)
			int tmp13 = idx;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1441)
			::haxor::math::Vector4 tmp14 = tmp12->__get(tmp13).StaticCast< ::haxor::math::Vector4 >();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1441)
			res->push(tmp14);
		}
	}
	HX_STACK_LINE(1443)
	Array< ::Dynamic > tmp3 = res;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1443)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ColladaController_obj,GetTriangulatedWeights,return )

Array< ::Dynamic > ColladaController_obj::GetTriangulatedBones( ::haxor::io::file::ColladaPrimitive cp){
	HX_STACK_FRAME("haxor.io.file.ColladaController","GetTriangulatedBones",0x69a7ce37,"haxor.io.file.ColladaController.GetTriangulatedBones","haxor/io/file/ColladaFile.hx",1447,0xa1888587)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cp,"cp")
	HX_STACK_LINE(1448)
	::haxor::io::file::ColladaInput tmp = cp->GetInput(HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1448)
	::haxor::io::file::ColladaInput ci = tmp;		HX_STACK_VAR(ci,"ci");
	HX_STACK_LINE(1449)
	bool tmp1 = (ci == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1449)
	if ((tmp1)){
		HX_STACK_LINE(1449)
		Array< ::Dynamic > tmp2 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1449)
		return tmp2;
	}
	HX_STACK_LINE(1450)
	int v_off = ci->offset;		HX_STACK_VAR(v_off,"v_off");
	HX_STACK_LINE(1451)
	Array< ::Dynamic > tmp2 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1451)
	Array< ::Dynamic > res = tmp2;		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(1452)
	{
		HX_STACK_LINE(1452)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1452)
		Array< ::Dynamic > tmp3 = cp->get_triangles();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1452)
		int _g = tmp3->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1452)
		while((true)){
			HX_STACK_LINE(1452)
			bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1452)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1452)
			if ((tmp5)){
				HX_STACK_LINE(1452)
				break;
			}
			HX_STACK_LINE(1452)
			int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1452)
			int i = tmp6;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1454)
			Array< ::Dynamic > tmp7 = cp->get_triangles();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1454)
			int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1454)
			Array< int > tmp9 = tmp7->__get(tmp8).StaticCast< Array< int > >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1454)
			int tmp10 = v_off;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1454)
			int tmp11 = tmp9->__get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1454)
			int idx = tmp11;		HX_STACK_VAR(idx,"idx");
			HX_STACK_LINE(1455)
			Array< ::Dynamic > tmp12 = this->bones;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1455)
			int tmp13 = idx;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1455)
			::haxor::math::Vector4 tmp14 = tmp12->__get(tmp13).StaticCast< ::haxor::math::Vector4 >();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1455)
			res->push(tmp14);
		}
	}
	HX_STACK_LINE(1457)
	Array< ::Dynamic > tmp3 = res;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1457)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ColladaController_obj,GetTriangulatedBones,return )

Void ColladaController_obj::GenerateBonesAndWeights( ){
{
		HX_STACK_FRAME("haxor.io.file.ColladaController","GenerateBonesAndWeights",0x799635a8,"haxor.io.file.ColladaController.GenerateBonesAndWeights","haxor/io/file/ColladaFile.hx",1461,0xa1888587)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1462)
		Array< ::Dynamic > tmp = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1462)
		this->weights = tmp;
		HX_STACK_LINE(1463)
		Array< ::Dynamic > tmp1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1463)
		this->bones = tmp1;
		HX_STACK_LINE(1465)
		int tmp2 = this->get_offset();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1465)
		int off = tmp2;		HX_STACK_VAR(off,"off");
		HX_STACK_LINE(1466)
		::haxor::io::file::ColladaInput wi = null();		HX_STACK_VAR(wi,"wi");
		HX_STACK_LINE(1467)
		int wo = (int)0;		HX_STACK_VAR(wo,"wo");
		HX_STACK_LINE(1468)
		int bo = (int)0;		HX_STACK_VAR(bo,"bo");
		HX_STACK_LINE(1470)
		{
			HX_STACK_LINE(1470)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1470)
			Array< ::Dynamic > tmp3 = this->inputs;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1470)
			int _g = tmp3->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1470)
			while((true)){
				HX_STACK_LINE(1470)
				bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1470)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1470)
				if ((tmp5)){
					HX_STACK_LINE(1470)
					break;
				}
				HX_STACK_LINE(1470)
				int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1470)
				int i = tmp6;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1472)
				Array< ::Dynamic > tmp7 = this->inputs;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1472)
				int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1472)
				::haxor::io::file::ColladaInput tmp9 = tmp7->__get(tmp8).StaticCast< ::haxor::io::file::ColladaInput >();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1472)
				::String tmp10 = tmp9->semantic;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1472)
				bool tmp11 = (tmp10 == HX_HCSTRING("weight","\x78","\x71","\xa6","\x01"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1472)
				if ((tmp11)){
					HX_STACK_LINE(1472)
					Array< ::Dynamic > tmp12 = this->inputs;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1472)
					int tmp13 = i;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1472)
					::haxor::io::file::ColladaInput tmp14 = tmp12->__get(tmp13).StaticCast< ::haxor::io::file::ColladaInput >();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1472)
					wi = tmp14;
					HX_STACK_LINE(1472)
					wo = wi->offset;
				}
				HX_STACK_LINE(1473)
				Array< ::Dynamic > tmp12 = this->inputs;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1473)
				int tmp13 = i;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1473)
				::haxor::io::file::ColladaInput tmp14 = tmp12->__get(tmp13).StaticCast< ::haxor::io::file::ColladaInput >();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1473)
				::String tmp15 = tmp14->semantic;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1473)
				bool tmp16 = (tmp15 == HX_HCSTRING("joint","\x4a","\x39","\x28","\x52"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1473)
				if ((tmp16)){
					HX_STACK_LINE(1473)
					Array< ::Dynamic > tmp17 = this->inputs;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1473)
					int tmp18 = i;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1473)
					::haxor::io::file::ColladaInput tmp19 = tmp17->__get(tmp18).StaticCast< ::haxor::io::file::ColladaInput >();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1473)
					bo = tmp19->offset;
				}
			}
		}
		HX_STACK_LINE(1476)
		int k = (int)0;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(1477)
		{
			HX_STACK_LINE(1477)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1477)
			Array< int > tmp3 = this->vcount;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1477)
			int _g = tmp3->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1477)
			while((true)){
				HX_STACK_LINE(1477)
				bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1477)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1477)
				if ((tmp5)){
					HX_STACK_LINE(1477)
					break;
				}
				HX_STACK_LINE(1477)
				int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1477)
				int i = tmp6;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1479)
				Array< int > tmp7 = this->vcount;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1479)
				int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1479)
				int tmp9 = tmp7->__get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1479)
				int n = tmp9;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(1480)
				::haxor::math::Vector4 tmp10 = ::haxor::math::Vector4_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1480)
				::haxor::math::Vector4 wv4 = tmp10;		HX_STACK_VAR(wv4,"wv4");
				HX_STACK_LINE(1481)
				::haxor::math::Vector4 tmp11 = ::haxor::math::Vector4_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1481)
				::haxor::math::Vector4 bv4 = tmp11;		HX_STACK_VAR(bv4,"bv4");
				HX_STACK_LINE(1482)
				{
					HX_STACK_LINE(1482)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(1482)
					while((true)){
						HX_STACK_LINE(1482)
						bool tmp12 = (_g2 < n);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1482)
						bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1482)
						if ((tmp13)){
							HX_STACK_LINE(1482)
							break;
						}
						HX_STACK_LINE(1482)
						int tmp14 = (_g2)++;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1482)
						int j = tmp14;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(1484)
						Array< ::Dynamic > tmp15 = this->indexes;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1484)
						int tmp16 = k;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1484)
						Array< int > tmp17 = tmp15->__get(tmp16).StaticCast< Array< int > >();		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1484)
						int tmp18 = bo;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1484)
						int tmp19 = tmp17->__get(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1484)
						int bi = tmp19;		HX_STACK_VAR(bi,"bi");
						HX_STACK_LINE(1485)
						Dynamic tmp20 = wi->values;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1485)
						Array< ::Dynamic > tmp21 = this->indexes;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1485)
						int tmp22 = k;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1485)
						Array< int > tmp23 = tmp21->__get(tmp22).StaticCast< Array< int > >();		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1485)
						int tmp24 = wo;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1485)
						int tmp25 = tmp23->__get(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1485)
						Dynamic tmp26 = tmp20->__GetItem(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1485)
						Float wv = tmp26;		HX_STACK_VAR(wv,"wv");
						HX_STACK_LINE(1487)
						bool tmp27 = (j == (int)0);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1487)
						if ((tmp27)){
							HX_STACK_LINE(1487)
							wv4->x = wv;
							HX_STACK_LINE(1487)
							bv4->x = bi;
						}
						else{
							HX_STACK_LINE(1488)
							bool tmp28 = (j == (int)1);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1488)
							if ((tmp28)){
								HX_STACK_LINE(1488)
								wv4->y = wv;
								HX_STACK_LINE(1488)
								bv4->y = bi;
							}
							else{
								HX_STACK_LINE(1489)
								bool tmp29 = (j == (int)2);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1489)
								if ((tmp29)){
									HX_STACK_LINE(1489)
									wv4->z = wv;
									HX_STACK_LINE(1489)
									bv4->z = bi;
								}
								else{
									HX_STACK_LINE(1490)
									bool tmp30 = (j == (int)3);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(1490)
									if ((tmp30)){
										HX_STACK_LINE(1490)
										wv4->w = wv;
										HX_STACK_LINE(1490)
										bv4->w = bi;
									}
								}
							}
						}
						HX_STACK_LINE(1491)
						(k)++;
					}
				}
				HX_STACK_LINE(1494)
				Float tmp12 = (wv4->x + wv4->y);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1494)
				Float tmp13 = wv4->z;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1494)
				Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1494)
				Float tmp15 = wv4->w;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1494)
				Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1494)
				Float sum = tmp16;		HX_STACK_VAR(sum,"sum");
				HX_STACK_LINE(1495)
				bool tmp17 = (sum <= (int)0);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1495)
				Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1495)
				if ((tmp17)){
					HX_STACK_LINE(1495)
					tmp18 = ((Float)0.0);
				}
				else{
					HX_STACK_LINE(1495)
					tmp18 = (Float(((Float)1.0)) / Float(sum));
				}
				HX_STACK_LINE(1495)
				sum = tmp18;
				HX_STACK_LINE(1496)
				Float tmp19 = sum;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1496)
				wv4->Scale(tmp19);
				HX_STACK_LINE(1497)
				Array< ::Dynamic > tmp20 = this->weights;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1497)
				::haxor::math::Vector4 tmp21 = wv4;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1497)
				tmp20->push(tmp21);
				HX_STACK_LINE(1499)
				Array< ::Dynamic > tmp22 = this->bones;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1499)
				::haxor::math::Vector4 tmp23 = bv4;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1499)
				tmp22->push(tmp23);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ColladaController_obj,GenerateBonesAndWeights,(void))


ColladaController_obj::ColladaController_obj()
{
}

void ColladaController_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ColladaController);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(source,"source");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(matrix,"matrix");
	HX_MARK_MEMBER_NAME(binds,"binds");
	HX_MARK_MEMBER_NAME(joints,"joints");
	HX_MARK_MEMBER_NAME(inputs,"inputs");
	HX_MARK_MEMBER_NAME(vcount,"vcount");
	HX_MARK_MEMBER_NAME(indexes,"indexes");
	HX_MARK_MEMBER_NAME(weights,"weights");
	HX_MARK_MEMBER_NAME(bones,"bones");
	HX_MARK_END_CLASS();
}

void ColladaController_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(source,"source");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(matrix,"matrix");
	HX_VISIT_MEMBER_NAME(binds,"binds");
	HX_VISIT_MEMBER_NAME(joints,"joints");
	HX_VISIT_MEMBER_NAME(inputs,"inputs");
	HX_VISIT_MEMBER_NAME(vcount,"vcount");
	HX_VISIT_MEMBER_NAME(indexes,"indexes");
	HX_VISIT_MEMBER_NAME(weights,"weights");
	HX_VISIT_MEMBER_NAME(bones,"bones");
}

Dynamic ColladaController_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"binds") ) { return binds; }
		if (HX_FIELD_EQ(inName,"bones") ) { return bones; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"source") ) { return source; }
		if (HX_FIELD_EQ(inName,"matrix") ) { return matrix; }
		if (HX_FIELD_EQ(inName,"joints") ) { return joints; }
		if (HX_FIELD_EQ(inName,"inputs") ) { return inputs; }
		if (HX_FIELD_EQ(inName,"vcount") ) { return vcount; }
		if (HX_FIELD_EQ(inName,"offset") ) { if (inCallProp == hx::paccAlways) return get_offset(); }
		if (HX_FIELD_EQ(inName,"GetBSM") ) { return GetBSM_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indexes") ) { return indexes; }
		if (HX_FIELD_EQ(inName,"weights") ) { return weights; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"GetBinds") ) { return GetBinds_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_offset") ) { return get_offset_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"GetJointIndex") ) { return GetJointIndex_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"GetTriangulatedBones") ) { return GetTriangulatedBones_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"GetTriangulatedWeights") ) { return GetTriangulatedWeights_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"GenerateBonesAndWeights") ) { return GenerateBonesAndWeights_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ColladaController_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"binds") ) { binds=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bones") ) { bones=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"source") ) { source=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"joints") ) { joints=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inputs") ) { inputs=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vcount") ) { vcount=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indexes") ) { indexes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"weights") ) { weights=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ColladaController_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ColladaController_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"));
	outFields->push(HX_HCSTRING("binds","\x16","\x10","\x00","\xb3"));
	outFields->push(HX_HCSTRING("joints","\xe9","\xe7","\x09","\x91"));
	outFields->push(HX_HCSTRING("inputs","\x29","\xc5","\xed","\x9b"));
	outFields->push(HX_HCSTRING("vcount","\x99","\xd8","\x7f","\x78"));
	outFields->push(HX_HCSTRING("indexes","\x00","\x5c","\xbf","\xe0"));
	outFields->push(HX_HCSTRING("weights","\xfb","\xd7","\xfc","\x6f"));
	outFields->push(HX_HCSTRING("bones","\xaf","\x58","\xf7","\xb6"));
	outFields->push(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(ColladaController_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsString,(int)offsetof(ColladaController_obj,source),HX_HCSTRING("source","\xdb","\xb0","\x31","\x32")},
	{hx::fsString,(int)offsetof(ColladaController_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsString,(int)offsetof(ColladaController_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(ColladaController_obj,matrix),HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ColladaController_obj,binds),HX_HCSTRING("binds","\x16","\x10","\x00","\xb3")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(ColladaController_obj,joints),HX_HCSTRING("joints","\xe9","\xe7","\x09","\x91")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ColladaController_obj,inputs),HX_HCSTRING("inputs","\x29","\xc5","\xed","\x9b")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(ColladaController_obj,vcount),HX_HCSTRING("vcount","\x99","\xd8","\x7f","\x78")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ColladaController_obj,indexes),HX_HCSTRING("indexes","\x00","\x5c","\xbf","\xe0")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ColladaController_obj,weights),HX_HCSTRING("weights","\xfb","\xd7","\xfc","\x6f")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ColladaController_obj,bones),HX_HCSTRING("bones","\xaf","\x58","\xf7","\xb6")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"),
	HX_HCSTRING("binds","\x16","\x10","\x00","\xb3"),
	HX_HCSTRING("joints","\xe9","\xe7","\x09","\x91"),
	HX_HCSTRING("inputs","\x29","\xc5","\xed","\x9b"),
	HX_HCSTRING("vcount","\x99","\xd8","\x7f","\x78"),
	HX_HCSTRING("indexes","\x00","\x5c","\xbf","\xe0"),
	HX_HCSTRING("weights","\xfb","\xd7","\xfc","\x6f"),
	HX_HCSTRING("bones","\xaf","\x58","\xf7","\xb6"),
	HX_HCSTRING("get_offset","\x5c","\x07","\xc7","\x50"),
	HX_HCSTRING("GetBSM","\xa6","\x52","\xae","\xd7"),
	HX_HCSTRING("GetJointIndex","\x7e","\x91","\x76","\xc0"),
	HX_HCSTRING("GetBinds","\xc0","\xdb","\x88","\xec"),
	HX_HCSTRING("GetTriangulatedWeights","\x4d","\x26","\xd9","\xb1"),
	HX_HCSTRING("GetTriangulatedBones","\x81","\x0e","\x9d","\x3b"),
	HX_HCSTRING("GenerateBonesAndWeights","\x9e","\xbf","\x52","\x0d"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColladaController_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColladaController_obj::__mClass,"__mClass");
};

#endif

hx::Class ColladaController_obj::__mClass;

void ColladaController_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.io.file.ColladaController","\x78","\x88","\x97","\x99");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ColladaController_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ColladaController_obj >;
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
