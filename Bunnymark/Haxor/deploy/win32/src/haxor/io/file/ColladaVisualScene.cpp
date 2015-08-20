#include <hxcpp.h>

#ifndef INCLUDED_haxor_io_file_ColladaNode
#include <haxor/io/file/ColladaNode.h>
#endif
#ifndef INCLUDED_haxor_io_file_ColladaVisualScene
#include <haxor/io/file/ColladaVisualScene.h>
#endif
namespace haxor{
namespace io{
namespace file{

Void ColladaVisualScene_obj::__construct()
{
HX_STACK_FRAME("haxor.io.file.ColladaVisualScene","new",0x24d68802,"haxor.io.file.ColladaVisualScene.new","haxor/io/file/ColladaFile.hx",1505,0xa1888587)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(1510)
	this->children = null();
	HX_STACK_LINE(1509)
	this->name = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(1508)
	this->id = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(1507)
	this->type = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(1514)
	Array< ::Dynamic > tmp = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1514)
	this->children = tmp;
}
;
	return null();
}

//ColladaVisualScene_obj::~ColladaVisualScene_obj() { }

Dynamic ColladaVisualScene_obj::__CreateEmpty() { return  new ColladaVisualScene_obj; }
hx::ObjectPtr< ColladaVisualScene_obj > ColladaVisualScene_obj::__new()
{  hx::ObjectPtr< ColladaVisualScene_obj > _result_ = new ColladaVisualScene_obj();
	_result_->__construct();
	return _result_;}

Dynamic ColladaVisualScene_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ColladaVisualScene_obj > _result_ = new ColladaVisualScene_obj();
	_result_->__construct();
	return _result_;}

Void ColladaVisualScene_obj::Traverse( Dynamic p_callback){
{
		HX_STACK_FRAME("haxor.io.file.ColladaVisualScene","Traverse",0x9f3296f0,"haxor.io.file.ColladaVisualScene.Traverse","haxor/io/file/ColladaFile.hx",1519,0xa1888587)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_callback,"p_callback")
		HX_STACK_LINE(1519)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1519)
		Array< ::Dynamic > tmp = this->children;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1519)
		int _g = tmp->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1519)
		while((true)){
			HX_STACK_LINE(1519)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1519)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1519)
			if ((tmp2)){
				HX_STACK_LINE(1519)
				break;
			}
			HX_STACK_LINE(1519)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1519)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1519)
			Array< ::Dynamic > tmp4 = this->children;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1519)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1519)
			::haxor::io::file::ColladaNode tmp6 = tmp4->__get(tmp5).StaticCast< ::haxor::io::file::ColladaNode >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1519)
			Dynamic tmp7 = p_callback;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1519)
			this->TraverseStep(tmp6,tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ColladaVisualScene_obj,Traverse,(void))

Void ColladaVisualScene_obj::TraverseStep( ::haxor::io::file::ColladaNode p_node,Dynamic p_callback){
{
		HX_STACK_FRAME("haxor.io.file.ColladaVisualScene","TraverseStep",0xa295e25c,"haxor.io.file.ColladaVisualScene.TraverseStep","haxor/io/file/ColladaFile.hx",1523,0xa1888587)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_node,"p_node")
		HX_STACK_ARG(p_callback,"p_callback")
		HX_STACK_LINE(1524)
		bool tmp = (p_callback != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1524)
		if ((tmp)){
			HX_STACK_LINE(1524)
			::haxor::io::file::ColladaNode tmp1 = p_node;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1524)
			p_callback(tmp1).Cast< Void >();
		}
		HX_STACK_LINE(1525)
		{
			HX_STACK_LINE(1525)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1525)
			int tmp1 = p_node->children->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1525)
			int _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1525)
			while((true)){
				HX_STACK_LINE(1525)
				bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1525)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1525)
				if ((tmp3)){
					HX_STACK_LINE(1525)
					break;
				}
				HX_STACK_LINE(1525)
				int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1525)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1525)
				::haxor::io::file::ColladaNode tmp5 = p_node->children->__get(i).StaticCast< ::haxor::io::file::ColladaNode >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1525)
				Dynamic tmp6 = p_callback;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1525)
				this->TraverseStep(tmp5,tmp6);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ColladaVisualScene_obj,TraverseStep,(void))


ColladaVisualScene_obj::ColladaVisualScene_obj()
{
}

void ColladaVisualScene_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ColladaVisualScene);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(children,"children");
	HX_MARK_END_CLASS();
}

void ColladaVisualScene_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(children,"children");
}

Dynamic ColladaVisualScene_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { return children; }
		if (HX_FIELD_EQ(inName,"Traverse") ) { return Traverse_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"TraverseStep") ) { return TraverseStep_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ColladaVisualScene_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { children=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ColladaVisualScene_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ColladaVisualScene_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("children","\x3f","\x19","\x6a","\x70"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(ColladaVisualScene_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsString,(int)offsetof(ColladaVisualScene_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsString,(int)offsetof(ColladaVisualScene_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ColladaVisualScene_obj,children),HX_HCSTRING("children","\x3f","\x19","\x6a","\x70")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("children","\x3f","\x19","\x6a","\x70"),
	HX_HCSTRING("Traverse","\xd2","\x39","\x1c","\x46"),
	HX_HCSTRING("TraverseStep","\x3e","\x9e","\x87","\x7c"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColladaVisualScene_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColladaVisualScene_obj::__mClass,"__mClass");
};

#endif

hx::Class ColladaVisualScene_obj::__mClass;

void ColladaVisualScene_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.io.file.ColladaVisualScene","\x10","\x1f","\xb6","\xd0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ColladaVisualScene_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ColladaVisualScene_obj >;
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
