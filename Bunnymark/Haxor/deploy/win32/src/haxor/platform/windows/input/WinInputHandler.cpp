#include <hxcpp.h>

#ifndef INCLUDED_haxor_input_Input
#include <haxor/input/Input.h>
#endif
#ifndef INCLUDED_haxor_input_InputHandler
#include <haxor/input/InputHandler.h>
#endif
#ifndef INCLUDED_haxor_input_Joystick
#include <haxor/input/Joystick.h>
#endif
#ifndef INCLUDED_haxor_input_KeyCode
#include <haxor/input/KeyCode.h>
#endif
#ifndef INCLUDED_haxor_platform_windows_input_WinInputHandler
#include <haxor/platform/windows/input/WinInputHandler.h>
#endif
namespace haxor{
namespace platform{
namespace windows{
namespace input{

Void WinInputHandler_obj::__construct()
{
HX_STACK_FRAME("haxor.platform.windows.input.WinInputHandler","new",0xbd82d010,"haxor.platform.windows.input.WinInputHandler.new","haxor/platform/windows/input/WinInputHandler.hx",38,0x9e512882)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(39)
	super::__construct();
	HX_STACK_LINE(40)
	int max_jk = (int)0;		HX_STACK_VAR(max_jk,"max_jk");
	HX_STACK_LINE(41)
	max_jk = 4;;
	HX_STACK_LINE(42)
	this->m_max_joystick = max_jk;
	HX_STACK_LINE(44)
	this->CheckJoysticks();
}
;
	return null();
}

//WinInputHandler_obj::~WinInputHandler_obj() { }

Dynamic WinInputHandler_obj::__CreateEmpty() { return  new WinInputHandler_obj; }
hx::ObjectPtr< WinInputHandler_obj > WinInputHandler_obj::__new()
{  hx::ObjectPtr< WinInputHandler_obj > _result_ = new WinInputHandler_obj();
	_result_->__construct();
	return _result_;}

Dynamic WinInputHandler_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WinInputHandler_obj > _result_ = new WinInputHandler_obj();
	_result_->__construct();
	return _result_;}

Void WinInputHandler_obj::UpdateInput( ){
{
		HX_STACK_FRAME("haxor.platform.windows.input.WinInputHandler","UpdateInput",0xa0a6f4d1,"haxor.platform.windows.input.WinInputHandler.UpdateInput","haxor/platform/windows/input/WinInputHandler.hx",52,0x9e512882)
		HX_STACK_THIS(this)
		HX_STACK_LINE(52)
		this->UpdateJoysticks();
	}
return null();
}


Void WinInputHandler_obj::UpdateJoysticks( ){
{
		HX_STACK_FRAME("haxor.platform.windows.input.WinInputHandler","UpdateJoysticks",0x0351647e,"haxor.platform.windows.input.WinInputHandler.UpdateJoysticks","haxor/platform/windows/input/WinInputHandler.hx",59,0x9e512882)
		HX_STACK_THIS(this)
		HX_STACK_LINE(60)
		Float alx = ((Float)0.0);		HX_STACK_VAR(alx,"alx");
		HX_STACK_LINE(61)
		Float aly = ((Float)0.0);		HX_STACK_VAR(aly,"aly");
		HX_STACK_LINE(62)
		Float arx = ((Float)0.0);		HX_STACK_VAR(arx,"arx");
		HX_STACK_LINE(63)
		Float ary = ((Float)0.0);		HX_STACK_VAR(ary,"ary");
		HX_STACK_LINE(64)
		Float tl = ((Float)0.0);		HX_STACK_VAR(tl,"tl");
		HX_STACK_LINE(65)
		Float tr = ((Float)0.0);		HX_STACK_VAR(tr,"tr");
		HX_STACK_LINE(67)
		{
			HX_STACK_LINE(67)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(67)
			Array< ::Dynamic > tmp = ::haxor::input::Input_obj::m_joysticks;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(67)
			int _g = tmp->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(67)
			while((true)){
				HX_STACK_LINE(67)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(67)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(67)
				if ((tmp2)){
					HX_STACK_LINE(67)
					break;
				}
				HX_STACK_LINE(67)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(67)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(69)
				Array< ::Dynamic > tmp4 = ::haxor::input::Input_obj::m_joysticks;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(69)
				int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(69)
				::haxor::input::Joystick tmp6 = tmp4->__get(tmp5).StaticCast< ::haxor::input::Joystick >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(69)
				::haxor::input::Joystick jk = tmp6;		HX_STACK_VAR(jk,"jk");
				HX_STACK_LINE(70)
				int tmp7 = jk->id;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(70)
				::String tmp8 = jk->name;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(70)
				this->OnJoystickStart(tmp7,tmp8);
				HX_STACK_LINE(71)
				int cid = jk->id;		HX_STACK_VAR(cid,"cid");
				HX_STACK_LINE(72)
							
			XINPUT_STATE state;
			ZeroMemory( & state, sizeof(XINPUT_STATE));
			//Check if device is connected.
			if (XInputGetState(cid, &state) != ERROR_SUCCESS) continue;
			alx = ((float)state.Gamepad.sThumbLX)  / 32767.0;
			aly = ((float)state.Gamepad.sThumbLY)  / 32767.0;			
			arx = ((float)state.Gamepad.sThumbRX)  / 32767.0;
			ary = ((float)state.Gamepad.sThumbRY)  / 32767.0;						 
			tl = ((float)state.Gamepad.bLeftTrigger)  / 255.0;
			tr = ((float) state.Gamepad.bRightTrigger) / 255.0;						
			;
				HX_STACK_LINE(85)
				Array< int > tmp9 = Array_obj< int >::__new().Add((int)4096).Add((int)8192).Add((int)16384).Add((int)32768).Add((int)256).Add((int)512).Add((int)-1).Add((int)-1).Add((int)32).Add((int)16).Add((int)64).Add((int)128).Add((int)1).Add((int)2).Add((int)4).Add((int)8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(85)
				Array< int > buttons = tmp9;		HX_STACK_VAR(buttons,"buttons");
				HX_STACK_LINE(104)
				{
					HX_STACK_LINE(104)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(104)
					int _g2 = buttons->length;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(104)
					while((true)){
						HX_STACK_LINE(104)
						bool tmp10 = (_g3 < _g2);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(104)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(104)
						if ((tmp11)){
							HX_STACK_LINE(104)
							break;
						}
						HX_STACK_LINE(104)
						int tmp12 = (_g3)++;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(104)
						int i1 = tmp12;		HX_STACK_VAR(i1,"i1");
						HX_STACK_LINE(106)
						Float v = ((Float)0.0);		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(107)
						int tmp13 = buttons->__get(i1);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(107)
						int code = tmp13;		HX_STACK_VAR(code,"code");
						HX_STACK_LINE(108)
						int tmp14 = i1;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(108)
						int tmp15 = ::haxor::input::KeyCode_obj::LeftShoulderBottom;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(108)
						bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(108)
						if ((tmp16)){
							HX_STACK_LINE(108)
							v = tl;
						}
						else{
							HX_STACK_LINE(109)
							int tmp17 = i1;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(109)
							int tmp18 = ::haxor::input::KeyCode_obj::RightShoulderBottom;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(109)
							bool tmp19 = (tmp17 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(109)
							if ((tmp19)){
								HX_STACK_LINE(109)
								v = tr;
							}
							else{
								HX_STACK_LINE(111)
								
					v = (state.Gamepad.wButtons & code) != 0 ? 1.0 : 0.0;
					;
							}
						}
						HX_STACK_LINE(116)
						int tmp17 = i1;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(116)
						Float tmp18 = v;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(116)
						this->OnJoystickDataUpdate(tmp17,tmp18,false);
					}
				}
				HX_STACK_LINE(118)
				Float tmp10 = alx;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(118)
				Float tmp11 = aly;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(118)
				Float tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(118)
				Float tmp13 = arx;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(118)
				Float tmp14 = ary;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(118)
				Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(118)
				Array< Float > tmp16 = Array_obj< Float >::__new().Add(tmp10).Add(tmp12).Add(tmp13).Add(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(118)
				Array< Float > axes = tmp16;		HX_STACK_VAR(axes,"axes");
				HX_STACK_LINE(119)
				{
					HX_STACK_LINE(119)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(119)
					int _g2 = axes->length;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(119)
					while((true)){
						HX_STACK_LINE(119)
						bool tmp17 = (_g3 < _g2);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(119)
						bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(119)
						if ((tmp18)){
							HX_STACK_LINE(119)
							break;
						}
						HX_STACK_LINE(119)
						int tmp19 = (_g3)++;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(119)
						int i1 = tmp19;		HX_STACK_VAR(i1,"i1");
						HX_STACK_LINE(119)
						int tmp20 = i1;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(119)
						Float tmp21 = axes->__get(i1);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(119)
						this->OnJoystickDataUpdate(tmp20,tmp21,true);
					}
				}
				HX_STACK_LINE(120)
				this->OnJoystickAnalogUpdate();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WinInputHandler_obj,UpdateJoysticks,(void))

Void WinInputHandler_obj::RequestJoystickVibration( ::haxor::input::Joystick p_joystick){
{
		HX_STACK_FRAME("haxor.platform.windows.input.WinInputHandler","RequestJoystickVibration",0xe3d85dd7,"haxor.platform.windows.input.WinInputHandler.RequestJoystickVibration","haxor/platform/windows/input/WinInputHandler.hx",129,0x9e512882)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_joystick,"p_joystick")
		HX_STACK_LINE(130)
		int cid = p_joystick->id;		HX_STACK_VAR(cid,"cid");
		HX_STACK_LINE(131)
		Float tmp = (p_joystick->m_vibrationLeft * ((Float)65535.0));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(131)
		int lv = ((int)(tmp));		HX_STACK_VAR(lv,"lv");
		HX_STACK_LINE(132)
		Float tmp1 = (p_joystick->m_vibrationRight * ((Float)65535.0));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(132)
		int rv = ((int)(tmp1));		HX_STACK_VAR(rv,"rv");
		HX_STACK_LINE(133)
		
		XINPUT_VIBRATION vibration;
		ZeroMemory( &vibration, sizeof(XINPUT_VIBRATION) );
		vibration.wLeftMotorSpeed  = lv; // use any value between 0-65535 here
		vibration.wRightMotorSpeed = rv; // use any value between 0-65535 here
		XInputSetState(cid, & vibration );
		;
	}
return null();
}


Void WinInputHandler_obj::CheckJoysticks( ){
{
		HX_STACK_FRAME("haxor.platform.windows.input.WinInputHandler","CheckJoysticks",0xe01e04bf,"haxor.platform.windows.input.WinInputHandler.CheckJoysticks","haxor/platform/windows/input/WinInputHandler.hx",146,0x9e512882)
		HX_STACK_THIS(this)
		HX_STACK_LINE(147)
		int cid = (int)-1;		HX_STACK_VAR(cid,"cid");
		HX_STACK_LINE(148)
		{
			HX_STACK_LINE(148)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(148)
			int tmp = this->m_max_joystick;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(148)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(148)
			while((true)){
				HX_STACK_LINE(148)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(148)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(148)
				if ((tmp2)){
					HX_STACK_LINE(148)
					break;
				}
				HX_STACK_LINE(148)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(148)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(150)
						
			XINPUT_STATE state;
			ZeroMemory(&state, sizeof(XINPUT_STATE));		 
			if (XInputGetState(i, &state) == ERROR_SUCCESS)	cid = i;	 		
			;
				HX_STACK_LINE(155)
				bool tmp4 = (cid >= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(155)
				if ((tmp4)){
					HX_STACK_LINE(157)
					int tmp5 = cid;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(157)
					::String tmp6 = (HX_HCSTRING("Joystick","\xdc","\x9c","\xa3","\x75") + cid);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(157)
					this->OnJoystickStart(tmp5,tmp6);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WinInputHandler_obj,CheckJoysticks,(void))


WinInputHandler_obj::WinInputHandler_obj()
{
}

Dynamic WinInputHandler_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"UpdateInput") ) { return UpdateInput_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"m_max_joystick") ) { return m_max_joystick; }
		if (HX_FIELD_EQ(inName,"CheckJoysticks") ) { return CheckJoysticks_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"UpdateJoysticks") ) { return UpdateJoysticks_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"RequestJoystickVibration") ) { return RequestJoystickVibration_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic WinInputHandler_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"m_max_joystick") ) { m_max_joystick=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool WinInputHandler_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void WinInputHandler_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("m_max_joystick","\x49","\x6b","\x73","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(WinInputHandler_obj,m_max_joystick),HX_HCSTRING("m_max_joystick","\x49","\x6b","\x73","\x9f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("m_max_joystick","\x49","\x6b","\x73","\x9f"),
	HX_HCSTRING("UpdateInput","\x21","\xc5","\xe8","\x87"),
	HX_HCSTRING("UpdateJoysticks","\xce","\x9c","\xc9","\x87"),
	HX_HCSTRING("RequestJoystickVibration","\x87","\x9b","\xde","\x71"),
	HX_HCSTRING("CheckJoysticks","\x6f","\x46","\xbf","\xe8"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WinInputHandler_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WinInputHandler_obj::__mClass,"__mClass");
};

#endif

hx::Class WinInputHandler_obj::__mClass;

void WinInputHandler_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.platform.windows.input.WinInputHandler","\x1e","\xc8","\x3d","\xd2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &WinInputHandler_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< WinInputHandler_obj >;
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
} // end namespace platform
} // end namespace windows
} // end namespace input
