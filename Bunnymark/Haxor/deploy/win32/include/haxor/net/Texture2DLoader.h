#ifndef INCLUDED_haxor_net_Texture2DLoader
#define INCLUDED_haxor_net_Texture2DLoader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxor_platform_windows_net_BitmapLoader
#include <haxor/platform/windows/net/BitmapLoader.h>
#endif
HX_DECLARE_CLASS2(haxor,core,IDisposable)
HX_DECLARE_CLASS2(haxor,core,IRenderable)
HX_DECLARE_CLASS2(haxor,core,IUpdateable)
HX_DECLARE_CLASS2(haxor,core,Resource)
HX_DECLARE_CLASS2(haxor,graphics,Bitmap)
HX_DECLARE_CLASS3(haxor,graphics,texture,Texture)
HX_DECLARE_CLASS3(haxor,graphics,texture,Texture2D)
HX_DECLARE_CLASS2(haxor,net,HTTPRequestTask)
HX_DECLARE_CLASS2(haxor,net,Texture2DLoader)
HX_DECLARE_CLASS4(haxor,platform,windows,net,BitmapLoader)
HX_DECLARE_CLASS4(haxor,platform,windows,net,HTTPLoader)
HX_DECLARE_CLASS4(haxor,platform,windows,net,HTTPRequest)
HX_DECLARE_CLASS2(haxor,thread,Activity)
HX_DECLARE_CLASS2(haxor,thread,Task)
namespace haxor{
namespace net{


class HXCPP_CLASS_ATTRIBUTES  Texture2DLoader_obj : public ::haxor::platform::windows::net::BitmapLoader_obj{
	public:
		typedef ::haxor::platform::windows::net::BitmapLoader_obj super;
		typedef Texture2DLoader_obj OBJ_;
		Texture2DLoader_obj();
		Void __construct(::String p_url,bool p_apply,Dynamic p_callback);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxor.net.Texture2DLoader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Texture2DLoader_obj > __new(::String p_url,bool p_apply,Dynamic p_callback);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Texture2DLoader_obj();

		HX_DO_RTTI_ALL;
Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Texture2DLoader","\x40","\x35","\x8b","\xb2"); }

		Dynamic m_t2d_callback;
		Dynamic &m_t2d_callback_dyn() { return m_t2d_callback;}
		bool m_apply;
		virtual Void OnBitmapCallback( ::haxor::graphics::Bitmap p_data,Float p_progress);
		Dynamic OnBitmapCallback_dyn();

		virtual Void OnError( );

};

} // end namespace haxor
} // end namespace net

#endif /* INCLUDED_haxor_net_Texture2DLoader */ 
