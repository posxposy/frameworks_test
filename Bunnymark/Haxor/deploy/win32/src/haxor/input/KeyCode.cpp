#include <hxcpp.h>

#ifndef INCLUDED_haxor_input_KeyCode
#include <haxor/input/KeyCode.h>
#endif
namespace haxor{
namespace input{

Void KeyCode_obj::__construct()
{
	return null();
}

//KeyCode_obj::~KeyCode_obj() { }

Dynamic KeyCode_obj::__CreateEmpty() { return  new KeyCode_obj; }
hx::ObjectPtr< KeyCode_obj > KeyCode_obj::__new()
{  hx::ObjectPtr< KeyCode_obj > _result_ = new KeyCode_obj();
	_result_->__construct();
	return _result_;}

Dynamic KeyCode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< KeyCode_obj > _result_ = new KeyCode_obj();
	_result_->__construct();
	return _result_;}

int KeyCode_obj::Modifiers;

int KeyCode_obj::None;

int KeyCode_obj::Mouse0;

int KeyCode_obj::Mouse1;

int KeyCode_obj::Cancel;

int KeyCode_obj::Mouse2;

int KeyCode_obj::Mouse3;

int KeyCode_obj::Mouse4;

int KeyCode_obj::Back;

int KeyCode_obj::Tab;

int KeyCode_obj::LineFeed;

int KeyCode_obj::Clear;

int KeyCode_obj::Enter;

int KeyCode_obj::Return;

int KeyCode_obj::ShiftKey;

int KeyCode_obj::ControlKey;

int KeyCode_obj::Alt;

int KeyCode_obj::Pause;

int KeyCode_obj::CapsLock;

int KeyCode_obj::Capital;

int KeyCode_obj::KanaMode;

int KeyCode_obj::HanguelMode;

int KeyCode_obj::HangulMode;

int KeyCode_obj::JunjaMode;

int KeyCode_obj::FinalMode;

int KeyCode_obj::KanjiMode;

int KeyCode_obj::HanjaMode;

int KeyCode_obj::Escape;

int KeyCode_obj::IMEConvert;

int KeyCode_obj::IMENonconvert;

int KeyCode_obj::IMEAceept;

int KeyCode_obj::IMEAccept;

int KeyCode_obj::IMEModeChange;

int KeyCode_obj::Space;

int KeyCode_obj::Prior;

int KeyCode_obj::PageUp;

int KeyCode_obj::Next;

int KeyCode_obj::PageDown;

int KeyCode_obj::End;

int KeyCode_obj::Home;

int KeyCode_obj::Left;

int KeyCode_obj::Up;

int KeyCode_obj::Right;

int KeyCode_obj::Down;

int KeyCode_obj::Select;

int KeyCode_obj::Print;

int KeyCode_obj::Execute;

int KeyCode_obj::PrintScreen;

int KeyCode_obj::Snapshot;

int KeyCode_obj::Insert;

int KeyCode_obj::Delete;

int KeyCode_obj::Help;

int KeyCode_obj::D0;

int KeyCode_obj::D1;

int KeyCode_obj::D2;

int KeyCode_obj::D3;

int KeyCode_obj::D4;

int KeyCode_obj::D5;

int KeyCode_obj::D6;

int KeyCode_obj::D7;

int KeyCode_obj::D8;

int KeyCode_obj::D9;

int KeyCode_obj::A;

int KeyCode_obj::B;

int KeyCode_obj::C;

int KeyCode_obj::D;

int KeyCode_obj::E;

int KeyCode_obj::F;

int KeyCode_obj::G;

int KeyCode_obj::H;

int KeyCode_obj::I;

int KeyCode_obj::J;

int KeyCode_obj::K;

int KeyCode_obj::L;

int KeyCode_obj::M;

int KeyCode_obj::N;

int KeyCode_obj::O;

int KeyCode_obj::P;

int KeyCode_obj::Q;

int KeyCode_obj::R;

int KeyCode_obj::S;

int KeyCode_obj::T;

int KeyCode_obj::U;

int KeyCode_obj::V;

int KeyCode_obj::W;

int KeyCode_obj::X;

int KeyCode_obj::Y;

int KeyCode_obj::Z;

int KeyCode_obj::LWin;

int KeyCode_obj::RWin;

int KeyCode_obj::Apps;

int KeyCode_obj::Sleep;

int KeyCode_obj::NumPad0;

int KeyCode_obj::NumPad1;

int KeyCode_obj::NumPad2;

int KeyCode_obj::NumPad3;

int KeyCode_obj::NumPad4;

int KeyCode_obj::NumPad5;

int KeyCode_obj::NumPad6;

int KeyCode_obj::NumPad7;

int KeyCode_obj::NumPad8;

int KeyCode_obj::NumPad9;

int KeyCode_obj::Multiply;

int KeyCode_obj::Add;

int KeyCode_obj::Separator;

int KeyCode_obj::Subtract;

int KeyCode_obj::Decimal;

int KeyCode_obj::Divide;

int KeyCode_obj::F1;

int KeyCode_obj::F2;

int KeyCode_obj::F3;

int KeyCode_obj::F4;

int KeyCode_obj::F5;

int KeyCode_obj::F6;

int KeyCode_obj::F7;

int KeyCode_obj::F8;

int KeyCode_obj::F9;

int KeyCode_obj::F10;

int KeyCode_obj::F11;

int KeyCode_obj::F12;

int KeyCode_obj::F13;

int KeyCode_obj::F14;

int KeyCode_obj::F15;

int KeyCode_obj::F16;

int KeyCode_obj::F17;

int KeyCode_obj::F18;

int KeyCode_obj::F19;

int KeyCode_obj::F20;

int KeyCode_obj::F21;

int KeyCode_obj::F22;

int KeyCode_obj::F23;

int KeyCode_obj::F24;

int KeyCode_obj::NumLock;

int KeyCode_obj::Scroll;

int KeyCode_obj::LShiftKey;

int KeyCode_obj::RShiftKey;

int KeyCode_obj::LControlKey;

int KeyCode_obj::RControlKey;

int KeyCode_obj::LAlt;

int KeyCode_obj::RAlt;

int KeyCode_obj::BrowserBack;

int KeyCode_obj::BrowserForward;

int KeyCode_obj::BrowserRefresh;

int KeyCode_obj::BrowserStop;

int KeyCode_obj::BrowserSearch;

int KeyCode_obj::BrowserFavorites;

int KeyCode_obj::BrowserHome;

int KeyCode_obj::VolumeMute;

int KeyCode_obj::VolumeDown;

int KeyCode_obj::VolumeUp;

int KeyCode_obj::MediaNextTrack;

int KeyCode_obj::MediaPreviousTrack;

int KeyCode_obj::MediaStop;

int KeyCode_obj::MediaPlayPause;

int KeyCode_obj::LaunchMail;

int KeyCode_obj::SelectMedia;

int KeyCode_obj::LaunchApplication1;

int KeyCode_obj::LaunchApplication2;

int KeyCode_obj::Oem1;

int KeyCode_obj::OemSemicolon;

int KeyCode_obj::Oemplus;

int KeyCode_obj::Oemcomma;

int KeyCode_obj::OemMinus;

int KeyCode_obj::OemPeriod;

int KeyCode_obj::OemQuestion;

int KeyCode_obj::Oem2;

int KeyCode_obj::Oemtilde;

int KeyCode_obj::Oem3;

int KeyCode_obj::Oem4;

int KeyCode_obj::OemOpenBrackets;

int KeyCode_obj::OemPipe;

int KeyCode_obj::Oem5;

int KeyCode_obj::Oem6;

int KeyCode_obj::OemCloseBrackets;

int KeyCode_obj::Oem7;

int KeyCode_obj::OemQuotes;

int KeyCode_obj::Oem8;

int KeyCode_obj::Oem102;

int KeyCode_obj::OemBackslash;

int KeyCode_obj::ProcessKey;

int KeyCode_obj::Packet;

int KeyCode_obj::Attn;

int KeyCode_obj::Crsel;

int KeyCode_obj::Exsel;

int KeyCode_obj::EraseEof;

int KeyCode_obj::Play;

int KeyCode_obj::Zoom;

int KeyCode_obj::NoName;

int KeyCode_obj::Pa1;

int KeyCode_obj::OemClear;

int KeyCode_obj::KeyCodeMask;

int KeyCode_obj::ShiftModifier;

int KeyCode_obj::ControlModifier;

int KeyCode_obj::AltModifier;

int KeyCode_obj::Face1;

int KeyCode_obj::Face2;

int KeyCode_obj::Face3;

int KeyCode_obj::Face4;

int KeyCode_obj::ButtonA;

int KeyCode_obj::ButtonB;

int KeyCode_obj::ButtonX;

int KeyCode_obj::ButtonY;

int KeyCode_obj::LeftShoulder;

int KeyCode_obj::RightShoulder;

int KeyCode_obj::LeftShoulderBottom;

int KeyCode_obj::RightShoulderBottom;

int KeyCode_obj::ButtonSelect;

int KeyCode_obj::ButtonStart;

int KeyCode_obj::LeftAnalogueStick;

int KeyCode_obj::RightAnalogueStick;

int KeyCode_obj::PadTop;

int KeyCode_obj::PadBottom;

int KeyCode_obj::PadLeft;

int KeyCode_obj::PadRight;

int KeyCode_obj::LeftAnalogueHor;

int KeyCode_obj::LeftAnalogueVert;

int KeyCode_obj::RightAnalogueHor;

int KeyCode_obj::RightAnalogueVert;

int KeyCode_obj::Touch0;

int KeyCode_obj::Touch1;

int KeyCode_obj::Touch2;

int KeyCode_obj::Touch3;

int KeyCode_obj::Touch4;

int KeyCode_obj::Touch5;


KeyCode_obj::KeyCode_obj()
{
}

bool KeyCode_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"A") ) { outValue = A; return true;  }
		if (HX_FIELD_EQ(inName,"B") ) { outValue = B; return true;  }
		if (HX_FIELD_EQ(inName,"C") ) { outValue = C; return true;  }
		if (HX_FIELD_EQ(inName,"D") ) { outValue = D; return true;  }
		if (HX_FIELD_EQ(inName,"E") ) { outValue = E; return true;  }
		if (HX_FIELD_EQ(inName,"F") ) { outValue = F; return true;  }
		if (HX_FIELD_EQ(inName,"G") ) { outValue = G; return true;  }
		if (HX_FIELD_EQ(inName,"H") ) { outValue = H; return true;  }
		if (HX_FIELD_EQ(inName,"I") ) { outValue = I; return true;  }
		if (HX_FIELD_EQ(inName,"J") ) { outValue = J; return true;  }
		if (HX_FIELD_EQ(inName,"K") ) { outValue = K; return true;  }
		if (HX_FIELD_EQ(inName,"L") ) { outValue = L; return true;  }
		if (HX_FIELD_EQ(inName,"M") ) { outValue = M; return true;  }
		if (HX_FIELD_EQ(inName,"N") ) { outValue = N; return true;  }
		if (HX_FIELD_EQ(inName,"O") ) { outValue = O; return true;  }
		if (HX_FIELD_EQ(inName,"P") ) { outValue = P; return true;  }
		if (HX_FIELD_EQ(inName,"Q") ) { outValue = Q; return true;  }
		if (HX_FIELD_EQ(inName,"R") ) { outValue = R; return true;  }
		if (HX_FIELD_EQ(inName,"S") ) { outValue = S; return true;  }
		if (HX_FIELD_EQ(inName,"T") ) { outValue = T; return true;  }
		if (HX_FIELD_EQ(inName,"U") ) { outValue = U; return true;  }
		if (HX_FIELD_EQ(inName,"V") ) { outValue = V; return true;  }
		if (HX_FIELD_EQ(inName,"W") ) { outValue = W; return true;  }
		if (HX_FIELD_EQ(inName,"X") ) { outValue = X; return true;  }
		if (HX_FIELD_EQ(inName,"Y") ) { outValue = Y; return true;  }
		if (HX_FIELD_EQ(inName,"Z") ) { outValue = Z; return true;  }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"Up") ) { outValue = Up; return true;  }
		if (HX_FIELD_EQ(inName,"D0") ) { outValue = D0; return true;  }
		if (HX_FIELD_EQ(inName,"D1") ) { outValue = D1; return true;  }
		if (HX_FIELD_EQ(inName,"D2") ) { outValue = D2; return true;  }
		if (HX_FIELD_EQ(inName,"D3") ) { outValue = D3; return true;  }
		if (HX_FIELD_EQ(inName,"D4") ) { outValue = D4; return true;  }
		if (HX_FIELD_EQ(inName,"D5") ) { outValue = D5; return true;  }
		if (HX_FIELD_EQ(inName,"D6") ) { outValue = D6; return true;  }
		if (HX_FIELD_EQ(inName,"D7") ) { outValue = D7; return true;  }
		if (HX_FIELD_EQ(inName,"D8") ) { outValue = D8; return true;  }
		if (HX_FIELD_EQ(inName,"D9") ) { outValue = D9; return true;  }
		if (HX_FIELD_EQ(inName,"F1") ) { outValue = F1; return true;  }
		if (HX_FIELD_EQ(inName,"F2") ) { outValue = F2; return true;  }
		if (HX_FIELD_EQ(inName,"F3") ) { outValue = F3; return true;  }
		if (HX_FIELD_EQ(inName,"F4") ) { outValue = F4; return true;  }
		if (HX_FIELD_EQ(inName,"F5") ) { outValue = F5; return true;  }
		if (HX_FIELD_EQ(inName,"F6") ) { outValue = F6; return true;  }
		if (HX_FIELD_EQ(inName,"F7") ) { outValue = F7; return true;  }
		if (HX_FIELD_EQ(inName,"F8") ) { outValue = F8; return true;  }
		if (HX_FIELD_EQ(inName,"F9") ) { outValue = F9; return true;  }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"Tab") ) { outValue = Tab; return true;  }
		if (HX_FIELD_EQ(inName,"Alt") ) { outValue = Alt; return true;  }
		if (HX_FIELD_EQ(inName,"End") ) { outValue = End; return true;  }
		if (HX_FIELD_EQ(inName,"Add") ) { outValue = Add; return true;  }
		if (HX_FIELD_EQ(inName,"F10") ) { outValue = F10; return true;  }
		if (HX_FIELD_EQ(inName,"F11") ) { outValue = F11; return true;  }
		if (HX_FIELD_EQ(inName,"F12") ) { outValue = F12; return true;  }
		if (HX_FIELD_EQ(inName,"F13") ) { outValue = F13; return true;  }
		if (HX_FIELD_EQ(inName,"F14") ) { outValue = F14; return true;  }
		if (HX_FIELD_EQ(inName,"F15") ) { outValue = F15; return true;  }
		if (HX_FIELD_EQ(inName,"F16") ) { outValue = F16; return true;  }
		if (HX_FIELD_EQ(inName,"F17") ) { outValue = F17; return true;  }
		if (HX_FIELD_EQ(inName,"F18") ) { outValue = F18; return true;  }
		if (HX_FIELD_EQ(inName,"F19") ) { outValue = F19; return true;  }
		if (HX_FIELD_EQ(inName,"F20") ) { outValue = F20; return true;  }
		if (HX_FIELD_EQ(inName,"F21") ) { outValue = F21; return true;  }
		if (HX_FIELD_EQ(inName,"F22") ) { outValue = F22; return true;  }
		if (HX_FIELD_EQ(inName,"F23") ) { outValue = F23; return true;  }
		if (HX_FIELD_EQ(inName,"F24") ) { outValue = F24; return true;  }
		if (HX_FIELD_EQ(inName,"Pa1") ) { outValue = Pa1; return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"None") ) { outValue = None; return true;  }
		if (HX_FIELD_EQ(inName,"Back") ) { outValue = Back; return true;  }
		if (HX_FIELD_EQ(inName,"Next") ) { outValue = Next; return true;  }
		if (HX_FIELD_EQ(inName,"Home") ) { outValue = Home; return true;  }
		if (HX_FIELD_EQ(inName,"Left") ) { outValue = Left; return true;  }
		if (HX_FIELD_EQ(inName,"Down") ) { outValue = Down; return true;  }
		if (HX_FIELD_EQ(inName,"Help") ) { outValue = Help; return true;  }
		if (HX_FIELD_EQ(inName,"LWin") ) { outValue = LWin; return true;  }
		if (HX_FIELD_EQ(inName,"RWin") ) { outValue = RWin; return true;  }
		if (HX_FIELD_EQ(inName,"Apps") ) { outValue = Apps; return true;  }
		if (HX_FIELD_EQ(inName,"LAlt") ) { outValue = LAlt; return true;  }
		if (HX_FIELD_EQ(inName,"RAlt") ) { outValue = RAlt; return true;  }
		if (HX_FIELD_EQ(inName,"Oem1") ) { outValue = Oem1; return true;  }
		if (HX_FIELD_EQ(inName,"Oem2") ) { outValue = Oem2; return true;  }
		if (HX_FIELD_EQ(inName,"Oem3") ) { outValue = Oem3; return true;  }
		if (HX_FIELD_EQ(inName,"Oem4") ) { outValue = Oem4; return true;  }
		if (HX_FIELD_EQ(inName,"Oem5") ) { outValue = Oem5; return true;  }
		if (HX_FIELD_EQ(inName,"Oem6") ) { outValue = Oem6; return true;  }
		if (HX_FIELD_EQ(inName,"Oem7") ) { outValue = Oem7; return true;  }
		if (HX_FIELD_EQ(inName,"Oem8") ) { outValue = Oem8; return true;  }
		if (HX_FIELD_EQ(inName,"Attn") ) { outValue = Attn; return true;  }
		if (HX_FIELD_EQ(inName,"Play") ) { outValue = Play; return true;  }
		if (HX_FIELD_EQ(inName,"Zoom") ) { outValue = Zoom; return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"Clear") ) { outValue = Clear; return true;  }
		if (HX_FIELD_EQ(inName,"Enter") ) { outValue = Enter; return true;  }
		if (HX_FIELD_EQ(inName,"Pause") ) { outValue = Pause; return true;  }
		if (HX_FIELD_EQ(inName,"Space") ) { outValue = Space; return true;  }
		if (HX_FIELD_EQ(inName,"Prior") ) { outValue = Prior; return true;  }
		if (HX_FIELD_EQ(inName,"Right") ) { outValue = Right; return true;  }
		if (HX_FIELD_EQ(inName,"Print") ) { outValue = Print; return true;  }
		if (HX_FIELD_EQ(inName,"Sleep") ) { outValue = Sleep; return true;  }
		if (HX_FIELD_EQ(inName,"Crsel") ) { outValue = Crsel; return true;  }
		if (HX_FIELD_EQ(inName,"Exsel") ) { outValue = Exsel; return true;  }
		if (HX_FIELD_EQ(inName,"Face1") ) { outValue = Face1; return true;  }
		if (HX_FIELD_EQ(inName,"Face2") ) { outValue = Face2; return true;  }
		if (HX_FIELD_EQ(inName,"Face3") ) { outValue = Face3; return true;  }
		if (HX_FIELD_EQ(inName,"Face4") ) { outValue = Face4; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"Mouse0") ) { outValue = Mouse0; return true;  }
		if (HX_FIELD_EQ(inName,"Mouse1") ) { outValue = Mouse1; return true;  }
		if (HX_FIELD_EQ(inName,"Cancel") ) { outValue = Cancel; return true;  }
		if (HX_FIELD_EQ(inName,"Mouse2") ) { outValue = Mouse2; return true;  }
		if (HX_FIELD_EQ(inName,"Mouse3") ) { outValue = Mouse3; return true;  }
		if (HX_FIELD_EQ(inName,"Mouse4") ) { outValue = Mouse4; return true;  }
		if (HX_FIELD_EQ(inName,"Return") ) { outValue = Return; return true;  }
		if (HX_FIELD_EQ(inName,"Escape") ) { outValue = Escape; return true;  }
		if (HX_FIELD_EQ(inName,"PageUp") ) { outValue = PageUp; return true;  }
		if (HX_FIELD_EQ(inName,"Select") ) { outValue = Select; return true;  }
		if (HX_FIELD_EQ(inName,"Insert") ) { outValue = Insert; return true;  }
		if (HX_FIELD_EQ(inName,"Delete") ) { outValue = Delete; return true;  }
		if (HX_FIELD_EQ(inName,"Divide") ) { outValue = Divide; return true;  }
		if (HX_FIELD_EQ(inName,"Scroll") ) { outValue = Scroll; return true;  }
		if (HX_FIELD_EQ(inName,"Oem102") ) { outValue = Oem102; return true;  }
		if (HX_FIELD_EQ(inName,"Packet") ) { outValue = Packet; return true;  }
		if (HX_FIELD_EQ(inName,"NoName") ) { outValue = NoName; return true;  }
		if (HX_FIELD_EQ(inName,"PadTop") ) { outValue = PadTop; return true;  }
		if (HX_FIELD_EQ(inName,"Touch0") ) { outValue = Touch0; return true;  }
		if (HX_FIELD_EQ(inName,"Touch1") ) { outValue = Touch1; return true;  }
		if (HX_FIELD_EQ(inName,"Touch2") ) { outValue = Touch2; return true;  }
		if (HX_FIELD_EQ(inName,"Touch3") ) { outValue = Touch3; return true;  }
		if (HX_FIELD_EQ(inName,"Touch4") ) { outValue = Touch4; return true;  }
		if (HX_FIELD_EQ(inName,"Touch5") ) { outValue = Touch5; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"Capital") ) { outValue = Capital; return true;  }
		if (HX_FIELD_EQ(inName,"Execute") ) { outValue = Execute; return true;  }
		if (HX_FIELD_EQ(inName,"NumPad0") ) { outValue = NumPad0; return true;  }
		if (HX_FIELD_EQ(inName,"NumPad1") ) { outValue = NumPad1; return true;  }
		if (HX_FIELD_EQ(inName,"NumPad2") ) { outValue = NumPad2; return true;  }
		if (HX_FIELD_EQ(inName,"NumPad3") ) { outValue = NumPad3; return true;  }
		if (HX_FIELD_EQ(inName,"NumPad4") ) { outValue = NumPad4; return true;  }
		if (HX_FIELD_EQ(inName,"NumPad5") ) { outValue = NumPad5; return true;  }
		if (HX_FIELD_EQ(inName,"NumPad6") ) { outValue = NumPad6; return true;  }
		if (HX_FIELD_EQ(inName,"NumPad7") ) { outValue = NumPad7; return true;  }
		if (HX_FIELD_EQ(inName,"NumPad8") ) { outValue = NumPad8; return true;  }
		if (HX_FIELD_EQ(inName,"NumPad9") ) { outValue = NumPad9; return true;  }
		if (HX_FIELD_EQ(inName,"Decimal") ) { outValue = Decimal; return true;  }
		if (HX_FIELD_EQ(inName,"NumLock") ) { outValue = NumLock; return true;  }
		if (HX_FIELD_EQ(inName,"Oemplus") ) { outValue = Oemplus; return true;  }
		if (HX_FIELD_EQ(inName,"OemPipe") ) { outValue = OemPipe; return true;  }
		if (HX_FIELD_EQ(inName,"ButtonA") ) { outValue = ButtonA; return true;  }
		if (HX_FIELD_EQ(inName,"ButtonB") ) { outValue = ButtonB; return true;  }
		if (HX_FIELD_EQ(inName,"ButtonX") ) { outValue = ButtonX; return true;  }
		if (HX_FIELD_EQ(inName,"ButtonY") ) { outValue = ButtonY; return true;  }
		if (HX_FIELD_EQ(inName,"PadLeft") ) { outValue = PadLeft; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"LineFeed") ) { outValue = LineFeed; return true;  }
		if (HX_FIELD_EQ(inName,"ShiftKey") ) { outValue = ShiftKey; return true;  }
		if (HX_FIELD_EQ(inName,"CapsLock") ) { outValue = CapsLock; return true;  }
		if (HX_FIELD_EQ(inName,"KanaMode") ) { outValue = KanaMode; return true;  }
		if (HX_FIELD_EQ(inName,"PageDown") ) { outValue = PageDown; return true;  }
		if (HX_FIELD_EQ(inName,"Snapshot") ) { outValue = Snapshot; return true;  }
		if (HX_FIELD_EQ(inName,"Multiply") ) { outValue = Multiply; return true;  }
		if (HX_FIELD_EQ(inName,"Subtract") ) { outValue = Subtract; return true;  }
		if (HX_FIELD_EQ(inName,"VolumeUp") ) { outValue = VolumeUp; return true;  }
		if (HX_FIELD_EQ(inName,"Oemcomma") ) { outValue = Oemcomma; return true;  }
		if (HX_FIELD_EQ(inName,"OemMinus") ) { outValue = OemMinus; return true;  }
		if (HX_FIELD_EQ(inName,"Oemtilde") ) { outValue = Oemtilde; return true;  }
		if (HX_FIELD_EQ(inName,"EraseEof") ) { outValue = EraseEof; return true;  }
		if (HX_FIELD_EQ(inName,"OemClear") ) { outValue = OemClear; return true;  }
		if (HX_FIELD_EQ(inName,"PadRight") ) { outValue = PadRight; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"Modifiers") ) { outValue = Modifiers; return true;  }
		if (HX_FIELD_EQ(inName,"JunjaMode") ) { outValue = JunjaMode; return true;  }
		if (HX_FIELD_EQ(inName,"FinalMode") ) { outValue = FinalMode; return true;  }
		if (HX_FIELD_EQ(inName,"KanjiMode") ) { outValue = KanjiMode; return true;  }
		if (HX_FIELD_EQ(inName,"HanjaMode") ) { outValue = HanjaMode; return true;  }
		if (HX_FIELD_EQ(inName,"IMEAceept") ) { outValue = IMEAceept; return true;  }
		if (HX_FIELD_EQ(inName,"IMEAccept") ) { outValue = IMEAccept; return true;  }
		if (HX_FIELD_EQ(inName,"Separator") ) { outValue = Separator; return true;  }
		if (HX_FIELD_EQ(inName,"LShiftKey") ) { outValue = LShiftKey; return true;  }
		if (HX_FIELD_EQ(inName,"RShiftKey") ) { outValue = RShiftKey; return true;  }
		if (HX_FIELD_EQ(inName,"MediaStop") ) { outValue = MediaStop; return true;  }
		if (HX_FIELD_EQ(inName,"OemPeriod") ) { outValue = OemPeriod; return true;  }
		if (HX_FIELD_EQ(inName,"OemQuotes") ) { outValue = OemQuotes; return true;  }
		if (HX_FIELD_EQ(inName,"PadBottom") ) { outValue = PadBottom; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"ControlKey") ) { outValue = ControlKey; return true;  }
		if (HX_FIELD_EQ(inName,"HangulMode") ) { outValue = HangulMode; return true;  }
		if (HX_FIELD_EQ(inName,"IMEConvert") ) { outValue = IMEConvert; return true;  }
		if (HX_FIELD_EQ(inName,"VolumeMute") ) { outValue = VolumeMute; return true;  }
		if (HX_FIELD_EQ(inName,"VolumeDown") ) { outValue = VolumeDown; return true;  }
		if (HX_FIELD_EQ(inName,"LaunchMail") ) { outValue = LaunchMail; return true;  }
		if (HX_FIELD_EQ(inName,"ProcessKey") ) { outValue = ProcessKey; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"HanguelMode") ) { outValue = HanguelMode; return true;  }
		if (HX_FIELD_EQ(inName,"PrintScreen") ) { outValue = PrintScreen; return true;  }
		if (HX_FIELD_EQ(inName,"LControlKey") ) { outValue = LControlKey; return true;  }
		if (HX_FIELD_EQ(inName,"RControlKey") ) { outValue = RControlKey; return true;  }
		if (HX_FIELD_EQ(inName,"BrowserBack") ) { outValue = BrowserBack; return true;  }
		if (HX_FIELD_EQ(inName,"BrowserStop") ) { outValue = BrowserStop; return true;  }
		if (HX_FIELD_EQ(inName,"BrowserHome") ) { outValue = BrowserHome; return true;  }
		if (HX_FIELD_EQ(inName,"SelectMedia") ) { outValue = SelectMedia; return true;  }
		if (HX_FIELD_EQ(inName,"OemQuestion") ) { outValue = OemQuestion; return true;  }
		if (HX_FIELD_EQ(inName,"KeyCodeMask") ) { outValue = KeyCodeMask; return true;  }
		if (HX_FIELD_EQ(inName,"AltModifier") ) { outValue = AltModifier; return true;  }
		if (HX_FIELD_EQ(inName,"ButtonStart") ) { outValue = ButtonStart; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"OemSemicolon") ) { outValue = OemSemicolon; return true;  }
		if (HX_FIELD_EQ(inName,"OemBackslash") ) { outValue = OemBackslash; return true;  }
		if (HX_FIELD_EQ(inName,"LeftShoulder") ) { outValue = LeftShoulder; return true;  }
		if (HX_FIELD_EQ(inName,"ButtonSelect") ) { outValue = ButtonSelect; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"IMENonconvert") ) { outValue = IMENonconvert; return true;  }
		if (HX_FIELD_EQ(inName,"IMEModeChange") ) { outValue = IMEModeChange; return true;  }
		if (HX_FIELD_EQ(inName,"BrowserSearch") ) { outValue = BrowserSearch; return true;  }
		if (HX_FIELD_EQ(inName,"ShiftModifier") ) { outValue = ShiftModifier; return true;  }
		if (HX_FIELD_EQ(inName,"RightShoulder") ) { outValue = RightShoulder; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"BrowserForward") ) { outValue = BrowserForward; return true;  }
		if (HX_FIELD_EQ(inName,"BrowserRefresh") ) { outValue = BrowserRefresh; return true;  }
		if (HX_FIELD_EQ(inName,"MediaNextTrack") ) { outValue = MediaNextTrack; return true;  }
		if (HX_FIELD_EQ(inName,"MediaPlayPause") ) { outValue = MediaPlayPause; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"OemOpenBrackets") ) { outValue = OemOpenBrackets; return true;  }
		if (HX_FIELD_EQ(inName,"ControlModifier") ) { outValue = ControlModifier; return true;  }
		if (HX_FIELD_EQ(inName,"LeftAnalogueHor") ) { outValue = LeftAnalogueHor; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"BrowserFavorites") ) { outValue = BrowserFavorites; return true;  }
		if (HX_FIELD_EQ(inName,"OemCloseBrackets") ) { outValue = OemCloseBrackets; return true;  }
		if (HX_FIELD_EQ(inName,"LeftAnalogueVert") ) { outValue = LeftAnalogueVert; return true;  }
		if (HX_FIELD_EQ(inName,"RightAnalogueHor") ) { outValue = RightAnalogueHor; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"LeftAnalogueStick") ) { outValue = LeftAnalogueStick; return true;  }
		if (HX_FIELD_EQ(inName,"RightAnalogueVert") ) { outValue = RightAnalogueVert; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"MediaPreviousTrack") ) { outValue = MediaPreviousTrack; return true;  }
		if (HX_FIELD_EQ(inName,"LaunchApplication1") ) { outValue = LaunchApplication1; return true;  }
		if (HX_FIELD_EQ(inName,"LaunchApplication2") ) { outValue = LaunchApplication2; return true;  }
		if (HX_FIELD_EQ(inName,"LeftShoulderBottom") ) { outValue = LeftShoulderBottom; return true;  }
		if (HX_FIELD_EQ(inName,"RightAnalogueStick") ) { outValue = RightAnalogueStick; return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"RightShoulderBottom") ) { outValue = RightShoulderBottom; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &KeyCode_obj::Modifiers,HX_HCSTRING("Modifiers","\x1c","\xf1","\xea","\x79")},
	{hx::fsInt,(void *) &KeyCode_obj::None,HX_HCSTRING("None","\xd8","\x3e","\xe3","\x33")},
	{hx::fsInt,(void *) &KeyCode_obj::Mouse0,HX_HCSTRING("Mouse0","\x8b","\xbe","\xa2","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::Mouse1,HX_HCSTRING("Mouse1","\x8c","\xbe","\xa2","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::Cancel,HX_HCSTRING("Cancel","\x9a","\x61","\xc8","\xec")},
	{hx::fsInt,(void *) &KeyCode_obj::Mouse2,HX_HCSTRING("Mouse2","\x8d","\xbe","\xa2","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::Mouse3,HX_HCSTRING("Mouse3","\x8e","\xbe","\xa2","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::Mouse4,HX_HCSTRING("Mouse4","\x8f","\xbe","\xa2","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::Back,HX_HCSTRING("Back","\x47","\x06","\xea","\x2b")},
	{hx::fsInt,(void *) &KeyCode_obj::Tab,HX_HCSTRING("Tab","\x35","\x12","\x40","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::LineFeed,HX_HCSTRING("LineFeed","\x92","\xc9","\x93","\x5a")},
	{hx::fsInt,(void *) &KeyCode_obj::Clear,HX_HCSTRING("Clear","\x6d","\xe1","\x88","\xdb")},
	{hx::fsInt,(void *) &KeyCode_obj::Enter,HX_HCSTRING("Enter","\xf8","\xdc","\xb3","\x03")},
	{hx::fsInt,(void *) &KeyCode_obj::Return,HX_HCSTRING("Return","\xd0","\x18","\xc2","\x3d")},
	{hx::fsInt,(void *) &KeyCode_obj::ShiftKey,HX_HCSTRING("ShiftKey","\x5d","\x4e","\x51","\x73")},
	{hx::fsInt,(void *) &KeyCode_obj::ControlKey,HX_HCSTRING("ControlKey","\x62","\x92","\x56","\xfb")},
	{hx::fsInt,(void *) &KeyCode_obj::Alt,HX_HCSTRING("Alt","\x09","\xb1","\x31","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::Pause,HX_HCSTRING("Pause","\xd6","\x46","\x85","\x50")},
	{hx::fsInt,(void *) &KeyCode_obj::CapsLock,HX_HCSTRING("CapsLock","\xcc","\xc4","\x73","\xeb")},
	{hx::fsInt,(void *) &KeyCode_obj::Capital,HX_HCSTRING("Capital","\x88","\xce","\x5c","\x6d")},
	{hx::fsInt,(void *) &KeyCode_obj::KanaMode,HX_HCSTRING("KanaMode","\x6c","\x63","\xc3","\x8b")},
	{hx::fsInt,(void *) &KeyCode_obj::HanguelMode,HX_HCSTRING("HanguelMode","\x4d","\xfc","\xa7","\x87")},
	{hx::fsInt,(void *) &KeyCode_obj::HangulMode,HX_HCSTRING("HangulMode","\x6c","\x2e","\x7c","\x7b")},
	{hx::fsInt,(void *) &KeyCode_obj::JunjaMode,HX_HCSTRING("JunjaMode","\x1d","\x0d","\xfc","\x6a")},
	{hx::fsInt,(void *) &KeyCode_obj::FinalMode,HX_HCSTRING("FinalMode","\xd9","\x31","\x0b","\x2d")},
	{hx::fsInt,(void *) &KeyCode_obj::KanjiMode,HX_HCSTRING("KanjiMode","\xba","\x2f","\x31","\x61")},
	{hx::fsInt,(void *) &KeyCode_obj::HanjaMode,HX_HCSTRING("HanjaMode","\xaf","\x50","\x28","\x4d")},
	{hx::fsInt,(void *) &KeyCode_obj::Escape,HX_HCSTRING("Escape","\xa1","\xb7","\x6e","\x0f")},
	{hx::fsInt,(void *) &KeyCode_obj::IMEConvert,HX_HCSTRING("IMEConvert","\x12","\xac","\x8c","\x9a")},
	{hx::fsInt,(void *) &KeyCode_obj::IMENonconvert,HX_HCSTRING("IMENonconvert","\xc7","\xbf","\x3e","\x22")},
	{hx::fsInt,(void *) &KeyCode_obj::IMEAceept,HX_HCSTRING("IMEAceept","\x07","\xbb","\x39","\xd1")},
	{hx::fsInt,(void *) &KeyCode_obj::IMEAccept,HX_HCSTRING("IMEAccept","\xc9","\x4d","\xe7","\xcf")},
	{hx::fsInt,(void *) &KeyCode_obj::IMEModeChange,HX_HCSTRING("IMEModeChange","\x74","\xb4","\x30","\x5f")},
	{hx::fsInt,(void *) &KeyCode_obj::Space,HX_HCSTRING("Space","\xa6","\xfc","\x93","\x14")},
	{hx::fsInt,(void *) &KeyCode_obj::Prior,HX_HCSTRING("Prior","\xea","\xc8","\xb8","\x5b")},
	{hx::fsInt,(void *) &KeyCode_obj::PageUp,HX_HCSTRING("PageUp","\xaa","\x0a","\xcd","\x1a")},
	{hx::fsInt,(void *) &KeyCode_obj::Next,HX_HCSTRING("Next","\x13","\xb1","\xdb","\x33")},
	{hx::fsInt,(void *) &KeyCode_obj::PageDown,HX_HCSTRING("PageDown","\x71","\x8e","\xe7","\x24")},
	{hx::fsInt,(void *) &KeyCode_obj::End,HX_HCSTRING("End","\xbb","\xbb","\x34","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::Home,HX_HCSTRING("Home","\x3f","\xf6","\xeb","\x2f")},
	{hx::fsInt,(void *) &KeyCode_obj::Left,HX_HCSTRING("Left","\x27","\x34","\x89","\x32")},
	{hx::fsInt,(void *) &KeyCode_obj::Up,HX_HCSTRING("Up","\x7b","\x4a","\x00","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::Right,HX_HCSTRING("Right","\xbc","\x7b","\x91","\x7c")},
	{hx::fsInt,(void *) &KeyCode_obj::Down,HX_HCSTRING("Down","\x82","\x24","\x47","\x2d")},
	{hx::fsInt,(void *) &KeyCode_obj::Select,HX_HCSTRING("Select","\x1c","\x8f","\xc7","\x9e")},
	{hx::fsInt,(void *) &KeyCode_obj::Print,HX_HCSTRING("Print","\x0d","\xc8","\xb8","\x5b")},
	{hx::fsInt,(void *) &KeyCode_obj::Execute,HX_HCSTRING("Execute","\x15","\x32","\x5e","\x99")},
	{hx::fsInt,(void *) &KeyCode_obj::PrintScreen,HX_HCSTRING("PrintScreen","\x59","\x7f","\x07","\x53")},
	{hx::fsInt,(void *) &KeyCode_obj::Snapshot,HX_HCSTRING("Snapshot","\x64","\xd4","\x65","\xfb")},
	{hx::fsInt,(void *) &KeyCode_obj::Insert,HX_HCSTRING("Insert","\x59","\xb7","\x71","\xd2")},
	{hx::fsInt,(void *) &KeyCode_obj::Delete,HX_HCSTRING("Delete","\x4b","\x34","\x6d","\x9f")},
	{hx::fsInt,(void *) &KeyCode_obj::Help,HX_HCSTRING("Help","\xe1","\x5e","\xe4","\x2f")},
	{hx::fsInt,(void *) &KeyCode_obj::D0,HX_HCSTRING("D0","\x6c","\x3b","\x00","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::D1,HX_HCSTRING("D1","\x6d","\x3b","\x00","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::D2,HX_HCSTRING("D2","\x6e","\x3b","\x00","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::D3,HX_HCSTRING("D3","\x6f","\x3b","\x00","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::D4,HX_HCSTRING("D4","\x70","\x3b","\x00","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::D5,HX_HCSTRING("D5","\x71","\x3b","\x00","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::D6,HX_HCSTRING("D6","\x72","\x3b","\x00","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::D7,HX_HCSTRING("D7","\x73","\x3b","\x00","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::D8,HX_HCSTRING("D8","\x74","\x3b","\x00","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::D9,HX_HCSTRING("D9","\x75","\x3b","\x00","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::A,HX_HCSTRING("A","\x41","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::B,HX_HCSTRING("B","\x42","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::C,HX_HCSTRING("C","\x43","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::D,HX_HCSTRING("D","\x44","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::E,HX_HCSTRING("E","\x45","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::F,HX_HCSTRING("F","\x46","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::G,HX_HCSTRING("G","\x47","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::H,HX_HCSTRING("H","\x48","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::I,HX_HCSTRING("I","\x49","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::J,HX_HCSTRING("J","\x4a","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::K,HX_HCSTRING("K","\x4b","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::L,HX_HCSTRING("L","\x4c","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::M,HX_HCSTRING("M","\x4d","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::N,HX_HCSTRING("N","\x4e","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::O,HX_HCSTRING("O","\x4f","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::P,HX_HCSTRING("P","\x50","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::Q,HX_HCSTRING("Q","\x51","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::R,HX_HCSTRING("R","\x52","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::S,HX_HCSTRING("S","\x53","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::T,HX_HCSTRING("T","\x54","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::U,HX_HCSTRING("U","\x55","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::V,HX_HCSTRING("V","\x56","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::W,HX_HCSTRING("W","\x57","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::X,HX_HCSTRING("X","\x58","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::Y,HX_HCSTRING("Y","\x59","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::Z,HX_HCSTRING("Z","\x5a","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::LWin,HX_HCSTRING("LWin","\x30","\x97","\x7e","\x32")},
	{hx::fsInt,(void *) &KeyCode_obj::RWin,HX_HCSTRING("RWin","\xea","\xde","\x75","\x36")},
	{hx::fsInt,(void *) &KeyCode_obj::Apps,HX_HCSTRING("Apps","\xd2","\x3c","\x4c","\x2b")},
	{hx::fsInt,(void *) &KeyCode_obj::Sleep,HX_HCSTRING("Sleep","\xf7","\x2c","\xf2","\x11")},
	{hx::fsInt,(void *) &KeyCode_obj::NumPad0,HX_HCSTRING("NumPad0","\xc3","\xa4","\x23","\x6b")},
	{hx::fsInt,(void *) &KeyCode_obj::NumPad1,HX_HCSTRING("NumPad1","\xc4","\xa4","\x23","\x6b")},
	{hx::fsInt,(void *) &KeyCode_obj::NumPad2,HX_HCSTRING("NumPad2","\xc5","\xa4","\x23","\x6b")},
	{hx::fsInt,(void *) &KeyCode_obj::NumPad3,HX_HCSTRING("NumPad3","\xc6","\xa4","\x23","\x6b")},
	{hx::fsInt,(void *) &KeyCode_obj::NumPad4,HX_HCSTRING("NumPad4","\xc7","\xa4","\x23","\x6b")},
	{hx::fsInt,(void *) &KeyCode_obj::NumPad5,HX_HCSTRING("NumPad5","\xc8","\xa4","\x23","\x6b")},
	{hx::fsInt,(void *) &KeyCode_obj::NumPad6,HX_HCSTRING("NumPad6","\xc9","\xa4","\x23","\x6b")},
	{hx::fsInt,(void *) &KeyCode_obj::NumPad7,HX_HCSTRING("NumPad7","\xca","\xa4","\x23","\x6b")},
	{hx::fsInt,(void *) &KeyCode_obj::NumPad8,HX_HCSTRING("NumPad8","\xcb","\xa4","\x23","\x6b")},
	{hx::fsInt,(void *) &KeyCode_obj::NumPad9,HX_HCSTRING("NumPad9","\xcc","\xa4","\x23","\x6b")},
	{hx::fsInt,(void *) &KeyCode_obj::Multiply,HX_HCSTRING("Multiply","\x44","\x9e","\x3e","\x74")},
	{hx::fsInt,(void *) &KeyCode_obj::Add,HX_HCSTRING("Add","\x01","\xaa","\x31","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::Separator,HX_HCSTRING("Separator","\x45","\x40","\x52","\xd3")},
	{hx::fsInt,(void *) &KeyCode_obj::Subtract,HX_HCSTRING("Subtract","\x34","\x31","\xc3","\xd1")},
	{hx::fsInt,(void *) &KeyCode_obj::Decimal,HX_HCSTRING("Decimal","\x71","\xdc","\x24","\xb4")},
	{hx::fsInt,(void *) &KeyCode_obj::Divide,HX_HCSTRING("Divide","\x99","\xa3","\xa6","\xf3")},
	{hx::fsInt,(void *) &KeyCode_obj::F1,HX_HCSTRING("F1","\x2b","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::F2,HX_HCSTRING("F2","\x2c","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::F3,HX_HCSTRING("F3","\x2d","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::F4,HX_HCSTRING("F4","\x2e","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::F5,HX_HCSTRING("F5","\x2f","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::F6,HX_HCSTRING("F6","\x30","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::F7,HX_HCSTRING("F7","\x31","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::F8,HX_HCSTRING("F8","\x32","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::F9,HX_HCSTRING("F9","\x33","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::F10,HX_HCSTRING("F10","\xa5","\x48","\x35","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::F11,HX_HCSTRING("F11","\xa6","\x48","\x35","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::F12,HX_HCSTRING("F12","\xa7","\x48","\x35","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::F13,HX_HCSTRING("F13","\xa8","\x48","\x35","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::F14,HX_HCSTRING("F14","\xa9","\x48","\x35","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::F15,HX_HCSTRING("F15","\xaa","\x48","\x35","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::F16,HX_HCSTRING("F16","\xab","\x48","\x35","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::F17,HX_HCSTRING("F17","\xac","\x48","\x35","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::F18,HX_HCSTRING("F18","\xad","\x48","\x35","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::F19,HX_HCSTRING("F19","\xae","\x48","\x35","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::F20,HX_HCSTRING("F20","\x84","\x49","\x35","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::F21,HX_HCSTRING("F21","\x85","\x49","\x35","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::F22,HX_HCSTRING("F22","\x86","\x49","\x35","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::F23,HX_HCSTRING("F23","\x87","\x49","\x35","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::F24,HX_HCSTRING("F24","\x88","\x49","\x35","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::NumLock,HX_HCSTRING("NumLock","\x31","\x69","\x89","\x68")},
	{hx::fsInt,(void *) &KeyCode_obj::Scroll,HX_HCSTRING("Scroll","\x2d","\x4c","\xf9","\x7b")},
	{hx::fsInt,(void *) &KeyCode_obj::LShiftKey,HX_HCSTRING("LShiftKey","\xa9","\x7a","\xfc","\x12")},
	{hx::fsInt,(void *) &KeyCode_obj::RShiftKey,HX_HCSTRING("RShiftKey","\xaf","\xf0","\xa4","\x04")},
	{hx::fsInt,(void *) &KeyCode_obj::LControlKey,HX_HCSTRING("LControlKey","\xae","\x69","\x5e","\x3d")},
	{hx::fsInt,(void *) &KeyCode_obj::RControlKey,HX_HCSTRING("RControlKey","\x34","\xed","\x94","\x42")},
	{hx::fsInt,(void *) &KeyCode_obj::LAlt,HX_HCSTRING("LAlt","\x3d","\xe8","\x6d","\x32")},
	{hx::fsInt,(void *) &KeyCode_obj::RAlt,HX_HCSTRING("RAlt","\xf7","\x2f","\x65","\x36")},
	{hx::fsInt,(void *) &KeyCode_obj::BrowserBack,HX_HCSTRING("BrowserBack","\xcf","\x8d","\x68","\xc7")},
	{hx::fsInt,(void *) &KeyCode_obj::BrowserForward,HX_HCSTRING("BrowserForward","\x1d","\xe7","\x10","\x70")},
	{hx::fsInt,(void *) &KeyCode_obj::BrowserRefresh,HX_HCSTRING("BrowserRefresh","\x33","\xdf","\x66","\x77")},
	{hx::fsInt,(void *) &KeyCode_obj::BrowserStop,HX_HCSTRING("BrowserStop","\xaa","\xa3","\xb3","\xd2")},
	{hx::fsInt,(void *) &KeyCode_obj::BrowserSearch,HX_HCSTRING("BrowserSearch","\x10","\x8d","\x61","\xf5")},
	{hx::fsInt,(void *) &KeyCode_obj::BrowserFavorites,HX_HCSTRING("BrowserFavorites","\x2f","\xd0","\x10","\x5a")},
	{hx::fsInt,(void *) &KeyCode_obj::BrowserHome,HX_HCSTRING("BrowserHome","\xc7","\x7d","\x6a","\xcb")},
	{hx::fsInt,(void *) &KeyCode_obj::VolumeMute,HX_HCSTRING("VolumeMute","\xf3","\xbd","\xe5","\x21")},
	{hx::fsInt,(void *) &KeyCode_obj::VolumeDown,HX_HCSTRING("VolumeDown","\x7c","\x47","\xee","\x1b")},
	{hx::fsInt,(void *) &KeyCode_obj::VolumeUp,HX_HCSTRING("VolumeUp","\xf5","\xda","\x86","\x13")},
	{hx::fsInt,(void *) &KeyCode_obj::MediaNextTrack,HX_HCSTRING("MediaNextTrack","\x34","\x5b","\x83","\xd8")},
	{hx::fsInt,(void *) &KeyCode_obj::MediaPreviousTrack,HX_HCSTRING("MediaPreviousTrack","\x70","\xcb","\xf5","\x64")},
	{hx::fsInt,(void *) &KeyCode_obj::MediaStop,HX_HCSTRING("MediaStop","\xe6","\x42","\x72","\x4e")},
	{hx::fsInt,(void *) &KeyCode_obj::MediaPlayPause,HX_HCSTRING("MediaPlayPause","\xfe","\xb6","\x5a","\xf9")},
	{hx::fsInt,(void *) &KeyCode_obj::LaunchMail,HX_HCSTRING("LaunchMail","\x2a","\x00","\x0c","\xb0")},
	{hx::fsInt,(void *) &KeyCode_obj::SelectMedia,HX_HCSTRING("SelectMedia","\x28","\xa0","\x59","\x43")},
	{hx::fsInt,(void *) &KeyCode_obj::LaunchApplication1,HX_HCSTRING("LaunchApplication1","\xd4","\xad","\x12","\x55")},
	{hx::fsInt,(void *) &KeyCode_obj::LaunchApplication2,HX_HCSTRING("LaunchApplication2","\xd5","\xad","\x12","\x55")},
	{hx::fsInt,(void *) &KeyCode_obj::Oem1,HX_HCSTRING("Oem1","\xda","\xdd","\x84","\x34")},
	{hx::fsInt,(void *) &KeyCode_obj::OemSemicolon,HX_HCSTRING("OemSemicolon","\xba","\x24","\x2d","\xf1")},
	{hx::fsInt,(void *) &KeyCode_obj::Oemplus,HX_HCSTRING("Oemplus","\x51","\x91","\x32","\x44")},
	{hx::fsInt,(void *) &KeyCode_obj::Oemcomma,HX_HCSTRING("Oemcomma","\xfe","\x97","\xcc","\xed")},
	{hx::fsInt,(void *) &KeyCode_obj::OemMinus,HX_HCSTRING("OemMinus","\x79","\x56","\x05","\x3f")},
	{hx::fsInt,(void *) &KeyCode_obj::OemPeriod,HX_HCSTRING("OemPeriod","\xd8","\xd2","\xb9","\xcd")},
	{hx::fsInt,(void *) &KeyCode_obj::OemQuestion,HX_HCSTRING("OemQuestion","\xbd","\x70","\x30","\x73")},
	{hx::fsInt,(void *) &KeyCode_obj::Oem2,HX_HCSTRING("Oem2","\xdb","\xdd","\x84","\x34")},
	{hx::fsInt,(void *) &KeyCode_obj::Oemtilde,HX_HCSTRING("Oemtilde","\xc1","\x62","\xa4","\xb3")},
	{hx::fsInt,(void *) &KeyCode_obj::Oem3,HX_HCSTRING("Oem3","\xdc","\xdd","\x84","\x34")},
	{hx::fsInt,(void *) &KeyCode_obj::Oem4,HX_HCSTRING("Oem4","\xdd","\xdd","\x84","\x34")},
	{hx::fsInt,(void *) &KeyCode_obj::OemOpenBrackets,HX_HCSTRING("OemOpenBrackets","\x4c","\x64","\x5c","\xfb")},
	{hx::fsInt,(void *) &KeyCode_obj::OemPipe,HX_HCSTRING("OemPipe","\x45","\x72","\x09","\x2f")},
	{hx::fsInt,(void *) &KeyCode_obj::Oem5,HX_HCSTRING("Oem5","\xde","\xdd","\x84","\x34")},
	{hx::fsInt,(void *) &KeyCode_obj::Oem6,HX_HCSTRING("Oem6","\xdf","\xdd","\x84","\x34")},
	{hx::fsInt,(void *) &KeyCode_obj::OemCloseBrackets,HX_HCSTRING("OemCloseBrackets","\x2c","\xb0","\x15","\xf0")},
	{hx::fsInt,(void *) &KeyCode_obj::Oem7,HX_HCSTRING("Oem7","\xe0","\xdd","\x84","\x34")},
	{hx::fsInt,(void *) &KeyCode_obj::OemQuotes,HX_HCSTRING("OemQuotes","\x8e","\x23","\x8b","\x68")},
	{hx::fsInt,(void *) &KeyCode_obj::Oem8,HX_HCSTRING("Oem8","\xe1","\xdd","\x84","\x34")},
	{hx::fsInt,(void *) &KeyCode_obj::Oem102,HX_HCSTRING("Oem102","\x5c","\xb2","\xdb","\x05")},
	{hx::fsInt,(void *) &KeyCode_obj::OemBackslash,HX_HCSTRING("OemBackslash","\x3f","\xc7","\xa0","\x6b")},
	{hx::fsInt,(void *) &KeyCode_obj::ProcessKey,HX_HCSTRING("ProcessKey","\x90","\x92","\xcf","\xcd")},
	{hx::fsInt,(void *) &KeyCode_obj::Packet,HX_HCSTRING("Packet","\xa8","\xcb","\x2c","\x18")},
	{hx::fsInt,(void *) &KeyCode_obj::Attn,HX_HCSTRING("Attn","\x4d","\x49","\x4f","\x2b")},
	{hx::fsInt,(void *) &KeyCode_obj::Crsel,HX_HCSTRING("Crsel","\x2b","\xcc","\x8a","\xdf")},
	{hx::fsInt,(void *) &KeyCode_obj::Exsel,HX_HCSTRING("Exsel","\xe7","\x3c","\x4f","\x0a")},
	{hx::fsInt,(void *) &KeyCode_obj::EraseEof,HX_HCSTRING("EraseEof","\x96","\xa3","\xd1","\x31")},
	{hx::fsInt,(void *) &KeyCode_obj::Play,HX_HCSTRING("Play","\x14","\x5a","\x33","\x35")},
	{hx::fsInt,(void *) &KeyCode_obj::Zoom,HX_HCSTRING("Zoom","\x33","\xcf","\xd1","\x3b")},
	{hx::fsInt,(void *) &KeyCode_obj::NoName,HX_HCSTRING("NoName","\x4c","\x27","\x29","\x4d")},
	{hx::fsInt,(void *) &KeyCode_obj::Pa1,HX_HCSTRING("Pa1","\x00","\x09","\x3d","\x00")},
	{hx::fsInt,(void *) &KeyCode_obj::OemClear,HX_HCSTRING("OemClear","\x96","\x47","\xf8","\x7e")},
	{hx::fsInt,(void *) &KeyCode_obj::KeyCodeMask,HX_HCSTRING("KeyCodeMask","\x58","\xcd","\xff","\xa8")},
	{hx::fsInt,(void *) &KeyCode_obj::ShiftModifier,HX_HCSTRING("ShiftModifier","\xd9","\x25","\xf0","\x51")},
	{hx::fsInt,(void *) &KeyCode_obj::ControlModifier,HX_HCSTRING("ControlModifier","\xb4","\x2f","\x1d","\xdc")},
	{hx::fsInt,(void *) &KeyCode_obj::AltModifier,HX_HCSTRING("AltModifier","\x80","\xf9","\xc0","\x5d")},
	{hx::fsInt,(void *) &KeyCode_obj::Face1,HX_HCSTRING("Face1","\xd4","\xc4","\x75","\x8e")},
	{hx::fsInt,(void *) &KeyCode_obj::Face2,HX_HCSTRING("Face2","\xd5","\xc4","\x75","\x8e")},
	{hx::fsInt,(void *) &KeyCode_obj::Face3,HX_HCSTRING("Face3","\xd6","\xc4","\x75","\x8e")},
	{hx::fsInt,(void *) &KeyCode_obj::Face4,HX_HCSTRING("Face4","\xd7","\xc4","\x75","\x8e")},
	{hx::fsInt,(void *) &KeyCode_obj::ButtonA,HX_HCSTRING("ButtonA","\xef","\x79","\xc6","\x97")},
	{hx::fsInt,(void *) &KeyCode_obj::ButtonB,HX_HCSTRING("ButtonB","\xf0","\x79","\xc6","\x97")},
	{hx::fsInt,(void *) &KeyCode_obj::ButtonX,HX_HCSTRING("ButtonX","\x06","\x7a","\xc6","\x97")},
	{hx::fsInt,(void *) &KeyCode_obj::ButtonY,HX_HCSTRING("ButtonY","\x07","\x7a","\xc6","\x97")},
	{hx::fsInt,(void *) &KeyCode_obj::LeftShoulder,HX_HCSTRING("LeftShoulder","\xa7","\xa2","\xe5","\x06")},
	{hx::fsInt,(void *) &KeyCode_obj::RightShoulder,HX_HCSTRING("RightShoulder","\x3c","\x07","\x8f","\x53")},
	{hx::fsInt,(void *) &KeyCode_obj::LeftShoulderBottom,HX_HCSTRING("LeftShoulderBottom","\xf2","\xf4","\x58","\x10")},
	{hx::fsInt,(void *) &KeyCode_obj::RightShoulderBottom,HX_HCSTRING("RightShoulderBottom","\x47","\x77","\x23","\x58")},
	{hx::fsInt,(void *) &KeyCode_obj::ButtonSelect,HX_HCSTRING("ButtonSelect","\xae","\x3e","\x03","\xda")},
	{hx::fsInt,(void *) &KeyCode_obj::ButtonStart,HX_HCSTRING("ButtonStart","\xf0","\xcc","\xe8","\xb5")},
	{hx::fsInt,(void *) &KeyCode_obj::LeftAnalogueStick,HX_HCSTRING("LeftAnalogueStick","\x09","\x40","\x92","\xe7")},
	{hx::fsInt,(void *) &KeyCode_obj::RightAnalogueStick,HX_HCSTRING("RightAnalogueStick","\x54","\x1f","\x8b","\x59")},
	{hx::fsInt,(void *) &KeyCode_obj::PadTop,HX_HCSTRING("PadTop","\x22","\x97","\xc4","\x18")},
	{hx::fsInt,(void *) &KeyCode_obj::PadBottom,HX_HCSTRING("PadBottom","\x7e","\xcc","\xfd","\x6f")},
	{hx::fsInt,(void *) &KeyCode_obj::PadLeft,HX_HCSTRING("PadLeft","\xda","\x52","\xee","\x8d")},
	{hx::fsInt,(void *) &KeyCode_obj::PadRight,HX_HCSTRING("PadRight","\xa9","\x39","\xa7","\x19")},
	{hx::fsInt,(void *) &KeyCode_obj::LeftAnalogueHor,HX_HCSTRING("LeftAnalogueHor","\x04","\xc2","\x2a","\xdd")},
	{hx::fsInt,(void *) &KeyCode_obj::LeftAnalogueVert,HX_HCSTRING("LeftAnalogueVert","\x18","\x68","\x78","\xb1")},
	{hx::fsInt,(void *) &KeyCode_obj::RightAnalogueHor,HX_HCSTRING("RightAnalogueHor","\x8f","\xa8","\xf4","\x9b")},
	{hx::fsInt,(void *) &KeyCode_obj::RightAnalogueVert,HX_HCSTRING("RightAnalogueVert","\x2d","\x3b","\x58","\xe3")},
	{hx::fsInt,(void *) &KeyCode_obj::Touch0,HX_HCSTRING("Touch0","\xb1","\x23","\x16","\xcd")},
	{hx::fsInt,(void *) &KeyCode_obj::Touch1,HX_HCSTRING("Touch1","\xb2","\x23","\x16","\xcd")},
	{hx::fsInt,(void *) &KeyCode_obj::Touch2,HX_HCSTRING("Touch2","\xb3","\x23","\x16","\xcd")},
	{hx::fsInt,(void *) &KeyCode_obj::Touch3,HX_HCSTRING("Touch3","\xb4","\x23","\x16","\xcd")},
	{hx::fsInt,(void *) &KeyCode_obj::Touch4,HX_HCSTRING("Touch4","\xb5","\x23","\x16","\xcd")},
	{hx::fsInt,(void *) &KeyCode_obj::Touch5,HX_HCSTRING("Touch5","\xb6","\x23","\x16","\xcd")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(KeyCode_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Modifiers,"Modifiers");
	HX_MARK_MEMBER_NAME(KeyCode_obj::None,"None");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Mouse0,"Mouse0");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Mouse1,"Mouse1");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Cancel,"Cancel");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Mouse2,"Mouse2");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Mouse3,"Mouse3");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Mouse4,"Mouse4");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Back,"Back");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Tab,"Tab");
	HX_MARK_MEMBER_NAME(KeyCode_obj::LineFeed,"LineFeed");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Clear,"Clear");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Enter,"Enter");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Return,"Return");
	HX_MARK_MEMBER_NAME(KeyCode_obj::ShiftKey,"ShiftKey");
	HX_MARK_MEMBER_NAME(KeyCode_obj::ControlKey,"ControlKey");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Alt,"Alt");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Pause,"Pause");
	HX_MARK_MEMBER_NAME(KeyCode_obj::CapsLock,"CapsLock");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Capital,"Capital");
	HX_MARK_MEMBER_NAME(KeyCode_obj::KanaMode,"KanaMode");
	HX_MARK_MEMBER_NAME(KeyCode_obj::HanguelMode,"HanguelMode");
	HX_MARK_MEMBER_NAME(KeyCode_obj::HangulMode,"HangulMode");
	HX_MARK_MEMBER_NAME(KeyCode_obj::JunjaMode,"JunjaMode");
	HX_MARK_MEMBER_NAME(KeyCode_obj::FinalMode,"FinalMode");
	HX_MARK_MEMBER_NAME(KeyCode_obj::KanjiMode,"KanjiMode");
	HX_MARK_MEMBER_NAME(KeyCode_obj::HanjaMode,"HanjaMode");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Escape,"Escape");
	HX_MARK_MEMBER_NAME(KeyCode_obj::IMEConvert,"IMEConvert");
	HX_MARK_MEMBER_NAME(KeyCode_obj::IMENonconvert,"IMENonconvert");
	HX_MARK_MEMBER_NAME(KeyCode_obj::IMEAceept,"IMEAceept");
	HX_MARK_MEMBER_NAME(KeyCode_obj::IMEAccept,"IMEAccept");
	HX_MARK_MEMBER_NAME(KeyCode_obj::IMEModeChange,"IMEModeChange");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Space,"Space");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Prior,"Prior");
	HX_MARK_MEMBER_NAME(KeyCode_obj::PageUp,"PageUp");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Next,"Next");
	HX_MARK_MEMBER_NAME(KeyCode_obj::PageDown,"PageDown");
	HX_MARK_MEMBER_NAME(KeyCode_obj::End,"End");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Home,"Home");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Left,"Left");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Up,"Up");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Right,"Right");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Down,"Down");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Select,"Select");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Print,"Print");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Execute,"Execute");
	HX_MARK_MEMBER_NAME(KeyCode_obj::PrintScreen,"PrintScreen");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Snapshot,"Snapshot");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Insert,"Insert");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Delete,"Delete");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Help,"Help");
	HX_MARK_MEMBER_NAME(KeyCode_obj::D0,"D0");
	HX_MARK_MEMBER_NAME(KeyCode_obj::D1,"D1");
	HX_MARK_MEMBER_NAME(KeyCode_obj::D2,"D2");
	HX_MARK_MEMBER_NAME(KeyCode_obj::D3,"D3");
	HX_MARK_MEMBER_NAME(KeyCode_obj::D4,"D4");
	HX_MARK_MEMBER_NAME(KeyCode_obj::D5,"D5");
	HX_MARK_MEMBER_NAME(KeyCode_obj::D6,"D6");
	HX_MARK_MEMBER_NAME(KeyCode_obj::D7,"D7");
	HX_MARK_MEMBER_NAME(KeyCode_obj::D8,"D8");
	HX_MARK_MEMBER_NAME(KeyCode_obj::D9,"D9");
	HX_MARK_MEMBER_NAME(KeyCode_obj::A,"A");
	HX_MARK_MEMBER_NAME(KeyCode_obj::B,"B");
	HX_MARK_MEMBER_NAME(KeyCode_obj::C,"C");
	HX_MARK_MEMBER_NAME(KeyCode_obj::D,"D");
	HX_MARK_MEMBER_NAME(KeyCode_obj::E,"E");
	HX_MARK_MEMBER_NAME(KeyCode_obj::F,"F");
	HX_MARK_MEMBER_NAME(KeyCode_obj::G,"G");
	HX_MARK_MEMBER_NAME(KeyCode_obj::H,"H");
	HX_MARK_MEMBER_NAME(KeyCode_obj::I,"I");
	HX_MARK_MEMBER_NAME(KeyCode_obj::J,"J");
	HX_MARK_MEMBER_NAME(KeyCode_obj::K,"K");
	HX_MARK_MEMBER_NAME(KeyCode_obj::L,"L");
	HX_MARK_MEMBER_NAME(KeyCode_obj::M,"M");
	HX_MARK_MEMBER_NAME(KeyCode_obj::N,"N");
	HX_MARK_MEMBER_NAME(KeyCode_obj::O,"O");
	HX_MARK_MEMBER_NAME(KeyCode_obj::P,"P");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Q,"Q");
	HX_MARK_MEMBER_NAME(KeyCode_obj::R,"R");
	HX_MARK_MEMBER_NAME(KeyCode_obj::S,"S");
	HX_MARK_MEMBER_NAME(KeyCode_obj::T,"T");
	HX_MARK_MEMBER_NAME(KeyCode_obj::U,"U");
	HX_MARK_MEMBER_NAME(KeyCode_obj::V,"V");
	HX_MARK_MEMBER_NAME(KeyCode_obj::W,"W");
	HX_MARK_MEMBER_NAME(KeyCode_obj::X,"X");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Y,"Y");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Z,"Z");
	HX_MARK_MEMBER_NAME(KeyCode_obj::LWin,"LWin");
	HX_MARK_MEMBER_NAME(KeyCode_obj::RWin,"RWin");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Apps,"Apps");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Sleep,"Sleep");
	HX_MARK_MEMBER_NAME(KeyCode_obj::NumPad0,"NumPad0");
	HX_MARK_MEMBER_NAME(KeyCode_obj::NumPad1,"NumPad1");
	HX_MARK_MEMBER_NAME(KeyCode_obj::NumPad2,"NumPad2");
	HX_MARK_MEMBER_NAME(KeyCode_obj::NumPad3,"NumPad3");
	HX_MARK_MEMBER_NAME(KeyCode_obj::NumPad4,"NumPad4");
	HX_MARK_MEMBER_NAME(KeyCode_obj::NumPad5,"NumPad5");
	HX_MARK_MEMBER_NAME(KeyCode_obj::NumPad6,"NumPad6");
	HX_MARK_MEMBER_NAME(KeyCode_obj::NumPad7,"NumPad7");
	HX_MARK_MEMBER_NAME(KeyCode_obj::NumPad8,"NumPad8");
	HX_MARK_MEMBER_NAME(KeyCode_obj::NumPad9,"NumPad9");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Multiply,"Multiply");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Add,"Add");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Separator,"Separator");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Subtract,"Subtract");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Decimal,"Decimal");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Divide,"Divide");
	HX_MARK_MEMBER_NAME(KeyCode_obj::F1,"F1");
	HX_MARK_MEMBER_NAME(KeyCode_obj::F2,"F2");
	HX_MARK_MEMBER_NAME(KeyCode_obj::F3,"F3");
	HX_MARK_MEMBER_NAME(KeyCode_obj::F4,"F4");
	HX_MARK_MEMBER_NAME(KeyCode_obj::F5,"F5");
	HX_MARK_MEMBER_NAME(KeyCode_obj::F6,"F6");
	HX_MARK_MEMBER_NAME(KeyCode_obj::F7,"F7");
	HX_MARK_MEMBER_NAME(KeyCode_obj::F8,"F8");
	HX_MARK_MEMBER_NAME(KeyCode_obj::F9,"F9");
	HX_MARK_MEMBER_NAME(KeyCode_obj::F10,"F10");
	HX_MARK_MEMBER_NAME(KeyCode_obj::F11,"F11");
	HX_MARK_MEMBER_NAME(KeyCode_obj::F12,"F12");
	HX_MARK_MEMBER_NAME(KeyCode_obj::F13,"F13");
	HX_MARK_MEMBER_NAME(KeyCode_obj::F14,"F14");
	HX_MARK_MEMBER_NAME(KeyCode_obj::F15,"F15");
	HX_MARK_MEMBER_NAME(KeyCode_obj::F16,"F16");
	HX_MARK_MEMBER_NAME(KeyCode_obj::F17,"F17");
	HX_MARK_MEMBER_NAME(KeyCode_obj::F18,"F18");
	HX_MARK_MEMBER_NAME(KeyCode_obj::F19,"F19");
	HX_MARK_MEMBER_NAME(KeyCode_obj::F20,"F20");
	HX_MARK_MEMBER_NAME(KeyCode_obj::F21,"F21");
	HX_MARK_MEMBER_NAME(KeyCode_obj::F22,"F22");
	HX_MARK_MEMBER_NAME(KeyCode_obj::F23,"F23");
	HX_MARK_MEMBER_NAME(KeyCode_obj::F24,"F24");
	HX_MARK_MEMBER_NAME(KeyCode_obj::NumLock,"NumLock");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Scroll,"Scroll");
	HX_MARK_MEMBER_NAME(KeyCode_obj::LShiftKey,"LShiftKey");
	HX_MARK_MEMBER_NAME(KeyCode_obj::RShiftKey,"RShiftKey");
	HX_MARK_MEMBER_NAME(KeyCode_obj::LControlKey,"LControlKey");
	HX_MARK_MEMBER_NAME(KeyCode_obj::RControlKey,"RControlKey");
	HX_MARK_MEMBER_NAME(KeyCode_obj::LAlt,"LAlt");
	HX_MARK_MEMBER_NAME(KeyCode_obj::RAlt,"RAlt");
	HX_MARK_MEMBER_NAME(KeyCode_obj::BrowserBack,"BrowserBack");
	HX_MARK_MEMBER_NAME(KeyCode_obj::BrowserForward,"BrowserForward");
	HX_MARK_MEMBER_NAME(KeyCode_obj::BrowserRefresh,"BrowserRefresh");
	HX_MARK_MEMBER_NAME(KeyCode_obj::BrowserStop,"BrowserStop");
	HX_MARK_MEMBER_NAME(KeyCode_obj::BrowserSearch,"BrowserSearch");
	HX_MARK_MEMBER_NAME(KeyCode_obj::BrowserFavorites,"BrowserFavorites");
	HX_MARK_MEMBER_NAME(KeyCode_obj::BrowserHome,"BrowserHome");
	HX_MARK_MEMBER_NAME(KeyCode_obj::VolumeMute,"VolumeMute");
	HX_MARK_MEMBER_NAME(KeyCode_obj::VolumeDown,"VolumeDown");
	HX_MARK_MEMBER_NAME(KeyCode_obj::VolumeUp,"VolumeUp");
	HX_MARK_MEMBER_NAME(KeyCode_obj::MediaNextTrack,"MediaNextTrack");
	HX_MARK_MEMBER_NAME(KeyCode_obj::MediaPreviousTrack,"MediaPreviousTrack");
	HX_MARK_MEMBER_NAME(KeyCode_obj::MediaStop,"MediaStop");
	HX_MARK_MEMBER_NAME(KeyCode_obj::MediaPlayPause,"MediaPlayPause");
	HX_MARK_MEMBER_NAME(KeyCode_obj::LaunchMail,"LaunchMail");
	HX_MARK_MEMBER_NAME(KeyCode_obj::SelectMedia,"SelectMedia");
	HX_MARK_MEMBER_NAME(KeyCode_obj::LaunchApplication1,"LaunchApplication1");
	HX_MARK_MEMBER_NAME(KeyCode_obj::LaunchApplication2,"LaunchApplication2");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Oem1,"Oem1");
	HX_MARK_MEMBER_NAME(KeyCode_obj::OemSemicolon,"OemSemicolon");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Oemplus,"Oemplus");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Oemcomma,"Oemcomma");
	HX_MARK_MEMBER_NAME(KeyCode_obj::OemMinus,"OemMinus");
	HX_MARK_MEMBER_NAME(KeyCode_obj::OemPeriod,"OemPeriod");
	HX_MARK_MEMBER_NAME(KeyCode_obj::OemQuestion,"OemQuestion");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Oem2,"Oem2");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Oemtilde,"Oemtilde");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Oem3,"Oem3");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Oem4,"Oem4");
	HX_MARK_MEMBER_NAME(KeyCode_obj::OemOpenBrackets,"OemOpenBrackets");
	HX_MARK_MEMBER_NAME(KeyCode_obj::OemPipe,"OemPipe");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Oem5,"Oem5");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Oem6,"Oem6");
	HX_MARK_MEMBER_NAME(KeyCode_obj::OemCloseBrackets,"OemCloseBrackets");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Oem7,"Oem7");
	HX_MARK_MEMBER_NAME(KeyCode_obj::OemQuotes,"OemQuotes");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Oem8,"Oem8");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Oem102,"Oem102");
	HX_MARK_MEMBER_NAME(KeyCode_obj::OemBackslash,"OemBackslash");
	HX_MARK_MEMBER_NAME(KeyCode_obj::ProcessKey,"ProcessKey");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Packet,"Packet");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Attn,"Attn");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Crsel,"Crsel");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Exsel,"Exsel");
	HX_MARK_MEMBER_NAME(KeyCode_obj::EraseEof,"EraseEof");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Play,"Play");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Zoom,"Zoom");
	HX_MARK_MEMBER_NAME(KeyCode_obj::NoName,"NoName");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Pa1,"Pa1");
	HX_MARK_MEMBER_NAME(KeyCode_obj::OemClear,"OemClear");
	HX_MARK_MEMBER_NAME(KeyCode_obj::KeyCodeMask,"KeyCodeMask");
	HX_MARK_MEMBER_NAME(KeyCode_obj::ShiftModifier,"ShiftModifier");
	HX_MARK_MEMBER_NAME(KeyCode_obj::ControlModifier,"ControlModifier");
	HX_MARK_MEMBER_NAME(KeyCode_obj::AltModifier,"AltModifier");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Face1,"Face1");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Face2,"Face2");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Face3,"Face3");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Face4,"Face4");
	HX_MARK_MEMBER_NAME(KeyCode_obj::ButtonA,"ButtonA");
	HX_MARK_MEMBER_NAME(KeyCode_obj::ButtonB,"ButtonB");
	HX_MARK_MEMBER_NAME(KeyCode_obj::ButtonX,"ButtonX");
	HX_MARK_MEMBER_NAME(KeyCode_obj::ButtonY,"ButtonY");
	HX_MARK_MEMBER_NAME(KeyCode_obj::LeftShoulder,"LeftShoulder");
	HX_MARK_MEMBER_NAME(KeyCode_obj::RightShoulder,"RightShoulder");
	HX_MARK_MEMBER_NAME(KeyCode_obj::LeftShoulderBottom,"LeftShoulderBottom");
	HX_MARK_MEMBER_NAME(KeyCode_obj::RightShoulderBottom,"RightShoulderBottom");
	HX_MARK_MEMBER_NAME(KeyCode_obj::ButtonSelect,"ButtonSelect");
	HX_MARK_MEMBER_NAME(KeyCode_obj::ButtonStart,"ButtonStart");
	HX_MARK_MEMBER_NAME(KeyCode_obj::LeftAnalogueStick,"LeftAnalogueStick");
	HX_MARK_MEMBER_NAME(KeyCode_obj::RightAnalogueStick,"RightAnalogueStick");
	HX_MARK_MEMBER_NAME(KeyCode_obj::PadTop,"PadTop");
	HX_MARK_MEMBER_NAME(KeyCode_obj::PadBottom,"PadBottom");
	HX_MARK_MEMBER_NAME(KeyCode_obj::PadLeft,"PadLeft");
	HX_MARK_MEMBER_NAME(KeyCode_obj::PadRight,"PadRight");
	HX_MARK_MEMBER_NAME(KeyCode_obj::LeftAnalogueHor,"LeftAnalogueHor");
	HX_MARK_MEMBER_NAME(KeyCode_obj::LeftAnalogueVert,"LeftAnalogueVert");
	HX_MARK_MEMBER_NAME(KeyCode_obj::RightAnalogueHor,"RightAnalogueHor");
	HX_MARK_MEMBER_NAME(KeyCode_obj::RightAnalogueVert,"RightAnalogueVert");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Touch0,"Touch0");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Touch1,"Touch1");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Touch2,"Touch2");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Touch3,"Touch3");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Touch4,"Touch4");
	HX_MARK_MEMBER_NAME(KeyCode_obj::Touch5,"Touch5");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(KeyCode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Modifiers,"Modifiers");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::None,"None");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Mouse0,"Mouse0");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Mouse1,"Mouse1");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Cancel,"Cancel");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Mouse2,"Mouse2");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Mouse3,"Mouse3");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Mouse4,"Mouse4");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Back,"Back");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Tab,"Tab");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::LineFeed,"LineFeed");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Clear,"Clear");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Enter,"Enter");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Return,"Return");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::ShiftKey,"ShiftKey");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::ControlKey,"ControlKey");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Alt,"Alt");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Pause,"Pause");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::CapsLock,"CapsLock");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Capital,"Capital");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::KanaMode,"KanaMode");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::HanguelMode,"HanguelMode");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::HangulMode,"HangulMode");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::JunjaMode,"JunjaMode");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::FinalMode,"FinalMode");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::KanjiMode,"KanjiMode");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::HanjaMode,"HanjaMode");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Escape,"Escape");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::IMEConvert,"IMEConvert");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::IMENonconvert,"IMENonconvert");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::IMEAceept,"IMEAceept");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::IMEAccept,"IMEAccept");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::IMEModeChange,"IMEModeChange");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Space,"Space");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Prior,"Prior");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::PageUp,"PageUp");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Next,"Next");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::PageDown,"PageDown");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::End,"End");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Home,"Home");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Left,"Left");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Up,"Up");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Right,"Right");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Down,"Down");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Select,"Select");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Print,"Print");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Execute,"Execute");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::PrintScreen,"PrintScreen");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Snapshot,"Snapshot");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Insert,"Insert");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Delete,"Delete");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Help,"Help");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::D0,"D0");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::D1,"D1");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::D2,"D2");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::D3,"D3");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::D4,"D4");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::D5,"D5");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::D6,"D6");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::D7,"D7");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::D8,"D8");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::D9,"D9");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::A,"A");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::B,"B");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::C,"C");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::D,"D");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::E,"E");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::F,"F");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::G,"G");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::H,"H");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::I,"I");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::J,"J");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::K,"K");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::L,"L");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::M,"M");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::N,"N");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::O,"O");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::P,"P");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Q,"Q");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::R,"R");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::S,"S");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::T,"T");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::U,"U");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::V,"V");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::W,"W");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::X,"X");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Y,"Y");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Z,"Z");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::LWin,"LWin");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::RWin,"RWin");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Apps,"Apps");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Sleep,"Sleep");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::NumPad0,"NumPad0");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::NumPad1,"NumPad1");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::NumPad2,"NumPad2");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::NumPad3,"NumPad3");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::NumPad4,"NumPad4");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::NumPad5,"NumPad5");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::NumPad6,"NumPad6");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::NumPad7,"NumPad7");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::NumPad8,"NumPad8");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::NumPad9,"NumPad9");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Multiply,"Multiply");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Add,"Add");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Separator,"Separator");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Subtract,"Subtract");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Decimal,"Decimal");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Divide,"Divide");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::F1,"F1");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::F2,"F2");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::F3,"F3");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::F4,"F4");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::F5,"F5");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::F6,"F6");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::F7,"F7");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::F8,"F8");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::F9,"F9");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::F10,"F10");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::F11,"F11");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::F12,"F12");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::F13,"F13");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::F14,"F14");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::F15,"F15");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::F16,"F16");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::F17,"F17");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::F18,"F18");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::F19,"F19");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::F20,"F20");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::F21,"F21");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::F22,"F22");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::F23,"F23");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::F24,"F24");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::NumLock,"NumLock");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Scroll,"Scroll");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::LShiftKey,"LShiftKey");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::RShiftKey,"RShiftKey");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::LControlKey,"LControlKey");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::RControlKey,"RControlKey");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::LAlt,"LAlt");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::RAlt,"RAlt");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::BrowserBack,"BrowserBack");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::BrowserForward,"BrowserForward");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::BrowserRefresh,"BrowserRefresh");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::BrowserStop,"BrowserStop");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::BrowserSearch,"BrowserSearch");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::BrowserFavorites,"BrowserFavorites");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::BrowserHome,"BrowserHome");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::VolumeMute,"VolumeMute");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::VolumeDown,"VolumeDown");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::VolumeUp,"VolumeUp");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::MediaNextTrack,"MediaNextTrack");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::MediaPreviousTrack,"MediaPreviousTrack");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::MediaStop,"MediaStop");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::MediaPlayPause,"MediaPlayPause");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::LaunchMail,"LaunchMail");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::SelectMedia,"SelectMedia");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::LaunchApplication1,"LaunchApplication1");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::LaunchApplication2,"LaunchApplication2");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Oem1,"Oem1");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::OemSemicolon,"OemSemicolon");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Oemplus,"Oemplus");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Oemcomma,"Oemcomma");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::OemMinus,"OemMinus");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::OemPeriod,"OemPeriod");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::OemQuestion,"OemQuestion");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Oem2,"Oem2");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Oemtilde,"Oemtilde");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Oem3,"Oem3");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Oem4,"Oem4");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::OemOpenBrackets,"OemOpenBrackets");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::OemPipe,"OemPipe");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Oem5,"Oem5");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Oem6,"Oem6");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::OemCloseBrackets,"OemCloseBrackets");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Oem7,"Oem7");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::OemQuotes,"OemQuotes");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Oem8,"Oem8");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Oem102,"Oem102");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::OemBackslash,"OemBackslash");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::ProcessKey,"ProcessKey");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Packet,"Packet");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Attn,"Attn");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Crsel,"Crsel");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Exsel,"Exsel");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::EraseEof,"EraseEof");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Play,"Play");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Zoom,"Zoom");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::NoName,"NoName");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Pa1,"Pa1");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::OemClear,"OemClear");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::KeyCodeMask,"KeyCodeMask");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::ShiftModifier,"ShiftModifier");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::ControlModifier,"ControlModifier");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::AltModifier,"AltModifier");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Face1,"Face1");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Face2,"Face2");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Face3,"Face3");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Face4,"Face4");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::ButtonA,"ButtonA");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::ButtonB,"ButtonB");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::ButtonX,"ButtonX");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::ButtonY,"ButtonY");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::LeftShoulder,"LeftShoulder");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::RightShoulder,"RightShoulder");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::LeftShoulderBottom,"LeftShoulderBottom");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::RightShoulderBottom,"RightShoulderBottom");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::ButtonSelect,"ButtonSelect");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::ButtonStart,"ButtonStart");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::LeftAnalogueStick,"LeftAnalogueStick");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::RightAnalogueStick,"RightAnalogueStick");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::PadTop,"PadTop");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::PadBottom,"PadBottom");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::PadLeft,"PadLeft");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::PadRight,"PadRight");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::LeftAnalogueHor,"LeftAnalogueHor");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::LeftAnalogueVert,"LeftAnalogueVert");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::RightAnalogueHor,"RightAnalogueHor");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::RightAnalogueVert,"RightAnalogueVert");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Touch0,"Touch0");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Touch1,"Touch1");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Touch2,"Touch2");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Touch3,"Touch3");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Touch4,"Touch4");
	HX_VISIT_MEMBER_NAME(KeyCode_obj::Touch5,"Touch5");
};

#endif

hx::Class KeyCode_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("Modifiers","\x1c","\xf1","\xea","\x79"),
	HX_HCSTRING("None","\xd8","\x3e","\xe3","\x33"),
	HX_HCSTRING("Mouse0","\x8b","\xbe","\xa2","\x00"),
	HX_HCSTRING("Mouse1","\x8c","\xbe","\xa2","\x00"),
	HX_HCSTRING("Cancel","\x9a","\x61","\xc8","\xec"),
	HX_HCSTRING("Mouse2","\x8d","\xbe","\xa2","\x00"),
	HX_HCSTRING("Mouse3","\x8e","\xbe","\xa2","\x00"),
	HX_HCSTRING("Mouse4","\x8f","\xbe","\xa2","\x00"),
	HX_HCSTRING("Back","\x47","\x06","\xea","\x2b"),
	HX_HCSTRING("Tab","\x35","\x12","\x40","\x00"),
	HX_HCSTRING("LineFeed","\x92","\xc9","\x93","\x5a"),
	HX_HCSTRING("Clear","\x6d","\xe1","\x88","\xdb"),
	HX_HCSTRING("Enter","\xf8","\xdc","\xb3","\x03"),
	HX_HCSTRING("Return","\xd0","\x18","\xc2","\x3d"),
	HX_HCSTRING("ShiftKey","\x5d","\x4e","\x51","\x73"),
	HX_HCSTRING("ControlKey","\x62","\x92","\x56","\xfb"),
	HX_HCSTRING("Alt","\x09","\xb1","\x31","\x00"),
	HX_HCSTRING("Pause","\xd6","\x46","\x85","\x50"),
	HX_HCSTRING("CapsLock","\xcc","\xc4","\x73","\xeb"),
	HX_HCSTRING("Capital","\x88","\xce","\x5c","\x6d"),
	HX_HCSTRING("KanaMode","\x6c","\x63","\xc3","\x8b"),
	HX_HCSTRING("HanguelMode","\x4d","\xfc","\xa7","\x87"),
	HX_HCSTRING("HangulMode","\x6c","\x2e","\x7c","\x7b"),
	HX_HCSTRING("JunjaMode","\x1d","\x0d","\xfc","\x6a"),
	HX_HCSTRING("FinalMode","\xd9","\x31","\x0b","\x2d"),
	HX_HCSTRING("KanjiMode","\xba","\x2f","\x31","\x61"),
	HX_HCSTRING("HanjaMode","\xaf","\x50","\x28","\x4d"),
	HX_HCSTRING("Escape","\xa1","\xb7","\x6e","\x0f"),
	HX_HCSTRING("IMEConvert","\x12","\xac","\x8c","\x9a"),
	HX_HCSTRING("IMENonconvert","\xc7","\xbf","\x3e","\x22"),
	HX_HCSTRING("IMEAceept","\x07","\xbb","\x39","\xd1"),
	HX_HCSTRING("IMEAccept","\xc9","\x4d","\xe7","\xcf"),
	HX_HCSTRING("IMEModeChange","\x74","\xb4","\x30","\x5f"),
	HX_HCSTRING("Space","\xa6","\xfc","\x93","\x14"),
	HX_HCSTRING("Prior","\xea","\xc8","\xb8","\x5b"),
	HX_HCSTRING("PageUp","\xaa","\x0a","\xcd","\x1a"),
	HX_HCSTRING("Next","\x13","\xb1","\xdb","\x33"),
	HX_HCSTRING("PageDown","\x71","\x8e","\xe7","\x24"),
	HX_HCSTRING("End","\xbb","\xbb","\x34","\x00"),
	HX_HCSTRING("Home","\x3f","\xf6","\xeb","\x2f"),
	HX_HCSTRING("Left","\x27","\x34","\x89","\x32"),
	HX_HCSTRING("Up","\x7b","\x4a","\x00","\x00"),
	HX_HCSTRING("Right","\xbc","\x7b","\x91","\x7c"),
	HX_HCSTRING("Down","\x82","\x24","\x47","\x2d"),
	HX_HCSTRING("Select","\x1c","\x8f","\xc7","\x9e"),
	HX_HCSTRING("Print","\x0d","\xc8","\xb8","\x5b"),
	HX_HCSTRING("Execute","\x15","\x32","\x5e","\x99"),
	HX_HCSTRING("PrintScreen","\x59","\x7f","\x07","\x53"),
	HX_HCSTRING("Snapshot","\x64","\xd4","\x65","\xfb"),
	HX_HCSTRING("Insert","\x59","\xb7","\x71","\xd2"),
	HX_HCSTRING("Delete","\x4b","\x34","\x6d","\x9f"),
	HX_HCSTRING("Help","\xe1","\x5e","\xe4","\x2f"),
	HX_HCSTRING("D0","\x6c","\x3b","\x00","\x00"),
	HX_HCSTRING("D1","\x6d","\x3b","\x00","\x00"),
	HX_HCSTRING("D2","\x6e","\x3b","\x00","\x00"),
	HX_HCSTRING("D3","\x6f","\x3b","\x00","\x00"),
	HX_HCSTRING("D4","\x70","\x3b","\x00","\x00"),
	HX_HCSTRING("D5","\x71","\x3b","\x00","\x00"),
	HX_HCSTRING("D6","\x72","\x3b","\x00","\x00"),
	HX_HCSTRING("D7","\x73","\x3b","\x00","\x00"),
	HX_HCSTRING("D8","\x74","\x3b","\x00","\x00"),
	HX_HCSTRING("D9","\x75","\x3b","\x00","\x00"),
	HX_HCSTRING("A","\x41","\x00","\x00","\x00"),
	HX_HCSTRING("B","\x42","\x00","\x00","\x00"),
	HX_HCSTRING("C","\x43","\x00","\x00","\x00"),
	HX_HCSTRING("D","\x44","\x00","\x00","\x00"),
	HX_HCSTRING("E","\x45","\x00","\x00","\x00"),
	HX_HCSTRING("F","\x46","\x00","\x00","\x00"),
	HX_HCSTRING("G","\x47","\x00","\x00","\x00"),
	HX_HCSTRING("H","\x48","\x00","\x00","\x00"),
	HX_HCSTRING("I","\x49","\x00","\x00","\x00"),
	HX_HCSTRING("J","\x4a","\x00","\x00","\x00"),
	HX_HCSTRING("K","\x4b","\x00","\x00","\x00"),
	HX_HCSTRING("L","\x4c","\x00","\x00","\x00"),
	HX_HCSTRING("M","\x4d","\x00","\x00","\x00"),
	HX_HCSTRING("N","\x4e","\x00","\x00","\x00"),
	HX_HCSTRING("O","\x4f","\x00","\x00","\x00"),
	HX_HCSTRING("P","\x50","\x00","\x00","\x00"),
	HX_HCSTRING("Q","\x51","\x00","\x00","\x00"),
	HX_HCSTRING("R","\x52","\x00","\x00","\x00"),
	HX_HCSTRING("S","\x53","\x00","\x00","\x00"),
	HX_HCSTRING("T","\x54","\x00","\x00","\x00"),
	HX_HCSTRING("U","\x55","\x00","\x00","\x00"),
	HX_HCSTRING("V","\x56","\x00","\x00","\x00"),
	HX_HCSTRING("W","\x57","\x00","\x00","\x00"),
	HX_HCSTRING("X","\x58","\x00","\x00","\x00"),
	HX_HCSTRING("Y","\x59","\x00","\x00","\x00"),
	HX_HCSTRING("Z","\x5a","\x00","\x00","\x00"),
	HX_HCSTRING("LWin","\x30","\x97","\x7e","\x32"),
	HX_HCSTRING("RWin","\xea","\xde","\x75","\x36"),
	HX_HCSTRING("Apps","\xd2","\x3c","\x4c","\x2b"),
	HX_HCSTRING("Sleep","\xf7","\x2c","\xf2","\x11"),
	HX_HCSTRING("NumPad0","\xc3","\xa4","\x23","\x6b"),
	HX_HCSTRING("NumPad1","\xc4","\xa4","\x23","\x6b"),
	HX_HCSTRING("NumPad2","\xc5","\xa4","\x23","\x6b"),
	HX_HCSTRING("NumPad3","\xc6","\xa4","\x23","\x6b"),
	HX_HCSTRING("NumPad4","\xc7","\xa4","\x23","\x6b"),
	HX_HCSTRING("NumPad5","\xc8","\xa4","\x23","\x6b"),
	HX_HCSTRING("NumPad6","\xc9","\xa4","\x23","\x6b"),
	HX_HCSTRING("NumPad7","\xca","\xa4","\x23","\x6b"),
	HX_HCSTRING("NumPad8","\xcb","\xa4","\x23","\x6b"),
	HX_HCSTRING("NumPad9","\xcc","\xa4","\x23","\x6b"),
	HX_HCSTRING("Multiply","\x44","\x9e","\x3e","\x74"),
	HX_HCSTRING("Add","\x01","\xaa","\x31","\x00"),
	HX_HCSTRING("Separator","\x45","\x40","\x52","\xd3"),
	HX_HCSTRING("Subtract","\x34","\x31","\xc3","\xd1"),
	HX_HCSTRING("Decimal","\x71","\xdc","\x24","\xb4"),
	HX_HCSTRING("Divide","\x99","\xa3","\xa6","\xf3"),
	HX_HCSTRING("F1","\x2b","\x3d","\x00","\x00"),
	HX_HCSTRING("F2","\x2c","\x3d","\x00","\x00"),
	HX_HCSTRING("F3","\x2d","\x3d","\x00","\x00"),
	HX_HCSTRING("F4","\x2e","\x3d","\x00","\x00"),
	HX_HCSTRING("F5","\x2f","\x3d","\x00","\x00"),
	HX_HCSTRING("F6","\x30","\x3d","\x00","\x00"),
	HX_HCSTRING("F7","\x31","\x3d","\x00","\x00"),
	HX_HCSTRING("F8","\x32","\x3d","\x00","\x00"),
	HX_HCSTRING("F9","\x33","\x3d","\x00","\x00"),
	HX_HCSTRING("F10","\xa5","\x48","\x35","\x00"),
	HX_HCSTRING("F11","\xa6","\x48","\x35","\x00"),
	HX_HCSTRING("F12","\xa7","\x48","\x35","\x00"),
	HX_HCSTRING("F13","\xa8","\x48","\x35","\x00"),
	HX_HCSTRING("F14","\xa9","\x48","\x35","\x00"),
	HX_HCSTRING("F15","\xaa","\x48","\x35","\x00"),
	HX_HCSTRING("F16","\xab","\x48","\x35","\x00"),
	HX_HCSTRING("F17","\xac","\x48","\x35","\x00"),
	HX_HCSTRING("F18","\xad","\x48","\x35","\x00"),
	HX_HCSTRING("F19","\xae","\x48","\x35","\x00"),
	HX_HCSTRING("F20","\x84","\x49","\x35","\x00"),
	HX_HCSTRING("F21","\x85","\x49","\x35","\x00"),
	HX_HCSTRING("F22","\x86","\x49","\x35","\x00"),
	HX_HCSTRING("F23","\x87","\x49","\x35","\x00"),
	HX_HCSTRING("F24","\x88","\x49","\x35","\x00"),
	HX_HCSTRING("NumLock","\x31","\x69","\x89","\x68"),
	HX_HCSTRING("Scroll","\x2d","\x4c","\xf9","\x7b"),
	HX_HCSTRING("LShiftKey","\xa9","\x7a","\xfc","\x12"),
	HX_HCSTRING("RShiftKey","\xaf","\xf0","\xa4","\x04"),
	HX_HCSTRING("LControlKey","\xae","\x69","\x5e","\x3d"),
	HX_HCSTRING("RControlKey","\x34","\xed","\x94","\x42"),
	HX_HCSTRING("LAlt","\x3d","\xe8","\x6d","\x32"),
	HX_HCSTRING("RAlt","\xf7","\x2f","\x65","\x36"),
	HX_HCSTRING("BrowserBack","\xcf","\x8d","\x68","\xc7"),
	HX_HCSTRING("BrowserForward","\x1d","\xe7","\x10","\x70"),
	HX_HCSTRING("BrowserRefresh","\x33","\xdf","\x66","\x77"),
	HX_HCSTRING("BrowserStop","\xaa","\xa3","\xb3","\xd2"),
	HX_HCSTRING("BrowserSearch","\x10","\x8d","\x61","\xf5"),
	HX_HCSTRING("BrowserFavorites","\x2f","\xd0","\x10","\x5a"),
	HX_HCSTRING("BrowserHome","\xc7","\x7d","\x6a","\xcb"),
	HX_HCSTRING("VolumeMute","\xf3","\xbd","\xe5","\x21"),
	HX_HCSTRING("VolumeDown","\x7c","\x47","\xee","\x1b"),
	HX_HCSTRING("VolumeUp","\xf5","\xda","\x86","\x13"),
	HX_HCSTRING("MediaNextTrack","\x34","\x5b","\x83","\xd8"),
	HX_HCSTRING("MediaPreviousTrack","\x70","\xcb","\xf5","\x64"),
	HX_HCSTRING("MediaStop","\xe6","\x42","\x72","\x4e"),
	HX_HCSTRING("MediaPlayPause","\xfe","\xb6","\x5a","\xf9"),
	HX_HCSTRING("LaunchMail","\x2a","\x00","\x0c","\xb0"),
	HX_HCSTRING("SelectMedia","\x28","\xa0","\x59","\x43"),
	HX_HCSTRING("LaunchApplication1","\xd4","\xad","\x12","\x55"),
	HX_HCSTRING("LaunchApplication2","\xd5","\xad","\x12","\x55"),
	HX_HCSTRING("Oem1","\xda","\xdd","\x84","\x34"),
	HX_HCSTRING("OemSemicolon","\xba","\x24","\x2d","\xf1"),
	HX_HCSTRING("Oemplus","\x51","\x91","\x32","\x44"),
	HX_HCSTRING("Oemcomma","\xfe","\x97","\xcc","\xed"),
	HX_HCSTRING("OemMinus","\x79","\x56","\x05","\x3f"),
	HX_HCSTRING("OemPeriod","\xd8","\xd2","\xb9","\xcd"),
	HX_HCSTRING("OemQuestion","\xbd","\x70","\x30","\x73"),
	HX_HCSTRING("Oem2","\xdb","\xdd","\x84","\x34"),
	HX_HCSTRING("Oemtilde","\xc1","\x62","\xa4","\xb3"),
	HX_HCSTRING("Oem3","\xdc","\xdd","\x84","\x34"),
	HX_HCSTRING("Oem4","\xdd","\xdd","\x84","\x34"),
	HX_HCSTRING("OemOpenBrackets","\x4c","\x64","\x5c","\xfb"),
	HX_HCSTRING("OemPipe","\x45","\x72","\x09","\x2f"),
	HX_HCSTRING("Oem5","\xde","\xdd","\x84","\x34"),
	HX_HCSTRING("Oem6","\xdf","\xdd","\x84","\x34"),
	HX_HCSTRING("OemCloseBrackets","\x2c","\xb0","\x15","\xf0"),
	HX_HCSTRING("Oem7","\xe0","\xdd","\x84","\x34"),
	HX_HCSTRING("OemQuotes","\x8e","\x23","\x8b","\x68"),
	HX_HCSTRING("Oem8","\xe1","\xdd","\x84","\x34"),
	HX_HCSTRING("Oem102","\x5c","\xb2","\xdb","\x05"),
	HX_HCSTRING("OemBackslash","\x3f","\xc7","\xa0","\x6b"),
	HX_HCSTRING("ProcessKey","\x90","\x92","\xcf","\xcd"),
	HX_HCSTRING("Packet","\xa8","\xcb","\x2c","\x18"),
	HX_HCSTRING("Attn","\x4d","\x49","\x4f","\x2b"),
	HX_HCSTRING("Crsel","\x2b","\xcc","\x8a","\xdf"),
	HX_HCSTRING("Exsel","\xe7","\x3c","\x4f","\x0a"),
	HX_HCSTRING("EraseEof","\x96","\xa3","\xd1","\x31"),
	HX_HCSTRING("Play","\x14","\x5a","\x33","\x35"),
	HX_HCSTRING("Zoom","\x33","\xcf","\xd1","\x3b"),
	HX_HCSTRING("NoName","\x4c","\x27","\x29","\x4d"),
	HX_HCSTRING("Pa1","\x00","\x09","\x3d","\x00"),
	HX_HCSTRING("OemClear","\x96","\x47","\xf8","\x7e"),
	HX_HCSTRING("KeyCodeMask","\x58","\xcd","\xff","\xa8"),
	HX_HCSTRING("ShiftModifier","\xd9","\x25","\xf0","\x51"),
	HX_HCSTRING("ControlModifier","\xb4","\x2f","\x1d","\xdc"),
	HX_HCSTRING("AltModifier","\x80","\xf9","\xc0","\x5d"),
	HX_HCSTRING("Face1","\xd4","\xc4","\x75","\x8e"),
	HX_HCSTRING("Face2","\xd5","\xc4","\x75","\x8e"),
	HX_HCSTRING("Face3","\xd6","\xc4","\x75","\x8e"),
	HX_HCSTRING("Face4","\xd7","\xc4","\x75","\x8e"),
	HX_HCSTRING("ButtonA","\xef","\x79","\xc6","\x97"),
	HX_HCSTRING("ButtonB","\xf0","\x79","\xc6","\x97"),
	HX_HCSTRING("ButtonX","\x06","\x7a","\xc6","\x97"),
	HX_HCSTRING("ButtonY","\x07","\x7a","\xc6","\x97"),
	HX_HCSTRING("LeftShoulder","\xa7","\xa2","\xe5","\x06"),
	HX_HCSTRING("RightShoulder","\x3c","\x07","\x8f","\x53"),
	HX_HCSTRING("LeftShoulderBottom","\xf2","\xf4","\x58","\x10"),
	HX_HCSTRING("RightShoulderBottom","\x47","\x77","\x23","\x58"),
	HX_HCSTRING("ButtonSelect","\xae","\x3e","\x03","\xda"),
	HX_HCSTRING("ButtonStart","\xf0","\xcc","\xe8","\xb5"),
	HX_HCSTRING("LeftAnalogueStick","\x09","\x40","\x92","\xe7"),
	HX_HCSTRING("RightAnalogueStick","\x54","\x1f","\x8b","\x59"),
	HX_HCSTRING("PadTop","\x22","\x97","\xc4","\x18"),
	HX_HCSTRING("PadBottom","\x7e","\xcc","\xfd","\x6f"),
	HX_HCSTRING("PadLeft","\xda","\x52","\xee","\x8d"),
	HX_HCSTRING("PadRight","\xa9","\x39","\xa7","\x19"),
	HX_HCSTRING("LeftAnalogueHor","\x04","\xc2","\x2a","\xdd"),
	HX_HCSTRING("LeftAnalogueVert","\x18","\x68","\x78","\xb1"),
	HX_HCSTRING("RightAnalogueHor","\x8f","\xa8","\xf4","\x9b"),
	HX_HCSTRING("RightAnalogueVert","\x2d","\x3b","\x58","\xe3"),
	HX_HCSTRING("Touch0","\xb1","\x23","\x16","\xcd"),
	HX_HCSTRING("Touch1","\xb2","\x23","\x16","\xcd"),
	HX_HCSTRING("Touch2","\xb3","\x23","\x16","\xcd"),
	HX_HCSTRING("Touch3","\xb4","\x23","\x16","\xcd"),
	HX_HCSTRING("Touch4","\xb5","\x23","\x16","\xcd"),
	HX_HCSTRING("Touch5","\xb6","\x23","\x16","\xcd"),
	String(null()) };

void KeyCode_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.input.KeyCode","\xbc","\xca","\x7b","\x7d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &KeyCode_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< KeyCode_obj >;
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

void KeyCode_obj::__boot()
{
	Modifiers= (int)-65536;
	None= (int)0;
	Mouse0= (int)1;
	Mouse1= (int)2;
	Cancel= (int)3;
	Mouse2= (int)4;
	Mouse3= (int)5;
	Mouse4= (int)6;
	Back= (int)8;
	Tab= (int)9;
	LineFeed= (int)10;
	Clear= (int)12;
	Enter= (int)13;
	Return= (int)13;
	ShiftKey= (int)16;
	ControlKey= (int)17;
	Alt= (int)18;
	Pause= (int)19;
	CapsLock= (int)20;
	Capital= (int)20;
	KanaMode= (int)21;
	HanguelMode= (int)21;
	HangulMode= (int)21;
	JunjaMode= (int)23;
	FinalMode= (int)24;
	KanjiMode= (int)25;
	HanjaMode= (int)25;
	Escape= (int)27;
	IMEConvert= (int)28;
	IMENonconvert= (int)29;
	IMEAceept= (int)30;
	IMEAccept= (int)30;
	IMEModeChange= (int)31;
	Space= (int)32;
	Prior= (int)33;
	PageUp= (int)33;
	Next= (int)34;
	PageDown= (int)34;
	End= (int)35;
	Home= (int)36;
	Left= (int)37;
	Up= (int)38;
	Right= (int)39;
	Down= (int)40;
	Select= (int)41;
	Print= (int)42;
	Execute= (int)43;
	PrintScreen= (int)44;
	Snapshot= (int)44;
	Insert= (int)45;
	Delete= (int)46;
	Help= (int)47;
	D0= (int)48;
	D1= (int)49;
	D2= (int)50;
	D3= (int)51;
	D4= (int)52;
	D5= (int)53;
	D6= (int)54;
	D7= (int)55;
	D8= (int)56;
	D9= (int)57;
	A= (int)65;
	B= (int)66;
	C= (int)67;
	D= (int)68;
	E= (int)69;
	F= (int)70;
	G= (int)71;
	H= (int)72;
	I= (int)73;
	J= (int)74;
	K= (int)75;
	L= (int)76;
	M= (int)77;
	N= (int)78;
	O= (int)79;
	P= (int)80;
	Q= (int)81;
	R= (int)82;
	S= (int)83;
	T= (int)84;
	U= (int)85;
	V= (int)86;
	W= (int)87;
	X= (int)88;
	Y= (int)89;
	Z= (int)90;
	LWin= (int)91;
	RWin= (int)92;
	Apps= (int)93;
	Sleep= (int)95;
	NumPad0= (int)96;
	NumPad1= (int)97;
	NumPad2= (int)98;
	NumPad3= (int)99;
	NumPad4= (int)100;
	NumPad5= (int)101;
	NumPad6= (int)102;
	NumPad7= (int)103;
	NumPad8= (int)104;
	NumPad9= (int)105;
	Multiply= (int)106;
	Add= (int)107;
	Separator= (int)108;
	Subtract= (int)109;
	Decimal= (int)110;
	Divide= (int)111;
	F1= (int)112;
	F2= (int)113;
	F3= (int)114;
	F4= (int)115;
	F5= (int)116;
	F6= (int)117;
	F7= (int)118;
	F8= (int)119;
	F9= (int)120;
	F10= (int)121;
	F11= (int)122;
	F12= (int)123;
	F13= (int)124;
	F14= (int)125;
	F15= (int)126;
	F16= (int)127;
	F17= (int)128;
	F18= (int)129;
	F19= (int)130;
	F20= (int)131;
	F21= (int)132;
	F22= (int)133;
	F23= (int)134;
	F24= (int)135;
	NumLock= (int)144;
	Scroll= (int)145;
	LShiftKey= (int)160;
	RShiftKey= (int)161;
	LControlKey= (int)162;
	RControlKey= (int)163;
	LAlt= (int)164;
	RAlt= (int)165;
	BrowserBack= (int)166;
	BrowserForward= (int)167;
	BrowserRefresh= (int)168;
	BrowserStop= (int)169;
	BrowserSearch= (int)170;
	BrowserFavorites= (int)171;
	BrowserHome= (int)172;
	VolumeMute= (int)173;
	VolumeDown= (int)174;
	VolumeUp= (int)175;
	MediaNextTrack= (int)176;
	MediaPreviousTrack= (int)177;
	MediaStop= (int)178;
	MediaPlayPause= (int)179;
	LaunchMail= (int)180;
	SelectMedia= (int)181;
	LaunchApplication1= (int)182;
	LaunchApplication2= (int)183;
	Oem1= (int)186;
	OemSemicolon= (int)186;
	Oemplus= (int)187;
	Oemcomma= (int)188;
	OemMinus= (int)189;
	OemPeriod= (int)190;
	OemQuestion= (int)191;
	Oem2= (int)191;
	Oemtilde= (int)192;
	Oem3= (int)192;
	Oem4= (int)219;
	OemOpenBrackets= (int)219;
	OemPipe= (int)220;
	Oem5= (int)220;
	Oem6= (int)221;
	OemCloseBrackets= (int)221;
	Oem7= (int)222;
	OemQuotes= (int)222;
	Oem8= (int)223;
	Oem102= (int)226;
	OemBackslash= (int)226;
	ProcessKey= (int)229;
	Packet= (int)231;
	Attn= (int)246;
	Crsel= (int)247;
	Exsel= (int)248;
	EraseEof= (int)249;
	Play= (int)250;
	Zoom= (int)251;
	NoName= (int)252;
	Pa1= (int)253;
	OemClear= (int)254;
	KeyCodeMask= (int)65535;
	ShiftModifier= (int)65536;
	ControlModifier= (int)131072;
	AltModifier= (int)262144;
	Face1= (int)0;
	Face2= (int)1;
	Face3= (int)2;
	Face4= (int)3;
	ButtonA= (int)0;
	ButtonB= (int)1;
	ButtonX= (int)2;
	ButtonY= (int)3;
	LeftShoulder= (int)4;
	RightShoulder= (int)5;
	LeftShoulderBottom= (int)6;
	RightShoulderBottom= (int)7;
	ButtonSelect= (int)8;
	ButtonStart= (int)9;
	LeftAnalogueStick= (int)10;
	RightAnalogueStick= (int)11;
	PadTop= (int)12;
	PadBottom= (int)13;
	PadLeft= (int)14;
	PadRight= (int)15;
	LeftAnalogueHor= (int)0;
	LeftAnalogueVert= (int)1;
	RightAnalogueHor= (int)2;
	RightAnalogueVert= (int)3;
	Touch0= (int)0;
	Touch1= (int)1;
	Touch2= (int)2;
	Touch3= (int)3;
	Touch4= (int)4;
	Touch5= (int)5;
}

} // end namespace haxor
} // end namespace input
