#include <hxcpp.h>

#ifndef INCLUDED_haxor_core_ColliderType
#include <haxor/core/ColliderType.h>
#endif
namespace haxor{
namespace core{

::haxor::core::ColliderType ColliderType_obj::Box;

::haxor::core::ColliderType ColliderType_obj::Capsule;

::haxor::core::ColliderType ColliderType_obj::Mesh;

::haxor::core::ColliderType ColliderType_obj::Plane;

::haxor::core::ColliderType ColliderType_obj::Point;

::haxor::core::ColliderType ColliderType_obj::Sphere;

HX_DEFINE_CREATE_ENUM(ColliderType_obj)

int ColliderType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("Box","\xeb","\x75","\x32","\x00")) return 2;
	if (inName==HX_HCSTRING("Capsule","\x8d","\xbc","\xf9","\x73")) return 4;
	if (inName==HX_HCSTRING("Mesh","\x0d","\x76","\x32","\x33")) return 5;
	if (inName==HX_HCSTRING("Plane","\x3c","\x6e","\xbb","\x57")) return 1;
	if (inName==HX_HCSTRING("Point","\x30","\x24","\xbd","\x59")) return 0;
	if (inName==HX_HCSTRING("Sphere","\x2d","\x23","\x8b","\xf1")) return 3;
	return super::__FindIndex(inName);
}

int ColliderType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("Box","\xeb","\x75","\x32","\x00")) return 0;
	if (inName==HX_HCSTRING("Capsule","\x8d","\xbc","\xf9","\x73")) return 0;
	if (inName==HX_HCSTRING("Mesh","\x0d","\x76","\x32","\x33")) return 0;
	if (inName==HX_HCSTRING("Plane","\x3c","\x6e","\xbb","\x57")) return 0;
	if (inName==HX_HCSTRING("Point","\x30","\x24","\xbd","\x59")) return 0;
	if (inName==HX_HCSTRING("Sphere","\x2d","\x23","\x8b","\xf1")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic ColliderType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("Box","\xeb","\x75","\x32","\x00")) return Box;
	if (inName==HX_HCSTRING("Capsule","\x8d","\xbc","\xf9","\x73")) return Capsule;
	if (inName==HX_HCSTRING("Mesh","\x0d","\x76","\x32","\x33")) return Mesh;
	if (inName==HX_HCSTRING("Plane","\x3c","\x6e","\xbb","\x57")) return Plane;
	if (inName==HX_HCSTRING("Point","\x30","\x24","\xbd","\x59")) return Point;
	if (inName==HX_HCSTRING("Sphere","\x2d","\x23","\x8b","\xf1")) return Sphere;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("Point","\x30","\x24","\xbd","\x59"),
	HX_HCSTRING("Plane","\x3c","\x6e","\xbb","\x57"),
	HX_HCSTRING("Box","\xeb","\x75","\x32","\x00"),
	HX_HCSTRING("Sphere","\x2d","\x23","\x8b","\xf1"),
	HX_HCSTRING("Capsule","\x8d","\xbc","\xf9","\x73"),
	HX_HCSTRING("Mesh","\x0d","\x76","\x32","\x33"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColliderType_obj::Box,"Box");
	HX_MARK_MEMBER_NAME(ColliderType_obj::Capsule,"Capsule");
	HX_MARK_MEMBER_NAME(ColliderType_obj::Mesh,"Mesh");
	HX_MARK_MEMBER_NAME(ColliderType_obj::Plane,"Plane");
	HX_MARK_MEMBER_NAME(ColliderType_obj::Point,"Point");
	HX_MARK_MEMBER_NAME(ColliderType_obj::Sphere,"Sphere");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColliderType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ColliderType_obj::Box,"Box");
	HX_VISIT_MEMBER_NAME(ColliderType_obj::Capsule,"Capsule");
	HX_VISIT_MEMBER_NAME(ColliderType_obj::Mesh,"Mesh");
	HX_VISIT_MEMBER_NAME(ColliderType_obj::Plane,"Plane");
	HX_VISIT_MEMBER_NAME(ColliderType_obj::Point,"Point");
	HX_VISIT_MEMBER_NAME(ColliderType_obj::Sphere,"Sphere");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class ColliderType_obj::__mClass;

Dynamic __Create_ColliderType_obj() { return new ColliderType_obj; }

void ColliderType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("haxor.core.ColliderType","\x71","\xaf","\xbc","\x07"), hx::TCanCast< ColliderType_obj >,sStaticFields,sMemberFields,
	&__Create_ColliderType_obj, &__Create,
	&super::__SGetClass(), &CreateColliderType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void ColliderType_obj::__boot()
{
hx::Static(Box) = hx::CreateEnum< ColliderType_obj >(HX_HCSTRING("Box","\xeb","\x75","\x32","\x00"),2);
hx::Static(Capsule) = hx::CreateEnum< ColliderType_obj >(HX_HCSTRING("Capsule","\x8d","\xbc","\xf9","\x73"),4);
hx::Static(Mesh) = hx::CreateEnum< ColliderType_obj >(HX_HCSTRING("Mesh","\x0d","\x76","\x32","\x33"),5);
hx::Static(Plane) = hx::CreateEnum< ColliderType_obj >(HX_HCSTRING("Plane","\x3c","\x6e","\xbb","\x57"),1);
hx::Static(Point) = hx::CreateEnum< ColliderType_obj >(HX_HCSTRING("Point","\x30","\x24","\xbd","\x59"),0);
hx::Static(Sphere) = hx::CreateEnum< ColliderType_obj >(HX_HCSTRING("Sphere","\x2d","\x23","\x8b","\xf1"),3);
}


} // end namespace haxor
} // end namespace core
