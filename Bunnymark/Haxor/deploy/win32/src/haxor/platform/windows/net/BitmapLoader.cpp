#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxor_context_DataContext
#include <haxor/context/DataContext.h>
#endif
#ifndef INCLUDED_haxor_context_EngineContext
#include <haxor/context/EngineContext.h>
#endif
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_IRenderable
#include <haxor/core/IRenderable.h>
#endif
#ifndef INCLUDED_haxor_core_IUpdateable
#include <haxor/core/IUpdateable.h>
#endif
#ifndef INCLUDED_haxor_core_PixelFormat
#include <haxor/core/PixelFormat.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_graphics_Bitmap
#include <haxor/graphics/Bitmap.h>
#endif
#ifndef INCLUDED_haxor_io_Buffer
#include <haxor/io/Buffer.h>
#endif
#ifndef INCLUDED_haxor_math_Color
#include <haxor/math/Color.h>
#endif
#ifndef INCLUDED_haxor_net_HTTPRequestTask
#include <haxor/net/HTTPRequestTask.h>
#endif
#ifndef INCLUDED_haxor_platform_windows_net_BitmapLoader
#include <haxor/platform/windows/net/BitmapLoader.h>
#endif
#ifndef INCLUDED_haxor_platform_windows_net_HTTPLoader
#include <haxor/platform/windows/net/HTTPLoader.h>
#endif
#ifndef INCLUDED_haxor_platform_windows_net_HTTPRequest
#include <haxor/platform/windows/net/HTTPRequest.h>
#endif
#ifndef INCLUDED_haxor_thread_Activity
#include <haxor/thread/Activity.h>
#endif
#ifndef INCLUDED_haxor_thread_Task
#include <haxor/thread/Task.h>
#endif
namespace haxor{
namespace platform{
namespace windows{
namespace net{

Void BitmapLoader_obj::__construct(::String p_url,Dynamic p_callback)
{
HX_STACK_FRAME("haxor.platform.windows.net.BitmapLoader","new",0x6ef557df,"haxor.platform.windows.net.BitmapLoader.new","haxor/platform/windows/net/BitmapLoader.hx",44,0x5c286a4f)
HX_STACK_THIS(this)
HX_STACK_ARG(p_url,"p_url")
HX_STACK_ARG(p_callback,"p_callback")
{
	HX_STACK_LINE(45)
	::String tmp = p_url;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	Dynamic tmp1 = this->OnBufferCallback_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(45)
	super::__construct(tmp,true,tmp1);
	HX_STACK_LINE(46)
	this->m_bitmap_callback = p_callback;
}
;
	return null();
}

//BitmapLoader_obj::~BitmapLoader_obj() { }

Dynamic BitmapLoader_obj::__CreateEmpty() { return  new BitmapLoader_obj; }
hx::ObjectPtr< BitmapLoader_obj > BitmapLoader_obj::__new(::String p_url,Dynamic p_callback)
{  hx::ObjectPtr< BitmapLoader_obj > _result_ = new BitmapLoader_obj();
	_result_->__construct(p_url,p_callback);
	return _result_;}

Dynamic BitmapLoader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapLoader_obj > _result_ = new BitmapLoader_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void BitmapLoader_obj::OnBufferCallback( ::haxor::io::Buffer p_data,Float p_progress){
{
		HX_STACK_FRAME("haxor.platform.windows.net.BitmapLoader","OnBufferCallback",0x79d571a5,"haxor.platform.windows.net.BitmapLoader.OnBufferCallback","haxor/platform/windows/net/BitmapLoader.hx",50,0x5c286a4f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_data,"p_data")
		HX_STACK_ARG(p_progress,"p_progress")
		HX_STACK_LINE(52)
		Float tmp = this->m_progress;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		bool tmp1 = (tmp < ((Float)1.0));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		if ((tmp1)){
			HX_STACK_LINE(54)
			Dynamic tmp2 = this->m_bitmap_callback_dyn();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(54)
			bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(54)
			if ((tmp3)){
				HX_STACK_LINE(54)
				Float tmp4 = this->m_progress;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(54)
				Float tmp5 = (tmp4 * ((Float)0.999));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(54)
				this->m_bitmap_callback(null(),tmp5);
			}
		}
		else{
			HX_STACK_LINE(58)
			bool tmp2 = (p_data == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(58)
			if ((tmp2)){
				HX_STACK_LINE(58)
				return null();
			}
			HX_STACK_LINE(60)
			::haxe::io::Bytes file_bl = p_data->m_buffer;		HX_STACK_VAR(file_bl,"file_bl");
			HX_STACK_LINE(61)
			int file_len = p_data->m_length;		HX_STACK_VAR(file_len,"file_len");
			HX_STACK_LINE(62)
			int w = (int)0;		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(63)
			int h = (int)0;		HX_STACK_VAR(h,"h");
			HX_STACK_LINE(64)
			int byte_length = (int)0;		HX_STACK_VAR(byte_length,"byte_length");
			HX_STACK_LINE(65)
			int cc = (int)0;		HX_STACK_VAR(cc,"cc");
			HX_STACK_LINE(67)
			
			unsigned char * img_buffer = (stbi_uc * ) stbi_load_from_memory( & file_bl->b[0], file_len, & w, & h, & cc, 0);			
			;
			HX_STACK_LINE(72)
			int tmp3 = (w * h);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(72)
			int tmp4 = cc;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(72)
			int tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(72)
			byte_length = tmp5;
			HX_STACK_LINE(73)
			::haxor::io::Buffer tmp6 = ::haxor::io::Buffer_obj::__new(byte_length);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(73)
			::haxor::io::Buffer buffer = tmp6;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(74)
			::haxe::io::Bytes bytes = buffer->m_buffer;		HX_STACK_VAR(bytes,"bytes");
			HX_STACK_LINE(76)
			
			for (int i = 0; i < byte_length;i++) bytes->b[i] = img_buffer[i];
			stbi_image_free(img_buffer);
			;
			HX_STACK_LINE(81)
			int tmp7 = ::haxor::core::PixelFormat_obj::RGBA8;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(81)
			int fmt = tmp7;		HX_STACK_VAR(fmt,"fmt");
			HX_STACK_LINE(82)
			int tmp8 = cc;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(82)
			switch( (int)(tmp8)){
				case (int)1: {
					HX_STACK_LINE(84)
					int tmp9 = ::haxor::core::PixelFormat_obj::Alpha8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(84)
					fmt = tmp9;
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(85)
					int tmp9 = ::haxor::core::PixelFormat_obj::RGB8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(85)
					fmt = tmp9;
				}
				;break;
			}
			HX_STACK_LINE(87)
			::haxor::graphics::Bitmap tmp9 = ::haxor::graphics::Bitmap_obj::__new(w,h,fmt);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(87)
			::haxor::graphics::Bitmap b = tmp9;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(88)
			int k = (int)0;		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(89)
			::haxor::math::Color tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(89)
			{
				HX_STACK_LINE(89)
				::haxor::context::DataContext tmp11 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(89)
				::haxor::context::DataContext _this = tmp11;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(89)
				Array< ::Dynamic > tmp12 = _this->m_c;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(89)
				int tmp13 = (_this->m_nc + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(89)
				int tmp14 = _this->m_c->length;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(89)
				int tmp15 = hx::Mod(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(89)
				int tmp16 = _this->m_nc = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(89)
				tmp10 = tmp12->__get(tmp16).StaticCast< ::haxor::math::Color >();
			}
			HX_STACK_LINE(89)
			::haxor::math::Color c = tmp10;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(90)
			while((true)){
				HX_STACK_LINE(90)
				int tmp11 = k;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(90)
				int tmp12 = buffer->m_length;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(90)
				int tmp13 = buffer->get_bytesPerElement();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(90)
				int tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(90)
				bool tmp15 = (tmp11 < tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(90)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(90)
				if ((tmp16)){
					HX_STACK_LINE(90)
					break;
				}
				HX_STACK_LINE(92)
				Float tmp17 = (Float(k) / Float(cc));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(92)
				int pix = ((int)(tmp17));		HX_STACK_VAR(pix,"pix");
				HX_STACK_LINE(93)
				int tmp18 = hx::Mod(pix,b->m_width);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(93)
				int px = tmp18;		HX_STACK_VAR(px,"px");
				HX_STACK_LINE(94)
				Float tmp19 = (Float(pix) / Float(b->m_width));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(94)
				int py = ((int)(tmp19));		HX_STACK_VAR(py,"py");
				HX_STACK_LINE(95)
				int tmp20 = px;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(95)
				int tmp21 = (b->m_height - (int)1);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(95)
				int tmp22 = py;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(95)
				int tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(95)
				int tmp24 = b->m_width;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(95)
				int tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(95)
				int tmp26 = (tmp20 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(95)
				int tmp27 = cc;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(95)
				int tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(95)
				int tmp29 = hx::Mod(k,cc);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(95)
				int tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(95)
				int ipix = tmp30;		HX_STACK_VAR(ipix,"ipix");
				HX_STACK_LINE(96)
				int tmp31 = ipix;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(96)
				int tmp32 = buffer->GetByte(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(96)
				int v = tmp32;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(97)
				::haxor::io::Buffer tmp33 = b->get_buffer();		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(97)
				int tmp34 = k;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(97)
				int tmp35 = v;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(97)
				tmp33->SetByte(tmp34,tmp35);
				HX_STACK_LINE(98)
				(k)++;
			}
			HX_STACK_LINE(100)
			Dynamic tmp11 = this->m_bitmap_callback_dyn();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(100)
			bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(100)
			if ((tmp12)){
				HX_STACK_LINE(100)
				::haxor::graphics::Bitmap tmp13 = b;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(100)
				this->m_bitmap_callback(tmp13,((Float)1.0));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapLoader_obj,OnBufferCallback,(void))

Void BitmapLoader_obj::OnError( ){
{
		HX_STACK_FRAME("haxor.platform.windows.net.BitmapLoader","OnError",0xe20d4508,"haxor.platform.windows.net.BitmapLoader.OnError","haxor/platform/windows/net/BitmapLoader.hx",104,0x5c286a4f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(104)
		this->super::OnError();
		HX_STACK_LINE(104)
		Dynamic tmp = this->m_bitmap_callback_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(104)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(104)
		if ((tmp1)){
			HX_STACK_LINE(104)
			this->m_bitmap_callback(null(),((Float)1.0));
		}
	}
return null();
}



BitmapLoader_obj::BitmapLoader_obj()
{
}

void BitmapLoader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapLoader);
	HX_MARK_MEMBER_NAME(m_bitmap_callback,"m_bitmap_callback");
	::haxor::platform::windows::net::HTTPLoader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BitmapLoader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_bitmap_callback,"m_bitmap_callback");
	::haxor::platform::windows::net::HTTPLoader_obj::__Visit(HX_VISIT_ARG);
}

Dynamic BitmapLoader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"OnError") ) { return OnError_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"OnBufferCallback") ) { return OnBufferCallback_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"m_bitmap_callback") ) { return m_bitmap_callback; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BitmapLoader_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"m_bitmap_callback") ) { m_bitmap_callback=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BitmapLoader_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BitmapLoader_obj,m_bitmap_callback),HX_HCSTRING("m_bitmap_callback","\x43","\x38","\x4c","\xe3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("m_bitmap_callback","\x43","\x38","\x4c","\xe3"),
	HX_HCSTRING("OnBufferCallback","\x84","\xfc","\x22","\x3e"),
	HX_HCSTRING("OnError","\x09","\x92","\xb8","\xd6"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapLoader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapLoader_obj::__mClass,"__mClass");
};

#endif

hx::Class BitmapLoader_obj::__mClass;

void BitmapLoader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.platform.windows.net.BitmapLoader","\x6d","\x7c","\x9e","\x36");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &BitmapLoader_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BitmapLoader_obj >;
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
} // end namespace net
