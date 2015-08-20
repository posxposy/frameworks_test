#include <hxcpp.h>

#ifndef INCLUDED_haxor_component_Behaviour
#include <haxor/component/Behaviour.h>
#endif
#ifndef INCLUDED_haxor_component_Camera
#include <haxor/component/Camera.h>
#endif
#ifndef INCLUDED_haxor_component_Component
#include <haxor/component/Component.h>
#endif
#ifndef INCLUDED_haxor_component_Transform
#include <haxor/component/Transform.h>
#endif
#ifndef INCLUDED_haxor_context_CameraContext
#include <haxor/context/CameraContext.h>
#endif
#ifndef INCLUDED_haxor_context_EngineContext
#include <haxor/context/EngineContext.h>
#endif
#ifndef INCLUDED_haxor_core_CameraMode
#include <haxor/core/CameraMode.h>
#endif
#ifndef INCLUDED_haxor_core_Entity
#include <haxor/core/Entity.h>
#endif
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_IResizeable
#include <haxor/core/IResizeable.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_graphics_Screen
#include <haxor/graphics/Screen.h>
#endif
#ifndef INCLUDED_haxor_graphics_texture_RenderTexture
#include <haxor/graphics/texture/RenderTexture.h>
#endif
#ifndef INCLUDED_haxor_graphics_texture_Texture
#include <haxor/graphics/texture/Texture.h>
#endif
#ifndef INCLUDED_haxor_graphics_texture_TextureCube
#include <haxor/graphics/texture/TextureCube.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_ISerializable
#include <haxor/io/serialization/ISerializable.h>
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
#ifndef INCLUDED_haxor_math_Vector3
#include <haxor/math/Vector3.h>
#endif
#ifndef INCLUDED_haxor_math_Vector4
#include <haxor/math/Vector4.h>
#endif
namespace haxor{
namespace component{

Void Camera_obj::__construct(::String __o_p_name)
{
HX_STACK_FRAME("haxor.component.Camera","new",0x924d47f4,"haxor.component.Camera.new","haxor/component/Camera.hx",28,0xf5fa0e7a)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_p_name,"p_name")
::String p_name = __o_p_name.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(28)
	::String tmp = p_name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	super::__construct(tmp);
}
;
	return null();
}

//Camera_obj::~Camera_obj() { }

Dynamic Camera_obj::__CreateEmpty() { return  new Camera_obj; }
hx::ObjectPtr< Camera_obj > Camera_obj::__new(::String __o_p_name)
{  hx::ObjectPtr< Camera_obj > _result_ = new Camera_obj();
	_result_->__construct(__o_p_name);
	return _result_;}

Dynamic Camera_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Camera_obj > _result_ = new Camera_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *Camera_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxor::core::IResizeable_obj)) return operator ::haxor::core::IResizeable_obj *();
	return super::__ToInterface(inType);
}

Camera_obj::operator ::haxor::core::IResizeable_obj *()
	{ return new ::haxor::core::IResizeable_delegate_< Camera_obj >(this); }
int Camera_obj::get_mask( ){
	HX_STACK_FRAME("haxor.component.Camera","get_mask",0x14398c61,"haxor.component.Camera.get_mask","haxor/component/Camera.hx",91,0xf5fa0e7a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(91)
	int tmp = this->m_mask;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(91)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_mask,return )

int Camera_obj::set_mask( int v){
	HX_STACK_FRAME("haxor.component.Camera","set_mask",0xc296e5d5,"haxor.component.Camera.set_mask","haxor/component/Camera.hx",93,0xf5fa0e7a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(94)
	int tmp = this->m_mask;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(94)
	int tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(94)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(94)
	if ((tmp2)){
		HX_STACK_LINE(94)
		int tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(94)
		return tmp3;
	}
	HX_STACK_LINE(95)
	this->m_mask = v;
	HX_STACK_LINE(96)
	int tmp3 = this->m_mask;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(96)
	int it = tmp3;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(97)
	Array< int > tmp4 = Array_obj< int >::__new();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(97)
	this->m_layers = tmp4;
	HX_STACK_LINE(98)
	{
		HX_STACK_LINE(98)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(98)
		while((true)){
			HX_STACK_LINE(98)
			bool tmp5 = (_g < (int)32);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(98)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(98)
			if ((tmp6)){
				HX_STACK_LINE(98)
				break;
			}
			HX_STACK_LINE(98)
			int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(98)
			int i = tmp7;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(100)
			int tmp8 = (int(it) & int((int)1));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(100)
			bool tmp9 = (tmp8 != (int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(100)
			if ((tmp9)){
				HX_STACK_LINE(100)
				Array< int > tmp10 = this->m_layers;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(100)
				int tmp11 = (int((int)1) << int(i));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(100)
				tmp10->push(tmp11);
			}
			HX_STACK_LINE(101)
			int tmp10 = (int(it) >> int((int)1));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(101)
			it = tmp10;
		}
	}
	HX_STACK_LINE(103)
	int tmp5 = v;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(103)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_mask,return )

Float Camera_obj::get_fov( ){
	HX_STACK_FRAME("haxor.component.Camera","get_fov",0x8f916138,"haxor.component.Camera.get_fov","haxor/component/Camera.hx",114,0xf5fa0e7a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(114)
	Float tmp = this->m_fov;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(114)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_fov,return )

Float Camera_obj::set_fov( Float v){
	HX_STACK_FRAME("haxor.component.Camera","set_fov",0x8292f244,"haxor.component.Camera.set_fov","haxor/component/Camera.hx",115,0xf5fa0e7a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(115)
	this->m_fov = v;
	HX_STACK_LINE(115)
	this->m_projection_dirty = true;
	HX_STACK_LINE(115)
	Float tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(115)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_fov,return )

Float Camera_obj::get_near( ){
	HX_STACK_FRAME("haxor.component.Camera","get_near",0x14e5bc5d,"haxor.component.Camera.get_near","haxor/component/Camera.hx",123,0xf5fa0e7a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(123)
	Float tmp = this->m_near;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(123)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_near,return )

Float Camera_obj::set_near( Float v){
	HX_STACK_FRAME("haxor.component.Camera","set_near",0xc34315d1,"haxor.component.Camera.set_near","haxor/component/Camera.hx",124,0xf5fa0e7a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(124)
	this->m_near = v;
	HX_STACK_LINE(124)
	this->m_projection_dirty = true;
	HX_STACK_LINE(124)
	this->m_proj_uniform_dirty = true;
	HX_STACK_LINE(124)
	Float tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(124)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_near,return )

Float Camera_obj::get_far( ){
	HX_STACK_FRAME("haxor.component.Camera","get_far",0x8f915502,"haxor.component.Camera.get_far","haxor/component/Camera.hx",132,0xf5fa0e7a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(132)
	Float tmp = this->m_far;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(132)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_far,return )

Float Camera_obj::set_far( Float v){
	HX_STACK_FRAME("haxor.component.Camera","set_far",0x8292e60e,"haxor.component.Camera.set_far","haxor/component/Camera.hx",133,0xf5fa0e7a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(133)
	this->m_far = v;
	HX_STACK_LINE(133)
	this->m_projection_dirty = true;
	HX_STACK_LINE(133)
	this->m_proj_uniform_dirty = true;
	HX_STACK_LINE(133)
	Float tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(133)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_far,return )

int Camera_obj::get_order( ){
	HX_STACK_FRAME("haxor.component.Camera","get_order",0xd01fab79,"haxor.component.Camera.get_order","haxor/component/Camera.hx",142,0xf5fa0e7a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(142)
	int tmp = this->m_order;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(142)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_order,return )

int Camera_obj::set_order( int v){
	HX_STACK_FRAME("haxor.component.Camera","set_order",0xb3709785,"haxor.component.Camera.set_order","haxor/component/Camera.hx",143,0xf5fa0e7a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(143)
	int tmp = this->m_order;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(143)
	int tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(143)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(143)
	if ((tmp2)){
		HX_STACK_LINE(143)
		int tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(143)
		return tmp3;
	}
	HX_STACK_LINE(143)
	this->m_order = v;
	HX_STACK_LINE(143)
	::haxor::context::CameraContext tmp3 = ::haxor::context::EngineContext_obj::camera;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(143)
	tmp3->SortCameraList();
	HX_STACK_LINE(143)
	int tmp4 = this->m_order;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(143)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_order,return )

::haxor::math::AABB2 Camera_obj::get_pixelViewport( ){
	HX_STACK_FRAME("haxor.component.Camera","get_pixelViewport",0x0871e2f7,"haxor.component.Camera.get_pixelViewport","haxor/component/Camera.hx",149,0xf5fa0e7a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(149)
	::haxor::math::AABB2 tmp = this->m_pixelViewport;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(149)
	::haxor::math::AABB2 tmp1 = tmp->get_clone();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(149)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_pixelViewport,return )

::haxor::math::AABB2 Camera_obj::get_viewport( ){
	HX_STACK_FRAME("haxor.component.Camera","get_viewport",0x016bf65b,"haxor.component.Camera.get_viewport","haxor/component/Camera.hx",158,0xf5fa0e7a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(158)
	::haxor::math::AABB2 tmp = this->m_viewport;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(158)
	::haxor::math::AABB2 tmp1 = tmp->get_clone();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(158)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_viewport,return )

::haxor::math::AABB2 Camera_obj::set_viewport( ::haxor::math::AABB2 v){
	HX_STACK_FRAME("haxor.component.Camera","set_viewport",0x166519cf,"haxor.component.Camera.set_viewport","haxor/component/Camera.hx",159,0xf5fa0e7a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(159)
	::haxor::math::AABB2 tmp = this->m_viewport;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(159)
	::haxor::math::AABB2 tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(159)
	tmp->SetAABB2(tmp1);
	HX_STACK_LINE(159)
	::haxor::context::CameraContext tmp2 = ::haxor::context::EngineContext_obj::camera;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(159)
	tmp2->UpdateViewport(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(159)
	::haxor::math::AABB2 tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(159)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_viewport,return )

::haxor::math::Matrix4 Camera_obj::get_CameraToWorld( ){
	HX_STACK_FRAME("haxor.component.Camera","get_CameraToWorld",0xbdba807d,"haxor.component.Camera.get_CameraToWorld","haxor/component/Camera.hx",167,0xf5fa0e7a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(167)
	::haxor::core::Entity tmp = this->m_entity;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(167)
	::haxor::math::Matrix4 tmp1 = tmp->m_transform->get_WorldMatrix();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(167)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_CameraToWorld,return )

::haxor::math::Matrix4 Camera_obj::get_WorldToCamera( ){
	HX_STACK_FRAME("haxor.component.Camera","get_WorldToCamera",0xaa8f50bd,"haxor.component.Camera.get_WorldToCamera","haxor/component/Camera.hx",174,0xf5fa0e7a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(174)
	::haxor::core::Entity tmp = this->m_entity;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(174)
	::haxor::math::Matrix4 tmp1 = tmp->m_transform->get_WorldMatrixInverse();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(174)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_WorldToCamera,return )

::haxor::math::Matrix4 Camera_obj::get_ProjectionMatrix( ){
	HX_STACK_FRAME("haxor.component.Camera","get_ProjectionMatrix",0xc4d78b45,"haxor.component.Camera.get_ProjectionMatrix","haxor/component/Camera.hx",181,0xf5fa0e7a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(181)
	this->UpdateProjection();
	HX_STACK_LINE(181)
	::haxor::math::Matrix4 tmp = this->m_projectionMatrix;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(181)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_ProjectionMatrix,return )

::haxor::math::Matrix4 Camera_obj::get_ProjectionMatrixInverse( ){
	HX_STACK_FRAME("haxor.component.Camera","get_ProjectionMatrixInverse",0x6ddb0aeb,"haxor.component.Camera.get_ProjectionMatrixInverse","haxor/component/Camera.hx",189,0xf5fa0e7a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(189)
	this->UpdateProjection();
	HX_STACK_LINE(189)
	::haxor::math::Matrix4 tmp = this->m_projectionMatrixInverse;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(189)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_ProjectionMatrixInverse,return )

::haxor::graphics::texture::RenderTexture Camera_obj::get_target( ){
	HX_STACK_FRAME("haxor.component.Camera","get_target",0x8ad1c606,"haxor.component.Camera.get_target","haxor/component/Camera.hx",198,0xf5fa0e7a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(198)
	::haxor::graphics::texture::RenderTexture tmp = this->m_target;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(198)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_target,return )

::haxor::graphics::texture::RenderTexture Camera_obj::set_target( ::haxor::graphics::texture::RenderTexture v){
	HX_STACK_FRAME("haxor.component.Camera","set_target",0x8e4f647a,"haxor.component.Camera.set_target","haxor/component/Camera.hx",199,0xf5fa0e7a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(199)
	this->m_target = v;
	HX_STACK_LINE(199)
	::haxor::context::CameraContext tmp = ::haxor::context::EngineContext_obj::camera;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(199)
	tmp->UpdateViewport(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(199)
	::haxor::graphics::texture::RenderTexture tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(199)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_target,return )

Float Camera_obj::get_quality( ){
	HX_STACK_FRAME("haxor.component.Camera","get_quality",0xa89f906a,"haxor.component.Camera.get_quality","haxor/component/Camera.hx",207,0xf5fa0e7a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(207)
	Float tmp = this->m_quality;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(207)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_quality,return )

Float Camera_obj::set_quality( Float v){
	HX_STACK_FRAME("haxor.component.Camera","set_quality",0xb30c9776,"haxor.component.Camera.set_quality","haxor/component/Camera.hx",208,0xf5fa0e7a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(208)
	bool tmp = (v <= ((Float)0.0));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(208)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(208)
	if ((tmp)){
		HX_STACK_LINE(208)
		tmp1 = ((Float)0.0);
	}
	else{
		HX_STACK_LINE(208)
		bool tmp2 = (v >= ((Float)1.0));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(208)
		if ((tmp2)){
			HX_STACK_LINE(208)
			tmp1 = ((Float)1.0);
		}
		else{
			HX_STACK_LINE(208)
			tmp1 = v;
		}
	}
	HX_STACK_LINE(208)
	this->m_quality = tmp1;
	HX_STACK_LINE(208)
	::haxor::context::CameraContext tmp2 = ::haxor::context::EngineContext_obj::camera;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(208)
	tmp2->UpdateViewport(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(208)
	Float tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(208)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_quality,return )

bool Camera_obj::get_captureDepth( ){
	HX_STACK_FRAME("haxor.component.Camera","get_captureDepth",0x75413312,"haxor.component.Camera.get_captureDepth","haxor/component/Camera.hx",216,0xf5fa0e7a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(216)
	bool tmp = this->m_captureDepth;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(216)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_captureDepth,return )

bool Camera_obj::set_captureDepth( bool v){
	HX_STACK_FRAME("haxor.component.Camera","set_captureDepth",0xcb832086,"haxor.component.Camera.set_captureDepth","haxor/component/Camera.hx",217,0xf5fa0e7a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(217)
	this->m_captureDepth = v;
	HX_STACK_LINE(217)
	::haxor::context::CameraContext tmp = ::haxor::context::EngineContext_obj::camera;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(217)
	tmp->ClearTargets(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(217)
	::haxor::context::CameraContext tmp1 = ::haxor::context::EngineContext_obj::camera;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(217)
	tmp1->UpdateViewport(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(217)
	bool tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(217)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_captureDepth,return )

Dynamic Camera_obj::get_filters( ){
	HX_STACK_FRAME("haxor.component.Camera","get_filters",0x6d9a2d66,"haxor.component.Camera.get_filters","haxor/component/Camera.hx",224,0xf5fa0e7a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(224)
	Dynamic tmp = this->m_filters;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(224)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_filters,return )

Dynamic Camera_obj::set_filters( Dynamic v){
	HX_STACK_FRAME("haxor.component.Camera","set_filters",0x78073472,"haxor.component.Camera.set_filters","haxor/component/Camera.hx",226,0xf5fa0e7a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(227)
	bool tmp = (v == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(227)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(227)
	if ((tmp)){
		HX_STACK_LINE(227)
		tmp1 = Dynamic( Array_obj<Dynamic>::__new());
	}
	else{
		HX_STACK_LINE(227)
		tmp1 = v;
	}
	HX_STACK_LINE(227)
	this->m_filters = tmp1;
	HX_STACK_LINE(228)
	Dynamic tmp2 = this->m_filters;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(228)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_filters,return )

Array< ::Dynamic > Camera_obj::get_frustum( ){
	HX_STACK_FRAME("haxor.component.Camera","get_frustum",0x34cdd30d,"haxor.component.Camera.get_frustum","haxor/component/Camera.hx",241,0xf5fa0e7a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(241)
	this->UpdateProjection();
	HX_STACK_LINE(241)
	Array< ::Dynamic > tmp = this->m_frustum;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(241)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_frustum,return )

int Camera_obj::get_mode( ){
	HX_STACK_FRAME("haxor.component.Camera","get_mode",0x14441ed8,"haxor.component.Camera.get_mode","haxor/component/Camera.hx",250,0xf5fa0e7a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(250)
	int tmp = this->m_mode;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(250)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_mode,return )

int Camera_obj::set_mode( int v){
	HX_STACK_FRAME("haxor.component.Camera","set_mode",0xc2a1784c,"haxor.component.Camera.set_mode","haxor/component/Camera.hx",251,0xf5fa0e7a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(251)
	int tmp = this->m_mode;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(251)
	int tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(251)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(251)
	if ((tmp2)){
		HX_STACK_LINE(251)
		int tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(251)
		return tmp3;
	}
	HX_STACK_LINE(251)
	this->m_mode = v;
	HX_STACK_LINE(251)
	this->UpdateProjection();
	HX_STACK_LINE(251)
	int tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(251)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_mode,return )

::haxor::math::AABB2 Camera_obj::get_screen( ){
	HX_STACK_FRAME("haxor.component.Camera","get_screen",0x4b420e21,"haxor.component.Camera.get_screen","haxor/component/Camera.hx",258,0xf5fa0e7a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(258)
	::haxor::math::AABB2 tmp = this->m_screen;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(258)
	::haxor::math::AABB2 tmp1 = tmp->get_clone();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(258)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_screen,return )

::haxor::math::AABB2 Camera_obj::set_screen( ::haxor::math::AABB2 v){
	HX_STACK_FRAME("haxor.component.Camera","set_screen",0x4ebfac95,"haxor.component.Camera.set_screen","haxor/component/Camera.hx",259,0xf5fa0e7a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(259)
	::haxor::math::AABB2 tmp = this->m_screen;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(259)
	::haxor::math::AABB2 tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(259)
	tmp->SetAABB2(tmp1);
	HX_STACK_LINE(259)
	this->UpdateProjection();
	HX_STACK_LINE(259)
	::haxor::math::AABB2 tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(259)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_screen,return )

Void Camera_obj::OnBuild( ){
{
		HX_STACK_FRAME("haxor.component.Camera","OnBuild",0x87487303,"haxor.component.Camera.OnBuild","haxor/component/Camera.hx",286,0xf5fa0e7a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(287)
		this->super::OnBuild();
		HX_STACK_LINE(288)
		::haxor::context::CameraContext tmp = ::haxor::context::EngineContext_obj::camera;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(288)
		tmp->Create(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(289)
		::haxor::component::Camera tmp1 = ::haxor::component::Camera_obj::m_main;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(289)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(289)
		if ((tmp2)){
			HX_STACK_LINE(289)
			::haxor::component::Camera_obj::m_main = hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(290)
		this->m_order = (int)0;
		HX_STACK_LINE(291)
		this->m_quality = ((Float)1.0);
		HX_STACK_LINE(292)
		::haxor::math::AABB2 tmp3 = ::haxor::math::AABB2_obj::get_empty();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(292)
		this->m_pixelViewport = tmp3;
		HX_STACK_LINE(293)
		::haxor::math::AABB2 tmp4 = ::haxor::math::AABB2_obj::get_empty();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(293)
		this->m_viewport = tmp4;
		HX_STACK_LINE(294)
		::haxor::math::AABB3 tmp5 = ::haxor::math::AABB3_obj::get_empty();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(294)
		this->m_aabb = tmp5;
		HX_STACK_LINE(295)
		::haxor::math::Matrix4 tmp6 = ::haxor::math::Matrix4_obj::__new((int)1,(int)0,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(295)
		this->m_projectionMatrix = tmp6;
		HX_STACK_LINE(296)
		::haxor::math::Matrix4 tmp7 = ::haxor::math::Matrix4_obj::__new((int)1,(int)0,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(296)
		this->m_projectionMatrixInverse = tmp7;
		HX_STACK_LINE(297)
		::haxor::math::Matrix4 tmp8 = ::haxor::math::Matrix4_obj::__new((int)1,(int)0,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(297)
		this->m_skyboxProjection = tmp8;
		HX_STACK_LINE(298)
		::haxor::math::Matrix4 tmp9 = ::haxor::math::Matrix4_obj::__new((int)1,(int)0,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(298)
		this->m_skyboxProjectionInverse = tmp9;
		HX_STACK_LINE(299)
		this->m_fov = (int)60;
		HX_STACK_LINE(300)
		this->m_near = ((Float)0.1);
		HX_STACK_LINE(301)
		this->m_far = (int)500;
		HX_STACK_LINE(302)
		Dynamic tmp10 = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(302)
		this->m_filters = tmp10;
		HX_STACK_LINE(303)
		::haxor::math::Color tmp11 = ::haxor::math::Color_obj::__new((int)0,(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(303)
		this->background = tmp11;
		HX_STACK_LINE(304)
		this->clear = (int)3;
		HX_STACK_LINE(305)
		this->set_mask((int)1);
		HX_STACK_LINE(306)
		{
			HX_STACK_LINE(306)
			::haxor::math::AABB2 tmp12 = ::haxor::math::AABB2_obj::__new((int)0,(int)0,(int)1,(int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(306)
			::haxor::math::AABB2 v = tmp12;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(306)
			::haxor::math::AABB2 tmp13 = this->m_viewport;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(306)
			::haxor::math::AABB2 tmp14 = v;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(306)
			tmp13->SetAABB2(tmp14);
			HX_STACK_LINE(306)
			::haxor::context::CameraContext tmp15 = ::haxor::context::EngineContext_obj::camera;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(306)
			tmp15->UpdateViewport(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(306)
			v;
		}
		HX_STACK_LINE(307)
		this->m_projection_dirty = true;
		HX_STACK_LINE(308)
		this->m_view_uniform_dirty = true;
		HX_STACK_LINE(309)
		this->m_proj_uniform_dirty = true;
		HX_STACK_LINE(311)
		int tmp12 = ::haxor::core::CameraMode_obj::Perspective;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(311)
		this->m_mode = tmp12;
		HX_STACK_LINE(313)
		::haxor::math::AABB2 tmp13 = ::haxor::math::AABB2_obj::FromMinMax((int)-1,(int)1,(int)-1,(int)1);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(313)
		this->m_screen = tmp13;
		HX_STACK_LINE(316)
		::haxor::math::Vector4 tmp14 = ::haxor::math::Vector4_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(317)
		::haxor::math::Vector4 tmp15 = ::haxor::math::Vector4_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(318)
		::haxor::math::Vector4 tmp16 = ::haxor::math::Vector4_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(319)
		::haxor::math::Vector4 tmp17 = ::haxor::math::Vector4_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(320)
		::haxor::math::Vector4 tmp18 = ::haxor::math::Vector4_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(321)
		::haxor::math::Vector4 tmp19 = ::haxor::math::Vector4_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(322)
		::haxor::math::Vector4 tmp20 = ::haxor::math::Vector4_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(323)
		::haxor::math::Vector4 tmp21 = ::haxor::math::Vector4_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(315)
		Array< ::Dynamic > tmp22 = Array_obj< ::Dynamic >::__new().Add(tmp14).Add(tmp15).Add(tmp16).Add(tmp17).Add(tmp18).Add(tmp19).Add(tmp20).Add(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(315)
		this->m_frustum = tmp22;
	}
return null();
}


::haxor::math::Vector4 Camera_obj::WorldToProjection( ::haxor::math::Vector3 p_world_point,::haxor::math::Vector4 p_result){
	HX_STACK_FRAME("haxor.component.Camera","WorldToProjection",0x920ca1d0,"haxor.component.Camera.WorldToProjection","haxor/component/Camera.hx",333,0xf5fa0e7a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_world_point,"p_world_point")
	HX_STACK_ARG(p_result,"p_result")
	HX_STACK_LINE(334)
	bool tmp = (p_result == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(334)
	::haxor::math::Vector4 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(334)
	if ((tmp)){
		HX_STACK_LINE(334)
		tmp1 = ::haxor::math::Vector4_obj::__new(null(),null(),null(),null());
	}
	else{
		HX_STACK_LINE(334)
		tmp1 = p_result;
	}
	HX_STACK_LINE(334)
	::haxor::math::Vector4 p = tmp1;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(335)
	p->w = ((Float)1.0);
	HX_STACK_LINE(336)
	p->x = p_world_point->x;
	HX_STACK_LINE(337)
	p->y = p_world_point->y;
	HX_STACK_LINE(338)
	p->z = p_world_point->z;
	HX_STACK_LINE(339)
	{
		HX_STACK_LINE(339)
		::haxor::math::Matrix4 tmp2 = this->get_WorldToCamera();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(339)
		::haxor::math::Matrix4 _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(339)
		Float tmp3 = (_this->m00 * p->x);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(339)
		Float tmp4 = (_this->m01 * p->y);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(339)
		Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(339)
		Float tmp6 = (_this->m02 * p->z);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(339)
		Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(339)
		Float tmp8 = (_this->m03 * p->w);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(339)
		Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(339)
		Float vx = tmp9;		HX_STACK_VAR(vx,"vx");
		HX_STACK_LINE(339)
		Float tmp10 = (_this->m10 * p->x);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(339)
		Float tmp11 = (_this->m11 * p->y);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(339)
		Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(339)
		Float tmp13 = (_this->m12 * p->z);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(339)
		Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(339)
		Float tmp15 = (_this->m13 * p->w);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(339)
		Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(339)
		Float vy = tmp16;		HX_STACK_VAR(vy,"vy");
		HX_STACK_LINE(339)
		Float tmp17 = (_this->m20 * p->x);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(339)
		Float tmp18 = (_this->m21 * p->y);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(339)
		Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(339)
		Float tmp20 = (_this->m22 * p->z);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(339)
		Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(339)
		Float tmp22 = (_this->m23 * p->w);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(339)
		Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(339)
		Float vz = tmp23;		HX_STACK_VAR(vz,"vz");
		HX_STACK_LINE(339)
		Float tmp24 = (_this->m30 * p->x);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(339)
		Float tmp25 = (_this->m31 * p->y);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(339)
		Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(339)
		Float tmp27 = (_this->m32 * p->z);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(339)
		Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(339)
		Float tmp29 = (_this->m33 * p->w);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(339)
		Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(339)
		Float vw = tmp30;		HX_STACK_VAR(vw,"vw");
		HX_STACK_LINE(339)
		p->x = vx;
		HX_STACK_LINE(339)
		p->y = vy;
		HX_STACK_LINE(339)
		p->z = vz;
		HX_STACK_LINE(339)
		p->w = vw;
		HX_STACK_LINE(339)
		p;
	}
	HX_STACK_LINE(340)
	{
		HX_STACK_LINE(340)
		::haxor::math::Matrix4 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(340)
		{
			HX_STACK_LINE(340)
			this->UpdateProjection();
			HX_STACK_LINE(340)
			tmp2 = this->m_projectionMatrix;
		}
		HX_STACK_LINE(340)
		::haxor::math::Matrix4 _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(340)
		Float tmp3 = (_this->m00 * p->x);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(340)
		Float tmp4 = (_this->m01 * p->y);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(340)
		Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(340)
		Float tmp6 = (_this->m02 * p->z);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(340)
		Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(340)
		Float tmp8 = (_this->m03 * p->w);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(340)
		Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(340)
		Float vx = tmp9;		HX_STACK_VAR(vx,"vx");
		HX_STACK_LINE(340)
		Float tmp10 = (_this->m10 * p->x);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(340)
		Float tmp11 = (_this->m11 * p->y);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(340)
		Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(340)
		Float tmp13 = (_this->m12 * p->z);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(340)
		Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(340)
		Float tmp15 = (_this->m13 * p->w);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(340)
		Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(340)
		Float vy = tmp16;		HX_STACK_VAR(vy,"vy");
		HX_STACK_LINE(340)
		Float tmp17 = (_this->m20 * p->x);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(340)
		Float tmp18 = (_this->m21 * p->y);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(340)
		Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(340)
		Float tmp20 = (_this->m22 * p->z);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(340)
		Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(340)
		Float tmp22 = (_this->m23 * p->w);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(340)
		Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(340)
		Float vz = tmp23;		HX_STACK_VAR(vz,"vz");
		HX_STACK_LINE(340)
		Float tmp24 = (_this->m30 * p->x);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(340)
		Float tmp25 = (_this->m31 * p->y);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(340)
		Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(340)
		Float tmp27 = (_this->m32 * p->z);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(340)
		Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(340)
		Float tmp29 = (_this->m33 * p->w);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(340)
		Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(340)
		Float vw = tmp30;		HX_STACK_VAR(vw,"vw");
		HX_STACK_LINE(340)
		p->x = vx;
		HX_STACK_LINE(340)
		p->y = vy;
		HX_STACK_LINE(340)
		p->z = vz;
		HX_STACK_LINE(340)
		p->w = vw;
		HX_STACK_LINE(340)
		p;
	}
	HX_STACK_LINE(341)
	::haxor::math::Vector4 tmp2 = p;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(341)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(Camera_obj,WorldToProjection,return )

Float Camera_obj::WorldToDepth( ::haxor::math::Vector3 p_world_point){
	HX_STACK_FRAME("haxor.component.Camera","WorldToDepth",0x4fe15f62,"haxor.component.Camera.WorldToDepth","haxor/component/Camera.hx",350,0xf5fa0e7a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_world_point,"p_world_point")
	HX_STACK_LINE(351)
	::haxor::math::Matrix4 tmp = this->get_WorldToCamera();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(351)
	::haxor::math::Matrix4 wm = tmp;		HX_STACK_VAR(wm,"wm");
	HX_STACK_LINE(352)
	Float tmp1 = (wm->m20 * p_world_point->x);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(352)
	Float tmp2 = (wm->m21 * p_world_point->y);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(352)
	Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(352)
	Float tmp4 = (wm->m22 * p_world_point->z);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(352)
	Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(352)
	Float tmp6 = wm->m23;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(352)
	Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(352)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,WorldToDepth,return )

bool Camera_obj::IsCulled( ::haxor::math::Vector3 p_world_point){
	HX_STACK_FRAME("haxor.component.Camera","IsCulled",0xb92fd627,"haxor.component.Camera.IsCulled","haxor/component/Camera.hx",361,0xf5fa0e7a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_world_point,"p_world_point")
	HX_STACK_LINE(362)
	::haxor::math::Vector3 tmp = p_world_point;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(362)
	::haxor::math::Vector4 tmp1 = this->WorldToProjection(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(362)
	bool tmp2 = tmp1->IsCulled();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(362)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,IsCulled,return )

Void Camera_obj::LookAt( ::haxor::math::Vector3 p_at,::haxor::math::Vector3 p_up,hx::Null< Float >  __o_p_smooth){
Float p_smooth = __o_p_smooth.Default(((Float)0.0));
	HX_STACK_FRAME("haxor.component.Camera","LookAt",0xd028663e,"haxor.component.Camera.LookAt","haxor/component/Camera.hx",371,0xf5fa0e7a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_at,"p_at")
	HX_STACK_ARG(p_up,"p_up")
	HX_STACK_ARG(p_smooth,"p_smooth")
{
		HX_STACK_LINE(371)
		::haxor::core::Entity tmp = this->m_entity;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(371)
		::haxor::math::Vector3 tmp1 = p_at;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(371)
		::haxor::math::Vector3 tmp2 = p_up;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(371)
		Float tmp3 = p_smooth;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(371)
		tmp->m_transform->LookAt(tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Camera_obj,LookAt,(void))

Void Camera_obj::UpdateProjection( ){
{
		HX_STACK_FRAME("haxor.component.Camera","UpdateProjection",0x2cce9004,"haxor.component.Camera.UpdateProjection","haxor/component/Camera.hx",377,0xf5fa0e7a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(378)
		bool tmp = this->m_projection_dirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(378)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(378)
		if ((tmp1)){
			HX_STACK_LINE(378)
			return null();
		}
		HX_STACK_LINE(379)
		this->m_projection_dirty = false;
		HX_STACK_LINE(380)
		this->m_view_uniform_dirty = true;
		HX_STACK_LINE(382)
		{
			HX_STACK_LINE(382)
			int tmp2 = this->m_mode;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(382)
			int _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(382)
			int tmp3 = _g;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(382)
			switch( (int)(tmp3)){
				case (int)0: {
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(389)
					Float tmp4 = this->m_fov;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(389)
					Float tmp5 = this->m_aspect;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(389)
					Float tmp6 = this->m_near;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(389)
					Float tmp7 = this->m_far;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(389)
					::haxor::math::Matrix4 tmp8 = this->m_projectionMatrix;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(389)
					::haxor::math::Matrix4_obj::Perspective(tmp4,tmp5,tmp6,tmp7,tmp8);
					HX_STACK_LINE(390)
					Float tmp9 = this->m_fov;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(390)
					Float tmp10 = this->m_aspect;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(390)
					Float tmp11 = this->m_near;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(390)
					Float tmp12 = this->m_far;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(390)
					::haxor::math::Matrix4 tmp13 = this->m_projectionMatrixInverse;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(390)
					::haxor::math::Matrix4_obj::PerspectiveInverse(tmp9,tmp10,tmp11,tmp12,tmp13);
					HX_STACK_LINE(391)
					Float tmp14 = this->m_fov;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(391)
					Float tmp15 = this->m_aspect;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(391)
					::haxor::math::Matrix4 tmp16 = this->m_skyboxProjection;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(391)
					::haxor::math::Matrix4_obj::Perspective(tmp14,tmp15,((Float)0.1),((Float)100000.0),tmp16);
					HX_STACK_LINE(392)
					Float tmp17 = this->m_fov;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(392)
					Float tmp18 = this->m_aspect;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(392)
					::haxor::math::Matrix4 tmp19 = this->m_skyboxProjectionInverse;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(392)
					::haxor::math::Matrix4_obj::PerspectiveInverse(tmp17,tmp18,((Float)0.1),((Float)100000.0),tmp19);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(395)
					::haxor::math::Matrix4 tmp4 = this->m_projectionMatrix;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(395)
					::haxor::math::AABB2 tmp5 = this->m_screen;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(395)
					Float tmp6 = tmp5->get_xMin();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(395)
					::haxor::math::AABB2 tmp7 = this->m_screen;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(395)
					Float tmp8 = tmp7->get_xMax();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(395)
					::haxor::math::AABB2 tmp9 = this->m_screen;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(395)
					Float tmp10 = tmp9->get_yMax();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(395)
					::haxor::math::AABB2 tmp11 = this->m_screen;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(395)
					Float tmp12 = tmp11->get_yMin();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(395)
					Float tmp13 = this->m_near;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(395)
					Float tmp14 = this->m_far;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(395)
					Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(395)
					tmp4->SetOrtho(tmp6,tmp8,tmp10,tmp12,tmp13,tmp15);
					HX_STACK_LINE(396)
					::haxor::math::Matrix4 tmp16 = this->m_projectionMatrixInverse;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(396)
					::haxor::math::AABB2 tmp17 = this->m_screen;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(396)
					Float tmp18 = tmp17->get_xMin();		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(396)
					::haxor::math::AABB2 tmp19 = this->m_screen;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(396)
					Float tmp20 = tmp19->get_xMax();		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(396)
					::haxor::math::AABB2 tmp21 = this->m_screen;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(396)
					Float tmp22 = tmp21->get_yMax();		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(396)
					::haxor::math::AABB2 tmp23 = this->m_screen;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(396)
					Float tmp24 = tmp23->get_yMin();		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(396)
					Float tmp25 = this->m_near;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(396)
					Float tmp26 = this->m_far;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(396)
					Float tmp27 = -(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(396)
					tmp16->SetOrthoInverse(tmp18,tmp20,tmp22,tmp24,tmp25,tmp27);
					HX_STACK_LINE(397)
					::haxor::math::Matrix4 tmp28 = this->m_skyboxProjection;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(397)
					::haxor::math::AABB2 tmp29 = this->m_screen;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(397)
					Float tmp30 = tmp29->get_xMin();		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(397)
					::haxor::math::AABB2 tmp31 = this->m_screen;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(397)
					Float tmp32 = tmp31->get_xMax();		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(397)
					::haxor::math::AABB2 tmp33 = this->m_screen;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(397)
					Float tmp34 = tmp33->get_yMax();		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(397)
					::haxor::math::AABB2 tmp35 = this->m_screen;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(397)
					Float tmp36 = tmp35->get_yMin();		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(397)
					Float tmp37 = this->m_near;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(397)
					Float tmp38 = this->m_far;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(397)
					Float tmp39 = -(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(397)
					tmp28->SetOrtho(tmp30,tmp32,tmp34,tmp36,tmp37,tmp39);
					HX_STACK_LINE(398)
					::haxor::math::Matrix4 tmp40 = this->m_skyboxProjectionInverse;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(398)
					::haxor::math::AABB2 tmp41 = this->m_screen;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(398)
					Float tmp42 = tmp41->get_xMin();		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(398)
					::haxor::math::AABB2 tmp43 = this->m_screen;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(398)
					Float tmp44 = tmp43->get_xMax();		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(398)
					::haxor::math::AABB2 tmp45 = this->m_screen;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(398)
					Float tmp46 = tmp45->get_yMax();		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(398)
					::haxor::math::AABB2 tmp47 = this->m_screen;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(398)
					Float tmp48 = tmp47->get_yMin();		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(398)
					Float tmp49 = this->m_near;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(398)
					Float tmp50 = this->m_far;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(398)
					Float tmp51 = -(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(398)
					tmp40->SetOrthoInverse(tmp42,tmp44,tmp46,tmp48,tmp49,tmp51);
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(401)
					::haxor::math::Matrix4 tmp4 = this->m_projectionMatrix;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(401)
					Float tmp5 = ::haxor::graphics::Screen_obj::m_width;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(401)
					Float tmp6 = ::haxor::graphics::Screen_obj::m_height;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(401)
					Float tmp7 = this->m_near;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(401)
					Float tmp8 = this->m_far;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(401)
					Float tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(401)
					tmp4->SetOrtho((int)0,tmp5,(int)0,tmp6,tmp7,tmp9);
					HX_STACK_LINE(402)
					::haxor::math::Matrix4 tmp10 = this->m_projectionMatrixInverse;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(402)
					Float tmp11 = ::haxor::graphics::Screen_obj::m_width;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(402)
					Float tmp12 = ::haxor::graphics::Screen_obj::m_height;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(402)
					Float tmp13 = this->m_near;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(402)
					Float tmp14 = this->m_far;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(402)
					Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(402)
					tmp10->SetOrthoInverse((int)0,tmp11,(int)0,tmp12,tmp13,tmp15);
					HX_STACK_LINE(403)
					::haxor::math::Matrix4 tmp16 = this->m_skyboxProjection;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(403)
					Float tmp17 = ::haxor::graphics::Screen_obj::m_width;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(403)
					Float tmp18 = ::haxor::graphics::Screen_obj::m_height;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(403)
					Float tmp19 = this->m_near;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(403)
					Float tmp20 = this->m_far;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(403)
					Float tmp21 = -(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(403)
					tmp16->SetOrtho((int)0,tmp17,(int)0,tmp18,tmp19,tmp21);
					HX_STACK_LINE(404)
					::haxor::math::Matrix4 tmp22 = this->m_skyboxProjectionInverse;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(404)
					Float tmp23 = ::haxor::graphics::Screen_obj::m_width;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(404)
					Float tmp24 = ::haxor::graphics::Screen_obj::m_height;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(404)
					Float tmp25 = this->m_near;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(404)
					Float tmp26 = this->m_far;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(404)
					Float tmp27 = -(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(404)
					tmp22->SetOrthoInverse((int)0,tmp23,(int)0,tmp24,tmp25,tmp27);
				}
				;break;
			}
		}
		HX_STACK_LINE(409)
		::haxor::math::Vector4 p;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(410)
		Float iw = ((Float)0.0);		HX_STACK_VAR(iw,"iw");
		HX_STACK_LINE(411)
		int k = (int)0;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(413)
		Array< ::Dynamic > tmp2 = this->m_frustum;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(413)
		int tmp3 = (k)++;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(413)
		::haxor::math::Vector4 tmp4 = tmp2->__get(tmp3).StaticCast< ::haxor::math::Vector4 >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(413)
		p = tmp4;
		HX_STACK_LINE(413)
		p->Set(((Float)-1.0),((Float)1.0),((Float)-1.0),((Float)1.0));
		HX_STACK_LINE(413)
		{
			HX_STACK_LINE(413)
			::haxor::math::Matrix4 tmp5 = this->m_projectionMatrixInverse;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(413)
			::haxor::math::Matrix4 _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(413)
			Float tmp6 = (_this->m00 * p->x);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(413)
			Float tmp7 = (_this->m01 * p->y);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(413)
			Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(413)
			Float tmp9 = (_this->m02 * p->z);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(413)
			Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(413)
			Float tmp11 = (_this->m03 * p->w);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(413)
			Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(413)
			Float vx = tmp12;		HX_STACK_VAR(vx,"vx");
			HX_STACK_LINE(413)
			Float tmp13 = (_this->m10 * p->x);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(413)
			Float tmp14 = (_this->m11 * p->y);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(413)
			Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(413)
			Float tmp16 = (_this->m12 * p->z);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(413)
			Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(413)
			Float tmp18 = (_this->m13 * p->w);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(413)
			Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(413)
			Float vy = tmp19;		HX_STACK_VAR(vy,"vy");
			HX_STACK_LINE(413)
			Float tmp20 = (_this->m20 * p->x);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(413)
			Float tmp21 = (_this->m21 * p->y);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(413)
			Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(413)
			Float tmp23 = (_this->m22 * p->z);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(413)
			Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(413)
			Float tmp25 = (_this->m23 * p->w);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(413)
			Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(413)
			Float vz = tmp26;		HX_STACK_VAR(vz,"vz");
			HX_STACK_LINE(413)
			Float tmp27 = (_this->m30 * p->x);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(413)
			Float tmp28 = (_this->m31 * p->y);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(413)
			Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(413)
			Float tmp30 = (_this->m32 * p->z);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(413)
			Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(413)
			Float tmp32 = (_this->m33 * p->w);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(413)
			Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(413)
			Float vw = tmp33;		HX_STACK_VAR(vw,"vw");
			HX_STACK_LINE(413)
			p->x = vx;
			HX_STACK_LINE(413)
			p->y = vy;
			HX_STACK_LINE(413)
			p->z = vz;
			HX_STACK_LINE(413)
			p->w = vw;
			HX_STACK_LINE(413)
			p;
		}
		HX_STACK_LINE(413)
		bool tmp5 = (p->w <= ((Float)0.0));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(413)
		Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(413)
		if ((tmp5)){
			HX_STACK_LINE(413)
			tmp6 = ((Float)0.0);
		}
		else{
			HX_STACK_LINE(413)
			tmp6 = (Float(((Float)1.0)) / Float(p->w));
		}
		HX_STACK_LINE(413)
		iw = tmp6;
		HX_STACK_LINE(413)
		Float tmp7 = iw;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(413)
		p->Scale(tmp7);
		HX_STACK_LINE(414)
		Array< ::Dynamic > tmp8 = this->m_frustum;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(414)
		int tmp9 = (k)++;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(414)
		::haxor::math::Vector4 tmp10 = tmp8->__get(tmp9).StaticCast< ::haxor::math::Vector4 >();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(414)
		p = tmp10;
		HX_STACK_LINE(414)
		p->Set(((Float)-1.0),((Float)-1.0),((Float)-1.0),((Float)1.0));
		HX_STACK_LINE(414)
		{
			HX_STACK_LINE(414)
			::haxor::math::Matrix4 tmp11 = this->m_projectionMatrixInverse;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(414)
			::haxor::math::Matrix4 _this = tmp11;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(414)
			Float tmp12 = (_this->m00 * p->x);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(414)
			Float tmp13 = (_this->m01 * p->y);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(414)
			Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(414)
			Float tmp15 = (_this->m02 * p->z);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(414)
			Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(414)
			Float tmp17 = (_this->m03 * p->w);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(414)
			Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(414)
			Float vx = tmp18;		HX_STACK_VAR(vx,"vx");
			HX_STACK_LINE(414)
			Float tmp19 = (_this->m10 * p->x);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(414)
			Float tmp20 = (_this->m11 * p->y);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(414)
			Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(414)
			Float tmp22 = (_this->m12 * p->z);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(414)
			Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(414)
			Float tmp24 = (_this->m13 * p->w);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(414)
			Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(414)
			Float vy = tmp25;		HX_STACK_VAR(vy,"vy");
			HX_STACK_LINE(414)
			Float tmp26 = (_this->m20 * p->x);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(414)
			Float tmp27 = (_this->m21 * p->y);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(414)
			Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(414)
			Float tmp29 = (_this->m22 * p->z);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(414)
			Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(414)
			Float tmp31 = (_this->m23 * p->w);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(414)
			Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(414)
			Float vz = tmp32;		HX_STACK_VAR(vz,"vz");
			HX_STACK_LINE(414)
			Float tmp33 = (_this->m30 * p->x);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(414)
			Float tmp34 = (_this->m31 * p->y);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(414)
			Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(414)
			Float tmp36 = (_this->m32 * p->z);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(414)
			Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(414)
			Float tmp38 = (_this->m33 * p->w);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(414)
			Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(414)
			Float vw = tmp39;		HX_STACK_VAR(vw,"vw");
			HX_STACK_LINE(414)
			p->x = vx;
			HX_STACK_LINE(414)
			p->y = vy;
			HX_STACK_LINE(414)
			p->z = vz;
			HX_STACK_LINE(414)
			p->w = vw;
			HX_STACK_LINE(414)
			p;
		}
		HX_STACK_LINE(414)
		bool tmp11 = (p->w <= ((Float)0.0));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(414)
		Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(414)
		if ((tmp11)){
			HX_STACK_LINE(414)
			tmp12 = ((Float)0.0);
		}
		else{
			HX_STACK_LINE(414)
			tmp12 = (Float(((Float)1.0)) / Float(p->w));
		}
		HX_STACK_LINE(414)
		iw = tmp12;
		HX_STACK_LINE(414)
		Float tmp13 = iw;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(414)
		p->Scale(tmp13);
		HX_STACK_LINE(415)
		Array< ::Dynamic > tmp14 = this->m_frustum;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(415)
		int tmp15 = (k)++;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(415)
		::haxor::math::Vector4 tmp16 = tmp14->__get(tmp15).StaticCast< ::haxor::math::Vector4 >();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(415)
		p = tmp16;
		HX_STACK_LINE(415)
		p->Set(((Float)1.0),((Float)-1.0),((Float)-1.0),((Float)1.0));
		HX_STACK_LINE(415)
		{
			HX_STACK_LINE(415)
			::haxor::math::Matrix4 tmp17 = this->m_projectionMatrixInverse;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(415)
			::haxor::math::Matrix4 _this = tmp17;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(415)
			Float tmp18 = (_this->m00 * p->x);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(415)
			Float tmp19 = (_this->m01 * p->y);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(415)
			Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(415)
			Float tmp21 = (_this->m02 * p->z);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(415)
			Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(415)
			Float tmp23 = (_this->m03 * p->w);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(415)
			Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(415)
			Float vx = tmp24;		HX_STACK_VAR(vx,"vx");
			HX_STACK_LINE(415)
			Float tmp25 = (_this->m10 * p->x);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(415)
			Float tmp26 = (_this->m11 * p->y);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(415)
			Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(415)
			Float tmp28 = (_this->m12 * p->z);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(415)
			Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(415)
			Float tmp30 = (_this->m13 * p->w);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(415)
			Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(415)
			Float vy = tmp31;		HX_STACK_VAR(vy,"vy");
			HX_STACK_LINE(415)
			Float tmp32 = (_this->m20 * p->x);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(415)
			Float tmp33 = (_this->m21 * p->y);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(415)
			Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(415)
			Float tmp35 = (_this->m22 * p->z);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(415)
			Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(415)
			Float tmp37 = (_this->m23 * p->w);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(415)
			Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(415)
			Float vz = tmp38;		HX_STACK_VAR(vz,"vz");
			HX_STACK_LINE(415)
			Float tmp39 = (_this->m30 * p->x);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(415)
			Float tmp40 = (_this->m31 * p->y);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(415)
			Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(415)
			Float tmp42 = (_this->m32 * p->z);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(415)
			Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(415)
			Float tmp44 = (_this->m33 * p->w);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(415)
			Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(415)
			Float vw = tmp45;		HX_STACK_VAR(vw,"vw");
			HX_STACK_LINE(415)
			p->x = vx;
			HX_STACK_LINE(415)
			p->y = vy;
			HX_STACK_LINE(415)
			p->z = vz;
			HX_STACK_LINE(415)
			p->w = vw;
			HX_STACK_LINE(415)
			p;
		}
		HX_STACK_LINE(415)
		bool tmp17 = (p->w <= ((Float)0.0));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(415)
		Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(415)
		if ((tmp17)){
			HX_STACK_LINE(415)
			tmp18 = ((Float)0.0);
		}
		else{
			HX_STACK_LINE(415)
			tmp18 = (Float(((Float)1.0)) / Float(p->w));
		}
		HX_STACK_LINE(415)
		iw = tmp18;
		HX_STACK_LINE(415)
		Float tmp19 = iw;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(415)
		p->Scale(tmp19);
		HX_STACK_LINE(416)
		Array< ::Dynamic > tmp20 = this->m_frustum;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(416)
		int tmp21 = (k)++;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(416)
		::haxor::math::Vector4 tmp22 = tmp20->__get(tmp21).StaticCast< ::haxor::math::Vector4 >();		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(416)
		p = tmp22;
		HX_STACK_LINE(416)
		p->Set(((Float)1.0),((Float)1.0),((Float)-1.0),((Float)1.0));
		HX_STACK_LINE(416)
		{
			HX_STACK_LINE(416)
			::haxor::math::Matrix4 tmp23 = this->m_projectionMatrixInverse;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(416)
			::haxor::math::Matrix4 _this = tmp23;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(416)
			Float tmp24 = (_this->m00 * p->x);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(416)
			Float tmp25 = (_this->m01 * p->y);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(416)
			Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(416)
			Float tmp27 = (_this->m02 * p->z);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(416)
			Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(416)
			Float tmp29 = (_this->m03 * p->w);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(416)
			Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(416)
			Float vx = tmp30;		HX_STACK_VAR(vx,"vx");
			HX_STACK_LINE(416)
			Float tmp31 = (_this->m10 * p->x);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(416)
			Float tmp32 = (_this->m11 * p->y);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(416)
			Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(416)
			Float tmp34 = (_this->m12 * p->z);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(416)
			Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(416)
			Float tmp36 = (_this->m13 * p->w);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(416)
			Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(416)
			Float vy = tmp37;		HX_STACK_VAR(vy,"vy");
			HX_STACK_LINE(416)
			Float tmp38 = (_this->m20 * p->x);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(416)
			Float tmp39 = (_this->m21 * p->y);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(416)
			Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(416)
			Float tmp41 = (_this->m22 * p->z);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(416)
			Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(416)
			Float tmp43 = (_this->m23 * p->w);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(416)
			Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(416)
			Float vz = tmp44;		HX_STACK_VAR(vz,"vz");
			HX_STACK_LINE(416)
			Float tmp45 = (_this->m30 * p->x);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(416)
			Float tmp46 = (_this->m31 * p->y);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(416)
			Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(416)
			Float tmp48 = (_this->m32 * p->z);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(416)
			Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(416)
			Float tmp50 = (_this->m33 * p->w);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(416)
			Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(416)
			Float vw = tmp51;		HX_STACK_VAR(vw,"vw");
			HX_STACK_LINE(416)
			p->x = vx;
			HX_STACK_LINE(416)
			p->y = vy;
			HX_STACK_LINE(416)
			p->z = vz;
			HX_STACK_LINE(416)
			p->w = vw;
			HX_STACK_LINE(416)
			p;
		}
		HX_STACK_LINE(416)
		bool tmp23 = (p->w <= ((Float)0.0));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(416)
		Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(416)
		if ((tmp23)){
			HX_STACK_LINE(416)
			tmp24 = ((Float)0.0);
		}
		else{
			HX_STACK_LINE(416)
			tmp24 = (Float(((Float)1.0)) / Float(p->w));
		}
		HX_STACK_LINE(416)
		iw = tmp24;
		HX_STACK_LINE(416)
		Float tmp25 = iw;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(416)
		p->Scale(tmp25);
		HX_STACK_LINE(419)
		Array< ::Dynamic > tmp26 = this->m_frustum;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(419)
		int tmp27 = (k)++;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(419)
		::haxor::math::Vector4 tmp28 = tmp26->__get(tmp27).StaticCast< ::haxor::math::Vector4 >();		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(419)
		p = tmp28;
		HX_STACK_LINE(419)
		p->Set(((Float)-1.0),((Float)1.0),((Float)1.0),((Float)1.0));
		HX_STACK_LINE(419)
		{
			HX_STACK_LINE(419)
			::haxor::math::Matrix4 tmp29 = this->m_projectionMatrixInverse;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(419)
			::haxor::math::Matrix4 _this = tmp29;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(419)
			Float tmp30 = (_this->m00 * p->x);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(419)
			Float tmp31 = (_this->m01 * p->y);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(419)
			Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(419)
			Float tmp33 = (_this->m02 * p->z);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(419)
			Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(419)
			Float tmp35 = (_this->m03 * p->w);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(419)
			Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(419)
			Float vx = tmp36;		HX_STACK_VAR(vx,"vx");
			HX_STACK_LINE(419)
			Float tmp37 = (_this->m10 * p->x);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(419)
			Float tmp38 = (_this->m11 * p->y);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(419)
			Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(419)
			Float tmp40 = (_this->m12 * p->z);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(419)
			Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(419)
			Float tmp42 = (_this->m13 * p->w);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(419)
			Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(419)
			Float vy = tmp43;		HX_STACK_VAR(vy,"vy");
			HX_STACK_LINE(419)
			Float tmp44 = (_this->m20 * p->x);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(419)
			Float tmp45 = (_this->m21 * p->y);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(419)
			Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(419)
			Float tmp47 = (_this->m22 * p->z);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(419)
			Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(419)
			Float tmp49 = (_this->m23 * p->w);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(419)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(419)
			Float vz = tmp50;		HX_STACK_VAR(vz,"vz");
			HX_STACK_LINE(419)
			Float tmp51 = (_this->m30 * p->x);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(419)
			Float tmp52 = (_this->m31 * p->y);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(419)
			Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(419)
			Float tmp54 = (_this->m32 * p->z);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(419)
			Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(419)
			Float tmp56 = (_this->m33 * p->w);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(419)
			Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(419)
			Float vw = tmp57;		HX_STACK_VAR(vw,"vw");
			HX_STACK_LINE(419)
			p->x = vx;
			HX_STACK_LINE(419)
			p->y = vy;
			HX_STACK_LINE(419)
			p->z = vz;
			HX_STACK_LINE(419)
			p->w = vw;
			HX_STACK_LINE(419)
			p;
		}
		HX_STACK_LINE(419)
		bool tmp29 = (p->w <= ((Float)0.0));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(419)
		Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(419)
		if ((tmp29)){
			HX_STACK_LINE(419)
			tmp30 = ((Float)0.0);
		}
		else{
			HX_STACK_LINE(419)
			tmp30 = (Float(((Float)1.0)) / Float(p->w));
		}
		HX_STACK_LINE(419)
		iw = tmp30;
		HX_STACK_LINE(419)
		Float tmp31 = iw;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(419)
		p->Scale(tmp31);
		HX_STACK_LINE(420)
		Array< ::Dynamic > tmp32 = this->m_frustum;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(420)
		int tmp33 = (k)++;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(420)
		::haxor::math::Vector4 tmp34 = tmp32->__get(tmp33).StaticCast< ::haxor::math::Vector4 >();		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(420)
		p = tmp34;
		HX_STACK_LINE(420)
		p->Set(((Float)-1.0),((Float)-1.0),((Float)1.0),((Float)1.0));
		HX_STACK_LINE(420)
		{
			HX_STACK_LINE(420)
			::haxor::math::Matrix4 tmp35 = this->m_projectionMatrixInverse;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(420)
			::haxor::math::Matrix4 _this = tmp35;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(420)
			Float tmp36 = (_this->m00 * p->x);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(420)
			Float tmp37 = (_this->m01 * p->y);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(420)
			Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(420)
			Float tmp39 = (_this->m02 * p->z);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(420)
			Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(420)
			Float tmp41 = (_this->m03 * p->w);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(420)
			Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(420)
			Float vx = tmp42;		HX_STACK_VAR(vx,"vx");
			HX_STACK_LINE(420)
			Float tmp43 = (_this->m10 * p->x);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(420)
			Float tmp44 = (_this->m11 * p->y);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(420)
			Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(420)
			Float tmp46 = (_this->m12 * p->z);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(420)
			Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(420)
			Float tmp48 = (_this->m13 * p->w);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(420)
			Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(420)
			Float vy = tmp49;		HX_STACK_VAR(vy,"vy");
			HX_STACK_LINE(420)
			Float tmp50 = (_this->m20 * p->x);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(420)
			Float tmp51 = (_this->m21 * p->y);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(420)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(420)
			Float tmp53 = (_this->m22 * p->z);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(420)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(420)
			Float tmp55 = (_this->m23 * p->w);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(420)
			Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(420)
			Float vz = tmp56;		HX_STACK_VAR(vz,"vz");
			HX_STACK_LINE(420)
			Float tmp57 = (_this->m30 * p->x);		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(420)
			Float tmp58 = (_this->m31 * p->y);		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(420)
			Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(420)
			Float tmp60 = (_this->m32 * p->z);		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(420)
			Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(420)
			Float tmp62 = (_this->m33 * p->w);		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(420)
			Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(420)
			Float vw = tmp63;		HX_STACK_VAR(vw,"vw");
			HX_STACK_LINE(420)
			p->x = vx;
			HX_STACK_LINE(420)
			p->y = vy;
			HX_STACK_LINE(420)
			p->z = vz;
			HX_STACK_LINE(420)
			p->w = vw;
			HX_STACK_LINE(420)
			p;
		}
		HX_STACK_LINE(420)
		bool tmp35 = (p->w <= ((Float)0.0));		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(420)
		Float tmp36;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(420)
		if ((tmp35)){
			HX_STACK_LINE(420)
			tmp36 = ((Float)0.0);
		}
		else{
			HX_STACK_LINE(420)
			tmp36 = (Float(((Float)1.0)) / Float(p->w));
		}
		HX_STACK_LINE(420)
		iw = tmp36;
		HX_STACK_LINE(420)
		Float tmp37 = iw;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(420)
		p->Scale(tmp37);
		HX_STACK_LINE(421)
		Array< ::Dynamic > tmp38 = this->m_frustum;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(421)
		int tmp39 = (k)++;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(421)
		::haxor::math::Vector4 tmp40 = tmp38->__get(tmp39).StaticCast< ::haxor::math::Vector4 >();		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(421)
		p = tmp40;
		HX_STACK_LINE(421)
		p->Set(((Float)1.0),((Float)-1.0),((Float)1.0),((Float)1.0));
		HX_STACK_LINE(421)
		{
			HX_STACK_LINE(421)
			::haxor::math::Matrix4 tmp41 = this->m_projectionMatrixInverse;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(421)
			::haxor::math::Matrix4 _this = tmp41;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(421)
			Float tmp42 = (_this->m00 * p->x);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(421)
			Float tmp43 = (_this->m01 * p->y);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(421)
			Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(421)
			Float tmp45 = (_this->m02 * p->z);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(421)
			Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(421)
			Float tmp47 = (_this->m03 * p->w);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(421)
			Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(421)
			Float vx = tmp48;		HX_STACK_VAR(vx,"vx");
			HX_STACK_LINE(421)
			Float tmp49 = (_this->m10 * p->x);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(421)
			Float tmp50 = (_this->m11 * p->y);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(421)
			Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(421)
			Float tmp52 = (_this->m12 * p->z);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(421)
			Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(421)
			Float tmp54 = (_this->m13 * p->w);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(421)
			Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(421)
			Float vy = tmp55;		HX_STACK_VAR(vy,"vy");
			HX_STACK_LINE(421)
			Float tmp56 = (_this->m20 * p->x);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(421)
			Float tmp57 = (_this->m21 * p->y);		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(421)
			Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(421)
			Float tmp59 = (_this->m22 * p->z);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(421)
			Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(421)
			Float tmp61 = (_this->m23 * p->w);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(421)
			Float tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(421)
			Float vz = tmp62;		HX_STACK_VAR(vz,"vz");
			HX_STACK_LINE(421)
			Float tmp63 = (_this->m30 * p->x);		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(421)
			Float tmp64 = (_this->m31 * p->y);		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(421)
			Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(421)
			Float tmp66 = (_this->m32 * p->z);		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(421)
			Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(421)
			Float tmp68 = (_this->m33 * p->w);		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(421)
			Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(421)
			Float vw = tmp69;		HX_STACK_VAR(vw,"vw");
			HX_STACK_LINE(421)
			p->x = vx;
			HX_STACK_LINE(421)
			p->y = vy;
			HX_STACK_LINE(421)
			p->z = vz;
			HX_STACK_LINE(421)
			p->w = vw;
			HX_STACK_LINE(421)
			p;
		}
		HX_STACK_LINE(421)
		bool tmp41 = (p->w <= ((Float)0.0));		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(421)
		Float tmp42;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(421)
		if ((tmp41)){
			HX_STACK_LINE(421)
			tmp42 = ((Float)0.0);
		}
		else{
			HX_STACK_LINE(421)
			tmp42 = (Float(((Float)1.0)) / Float(p->w));
		}
		HX_STACK_LINE(421)
		iw = tmp42;
		HX_STACK_LINE(421)
		Float tmp43 = iw;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(421)
		p->Scale(tmp43);
		HX_STACK_LINE(422)
		Array< ::Dynamic > tmp44 = this->m_frustum;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(422)
		int tmp45 = (k)++;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(422)
		::haxor::math::Vector4 tmp46 = tmp44->__get(tmp45).StaticCast< ::haxor::math::Vector4 >();		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(422)
		p = tmp46;
		HX_STACK_LINE(422)
		p->Set(((Float)1.0),((Float)1.0),((Float)1.0),((Float)1.0));
		HX_STACK_LINE(422)
		{
			HX_STACK_LINE(422)
			::haxor::math::Matrix4 tmp47 = this->m_projectionMatrixInverse;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(422)
			::haxor::math::Matrix4 _this = tmp47;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(422)
			Float tmp48 = (_this->m00 * p->x);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(422)
			Float tmp49 = (_this->m01 * p->y);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(422)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(422)
			Float tmp51 = (_this->m02 * p->z);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(422)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(422)
			Float tmp53 = (_this->m03 * p->w);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(422)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(422)
			Float vx = tmp54;		HX_STACK_VAR(vx,"vx");
			HX_STACK_LINE(422)
			Float tmp55 = (_this->m10 * p->x);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(422)
			Float tmp56 = (_this->m11 * p->y);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(422)
			Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(422)
			Float tmp58 = (_this->m12 * p->z);		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(422)
			Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(422)
			Float tmp60 = (_this->m13 * p->w);		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(422)
			Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(422)
			Float vy = tmp61;		HX_STACK_VAR(vy,"vy");
			HX_STACK_LINE(422)
			Float tmp62 = (_this->m20 * p->x);		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(422)
			Float tmp63 = (_this->m21 * p->y);		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(422)
			Float tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(422)
			Float tmp65 = (_this->m22 * p->z);		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(422)
			Float tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(422)
			Float tmp67 = (_this->m23 * p->w);		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(422)
			Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(422)
			Float vz = tmp68;		HX_STACK_VAR(vz,"vz");
			HX_STACK_LINE(422)
			Float tmp69 = (_this->m30 * p->x);		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(422)
			Float tmp70 = (_this->m31 * p->y);		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(422)
			Float tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(422)
			Float tmp72 = (_this->m32 * p->z);		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(422)
			Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(422)
			Float tmp74 = (_this->m33 * p->w);		HX_STACK_VAR(tmp74,"tmp74");
			HX_STACK_LINE(422)
			Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
			HX_STACK_LINE(422)
			Float vw = tmp75;		HX_STACK_VAR(vw,"vw");
			HX_STACK_LINE(422)
			p->x = vx;
			HX_STACK_LINE(422)
			p->y = vy;
			HX_STACK_LINE(422)
			p->z = vz;
			HX_STACK_LINE(422)
			p->w = vw;
			HX_STACK_LINE(422)
			p;
		}
		HX_STACK_LINE(422)
		bool tmp47 = (p->w <= ((Float)0.0));		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(422)
		Float tmp48;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(422)
		if ((tmp47)){
			HX_STACK_LINE(422)
			tmp48 = ((Float)0.0);
		}
		else{
			HX_STACK_LINE(422)
			tmp48 = (Float(((Float)1.0)) / Float(p->w));
		}
		HX_STACK_LINE(422)
		iw = tmp48;
		HX_STACK_LINE(422)
		Float tmp49 = iw;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(422)
		p->Scale(tmp49);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,UpdateProjection,(void))

Void Camera_obj::OnTransformUpdate( bool p_hierarchy){
{
		HX_STACK_FRAME("haxor.component.Camera","OnTransformUpdate",0xef4a94aa,"haxor.component.Camera.OnTransformUpdate","haxor/component/Camera.hx",432,0xf5fa0e7a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_hierarchy,"p_hierarchy")
		HX_STACK_LINE(432)
		this->m_view_uniform_dirty = true;
	}
return null();
}


Void Camera_obj::OnDestroy( ){
{
		HX_STACK_FRAME("haxor.component.Camera","OnDestroy",0xf559240f,"haxor.component.Camera.OnDestroy","haxor/component/Camera.hx",439,0xf5fa0e7a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(440)
		::haxor::context::CameraContext tmp = ::haxor::context::EngineContext_obj::camera;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(440)
		tmp->Destroy(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


Void Camera_obj::OnResize( Float p_w,Float p_h){
{
		HX_STACK_FRAME("haxor.component.Camera","OnResize",0x0e029c7f,"haxor.component.Camera.OnResize","haxor/component/Camera.hx",449,0xf5fa0e7a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p_w,"p_w")
		HX_STACK_ARG(p_h,"p_h")
		HX_STACK_LINE(450)
		int tmp = this->m_mode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(450)
		int tmp1 = ::haxor::core::CameraMode_obj::UI;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(450)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(450)
		if ((tmp2)){
			HX_STACK_LINE(450)
			this->UpdateProjection();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Camera_obj,OnResize,(void))

bool Camera_obj::SAPCulling;

Array< ::Dynamic > Camera_obj::get_list( ){
	HX_STACK_FRAME("haxor.component.Camera","get_list",0x139667d3,"haxor.component.Camera.get_list","haxor/component/Camera.hx",41,0xf5fa0e7a)
	HX_STACK_LINE(41)
	::haxor::context::CameraContext tmp = ::haxor::context::EngineContext_obj::camera;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	Array< ::Dynamic > tmp1 = tmp->list->copy();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(41)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_list,return )

::haxor::component::Camera Camera_obj::get_current( ){
	HX_STACK_FRAME("haxor.component.Camera","get_current",0x303727e4,"haxor.component.Camera.get_current","haxor/component/Camera.hx",47,0xf5fa0e7a)
	HX_STACK_LINE(47)
	::haxor::component::Camera tmp = ::haxor::component::Camera_obj::m_current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_current,return )

::haxor::component::Camera Camera_obj::m_current;

::haxor::component::Camera Camera_obj::get_main( ){
	HX_STACK_FRAME("haxor.component.Camera","get_main",0x143983ae,"haxor.component.Camera.get_main","haxor/component/Camera.hx",54,0xf5fa0e7a)
	HX_STACK_LINE(54)
	::haxor::component::Camera tmp = ::haxor::component::Camera_obj::m_main;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_main,return )

::haxor::component::Camera Camera_obj::set_main( ::haxor::component::Camera v){
	HX_STACK_FRAME("haxor.component.Camera","set_main",0xc296dd22,"haxor.component.Camera.set_main","haxor/component/Camera.hx",55,0xf5fa0e7a)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(55)
	::haxor::component::Camera tmp = ::haxor::component::Camera_obj::m_main = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_main,return )

::haxor::component::Camera Camera_obj::m_main;


Camera_obj::Camera_obj()
{
}

void Camera_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Camera);
	HX_MARK_MEMBER_NAME(__fcid,"__fcid");
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(skybox,"skybox");
	HX_MARK_MEMBER_NAME(clear,"clear");
	HX_MARK_MEMBER_NAME(m_mask,"m_mask");
	HX_MARK_MEMBER_NAME(m_layers,"m_layers");
	HX_MARK_MEMBER_NAME(m_fov,"m_fov");
	HX_MARK_MEMBER_NAME(m_near,"m_near");
	HX_MARK_MEMBER_NAME(m_far,"m_far");
	HX_MARK_MEMBER_NAME(m_order,"m_order");
	HX_MARK_MEMBER_NAME(m_pixelViewport,"m_pixelViewport");
	HX_MARK_MEMBER_NAME(m_aspect,"m_aspect");
	HX_MARK_MEMBER_NAME(m_viewport,"m_viewport");
	HX_MARK_MEMBER_NAME(CameraToWorld,"CameraToWorld");
	HX_MARK_MEMBER_NAME(WorldToCamera,"WorldToCamera");
	HX_MARK_MEMBER_NAME(ProjectionMatrix,"ProjectionMatrix");
	HX_MARK_MEMBER_NAME(m_projectionMatrix,"m_projectionMatrix");
	HX_MARK_MEMBER_NAME(m_skyboxProjection,"m_skyboxProjection");
	HX_MARK_MEMBER_NAME(ProjectionMatrixInverse,"ProjectionMatrixInverse");
	HX_MARK_MEMBER_NAME(m_projectionMatrixInverse,"m_projectionMatrixInverse");
	HX_MARK_MEMBER_NAME(m_skyboxProjectionInverse,"m_skyboxProjectionInverse");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(m_target,"m_target");
	HX_MARK_MEMBER_NAME(m_quality,"m_quality");
	HX_MARK_MEMBER_NAME(m_captureDepth,"m_captureDepth");
	HX_MARK_MEMBER_NAME(m_filters,"m_filters");
	HX_MARK_MEMBER_NAME(m_frustum,"m_frustum");
	HX_MARK_MEMBER_NAME(m_mode,"m_mode");
	HX_MARK_MEMBER_NAME(m_screen,"m_screen");
	HX_MARK_MEMBER_NAME(m_projection_dirty,"m_projection_dirty");
	HX_MARK_MEMBER_NAME(m_view_uniform_dirty,"m_view_uniform_dirty");
	HX_MARK_MEMBER_NAME(m_proj_uniform_dirty,"m_proj_uniform_dirty");
	HX_MARK_MEMBER_NAME(m_aabb,"m_aabb");
	::haxor::component::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Camera_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__fcid,"__fcid");
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(skybox,"skybox");
	HX_VISIT_MEMBER_NAME(clear,"clear");
	HX_VISIT_MEMBER_NAME(m_mask,"m_mask");
	HX_VISIT_MEMBER_NAME(m_layers,"m_layers");
	HX_VISIT_MEMBER_NAME(m_fov,"m_fov");
	HX_VISIT_MEMBER_NAME(m_near,"m_near");
	HX_VISIT_MEMBER_NAME(m_far,"m_far");
	HX_VISIT_MEMBER_NAME(m_order,"m_order");
	HX_VISIT_MEMBER_NAME(m_pixelViewport,"m_pixelViewport");
	HX_VISIT_MEMBER_NAME(m_aspect,"m_aspect");
	HX_VISIT_MEMBER_NAME(m_viewport,"m_viewport");
	HX_VISIT_MEMBER_NAME(CameraToWorld,"CameraToWorld");
	HX_VISIT_MEMBER_NAME(WorldToCamera,"WorldToCamera");
	HX_VISIT_MEMBER_NAME(ProjectionMatrix,"ProjectionMatrix");
	HX_VISIT_MEMBER_NAME(m_projectionMatrix,"m_projectionMatrix");
	HX_VISIT_MEMBER_NAME(m_skyboxProjection,"m_skyboxProjection");
	HX_VISIT_MEMBER_NAME(ProjectionMatrixInverse,"ProjectionMatrixInverse");
	HX_VISIT_MEMBER_NAME(m_projectionMatrixInverse,"m_projectionMatrixInverse");
	HX_VISIT_MEMBER_NAME(m_skyboxProjectionInverse,"m_skyboxProjectionInverse");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(m_target,"m_target");
	HX_VISIT_MEMBER_NAME(m_quality,"m_quality");
	HX_VISIT_MEMBER_NAME(m_captureDepth,"m_captureDepth");
	HX_VISIT_MEMBER_NAME(m_filters,"m_filters");
	HX_VISIT_MEMBER_NAME(m_frustum,"m_frustum");
	HX_VISIT_MEMBER_NAME(m_mode,"m_mode");
	HX_VISIT_MEMBER_NAME(m_screen,"m_screen");
	HX_VISIT_MEMBER_NAME(m_projection_dirty,"m_projection_dirty");
	HX_VISIT_MEMBER_NAME(m_view_uniform_dirty,"m_view_uniform_dirty");
	HX_VISIT_MEMBER_NAME(m_proj_uniform_dirty,"m_proj_uniform_dirty");
	HX_VISIT_MEMBER_NAME(m_aabb,"m_aabb");
	::haxor::component::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Camera_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"fov") ) { if (inCallProp == hx::paccAlways) return get_fov(); }
		if (HX_FIELD_EQ(inName,"far") ) { if (inCallProp == hx::paccAlways) return get_far(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mask") ) { if (inCallProp == hx::paccAlways) return get_mask(); }
		if (HX_FIELD_EQ(inName,"near") ) { if (inCallProp == hx::paccAlways) return get_near(); }
		if (HX_FIELD_EQ(inName,"mode") ) { if (inCallProp == hx::paccAlways) return get_mode(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear; }
		if (HX_FIELD_EQ(inName,"m_fov") ) { return m_fov; }
		if (HX_FIELD_EQ(inName,"m_far") ) { return m_far; }
		if (HX_FIELD_EQ(inName,"order") ) { if (inCallProp == hx::paccAlways) return get_order(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__fcid") ) { return __fcid; }
		if (HX_FIELD_EQ(inName,"skybox") ) { return skybox; }
		if (HX_FIELD_EQ(inName,"m_mask") ) { return m_mask; }
		if (HX_FIELD_EQ(inName,"m_near") ) { return m_near; }
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		if (HX_FIELD_EQ(inName,"m_mode") ) { return m_mode; }
		if (HX_FIELD_EQ(inName,"screen") ) { if (inCallProp == hx::paccAlways) return get_screen(); }
		if (HX_FIELD_EQ(inName,"m_aabb") ) { return m_aabb; }
		if (HX_FIELD_EQ(inName,"LookAt") ) { return LookAt_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_fov") ) { return get_fov_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fov") ) { return set_fov_dyn(); }
		if (HX_FIELD_EQ(inName,"get_far") ) { return get_far_dyn(); }
		if (HX_FIELD_EQ(inName,"set_far") ) { return set_far_dyn(); }
		if (HX_FIELD_EQ(inName,"m_order") ) { return m_order; }
		if (HX_FIELD_EQ(inName,"quality") ) { if (inCallProp == hx::paccAlways) return get_quality(); }
		if (HX_FIELD_EQ(inName,"filters") ) { if (inCallProp == hx::paccAlways) return get_filters(); }
		if (HX_FIELD_EQ(inName,"frustum") ) { if (inCallProp == hx::paccAlways) return get_frustum(); }
		if (HX_FIELD_EQ(inName,"OnBuild") ) { return OnBuild_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_mask") ) { return get_mask_dyn(); }
		if (HX_FIELD_EQ(inName,"set_mask") ) { return set_mask_dyn(); }
		if (HX_FIELD_EQ(inName,"m_layers") ) { return m_layers; }
		if (HX_FIELD_EQ(inName,"get_near") ) { return get_near_dyn(); }
		if (HX_FIELD_EQ(inName,"set_near") ) { return set_near_dyn(); }
		if (HX_FIELD_EQ(inName,"viewport") ) { if (inCallProp == hx::paccAlways) return get_viewport(); }
		if (HX_FIELD_EQ(inName,"m_aspect") ) { return m_aspect; }
		if (HX_FIELD_EQ(inName,"m_target") ) { return m_target; }
		if (HX_FIELD_EQ(inName,"get_mode") ) { return get_mode_dyn(); }
		if (HX_FIELD_EQ(inName,"set_mode") ) { return set_mode_dyn(); }
		if (HX_FIELD_EQ(inName,"m_screen") ) { return m_screen; }
		if (HX_FIELD_EQ(inName,"IsCulled") ) { return IsCulled_dyn(); }
		if (HX_FIELD_EQ(inName,"OnResize") ) { return OnResize_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_order") ) { return get_order_dyn(); }
		if (HX_FIELD_EQ(inName,"set_order") ) { return set_order_dyn(); }
		if (HX_FIELD_EQ(inName,"m_quality") ) { return m_quality; }
		if (HX_FIELD_EQ(inName,"m_filters") ) { return m_filters; }
		if (HX_FIELD_EQ(inName,"m_frustum") ) { return m_frustum; }
		if (HX_FIELD_EQ(inName,"OnDestroy") ) { return OnDestroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return background; }
		if (HX_FIELD_EQ(inName,"m_viewport") ) { return m_viewport; }
		if (HX_FIELD_EQ(inName,"get_target") ) { return get_target_dyn(); }
		if (HX_FIELD_EQ(inName,"set_target") ) { return set_target_dyn(); }
		if (HX_FIELD_EQ(inName,"get_screen") ) { return get_screen_dyn(); }
		if (HX_FIELD_EQ(inName,"set_screen") ) { return set_screen_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_quality") ) { return get_quality_dyn(); }
		if (HX_FIELD_EQ(inName,"set_quality") ) { return set_quality_dyn(); }
		if (HX_FIELD_EQ(inName,"get_filters") ) { return get_filters_dyn(); }
		if (HX_FIELD_EQ(inName,"set_filters") ) { return set_filters_dyn(); }
		if (HX_FIELD_EQ(inName,"get_frustum") ) { return get_frustum_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_viewport") ) { return get_viewport_dyn(); }
		if (HX_FIELD_EQ(inName,"set_viewport") ) { return set_viewport_dyn(); }
		if (HX_FIELD_EQ(inName,"captureDepth") ) { if (inCallProp == hx::paccAlways) return get_captureDepth(); }
		if (HX_FIELD_EQ(inName,"WorldToDepth") ) { return WorldToDepth_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pixelViewport") ) { if (inCallProp == hx::paccAlways) return get_pixelViewport(); }
		if (HX_FIELD_EQ(inName,"CameraToWorld") ) { return inCallProp == hx::paccAlways ? get_CameraToWorld() : CameraToWorld; }
		if (HX_FIELD_EQ(inName,"WorldToCamera") ) { return inCallProp == hx::paccAlways ? get_WorldToCamera() : WorldToCamera; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"m_captureDepth") ) { return m_captureDepth; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"m_pixelViewport") ) { return m_pixelViewport; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"ProjectionMatrix") ) { return inCallProp == hx::paccAlways ? get_ProjectionMatrix() : ProjectionMatrix; }
		if (HX_FIELD_EQ(inName,"get_captureDepth") ) { return get_captureDepth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_captureDepth") ) { return set_captureDepth_dyn(); }
		if (HX_FIELD_EQ(inName,"UpdateProjection") ) { return UpdateProjection_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_pixelViewport") ) { return get_pixelViewport_dyn(); }
		if (HX_FIELD_EQ(inName,"get_CameraToWorld") ) { return get_CameraToWorld_dyn(); }
		if (HX_FIELD_EQ(inName,"get_WorldToCamera") ) { return get_WorldToCamera_dyn(); }
		if (HX_FIELD_EQ(inName,"WorldToProjection") ) { return WorldToProjection_dyn(); }
		if (HX_FIELD_EQ(inName,"OnTransformUpdate") ) { return OnTransformUpdate_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"m_projectionMatrix") ) { return m_projectionMatrix; }
		if (HX_FIELD_EQ(inName,"m_skyboxProjection") ) { return m_skyboxProjection; }
		if (HX_FIELD_EQ(inName,"m_projection_dirty") ) { return m_projection_dirty; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_ProjectionMatrix") ) { return get_ProjectionMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"m_view_uniform_dirty") ) { return m_view_uniform_dirty; }
		if (HX_FIELD_EQ(inName,"m_proj_uniform_dirty") ) { return m_proj_uniform_dirty; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"ProjectionMatrixInverse") ) { return inCallProp == hx::paccAlways ? get_ProjectionMatrixInverse() : ProjectionMatrixInverse; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"m_projectionMatrixInverse") ) { return m_projectionMatrixInverse; }
		if (HX_FIELD_EQ(inName,"m_skyboxProjectionInverse") ) { return m_skyboxProjectionInverse; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"get_ProjectionMatrixInverse") ) { return get_ProjectionMatrixInverse_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Camera_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { if (inCallProp == hx::paccAlways) { outValue = get_list(); return true; } }
		if (HX_FIELD_EQ(inName,"main") ) { if (inCallProp == hx::paccAlways) { outValue = get_main(); return true; } }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_main") ) { outValue = m_main; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { if (inCallProp == hx::paccAlways) { outValue = get_current(); return true; } }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_list") ) { outValue = get_list_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_main") ) { outValue = get_main_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_main") ) { outValue = set_main_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"m_current") ) { outValue = m_current; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"SAPCulling") ) { outValue = SAPCulling; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_current") ) { outValue = get_current_dyn(); return true;  }
	}
	return false;
}

Dynamic Camera_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"fov") ) { if (inCallProp == hx::paccAlways) return set_fov(inValue); }
		if (HX_FIELD_EQ(inName,"far") ) { if (inCallProp == hx::paccAlways) return set_far(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mask") ) { if (inCallProp == hx::paccAlways) return set_mask(inValue); }
		if (HX_FIELD_EQ(inName,"near") ) { if (inCallProp == hx::paccAlways) return set_near(inValue); }
		if (HX_FIELD_EQ(inName,"mode") ) { if (inCallProp == hx::paccAlways) return set_mode(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { clear=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_fov") ) { m_fov=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_far") ) { m_far=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"order") ) { if (inCallProp == hx::paccAlways) return set_order(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__fcid") ) { __fcid=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skybox") ) { skybox=inValue.Cast< ::haxor::graphics::texture::TextureCube >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_mask") ) { m_mask=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_near") ) { m_near=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< ::haxor::graphics::texture::RenderTexture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_mode") ) { m_mode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screen") ) { if (inCallProp == hx::paccAlways) return set_screen(inValue); }
		if (HX_FIELD_EQ(inName,"m_aabb") ) { m_aabb=inValue.Cast< ::haxor::math::AABB3 >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_order") ) { m_order=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"quality") ) { if (inCallProp == hx::paccAlways) return set_quality(inValue); }
		if (HX_FIELD_EQ(inName,"filters") ) { if (inCallProp == hx::paccAlways) return set_filters(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_layers") ) { m_layers=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"viewport") ) { if (inCallProp == hx::paccAlways) return set_viewport(inValue); }
		if (HX_FIELD_EQ(inName,"m_aspect") ) { m_aspect=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_target") ) { m_target=inValue.Cast< ::haxor::graphics::texture::RenderTexture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_screen") ) { m_screen=inValue.Cast< ::haxor::math::AABB2 >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"m_quality") ) { m_quality=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_filters") ) { m_filters=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_frustum") ) { m_frustum=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast< ::haxor::math::Color >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_viewport") ) { m_viewport=inValue.Cast< ::haxor::math::AABB2 >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"captureDepth") ) { if (inCallProp == hx::paccAlways) return set_captureDepth(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"CameraToWorld") ) { CameraToWorld=inValue.Cast< ::haxor::math::Matrix4 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"WorldToCamera") ) { WorldToCamera=inValue.Cast< ::haxor::math::Matrix4 >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"m_captureDepth") ) { m_captureDepth=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"m_pixelViewport") ) { m_pixelViewport=inValue.Cast< ::haxor::math::AABB2 >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"ProjectionMatrix") ) { ProjectionMatrix=inValue.Cast< ::haxor::math::Matrix4 >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"m_projectionMatrix") ) { m_projectionMatrix=inValue.Cast< ::haxor::math::Matrix4 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_skyboxProjection") ) { m_skyboxProjection=inValue.Cast< ::haxor::math::Matrix4 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_projection_dirty") ) { m_projection_dirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"m_view_uniform_dirty") ) { m_view_uniform_dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_proj_uniform_dirty") ) { m_proj_uniform_dirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"ProjectionMatrixInverse") ) { ProjectionMatrixInverse=inValue.Cast< ::haxor::math::Matrix4 >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"m_projectionMatrixInverse") ) { m_projectionMatrixInverse=inValue.Cast< ::haxor::math::Matrix4 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_skyboxProjectionInverse") ) { m_skyboxProjectionInverse=inValue.Cast< ::haxor::math::Matrix4 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Camera_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { if (inCallProp == hx::paccAlways)  ioValue = set_main(ioValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_main") ) { m_main=ioValue.Cast< ::haxor::component::Camera >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"m_current") ) { m_current=ioValue.Cast< ::haxor::component::Camera >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"SAPCulling") ) { SAPCulling=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void Camera_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__fcid","\x78","\xa1","\xaf","\xf2"));
	outFields->push(HX_HCSTRING("background","\xee","\x93","\x1d","\x26"));
	outFields->push(HX_HCSTRING("skybox","\xca","\x1f","\x30","\xe7"));
	outFields->push(HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"));
	outFields->push(HX_HCSTRING("mask","\xec","\x40","\x56","\x48"));
	outFields->push(HX_HCSTRING("m_mask","\x3e","\xb1","\x4d","\x90"));
	outFields->push(HX_HCSTRING("m_layers","\x54","\xbe","\xa2","\x21"));
	outFields->push(HX_HCSTRING("fov","\x0d","\xc7","\x4d","\x00"));
	outFields->push(HX_HCSTRING("m_fov","\xfb","\x46","\xc6","\x01"));
	outFields->push(HX_HCSTRING("near","\xe8","\x70","\x02","\x49"));
	outFields->push(HX_HCSTRING("m_near","\x3a","\xe1","\xf9","\x90"));
	outFields->push(HX_HCSTRING("far","\xd7","\xba","\x4d","\x00"));
	outFields->push(HX_HCSTRING("m_far","\xc5","\x3a","\xc6","\x01"));
	outFields->push(HX_HCSTRING("order","\x8e","\xf0","\x20","\x35"));
	outFields->push(HX_HCSTRING("m_order","\xfc","\xc7","\xab","\xe5"));
	outFields->push(HX_HCSTRING("pixelViewport","\x0c","\xc5","\x8d","\x35"));
	outFields->push(HX_HCSTRING("m_pixelViewport","\x7a","\xba","\x02","\xe3"));
	outFields->push(HX_HCSTRING("viewport","\x66","\x4c","\xa5","\x9c"));
	outFields->push(HX_HCSTRING("m_aspect","\xaa","\x3e","\xf9","\x12"));
	outFields->push(HX_HCSTRING("m_viewport","\xb8","\x4d","\xf0","\xc3"));
	outFields->push(HX_HCSTRING("CameraToWorld","\x92","\x62","\xd6","\xea"));
	outFields->push(HX_HCSTRING("WorldToCamera","\xd2","\x32","\xab","\xd7"));
	outFields->push(HX_HCSTRING("ProjectionMatrix","\x50","\x64","\xb6","\xea"));
	outFields->push(HX_HCSTRING("m_projectionMatrix","\x82","\x2b","\xc3","\x3d"));
	outFields->push(HX_HCSTRING("m_skyboxProjection","\x4b","\xb0","\xf1","\x89"));
	outFields->push(HX_HCSTRING("ProjectionMatrixInverse","\x40","\x39","\xa4","\x17"));
	outFields->push(HX_HCSTRING("m_projectionMatrixInverse","\x4e","\x9c","\xa8","\xe0"));
	outFields->push(HX_HCSTRING("m_skyboxProjectionInverse","\xa5","\x32","\xae","\x81"));
	outFields->push(HX_HCSTRING("target","\x51","\xf3","\xec","\x86"));
	outFields->push(HX_HCSTRING("m_target","\x23","\x9c","\xde","\x4f"));
	outFields->push(HX_HCSTRING("quality","\xbf","\x04","\x4c","\x44"));
	outFields->push(HX_HCSTRING("m_quality","\xad","\x13","\xce","\x4e"));
	outFields->push(HX_HCSTRING("captureDepth","\x9d","\xea","\x45","\x6c"));
	outFields->push(HX_HCSTRING("m_captureDepth","\xef","\xfc","\x80","\x32"));
	outFields->push(HX_HCSTRING("filters","\xbb","\xa1","\x46","\x09"));
	outFields->push(HX_HCSTRING("m_filters","\xa9","\xb0","\xc8","\x13"));
	outFields->push(HX_HCSTRING("frustum","\x62","\x47","\x7a","\xd0"));
	outFields->push(HX_HCSTRING("m_frustum","\x50","\x56","\xfc","\xda"));
	outFields->push(HX_HCSTRING("mode","\x63","\xd3","\x60","\x48"));
	outFields->push(HX_HCSTRING("m_mode","\xb5","\x43","\x58","\x90"));
	outFields->push(HX_HCSTRING("screen","\x6c","\x3b","\x5d","\x47"));
	outFields->push(HX_HCSTRING("m_screen","\x3e","\xe4","\x4e","\x10"));
	outFields->push(HX_HCSTRING("m_projection_dirty","\x74","\x18","\x1e","\x23"));
	outFields->push(HX_HCSTRING("m_view_uniform_dirty","\xbf","\xfc","\xad","\xd1"));
	outFields->push(HX_HCSTRING("m_proj_uniform_dirty","\xf7","\x43","\x03","\x35"));
	outFields->push(HX_HCSTRING("m_aabb","\xf2","\x12","\x5f","\x88"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Camera_obj,__fcid),HX_HCSTRING("__fcid","\x78","\xa1","\xaf","\xf2")},
	{hx::fsObject /*::haxor::math::Color*/ ,(int)offsetof(Camera_obj,background),HX_HCSTRING("background","\xee","\x93","\x1d","\x26")},
	{hx::fsObject /*::haxor::graphics::texture::TextureCube*/ ,(int)offsetof(Camera_obj,skybox),HX_HCSTRING("skybox","\xca","\x1f","\x30","\xe7")},
	{hx::fsInt,(int)offsetof(Camera_obj,clear),HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48")},
	{hx::fsInt,(int)offsetof(Camera_obj,m_mask),HX_HCSTRING("m_mask","\x3e","\xb1","\x4d","\x90")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Camera_obj,m_layers),HX_HCSTRING("m_layers","\x54","\xbe","\xa2","\x21")},
	{hx::fsFloat,(int)offsetof(Camera_obj,m_fov),HX_HCSTRING("m_fov","\xfb","\x46","\xc6","\x01")},
	{hx::fsFloat,(int)offsetof(Camera_obj,m_near),HX_HCSTRING("m_near","\x3a","\xe1","\xf9","\x90")},
	{hx::fsFloat,(int)offsetof(Camera_obj,m_far),HX_HCSTRING("m_far","\xc5","\x3a","\xc6","\x01")},
	{hx::fsInt,(int)offsetof(Camera_obj,m_order),HX_HCSTRING("m_order","\xfc","\xc7","\xab","\xe5")},
	{hx::fsObject /*::haxor::math::AABB2*/ ,(int)offsetof(Camera_obj,m_pixelViewport),HX_HCSTRING("m_pixelViewport","\x7a","\xba","\x02","\xe3")},
	{hx::fsFloat,(int)offsetof(Camera_obj,m_aspect),HX_HCSTRING("m_aspect","\xaa","\x3e","\xf9","\x12")},
	{hx::fsObject /*::haxor::math::AABB2*/ ,(int)offsetof(Camera_obj,m_viewport),HX_HCSTRING("m_viewport","\xb8","\x4d","\xf0","\xc3")},
	{hx::fsObject /*::haxor::math::Matrix4*/ ,(int)offsetof(Camera_obj,CameraToWorld),HX_HCSTRING("CameraToWorld","\x92","\x62","\xd6","\xea")},
	{hx::fsObject /*::haxor::math::Matrix4*/ ,(int)offsetof(Camera_obj,WorldToCamera),HX_HCSTRING("WorldToCamera","\xd2","\x32","\xab","\xd7")},
	{hx::fsObject /*::haxor::math::Matrix4*/ ,(int)offsetof(Camera_obj,ProjectionMatrix),HX_HCSTRING("ProjectionMatrix","\x50","\x64","\xb6","\xea")},
	{hx::fsObject /*::haxor::math::Matrix4*/ ,(int)offsetof(Camera_obj,m_projectionMatrix),HX_HCSTRING("m_projectionMatrix","\x82","\x2b","\xc3","\x3d")},
	{hx::fsObject /*::haxor::math::Matrix4*/ ,(int)offsetof(Camera_obj,m_skyboxProjection),HX_HCSTRING("m_skyboxProjection","\x4b","\xb0","\xf1","\x89")},
	{hx::fsObject /*::haxor::math::Matrix4*/ ,(int)offsetof(Camera_obj,ProjectionMatrixInverse),HX_HCSTRING("ProjectionMatrixInverse","\x40","\x39","\xa4","\x17")},
	{hx::fsObject /*::haxor::math::Matrix4*/ ,(int)offsetof(Camera_obj,m_projectionMatrixInverse),HX_HCSTRING("m_projectionMatrixInverse","\x4e","\x9c","\xa8","\xe0")},
	{hx::fsObject /*::haxor::math::Matrix4*/ ,(int)offsetof(Camera_obj,m_skyboxProjectionInverse),HX_HCSTRING("m_skyboxProjectionInverse","\xa5","\x32","\xae","\x81")},
	{hx::fsObject /*::haxor::graphics::texture::RenderTexture*/ ,(int)offsetof(Camera_obj,target),HX_HCSTRING("target","\x51","\xf3","\xec","\x86")},
	{hx::fsObject /*::haxor::graphics::texture::RenderTexture*/ ,(int)offsetof(Camera_obj,m_target),HX_HCSTRING("m_target","\x23","\x9c","\xde","\x4f")},
	{hx::fsFloat,(int)offsetof(Camera_obj,m_quality),HX_HCSTRING("m_quality","\xad","\x13","\xce","\x4e")},
	{hx::fsBool,(int)offsetof(Camera_obj,m_captureDepth),HX_HCSTRING("m_captureDepth","\xef","\xfc","\x80","\x32")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Camera_obj,m_filters),HX_HCSTRING("m_filters","\xa9","\xb0","\xc8","\x13")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Camera_obj,m_frustum),HX_HCSTRING("m_frustum","\x50","\x56","\xfc","\xda")},
	{hx::fsInt,(int)offsetof(Camera_obj,m_mode),HX_HCSTRING("m_mode","\xb5","\x43","\x58","\x90")},
	{hx::fsObject /*::haxor::math::AABB2*/ ,(int)offsetof(Camera_obj,m_screen),HX_HCSTRING("m_screen","\x3e","\xe4","\x4e","\x10")},
	{hx::fsBool,(int)offsetof(Camera_obj,m_projection_dirty),HX_HCSTRING("m_projection_dirty","\x74","\x18","\x1e","\x23")},
	{hx::fsBool,(int)offsetof(Camera_obj,m_view_uniform_dirty),HX_HCSTRING("m_view_uniform_dirty","\xbf","\xfc","\xad","\xd1")},
	{hx::fsBool,(int)offsetof(Camera_obj,m_proj_uniform_dirty),HX_HCSTRING("m_proj_uniform_dirty","\xf7","\x43","\x03","\x35")},
	{hx::fsObject /*::haxor::math::AABB3*/ ,(int)offsetof(Camera_obj,m_aabb),HX_HCSTRING("m_aabb","\xf2","\x12","\x5f","\x88")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &Camera_obj::SAPCulling,HX_HCSTRING("SAPCulling","\x8e","\x3a","\x0d","\xe8")},
	{hx::fsObject /*::haxor::component::Camera*/ ,(void *) &Camera_obj::m_current,HX_HCSTRING("m_current","\x27","\xab","\x65","\xd6")},
	{hx::fsObject /*::haxor::component::Camera*/ ,(void *) &Camera_obj::m_main,HX_HCSTRING("m_main","\x8b","\xa8","\x4d","\x90")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__fcid","\x78","\xa1","\xaf","\xf2"),
	HX_HCSTRING("background","\xee","\x93","\x1d","\x26"),
	HX_HCSTRING("skybox","\xca","\x1f","\x30","\xe7"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("get_mask","\x75","\xfc","\x10","\xc8"),
	HX_HCSTRING("set_mask","\xe9","\x55","\x6e","\x76"),
	HX_HCSTRING("m_mask","\x3e","\xb1","\x4d","\x90"),
	HX_HCSTRING("m_layers","\x54","\xbe","\xa2","\x21"),
	HX_HCSTRING("get_fov","\xa4","\x8f","\xc2","\x26"),
	HX_HCSTRING("set_fov","\xb0","\x20","\xc4","\x19"),
	HX_HCSTRING("m_fov","\xfb","\x46","\xc6","\x01"),
	HX_HCSTRING("get_near","\x71","\x2c","\xbd","\xc8"),
	HX_HCSTRING("set_near","\xe5","\x85","\x1a","\x77"),
	HX_HCSTRING("m_near","\x3a","\xe1","\xf9","\x90"),
	HX_HCSTRING("get_far","\x6e","\x83","\xc2","\x26"),
	HX_HCSTRING("set_far","\x7a","\x14","\xc4","\x19"),
	HX_HCSTRING("m_far","\xc5","\x3a","\xc6","\x01"),
	HX_HCSTRING("m_order","\xfc","\xc7","\xab","\xe5"),
	HX_HCSTRING("get_order","\xe5","\x4c","\xca","\x78"),
	HX_HCSTRING("set_order","\xf1","\x38","\x1b","\x5c"),
	HX_HCSTRING("get_pixelViewport","\x63","\xd0","\xfd","\x3b"),
	HX_HCSTRING("m_pixelViewport","\x7a","\xba","\x02","\xe3"),
	HX_HCSTRING("get_viewport","\x6f","\x00","\xbf","\x51"),
	HX_HCSTRING("set_viewport","\xe3","\x23","\xb8","\x66"),
	HX_HCSTRING("m_aspect","\xaa","\x3e","\xf9","\x12"),
	HX_HCSTRING("m_viewport","\xb8","\x4d","\xf0","\xc3"),
	HX_HCSTRING("CameraToWorld","\x92","\x62","\xd6","\xea"),
	HX_HCSTRING("get_CameraToWorld","\xe9","\x6d","\x46","\xf1"),
	HX_HCSTRING("WorldToCamera","\xd2","\x32","\xab","\xd7"),
	HX_HCSTRING("get_WorldToCamera","\x29","\x3e","\x1b","\xde"),
	HX_HCSTRING("ProjectionMatrix","\x50","\x64","\xb6","\xea"),
	HX_HCSTRING("get_ProjectionMatrix","\x59","\xc9","\x20","\x09"),
	HX_HCSTRING("m_projectionMatrix","\x82","\x2b","\xc3","\x3d"),
	HX_HCSTRING("m_skyboxProjection","\x4b","\xb0","\xf1","\x89"),
	HX_HCSTRING("ProjectionMatrixInverse","\x40","\x39","\xa4","\x17"),
	HX_HCSTRING("get_ProjectionMatrixInverse","\x57","\x77","\x46","\xe4"),
	HX_HCSTRING("m_projectionMatrixInverse","\x4e","\x9c","\xa8","\xe0"),
	HX_HCSTRING("m_skyboxProjectionInverse","\xa5","\x32","\xae","\x81"),
	HX_HCSTRING("target","\x51","\xf3","\xec","\x86"),
	HX_HCSTRING("get_target","\x1a","\x63","\x74","\x77"),
	HX_HCSTRING("set_target","\x8e","\x01","\xf2","\x7a"),
	HX_HCSTRING("m_target","\x23","\x9c","\xde","\x4f"),
	HX_HCSTRING("get_quality","\xd6","\x64","\x46","\xca"),
	HX_HCSTRING("set_quality","\xe2","\x6b","\xb3","\xd4"),
	HX_HCSTRING("m_quality","\xad","\x13","\xce","\x4e"),
	HX_HCSTRING("get_captureDepth","\x26","\xd7","\xe4","\x70"),
	HX_HCSTRING("set_captureDepth","\x9a","\xc4","\x26","\xc7"),
	HX_HCSTRING("m_captureDepth","\xef","\xfc","\x80","\x32"),
	HX_HCSTRING("get_filters","\xd2","\x01","\x41","\x8f"),
	HX_HCSTRING("set_filters","\xde","\x08","\xae","\x99"),
	HX_HCSTRING("m_filters","\xa9","\xb0","\xc8","\x13"),
	HX_HCSTRING("get_frustum","\x79","\xa7","\x74","\x56"),
	HX_HCSTRING("m_frustum","\x50","\x56","\xfc","\xda"),
	HX_HCSTRING("get_mode","\xec","\x8e","\x1b","\xc8"),
	HX_HCSTRING("set_mode","\x60","\xe8","\x78","\x76"),
	HX_HCSTRING("m_mode","\xb5","\x43","\x58","\x90"),
	HX_HCSTRING("get_screen","\x35","\xab","\xe4","\x37"),
	HX_HCSTRING("set_screen","\xa9","\x49","\x62","\x3b"),
	HX_HCSTRING("m_screen","\x3e","\xe4","\x4e","\x10"),
	HX_HCSTRING("m_projection_dirty","\x74","\x18","\x1e","\x23"),
	HX_HCSTRING("m_view_uniform_dirty","\xbf","\xfc","\xad","\xd1"),
	HX_HCSTRING("m_proj_uniform_dirty","\xf7","\x43","\x03","\x35"),
	HX_HCSTRING("m_aabb","\xf2","\x12","\x5f","\x88"),
	HX_HCSTRING("OnBuild","\x6f","\xa1","\x79","\x1e"),
	HX_HCSTRING("WorldToProjection","\x3c","\x8f","\x98","\xc5"),
	HX_HCSTRING("WorldToDepth","\x76","\x69","\x34","\xa0"),
	HX_HCSTRING("IsCulled","\x3b","\x46","\x07","\x6d"),
	HX_HCSTRING("LookAt","\x52","\xe9","\x49","\x96"),
	HX_HCSTRING("UpdateProjection","\x18","\x34","\x72","\x28"),
	HX_HCSTRING("OnTransformUpdate","\x16","\x82","\xd6","\x22"),
	HX_HCSTRING("OnDestroy","\x7b","\xc5","\x03","\x9e"),
	HX_HCSTRING("OnResize","\x93","\x0c","\xda","\xc1"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Camera_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Camera_obj::SAPCulling,"SAPCulling");
	HX_MARK_MEMBER_NAME(Camera_obj::m_current,"m_current");
	HX_MARK_MEMBER_NAME(Camera_obj::m_main,"m_main");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Camera_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Camera_obj::SAPCulling,"SAPCulling");
	HX_VISIT_MEMBER_NAME(Camera_obj::m_current,"m_current");
	HX_VISIT_MEMBER_NAME(Camera_obj::m_main,"m_main");
};

#endif

hx::Class Camera_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("SAPCulling","\x8e","\x3a","\x0d","\xe8"),
	HX_HCSTRING("get_list","\xe7","\xd7","\x6d","\xc7"),
	HX_HCSTRING("get_current","\x50","\xfc","\xdd","\x51"),
	HX_HCSTRING("m_current","\x27","\xab","\x65","\xd6"),
	HX_HCSTRING("get_main","\xc2","\xf3","\x10","\xc8"),
	HX_HCSTRING("set_main","\x36","\x4d","\x6e","\x76"),
	HX_HCSTRING("m_main","\x8b","\xa8","\x4d","\x90"),
	String(null()) };

void Camera_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.component.Camera","\x02","\x7e","\x2d","\x35");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Camera_obj::__GetStatic;
	__mClass->mSetStaticField = &Camera_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Camera_obj >;
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

void Camera_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/component/Camera.hx",28,0xf5fa0e7a)
		{
			hx::Anon __result = hx::Anon_obj::Create();
			struct _Function_1_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/component/Camera.hx",28,0xf5fa0e7a)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						struct _Function_2_1{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/component/Camera.hx",28,0xf5fa0e7a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("background","\xee","\x93","\x1d","\x26") , _Function_2_1::Block(),false);
						struct _Function_2_2{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/component/Camera.hx",28,0xf5fa0e7a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("skybox","\xca","\x1f","\x30","\xe7") , _Function_2_2::Block(),false);
						struct _Function_2_3{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/component/Camera.hx",28,0xf5fa0e7a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48") , _Function_2_3::Block(),false);
						struct _Function_2_4{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/component/Camera.hx",28,0xf5fa0e7a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("mask","\xec","\x40","\x56","\x48") , _Function_2_4::Block(),false);
						struct _Function_2_5{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/component/Camera.hx",28,0xf5fa0e7a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("fov","\x0d","\xc7","\x4d","\x00") , _Function_2_5::Block(),false);
						struct _Function_2_6{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/component/Camera.hx",28,0xf5fa0e7a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("near","\xe8","\x70","\x02","\x49") , _Function_2_6::Block(),false);
						struct _Function_2_7{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/component/Camera.hx",28,0xf5fa0e7a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("far","\xd7","\xba","\x4d","\x00") , _Function_2_7::Block(),false);
						struct _Function_2_8{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/component/Camera.hx",28,0xf5fa0e7a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("order","\x8e","\xf0","\x20","\x35") , _Function_2_8::Block(),false);
						struct _Function_2_9{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/component/Camera.hx",28,0xf5fa0e7a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("viewport","\x66","\x4c","\xa5","\x9c") , _Function_2_9::Block(),false);
						struct _Function_2_10{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/component/Camera.hx",28,0xf5fa0e7a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("target","\x51","\xf3","\xec","\x86") , _Function_2_10::Block(),false);
						struct _Function_2_11{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/component/Camera.hx",28,0xf5fa0e7a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("quality","\xbf","\x04","\x4c","\x44") , _Function_2_11::Block(),false);
						struct _Function_2_12{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/component/Camera.hx",28,0xf5fa0e7a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("captureDepth","\x9d","\xea","\x45","\x6c") , _Function_2_12::Block(),false);
						struct _Function_2_13{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxor/component/Camera.hx",28,0xf5fa0e7a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("mode","\x63","\xd3","\x60","\x48") , _Function_2_13::Block(),false);
						return __result;
					}
					return null();
				}
			};
			__result->Add(HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80") , _Function_1_1::Block(),false);
			return __result;
		}
		return null();
	}
};
	__mClass->__meta__=_Function_0_1::Block();
	SAPCulling= true;
}

} // end namespace haxor
} // end namespace component
