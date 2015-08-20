#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxor_context_EngineContext
#include <haxor/context/EngineContext.h>
#endif
#ifndef INCLUDED_haxor_context_MaterialContext
#include <haxor/context/MaterialContext.h>
#endif
#ifndef INCLUDED_haxor_context_MeshContext
#include <haxor/context/MeshContext.h>
#endif
#ifndef INCLUDED_haxor_context_UID
#include <haxor/context/UID.h>
#endif
#ifndef INCLUDED_haxor_core_Console
#include <haxor/core/Console.h>
#endif
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_RenderStats
#include <haxor/core/RenderStats.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_graphics_GL
#include <haxor/graphics/GL.h>
#endif
#ifndef INCLUDED_haxor_graphics_GraphicContext
#include <haxor/graphics/GraphicContext.h>
#endif
#ifndef INCLUDED_haxor_graphics_mesh_Mesh
#include <haxor/graphics/mesh/Mesh.h>
#endif
#ifndef INCLUDED_haxor_graphics_mesh_MeshAttrib
#include <haxor/graphics/mesh/MeshAttrib.h>
#endif
#ifndef INCLUDED_haxor_io_Buffer
#include <haxor/io/Buffer.h>
#endif
#ifndef INCLUDED_haxor_platform_graphics_OpenGL
#include <haxor/platform/graphics/OpenGL.h>
#endif
#ifndef INCLUDED_haxor_platform_windows_graphics_WinGL
#include <haxor/platform/windows/graphics/WinGL.h>
#endif
namespace haxor{
namespace context{

Void MeshContext_obj::__construct()
{
HX_STACK_FRAME("haxor.context.MeshContext","new",0x9085c6a9,"haxor.context.MeshContext.new","haxor/context/MeshContext.hx",18,0xf23de969)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(34)
	this->attribs = Array_obj< ::String >::__new().Add(HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1")).Add(HX_HCSTRING("normal","\x27","\x72","\x69","\x30")).Add(HX_HCSTRING("uv0","\xaf","\x2e","\x59","\x00")).Add(HX_HCSTRING("uv1","\xb0","\x2e","\x59","\x00")).Add(HX_HCSTRING("uv2","\xb1","\x2e","\x59","\x00")).Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")).Add(HX_HCSTRING("weight","\x78","\x71","\xa6","\x01")).Add(HX_HCSTRING("bone","\x44","\x83","\x1b","\x41"));
	HX_STACK_LINE(76)
	::haxor::context::UID tmp = ::haxor::context::UID_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(76)
	this->aid = tmp;
	HX_STACK_LINE(77)
	::haxor::context::UID tmp1 = ::haxor::context::UID_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(77)
	this->mid = tmp1;
	HX_STACK_LINE(78)
	Array< int > tmp2 = Array_obj< int >::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(78)
	this->buffers = tmp2;
	HX_STACK_LINE(79)
	Array< bool > tmp3 = Array_obj< bool >::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(79)
	this->activated = tmp3;
	HX_STACK_LINE(80)
	Array< int > tmp4 = Array_obj< int >::__new();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(80)
	this->vao = tmp4;
	HX_STACK_LINE(82)
	this->m_auto_white = false;
	HX_STACK_LINE(85)
	{
		HX_STACK_LINE(85)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(85)
		while((true)){
			HX_STACK_LINE(85)
			bool tmp5 = (_g < (int)32);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(85)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(85)
			if ((tmp6)){
				HX_STACK_LINE(85)
				break;
			}
			HX_STACK_LINE(85)
			int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(85)
			int i = tmp7;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(85)
			Array< bool > tmp8 = this->activated;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(85)
			tmp8->push(false);
		}
	}
	HX_STACK_LINE(87)
	int max_buffers = (int)512;		HX_STACK_VAR(max_buffers,"max_buffers");
	HX_STACK_LINE(89)
	{
		HX_STACK_LINE(89)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(89)
		while((true)){
			HX_STACK_LINE(89)
			bool tmp5 = (_g < max_buffers);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(89)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(89)
			if ((tmp6)){
				HX_STACK_LINE(89)
				break;
			}
			HX_STACK_LINE(89)
			int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(89)
			int i = tmp7;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(91)
			Array< int > tmp8 = this->buffers;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(91)
			int tmp9 = ::haxor::graphics::GL_obj::INVALID;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(91)
			tmp8->push(tmp9);
		}
	}
	HX_STACK_LINE(94)
	int tmp5 = ::haxor::graphics::GL_obj::INVALID;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(94)
	this->bound_element = tmp5;
}
;
	return null();
}

//MeshContext_obj::~MeshContext_obj() { }

Dynamic MeshContext_obj::__CreateEmpty() { return  new MeshContext_obj; }
hx::ObjectPtr< MeshContext_obj > MeshContext_obj::__new()
{  hx::ObjectPtr< MeshContext_obj > _result_ = new MeshContext_obj();
	_result_->__construct();
	return _result_;}

Dynamic MeshContext_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MeshContext_obj > _result_ = new MeshContext_obj();
	_result_->__construct();
	return _result_;}

Void MeshContext_obj::Initialize( ){
{
		HX_STACK_FRAME("haxor.context.MeshContext","Initialize",0xf4678a47,"haxor.context.MeshContext.Initialize","haxor/context/MeshContext.hx",102,0xf23de969)
		HX_STACK_THIS(this)
		HX_STACK_LINE(102)
		int tmp = ::haxor::core::Console_obj::verbose;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(102)
		bool tmp1 = (tmp >= (int)3);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(102)
		if ((tmp1)){
			HX_STACK_LINE(102)
			::cpp::Lib_obj::println(HX_HCSTRING("MeshContext> Initialize.","\x3a","\xdd","\xdf","\x53"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MeshContext_obj,Initialize,(void))

Void MeshContext_obj::Create( ::haxor::graphics::mesh::Mesh p_mesh){
{
		HX_STACK_FRAME("haxor.context.MeshContext","Create",0x5fd03873,"haxor.context.MeshContext.Create","haxor/context/MeshContext.hx",110,0xf23de969)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_mesh,"p_mesh")
		HX_STACK_LINE(111)
		bool tmp = ::haxor::graphics::GL_obj::VAO_ENABLED;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(111)
		if ((tmp)){
			HX_STACK_LINE(111)
			::haxor::context::UID tmp1 = this->mid;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(111)
			int tmp2 = tmp1->get_stored();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(111)
			bool tmp3 = (tmp2 <= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(111)
			if ((tmp3)){
				HX_STACK_LINE(111)
				Array< int > tmp4 = this->vao;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(111)
				int tmp5 = ::haxor::graphics::GL_obj::INVALID;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(111)
				tmp4->push(tmp5);
			}
		}
		HX_STACK_LINE(112)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(112)
		{
			HX_STACK_LINE(112)
			::haxor::context::UID tmp2 = this->mid;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(112)
			::haxor::context::UID _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(112)
			int tmp3 = _this->m_cache->length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(112)
			bool tmp4 = (tmp3 <= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(112)
			if ((tmp4)){
				HX_STACK_LINE(112)
				tmp1 = (_this->m_id)++;
			}
			else{
				HX_STACK_LINE(112)
				tmp1 = _this->m_cache->shift();
			}
		}
		HX_STACK_LINE(112)
		p_mesh->__cid = tmp1;
		HX_STACK_LINE(113)
		bool tmp2 = ::haxor::graphics::GL_obj::VAO_ENABLED;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(113)
		if ((tmp2)){
			HX_STACK_LINE(113)
			Array< int > tmp3 = this->vao;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(113)
			int tmp4 = p_mesh->__cid;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(113)
			int tmp5 = ::haxor::graphics::GL_obj::INVALID;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(113)
			tmp3[tmp4] = tmp5;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MeshContext_obj,Create,(void))

Void MeshContext_obj::Destroy( ::haxor::graphics::mesh::Mesh p_mesh){
{
		HX_STACK_FRAME("haxor.context.MeshContext","Destroy",0x897ca3a3,"haxor.context.MeshContext.Destroy","haxor/context/MeshContext.hx",121,0xf23de969)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_mesh,"p_mesh")
		HX_STACK_LINE(122)
		p_mesh->Clear(null());
		HX_STACK_LINE(123)
		bool tmp = ::haxor::graphics::GL_obj::VAO_ENABLED;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(123)
		if ((tmp)){
			HX_STACK_LINE(123)
			Array< int > tmp1 = this->vao;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(123)
			int tmp2 = p_mesh->__cid;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(123)
			int tmp3 = tmp1->__get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(123)
			int tmp4 = ::haxor::graphics::GL_obj::INVALID;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(123)
			bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(123)
			if ((tmp5)){
				HX_STACK_LINE(123)
				::haxor::platform::graphics::OpenGL tmp6 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(123)
				Array< int > tmp7 = this->vao;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(123)
				int tmp8 = p_mesh->__cid;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(123)
				int tmp9 = tmp7->__get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(123)
				tmp6->DeleteVAO(tmp9);
			}
		}
		HX_STACK_LINE(124)
		{
			HX_STACK_LINE(124)
			int v = p_mesh->__cid;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(124)
			::haxor::context::UID tmp1 = this->mid;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(124)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(124)
			tmp1->m_cache->push(tmp2);
			HX_STACK_LINE(124)
			v;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MeshContext_obj,Destroy,(void))

Void MeshContext_obj::Bind( ::haxor::graphics::mesh::Mesh p_mesh){
{
		HX_STACK_FRAME("haxor.context.MeshContext","Bind",0xc775ab74,"haxor.context.MeshContext.Bind","haxor/context/MeshContext.hx",132,0xf23de969)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_mesh,"p_mesh")
		HX_STACK_LINE(133)
		::haxor::graphics::mesh::Mesh tmp = p_mesh;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(133)
		::haxor::graphics::mesh::Mesh tmp1 = this->current;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(133)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(133)
		if ((tmp2)){
			HX_STACK_LINE(135)
			::haxor::graphics::mesh::Mesh tmp3 = p_mesh;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(135)
			this->Unbind(tmp3);
			HX_STACK_LINE(136)
			this->current = p_mesh;
			HX_STACK_LINE(138)
			::haxor::graphics::mesh::Mesh tmp4 = this->current;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(138)
			bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(138)
			if ((tmp5)){
				HX_STACK_LINE(141)
				this->ActivateAttributes();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MeshContext_obj,Bind,(void))

Void MeshContext_obj::ActivateAttributes( ){
{
		HX_STACK_FRAME("haxor.context.MeshContext","ActivateAttributes",0x6a542e61,"haxor.context.MeshContext.ActivateAttributes","haxor/context/MeshContext.hx",153,0xf23de969)
		HX_STACK_THIS(this)
		HX_STACK_LINE(154)
		bool has_vao = false;		HX_STACK_VAR(has_vao,"has_vao");
		HX_STACK_LINE(155)
		bool tmp = ::haxor::graphics::GL_obj::VAO_ENABLED;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(155)
		if ((tmp)){
			HX_STACK_LINE(157)
			has_vao = true;
			HX_STACK_LINE(158)
			Array< int > tmp1 = this->vao;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(158)
			::haxor::graphics::mesh::Mesh tmp2 = this->current;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(158)
			int tmp3 = tmp2->__cid;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(158)
			int tmp4 = tmp1->__get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(158)
			int vao_id = tmp4;		HX_STACK_VAR(vao_id,"vao_id");
			HX_STACK_LINE(160)
			int tmp5 = vao_id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(160)
			int tmp6 = ::haxor::graphics::GL_obj::INVALID;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(160)
			bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(160)
			if ((tmp7)){
				HX_STACK_LINE(162)
				Array< int > tmp8 = this->vao;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(162)
				::haxor::graphics::mesh::Mesh tmp9 = this->current;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(162)
				int tmp10 = tmp9->__cid;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(162)
				::haxor::platform::graphics::OpenGL tmp11 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(162)
				int tmp12 = tmp11->CreateVAO();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(162)
				int tmp13 = vao_id = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(162)
				tmp8[tmp10] = tmp13;
				HX_STACK_LINE(163)
				has_vao = false;
			}
			HX_STACK_LINE(165)
			{
				HX_STACK_LINE(165)
				::haxor::platform::graphics::OpenGL tmp8 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(165)
				int tmp9 = vao_id;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(165)
				tmp8->BindVAO(tmp9);
			}
		}
		HX_STACK_LINE(168)
		::haxor::graphics::mesh::MeshAttrib a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(169)
		::haxor::graphics::mesh::Mesh tmp1 = this->current;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(169)
		Array< ::Dynamic > al = tmp1->m_attribs;		HX_STACK_VAR(al,"al");
		HX_STACK_LINE(170)
		int id;		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(171)
		int type;		HX_STACK_VAR(type,"type");
		HX_STACK_LINE(172)
		bool has_color = false;		HX_STACK_VAR(has_color,"has_color");
		HX_STACK_LINE(174)
		{
			HX_STACK_LINE(174)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(174)
			int _g = al->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(174)
			while((true)){
				HX_STACK_LINE(174)
				bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(174)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(174)
				if ((tmp3)){
					HX_STACK_LINE(174)
					break;
				}
				HX_STACK_LINE(174)
				int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(174)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(176)
				::haxor::graphics::mesh::MeshAttrib tmp5 = al->__get(i).StaticCast< ::haxor::graphics::mesh::MeshAttrib >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(176)
				a = tmp5;
				HX_STACK_LINE(177)
				int loc = a->_loc_;		HX_STACK_VAR(loc,"loc");
				HX_STACK_LINE(178)
				bool tmp6 = (loc == (int)5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(178)
				if ((tmp6)){
					HX_STACK_LINE(178)
					has_color = true;
					HX_STACK_LINE(178)
					this->m_auto_white = false;
				}
				HX_STACK_LINE(179)
				bool tmp7 = (loc < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(179)
				if ((tmp7)){
					HX_STACK_LINE(183)
					::haxor::context::MaterialContext tmp8 = ::haxor::context::EngineContext_obj::material;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(183)
					::haxor::graphics::mesh::MeshAttrib tmp9 = a;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(183)
					int tmp10 = tmp8->GetAttribLocation(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(183)
					loc = tmp10;
					HX_STACK_LINE(184)
					bool tmp11 = (loc < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(184)
					if ((tmp11)){
						HX_STACK_LINE(184)
						continue;
					}
				}
				HX_STACK_LINE(187)
				type = (int)5126;
				HX_STACK_LINE(189)
				Array< bool > tmp8 = this->activated;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(189)
				int tmp9 = loc;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(189)
				bool tmp10 = tmp8->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(189)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(189)
				if ((tmp11)){
					HX_STACK_LINE(191)
					Array< bool > tmp12 = this->activated;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(191)
					int tmp13 = loc;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(191)
					tmp12[tmp13] = true;
					HX_STACK_LINE(192)
					{
						HX_STACK_LINE(192)
						::haxor::platform::graphics::OpenGL tmp14 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(192)
						int tmp15 = loc;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(192)
						tmp14->EnableVertexAttrib(tmp15);
					}
				}
				HX_STACK_LINE(195)
				bool tmp12 = has_vao;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(195)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(195)
				if ((tmp13)){
					HX_STACK_LINE(196)
					int tmp14 = a->get_count();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(196)
					bool tmp15 = (tmp14 > (int)0);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(196)
					if ((tmp15)){
						HX_STACK_LINE(198)
						{
							HX_STACK_LINE(198)
							::haxor::platform::graphics::OpenGL tmp16 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(198)
							Array< int > tmp17 = this->buffers;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(198)
							int tmp18 = a->__cid;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(198)
							int tmp19 = tmp17->__get(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(198)
							tmp16->BindBuffer((int)34962,tmp19);
						}
						HX_STACK_LINE(199)
						{
							HX_STACK_LINE(199)
							::haxor::platform::graphics::OpenGL tmp16 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(199)
							int tmp17 = loc;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(199)
							int tmp18 = a->offset;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(199)
							int tmp19 = type;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(199)
							tmp16->VertexAttribPointer(tmp17,tmp18,tmp19,false,(int)0,(int)0);
						}
					}
				}
			}
		}
		HX_STACK_LINE(205)
		bool tmp2 = has_color;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(205)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(205)
		if ((tmp3)){
			HX_STACK_LINE(207)
			Array< bool > tmp4 = this->activated;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(207)
			bool tmp5 = tmp4->__get((int)5);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(207)
			if ((tmp5)){
				HX_STACK_LINE(207)
				{
					HX_STACK_LINE(207)
					::haxor::platform::graphics::OpenGL tmp6 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(207)
					tmp6->DisableVertexAttrib((int)5);
				}
				HX_STACK_LINE(207)
				Array< bool > tmp6 = this->activated;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(207)
				tmp6[(int)5] = false;
			}
			HX_STACK_LINE(208)
			bool tmp6 = has_vao;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(208)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(208)
			if ((tmp7)){
				HX_STACK_LINE(208)
				bool tmp8 = this->m_auto_white;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(208)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(208)
				if ((tmp9)){
					HX_STACK_LINE(208)
					{
						HX_STACK_LINE(208)
						::haxor::platform::graphics::OpenGL tmp10 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(208)
						tmp10->VertexAttrib4f((int)5,((Float)1.0),((Float)1.0),((Float)1.0),((Float)1.0));
					}
					HX_STACK_LINE(208)
					this->m_auto_white = true;
				}
			}
		}
		HX_STACK_LINE(211)
		bool tmp4 = has_vao;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(211)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(211)
		if ((tmp5)){
			HX_STACK_LINE(212)
			::haxor::graphics::mesh::Mesh tmp6 = this->current;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(212)
			bool tmp7 = tmp6->m_indexed;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(212)
			if ((tmp7)){
				HX_STACK_LINE(214)
				::haxor::graphics::mesh::Mesh tmp8 = this->current;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(214)
				a = tmp8->m_topology_attrib;
				HX_STACK_LINE(215)
				int tmp9 = this->bound_element;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(215)
				Array< int > tmp10 = this->buffers;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(215)
				int tmp11 = a->__cid;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(215)
				int tmp12 = tmp10->__get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(215)
				bool tmp13 = (tmp9 != tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(215)
				if ((tmp13)){
					HX_STACK_LINE(217)
					Array< int > tmp14 = this->buffers;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(217)
					int tmp15 = a->__cid;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(217)
					int tmp16 = tmp14->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(217)
					this->bound_element = tmp16;
					HX_STACK_LINE(218)
					{
						HX_STACK_LINE(218)
						::haxor::platform::graphics::OpenGL tmp17 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(218)
						int tmp18 = this->bound_element;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(218)
						tmp17->BindBuffer((int)34963,tmp18);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MeshContext_obj,ActivateAttributes,(void))

Void MeshContext_obj::Unbind( ::haxor::graphics::mesh::Mesh p_next){
{
		HX_STACK_FRAME("haxor.context.MeshContext","Unbind",0x42acce0d,"haxor.context.MeshContext.Unbind","haxor/context/MeshContext.hx",227,0xf23de969)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_next,"p_next")
		HX_STACK_LINE(228)
		::haxor::graphics::mesh::Mesh tmp = this->current;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(228)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(228)
		if ((tmp1)){
			HX_STACK_LINE(230)
			::haxor::graphics::mesh::Mesh tmp2 = this->current;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(230)
			Array< ::Dynamic > al0 = tmp2->m_attribs;		HX_STACK_VAR(al0,"al0");
			HX_STACK_LINE(231)
			{
				HX_STACK_LINE(231)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(231)
				int _g = al0->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(231)
				while((true)){
					HX_STACK_LINE(231)
					bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(231)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(231)
					if ((tmp4)){
						HX_STACK_LINE(231)
						break;
					}
					HX_STACK_LINE(231)
					int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(231)
					int i = tmp5;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(233)
					::haxor::graphics::mesh::MeshAttrib tmp6 = al0->__get(i).StaticCast< ::haxor::graphics::mesh::MeshAttrib >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(233)
					int l0 = tmp6->_loc_;		HX_STACK_VAR(l0,"l0");
					HX_STACK_LINE(234)
					bool tmp7 = (l0 >= (int)0);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(234)
					if ((tmp7)){
						HX_STACK_LINE(234)
						Array< bool > tmp8 = this->activated;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(234)
						int tmp9 = l0;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(234)
						bool tmp10 = tmp8->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(234)
						if ((tmp10)){
							HX_STACK_LINE(234)
							{
								HX_STACK_LINE(234)
								::haxor::platform::graphics::OpenGL tmp11 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(234)
								int tmp12 = l0;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(234)
								tmp11->DisableVertexAttrib(tmp12);
							}
							HX_STACK_LINE(234)
							Array< bool > tmp11 = this->activated;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(234)
							int tmp12 = l0;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(234)
							tmp11[tmp12] = false;
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MeshContext_obj,Unbind,(void))

Void MeshContext_obj::Draw( ::haxor::graphics::mesh::Mesh m){
{
		HX_STACK_FRAME("haxor.context.MeshContext","Draw",0xc8cee1bb,"haxor.context.MeshContext.Draw","haxor/context/MeshContext.hx",293,0xf23de969)
		HX_STACK_THIS(this)
		HX_STACK_ARG(m,"m")
		HX_STACK_LINE(294)
		bool tmp = m->m_indexed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(294)
		if ((tmp)){
			HX_STACK_LINE(296)
			{
				HX_STACK_LINE(296)
				::haxor::platform::graphics::OpenGL tmp1 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(296)
				int tmp2 = m->primitive;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(296)
				::haxor::io::Buffer tmp3 = m->m_topology_attrib->data;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(296)
				int tmp4 = tmp3->m_length;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(296)
				tmp1->DrawElements(tmp2,tmp4,(int)5123,(int)0);
			}
			HX_STACK_LINE(299)
			::haxor::io::Buffer tmp1 = m->m_topology_attrib->data;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(299)
			int tmp2 = tmp1->m_length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(299)
			Float tmp3 = (Float(tmp2) / Float((int)3));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(299)
			int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(299)
			hx::AddEq(::haxor::core::RenderStats_obj::triangles,((int)(((Float)(tmp4)))));
		}
		else{
			HX_STACK_LINE(309)
			{
				HX_STACK_LINE(309)
				::haxor::platform::graphics::OpenGL tmp1 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(309)
				int tmp2 = m->primitive;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(309)
				int tmp3 = m->m_vcount;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(309)
				tmp1->DrawArrays(tmp2,(int)0,tmp3);
			}
			HX_STACK_LINE(312)
			int off = (int)3;		HX_STACK_VAR(off,"off");
			HX_STACK_LINE(313)
			bool tmp1 = (m->primitive == (int)1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(313)
			if ((tmp1)){
				HX_STACK_LINE(313)
				off = (int)2;
			}
			HX_STACK_LINE(314)
			bool tmp2 = (m->primitive == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(314)
			if ((tmp2)){
				HX_STACK_LINE(314)
				off = (int)1;
			}
			HX_STACK_LINE(315)
			Float tmp3 = (Float(m->m_vcount) / Float(off));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(315)
			int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(315)
			hx::AddEq(::haxor::core::RenderStats_obj::triangles,((int)(((Float)(tmp4)))));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MeshContext_obj,Draw,(void))

Void MeshContext_obj::RemoveAttrib( ::haxor::graphics::mesh::MeshAttrib p_attrib,::haxor::graphics::mesh::Mesh p_mesh){
{
		HX_STACK_FRAME("haxor.context.MeshContext","RemoveAttrib",0xdd784765,"haxor.context.MeshContext.RemoveAttrib","haxor/context/MeshContext.hx",330,0xf23de969)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_attrib,"p_attrib")
		HX_STACK_ARG(p_mesh,"p_mesh")
		HX_STACK_LINE(331)
		Array< int > tmp = this->buffers;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(331)
		int tmp1 = p_attrib->__cid;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(331)
		int tmp2 = tmp->__get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(331)
		int id = tmp2;		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(332)
		int tmp3 = id;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(332)
		int tmp4 = ::haxor::graphics::GL_obj::INVALID;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(332)
		bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(332)
		if ((tmp5)){
			HX_STACK_LINE(332)
			return null();
		}
		HX_STACK_LINE(333)
		{
			HX_STACK_LINE(333)
			::haxor::platform::graphics::OpenGL tmp6 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(333)
			int tmp7 = id;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(333)
			tmp6->DeleteBuffer(tmp7);
		}
		HX_STACK_LINE(334)
		Array< int > tmp6 = this->buffers;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(334)
		int tmp7 = p_attrib->__cid;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(334)
		int tmp8 = ::haxor::graphics::GL_obj::INVALID;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(334)
		tmp6[tmp7] = tmp8;
		HX_STACK_LINE(335)
		{
			HX_STACK_LINE(335)
			int v = p_attrib->__cid;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(335)
			::haxor::context::UID tmp9 = this->aid;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(335)
			int tmp10 = v;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(335)
			tmp9->m_cache->push(tmp10);
			HX_STACK_LINE(335)
			v;
		}
		HX_STACK_LINE(337)
		bool tmp9 = ::haxor::graphics::GL_obj::VAO_ENABLED;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(337)
		if ((tmp9)){
			HX_STACK_LINE(337)
			Array< int > tmp10 = this->vao;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(337)
			int tmp11 = p_mesh->__cid;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(337)
			int tmp12 = tmp10->__get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(337)
			int tmp13 = ::haxor::graphics::GL_obj::INVALID;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(337)
			bool tmp14 = (tmp12 != tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(337)
			if ((tmp14)){
				HX_STACK_LINE(337)
				{
					HX_STACK_LINE(337)
					::haxor::platform::graphics::OpenGL tmp15 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(337)
					Array< int > tmp16 = this->vao;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(337)
					int tmp17 = p_mesh->__cid;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(337)
					int tmp18 = tmp16->__get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(337)
					tmp15->DeleteVAO(tmp18);
				}
				HX_STACK_LINE(337)
				Array< int > tmp15 = this->vao;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(337)
				int tmp16 = p_mesh->__cid;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(337)
				int tmp17 = ::haxor::graphics::GL_obj::INVALID;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(337)
				tmp15[tmp16] = tmp17;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MeshContext_obj,RemoveAttrib,(void))

Void MeshContext_obj::UpdateAttrib( ::haxor::graphics::mesh::MeshAttrib a,int p_mode,bool p_is_index,::haxor::graphics::mesh::Mesh p_mesh){
{
		HX_STACK_FRAME("haxor.context.MeshContext","UpdateAttrib",0x6e0e52ea,"haxor.context.MeshContext.UpdateAttrib","haxor/context/MeshContext.hx",345,0xf23de969)
		HX_STACK_THIS(this)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(p_mode,"p_mode")
		HX_STACK_ARG(p_is_index,"p_is_index")
		HX_STACK_ARG(p_mesh,"p_mesh")
		HX_STACK_LINE(347)
		bool tmp = ::haxor::graphics::GL_obj::VAO_ENABLED;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(347)
		if ((tmp)){
			HX_STACK_LINE(347)
			Array< int > tmp1 = this->vao;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(347)
			int tmp2 = p_mesh->__cid;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(347)
			int tmp3 = tmp1->__get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(347)
			int tmp4 = ::haxor::graphics::GL_obj::INVALID;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(347)
			bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(347)
			if ((tmp5)){
				HX_STACK_LINE(347)
				{
					HX_STACK_LINE(347)
					::haxor::platform::graphics::OpenGL tmp6 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(347)
					Array< int > tmp7 = this->vao;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(347)
					int tmp8 = p_mesh->__cid;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(347)
					int tmp9 = tmp7->__get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(347)
					tmp6->DeleteVAO(tmp9);
				}
				HX_STACK_LINE(347)
				Array< int > tmp6 = this->vao;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(347)
				int tmp7 = p_mesh->__cid;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(347)
				int tmp8 = ::haxor::graphics::GL_obj::INVALID;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(347)
				tmp6[tmp7] = tmp8;
			}
		}
		HX_STACK_LINE(349)
		Array< int > tmp1 = this->buffers;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(349)
		int tmp2 = a->__cid;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(349)
		int tmp3 = tmp1->__get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(349)
		int id = tmp3;		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(350)
		bool tmp4 = p_is_index;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(350)
		int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(350)
		if ((tmp4)){
			HX_STACK_LINE(350)
			tmp5 = (int)34963;
		}
		else{
			HX_STACK_LINE(350)
			tmp5 = (int)34962;
		}
		HX_STACK_LINE(350)
		int target_flag = tmp5;		HX_STACK_VAR(target_flag,"target_flag");
		HX_STACK_LINE(353)
		Array< ::String > tmp6 = this->attribs;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(353)
		::String tmp7 = a->m_name;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(353)
		int tmp8 = tmp6->indexOf(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(353)
		a->_loc_ = tmp8;
		HX_STACK_LINE(355)
		int tmp9 = id;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(355)
		int tmp10 = ::haxor::graphics::GL_obj::INVALID;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(355)
		bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(355)
		if ((tmp11)){
			HX_STACK_LINE(357)
			::haxor::platform::graphics::OpenGL tmp12 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(357)
			int tmp13 = tmp12->CreateBuffer();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(357)
			id = tmp13;
			HX_STACK_LINE(358)
			Array< int > tmp14 = this->buffers;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(358)
			int tmp15 = a->__cid;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(358)
			int tmp16 = id;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(358)
			tmp14[tmp15] = tmp16;
		}
		HX_STACK_LINE(361)
		{
			HX_STACK_LINE(361)
			::haxor::platform::graphics::OpenGL tmp12 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(361)
			int tmp13 = target_flag;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(361)
			int tmp14 = id;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(361)
			tmp12->BindBuffer(tmp13,tmp14);
		}
		HX_STACK_LINE(362)
		{
			HX_STACK_LINE(362)
			::haxor::platform::graphics::OpenGL tmp12 = ::haxor::graphics::GL_obj::m_gl;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(362)
			int tmp13 = target_flag;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(362)
			::haxor::io::Buffer tmp14 = a->data;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(362)
			int tmp15 = p_mode;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(362)
			tmp12->BufferData(tmp13,tmp14,tmp15);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(MeshContext_obj,UpdateAttrib,(void))


MeshContext_obj::MeshContext_obj()
{
}

void MeshContext_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MeshContext);
	HX_MARK_MEMBER_NAME(aid,"aid");
	HX_MARK_MEMBER_NAME(mid,"mid");
	HX_MARK_MEMBER_NAME(attribs,"attribs");
	HX_MARK_MEMBER_NAME(buffers,"buffers");
	HX_MARK_MEMBER_NAME(bound_element,"bound_element");
	HX_MARK_MEMBER_NAME(vao,"vao");
	HX_MARK_MEMBER_NAME(activated,"activated");
	HX_MARK_MEMBER_NAME(active_max,"active_max");
	HX_MARK_MEMBER_NAME(current,"current");
	HX_MARK_MEMBER_NAME(m_auto_white,"m_auto_white");
	HX_MARK_END_CLASS();
}

void MeshContext_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(aid,"aid");
	HX_VISIT_MEMBER_NAME(mid,"mid");
	HX_VISIT_MEMBER_NAME(attribs,"attribs");
	HX_VISIT_MEMBER_NAME(buffers,"buffers");
	HX_VISIT_MEMBER_NAME(bound_element,"bound_element");
	HX_VISIT_MEMBER_NAME(vao,"vao");
	HX_VISIT_MEMBER_NAME(activated,"activated");
	HX_VISIT_MEMBER_NAME(active_max,"active_max");
	HX_VISIT_MEMBER_NAME(current,"current");
	HX_VISIT_MEMBER_NAME(m_auto_white,"m_auto_white");
}

Dynamic MeshContext_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"aid") ) { return aid; }
		if (HX_FIELD_EQ(inName,"mid") ) { return mid; }
		if (HX_FIELD_EQ(inName,"vao") ) { return vao; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"Bind") ) { return Bind_dyn(); }
		if (HX_FIELD_EQ(inName,"Draw") ) { return Draw_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"Create") ) { return Create_dyn(); }
		if (HX_FIELD_EQ(inName,"Unbind") ) { return Unbind_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"attribs") ) { return attribs; }
		if (HX_FIELD_EQ(inName,"buffers") ) { return buffers; }
		if (HX_FIELD_EQ(inName,"current") ) { return current; }
		if (HX_FIELD_EQ(inName,"Destroy") ) { return Destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"activated") ) { return activated; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"active_max") ) { return active_max; }
		if (HX_FIELD_EQ(inName,"Initialize") ) { return Initialize_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"m_auto_white") ) { return m_auto_white; }
		if (HX_FIELD_EQ(inName,"RemoveAttrib") ) { return RemoveAttrib_dyn(); }
		if (HX_FIELD_EQ(inName,"UpdateAttrib") ) { return UpdateAttrib_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bound_element") ) { return bound_element; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"ActivateAttributes") ) { return ActivateAttributes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MeshContext_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"aid") ) { aid=inValue.Cast< ::haxor::context::UID >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mid") ) { mid=inValue.Cast< ::haxor::context::UID >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vao") ) { vao=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"attribs") ) { attribs=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buffers") ) { buffers=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast< ::haxor::graphics::mesh::Mesh >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"activated") ) { activated=inValue.Cast< Array< bool > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"active_max") ) { active_max=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"m_auto_white") ) { m_auto_white=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bound_element") ) { bound_element=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MeshContext_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void MeshContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("aid","\x7c","\xf6","\x49","\x00"));
	outFields->push(HX_HCSTRING("mid","\x88","\x11","\x53","\x00"));
	outFields->push(HX_HCSTRING("attribs","\xe9","\x79","\x2d","\x39"));
	outFields->push(HX_HCSTRING("buffers","\x73","\xa3","\x90","\xb1"));
	outFields->push(HX_HCSTRING("bound_element","\x7b","\x26","\xb1","\x61"));
	outFields->push(HX_HCSTRING("vao","\xe4","\xde","\x59","\x00"));
	outFields->push(HX_HCSTRING("activated","\x51","\x21","\xec","\x10"));
	outFields->push(HX_HCSTRING("active_max","\x6b","\xec","\x6f","\xfd"));
	outFields->push(HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"));
	outFields->push(HX_HCSTRING("m_auto_white","\x6b","\xa8","\xe6","\xcd"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxor::context::UID*/ ,(int)offsetof(MeshContext_obj,aid),HX_HCSTRING("aid","\x7c","\xf6","\x49","\x00")},
	{hx::fsObject /*::haxor::context::UID*/ ,(int)offsetof(MeshContext_obj,mid),HX_HCSTRING("mid","\x88","\x11","\x53","\x00")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(MeshContext_obj,attribs),HX_HCSTRING("attribs","\xe9","\x79","\x2d","\x39")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(MeshContext_obj,buffers),HX_HCSTRING("buffers","\x73","\xa3","\x90","\xb1")},
	{hx::fsInt,(int)offsetof(MeshContext_obj,bound_element),HX_HCSTRING("bound_element","\x7b","\x26","\xb1","\x61")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(MeshContext_obj,vao),HX_HCSTRING("vao","\xe4","\xde","\x59","\x00")},
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(MeshContext_obj,activated),HX_HCSTRING("activated","\x51","\x21","\xec","\x10")},
	{hx::fsInt,(int)offsetof(MeshContext_obj,active_max),HX_HCSTRING("active_max","\x6b","\xec","\x6f","\xfd")},
	{hx::fsObject /*::haxor::graphics::mesh::Mesh*/ ,(int)offsetof(MeshContext_obj,current),HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb")},
	{hx::fsBool,(int)offsetof(MeshContext_obj,m_auto_white),HX_HCSTRING("m_auto_white","\x6b","\xa8","\xe6","\xcd")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("aid","\x7c","\xf6","\x49","\x00"),
	HX_HCSTRING("mid","\x88","\x11","\x53","\x00"),
	HX_HCSTRING("attribs","\xe9","\x79","\x2d","\x39"),
	HX_HCSTRING("buffers","\x73","\xa3","\x90","\xb1"),
	HX_HCSTRING("bound_element","\x7b","\x26","\xb1","\x61"),
	HX_HCSTRING("vao","\xe4","\xde","\x59","\x00"),
	HX_HCSTRING("activated","\x51","\x21","\xec","\x10"),
	HX_HCSTRING("active_max","\x6b","\xec","\x6f","\xfd"),
	HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"),
	HX_HCSTRING("m_auto_white","\x6b","\xa8","\xe6","\xcd"),
	HX_HCSTRING("Initialize","\x70","\x35","\x6c","\xe3"),
	HX_HCSTRING("Create","\x1c","\xdb","\xa3","\xb0"),
	HX_HCSTRING("Destroy","\xda","\x54","\xd7","\xf1"),
	HX_HCSTRING("Bind","\xdd","\x21","\xf0","\x2b"),
	HX_HCSTRING("ActivateAttributes","\x8a","\xaa","\x25","\x07"),
	HX_HCSTRING("Unbind","\xb6","\x70","\x80","\x93"),
	HX_HCSTRING("Draw","\x24","\x58","\x49","\x2d"),
	HX_HCSTRING("RemoveAttrib","\xce","\xce","\x5c","\x17"),
	HX_HCSTRING("UpdateAttrib","\x53","\xda","\xf2","\xa7"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MeshContext_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MeshContext_obj::__mClass,"__mClass");
};

#endif

hx::Class MeshContext_obj::__mClass;

void MeshContext_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.context.MeshContext","\x37","\x3e","\x49","\x96");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &MeshContext_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MeshContext_obj >;
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
} // end namespace context
