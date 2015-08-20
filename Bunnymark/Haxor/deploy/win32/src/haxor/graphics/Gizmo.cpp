#include <hxcpp.h>

#ifndef INCLUDED_haxor_context_CanvasGizmo
#include <haxor/context/CanvasGizmo.h>
#endif
#ifndef INCLUDED_haxor_context_EngineContext
#include <haxor/context/EngineContext.h>
#endif
#ifndef INCLUDED_haxor_context_Gizmo
#include <haxor/context/Gizmo.h>
#endif
#ifndef INCLUDED_haxor_context_GizmoContext
#include <haxor/context/GizmoContext.h>
#endif
#ifndef INCLUDED_haxor_graphics_Gizmo
#include <haxor/graphics/Gizmo.h>
#endif
#ifndef INCLUDED_haxor_math_Color
#include <haxor/math/Color.h>
#endif
#ifndef INCLUDED_haxor_math_Matrix4
#include <haxor/math/Matrix4.h>
#endif
#ifndef INCLUDED_haxor_math_Vector3
#include <haxor/math/Vector3.h>
#endif
namespace haxor{
namespace graphics{

Void Gizmo_obj::__construct()
{
	return null();
}

//Gizmo_obj::~Gizmo_obj() { }

Dynamic Gizmo_obj::__CreateEmpty() { return  new Gizmo_obj; }
hx::ObjectPtr< Gizmo_obj > Gizmo_obj::__new()
{  hx::ObjectPtr< Gizmo_obj > _result_ = new Gizmo_obj();
	_result_->__construct();
	return _result_;}

Dynamic Gizmo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Gizmo_obj > _result_ = new Gizmo_obj();
	_result_->__construct();
	return _result_;}

Void Gizmo_obj::Grid( Float p_area,::haxor::math::Color p_color){
{
		HX_STACK_FRAME("haxor.graphics.Gizmo","Grid",0x0bc2b511,"haxor.graphics.Gizmo.Grid","haxor/graphics/Gizmo.hx",23,0x45aff45b)
		HX_STACK_ARG(p_area,"p_area")
		HX_STACK_ARG(p_color,"p_color")
		HX_STACK_LINE(24)
		::haxor::context::GizmoContext tmp = ::haxor::context::EngineContext_obj::gizmo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(24)
		Float tmp1 = p_area;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(24)
		::haxor::math::Color tmp2 = p_color;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(24)
		tmp->DrawGrid(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Gizmo_obj,Grid,(void))

Void Gizmo_obj::Axis( ::haxor::math::Vector3 p_position,::haxor::math::Vector3 p_size,::haxor::math::Color p_color,::haxor::math::Matrix4 p_transform){
{
		HX_STACK_FRAME("haxor.graphics.Gizmo","Axis",0x07cffaec,"haxor.graphics.Gizmo.Axis","haxor/graphics/Gizmo.hx",32,0x45aff45b)
		HX_STACK_ARG(p_position,"p_position")
		HX_STACK_ARG(p_size,"p_size")
		HX_STACK_ARG(p_color,"p_color")
		HX_STACK_ARG(p_transform,"p_transform")
		HX_STACK_LINE(33)
		::haxor::context::GizmoContext tmp = ::haxor::context::EngineContext_obj::gizmo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		::haxor::math::Vector3 tmp1 = p_position;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		::haxor::math::Vector3 tmp2 = p_size;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(33)
		::haxor::math::Color tmp3 = p_color;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(33)
		::haxor::math::Matrix4 tmp4 = p_transform;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(33)
		tmp->DrawAxis(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Gizmo_obj,Axis,(void))

Void Gizmo_obj::Line( ::haxor::math::Vector3 p_from,::haxor::math::Vector3 p_to,::haxor::math::Color p_color,::haxor::math::Matrix4 p_transform){
{
		HX_STACK_FRAME("haxor.graphics.Gizmo","Line",0x0f09f63f,"haxor.graphics.Gizmo.Line","haxor/graphics/Gizmo.hx",44,0x45aff45b)
		HX_STACK_ARG(p_from,"p_from")
		HX_STACK_ARG(p_to,"p_to")
		HX_STACK_ARG(p_color,"p_color")
		HX_STACK_ARG(p_transform,"p_transform")
		HX_STACK_LINE(45)
		::haxor::context::GizmoContext tmp = ::haxor::context::EngineContext_obj::gizmo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		::haxor::math::Vector3 tmp1 = p_from;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		::haxor::math::Vector3 tmp2 = p_to;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		::haxor::math::Color tmp3 = p_color;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(45)
		::haxor::math::Matrix4 tmp4 = p_transform;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(45)
		tmp->DrawLine(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Gizmo_obj,Line,(void))

Void Gizmo_obj::Point( ::haxor::math::Vector3 p_position,hx::Null< Float >  __o_p_size,::haxor::math::Color p_color,hx::Null< bool >  __o_p_smooth,::haxor::math::Matrix4 p_transform){
Float p_size = __o_p_size.Default(((Float)1.0));
bool p_smooth = __o_p_smooth.Default(true);
	HX_STACK_FRAME("haxor.graphics.Gizmo","Point",0x6b3b57a5,"haxor.graphics.Gizmo.Point","haxor/graphics/Gizmo.hx",57,0x45aff45b)
	HX_STACK_ARG(p_position,"p_position")
	HX_STACK_ARG(p_size,"p_size")
	HX_STACK_ARG(p_color,"p_color")
	HX_STACK_ARG(p_smooth,"p_smooth")
	HX_STACK_ARG(p_transform,"p_transform")
{
		HX_STACK_LINE(58)
		::haxor::context::GizmoContext tmp = ::haxor::context::EngineContext_obj::gizmo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(58)
		::haxor::math::Vector3 tmp1 = p_position;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(58)
		Float tmp2 = p_size;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(58)
		::haxor::math::Color tmp3 = p_color;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(58)
		bool tmp4 = p_smooth;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(58)
		::haxor::math::Matrix4 tmp5 = p_transform;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(58)
		tmp->DrawPoint(tmp1,tmp2,tmp3,tmp4,tmp5);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Gizmo_obj,Point,(void))

Void Gizmo_obj::WireSphere( ::haxor::math::Vector3 p_position,hx::Null< Float >  __o_p_radius,::haxor::math::Color p_color,::haxor::math::Matrix4 p_transform){
Float p_radius = __o_p_radius.Default(((Float)1.0));
	HX_STACK_FRAME("haxor.graphics.Gizmo","WireSphere",0x7136c1bd,"haxor.graphics.Gizmo.WireSphere","haxor/graphics/Gizmo.hx",68,0x45aff45b)
	HX_STACK_ARG(p_position,"p_position")
	HX_STACK_ARG(p_radius,"p_radius")
	HX_STACK_ARG(p_color,"p_color")
	HX_STACK_ARG(p_transform,"p_transform")
{
		HX_STACK_LINE(69)
		::haxor::context::GizmoContext tmp = ::haxor::context::EngineContext_obj::gizmo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(69)
		::haxor::math::Vector3 tmp1 = p_position;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(69)
		Float tmp2 = p_radius;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(69)
		::haxor::math::Color tmp3 = p_color;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(69)
		::haxor::math::Matrix4 tmp4 = p_transform;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(69)
		tmp->DrawWireSphere(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Gizmo_obj,WireSphere,(void))

Void Gizmo_obj::WireCube( ::haxor::math::Vector3 p_position,::haxor::math::Vector3 p_size,::haxor::math::Color p_color,::haxor::math::Matrix4 p_transform){
{
		HX_STACK_FRAME("haxor.graphics.Gizmo","WireCube",0xdbb643a5,"haxor.graphics.Gizmo.WireCube","haxor/graphics/Gizmo.hx",80,0x45aff45b)
		HX_STACK_ARG(p_position,"p_position")
		HX_STACK_ARG(p_size,"p_size")
		HX_STACK_ARG(p_color,"p_color")
		HX_STACK_ARG(p_transform,"p_transform")
		HX_STACK_LINE(81)
		::haxor::context::GizmoContext tmp = ::haxor::context::EngineContext_obj::gizmo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(81)
		::haxor::math::Vector3 tmp1 = p_position;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(81)
		::haxor::math::Vector3 tmp2 = p_size;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(81)
		::haxor::math::Color tmp3 = p_color;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(81)
		::haxor::math::Matrix4 tmp4 = p_transform;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(81)
		tmp->DrawWireCube(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Gizmo_obj,WireCube,(void))

Void Gizmo_obj::BeginPath( ::haxor::math::Color p_fill,::haxor::math::Color p_line,::haxor::math::Matrix4 p_transform){
{
		HX_STACK_FRAME("haxor.graphics.Gizmo","BeginPath",0xaaf43643,"haxor.graphics.Gizmo.BeginPath","haxor/graphics/Gizmo.hx",91,0x45aff45b)
		HX_STACK_ARG(p_fill,"p_fill")
		HX_STACK_ARG(p_line,"p_line")
		HX_STACK_ARG(p_transform,"p_transform")
		HX_STACK_LINE(92)
		::haxor::context::GizmoContext tmp = ::haxor::context::EngineContext_obj::gizmo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(92)
		::haxor::math::Color tmp1 = p_fill;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(92)
		::haxor::math::Color tmp2 = p_line;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(92)
		::haxor::math::Matrix4 tmp3 = p_transform;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(92)
		tmp->canvas_renderer->Begin(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Gizmo_obj,BeginPath,(void))

Void Gizmo_obj::LinePath( ::haxor::math::Vector3 p_position){
{
		HX_STACK_FRAME("haxor.graphics.Gizmo","LinePath",0xd5a69384,"haxor.graphics.Gizmo.LinePath","haxor/graphics/Gizmo.hx",100,0x45aff45b)
		HX_STACK_ARG(p_position,"p_position")
		HX_STACK_LINE(101)
		::haxor::context::GizmoContext tmp = ::haxor::context::EngineContext_obj::gizmo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(101)
		::haxor::math::Vector3 tmp1 = p_position;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(101)
		tmp->canvas_renderer->Line(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gizmo_obj,LinePath,(void))

Void Gizmo_obj::EndPath( ){
{
		HX_STACK_FRAME("haxor.graphics.Gizmo","EndPath",0x0dd181b5,"haxor.graphics.Gizmo.EndPath","haxor/graphics/Gizmo.hx",108,0x45aff45b)
		HX_STACK_LINE(109)
		::haxor::context::GizmoContext tmp = ::haxor::context::EngineContext_obj::gizmo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(109)
		tmp->canvas_renderer->End();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Gizmo_obj,EndPath,(void))


Gizmo_obj::Gizmo_obj()
{
}

bool Gizmo_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"Grid") ) { outValue = Grid_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Axis") ) { outValue = Axis_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Line") ) { outValue = Line_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"Point") ) { outValue = Point_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"EndPath") ) { outValue = EndPath_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"WireCube") ) { outValue = WireCube_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"LinePath") ) { outValue = LinePath_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"BeginPath") ) { outValue = BeginPath_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"WireSphere") ) { outValue = WireSphere_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Gizmo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Gizmo_obj::__mClass,"__mClass");
};

#endif

hx::Class Gizmo_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("Grid","\xe6","\x02","\x45","\x2f"),
	HX_HCSTRING("Axis","\xc1","\x48","\x52","\x2b"),
	HX_HCSTRING("Line","\x14","\x44","\x8c","\x32"),
	HX_HCSTRING("Point","\x30","\x24","\xbd","\x59"),
	HX_HCSTRING("WireSphere","\x52","\x9d","\x4c","\xb0"),
	HX_HCSTRING("WireCube","\xfa","\x9f","\x3c","\x67"),
	HX_HCSTRING("BeginPath","\x4e","\xa4","\xfe","\x34"),
	HX_HCSTRING("LinePath","\xd9","\xef","\x2c","\x61"),
	HX_HCSTRING("EndPath","\x00","\xc7","\xc7","\xf9"),
	String(null()) };

void Gizmo_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.graphics.Gizmo","\x23","\xde","\xe9","\x0b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Gizmo_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Gizmo_obj >;
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
} // end namespace graphics
