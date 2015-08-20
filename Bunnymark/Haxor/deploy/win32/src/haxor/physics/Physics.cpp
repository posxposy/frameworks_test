#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxor_core_Console
#include <haxor/core/Console.h>
#endif
#ifndef INCLUDED_haxor_math_Vector3
#include <haxor/math/Vector3.h>
#endif
#ifndef INCLUDED_haxor_physics_CollisionSolver
#include <haxor/physics/CollisionSolver.h>
#endif
#ifndef INCLUDED_haxor_physics_Physics
#include <haxor/physics/Physics.h>
#endif
#ifndef INCLUDED_haxor_physics_broadphase_BroadPhase
#include <haxor/physics/broadphase/BroadPhase.h>
#endif
#ifndef INCLUDED_haxor_physics_broadphase_SAPBroadPhase
#include <haxor/physics/broadphase/SAPBroadPhase.h>
#endif
namespace haxor{
namespace physics{

Void Physics_obj::__construct()
{
	return null();
}

//Physics_obj::~Physics_obj() { }

Dynamic Physics_obj::__CreateEmpty() { return  new Physics_obj; }
hx::ObjectPtr< Physics_obj > Physics_obj::__new()
{  hx::ObjectPtr< Physics_obj > _result_ = new Physics_obj();
	_result_->__construct();
	return _result_;}

Dynamic Physics_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Physics_obj > _result_ = new Physics_obj();
	_result_->__construct();
	return _result_;}

::haxor::math::Vector3 Physics_obj::gravity;

::haxor::physics::broadphase::BroadPhase Physics_obj::get_broadphase( ){
	HX_STACK_FRAME("haxor.physics.Physics","get_broadphase",0x5997d15c,"haxor.physics.Physics.get_broadphase","haxor/physics/Physics.hx",39,0xbec2a6ec)
	HX_STACK_LINE(39)
	::haxor::physics::broadphase::BroadPhase tmp = ::haxor::physics::Physics_obj::m_broadphase;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Physics_obj,get_broadphase,return )

::haxor::physics::broadphase::BroadPhase Physics_obj::set_broadphase( ::haxor::physics::broadphase::BroadPhase v){
	HX_STACK_FRAME("haxor.physics.Physics","set_broadphase",0x79b7b9d0,"haxor.physics.Physics.set_broadphase","haxor/physics/Physics.hx",41,0xbec2a6ec)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(42)
	bool tmp = (v == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	if ((tmp)){
		HX_STACK_LINE(42)
		::haxor::physics::broadphase::BroadPhase tmp1 = ::haxor::physics::Physics_obj::m_broadphase;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(42)
		return tmp1;
	}
	HX_STACK_LINE(43)
	::haxor::physics::Physics_obj::m_broadphase = v;
	HX_STACK_LINE(44)
	::haxor::physics::broadphase::BroadPhase tmp1 = ::haxor::physics::Physics_obj::m_broadphase;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(44)
	tmp1->Initialize();
	HX_STACK_LINE(45)
	::haxor::physics::broadphase::BroadPhase tmp2 = ::haxor::physics::Physics_obj::m_broadphase;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(45)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Physics_obj,set_broadphase,return )

::haxor::physics::broadphase::BroadPhase Physics_obj::m_broadphase;

::haxor::physics::CollisionSolver Physics_obj::get_solver( ){
	HX_STACK_FRAME("haxor.physics.Physics","get_solver",0xa42af636,"haxor.physics.Physics.get_solver","haxor/physics/Physics.hx",54,0xbec2a6ec)
	HX_STACK_LINE(54)
	::haxor::physics::CollisionSolver tmp = ::haxor::physics::Physics_obj::m_solver;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Physics_obj,get_solver,return )

::haxor::physics::CollisionSolver Physics_obj::m_solver;

::haxe::ds::IntMap Physics_obj::m_it;

Void Physics_obj::Initialize( ){
{
		HX_STACK_FRAME("haxor.physics.Physics","Initialize",0x6acdebca,"haxor.physics.Physics.Initialize","haxor/physics/Physics.hx",66,0xbec2a6ec)
		HX_STACK_LINE(67)
		{
			HX_STACK_LINE(67)
			int tmp = ::haxor::core::Console_obj::verbose;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(67)
			bool tmp1 = (tmp >= (int)5);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(67)
			if ((tmp1)){
				HX_STACK_LINE(67)
				::cpp::Lib_obj::println(HX_HCSTRING("Physics> Initialize","\x39","\x69","\xda","\x11"));
			}
		}
		HX_STACK_LINE(68)
		::haxe::ds::IntMap tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(68)
		{
			HX_STACK_LINE(68)
			::haxe::ds::IntMap tmp1 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(68)
			::haxe::ds::IntMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(68)
			tmp = tmp2;
		}
		HX_STACK_LINE(68)
		::haxor::physics::Physics_obj::m_it = tmp;
		HX_STACK_LINE(69)
		{
			HX_STACK_LINE(69)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(69)
			while((true)){
				HX_STACK_LINE(69)
				bool tmp1 = (_g < (int)32);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(69)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(69)
				if ((tmp2)){
					HX_STACK_LINE(69)
					break;
				}
				HX_STACK_LINE(69)
				int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(69)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(70)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(70)
				while((true)){
					HX_STACK_LINE(70)
					bool tmp4 = (_g1 < (int)32);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(70)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(70)
					if ((tmp5)){
						HX_STACK_LINE(70)
						break;
					}
					HX_STACK_LINE(70)
					int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(70)
					int j = tmp6;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(72)
					int tmp7 = (int((int)1) << int(i));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(72)
					int tmp8 = (int((int)1) << int(j));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(72)
					::haxor::physics::Physics_obj::SetInteraction(tmp7,tmp8,false);
				}
			}
		}
		HX_STACK_LINE(75)
		::haxor::physics::Physics_obj::SetInteraction((int)1,(int)1,true);
		HX_STACK_LINE(77)
		::haxor::math::Vector3 tmp1 = ::haxor::math::Vector3_obj::__new(((Float)0.0),((Float)-9.81),((Float)0.0));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(77)
		::haxor::physics::Physics_obj::gravity = tmp1;
		HX_STACK_LINE(78)
		::haxor::physics::broadphase::SAPBroadPhase tmp2 = ::haxor::physics::broadphase::SAPBroadPhase_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(78)
		::haxor::physics::Physics_obj::set_broadphase(tmp2);
		HX_STACK_LINE(79)
		::haxor::physics::CollisionSolver tmp3 = ::haxor::physics::CollisionSolver_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(79)
		::haxor::physics::Physics_obj::m_solver = tmp3;
		HX_STACK_LINE(81)
		{
			HX_STACK_LINE(81)
			int tmp4 = ::haxor::core::Console_obj::verbose;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(81)
			bool tmp5 = (tmp4 >= (int)5);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(81)
			if ((tmp5)){
				HX_STACK_LINE(81)
				::cpp::Lib_obj::println(HX_HCSTRING("\tSAP Broadphase","\x00","\x8f","\x58","\x87"));
			}
		}
		HX_STACK_LINE(82)
		{
			HX_STACK_LINE(82)
			int tmp4 = ::haxor::core::Console_obj::verbose;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(82)
			bool tmp5 = (tmp4 >= (int)5);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(82)
			if ((tmp5)){
				HX_STACK_LINE(82)
				::haxor::physics::CollisionSolver tmp6 = ::haxor::physics::Physics_obj::m_solver;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(82)
				int tmp7 = tmp6->iterations;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(82)
				::String tmp8 = (HX_HCSTRING("\tSolver iterations[","\x41","\x8b","\x63","\x46") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(82)
				::String tmp9 = (tmp8 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(82)
				::cpp::Lib_obj::println(tmp9);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Physics_obj,Initialize,(void))

Void Physics_obj::SetInteraction( int p_layer_bit_a,int p_layer_bit_b,bool p_flag){
{
		HX_STACK_FRAME("haxor.physics.Physics","SetInteraction",0x99f1f2ca,"haxor.physics.Physics.SetInteraction","haxor/physics/Physics.hx",92,0xbec2a6ec)
		HX_STACK_ARG(p_layer_bit_a,"p_layer_bit_a")
		HX_STACK_ARG(p_layer_bit_b,"p_layer_bit_b")
		HX_STACK_ARG(p_flag,"p_flag")
		HX_STACK_LINE(93)
		int tmp = (int(p_layer_bit_a) | int(p_layer_bit_b));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(93)
		int f = tmp;		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(94)
		::haxe::ds::IntMap tmp1 = ::haxor::physics::Physics_obj::m_it;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(94)
		int tmp2 = f;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(94)
		bool tmp3 = p_flag;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(94)
		tmp1->set(tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Physics_obj,SetInteraction,(void))

bool Physics_obj::CanInteract( int p_layer_bit_a,int p_layer_bit_b){
	HX_STACK_FRAME("haxor.physics.Physics","CanInteract",0x2a64bc2c,"haxor.physics.Physics.CanInteract","haxor/physics/Physics.hx",104,0xbec2a6ec)
	HX_STACK_ARG(p_layer_bit_a,"p_layer_bit_a")
	HX_STACK_ARG(p_layer_bit_b,"p_layer_bit_b")
	HX_STACK_LINE(105)
	int tmp = (int(p_layer_bit_a) | int(p_layer_bit_b));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(105)
	int k = tmp;		HX_STACK_VAR(k,"k");
	HX_STACK_LINE(106)
	::haxe::ds::IntMap tmp1 = ::haxor::physics::Physics_obj::m_it;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(106)
	int tmp2 = k;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(106)
	bool tmp3 = tmp1->exists(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(106)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(106)
	if ((tmp3)){
		HX_STACK_LINE(106)
		::haxe::ds::IntMap tmp5 = ::haxor::physics::Physics_obj::m_it;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(106)
		int tmp6 = k;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(106)
		Dynamic tmp7 = tmp5->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(106)
		tmp4 = tmp7;
	}
	else{
		HX_STACK_LINE(106)
		tmp4 = false;
	}
	HX_STACK_LINE(106)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Physics_obj,CanInteract,return )


Physics_obj::Physics_obj()
{
}

bool Physics_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"m_it") ) { outValue = m_it; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"solver") ) { if (inCallProp == hx::paccAlways) { outValue = get_solver(); return true; } }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gravity") ) { outValue = gravity; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_solver") ) { outValue = m_solver; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"broadphase") ) { if (inCallProp == hx::paccAlways) { outValue = get_broadphase(); return true; } }
		if (HX_FIELD_EQ(inName,"get_solver") ) { outValue = get_solver_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Initialize") ) { outValue = Initialize_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"CanInteract") ) { outValue = CanInteract_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"m_broadphase") ) { outValue = m_broadphase; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_broadphase") ) { outValue = get_broadphase_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_broadphase") ) { outValue = set_broadphase_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"SetInteraction") ) { outValue = SetInteraction_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxor::math::Vector3*/ ,(void *) &Physics_obj::gravity,HX_HCSTRING("gravity","\x4e","\x6e","\xff","\x77")},
	{hx::fsObject /*::haxor::physics::broadphase::BroadPhase*/ ,(void *) &Physics_obj::m_broadphase,HX_HCSTRING("m_broadphase","\x8b","\xd7","\x28","\xa9")},
	{hx::fsObject /*::haxor::physics::CollisionSolver*/ ,(void *) &Physics_obj::m_solver,HX_HCSTRING("m_solver","\xe5","\x78","\x33","\xf5")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(void *) &Physics_obj::m_it,HX_HCSTRING("m_it","\xbd","\xb3","\x54","\x48")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Physics_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Physics_obj::gravity,"gravity");
	HX_MARK_MEMBER_NAME(Physics_obj::m_broadphase,"m_broadphase");
	HX_MARK_MEMBER_NAME(Physics_obj::m_solver,"m_solver");
	HX_MARK_MEMBER_NAME(Physics_obj::m_it,"m_it");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Physics_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Physics_obj::gravity,"gravity");
	HX_VISIT_MEMBER_NAME(Physics_obj::m_broadphase,"m_broadphase");
	HX_VISIT_MEMBER_NAME(Physics_obj::m_solver,"m_solver");
	HX_VISIT_MEMBER_NAME(Physics_obj::m_it,"m_it");
};

#endif

hx::Class Physics_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("gravity","\x4e","\x6e","\xff","\x77"),
	HX_HCSTRING("get_broadphase","\x02","\xe6","\x12","\x4e"),
	HX_HCSTRING("set_broadphase","\x76","\xce","\x32","\x6e"),
	HX_HCSTRING("m_broadphase","\x8b","\xd7","\x28","\xa9"),
	HX_HCSTRING("get_solver","\xdc","\x3f","\xc9","\x1c"),
	HX_HCSTRING("m_solver","\xe5","\x78","\x33","\xf5"),
	HX_HCSTRING("m_it","\xbd","\xb3","\x54","\x48"),
	HX_HCSTRING("Initialize","\x70","\x35","\x6c","\xe3"),
	HX_HCSTRING("SetInteraction","\x70","\x07","\x6d","\x8e"),
	HX_HCSTRING("CanInteract","\xc6","\xe3","\x46","\x3c"),
	String(null()) };

void Physics_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.physics.Physics","\xd4","\xb7","\x19","\xff");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Physics_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Physics_obj >;
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
} // end namespace physics
