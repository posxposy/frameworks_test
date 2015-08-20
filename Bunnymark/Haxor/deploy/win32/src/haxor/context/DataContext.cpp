#include <hxcpp.h>

#ifndef INCLUDED_haxor_context_DataContext
#include <haxor/context/DataContext.h>
#endif
#ifndef INCLUDED_haxor_ds_IUSetItem
#include <haxor/ds/IUSetItem.h>
#endif
#ifndef INCLUDED_haxor_math_AABB2
#include <haxor/math/AABB2.h>
#endif
#ifndef INCLUDED_haxor_math_AABB3
#include <haxor/math/AABB3.h>
#endif
#ifndef INCLUDED_haxor_math_Color
#include <haxor/math/Color.h>
#endif
#ifndef INCLUDED_haxor_math_Matrix4
#include <haxor/math/Matrix4.h>
#endif
#ifndef INCLUDED_haxor_math_Quaternion
#include <haxor/math/Quaternion.h>
#endif
#ifndef INCLUDED_haxor_math_Vector2
#include <haxor/math/Vector2.h>
#endif
#ifndef INCLUDED_haxor_math_Vector3
#include <haxor/math/Vector3.h>
#endif
#ifndef INCLUDED_haxor_math_Vector4
#include <haxor/math/Vector4.h>
#endif
#ifndef INCLUDED_haxor_physics_Collision
#include <haxor/physics/Collision.h>
#endif
namespace haxor{
namespace context{

Void DataContext_obj::__construct()
{
HX_STACK_FRAME("haxor.context.DataContext","new",0xc27c598c,"haxor.context.DataContext.new","haxor/context/DataContext.hx",112,0xbece83e6)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(113)
	Array< int > tmp = Array_obj< int >::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(113)
	this->i = tmp;
	HX_STACK_LINE(114)
	Array< Float > tmp1 = Array_obj< Float >::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(114)
	this->v = tmp1;
	HX_STACK_LINE(115)
	Array< ::Dynamic > tmp2 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(115)
	this->m_v2 = tmp2;
	HX_STACK_LINE(116)
	Array< ::Dynamic > tmp3 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(116)
	this->m_v3 = tmp3;
	HX_STACK_LINE(117)
	Array< ::Dynamic > tmp4 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(117)
	this->m_v4 = tmp4;
	HX_STACK_LINE(118)
	Array< ::Dynamic > tmp5 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(118)
	this->m_c = tmp5;
	HX_STACK_LINE(119)
	Array< ::Dynamic > tmp6 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(119)
	this->m_q = tmp6;
	HX_STACK_LINE(120)
	Array< ::Dynamic > tmp7 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(120)
	this->m_m4 = tmp7;
	HX_STACK_LINE(121)
	Array< ::Dynamic > tmp8 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(121)
	this->m_aabb3 = tmp8;
	HX_STACK_LINE(122)
	Array< ::Dynamic > tmp9 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(122)
	this->m_aabb2 = tmp9;
	HX_STACK_LINE(123)
	Array< ::Dynamic > tmp10 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(123)
	this->m_collision = tmp10;
	HX_STACK_LINE(125)
	this->m_nv2 = (int)0;
	HX_STACK_LINE(126)
	this->m_nv3 = (int)0;
	HX_STACK_LINE(127)
	this->m_nv4 = (int)0;
	HX_STACK_LINE(128)
	this->m_nc = (int)0;
	HX_STACK_LINE(129)
	this->m_nq = (int)0;
	HX_STACK_LINE(130)
	this->m_nm4 = (int)0;
	HX_STACK_LINE(131)
	this->m_naabb3 = (int)0;
	HX_STACK_LINE(132)
	this->m_naabb2 = (int)0;
	HX_STACK_LINE(133)
	this->m_ncollision = (int)0;
	HX_STACK_LINE(135)
	Array< Float > tmp11 = Array_obj< Float >::__new().Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(135)
	this->m4l = tmp11;
	HX_STACK_LINE(137)
	{
		HX_STACK_LINE(137)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(137)
		int tmp12 = ::haxor::context::DataContext_obj::MAX_TEMP;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(137)
		int _g = tmp12;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(137)
		while((true)){
			HX_STACK_LINE(137)
			bool tmp13 = (_g1 < _g);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(137)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(137)
			if ((tmp14)){
				HX_STACK_LINE(137)
				break;
			}
			HX_STACK_LINE(137)
			int tmp15 = (_g1)++;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(137)
			int k = tmp15;		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(139)
			Array< int > tmp16 = this->i;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(139)
			tmp16->push((int)0);
			HX_STACK_LINE(140)
			Array< Float > tmp17 = this->v;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(140)
			tmp17->push(((Float)0.0));
			HX_STACK_LINE(141)
			Array< ::Dynamic > tmp18 = this->m_v2;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(141)
			::haxor::math::Vector2 tmp19 = ::haxor::math::Vector2_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(141)
			tmp18->push(tmp19);
			HX_STACK_LINE(142)
			Array< ::Dynamic > tmp20 = this->m_v3;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(142)
			::haxor::math::Vector3 tmp21 = ::haxor::math::Vector3_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(142)
			tmp20->push(tmp21);
			HX_STACK_LINE(143)
			Array< ::Dynamic > tmp22 = this->m_v4;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(143)
			::haxor::math::Vector4 tmp23 = ::haxor::math::Vector4_obj::__new((int)0,(int)0,(int)0,(int)0);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(143)
			tmp22->push(tmp23);
			HX_STACK_LINE(144)
			Array< ::Dynamic > tmp24 = this->m_c;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(144)
			::haxor::math::Color tmp25 = ::haxor::math::Color_obj::__new((int)0,(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(144)
			tmp24->push(tmp25);
			HX_STACK_LINE(145)
			Array< ::Dynamic > tmp26 = this->m_q;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(145)
			::haxor::math::Quaternion tmp27 = ::haxor::math::Quaternion_obj::__new((int)0,(int)0,(int)0,((Float)1.0));		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(145)
			tmp26->push(tmp27);
			HX_STACK_LINE(146)
			Array< ::Dynamic > tmp28 = this->m_m4;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(146)
			::haxor::math::Matrix4 tmp29 = ::haxor::math::Matrix4_obj::__new((int)1,(int)0,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(146)
			tmp28->push(tmp29);
			HX_STACK_LINE(147)
			Array< ::Dynamic > tmp30 = this->m_aabb3;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(147)
			::haxor::math::AABB3 tmp31 = ::haxor::math::AABB3_obj::get_empty();		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(147)
			tmp30->push(tmp31);
			HX_STACK_LINE(148)
			Array< ::Dynamic > tmp32 = this->m_aabb2;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(148)
			::haxor::math::AABB2 tmp33 = ::haxor::math::AABB2_obj::get_empty();		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(148)
			tmp32->push(tmp33);
			HX_STACK_LINE(149)
			Array< ::Dynamic > tmp34 = this->m_collision;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(149)
			::haxor::physics::Collision tmp35 = ::haxor::physics::Collision_obj::__new();		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(149)
			tmp34->push(tmp35);
		}
	}
}
;
	return null();
}

//DataContext_obj::~DataContext_obj() { }

Dynamic DataContext_obj::__CreateEmpty() { return  new DataContext_obj; }
hx::ObjectPtr< DataContext_obj > DataContext_obj::__new()
{  hx::ObjectPtr< DataContext_obj > _result_ = new DataContext_obj();
	_result_->__construct();
	return _result_;}

Dynamic DataContext_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DataContext_obj > _result_ = new DataContext_obj();
	_result_->__construct();
	return _result_;}

::haxor::math::Vector2 DataContext_obj::get_v2( ){
	HX_STACK_FRAME("haxor.context.DataContext","get_v2",0x55587899,"haxor.context.DataContext.get_v2","haxor/context/DataContext.hx",41,0xbece83e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(41)
	Array< ::Dynamic > tmp = this->m_v2;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	int tmp1 = this->m_nv2;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(41)
	int tmp2 = (tmp1 + (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(41)
	Array< ::Dynamic > tmp3 = this->m_v2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(41)
	int tmp4 = tmp3->length;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(41)
	int tmp5 = hx::Mod(tmp2,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(41)
	int tmp6 = this->m_nv2 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(41)
	::haxor::math::Vector2 tmp7 = tmp->__get(tmp6).StaticCast< ::haxor::math::Vector2 >();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(41)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(DataContext_obj,get_v2,return )

::haxor::math::Vector3 DataContext_obj::get_v3( ){
	HX_STACK_FRAME("haxor.context.DataContext","get_v3",0x5558789a,"haxor.context.DataContext.get_v3","haxor/context/DataContext.hx",49,0xbece83e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(49)
	Array< ::Dynamic > tmp = this->m_v3;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	int tmp1 = this->m_nv3;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(49)
	int tmp2 = (tmp1 + (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(49)
	Array< ::Dynamic > tmp3 = this->m_v3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(49)
	int tmp4 = tmp3->length;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(49)
	int tmp5 = hx::Mod(tmp2,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(49)
	int tmp6 = this->m_nv3 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(49)
	::haxor::math::Vector3 tmp7 = tmp->__get(tmp6).StaticCast< ::haxor::math::Vector3 >();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(49)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(DataContext_obj,get_v3,return )

::haxor::math::Vector4 DataContext_obj::get_v4( ){
	HX_STACK_FRAME("haxor.context.DataContext","get_v4",0x5558789b,"haxor.context.DataContext.get_v4","haxor/context/DataContext.hx",57,0xbece83e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(57)
	Array< ::Dynamic > tmp = this->m_v4;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(57)
	int tmp1 = this->m_nv4;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(57)
	int tmp2 = (tmp1 + (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(57)
	Array< ::Dynamic > tmp3 = this->m_v4;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(57)
	int tmp4 = tmp3->length;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(57)
	int tmp5 = hx::Mod(tmp2,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(57)
	int tmp6 = this->m_nv4 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(57)
	::haxor::math::Vector4 tmp7 = tmp->__get(tmp6).StaticCast< ::haxor::math::Vector4 >();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(57)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(DataContext_obj,get_v4,return )

::haxor::math::Color DataContext_obj::get_c( ){
	HX_STACK_FRAME("haxor.context.DataContext","get_c",0x959ed166,"haxor.context.DataContext.get_c","haxor/context/DataContext.hx",65,0xbece83e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(65)
	Array< ::Dynamic > tmp = this->m_c;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(65)
	int tmp1 = this->m_nc;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(65)
	int tmp2 = (tmp1 + (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(65)
	Array< ::Dynamic > tmp3 = this->m_c;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(65)
	int tmp4 = tmp3->length;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(65)
	int tmp5 = hx::Mod(tmp2,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(65)
	int tmp6 = this->m_nc = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(65)
	::haxor::math::Color tmp7 = tmp->__get(tmp6).StaticCast< ::haxor::math::Color >();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(65)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(DataContext_obj,get_c,return )

::haxor::math::Quaternion DataContext_obj::get_q( ){
	HX_STACK_FRAME("haxor.context.DataContext","get_q",0x959ed174,"haxor.context.DataContext.get_q","haxor/context/DataContext.hx",73,0xbece83e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(73)
	Array< ::Dynamic > tmp = this->m_q;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(73)
	int tmp1 = this->m_nq;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(73)
	int tmp2 = (tmp1 + (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(73)
	Array< ::Dynamic > tmp3 = this->m_q;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(73)
	int tmp4 = tmp3->length;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(73)
	int tmp5 = hx::Mod(tmp2,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(73)
	int tmp6 = this->m_nq = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(73)
	::haxor::math::Quaternion tmp7 = tmp->__get(tmp6).StaticCast< ::haxor::math::Quaternion >();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(73)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(DataContext_obj,get_q,return )

::haxor::math::AABB3 DataContext_obj::get_aabb3( ){
	HX_STACK_FRAME("haxor.context.DataContext","get_aabb3",0x5055b816,"haxor.context.DataContext.get_aabb3","haxor/context/DataContext.hx",81,0xbece83e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(81)
	Array< ::Dynamic > tmp = this->m_aabb3;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	int tmp1 = this->m_naabb3;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(81)
	int tmp2 = (tmp1 + (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(81)
	Array< ::Dynamic > tmp3 = this->m_aabb3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(81)
	int tmp4 = tmp3->length;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(81)
	int tmp5 = hx::Mod(tmp2,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(81)
	int tmp6 = this->m_naabb3 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(81)
	::haxor::math::AABB3 tmp7 = tmp->__get(tmp6).StaticCast< ::haxor::math::AABB3 >();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(81)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(DataContext_obj,get_aabb3,return )

::haxor::math::AABB2 DataContext_obj::get_aabb2( ){
	HX_STACK_FRAME("haxor.context.DataContext","get_aabb2",0x5055b815,"haxor.context.DataContext.get_aabb2","haxor/context/DataContext.hx",89,0xbece83e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(89)
	Array< ::Dynamic > tmp = this->m_aabb2;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(89)
	int tmp1 = this->m_naabb2;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(89)
	int tmp2 = (tmp1 + (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(89)
	Array< ::Dynamic > tmp3 = this->m_aabb2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(89)
	int tmp4 = tmp3->length;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(89)
	int tmp5 = hx::Mod(tmp2,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(89)
	int tmp6 = this->m_naabb2 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(89)
	::haxor::math::AABB2 tmp7 = tmp->__get(tmp6).StaticCast< ::haxor::math::AABB2 >();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(89)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(DataContext_obj,get_aabb2,return )

::haxor::physics::Collision DataContext_obj::get_collision( ){
	HX_STACK_FRAME("haxor.context.DataContext","get_collision",0xce66b475,"haxor.context.DataContext.get_collision","haxor/context/DataContext.hx",97,0xbece83e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(97)
	Array< ::Dynamic > tmp = this->m_collision;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(97)
	int tmp1 = this->m_ncollision;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(97)
	int tmp2 = (tmp1 + (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(97)
	Array< ::Dynamic > tmp3 = this->m_collision;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(97)
	int tmp4 = tmp3->length;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(97)
	int tmp5 = hx::Mod(tmp2,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(97)
	int tmp6 = this->m_ncollision = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(97)
	::haxor::physics::Collision tmp7 = tmp->__get(tmp6).StaticCast< ::haxor::physics::Collision >();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(97)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(DataContext_obj,get_collision,return )

::haxor::math::Matrix4 DataContext_obj::get_m4( ){
	HX_STACK_FRAME("haxor.context.DataContext","get_m4",0x555870c4,"haxor.context.DataContext.get_m4","haxor/context/DataContext.hx",105,0xbece83e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(105)
	Array< ::Dynamic > tmp = this->m_m4;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(105)
	int tmp1 = this->m_nm4;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(105)
	int tmp2 = (tmp1 + (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(105)
	Array< ::Dynamic > tmp3 = this->m_m4;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(105)
	int tmp4 = tmp3->length;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(105)
	int tmp5 = hx::Mod(tmp2,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(105)
	int tmp6 = this->m_nq = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(105)
	::haxor::math::Matrix4 tmp7 = tmp->__get(tmp6).StaticCast< ::haxor::math::Matrix4 >();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(105)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(DataContext_obj,get_m4,return )

int DataContext_obj::MAX_TEMP;


DataContext_obj::DataContext_obj()
{
}

void DataContext_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DataContext);
	HX_MARK_MEMBER_NAME(i,"i");
	HX_MARK_MEMBER_NAME(v,"v");
	HX_MARK_MEMBER_NAME(v2,"v2");
	HX_MARK_MEMBER_NAME(m_v2,"m_v2");
	HX_MARK_MEMBER_NAME(m_nv2,"m_nv2");
	HX_MARK_MEMBER_NAME(v3,"v3");
	HX_MARK_MEMBER_NAME(m_v3,"m_v3");
	HX_MARK_MEMBER_NAME(m_nv3,"m_nv3");
	HX_MARK_MEMBER_NAME(v4,"v4");
	HX_MARK_MEMBER_NAME(m_v4,"m_v4");
	HX_MARK_MEMBER_NAME(m_nv4,"m_nv4");
	HX_MARK_MEMBER_NAME(c,"c");
	HX_MARK_MEMBER_NAME(m_c,"m_c");
	HX_MARK_MEMBER_NAME(m_nc,"m_nc");
	HX_MARK_MEMBER_NAME(q,"q");
	HX_MARK_MEMBER_NAME(m_q,"m_q");
	HX_MARK_MEMBER_NAME(m_nq,"m_nq");
	HX_MARK_MEMBER_NAME(aabb3,"aabb3");
	HX_MARK_MEMBER_NAME(m_aabb3,"m_aabb3");
	HX_MARK_MEMBER_NAME(m_naabb3,"m_naabb3");
	HX_MARK_MEMBER_NAME(aabb2,"aabb2");
	HX_MARK_MEMBER_NAME(m_aabb2,"m_aabb2");
	HX_MARK_MEMBER_NAME(m_naabb2,"m_naabb2");
	HX_MARK_MEMBER_NAME(collision,"collision");
	HX_MARK_MEMBER_NAME(m_collision,"m_collision");
	HX_MARK_MEMBER_NAME(m_ncollision,"m_ncollision");
	HX_MARK_MEMBER_NAME(m4,"m4");
	HX_MARK_MEMBER_NAME(m_m4,"m_m4");
	HX_MARK_MEMBER_NAME(m_nm4,"m_nm4");
	HX_MARK_MEMBER_NAME(m4l,"m4l");
	HX_MARK_END_CLASS();
}

void DataContext_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(i,"i");
	HX_VISIT_MEMBER_NAME(v,"v");
	HX_VISIT_MEMBER_NAME(v2,"v2");
	HX_VISIT_MEMBER_NAME(m_v2,"m_v2");
	HX_VISIT_MEMBER_NAME(m_nv2,"m_nv2");
	HX_VISIT_MEMBER_NAME(v3,"v3");
	HX_VISIT_MEMBER_NAME(m_v3,"m_v3");
	HX_VISIT_MEMBER_NAME(m_nv3,"m_nv3");
	HX_VISIT_MEMBER_NAME(v4,"v4");
	HX_VISIT_MEMBER_NAME(m_v4,"m_v4");
	HX_VISIT_MEMBER_NAME(m_nv4,"m_nv4");
	HX_VISIT_MEMBER_NAME(c,"c");
	HX_VISIT_MEMBER_NAME(m_c,"m_c");
	HX_VISIT_MEMBER_NAME(m_nc,"m_nc");
	HX_VISIT_MEMBER_NAME(q,"q");
	HX_VISIT_MEMBER_NAME(m_q,"m_q");
	HX_VISIT_MEMBER_NAME(m_nq,"m_nq");
	HX_VISIT_MEMBER_NAME(aabb3,"aabb3");
	HX_VISIT_MEMBER_NAME(m_aabb3,"m_aabb3");
	HX_VISIT_MEMBER_NAME(m_naabb3,"m_naabb3");
	HX_VISIT_MEMBER_NAME(aabb2,"aabb2");
	HX_VISIT_MEMBER_NAME(m_aabb2,"m_aabb2");
	HX_VISIT_MEMBER_NAME(m_naabb2,"m_naabb2");
	HX_VISIT_MEMBER_NAME(collision,"collision");
	HX_VISIT_MEMBER_NAME(m_collision,"m_collision");
	HX_VISIT_MEMBER_NAME(m_ncollision,"m_ncollision");
	HX_VISIT_MEMBER_NAME(m4,"m4");
	HX_VISIT_MEMBER_NAME(m_m4,"m_m4");
	HX_VISIT_MEMBER_NAME(m_nm4,"m_nm4");
	HX_VISIT_MEMBER_NAME(m4l,"m4l");
}

Dynamic DataContext_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { return i; }
		if (HX_FIELD_EQ(inName,"v") ) { return v; }
		if (HX_FIELD_EQ(inName,"c") ) { return inCallProp == hx::paccAlways ? get_c() : c; }
		if (HX_FIELD_EQ(inName,"q") ) { return inCallProp == hx::paccAlways ? get_q() : q; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"v2") ) { return inCallProp == hx::paccAlways ? get_v2() : v2; }
		if (HX_FIELD_EQ(inName,"v3") ) { return inCallProp == hx::paccAlways ? get_v3() : v3; }
		if (HX_FIELD_EQ(inName,"v4") ) { return inCallProp == hx::paccAlways ? get_v4() : v4; }
		if (HX_FIELD_EQ(inName,"m4") ) { return inCallProp == hx::paccAlways ? get_m4() : m4; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"m_c") ) { return m_c; }
		if (HX_FIELD_EQ(inName,"m_q") ) { return m_q; }
		if (HX_FIELD_EQ(inName,"m4l") ) { return m4l; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"m_v2") ) { return m_v2; }
		if (HX_FIELD_EQ(inName,"m_v3") ) { return m_v3; }
		if (HX_FIELD_EQ(inName,"m_v4") ) { return m_v4; }
		if (HX_FIELD_EQ(inName,"m_nc") ) { return m_nc; }
		if (HX_FIELD_EQ(inName,"m_nq") ) { return m_nq; }
		if (HX_FIELD_EQ(inName,"m_m4") ) { return m_m4; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"m_nv2") ) { return m_nv2; }
		if (HX_FIELD_EQ(inName,"m_nv3") ) { return m_nv3; }
		if (HX_FIELD_EQ(inName,"m_nv4") ) { return m_nv4; }
		if (HX_FIELD_EQ(inName,"get_c") ) { return get_c_dyn(); }
		if (HX_FIELD_EQ(inName,"get_q") ) { return get_q_dyn(); }
		if (HX_FIELD_EQ(inName,"aabb3") ) { return inCallProp == hx::paccAlways ? get_aabb3() : aabb3; }
		if (HX_FIELD_EQ(inName,"aabb2") ) { return inCallProp == hx::paccAlways ? get_aabb2() : aabb2; }
		if (HX_FIELD_EQ(inName,"m_nm4") ) { return m_nm4; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_v2") ) { return get_v2_dyn(); }
		if (HX_FIELD_EQ(inName,"get_v3") ) { return get_v3_dyn(); }
		if (HX_FIELD_EQ(inName,"get_v4") ) { return get_v4_dyn(); }
		if (HX_FIELD_EQ(inName,"get_m4") ) { return get_m4_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_aabb3") ) { return m_aabb3; }
		if (HX_FIELD_EQ(inName,"m_aabb2") ) { return m_aabb2; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_naabb3") ) { return m_naabb3; }
		if (HX_FIELD_EQ(inName,"m_naabb2") ) { return m_naabb2; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_aabb3") ) { return get_aabb3_dyn(); }
		if (HX_FIELD_EQ(inName,"get_aabb2") ) { return get_aabb2_dyn(); }
		if (HX_FIELD_EQ(inName,"collision") ) { return inCallProp == hx::paccAlways ? get_collision() : collision; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"m_collision") ) { return m_collision; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"m_ncollision") ) { return m_ncollision; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_collision") ) { return get_collision_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool DataContext_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"MAX_TEMP") ) { outValue = MAX_TEMP; return true;  }
	}
	return false;
}

Dynamic DataContext_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { i=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"v") ) { v=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"c") ) { c=inValue.Cast< ::haxor::math::Color >(); return inValue; }
		if (HX_FIELD_EQ(inName,"q") ) { q=inValue.Cast< ::haxor::math::Quaternion >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"v2") ) { v2=inValue.Cast< ::haxor::math::Vector2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"v3") ) { v3=inValue.Cast< ::haxor::math::Vector3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"v4") ) { v4=inValue.Cast< ::haxor::math::Vector4 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m4") ) { m4=inValue.Cast< ::haxor::math::Matrix4 >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"m_c") ) { m_c=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_q") ) { m_q=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m4l") ) { m4l=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"m_v2") ) { m_v2=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_v3") ) { m_v3=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_v4") ) { m_v4=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_nc") ) { m_nc=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_nq") ) { m_nq=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_m4") ) { m_m4=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"m_nv2") ) { m_nv2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_nv3") ) { m_nv3=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_nv4") ) { m_nv4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"aabb3") ) { aabb3=inValue.Cast< ::haxor::math::AABB3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"aabb2") ) { aabb2=inValue.Cast< ::haxor::math::AABB2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_nm4") ) { m_nm4=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_aabb3") ) { m_aabb3=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_aabb2") ) { m_aabb2=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_naabb3") ) { m_naabb3=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_naabb2") ) { m_naabb2=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"collision") ) { collision=inValue.Cast< ::haxor::physics::Collision >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"m_collision") ) { m_collision=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"m_ncollision") ) { m_ncollision=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DataContext_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"MAX_TEMP") ) { MAX_TEMP=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void DataContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("i","\x69","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("v","\x76","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("v2","\xfc","\x66","\x00","\x00"));
	outFields->push(HX_HCSTRING("m_v2","\xce","\xbe","\x54","\x48"));
	outFields->push(HX_HCSTRING("m_nv2","\xd8","\x5e","\xcc","\x01"));
	outFields->push(HX_HCSTRING("v3","\xfd","\x66","\x00","\x00"));
	outFields->push(HX_HCSTRING("m_v3","\xcf","\xbe","\x54","\x48"));
	outFields->push(HX_HCSTRING("m_nv3","\xd9","\x5e","\xcc","\x01"));
	outFields->push(HX_HCSTRING("v4","\xfe","\x66","\x00","\x00"));
	outFields->push(HX_HCSTRING("m_v4","\xd0","\xbe","\x54","\x48"));
	outFields->push(HX_HCSTRING("m_nv4","\xda","\x5e","\xcc","\x01"));
	outFields->push(HX_HCSTRING("c","\x63","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("m_c","\xd1","\x08","\x53","\x00"));
	outFields->push(HX_HCSTRING("m_nc","\x07","\xb8","\x54","\x48"));
	outFields->push(HX_HCSTRING("q","\x71","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("m_q","\xdf","\x08","\x53","\x00"));
	outFields->push(HX_HCSTRING("m_nq","\x15","\xb8","\x54","\x48"));
	outFields->push(HX_HCSTRING("aabb3","\x93","\xa9","\x46","\x1a"));
	outFields->push(HX_HCSTRING("m_aabb3","\x01","\x81","\xd1","\xca"));
	outFields->push(HX_HCSTRING("m_naabb3","\x37","\x03","\x7a","\xde"));
	outFields->push(HX_HCSTRING("aabb2","\x92","\xa9","\x46","\x1a"));
	outFields->push(HX_HCSTRING("m_aabb2","\x00","\x81","\xd1","\xca"));
	outFields->push(HX_HCSTRING("m_naabb2","\x36","\x03","\x7a","\xde"));
	outFields->push(HX_HCSTRING("collision","\x72","\xa8","\x3a","\xdb"));
	outFields->push(HX_HCSTRING("m_collision","\xe0","\xce","\x90","\x15"));
	outFields->push(HX_HCSTRING("m_ncollision","\x16","\xa4","\x45","\x4c"));
	outFields->push(HX_HCSTRING("m4","\x27","\x5f","\x00","\x00"));
	outFields->push(HX_HCSTRING("m_m4","\xf9","\xb6","\x54","\x48"));
	outFields->push(HX_HCSTRING("m_nm4","\x03","\x57","\xcc","\x01"));
	outFields->push(HX_HCSTRING("m4l","\x65","\xe3","\x52","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(DataContext_obj,i),HX_HCSTRING("i","\x69","\x00","\x00","\x00")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(DataContext_obj,v),HX_HCSTRING("v","\x76","\x00","\x00","\x00")},
	{hx::fsObject /*::haxor::math::Vector2*/ ,(int)offsetof(DataContext_obj,v2),HX_HCSTRING("v2","\xfc","\x66","\x00","\x00")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DataContext_obj,m_v2),HX_HCSTRING("m_v2","\xce","\xbe","\x54","\x48")},
	{hx::fsInt,(int)offsetof(DataContext_obj,m_nv2),HX_HCSTRING("m_nv2","\xd8","\x5e","\xcc","\x01")},
	{hx::fsObject /*::haxor::math::Vector3*/ ,(int)offsetof(DataContext_obj,v3),HX_HCSTRING("v3","\xfd","\x66","\x00","\x00")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DataContext_obj,m_v3),HX_HCSTRING("m_v3","\xcf","\xbe","\x54","\x48")},
	{hx::fsInt,(int)offsetof(DataContext_obj,m_nv3),HX_HCSTRING("m_nv3","\xd9","\x5e","\xcc","\x01")},
	{hx::fsObject /*::haxor::math::Vector4*/ ,(int)offsetof(DataContext_obj,v4),HX_HCSTRING("v4","\xfe","\x66","\x00","\x00")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DataContext_obj,m_v4),HX_HCSTRING("m_v4","\xd0","\xbe","\x54","\x48")},
	{hx::fsInt,(int)offsetof(DataContext_obj,m_nv4),HX_HCSTRING("m_nv4","\xda","\x5e","\xcc","\x01")},
	{hx::fsObject /*::haxor::math::Color*/ ,(int)offsetof(DataContext_obj,c),HX_HCSTRING("c","\x63","\x00","\x00","\x00")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DataContext_obj,m_c),HX_HCSTRING("m_c","\xd1","\x08","\x53","\x00")},
	{hx::fsInt,(int)offsetof(DataContext_obj,m_nc),HX_HCSTRING("m_nc","\x07","\xb8","\x54","\x48")},
	{hx::fsObject /*::haxor::math::Quaternion*/ ,(int)offsetof(DataContext_obj,q),HX_HCSTRING("q","\x71","\x00","\x00","\x00")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DataContext_obj,m_q),HX_HCSTRING("m_q","\xdf","\x08","\x53","\x00")},
	{hx::fsInt,(int)offsetof(DataContext_obj,m_nq),HX_HCSTRING("m_nq","\x15","\xb8","\x54","\x48")},
	{hx::fsObject /*::haxor::math::AABB3*/ ,(int)offsetof(DataContext_obj,aabb3),HX_HCSTRING("aabb3","\x93","\xa9","\x46","\x1a")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DataContext_obj,m_aabb3),HX_HCSTRING("m_aabb3","\x01","\x81","\xd1","\xca")},
	{hx::fsInt,(int)offsetof(DataContext_obj,m_naabb3),HX_HCSTRING("m_naabb3","\x37","\x03","\x7a","\xde")},
	{hx::fsObject /*::haxor::math::AABB2*/ ,(int)offsetof(DataContext_obj,aabb2),HX_HCSTRING("aabb2","\x92","\xa9","\x46","\x1a")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DataContext_obj,m_aabb2),HX_HCSTRING("m_aabb2","\x00","\x81","\xd1","\xca")},
	{hx::fsInt,(int)offsetof(DataContext_obj,m_naabb2),HX_HCSTRING("m_naabb2","\x36","\x03","\x7a","\xde")},
	{hx::fsObject /*::haxor::physics::Collision*/ ,(int)offsetof(DataContext_obj,collision),HX_HCSTRING("collision","\x72","\xa8","\x3a","\xdb")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DataContext_obj,m_collision),HX_HCSTRING("m_collision","\xe0","\xce","\x90","\x15")},
	{hx::fsInt,(int)offsetof(DataContext_obj,m_ncollision),HX_HCSTRING("m_ncollision","\x16","\xa4","\x45","\x4c")},
	{hx::fsObject /*::haxor::math::Matrix4*/ ,(int)offsetof(DataContext_obj,m4),HX_HCSTRING("m4","\x27","\x5f","\x00","\x00")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DataContext_obj,m_m4),HX_HCSTRING("m_m4","\xf9","\xb6","\x54","\x48")},
	{hx::fsInt,(int)offsetof(DataContext_obj,m_nm4),HX_HCSTRING("m_nm4","\x03","\x57","\xcc","\x01")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(DataContext_obj,m4l),HX_HCSTRING("m4l","\x65","\xe3","\x52","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &DataContext_obj::MAX_TEMP,HX_HCSTRING("MAX_TEMP","\xef","\xe1","\x52","\xdd")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("i","\x69","\x00","\x00","\x00"),
	HX_HCSTRING("v","\x76","\x00","\x00","\x00"),
	HX_HCSTRING("v2","\xfc","\x66","\x00","\x00"),
	HX_HCSTRING("get_v2","\x45","\xfe","\x2f","\xa3"),
	HX_HCSTRING("m_v2","\xce","\xbe","\x54","\x48"),
	HX_HCSTRING("m_nv2","\xd8","\x5e","\xcc","\x01"),
	HX_HCSTRING("v3","\xfd","\x66","\x00","\x00"),
	HX_HCSTRING("get_v3","\x46","\xfe","\x2f","\xa3"),
	HX_HCSTRING("m_v3","\xcf","\xbe","\x54","\x48"),
	HX_HCSTRING("m_nv3","\xd9","\x5e","\xcc","\x01"),
	HX_HCSTRING("v4","\xfe","\x66","\x00","\x00"),
	HX_HCSTRING("get_v4","\x47","\xfe","\x2f","\xa3"),
	HX_HCSTRING("m_v4","\xd0","\xbe","\x54","\x48"),
	HX_HCSTRING("m_nv4","\xda","\x5e","\xcc","\x01"),
	HX_HCSTRING("c","\x63","\x00","\x00","\x00"),
	HX_HCSTRING("get_c","\x3a","\xa5","\x60","\x91"),
	HX_HCSTRING("m_c","\xd1","\x08","\x53","\x00"),
	HX_HCSTRING("m_nc","\x07","\xb8","\x54","\x48"),
	HX_HCSTRING("q","\x71","\x00","\x00","\x00"),
	HX_HCSTRING("get_q","\x48","\xa5","\x60","\x91"),
	HX_HCSTRING("m_q","\xdf","\x08","\x53","\x00"),
	HX_HCSTRING("m_nq","\x15","\xb8","\x54","\x48"),
	HX_HCSTRING("aabb3","\x93","\xa9","\x46","\x1a"),
	HX_HCSTRING("get_aabb3","\xea","\x05","\xf0","\x5d"),
	HX_HCSTRING("m_aabb3","\x01","\x81","\xd1","\xca"),
	HX_HCSTRING("m_naabb3","\x37","\x03","\x7a","\xde"),
	HX_HCSTRING("aabb2","\x92","\xa9","\x46","\x1a"),
	HX_HCSTRING("get_aabb2","\xe9","\x05","\xf0","\x5d"),
	HX_HCSTRING("m_aabb2","\x00","\x81","\xd1","\xca"),
	HX_HCSTRING("m_naabb2","\x36","\x03","\x7a","\xde"),
	HX_HCSTRING("collision","\x72","\xa8","\x3a","\xdb"),
	HX_HCSTRING("get_collision","\x49","\x7c","\x9e","\x9c"),
	HX_HCSTRING("m_collision","\xe0","\xce","\x90","\x15"),
	HX_HCSTRING("m_ncollision","\x16","\xa4","\x45","\x4c"),
	HX_HCSTRING("m4","\x27","\x5f","\x00","\x00"),
	HX_HCSTRING("get_m4","\x70","\xf6","\x2f","\xa3"),
	HX_HCSTRING("m_m4","\xf9","\xb6","\x54","\x48"),
	HX_HCSTRING("m_nm4","\x03","\x57","\xcc","\x01"),
	HX_HCSTRING("m4l","\x65","\xe3","\x52","\x00"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DataContext_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DataContext_obj::MAX_TEMP,"MAX_TEMP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DataContext_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DataContext_obj::MAX_TEMP,"MAX_TEMP");
};

#endif

hx::Class DataContext_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("MAX_TEMP","\xef","\xe1","\x52","\xdd"),
	String(null()) };

void DataContext_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.context.DataContext","\x9a","\xe3","\xdd","\x4f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DataContext_obj::__GetStatic;
	__mClass->mSetStaticField = &DataContext_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DataContext_obj >;
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

void DataContext_obj::__boot()
{
	MAX_TEMP= (int)128;
}

} // end namespace haxor
} // end namespace context
