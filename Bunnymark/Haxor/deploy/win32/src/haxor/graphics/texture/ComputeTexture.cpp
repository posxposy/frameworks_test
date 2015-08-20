#include <hxcpp.h>

#ifndef INCLUDED_haxor_context_DataContext
#include <haxor/context/DataContext.h>
#endif
#ifndef INCLUDED_haxor_context_EngineContext
#include <haxor/context/EngineContext.h>
#endif
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_core_TextureType
#include <haxor/core/TextureType.h>
#endif
#ifndef INCLUDED_haxor_graphics_Bitmap
#include <haxor/graphics/Bitmap.h>
#endif
#ifndef INCLUDED_haxor_graphics_texture_ComputeTexture
#include <haxor/graphics/texture/ComputeTexture.h>
#endif
#ifndef INCLUDED_haxor_graphics_texture_Texture
#include <haxor/graphics/texture/Texture.h>
#endif
#ifndef INCLUDED_haxor_graphics_texture_Texture2D
#include <haxor/graphics/texture/Texture2D.h>
#endif
#ifndef INCLUDED_haxor_math_Color
#include <haxor/math/Color.h>
#endif
namespace haxor{
namespace graphics{
namespace texture{

Void ComputeTexture_obj::__construct(int p_width,int p_height,int p_format)
{
HX_STACK_FRAME("haxor.graphics.texture.ComputeTexture","new",0xdb1d7d80,"haxor.graphics.texture.ComputeTexture.new","haxor/graphics/texture/ComputeTexture.hx",37,0x6a506cef)
HX_STACK_THIS(this)
HX_STACK_ARG(p_width,"p_width")
HX_STACK_ARG(p_height,"p_height")
HX_STACK_ARG(p_format,"p_format")
{
	HX_STACK_LINE(38)
	int tmp = p_width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	int tmp1 = p_height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(38)
	int tmp2 = p_format;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(38)
	super::__construct(tmp,tmp1,tmp2);
	HX_STACK_LINE(39)
	this->set_minFilter((int)0);
	HX_STACK_LINE(40)
	this->set_magFilter((int)0);
	HX_STACK_LINE(41)
	this->m_lock = false;
	HX_STACK_LINE(42)
	this->m_dirty = false;
}
;
	return null();
}

//ComputeTexture_obj::~ComputeTexture_obj() { }

Dynamic ComputeTexture_obj::__CreateEmpty() { return  new ComputeTexture_obj; }
hx::ObjectPtr< ComputeTexture_obj > ComputeTexture_obj::__new(int p_width,int p_height,int p_format)
{  hx::ObjectPtr< ComputeTexture_obj > _result_ = new ComputeTexture_obj();
	_result_->__construct(p_width,p_height,p_format);
	return _result_;}

Dynamic ComputeTexture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ComputeTexture_obj > _result_ = new ComputeTexture_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::haxor::core::TextureType ComputeTexture_obj::get_type( ){
	HX_STACK_FRAME("haxor.graphics.texture.ComputeTexture","get_type",0xc2326d23,"haxor.graphics.texture.ComputeTexture.get_type","haxor/graphics/texture/ComputeTexture.hx",28,0x6a506cef)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	return ::haxor::core::TextureType_obj::Compute;
}


Void ComputeTexture_obj::Write( int p_x,int p_y,Dynamic __o_p_v0,Dynamic __o_p_v1,Dynamic __o_p_v2,Dynamic __o_p_v3){
Dynamic p_v0 = __o_p_v0.Default(0);
Dynamic p_v1 = __o_p_v1.Default(0);
Dynamic p_v2 = __o_p_v2.Default(0);
Dynamic p_v3 = __o_p_v3.Default(0);
	HX_STACK_FRAME("haxor.graphics.texture.ComputeTexture","Write",0xc5ee11df,"haxor.graphics.texture.ComputeTexture.Write","haxor/graphics/texture/ComputeTexture.hx",55,0x6a506cef)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_x,"p_x")
	HX_STACK_ARG(p_y,"p_y")
	HX_STACK_ARG(p_v0,"p_v0")
	HX_STACK_ARG(p_v1,"p_v1")
	HX_STACK_ARG(p_v2,"p_v2")
	HX_STACK_ARG(p_v3,"p_v3")
{
		HX_STACK_LINE(56)
		::haxor::graphics::Bitmap tmp = this->m_data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(56)
		int tmp1 = p_x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(56)
		int tmp2 = p_y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(56)
		::haxor::math::Color tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(56)
		{
			HX_STACK_LINE(56)
			::haxor::context::DataContext tmp4 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(56)
			::haxor::context::DataContext _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(56)
			Array< ::Dynamic > tmp5 = _this->m_c;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(56)
			int tmp6 = (_this->m_nc + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(56)
			int tmp7 = _this->m_c->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(56)
			int tmp8 = hx::Mod(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(56)
			int tmp9 = _this->m_nc = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(56)
			tmp3 = tmp5->__get(tmp9).StaticCast< ::haxor::math::Color >();
		}
		HX_STACK_LINE(56)
		Dynamic tmp4 = p_v0;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(56)
		Dynamic tmp5 = p_v1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(56)
		Dynamic tmp6 = p_v2;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(56)
		Dynamic tmp7 = p_v3;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(56)
		::haxor::math::Color tmp8 = tmp3->Set(tmp4,tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(56)
		tmp->SetPixel(tmp1,tmp2,tmp8);
		HX_STACK_LINE(57)
		this->m_dirty = true;
		HX_STACK_LINE(58)
		this->Invalidate();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(ComputeTexture_obj,Write,(void))

Void ComputeTexture_obj::WriteRange( Array< Float > p_values,hx::Null< int >  __o_p_x,hx::Null< int >  __o_p_y,hx::Null< int >  __o_p_width,hx::Null< int >  __o_p_height){
int p_x = __o_p_x.Default(0);
int p_y = __o_p_y.Default(0);
int p_width = __o_p_width.Default(-1);
int p_height = __o_p_height.Default(-1);
	HX_STACK_FRAME("haxor.graphics.texture.ComputeTexture","WriteRange",0xad56db5e,"haxor.graphics.texture.ComputeTexture.WriteRange","haxor/graphics/texture/ComputeTexture.hx",70,0x6a506cef)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_values,"p_values")
	HX_STACK_ARG(p_x,"p_x")
	HX_STACK_ARG(p_y,"p_y")
	HX_STACK_ARG(p_width,"p_width")
	HX_STACK_ARG(p_height,"p_height")
{
		HX_STACK_LINE(71)
		bool tmp = (p_width < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(71)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(71)
		if ((tmp)){
			HX_STACK_LINE(71)
			tmp1 = this->m_width;
		}
		else{
			HX_STACK_LINE(71)
			tmp1 = p_width;
		}
		HX_STACK_LINE(71)
		int w = tmp1;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(72)
		bool tmp2 = (p_height < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(72)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(72)
		if ((tmp2)){
			HX_STACK_LINE(72)
			tmp3 = this->m_height;
		}
		else{
			HX_STACK_LINE(72)
			tmp3 = p_height;
		}
		HX_STACK_LINE(72)
		int h = tmp3;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(73)
		::haxor::graphics::Bitmap tmp4 = this->m_data;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(73)
		Array< Float > tmp5 = p_values;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(73)
		int tmp6 = p_x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(73)
		int tmp7 = p_y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(73)
		int tmp8 = w;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(73)
		int tmp9 = h;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(73)
		tmp4->SetRange(tmp5,tmp6,tmp7,tmp8,tmp9);
		HX_STACK_LINE(74)
		this->Invalidate();
		HX_STACK_LINE(75)
		this->m_dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(ComputeTexture_obj,WriteRange,(void))

Void ComputeTexture_obj::Invalidate( ){
{
		HX_STACK_FRAME("haxor.graphics.texture.ComputeTexture","Invalidate",0xbb9f547b,"haxor.graphics.texture.ComputeTexture.Invalidate","haxor/graphics/texture/ComputeTexture.hx",86,0x6a506cef)
		HX_STACK_THIS(this)
		HX_STACK_LINE(86)
		this->Apply();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ComputeTexture_obj,Invalidate,(void))

Void ComputeTexture_obj::OnUploadComplete( ){
{
		HX_STACK_FRAME("haxor.graphics.texture.ComputeTexture","OnUploadComplete",0xaf887859,"haxor.graphics.texture.ComputeTexture.OnUploadComplete","haxor/graphics/texture/ComputeTexture.hx",93,0x6a506cef)
		HX_STACK_THIS(this)
		HX_STACK_LINE(94)
		this->m_lock = false;
		HX_STACK_LINE(95)
		bool tmp = this->m_dirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(95)
		if ((tmp)){
			HX_STACK_LINE(95)
			this->Invalidate();
		}
		HX_STACK_LINE(96)
		this->m_dirty = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ComputeTexture_obj,OnUploadComplete,(void))


ComputeTexture_obj::ComputeTexture_obj()
{
}

Dynamic ComputeTexture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"Write") ) { return Write_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_lock") ) { return m_lock; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_dirty") ) { return m_dirty; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_type") ) { return get_type_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"WriteRange") ) { return WriteRange_dyn(); }
		if (HX_FIELD_EQ(inName,"Invalidate") ) { return Invalidate_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"OnUploadComplete") ) { return OnUploadComplete_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ComputeTexture_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"m_lock") ) { m_lock=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_dirty") ) { m_dirty=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ComputeTexture_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ComputeTexture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("m_lock","\x3d","\x0c","\xaf","\x8f"));
	outFields->push(HX_HCSTRING("m_dirty","\x80","\x27","\x5b","\x8a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(ComputeTexture_obj,m_lock),HX_HCSTRING("m_lock","\x3d","\x0c","\xaf","\x8f")},
	{hx::fsBool,(int)offsetof(ComputeTexture_obj,m_dirty),HX_HCSTRING("m_dirty","\x80","\x27","\x5b","\x8a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("m_lock","\x3d","\x0c","\xaf","\x8f"),
	HX_HCSTRING("m_dirty","\x80","\x27","\x5b","\x8a"),
	HX_HCSTRING("get_type","\x43","\xae","\xc3","\xcc"),
	HX_HCSTRING("Write","\xbf","\xdc","\x86","\x63"),
	HX_HCSTRING("WriteRange","\x7e","\xa4","\x92","\x6f"),
	HX_HCSTRING("Invalidate","\x9b","\x1d","\xdb","\x7d"),
	HX_HCSTRING("OnUploadComplete","\x79","\xd9","\xef","\xdc"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ComputeTexture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ComputeTexture_obj::__mClass,"__mClass");
};

#endif

hx::Class ComputeTexture_obj::__mClass;

void ComputeTexture_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.graphics.texture.ComputeTexture","\x8e","\xfd","\xb8","\xdc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ComputeTexture_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ComputeTexture_obj >;
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
} // end namespace texture
