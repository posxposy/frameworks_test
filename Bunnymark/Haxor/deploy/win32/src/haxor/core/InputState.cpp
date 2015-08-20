#include <hxcpp.h>

#ifndef INCLUDED_haxor_core_InputState
#include <haxor/core/InputState.h>
#endif
namespace haxor{
namespace core{

::haxor::core::InputState InputState_obj::Down;

::haxor::core::InputState InputState_obj::Hold;

::haxor::core::InputState InputState_obj::None;

::haxor::core::InputState InputState_obj::Up;

HX_DEFINE_CREATE_ENUM(InputState_obj)

int InputState_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("Down","\x82","\x24","\x47","\x2d")) return 1;
	if (inName==HX_HCSTRING("Hold","\x5f","\xf5","\xeb","\x2f")) return 3;
	if (inName==HX_HCSTRING("None","\xd8","\x3e","\xe3","\x33")) return 0;
	if (inName==HX_HCSTRING("Up","\x7b","\x4a","\x00","\x00")) return 2;
	return super::__FindIndex(inName);
}

int InputState_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("Down","\x82","\x24","\x47","\x2d")) return 0;
	if (inName==HX_HCSTRING("Hold","\x5f","\xf5","\xeb","\x2f")) return 0;
	if (inName==HX_HCSTRING("None","\xd8","\x3e","\xe3","\x33")) return 0;
	if (inName==HX_HCSTRING("Up","\x7b","\x4a","\x00","\x00")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic InputState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("Down","\x82","\x24","\x47","\x2d")) return Down;
	if (inName==HX_HCSTRING("Hold","\x5f","\xf5","\xeb","\x2f")) return Hold;
	if (inName==HX_HCSTRING("None","\xd8","\x3e","\xe3","\x33")) return None;
	if (inName==HX_HCSTRING("Up","\x7b","\x4a","\x00","\x00")) return Up;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("None","\xd8","\x3e","\xe3","\x33"),
	HX_HCSTRING("Down","\x82","\x24","\x47","\x2d"),
	HX_HCSTRING("Up","\x7b","\x4a","\x00","\x00"),
	HX_HCSTRING("Hold","\x5f","\xf5","\xeb","\x2f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InputState_obj::Down,"Down");
	HX_MARK_MEMBER_NAME(InputState_obj::Hold,"Hold");
	HX_MARK_MEMBER_NAME(InputState_obj::None,"None");
	HX_MARK_MEMBER_NAME(InputState_obj::Up,"Up");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InputState_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(InputState_obj::Down,"Down");
	HX_VISIT_MEMBER_NAME(InputState_obj::Hold,"Hold");
	HX_VISIT_MEMBER_NAME(InputState_obj::None,"None");
	HX_VISIT_MEMBER_NAME(InputState_obj::Up,"Up");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class InputState_obj::__mClass;

Dynamic __Create_InputState_obj() { return new InputState_obj; }

void InputState_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("haxor.core.InputState","\x4a","\x96","\x17","\x94"), hx::TCanCast< InputState_obj >,sStaticFields,sMemberFields,
	&__Create_InputState_obj, &__Create,
	&super::__SGetClass(), &CreateInputState_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void InputState_obj::__boot()
{
hx::Static(Down) = hx::CreateEnum< InputState_obj >(HX_HCSTRING("Down","\x82","\x24","\x47","\x2d"),1);
hx::Static(Hold) = hx::CreateEnum< InputState_obj >(HX_HCSTRING("Hold","\x5f","\xf5","\xeb","\x2f"),3);
hx::Static(None) = hx::CreateEnum< InputState_obj >(HX_HCSTRING("None","\xd8","\x3e","\xe3","\x33"),0);
hx::Static(Up) = hx::CreateEnum< InputState_obj >(HX_HCSTRING("Up","\x7b","\x4a","\x00","\x00"),2);
}


} // end namespace haxor
} // end namespace core
