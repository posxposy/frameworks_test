#include <hxcpp.h>

#ifndef INCLUDED_haxor_context_DataContext
#include <haxor/context/DataContext.h>
#endif
#ifndef INCLUDED_haxor_context_EngineContext
#include <haxor/context/EngineContext.h>
#endif
#ifndef INCLUDED_haxor_io_file_ColladaInstance
#include <haxor/io/file/ColladaInstance.h>
#endif
#ifndef INCLUDED_haxor_io_file_ColladaNode
#include <haxor/io/file/ColladaNode.h>
#endif
#ifndef INCLUDED_haxor_io_file_ColladaVisualScene
#include <haxor/io/file/ColladaVisualScene.h>
#endif
#ifndef INCLUDED_haxor_math_Matrix4
#include <haxor/math/Matrix4.h>
#endif
#ifndef INCLUDED_haxor_math_Quaternion
#include <haxor/math/Quaternion.h>
#endif
#ifndef INCLUDED_haxor_math_Vector3
#include <haxor/math/Vector3.h>
#endif
#ifndef INCLUDED_haxor_math_Vector4
#include <haxor/math/Vector4.h>
#endif
namespace haxor{
namespace io{
namespace file{

Void ColladaNode_obj::__construct()
{
HX_STACK_FRAME("haxor.io.file.ColladaNode","new",0xa111d4d0,"haxor.io.file.ColladaNode.new","haxor/io/file/ColladaFile.hx",1530,0xa1888587)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(1572)
	this->instances = null();
	HX_STACK_LINE(1545)
	this->local = null();
	HX_STACK_LINE(1543)
	this->data = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(1541)
	this->children = null();
	HX_STACK_LINE(1540)
	this->parent = null();
	HX_STACK_LINE(1539)
	this->scene = null();
	HX_STACK_LINE(1537)
	this->matrix = null();
	HX_STACK_LINE(1535)
	this->name = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(1534)
	this->sid = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(1533)
	this->id = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(1532)
	this->type = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(1576)
	Array< ::Dynamic > tmp = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1576)
	this->children = tmp;
	HX_STACK_LINE(1577)
	Array< ::Dynamic > tmp1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1577)
	this->instances = tmp1;
	HX_STACK_LINE(1578)
	Array< Float > tmp2 = Array_obj< Float >::__new().Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1578)
	this->matrix = tmp2;
	HX_STACK_LINE(1579)
	::haxor::math::Vector3 tmp3 = ::haxor::math::Vector3_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1579)
	this->position = tmp3;
	HX_STACK_LINE(1580)
	::haxor::math::Quaternion tmp4 = ::haxor::math::Quaternion_obj::__new((int)0,(int)0,(int)0,((Float)1.0));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1580)
	this->rotation = tmp4;
	HX_STACK_LINE(1581)
	::haxor::math::Vector3 tmp5 = ::haxor::math::Vector3_obj::__new((int)1,(int)1,(int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1581)
	this->scale = tmp5;
}
;
	return null();
}

//ColladaNode_obj::~ColladaNode_obj() { }

Dynamic ColladaNode_obj::__CreateEmpty() { return  new ColladaNode_obj; }
hx::ObjectPtr< ColladaNode_obj > ColladaNode_obj::__new()
{  hx::ObjectPtr< ColladaNode_obj > _result_ = new ColladaNode_obj();
	_result_->__construct();
	return _result_;}

Dynamic ColladaNode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ColladaNode_obj > _result_ = new ColladaNode_obj();
	_result_->__construct();
	return _result_;}

::haxor::math::Matrix4 ColladaNode_obj::get_world( ){
	HX_STACK_FRAME("haxor.io.file.ColladaNode","get_world",0x5c8aeb19,"haxor.io.file.ColladaNode.get_world","haxor/io/file/ColladaFile.hx",1549,0xa1888587)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1550)
	::haxor::math::Matrix4 tmp = this->m_world;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1550)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1550)
	if ((tmp1)){
		HX_STACK_LINE(1550)
		::haxor::math::Matrix4 tmp2 = this->m_world;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1550)
		return tmp2;
	}
	HX_STACK_LINE(1551)
	::haxor::math::Matrix4 tmp2 = ::haxor::math::Matrix4_obj::__new((int)1,(int)0,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1551)
	this->m_world = tmp2;
	HX_STACK_LINE(1552)
	::haxor::io::file::ColladaNode it = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(1553)
	Array< ::Dynamic > tmp3 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1553)
	Array< ::Dynamic > h = tmp3;		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(1554)
	while((true)){
		HX_STACK_LINE(1554)
		bool tmp4 = (it != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1554)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1554)
		if ((tmp5)){
			HX_STACK_LINE(1554)
			break;
		}
		HX_STACK_LINE(1556)
		::haxor::io::file::ColladaNode tmp6 = it;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1556)
		h->push(tmp6);
		HX_STACK_LINE(1557)
		it = it->parent;
	}
	HX_STACK_LINE(1559)
	h->reverse();
	HX_STACK_LINE(1560)
	{
		HX_STACK_LINE(1560)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1560)
		int _g = h->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1560)
		while((true)){
			HX_STACK_LINE(1560)
			bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1560)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1560)
			if ((tmp5)){
				HX_STACK_LINE(1560)
				break;
			}
			HX_STACK_LINE(1560)
			int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1560)
			int i = tmp6;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1562)
			::haxor::math::Matrix4 tmp7 = this->m_world;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1562)
			::haxor::io::file::ColladaNode tmp8 = h->__get(i).StaticCast< ::haxor::io::file::ColladaNode >();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1562)
			::haxor::math::Matrix4 tmp9 = tmp8->local;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1562)
			tmp7->MultiplyTransform(tmp9);
		}
	}
	HX_STACK_LINE(1564)
	::haxor::math::Matrix4 tmp4 = this->m_world;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1564)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(ColladaNode_obj,get_world,return )

Void ColladaNode_obj::GenerateTranform( ){
{
		HX_STACK_FRAME("haxor.io.file.ColladaNode","GenerateTranform",0x74c172b4,"haxor.io.file.ColladaNode.GenerateTranform","haxor/io/file/ColladaFile.hx",1585,0xa1888587)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1586)
		Array< Float > tmp = this->matrix;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1586)
		::haxor::math::Matrix4 tmp1 = ::haxor::math::Matrix4_obj::FromArray(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1586)
		::haxor::math::Matrix4 tmp2 = this->local = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1586)
		::haxor::math::Matrix4 mtx = tmp2;		HX_STACK_VAR(mtx,"mtx");
		HX_STACK_LINE(1587)
		::haxor::math::Vector3 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1587)
		{
			HX_STACK_LINE(1587)
			::haxor::math::Vector4 tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1587)
			{
				HX_STACK_LINE(1587)
				::haxor::math::Matrix4 tmp5 = ::haxor::math::Matrix4_obj::__new((int)1,(int)0,(int)0,mtx->m03,(int)0,(int)1,(int)0,mtx->m13,(int)0,(int)0,(int)1,mtx->m23,(int)0,(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1587)
				::haxor::math::Matrix4 _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1587)
				::haxor::math::Vector4 p_result = null();		HX_STACK_VAR(p_result,"p_result");
				HX_STACK_LINE(1587)
				bool tmp6 = (p_result == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1587)
				::haxor::math::Vector4 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1587)
				if ((tmp6)){
					HX_STACK_LINE(1587)
					tmp7 = ::haxor::math::Vector4_obj::__new(null(),null(),null(),null());
				}
				else{
					HX_STACK_LINE(1587)
					tmp7 = p_result;
				}
				HX_STACK_LINE(1587)
				p_result = tmp7;
				HX_STACK_LINE(1587)
				Float tmp8 = _this->GetRowCol((int)0,(int)3);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1587)
				Float tmp9 = _this->GetRowCol((int)1,(int)3);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1587)
				Float tmp10 = _this->GetRowCol((int)2,(int)3);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1587)
				Float tmp11 = _this->GetRowCol((int)3,(int)3);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1587)
				tmp4 = p_result->Set(tmp8,tmp9,tmp10,tmp11);
			}
			HX_STACK_LINE(1587)
			::haxor::math::Vector4 _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1587)
			tmp3 = ::haxor::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
		}
		HX_STACK_LINE(1587)
		this->position = tmp3;
		HX_STACK_LINE(1588)
		::haxor::math::Matrix4 tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1588)
		{
			HX_STACK_LINE(1588)
			::haxor::context::DataContext tmp5 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1588)
			::haxor::context::DataContext _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1588)
			Array< ::Dynamic > tmp6 = _this->m_m4;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1588)
			int tmp7 = (_this->m_nm4 + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1588)
			int tmp8 = _this->m_m4->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1588)
			int tmp9 = hx::Mod(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1588)
			int tmp10 = _this->m_nq = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1588)
			tmp4 = tmp6->__get(tmp10).StaticCast< ::haxor::math::Matrix4 >();
		}
		HX_STACK_LINE(1588)
		::haxor::math::Matrix4 tmp5 = mtx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1588)
		::haxor::math::Matrix4 tmp6 = tmp4->SetMatrix4(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1588)
		::haxor::math::Matrix4 tmp7 = tmp6->ToRotation();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1588)
		::haxor::math::Quaternion tmp8 = ::haxor::math::Quaternion_obj::FromMatrix4(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1588)
		this->rotation = tmp8;
		HX_STACK_LINE(1589)
		::haxor::math::Vector3 tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1589)
		{
			HX_STACK_LINE(1589)
			::haxor::math::Vector4 tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1589)
			{
				HX_STACK_LINE(1589)
				::haxor::math::Matrix4 tmp11 = mtx;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1589)
				::haxor::math::Matrix4 tmp12 = ::haxor::math::Matrix4_obj::GetScale(tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1589)
				::haxor::math::Matrix4 _this = tmp12;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1589)
				tmp10 = ::haxor::math::Vector4_obj::__new(_this->m00,_this->m11,_this->m22,_this->m33);
			}
			HX_STACK_LINE(1589)
			::haxor::math::Vector4 _this = tmp10;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1589)
			tmp9 = ::haxor::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
		}
		HX_STACK_LINE(1589)
		this->scale = tmp9;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ColladaNode_obj,GenerateTranform,(void))


ColladaNode_obj::ColladaNode_obj()
{
}

void ColladaNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ColladaNode);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(sid,"sid");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(matrix,"matrix");
	HX_MARK_MEMBER_NAME(scene,"scene");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(children,"children");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(local,"local");
	HX_MARK_MEMBER_NAME(m_world,"m_world");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(rotation,"rotation");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(instances,"instances");
	HX_MARK_END_CLASS();
}

void ColladaNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(sid,"sid");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(matrix,"matrix");
	HX_VISIT_MEMBER_NAME(scene,"scene");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(children,"children");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(local,"local");
	HX_VISIT_MEMBER_NAME(m_world,"m_world");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(rotation,"rotation");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(instances,"instances");
}

Dynamic ColladaNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"sid") ) { return sid; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scene") ) { return scene; }
		if (HX_FIELD_EQ(inName,"local") ) { return local; }
		if (HX_FIELD_EQ(inName,"world") ) { if (inCallProp == hx::paccAlways) return get_world(); }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { return matrix; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_world") ) { return m_world; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { return children; }
		if (HX_FIELD_EQ(inName,"position") ) { return position; }
		if (HX_FIELD_EQ(inName,"rotation") ) { return rotation; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_world") ) { return get_world_dyn(); }
		if (HX_FIELD_EQ(inName,"instances") ) { return instances; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"GenerateTranform") ) { return GenerateTranform_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ColladaNode_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"sid") ) { sid=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scene") ) { scene=inValue.Cast< ::haxor::io::file::ColladaVisualScene >(); return inValue; }
		if (HX_FIELD_EQ(inName,"local") ) { local=inValue.Cast< ::haxor::math::Matrix4 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< ::haxor::math::Vector3 >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::haxor::io::file::ColladaNode >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_world") ) { m_world=inValue.Cast< ::haxor::math::Matrix4 >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { children=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< ::haxor::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rotation") ) { rotation=inValue.Cast< ::haxor::math::Quaternion >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"instances") ) { instances=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ColladaNode_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ColladaNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("sid","\x0e","\x9f","\x57","\x00"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"));
	outFields->push(HX_HCSTRING("scene","\x4c","\xd9","\xd1","\x78"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("children","\x3f","\x19","\x6a","\x70"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("local","\x6b","\xc9","\xf0","\x78"));
	outFields->push(HX_HCSTRING("world","\x52","\x96","\x64","\xce"));
	outFields->push(HX_HCSTRING("m_world","\xc0","\x6d","\xef","\x7e"));
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	outFields->push(HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"));
	outFields->push(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"));
	outFields->push(HX_HCSTRING("instances","\x3e","\x83","\x1a","\x4b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(ColladaNode_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsString,(int)offsetof(ColladaNode_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsString,(int)offsetof(ColladaNode_obj,sid),HX_HCSTRING("sid","\x0e","\x9f","\x57","\x00")},
	{hx::fsString,(int)offsetof(ColladaNode_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(ColladaNode_obj,matrix),HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb")},
	{hx::fsObject /*::haxor::io::file::ColladaVisualScene*/ ,(int)offsetof(ColladaNode_obj,scene),HX_HCSTRING("scene","\x4c","\xd9","\xd1","\x78")},
	{hx::fsObject /*::haxor::io::file::ColladaNode*/ ,(int)offsetof(ColladaNode_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ColladaNode_obj,children),HX_HCSTRING("children","\x3f","\x19","\x6a","\x70")},
	{hx::fsString,(int)offsetof(ColladaNode_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsObject /*::haxor::math::Matrix4*/ ,(int)offsetof(ColladaNode_obj,local),HX_HCSTRING("local","\x6b","\xc9","\xf0","\x78")},
	{hx::fsObject /*::haxor::math::Matrix4*/ ,(int)offsetof(ColladaNode_obj,m_world),HX_HCSTRING("m_world","\xc0","\x6d","\xef","\x7e")},
	{hx::fsObject /*::haxor::math::Vector3*/ ,(int)offsetof(ColladaNode_obj,position),HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca")},
	{hx::fsObject /*::haxor::math::Quaternion*/ ,(int)offsetof(ColladaNode_obj,rotation),HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08")},
	{hx::fsObject /*::haxor::math::Vector3*/ ,(int)offsetof(ColladaNode_obj,scale),HX_HCSTRING("scale","\x8a","\xce","\xce","\x78")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ColladaNode_obj,instances),HX_HCSTRING("instances","\x3e","\x83","\x1a","\x4b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("sid","\x0e","\x9f","\x57","\x00"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"),
	HX_HCSTRING("scene","\x4c","\xd9","\xd1","\x78"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("children","\x3f","\x19","\x6a","\x70"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("local","\x6b","\xc9","\xf0","\x78"),
	HX_HCSTRING("get_world","\xa9","\xf2","\x0d","\x12"),
	HX_HCSTRING("m_world","\xc0","\x6d","\xef","\x7e"),
	HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"),
	HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("instances","\x3e","\x83","\x1a","\x4b"),
	HX_HCSTRING("GenerateTranform","\x24","\x7d","\x1d","\x53"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColladaNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColladaNode_obj::__mClass,"__mClass");
};

#endif

hx::Class ColladaNode_obj::__mClass;

void ColladaNode_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.io.file.ColladaNode","\xde","\x6c","\x3b","\xaf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ColladaNode_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ColladaNode_obj >;
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
