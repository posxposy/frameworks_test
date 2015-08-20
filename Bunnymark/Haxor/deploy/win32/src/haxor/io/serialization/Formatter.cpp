#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_rtti_Meta
#include <haxe/rtti/Meta.h>
#endif
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_io_Buffer
#include <haxor/io/Buffer.h>
#endif
#ifndef INCLUDED_haxor_io_FloatArray
#include <haxor/io/FloatArray.h>
#endif
#ifndef INCLUDED_haxor_io_Int32Array
#include <haxor/io/Int32Array.h>
#endif
#ifndef INCLUDED_haxor_io_UInt16Array
#include <haxor/io/UInt16Array.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_Formatter
#include <haxor/io/serialization/Formatter.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_ISerializable
#include <haxor/io/serialization/ISerializable.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_SerializedData
#include <haxor/io/serialization/SerializedData.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_SerializedField
#include <haxor/io/serialization/SerializedField.h>
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
namespace haxor{
namespace io{
namespace serialization{

Void Formatter_obj::__construct()
{
HX_STACK_FRAME("haxor.io.serialization.Formatter","new",0x65fe71c2,"haxor.io.serialization.Formatter.new","haxor/io/serialization/Formatter.hx",29,0x63bdf80f)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Formatter_obj::~Formatter_obj() { }

Dynamic Formatter_obj::__CreateEmpty() { return  new Formatter_obj; }
hx::ObjectPtr< Formatter_obj > Formatter_obj::__new()
{  hx::ObjectPtr< Formatter_obj > _result_ = new Formatter_obj();
	_result_->__construct();
	return _result_;}

Dynamic Formatter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Formatter_obj > _result_ = new Formatter_obj();
	_result_->__construct();
	return _result_;}

::String Formatter_obj::Serialize( Dynamic p_target){
	HX_STACK_FRAME("haxor.io.serialization.Formatter","Serialize",0x82d614a2,"haxor.io.serialization.Formatter.Serialize","haxor/io/serialization/Formatter.hx",38,0x63bdf80f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_target,"p_target")
	HX_STACK_LINE(39)
	Dynamic tmp = p_target;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	::haxor::io::serialization::SerializedData tmp1 = this->SerializeStep(null(),tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(39)
	::haxor::io::serialization::SerializedData n = tmp1;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(40)
	::haxor::io::serialization::SerializedData tmp2 = n;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(40)
	::String tmp3 = this->OnSerialize(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(40)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Formatter_obj,Serialize,return )

::haxor::io::serialization::SerializedData Formatter_obj::GetSerializedData( Dynamic p_target){
	HX_STACK_FRAME("haxor.io.serialization.Formatter","GetSerializedData",0xf68ad2c6,"haxor.io.serialization.Formatter.GetSerializedData","haxor/io/serialization/Formatter.hx",48,0x63bdf80f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_target,"p_target")
	HX_STACK_LINE(48)
	Dynamic tmp = p_target;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	::haxor::io::serialization::SerializedData tmp1 = this->SerializeStep(null(),tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(48)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Formatter_obj,GetSerializedData,return )

::haxor::io::serialization::SerializedData Formatter_obj::SerializeStep( ::haxor::io::serialization::SerializedData p_parent,Dynamic p_target){
	HX_STACK_FRAME("haxor.io.serialization.Formatter","SerializeStep",0x278f210e,"haxor.io.serialization.Formatter.SerializeStep","haxor/io/serialization/Formatter.hx",56,0x63bdf80f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_parent,"p_parent")
	HX_STACK_ARG(p_target,"p_target")
	HX_STACK_LINE(57)
	Dynamic t = p_target;		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(58)
	Dynamic tmp = t;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	::hx::Class tmp1 = ::Type_obj::getClass(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(58)
	::hx::Class type = tmp1;		HX_STACK_VAR(type,"type");
	HX_STACK_LINE(59)
	::haxor::io::serialization::SerializedData tmp2 = ::haxor::io::serialization::SerializedData_obj::__new(p_target);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(59)
	::haxor::io::serialization::SerializedData n = tmp2;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(60)
	bool tmp3 = (p_parent != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(60)
	if ((tmp3)){
		HX_STACK_LINE(60)
		::haxor::io::serialization::SerializedData tmp4 = n;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(60)
		p_parent->children->push(tmp4);
	}
	HX_STACK_LINE(62)
	Dynamic tmp4 = t;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(62)
	Array< ::Dynamic > tmp5 = this->GetClassPath(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(62)
	Array< ::Dynamic > types = tmp5;		HX_STACK_VAR(types,"types");
	HX_STACK_LINE(64)
	{
		HX_STACK_LINE(64)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(64)
		int _g = types->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(64)
		while((true)){
			HX_STACK_LINE(64)
			bool tmp6 = (_g1 < _g);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(64)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(64)
			if ((tmp7)){
				HX_STACK_LINE(64)
				break;
			}
			HX_STACK_LINE(64)
			int tmp8 = (_g1)++;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(64)
			int i = tmp8;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(66)
			::hx::Class tmp9 = types->__get(i).StaticCast< ::hx::Class >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(66)
			::hx::Class c = tmp9;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(67)
			::hx::Class tmp10 = c;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(67)
			Dynamic tmp11 = ::haxe::rtti::Meta_obj::getFields(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(67)
			Dynamic type_metas = tmp11;		HX_STACK_VAR(type_metas,"type_metas");
			HX_STACK_LINE(68)
			Dynamic tmp12 = type_metas;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(68)
			Array< ::String > tmp13 = ::Reflect_obj::fields(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(68)
			Array< ::String > type_fields = tmp13;		HX_STACK_VAR(type_fields,"type_fields");
			HX_STACK_LINE(70)
			{
				HX_STACK_LINE(70)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(70)
				int _g2 = type_fields->length;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(70)
				while((true)){
					HX_STACK_LINE(70)
					bool tmp14 = (_g3 < _g2);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(70)
					bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(70)
					if ((tmp15)){
						HX_STACK_LINE(70)
						break;
					}
					HX_STACK_LINE(70)
					int tmp16 = (_g3)++;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(70)
					int j = tmp16;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(72)
					::String tmp17 = type_fields->__get(j);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(72)
					::String field_name = tmp17;		HX_STACK_VAR(field_name,"field_name");
					HX_STACK_LINE(73)
					Dynamic tmp18 = type_metas;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(73)
					::String tmp19 = field_name;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(73)
					Dynamic tmp20 = ::Reflect_obj::getProperty(tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(73)
					Dynamic var_metas = tmp20;		HX_STACK_VAR(var_metas,"var_metas");
					HX_STACK_LINE(74)
					Dynamic tmp21 = var_metas;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(74)
					bool tmp22 = ::Reflect_obj::hasField(tmp21,HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4"));		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(74)
					bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(74)
					if ((tmp23)){
						HX_STACK_LINE(74)
						continue;
					}
					HX_STACK_LINE(75)
					Dynamic tmp24 = t;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(75)
					::String tmp25 = field_name;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(75)
					Dynamic tmp26 = ::Reflect_obj::getProperty(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(75)
					Dynamic field_value = tmp26;		HX_STACK_VAR(field_value,"field_value");
					HX_STACK_LINE(76)
					bool tmp27 = (field_value == null());		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(76)
					if ((tmp27)){
						HX_STACK_LINE(76)
						continue;
					}
					HX_STACK_LINE(77)
					Dynamic tmp28 = field_value;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(77)
					::hx::Class tmp29 = ::Type_obj::getClass(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(77)
					::hx::Class field_type = tmp29;		HX_STACK_VAR(field_type,"field_type");
					HX_STACK_LINE(78)
					::hx::Class tmp30 = field_type;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(78)
					::String tmp31 = ::Type_obj::getClassName(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(78)
					::String field_type_name = tmp31;		HX_STACK_VAR(field_type_name,"field_type_name");
					struct _Function_5_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/io/serialization/Formatter.hx",80,0x63bdf80f)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(80)
					Dynamic tmp32 = _Function_5_1::Block();		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(80)
					::haxor::io::serialization::SerializedField ff = ((::haxor::io::serialization::SerializedField)(tmp32));		HX_STACK_VAR(ff,"ff");
					HX_STACK_LINE(81)
					ff->target = t;
					HX_STACK_LINE(82)
					ff->meta = var_metas;
					HX_STACK_LINE(83)
					ff->name = field_name;
					HX_STACK_LINE(84)
					Dynamic tmp33 = field_value;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(84)
					bool tmp34 = ::Std_obj::is(tmp33,hx::ClassOf< ::Bool >());		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(84)
					::String tmp35;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(84)
					if ((tmp34)){
						HX_STACK_LINE(84)
						tmp35 = HX_HCSTRING("Bool","\x4a","\xb0","\xf4","\x2b");
					}
					else{
						HX_STACK_LINE(84)
						Dynamic tmp36 = field_value;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(84)
						bool tmp37 = ::Std_obj::is(tmp36,hx::ClassOf< ::Int >());		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(84)
						if ((tmp37)){
							HX_STACK_LINE(84)
							tmp35 = HX_HCSTRING("Int","\xcf","\xc4","\x37","\x00");
						}
						else{
							HX_STACK_LINE(84)
							tmp35 = field_type_name;
						}
					}
					HX_STACK_LINE(84)
					ff->type = tmp35;
					HX_STACK_LINE(85)
					ff->value = field_value;
					HX_STACK_LINE(87)
					::haxor::io::serialization::SerializedField tmp36 = ff;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(87)
					n->fields->push(tmp36);
				}
			}
		}
	}
	HX_STACK_LINE(91)
	Dynamic tmp6 = t;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(91)
	bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::haxor::io::serialization::ISerializable >());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(91)
	::haxor::io::serialization::ISerializable tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(91)
	if ((tmp7)){
		HX_STACK_LINE(91)
		tmp8 = ((::haxor::io::serialization::ISerializable)(t));
	}
	else{
		HX_STACK_LINE(91)
		tmp8 = null();
	}
	HX_STACK_LINE(91)
	::haxor::io::serialization::ISerializable ts = tmp8;		HX_STACK_VAR(ts,"ts");
	HX_STACK_LINE(92)
	{
		HX_STACK_LINE(92)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(92)
		int tmp9 = n->fields->length;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(92)
		int _g = tmp9;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(92)
		while((true)){
			HX_STACK_LINE(92)
			bool tmp10 = (_g1 < _g);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(92)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(92)
			if ((tmp11)){
				HX_STACK_LINE(92)
				break;
			}
			HX_STACK_LINE(92)
			int tmp12 = (_g1)++;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(92)
			int i = tmp12;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(94)
			::haxor::io::serialization::SerializedField tmp13 = n->fields->__get(i).StaticCast< ::haxor::io::serialization::SerializedField >();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(94)
			::haxor::io::serialization::SerializedField ff = tmp13;		HX_STACK_VAR(ff,"ff");
			HX_STACK_LINE(95)
			::String s = null();		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(97)
			Dynamic tmp14 = ff->value;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(97)
			bool tmp15 = ::Std_obj::is(tmp14,hx::ClassOf< ::haxor::core::Resource >());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(97)
			if ((tmp15)){
				HX_STACK_LINE(97)
				ff->type = HX_HCSTRING("$GUID","\xad","\xc7","\x9b","\xe9");
			}
			HX_STACK_LINE(99)
			bool tmp16 = (ts != null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(99)
			if ((tmp16)){
				HX_STACK_LINE(99)
				::haxor::io::serialization::SerializedField tmp17 = ff;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(99)
				::String tmp18 = ts->OnSerializeField(tmp17,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(99)
				s = tmp18;
			}
			HX_STACK_LINE(100)
			bool tmp17 = (s == null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(100)
			if ((tmp17)){
				HX_STACK_LINE(100)
				::haxor::io::serialization::SerializedField tmp18 = ff;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(100)
				::String tmp19 = this->OnField(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(100)
				s = tmp19;
			}
			HX_STACK_LINE(101)
			bool tmp18 = (s != null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(101)
			if ((tmp18)){
				HX_STACK_LINE(101)
				ff->value = s;
			}
			else{
				HX_STACK_LINE(104)
				Dynamic tmp19 = ff->value;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(104)
				bool tmp20 = ::Std_obj::is(tmp19,hx::ClassOf< Array<int> >());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(104)
				if ((tmp20)){
					HX_STACK_LINE(106)
					Dynamic l = ff->value;		HX_STACK_VAR(l,"l");
					HX_STACK_LINE(107)
					Array< ::Dynamic > tmp21 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(107)
					Array< ::Dynamic > nl = tmp21;		HX_STACK_VAR(nl,"nl");
					HX_STACK_LINE(108)
					{
						HX_STACK_LINE(108)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(108)
						int _g2 = l->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(108)
						while((true)){
							HX_STACK_LINE(108)
							bool tmp22 = (_g3 < _g2);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(108)
							bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(108)
							if ((tmp23)){
								HX_STACK_LINE(108)
								break;
							}
							HX_STACK_LINE(108)
							int tmp24 = (_g3)++;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(108)
							int j = tmp24;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(110)
							Dynamic tmp25 = l->__GetItem(j);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(110)
							::haxor::io::serialization::SerializedData tmp26 = this->SerializeStep(null(),tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(110)
							nl->push(tmp26);
						}
					}
					HX_STACK_LINE(112)
					ff->type = HX_HCSTRING("$NodeArray","\x73","\x07","\x11","\x76");
					HX_STACK_LINE(113)
					ff->value = nl;
				}
				else{
					HX_STACK_LINE(117)
					ff->type = HX_HCSTRING("$Node","\x46","\x18","\x50","\xee");
					HX_STACK_LINE(118)
					Dynamic tmp21 = ff->value;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(118)
					::haxor::io::serialization::SerializedData tmp22 = this->SerializeStep(null(),tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(118)
					ff->value = tmp22;
				}
			}
		}
	}
	HX_STACK_LINE(122)
	::haxor::io::serialization::SerializedData tmp9 = n;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(122)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC2(Formatter_obj,SerializeStep,return )

Dynamic Formatter_obj::Deserialize( ::String p_data){
	HX_STACK_FRAME("haxor.io.serialization.Formatter","Deserialize",0xc085f981,"haxor.io.serialization.Formatter.Deserialize","haxor/io/serialization/Formatter.hx",131,0x63bdf80f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_data,"p_data")
	HX_STACK_LINE(131)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Formatter_obj,Deserialize,return )

Dynamic Formatter_obj::DeserializeField( ::haxor::io::serialization::SerializedField p_field,Dynamic p_target){
	HX_STACK_FRAME("haxor.io.serialization.Formatter","DeserializeField",0x41fdf779,"haxor.io.serialization.Formatter.DeserializeField","haxor/io/serialization/Formatter.hx",139,0x63bdf80f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_field,"p_field")
	HX_STACK_ARG(p_target,"p_target")
	HX_STACK_LINE(140)
	Dynamic d = null();		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(141)
	Array< ::Dynamic > nl;		HX_STACK_VAR(nl,"nl");
	HX_STACK_LINE(142)
	{
		HX_STACK_LINE(142)
		::String _g = p_field->type;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(142)
		::String tmp = _g;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(142)
		::String _switch_1 = (tmp);
		if (  ( _switch_1==HX_HCSTRING("$Node","\x46","\x18","\x50","\xee"))){
			HX_STACK_LINE(144)
			Dynamic tmp1 = p_field->value;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(144)
			Dynamic tmp2 = this->DeserializeData(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(144)
			d = tmp2;
		}
		else if (  ( _switch_1==HX_HCSTRING("$NodeArray","\x73","\x07","\x11","\x76"))){
			HX_STACK_LINE(147)
			Dynamic tmp1 = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(147)
			d = tmp1;
			HX_STACK_LINE(148)
			nl = p_field->value;
			HX_STACK_LINE(149)
			{
				HX_STACK_LINE(149)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(149)
				int _g1 = nl->length;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(149)
				while((true)){
					HX_STACK_LINE(149)
					bool tmp2 = (_g2 < _g1);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(149)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(149)
					if ((tmp3)){
						HX_STACK_LINE(149)
						break;
					}
					HX_STACK_LINE(149)
					int tmp4 = (_g2)++;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(149)
					int j = tmp4;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(149)
					::haxor::io::serialization::SerializedData tmp5 = nl->__get(j).StaticCast< ::haxor::io::serialization::SerializedData >();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(149)
					d->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(this->DeserializeData(tmp5));
				}
			}
		}
		else  {
			HX_STACK_LINE(152)
			Dynamic tmp1 = p_field->value;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(152)
			::String tmp2 = p_field->type;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(152)
			Dynamic tmp3 = ::haxor::io::serialization::Formatter_obj::FromString(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(152)
			d = tmp3;
		}
;
;
	}
	HX_STACK_LINE(154)
	Dynamic tmp = p_target;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(154)
	::String tmp1 = p_field->name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(154)
	Dynamic tmp2 = d;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(154)
	::Reflect_obj::setProperty(tmp,tmp1,tmp2);
	HX_STACK_LINE(155)
	Dynamic tmp3 = d;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(155)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(Formatter_obj,DeserializeField,return )

Dynamic Formatter_obj::DeserializeData( ::haxor::io::serialization::SerializedData p_data){
	HX_STACK_FRAME("haxor.io.serialization.Formatter","DeserializeData",0x2163d04b,"haxor.io.serialization.Formatter.DeserializeData","haxor/io/serialization/Formatter.hx",164,0x63bdf80f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_data,"p_data")
	HX_STACK_LINE(165)
	::String tmp = p_data->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(165)
	::hx::Class tmp1 = ::Type_obj::resolveClass(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(165)
	::hx::Class c = tmp1;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(166)
	Dynamic res = null();		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(167)
	::hx::Class tmp2 = c;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(167)
	Dynamic tmp3 = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(167)
	Dynamic tmp4 = ::Type_obj::createInstance(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(167)
	res = tmp4;
	HX_STACK_LINE(168)
	{
		HX_STACK_LINE(168)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(168)
		int tmp5 = p_data->fields->length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(168)
		int _g = tmp5;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(168)
		while((true)){
			HX_STACK_LINE(168)
			bool tmp6 = (_g1 < _g);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(168)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(168)
			if ((tmp7)){
				HX_STACK_LINE(168)
				break;
			}
			HX_STACK_LINE(168)
			int tmp8 = (_g1)++;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(168)
			int i = tmp8;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(170)
			::haxor::io::serialization::SerializedField tmp9 = p_data->fields->__get(i).StaticCast< ::haxor::io::serialization::SerializedField >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(170)
			::haxor::io::serialization::SerializedField f = tmp9;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(171)
			bool has_parsed = false;		HX_STACK_VAR(has_parsed,"has_parsed");
			HX_STACK_LINE(172)
			Dynamic tmp10 = res;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(172)
			bool tmp11 = ::Std_obj::is(tmp10,hx::ClassOf< ::haxor::io::serialization::ISerializable >());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(172)
			if ((tmp11)){
				HX_STACK_LINE(174)
				::haxor::io::serialization::ISerializable isrl = ((::haxor::io::serialization::ISerializable)(res));		HX_STACK_VAR(isrl,"isrl");
				HX_STACK_LINE(175)
				::haxor::io::serialization::SerializedField tmp12 = f;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(175)
				bool tmp13 = isrl->OnDeserializeField(tmp12,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(175)
				has_parsed = tmp13;
			}
			HX_STACK_LINE(177)
			bool tmp12 = has_parsed;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(177)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(177)
			if ((tmp13)){
				HX_STACK_LINE(177)
				::haxor::io::serialization::SerializedField tmp14 = f;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(177)
				Dynamic tmp15 = res;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(177)
				this->DeserializeField(tmp14,tmp15);
			}
		}
	}
	HX_STACK_LINE(179)
	Dynamic tmp5 = res;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(179)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Formatter_obj,DeserializeData,return )

::haxor::io::serialization::SerializedField Formatter_obj::GetField( ::haxor::io::serialization::SerializedData p_node,::String p_name){
	HX_STACK_FRAME("haxor.io.serialization.Formatter","GetField",0xb0437bc2,"haxor.io.serialization.Formatter.GetField","haxor/io/serialization/Formatter.hx",189,0x63bdf80f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_node,"p_node")
	HX_STACK_ARG(p_name,"p_name")

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::String,p_name)
	int __ArgCount() const { return 1; }
	bool run(::haxor::io::serialization::SerializedField f){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxor/io/serialization/Formatter.hx",190,0x63bdf80f)
		HX_STACK_ARG(f,"f")
		{
			HX_STACK_LINE(190)
			bool tmp = (f->name == p_name);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(190)
			return tmp;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(190)
	Array< ::Dynamic > tmp = p_node->fields->filter( Dynamic(new _Function_1_1(p_name)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(190)
	::haxor::io::serialization::SerializedField tmp1 = tmp->__get((int)0).StaticCast< ::haxor::io::serialization::SerializedField >();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(190)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC2(Formatter_obj,GetField,return )

Array< ::Dynamic > Formatter_obj::GetClassPath( Dynamic p_var){
	HX_STACK_FRAME("haxor.io.serialization.Formatter","GetClassPath",0xbbf41105,"haxor.io.serialization.Formatter.GetClassPath","haxor/io/serialization/Formatter.hx",199,0x63bdf80f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_var,"p_var")
	HX_STACK_LINE(200)
	Array< ::Dynamic > tmp = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(200)
	Array< ::Dynamic > res = tmp;		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(201)
	Dynamic tmp1 = p_var;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(201)
	::hx::Class tmp2 = ::Type_obj::getClass(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(201)
	::hx::Class c = tmp2;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(202)
	while((true)){
		HX_STACK_LINE(202)
		bool tmp3 = (c != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(202)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(202)
		if ((tmp4)){
			HX_STACK_LINE(202)
			break;
		}
		HX_STACK_LINE(202)
		::hx::Class tmp5 = c;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(202)
		res->unshift(tmp5);
		HX_STACK_LINE(202)
		::hx::Class tmp6 = c;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(202)
		::hx::Class tmp7 = ::Type_obj::getSuperClass(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(202)
		c = tmp7;
	}
	HX_STACK_LINE(203)
	Array< ::Dynamic > tmp3 = res;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(203)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Formatter_obj,GetClassPath,return )

::String Formatter_obj::OnField( ::haxor::io::serialization::SerializedField p_field){
	HX_STACK_FRAME("haxor.io.serialization.Formatter","OnField",0xd776555d,"haxor.io.serialization.Formatter.OnField","haxor/io/serialization/Formatter.hx",213,0x63bdf80f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_field,"p_field")
	HX_STACK_LINE(213)
	Dynamic tmp = p_field->value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(213)
	::String tmp1 = ::haxor::io::serialization::Formatter_obj::ToString(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(213)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Formatter_obj,OnField,return )

::String Formatter_obj::OnSerialize( ::haxor::io::serialization::SerializedData p_root){
	HX_STACK_FRAME("haxor.io.serialization.Formatter","OnSerialize",0xae85ac03,"haxor.io.serialization.Formatter.OnSerialize","haxor/io/serialization/Formatter.hx",221,0x63bdf80f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_root,"p_root")
	HX_STACK_LINE(221)
	return HX_HCSTRING("","\x00","\x00","\x00","\x00");
}


HX_DEFINE_DYNAMIC_FUNC1(Formatter_obj,OnSerialize,return )

::String Formatter_obj::ToString( Dynamic p_v){
	HX_STACK_FRAME("haxor.io.serialization.Formatter","ToString",0x8847a82a,"haxor.io.serialization.Formatter.ToString","haxor/io/serialization/Formatter.hx",229,0x63bdf80f)
	HX_STACK_ARG(p_v,"p_v")
	HX_STACK_LINE(230)
	bool tmp = (p_v == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(230)
	if ((tmp)){
		HX_STACK_LINE(230)
		return HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	HX_STACK_LINE(231)
	Dynamic tmp1 = p_v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(231)
	bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::Int >());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(231)
	if ((tmp2)){
		HX_STACK_LINE(231)
		int v = ((int)(p_v));		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(231)
		::String tmp3 = (v + HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(231)
		return tmp3;
	}
	HX_STACK_LINE(232)
	Dynamic tmp3 = p_v;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(232)
	bool tmp4 = ::Std_obj::is(tmp3,hx::ClassOf< ::Float >());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(232)
	if ((tmp4)){
		HX_STACK_LINE(232)
		Float v = ((Float)(p_v));		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(232)
		::String tmp5 = (v + HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(232)
		return tmp5;
	}
	HX_STACK_LINE(233)
	Dynamic tmp5 = p_v;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(233)
	bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::Bool >());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(233)
	if ((tmp6)){
		HX_STACK_LINE(233)
		bool v = ((bool)(p_v));		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(233)
		bool tmp7 = v;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(233)
		::String tmp8 = ::Std_obj::string(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(233)
		::String tmp9 = (tmp8 + HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(233)
		return tmp9;
	}
	HX_STACK_LINE(234)
	Dynamic tmp7 = p_v;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(234)
	bool tmp8 = ::Std_obj::is(tmp7,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(234)
	if ((tmp8)){
		HX_STACK_LINE(234)
		::String v = ((::String)(p_v));		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(234)
		::String tmp9 = v;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(234)
		return tmp9;
	}
	HX_STACK_LINE(235)
	Dynamic tmp9 = p_v;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(235)
	bool tmp10 = ::Std_obj::is(tmp9,hx::ClassOf< ::haxor::math::Vector2 >());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(235)
	if ((tmp10)){
		HX_STACK_LINE(235)
		::haxor::math::Vector2 v = ((::haxor::math::Vector2)(p_v));		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(235)
		::String tmp11 = (v->x + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(235)
		Float tmp12 = v->y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(235)
		::String tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(235)
		return tmp13;
	}
	HX_STACK_LINE(236)
	Dynamic tmp11 = p_v;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(236)
	bool tmp12 = ::Std_obj::is(tmp11,hx::ClassOf< ::haxor::math::Vector3 >());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(236)
	if ((tmp12)){
		HX_STACK_LINE(236)
		::haxor::math::Vector3 v = ((::haxor::math::Vector3)(p_v));		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(236)
		::String tmp13 = (v->x + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(236)
		Float tmp14 = v->y;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(236)
		::String tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(236)
		::String tmp16 = (tmp15 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(236)
		Float tmp17 = v->z;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(236)
		::String tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(236)
		return tmp18;
	}
	HX_STACK_LINE(237)
	Dynamic tmp13 = p_v;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(237)
	bool tmp14 = ::Std_obj::is(tmp13,hx::ClassOf< ::haxor::math::Vector4 >());		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(237)
	if ((tmp14)){
		HX_STACK_LINE(237)
		::haxor::math::Vector4 v = ((::haxor::math::Vector4)(p_v));		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(237)
		::String tmp15 = (v->x + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(237)
		Float tmp16 = v->y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(237)
		::String tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(237)
		::String tmp18 = (tmp17 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(237)
		Float tmp19 = v->z;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(237)
		::String tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(237)
		::String tmp21 = (tmp20 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(237)
		Float tmp22 = v->w;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(237)
		::String tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(237)
		return tmp23;
	}
	HX_STACK_LINE(238)
	Dynamic tmp15 = p_v;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(238)
	bool tmp16 = ::Std_obj::is(tmp15,hx::ClassOf< ::haxor::math::AABB2 >());		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(238)
	if ((tmp16)){
		HX_STACK_LINE(238)
		::haxor::math::AABB2 v = ((::haxor::math::AABB2)(p_v));		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(238)
		Float tmp17 = v->get_xMin();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(238)
		::String tmp18 = (tmp17 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(238)
		Float tmp19 = v->get_xMax();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(238)
		::String tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(238)
		::String tmp21 = (tmp20 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(238)
		Float tmp22 = v->get_yMin();		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(238)
		::String tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(238)
		::String tmp24 = (tmp23 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(238)
		Float tmp25 = v->get_yMax();		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(238)
		::String tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(238)
		return tmp26;
	}
	HX_STACK_LINE(239)
	Dynamic tmp17 = p_v;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(239)
	bool tmp18 = ::Std_obj::is(tmp17,hx::ClassOf< ::haxor::math::AABB3 >());		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(239)
	if ((tmp18)){
		HX_STACK_LINE(239)
		::haxor::math::AABB3 v = ((::haxor::math::AABB3)(p_v));		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(239)
		::String tmp19 = (v->m_xMin + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(239)
		Float tmp20 = v->m_xMax;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(239)
		::String tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(239)
		::String tmp22 = (tmp21 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(239)
		Float tmp23 = v->m_yMin;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(239)
		::String tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(239)
		::String tmp25 = (tmp24 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(239)
		Float tmp26 = v->m_yMax;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(239)
		::String tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(239)
		::String tmp28 = (tmp27 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(239)
		Float tmp29 = v->m_zMin;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(239)
		::String tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(239)
		::String tmp31 = (tmp30 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(239)
		Float tmp32 = v->m_zMax;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(239)
		::String tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(239)
		return tmp33;
	}
	HX_STACK_LINE(240)
	Dynamic tmp19 = p_v;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(240)
	bool tmp20 = ::Std_obj::is(tmp19,hx::ClassOf< ::haxor::math::Color >());		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(240)
	if ((tmp20)){
		HX_STACK_LINE(240)
		::haxor::math::Color v = ((::haxor::math::Color)(p_v));		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(240)
		::String tmp21 = (v->r + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(240)
		Float tmp22 = v->g;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(240)
		::String tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(240)
		::String tmp24 = (tmp23 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(240)
		Float tmp25 = v->b;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(240)
		::String tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(240)
		::String tmp27 = (tmp26 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(240)
		Float tmp28 = v->a;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(240)
		::String tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(240)
		return tmp29;
	}
	HX_STACK_LINE(241)
	Dynamic tmp21 = p_v;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(241)
	bool tmp22 = ::Std_obj::is(tmp21,hx::ClassOf< ::haxor::math::Matrix4 >());		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(241)
	if ((tmp22)){
		HX_STACK_LINE(241)
		::haxor::math::Matrix4 v = ((::haxor::math::Matrix4)(p_v));		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(241)
		Array< Float > tmp23 = v->ToArray();		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(241)
		::String tmp24 = tmp23->join(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(241)
		return tmp24;
	}
	HX_STACK_LINE(242)
	Dynamic tmp23 = p_v;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(242)
	bool tmp24 = ::Std_obj::is(tmp23,hx::ClassOf< ::haxor::math::Quaternion >());		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(242)
	if ((tmp24)){
		HX_STACK_LINE(242)
		::haxor::math::Quaternion v = ((::haxor::math::Quaternion)(p_v));		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(242)
		::String tmp25 = (v->x + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(242)
		Float tmp26 = v->y;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(242)
		::String tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(242)
		::String tmp28 = (tmp27 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(242)
		Float tmp29 = v->z;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(242)
		::String tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(242)
		::String tmp31 = (tmp30 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(242)
		Float tmp32 = v->w;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(242)
		::String tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(242)
		return tmp33;
	}
	HX_STACK_LINE(243)
	Dynamic tmp25 = p_v;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(243)
	bool tmp26 = ::Std_obj::is(tmp25,hx::ClassOf< ::haxor::io::Buffer >());		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(243)
	if ((tmp26)){
		HX_STACK_LINE(243)
		::haxor::io::Buffer v = ((::haxor::io::Buffer)(p_v));		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(243)
		Array< int > tmp27 = v->ToByteArray();		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(243)
		::String tmp28 = tmp27->join(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(243)
		return tmp28;
	}
	HX_STACK_LINE(244)
	Dynamic tmp27 = p_v;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(244)
	bool tmp28 = ::Std_obj::is(tmp27,hx::ClassOf< ::haxor::core::Resource >());		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(244)
	if ((tmp28)){
		HX_STACK_LINE(244)
		::haxor::core::Resource v = ((::haxor::core::Resource)(p_v));		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(244)
		::String tmp29 = v->m_guid;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(244)
		return tmp29;
	}
	HX_STACK_LINE(245)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Formatter_obj,ToString,return )

Dynamic Formatter_obj::FromString( ::String p_v,::String p_t){
	HX_STACK_FRAME("haxor.io.serialization.Formatter","FromString",0xedd060d9,"haxor.io.serialization.Formatter.FromString","haxor/io/serialization/Formatter.hx",254,0x63bdf80f)
	HX_STACK_ARG(p_v,"p_v")
	HX_STACK_ARG(p_t,"p_t")
	HX_STACK_LINE(255)
	bool tmp = (p_t == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(255)
	if ((tmp)){
		HX_STACK_LINE(255)
		return null();
	}
	HX_STACK_LINE(256)
	bool tmp1 = (p_v == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(256)
	if ((tmp1)){
		HX_STACK_LINE(256)
		return null();
	}
	HX_STACK_LINE(257)
	bool tmp2 = (p_t == HX_HCSTRING("Int","\xcf","\xc4","\x37","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(257)
	if ((tmp2)){
		HX_STACK_LINE(257)
		::String tmp3 = p_v;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(257)
		Dynamic tmp4 = ::Std_obj::parseInt(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(257)
		return tmp4;
	}
	HX_STACK_LINE(258)
	bool tmp3 = (p_t == HX_HCSTRING("Float","\x7c","\x35","\xc4","\x95"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(258)
	if ((tmp3)){
		HX_STACK_LINE(258)
		::String tmp4 = p_v;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(258)
		Float tmp5 = ::Std_obj::parseFloat(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(258)
		return tmp5;
	}
	HX_STACK_LINE(259)
	bool tmp4 = (p_t == HX_HCSTRING("Bool","\x4a","\xb0","\xf4","\x2b"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(259)
	if ((tmp4)){
		HX_STACK_LINE(259)
		bool tmp5 = (p_v != HX_HCSTRING("false","\xa3","\x35","\x4f","\xfb"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(259)
		return tmp5;
	}
	HX_STACK_LINE(260)
	bool tmp5 = (p_t == HX_HCSTRING("String","\xf1","\x9c","\xc4","\x45"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(260)
	if ((tmp5)){
		HX_STACK_LINE(260)
		::String tmp6 = p_v;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(260)
		return tmp6;
	}
	HX_STACK_LINE(261)
	bool tmp6 = (p_t == HX_HCSTRING("haxor.math.Vector2","\xf5","\xc2","\x06","\xde"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(261)
	if ((tmp6)){
		HX_STACK_LINE(261)
		::String tmp7 = p_v;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(261)
		::haxor::math::Vector2 tmp8 = ::haxor::math::Vector2_obj::Parse(tmp7,HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(261)
		return tmp8;
	}
	HX_STACK_LINE(262)
	bool tmp7 = (p_t == HX_HCSTRING("haxor.math.Vector3","\xf6","\xc2","\x06","\xde"));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(262)
	if ((tmp7)){
		HX_STACK_LINE(262)
		::String tmp8 = p_v;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(262)
		::haxor::math::Vector3 tmp9 = ::haxor::math::Vector3_obj::Parse(tmp8,HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(262)
		return tmp9;
	}
	HX_STACK_LINE(263)
	bool tmp8 = (p_t == HX_HCSTRING("haxor.math.Vector4","\xf7","\xc2","\x06","\xde"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(263)
	if ((tmp8)){
		HX_STACK_LINE(263)
		::String tmp9 = p_v;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(263)
		::haxor::math::Vector4 tmp10 = ::haxor::math::Vector4_obj::Parse(tmp9,HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(263)
		return tmp10;
	}
	HX_STACK_LINE(264)
	bool tmp9 = (p_t == HX_HCSTRING("haxor.math.AABB2","\x18","\x15","\x35","\xe7"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(264)
	if ((tmp9)){
		HX_STACK_LINE(264)
		::String tmp10 = p_v;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(264)
		::haxor::math::AABB2 tmp11 = ::haxor::math::AABB2_obj::Parse(tmp10,HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(264)
		return tmp11;
	}
	HX_STACK_LINE(265)
	bool tmp10 = (p_t == HX_HCSTRING("haxor.math.AABB3","\x19","\x15","\x35","\xe7"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(265)
	if ((tmp10)){
		HX_STACK_LINE(265)
		::String tmp11 = p_v;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(265)
		::haxor::math::AABB3 tmp12 = ::haxor::math::AABB3_obj::Parse(tmp11,HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(265)
		return tmp12;
	}
	HX_STACK_LINE(266)
	bool tmp11 = (p_t == HX_HCSTRING("haxor.math.Color","\xc9","\x14","\x8a","\x2c"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(266)
	if ((tmp11)){
		HX_STACK_LINE(266)
		::String tmp12 = p_v;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(266)
		::haxor::math::Color tmp13 = ::haxor::math::Color_obj::Parse(tmp12,HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(266)
		return tmp13;
	}
	HX_STACK_LINE(267)
	bool tmp12 = (p_t == HX_HCSTRING("haxor.math.Matrix4","\xb9","\x0b","\xd1","\x96"));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(267)
	if ((tmp12)){
		HX_STACK_LINE(267)
		::String tmp13 = p_v;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(267)
		::haxor::math::Matrix4 tmp14 = ::haxor::math::Matrix4_obj::Parse(tmp13,HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(267)
		return tmp14;
	}
	HX_STACK_LINE(268)
	bool tmp13 = (p_t == HX_HCSTRING("haxor.math.Quaternion","\xf8","\x57","\xb4","\x2a"));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(268)
	if ((tmp13)){
		HX_STACK_LINE(268)
		::String tmp14 = p_v;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(268)
		::haxor::math::Quaternion tmp15 = ::haxor::math::Quaternion_obj::Parse(tmp14,HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(268)
		return tmp15;
	}
	HX_STACK_LINE(269)
	bool tmp14 = (p_t == HX_HCSTRING("haxor.io.FloatArray","\xd9","\xae","\x50","\x99"));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(269)
	if ((tmp14)){
		HX_STACK_LINE(269)
		::String tmp15 = p_v;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(269)
		::haxor::io::FloatArray tmp16 = ::haxor::io::FloatArray_obj::Parse(tmp15,HX_HCSTRING(",","\x2c","\x00","\x00","\x00"),true);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(269)
		return tmp16;
	}
	HX_STACK_LINE(270)
	bool tmp15 = (p_t == HX_HCSTRING("haxor.io.Int32Array","\xe7","\xfb","\xa5","\xc1"));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(270)
	if ((tmp15)){
		HX_STACK_LINE(270)
		::String tmp16 = p_v;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(270)
		::haxor::io::Int32Array tmp17 = ::haxor::io::Int32Array_obj::Parse(tmp16,HX_HCSTRING(",","\x2c","\x00","\x00","\x00"),true);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(270)
		return tmp17;
	}
	HX_STACK_LINE(271)
	bool tmp16 = (p_t == HX_HCSTRING("haxor.io.UInt16Array","\x3e","\x9c","\x4e","\xbd"));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(271)
	if ((tmp16)){
		HX_STACK_LINE(271)
		::String tmp17 = p_v;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(271)
		::haxor::io::UInt16Array tmp18 = ::haxor::io::UInt16Array_obj::Parse(tmp17,HX_HCSTRING(",","\x2c","\x00","\x00","\x00"),true);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(271)
		return tmp18;
	}
	HX_STACK_LINE(272)
	bool tmp17 = (p_t == HX_HCSTRING("$GUID","\xad","\xc7","\x9b","\xe9"));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(272)
	if ((tmp17)){
		HX_STACK_LINE(272)
		::String tmp18 = p_v;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(272)
		::haxor::core::Resource tmp19 = ::haxor::core::Resource_obj::FindByGUID(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(272)
		return tmp19;
	}
	HX_STACK_LINE(273)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Formatter_obj,FromString,return )


Formatter_obj::Formatter_obj()
{
}

Dynamic Formatter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"OnField") ) { return OnField_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"GetField") ) { return GetField_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"Serialize") ) { return Serialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"Deserialize") ) { return Deserialize_dyn(); }
		if (HX_FIELD_EQ(inName,"OnSerialize") ) { return OnSerialize_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"GetClassPath") ) { return GetClassPath_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SerializeStep") ) { return SerializeStep_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"DeserializeData") ) { return DeserializeData_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"DeserializeField") ) { return DeserializeField_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"GetSerializedData") ) { return GetSerializedData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Formatter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"ToString") ) { outValue = ToString_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"FromString") ) { outValue = FromString_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("Serialize","\xc0","\x3d","\xc5","\x96"),
	HX_HCSTRING("GetSerializedData","\xe4","\x49","\x95","\x73"),
	HX_HCSTRING("SerializeStep","\x2c","\x31","\xcc","\x12"),
	HX_HCSTRING("Deserialize","\x1f","\x26","\x68","\x0d"),
	HX_HCSTRING("DeserializeField","\x1b","\x4e","\x1f","\xe2"),
	HX_HCSTRING("DeserializeData","\xe9","\xa3","\x1b","\x22"),
	HX_HCSTRING("GetField","\x64","\x60","\x1c","\x3a"),
	HX_HCSTRING("GetClassPath","\xa7","\xee","\xf8","\xb4"),
	HX_HCSTRING("OnField","\xfb","\x5a","\x22","\x64"),
	HX_HCSTRING("OnSerialize","\xa1","\xd8","\x67","\xfb"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Formatter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Formatter_obj::__mClass,"__mClass");
};

#endif

hx::Class Formatter_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("ToString","\xcc","\x8c","\x20","\x12"),
	HX_HCSTRING("FromString","\xfb","\x31","\x25","\x4b"),
	String(null()) };

void Formatter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.io.serialization.Formatter","\xd0","\x28","\xb6","\x69");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Formatter_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Formatter_obj >;
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
} // end namespace serialization
