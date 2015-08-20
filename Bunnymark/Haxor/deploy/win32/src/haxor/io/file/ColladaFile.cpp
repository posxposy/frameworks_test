#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_xml_Printer
#include <haxe/xml/Printer.h>
#endif
#ifndef INCLUDED_haxor_component_Behaviour
#include <haxor/component/Behaviour.h>
#endif
#ifndef INCLUDED_haxor_component_Component
#include <haxor/component/Component.h>
#endif
#ifndef INCLUDED_haxor_component_DataComponent
#include <haxor/component/DataComponent.h>
#endif
#ifndef INCLUDED_haxor_component_MeshRenderer
#include <haxor/component/MeshRenderer.h>
#endif
#ifndef INCLUDED_haxor_component_Renderer
#include <haxor/component/Renderer.h>
#endif
#ifndef INCLUDED_haxor_component_SkinnedMeshRenderer
#include <haxor/component/SkinnedMeshRenderer.h>
#endif
#ifndef INCLUDED_haxor_component_Transform
#include <haxor/component/Transform.h>
#endif
#ifndef INCLUDED_haxor_component_animation_Animation
#include <haxor/component/animation/Animation.h>
#endif
#ifndef INCLUDED_haxor_component_animation_AnimationClip
#include <haxor/component/animation/AnimationClip.h>
#endif
#ifndef INCLUDED_haxor_component_animation_ClipTrack
#include <haxor/component/animation/ClipTrack.h>
#endif
#ifndef INCLUDED_haxor_component_animation_KeyFrame
#include <haxor/component/animation/KeyFrame.h>
#endif
#ifndef INCLUDED_haxor_component_light_Light
#include <haxor/component/light/Light.h>
#endif
#ifndef INCLUDED_haxor_component_light_PointLight
#include <haxor/component/light/PointLight.h>
#endif
#ifndef INCLUDED_haxor_context_DataContext
#include <haxor/context/DataContext.h>
#endif
#ifndef INCLUDED_haxor_context_EngineContext
#include <haxor/context/EngineContext.h>
#endif
#ifndef INCLUDED_haxor_context_ShaderContext
#include <haxor/context/ShaderContext.h>
#endif
#ifndef INCLUDED_haxor_core_Asset
#include <haxor/core/Asset.h>
#endif
#ifndef INCLUDED_haxor_core_Console
#include <haxor/core/Console.h>
#endif
#ifndef INCLUDED_haxor_core_Entity
#include <haxor/core/Entity.h>
#endif
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_graphics_material_Material
#include <haxor/graphics/material/Material.h>
#endif
#ifndef INCLUDED_haxor_graphics_material_Shader
#include <haxor/graphics/material/Shader.h>
#endif
#ifndef INCLUDED_haxor_graphics_mesh_Mesh
#include <haxor/graphics/mesh/Mesh.h>
#endif
#ifndef INCLUDED_haxor_graphics_mesh_Mesh3
#include <haxor/graphics/mesh/Mesh3.h>
#endif
#ifndef INCLUDED_haxor_graphics_mesh_MeshLayout
#include <haxor/graphics/mesh/MeshLayout.h>
#endif
#ifndef INCLUDED_haxor_graphics_mesh_SkinnedMesh3
#include <haxor/graphics/mesh/SkinnedMesh3.h>
#endif
#ifndef INCLUDED_haxor_io_file_AssetFile
#include <haxor/io/file/AssetFile.h>
#endif
#ifndef INCLUDED_haxor_io_file_AssetXML
#include <haxor/io/file/AssetXML.h>
#endif
#ifndef INCLUDED_haxor_io_file_ColladaAnimation
#include <haxor/io/file/ColladaAnimation.h>
#endif
#ifndef INCLUDED_haxor_io_file_ColladaAnimationChannel
#include <haxor/io/file/ColladaAnimationChannel.h>
#endif
#ifndef INCLUDED_haxor_io_file_ColladaAnimationKeyFrame
#include <haxor/io/file/ColladaAnimationKeyFrame.h>
#endif
#ifndef INCLUDED_haxor_io_file_ColladaAssetData
#include <haxor/io/file/ColladaAssetData.h>
#endif
#ifndef INCLUDED_haxor_io_file_ColladaController
#include <haxor/io/file/ColladaController.h>
#endif
#ifndef INCLUDED_haxor_io_file_ColladaFile
#include <haxor/io/file/ColladaFile.h>
#endif
#ifndef INCLUDED_haxor_io_file_ColladaGeometry
#include <haxor/io/file/ColladaGeometry.h>
#endif
#ifndef INCLUDED_haxor_io_file_ColladaImage
#include <haxor/io/file/ColladaImage.h>
#endif
#ifndef INCLUDED_haxor_io_file_ColladaInput
#include <haxor/io/file/ColladaInput.h>
#endif
#ifndef INCLUDED_haxor_io_file_ColladaInstance
#include <haxor/io/file/ColladaInstance.h>
#endif
#ifndef INCLUDED_haxor_io_file_ColladaLight
#include <haxor/io/file/ColladaLight.h>
#endif
#ifndef INCLUDED_haxor_io_file_ColladaMaterial
#include <haxor/io/file/ColladaMaterial.h>
#endif
#ifndef INCLUDED_haxor_io_file_ColladaMesh
#include <haxor/io/file/ColladaMesh.h>
#endif
#ifndef INCLUDED_haxor_io_file_ColladaNode
#include <haxor/io/file/ColladaNode.h>
#endif
#ifndef INCLUDED_haxor_io_file_ColladaPrimitive
#include <haxor/io/file/ColladaPrimitive.h>
#endif
#ifndef INCLUDED_haxor_io_file_ColladaVisualScene
#include <haxor/io/file/ColladaVisualScene.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_ISerializable
#include <haxor/io/serialization/ISerializable.h>
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
#ifndef INCLUDED_haxor_math_Vector3
#include <haxor/math/Vector3.h>
#endif
#ifndef INCLUDED_haxor_math_Vector4
#include <haxor/math/Vector4.h>
#endif
namespace haxor{
namespace io{
namespace file{

Void ColladaFile_obj::__construct(::String p_name,::String p_src)
{
HX_STACK_FRAME("haxor.io.file.ColladaFile","new",0x10d85e4a,"haxor.io.file.ColladaFile.new","haxor/io/file/ColladaFile.hx",132,0xa1888587)
HX_STACK_THIS(this)
HX_STACK_ARG(p_name,"p_name")
HX_STACK_ARG(p_src,"p_src")
{
	HX_STACK_LINE(133)
	this->xmlns = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(134)
	this->version = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(135)
	::haxor::io::file::ColladaAssetData tmp = ::haxor::io::file::ColladaAssetData_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(135)
	this->data = tmp;
	HX_STACK_LINE(136)
	Array< ::Dynamic > tmp1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(136)
	this->geometries = tmp1;
	HX_STACK_LINE(137)
	Array< ::Dynamic > tmp2 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(137)
	this->images = tmp2;
	HX_STACK_LINE(138)
	Array< ::Dynamic > tmp3 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(138)
	this->controllers = tmp3;
	HX_STACK_LINE(139)
	Array< ::Dynamic > tmp4 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(139)
	this->materials = tmp4;
	HX_STACK_LINE(140)
	Array< ::Dynamic > tmp5 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(140)
	this->animations = tmp5;
	HX_STACK_LINE(141)
	Array< ::Dynamic > tmp6 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(141)
	this->lights = tmp6;
	HX_STACK_LINE(142)
	this->scene = null();
	HX_STACK_LINE(143)
	Float tmp7 = ::Math_obj::random();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(143)
	Float tmp8 = (tmp7 * (int)16777215);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(143)
	int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(143)
	this->m_id = tmp9;
	HX_STACK_LINE(145)
	::String tmp10 = p_name;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(145)
	::String tmp11 = p_src;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(145)
	super::__construct(tmp10,tmp11);
}
;
	return null();
}

//ColladaFile_obj::~ColladaFile_obj() { }

Dynamic ColladaFile_obj::__CreateEmpty() { return  new ColladaFile_obj; }
hx::ObjectPtr< ColladaFile_obj > ColladaFile_obj::__new(::String p_name,::String p_src)
{  hx::ObjectPtr< ColladaFile_obj > _result_ = new ColladaFile_obj();
	_result_->__construct(p_name,p_src);
	return _result_;}

Dynamic ColladaFile_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ColladaFile_obj > _result_ = new ColladaFile_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Dynamic ColladaFile_obj::get_asset( ){
	HX_STACK_FRAME("haxor.io.file.ColladaFile","get_asset",0x0a6d9fb1,"haxor.io.file.ColladaFile.get_asset","haxor/io/file/ColladaFile.hx",151,0xa1888587)
	HX_STACK_THIS(this)
	HX_STACK_LINE(150)
	::haxor::io::file::ColladaFile _g3 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(152)
	::haxor::core::Entity tmp = ::haxor::core::Entity_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(152)
	::haxor::core::Entity re = tmp;		HX_STACK_VAR(re,"re");
	HX_STACK_LINE(153)
	re->set_name(HX_HCSTRING("collada_asset","\x23","\xf0","\xa0","\x21"));
	HX_STACK_LINE(154)
	::haxor::io::file::ColladaVisualScene tmp1 = this->scene;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(154)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(154)
	if ((tmp2)){
		HX_STACK_LINE(156)
		{
			HX_STACK_LINE(156)
			int p_level = (int)0;		HX_STACK_VAR(p_level,"p_level");
			HX_STACK_LINE(156)
			int tmp3 = ::haxor::core::Console_obj::verbose;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(156)
			int tmp4 = p_level;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(156)
			bool tmp5 = (tmp3 >= tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(156)
			if ((tmp5)){
				HX_STACK_LINE(156)
				::String tmp6 = HX_HCSTRING("ColladaFile> Trying to get asset of NULL scene.","\x28","\x34","\xc0","\xb7");		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(156)
				::String tmp7 = (HX_HCSTRING("[E] ","\x2d","\x17","\x5b","\x3c") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(156)
				::cpp::Lib_obj::println(tmp7);
			}
		}
		HX_STACK_LINE(157)
		::haxor::core::Entity tmp3 = re;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(157)
		return tmp3;
	}
	HX_STACK_LINE(160)
	::haxor::io::file::ColladaVisualScene tmp3 = this->scene;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(160)
	::String tmp4 = tmp3->name;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(160)
	bool tmp5 = (tmp4 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(160)
	if ((tmp5)){
		HX_STACK_LINE(160)
		::haxor::io::file::ColladaVisualScene tmp6 = this->scene;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(160)
		::String tmp7 = tmp6->name;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(160)
		re->set_name(tmp7);
	}
	else{
		HX_STACK_LINE(161)
		::haxor::io::file::ColladaVisualScene tmp6 = this->scene;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(161)
		::String tmp7 = tmp6->id;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(161)
		bool tmp8 = (tmp7 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(161)
		if ((tmp8)){
			HX_STACK_LINE(161)
			::haxor::io::file::ColladaVisualScene tmp9 = this->scene;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(161)
			::String tmp10 = tmp9->id;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(161)
			re->set_name(tmp10);
		}
	}
	HX_STACK_LINE(163)
	::haxe::ds::ObjectMap tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(163)
	{
		HX_STACK_LINE(163)
		::haxe::ds::ObjectMap tmp7 = ::haxe::ds::ObjectMap_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(163)
		::haxe::ds::ObjectMap tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(163)
		tmp6 = tmp8;
	}
	HX_STACK_LINE(163)
	::haxe::ds::ObjectMap hm = tmp6;		HX_STACK_VAR(hm,"hm");
	HX_STACK_LINE(164)
	::haxe::ds::ObjectMap tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(164)
	{
		HX_STACK_LINE(164)
		::haxe::ds::ObjectMap tmp8 = ::haxe::ds::ObjectMap_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(164)
		::haxe::ds::ObjectMap tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(164)
		tmp7 = tmp9;
	}
	HX_STACK_LINE(164)
	::haxe::ds::ObjectMap cm = tmp7;		HX_STACK_VAR(cm,"cm");
	HX_STACK_LINE(165)
	::haxe::ds::ObjectMap tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(165)
	{
		HX_STACK_LINE(165)
		::haxe::ds::ObjectMap tmp9 = ::haxe::ds::ObjectMap_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(165)
		::haxe::ds::ObjectMap tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(165)
		tmp8 = tmp10;
	}
	HX_STACK_LINE(165)
	::haxe::ds::ObjectMap mm = tmp8;		HX_STACK_VAR(mm,"mm");
	HX_STACK_LINE(167)
	Array< ::Dynamic > tmp9 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(167)
	Array< ::Dynamic > joint_transforms = tmp9;		HX_STACK_VAR(joint_transforms,"joint_transforms");
	HX_STACK_LINE(168)
	Array< ::Dynamic > tmp10 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(168)
	Array< ::Dynamic > joint_nodes = tmp10;		HX_STACK_VAR(joint_nodes,"joint_nodes");
	HX_STACK_LINE(169)
	Array< ::Dynamic > tmp11 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(169)
	Array< ::Dynamic > skinned_meshes = tmp11;		HX_STACK_VAR(skinned_meshes,"skinned_meshes");
	HX_STACK_LINE(171)
	{
		HX_STACK_LINE(171)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(171)
		Array< ::Dynamic > tmp12 = this->materials;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(171)
		int _g = tmp12->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(171)
		while((true)){
			HX_STACK_LINE(171)
			bool tmp13 = (_g1 < _g);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(171)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(171)
			if ((tmp14)){
				HX_STACK_LINE(171)
				break;
			}
			HX_STACK_LINE(171)
			int tmp15 = (_g1)++;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(171)
			int i = tmp15;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(173)
			Array< ::Dynamic > tmp16 = this->materials;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(173)
			int tmp17 = i;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(173)
			::haxor::io::file::ColladaMaterial tmp18 = tmp16->__get(tmp17).StaticCast< ::haxor::io::file::ColladaMaterial >();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(173)
			::haxor::io::file::ColladaMaterial m = tmp18;		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(175)
			::String mn = m->name;		HX_STACK_VAR(mn,"mn");
			HX_STACK_LINE(176)
			{
				HX_STACK_LINE(176)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(176)
				while((true)){
					HX_STACK_LINE(176)
					bool tmp19 = (_g2 < (int)10);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(176)
					bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(176)
					if ((tmp20)){
						HX_STACK_LINE(176)
						break;
					}
					HX_STACK_LINE(176)
					int tmp21 = (_g2)++;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(176)
					int i1 = tmp21;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(176)
					::String tmp22 = mn;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(176)
					::String tmp23 = (HX_HCSTRING("_","\x5f","\x00","\x00","\x00") + i1);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(176)
					::String tmp24 = ::StringTools_obj::replace(tmp22,tmp23,HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(176)
					mn = tmp24;
				}
			}
			HX_STACK_LINE(177)
			::String tmp19 = mn;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(177)
			::String tmp20 = ::StringTools_obj::replace(tmp19,HX_HCSTRING("_","\x5f","\x00","\x00","\x00"),HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(177)
			mn = tmp20;
			HX_STACK_LINE(178)
			::String tmp21 = mn;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(178)
			Dynamic tmp22 = ::haxor::core::Asset_obj::Get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(178)
			::haxor::graphics::material::Material mat = tmp22;		HX_STACK_VAR(mat,"mat");
			HX_STACK_LINE(180)
			bool tmp23 = (mat == null());		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(180)
			if ((tmp23)){
				HX_STACK_LINE(182)
				::haxor::graphics::material::Material tmp24 = ::haxor::graphics::material::Material_obj::__new(null());		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(182)
				mat = tmp24;
				HX_STACK_LINE(183)
				::String tmp25 = mn;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(183)
				mat->set_name(tmp25);
				HX_STACK_LINE(184)
				::haxor::graphics::material::Shader tmp26 = ::haxor::graphics::material::Shader_obj::m_flat_texture_shader;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(184)
				bool tmp27 = (tmp26 == null());		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(184)
				::haxor::graphics::material::Shader tmp28;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(184)
				if ((tmp27)){
					HX_STACK_LINE(184)
					::String tmp29 = ::haxor::context::ShaderContext_obj::vs_flat_texture;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(184)
					::String tmp30 = ::haxor::context::ShaderContext_obj::fs_flat_texture;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(184)
					::haxor::graphics::material::Shader tmp31 = ::haxor::graphics::material::Shader_obj::__new(tmp29,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(184)
					tmp28 = ::haxor::graphics::material::Shader_obj::m_flat_texture_shader = tmp31;
				}
				else{
					HX_STACK_LINE(184)
					tmp28 = ::haxor::graphics::material::Shader_obj::m_flat_texture_shader;
				}
				HX_STACK_LINE(184)
				mat->set_shader(tmp28);
				HX_STACK_LINE(185)
				::String tmp29 = mn;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(185)
				::haxor::graphics::material::Material tmp30 = mat;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(185)
				::haxor::core::Asset_obj::Add(tmp29,tmp30);
			}
			HX_STACK_LINE(187)
			::haxor::io::file::ColladaMaterial tmp24 = m;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(187)
			::haxor::graphics::material::Material tmp25 = mat;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(187)
			mm->set(tmp24,tmp25);
		}
	}
	HX_STACK_LINE(190)
	::haxor::io::file::ColladaVisualScene tmp12 = this->scene;		HX_STACK_VAR(tmp12,"tmp12");

	HX_BEGIN_LOCAL_FUNC_S8(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,joint_nodes,Array< ::Dynamic >,skinned_meshes,::haxe::ds::ObjectMap,hm,::haxor::core::Entity,re,Array< ::Dynamic >,joint_transforms,::haxe::ds::ObjectMap,cm,::haxor::io::file::ColladaFile,_g3,::haxe::ds::ObjectMap,mm)
	int __ArgCount() const { return 1; }
	Void run(::haxor::io::file::ColladaNode n){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxor/io/file/ColladaFile.hx",191,0xa1888587)
		HX_STACK_ARG(n,"n")
		{
			HX_STACK_LINE(192)
			bool tmp13 = (n->parent == null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(192)
			::haxor::core::Entity tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(192)
			if ((tmp13)){
				HX_STACK_LINE(192)
				tmp14 = re;
			}
			else{
				HX_STACK_LINE(192)
				::haxor::io::file::ColladaNode tmp15 = n->parent;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(192)
				bool tmp16 = hm->exists(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(192)
				if ((tmp16)){
					HX_STACK_LINE(192)
					::haxor::io::file::ColladaNode tmp17 = n->parent;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(192)
					::haxor::core::Entity tmp18 = hm->get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(192)
					tmp14 = tmp18;
				}
				else{
					HX_STACK_LINE(192)
					tmp14 = re;
				}
			}
			HX_STACK_LINE(192)
			::haxor::core::Entity pe = tmp14;		HX_STACK_VAR(pe,"pe");
			HX_STACK_LINE(193)
			::haxor::core::Entity ne = null();		HX_STACK_VAR(ne,"ne");
			HX_STACK_LINE(194)
			bool tmp15 = (n->name == HX_HCSTRING("EnvironmentAmbientLight","\xf1","\x41","\x87","\xac"));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(194)
			if ((tmp15)){
				HX_STACK_LINE(194)
				return null();
			}
			HX_STACK_LINE(195)
			::haxor::core::Entity tmp16 = ::haxor::core::Entity_obj::__new(null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(195)
			ne = tmp16;
			HX_STACK_LINE(196)
			int tmp17 = ne->get_uid();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(196)
			::String tmp18 = (HX_HCSTRING("node","\x02","\x0a","\x0a","\x49") + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(196)
			ne->set_name(tmp18);
			HX_STACK_LINE(197)
			bool tmp19 = (n->sid != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(197)
			if ((tmp19)){
				HX_STACK_LINE(197)
				::String tmp20 = n->sid;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(197)
				ne->set_name(tmp20);
			}
			else{
				HX_STACK_LINE(198)
				bool tmp20 = (n->id != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(198)
				if ((tmp20)){
					HX_STACK_LINE(198)
					::String tmp21 = n->id;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(198)
					ne->set_name(tmp21);
				}
				else{
					HX_STACK_LINE(199)
					bool tmp21 = (n->name != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(199)
					if ((tmp21)){
						HX_STACK_LINE(199)
						::String tmp22 = n->name;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(199)
						ne->set_name(tmp22);
					}
				}
			}
			HX_STACK_LINE(200)
			bool tmp20 = (n->type == HX_HCSTRING("joint","\x4a","\x39","\x28","\x52"));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(200)
			if ((tmp20)){
				HX_STACK_LINE(202)
				::haxor::component::Transform tmp21 = ne->m_transform;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(202)
				joint_transforms->push(tmp21);
				HX_STACK_LINE(203)
				::haxor::io::file::ColladaNode tmp22 = n;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(203)
				joint_nodes->push(tmp22);
			}
			HX_STACK_LINE(205)
			::haxor::component::Transform tmp21 = pe->m_transform;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(205)
			ne->m_transform->set_parent(tmp21);
			HX_STACK_LINE(206)
			::haxor::math::Vector3 tmp22 = n->position;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(206)
			ne->m_transform->set_localPosition(tmp22);
			HX_STACK_LINE(207)
			::haxor::math::Quaternion tmp23 = n->rotation;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(207)
			ne->m_transform->set_localRotation(tmp23);
			HX_STACK_LINE(208)
			::haxor::math::Vector3 tmp24 = n->scale;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(208)
			ne->m_transform->set_localScale(tmp24);
			HX_STACK_LINE(210)
			bool tmp25 = (n->data != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(210)
			if ((tmp25)){
				HX_STACK_LINE(212)
				Dynamic tmp26 = ne->AddComponent(hx::ClassOf< ::haxor::component::DataComponent >());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(212)
				::haxor::component::DataComponent ad = tmp26;		HX_STACK_VAR(ad,"ad");
				HX_STACK_LINE(213)
				try
				{
				HX_STACK_CATCHABLE(Dynamic, 0);
				{
					HX_STACK_LINE(215)
					::haxe::format::JsonParser tmp27 = ::haxe::format::JsonParser_obj::__new(n->data);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(215)
					Dynamic tmp28 = tmp27->parseRec();		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(215)
					ad->data = tmp28;
				}
				}
				catch(Dynamic __e){
					{
						HX_STACK_BEGIN_CATCH
						Dynamic err = __e;{
						}
					}
				}
			}
			HX_STACK_LINE(270)
			::haxor::io::file::ColladaNode tmp26 = n;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(270)
			::haxor::core::Entity tmp27 = ne;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(270)
			hm->set(tmp26,tmp27);
			HX_STACK_LINE(271)
			{
				HX_STACK_LINE(271)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(271)
				int tmp28 = n->instances->length;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(271)
				int _g = tmp28;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(271)
				while((true)){
					HX_STACK_LINE(271)
					bool tmp29 = (_g1 < _g);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(271)
					bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(271)
					if ((tmp30)){
						HX_STACK_LINE(271)
						break;
					}
					HX_STACK_LINE(271)
					int tmp31 = (_g1)++;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(271)
					int i = tmp31;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(273)
					::haxor::io::file::ColladaInstance tmp32 = n->instances->__get(i).StaticCast< ::haxor::io::file::ColladaInstance >();		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(273)
					::haxor::io::file::ColladaInstance ci = tmp32;		HX_STACK_VAR(ci,"ci");
					HX_STACK_LINE(274)
					::haxor::component::MeshRenderer mr = null();		HX_STACK_VAR(mr,"mr");
					HX_STACK_LINE(275)
					::haxor::io::file::ColladaMaterial cmat = null();		HX_STACK_VAR(cmat,"cmat");
					HX_STACK_LINE(276)
					::haxor::io::file::ColladaGeometry cg = null();		HX_STACK_VAR(cg,"cg");
					HX_STACK_LINE(277)
					::haxor::io::file::ColladaController cc = null();		HX_STACK_VAR(cc,"cc");
					HX_STACK_LINE(278)
					::String cg_target = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(cg_target,"cg_target");
					HX_STACK_LINE(280)
					{
						HX_STACK_LINE(280)
						::String _g2 = ci->type;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(280)
						::String tmp33 = _g2;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(280)
						::String _switch_1 = (tmp33);
						if (  ( _switch_1==HX_HCSTRING("light","\xd6","\x90","\xfc","\x74"))){
							HX_STACK_LINE(284)
							::String tmp34 = ci->target;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(284)
							::haxor::io::file::ColladaLight tmp35 = _g3->FindLightById(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(284)
							::haxor::io::file::ColladaLight cl = tmp35;		HX_STACK_VAR(cl,"cl");
							HX_STACK_LINE(286)
							bool tmp36 = (cl == null());		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(286)
							if ((tmp36)){
								HX_STACK_LINE(286)
								continue;
							}
							HX_STACK_LINE(288)
							{
								HX_STACK_LINE(288)
								::String _g4 = cl->type;		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(288)
								::String tmp37 = _g4;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(288)
								::String _switch_2 = (tmp37);
								if (  ( _switch_2==HX_HCSTRING("ambient","\x18","\x98","\x81","\x09"))){
								}
								else if (  ( _switch_2==HX_HCSTRING("point","\x50","\xb4","\x8f","\xc6"))){
									HX_STACK_LINE(292)
									Dynamic tmp38 = ne->AddComponent(hx::ClassOf< ::haxor::component::light::PointLight >());		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(292)
									::haxor::component::light::PointLight pl = tmp38;		HX_STACK_VAR(pl,"pl");
									HX_STACK_LINE(293)
									::haxor::math::Color tmp39 = cl->color;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(293)
									pl->color->SetColor(tmp39);
									HX_STACK_LINE(294)
									pl->intensity = cl->intensity;
									HX_STACK_LINE(295)
									Float tmp40 = (cl->radius * ((Float)2.0));		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(295)
									pl->radius = tmp40;
									HX_STACK_LINE(296)
									pl->atten = cl->atten;
								}
								else if (  ( _switch_2==HX_HCSTRING("directional","\xea","\x04","\xcd","\xea"))){
								}
							}
							HX_STACK_LINE(304)
							continue;
						}
						else if (  ( _switch_1==HX_HCSTRING("geometry","\xb2","\x02","\xa9","\xd2"))){
							HX_STACK_LINE(307)
							cg_target = ci->target;
						}
						else if (  ( _switch_1==HX_HCSTRING("controller","\x9c","\x98","\xbe","\x04"))){
							HX_STACK_LINE(309)
							::String tmp34 = ci->target;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(309)
							::haxor::io::file::ColladaController tmp35 = _g3->FindControllerById(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(309)
							cc = tmp35;
							HX_STACK_LINE(310)
							bool tmp36 = (cc != null());		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(310)
							if ((tmp36)){
								HX_STACK_LINE(312)
								::haxor::component::Transform tmp37 = ne->m_transform;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(312)
								::haxor::io::file::ColladaController tmp38 = cc;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(312)
								cm->set(tmp37,tmp38);
								HX_STACK_LINE(313)
								cg_target = cc->source;
							}
						}
					}
					HX_STACK_LINE(319)
					::String tmp33 = cg_target;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(319)
					::haxor::io::file::ColladaGeometry tmp34 = _g3->FindGeometryById(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(319)
					cg = tmp34;
					HX_STACK_LINE(320)
					bool tmp35 = (cg != null());		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(320)
					if ((tmp35)){
						HX_STACK_LINE(322)
						int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(322)
						Array< ::Dynamic > tmp36 = cg->mesh->primitives;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(322)
						int _g2 = tmp36->length;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(322)
						while((true)){
							HX_STACK_LINE(322)
							bool tmp37 = (_g4 < _g2);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(322)
							bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(322)
							if ((tmp38)){
								HX_STACK_LINE(322)
								break;
							}
							HX_STACK_LINE(322)
							int tmp39 = (_g4)++;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(322)
							int i1 = tmp39;		HX_STACK_VAR(i1,"i1");
							HX_STACK_LINE(324)
							Array< ::Dynamic > tmp40 = cg->mesh->primitives;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(324)
							int tmp41 = i1;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(324)
							::haxor::io::file::ColladaPrimitive tmp42 = tmp40->__get(tmp41).StaticCast< ::haxor::io::file::ColladaPrimitive >();		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(324)
							::String mn = tmp42->material;		HX_STACK_VAR(mn,"mn");
							HX_STACK_LINE(325)
							::String tmp43 = mn;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(325)
							::haxor::io::file::ColladaMaterial tmp44 = _g3->FindMaterialById(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(325)
							cmat = tmp44;
							HX_STACK_LINE(327)
							::haxor::core::Entity tmp45 = ne;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(327)
							::String tmp46 = cg_target;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(327)
							Array< ::Dynamic > tmp47 = cg->mesh->primitives;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(327)
							int tmp48 = i1;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(327)
							::haxor::io::file::ColladaPrimitive tmp49 = tmp47->__get(tmp48).StaticCast< ::haxor::io::file::ColladaPrimitive >();		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(327)
							bool tmp50 = (cc == null());		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(327)
							::hx::Class tmp51;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(327)
							if ((tmp50)){
								HX_STACK_LINE(327)
								tmp51 = hx::ClassOf< ::haxor::component::MeshRenderer >();
							}
							else{
								HX_STACK_LINE(327)
								tmp51 = hx::ClassOf< ::haxor::component::SkinnedMeshRenderer >();
							}
							HX_STACK_LINE(327)
							::haxor::io::file::ColladaController tmp52 = cc;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(327)
							::haxor::component::MeshRenderer tmp53 = _g3->CreateMeshRenderer(tmp45,tmp46,tmp49,tmp51,tmp52);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(327)
							mr = tmp53;
							HX_STACK_LINE(329)
							bool tmp54 = (cc != null());		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(329)
							if ((tmp54)){
								HX_STACK_LINE(329)
								::haxor::component::SkinnedMeshRenderer tmp55 = ((::haxor::component::SkinnedMeshRenderer)(mr));		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(329)
								skinned_meshes->push(tmp55);
							}
							HX_STACK_LINE(330)
							bool tmp55 = (cmat != null());		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(330)
							if ((tmp55)){
								HX_STACK_LINE(332)
								::haxor::io::file::ColladaMaterial tmp56 = cmat;		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(332)
								bool tmp57 = mm->exists(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(332)
								::haxor::graphics::material::Material tmp58;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(332)
								if ((tmp57)){
									HX_STACK_LINE(332)
									::haxor::io::file::ColladaMaterial tmp59 = cmat;		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(332)
									::haxor::graphics::material::Material tmp60 = mm->get(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(332)
									tmp58 = tmp60;
								}
								else{
									HX_STACK_LINE(332)
									tmp58 = mr->m_material;
								}
								HX_STACK_LINE(332)
								mr->set_material(tmp58);
							}
							else{
								HX_STACK_LINE(336)
								{
									HX_STACK_LINE(336)
									int _g5 = (int)0;		HX_STACK_VAR(_g5,"_g5");
									HX_STACK_LINE(336)
									while((true)){
										HX_STACK_LINE(336)
										bool tmp56 = (_g5 < (int)10);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(336)
										bool tmp57 = !(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(336)
										if ((tmp57)){
											HX_STACK_LINE(336)
											break;
										}
										HX_STACK_LINE(336)
										int tmp58 = (_g5)++;		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(336)
										int i2 = tmp58;		HX_STACK_VAR(i2,"i2");
										HX_STACK_LINE(336)
										::String tmp59 = mn;		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(336)
										::String tmp60 = (HX_HCSTRING("_","\x5f","\x00","\x00","\x00") + i2);		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(336)
										::String tmp61 = ::StringTools_obj::replace(tmp59,tmp60,HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(336)
										mn = tmp61;
									}
								}
								HX_STACK_LINE(337)
								::String tmp56 = mn;		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(337)
								::String tmp57 = ::StringTools_obj::replace(tmp56,HX_HCSTRING("_","\x5f","\x00","\x00","\x00"),HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(337)
								mn = tmp57;
								HX_STACK_LINE(338)
								::String tmp58 = mn;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(338)
								Dynamic tmp59 = ::haxor::core::Asset_obj::Get(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(338)
								::haxor::graphics::material::Material mat = tmp59;		HX_STACK_VAR(mat,"mat");
								HX_STACK_LINE(339)
								::haxor::graphics::material::Material tmp60 = mat;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(339)
								mr->set_material(tmp60);
							}
						}
					}
				}
			}
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(190)
	tmp12->Traverse( Dynamic(new _Function_1_1(joint_nodes,skinned_meshes,hm,re,joint_transforms,cm,_g3,mm)));
	HX_STACK_LINE(346)
	{
		HX_STACK_LINE(346)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(346)
		int _g = skinned_meshes->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(346)
		while((true)){
			HX_STACK_LINE(346)
			bool tmp13 = (_g1 < _g);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(346)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(346)
			if ((tmp14)){
				HX_STACK_LINE(346)
				break;
			}
			HX_STACK_LINE(346)
			int tmp15 = (_g1)++;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(346)
			int i = tmp15;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(348)
			::haxor::component::SkinnedMeshRenderer tmp16 = skinned_meshes->__get(i).StaticCast< ::haxor::component::SkinnedMeshRenderer >();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(348)
			::haxor::component::SkinnedMeshRenderer skr = tmp16;		HX_STACK_VAR(skr,"skr");
			HX_STACK_LINE(349)
			::haxor::component::Transform tmp17 = skr->m_entity->m_transform;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(349)
			bool tmp18 = cm->exists(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(349)
			::haxor::io::file::ColladaController tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(349)
			if ((tmp18)){
				HX_STACK_LINE(349)
				::haxor::component::Transform tmp20 = skr->m_entity->m_transform;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(349)
				::haxor::io::file::ColladaController tmp21 = cm->get(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(349)
				tmp19 = tmp21;
			}
			else{
				HX_STACK_LINE(349)
				tmp19 = null();
			}
			HX_STACK_LINE(349)
			::haxor::io::file::ColladaController cc = tmp19;		HX_STACK_VAR(cc,"cc");
			HX_STACK_LINE(350)
			bool tmp20 = (cc == null());		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(350)
			if ((tmp20)){
				HX_STACK_LINE(350)
				continue;
			}
			HX_STACK_LINE(351)
			Array< ::Dynamic > tmp21 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(351)
			skr->set_joints(tmp21);
			HX_STACK_LINE(353)
			{
				HX_STACK_LINE(353)
				int _g31 = (int)0;		HX_STACK_VAR(_g31,"_g31");
				HX_STACK_LINE(353)
				int tmp22 = cc->joints->length;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(353)
				int _g2 = tmp22;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(353)
				while((true)){
					HX_STACK_LINE(353)
					bool tmp23 = (_g31 < _g2);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(353)
					bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(353)
					if ((tmp24)){
						HX_STACK_LINE(353)
						break;
					}
					HX_STACK_LINE(353)
					int tmp25 = (_g31)++;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(353)
					int j = tmp25;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(354)
					int _g5 = (int)0;		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(354)
					int _g4 = joint_transforms->length;		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(354)
					while((true)){
						HX_STACK_LINE(354)
						bool tmp26 = (_g5 < _g4);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(354)
						bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(354)
						if ((tmp27)){
							HX_STACK_LINE(354)
							break;
						}
						HX_STACK_LINE(354)
						int tmp28 = (_g5)++;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(354)
						int k = tmp28;		HX_STACK_VAR(k,"k");
						HX_STACK_LINE(356)
						::haxor::component::Transform tmp29 = joint_transforms->__get(k).StaticCast< ::haxor::component::Transform >();		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(356)
						::String tmp30 = tmp29->get_name();		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(356)
						::String tmp31 = cc->joints->__get(j);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(356)
						bool tmp32 = (tmp30 == tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(356)
						if ((tmp32)){
							HX_STACK_LINE(360)
							::haxor::component::Transform tmp33 = joint_transforms->__get(k).StaticCast< ::haxor::component::Transform >();		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(360)
							skr->m_joints->push(tmp33);
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(366)
	Dynamic tmp13 = hm->keys();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(366)
	Dynamic nit = tmp13;		HX_STACK_VAR(nit,"nit");
	HX_STACK_LINE(367)
	while((true)){
		HX_STACK_LINE(367)
		bool tmp14 = nit->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic )();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(367)
		bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(367)
		if ((tmp15)){
			HX_STACK_LINE(367)
			break;
		}
		HX_STACK_LINE(369)
		::haxor::io::file::ColladaNode tmp16 = nit->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(369)
		::haxor::io::file::ColladaNode n = tmp16;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(370)
		::haxor::io::file::ColladaNode tmp17 = n;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(370)
		::haxor::core::Entity tmp18 = hm->get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(370)
		::haxor::core::Entity e = tmp18;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(371)
		bool tmp19 = (e == re);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(371)
		if ((tmp19)){
			HX_STACK_LINE(371)
			continue;
		}
		HX_STACK_LINE(372)
		::String tmp20 = n->name;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(372)
		e->set_name(tmp20);
	}
	HX_STACK_LINE(374)
	::haxor::core::Entity tmp14 = re;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(374)
	this->AddAnimations(tmp14,null());
	HX_STACK_LINE(375)
	::haxor::io::file::ColladaAssetData tmp15 = this->data;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(375)
	::String tmp16 = tmp15->axis;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(375)
	bool tmp17 = (tmp16 == HX_HCSTRING("z_up","\x40","\x84","\xec","\x50"));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(375)
	if ((tmp17)){
		HX_STACK_LINE(377)
		::haxor::math::Vector3 tmp18 = ::haxor::math::Vector3_obj::__new((int)1,(int)0,(int)0);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(377)
		::haxor::math::Quaternion tmp19 = ::haxor::math::Quaternion_obj::FromAxisAngle(tmp18,((Float)-90.0));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(377)
		re->m_transform->set_rotation(tmp19);
	}
	HX_STACK_LINE(379)
	::haxor::core::Entity tmp18 = re;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(379)
	return tmp18;
}


Void ColladaFile_obj::AddAnimations( ::haxor::core::Entity p_entity,hx::Null< bool >  __o_p_exact){
bool p_exact = __o_p_exact.Default(false);
	HX_STACK_FRAME("haxor.io.file.ColladaFile","AddAnimations",0xdf3aa4ba,"haxor.io.file.ColladaFile.AddAnimations","haxor/io/file/ColladaFile.hx",389,0xa1888587)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_entity,"p_entity")
	HX_STACK_ARG(p_exact,"p_exact")
{
		HX_STACK_LINE(391)
		Array< ::Dynamic > tmp = this->animations;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(391)
		int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(391)
		bool tmp2 = (tmp1 <= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(391)
		if ((tmp2)){
			HX_STACK_LINE(391)
			return null();
		}
		HX_STACK_LINE(392)
		::haxor::core::Entity re = p_entity;		HX_STACK_VAR(re,"re");
		HX_STACK_LINE(393)
		::haxor::component::animation::Animation tmp3 = re->get_animation();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(393)
		::haxor::component::animation::Animation a = tmp3;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(394)
		bool tmp4 = (a == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(394)
		if ((tmp4)){
			HX_STACK_LINE(394)
			Dynamic tmp5 = re->AddComponent(hx::ClassOf< ::haxor::component::animation::Animation >());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(394)
			a = ((::haxor::component::animation::Animation)(tmp5));
		}
		HX_STACK_LINE(396)
		{
			HX_STACK_LINE(396)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(396)
			Array< ::Dynamic > tmp5 = this->animations;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(396)
			int _g = tmp5->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(396)
			while((true)){
				HX_STACK_LINE(396)
				bool tmp6 = (_g1 < _g);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(396)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(396)
				if ((tmp7)){
					HX_STACK_LINE(396)
					break;
				}
				HX_STACK_LINE(396)
				int tmp8 = (_g1)++;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(396)
				int i = tmp8;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(398)
				Array< ::Dynamic > tmp9 = this->animations;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(398)
				int tmp10 = i;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(398)
				::haxor::io::file::ColladaAnimation tmp11 = tmp9->__get(tmp10).StaticCast< ::haxor::io::file::ColladaAnimation >();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(398)
				::haxor::io::file::ColladaAnimation ca = tmp11;		HX_STACK_VAR(ca,"ca");
				HX_STACK_LINE(399)
				::haxor::component::animation::AnimationClip tmp12 = ::haxor::component::animation::AnimationClip_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(399)
				::haxor::component::animation::AnimationClip clip = tmp12;		HX_STACK_VAR(clip,"clip");
				HX_STACK_LINE(400)
				bool tmp13 = (ca->id == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(400)
				::String tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(400)
				if ((tmp13)){
					HX_STACK_LINE(400)
					bool tmp15 = (ca->name == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(400)
					if ((tmp15)){
						HX_STACK_LINE(400)
						tmp14 = (HX_HCSTRING("clip","\xd0","\x6e","\xc2","\x41") + i);
					}
					else{
						HX_STACK_LINE(400)
						tmp14 = ca->name;
					}
				}
				else{
					HX_STACK_LINE(400)
					tmp14 = ca->id;
				}
				HX_STACK_LINE(400)
				clip->set_name(tmp14);
				HX_STACK_LINE(402)
				{
					HX_STACK_LINE(402)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(402)
					int tmp15 = ca->channels->length;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(402)
					int _g2 = tmp15;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(402)
					while((true)){
						HX_STACK_LINE(402)
						bool tmp16 = (_g3 < _g2);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(402)
						bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(402)
						if ((tmp17)){
							HX_STACK_LINE(402)
							break;
						}
						HX_STACK_LINE(402)
						int tmp18 = (_g3)++;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(402)
						int j = tmp18;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(404)
						::haxor::io::file::ColladaAnimationChannel tmp19 = ca->channels->__get(j).StaticCast< ::haxor::io::file::ColladaAnimationChannel >();		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(404)
						::haxor::io::file::ColladaAnimationChannel cch = tmp19;		HX_STACK_VAR(cch,"cch");
						HX_STACK_LINE(405)
						Array< ::String > tmp20 = cch->target.split(HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(405)
						::String tmp21 = tmp20->__get((int)0);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(405)
						::String src_node = tmp21;		HX_STACK_VAR(src_node,"src_node");
						HX_STACK_LINE(406)
						::String tmp22 = src_node;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(406)
						::String tmp23 = ::StringTools_obj::replace(tmp22,HX_HCSTRING("node-","\xeb","\xb7","\xbe","\x9f"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(406)
						src_node = tmp23;
						HX_STACK_LINE(407)
						Array< ::String > tmp24 = cch->target.split(HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(407)
						::String tmp25 = tmp24->__get((int)1);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(407)
						::String src_target = tmp25;		HX_STACK_VAR(src_target,"src_target");
						HX_STACK_LINE(408)
						::String tmp26 = src_node;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(408)
						bool tmp27 = p_exact;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(408)
						::haxor::component::Transform tmp28 = re->m_transform->Search(tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(408)
						::haxor::component::Transform nt = tmp28;		HX_STACK_VAR(nt,"nt");
						HX_STACK_LINE(412)
						bool tmp29 = (nt == null());		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(412)
						if ((tmp29)){
							HX_STACK_LINE(412)
							continue;
						}
						HX_STACK_LINE(414)
						::haxor::core::Entity n = nt->m_entity;		HX_STACK_VAR(n,"n");
						HX_STACK_LINE(417)
						::String tmp30 = src_target;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(417)
						::String _switch_3 = (tmp30);
						if (  ( _switch_3==HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"))){
							HX_STACK_LINE(420)
							::haxor::component::Transform tmp31 = n->m_transform;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(420)
							::haxor::component::animation::ClipTrack tmp32 = clip->Add(tmp31,HX_HCSTRING("localPosition","\x34","\x09","\xf5","\x43"));		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(420)
							::haxor::component::animation::ClipTrack position_track = tmp32;		HX_STACK_VAR(position_track,"position_track");
							HX_STACK_LINE(421)
							::haxor::component::Transform tmp33 = n->m_transform;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(421)
							::haxor::component::animation::ClipTrack tmp34 = clip->Add(tmp33,HX_HCSTRING("localRotation","\xc9","\xa5","\x80","\x81"));		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(421)
							::haxor::component::animation::ClipTrack rotation_track = tmp34;		HX_STACK_VAR(rotation_track,"rotation_track");
							HX_STACK_LINE(423)
							{
								HX_STACK_LINE(423)
								int _g5 = (int)0;		HX_STACK_VAR(_g5,"_g5");
								HX_STACK_LINE(423)
								int tmp35 = cch->keyframes->length;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(423)
								int _g4 = tmp35;		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(423)
								while((true)){
									HX_STACK_LINE(423)
									bool tmp36 = (_g5 < _g4);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(423)
									bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(423)
									if ((tmp37)){
										HX_STACK_LINE(423)
										break;
									}
									HX_STACK_LINE(423)
									int tmp38 = (_g5)++;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(423)
									int k = tmp38;		HX_STACK_VAR(k,"k");
									HX_STACK_LINE(425)
									::haxor::io::file::ColladaAnimationKeyFrame tmp39 = cch->keyframes->__get(k).StaticCast< ::haxor::io::file::ColladaAnimationKeyFrame >();		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(425)
									::haxor::io::file::ColladaAnimationKeyFrame kf = tmp39;		HX_STACK_VAR(kf,"kf");
									HX_STACK_LINE(426)
									Array< Float > tmp40 = kf->values;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(426)
									::haxor::math::Matrix4 tmp41 = ::haxor::math::Matrix4_obj::FromArray(tmp40,null());		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(426)
									::haxor::math::Matrix4 m = tmp41;		HX_STACK_VAR(m,"m");
									HX_STACK_LINE(427)
									Float tmp42 = kf->time;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(427)
									::haxor::math::Vector3 tmp43;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(427)
									{
										HX_STACK_LINE(427)
										::haxor::math::Vector4 tmp44;		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(427)
										{
											HX_STACK_LINE(427)
											::haxor::math::Vector4 p_result = null();		HX_STACK_VAR(p_result,"p_result");
											HX_STACK_LINE(427)
											bool tmp45 = (p_result == null());		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(427)
											::haxor::math::Vector4 tmp46;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(427)
											if ((tmp45)){
												HX_STACK_LINE(427)
												tmp46 = ::haxor::math::Vector4_obj::__new(null(),null(),null(),null());
											}
											else{
												HX_STACK_LINE(427)
												tmp46 = p_result;
											}
											HX_STACK_LINE(427)
											p_result = tmp46;
											HX_STACK_LINE(427)
											Float tmp47 = m->GetRowCol((int)0,(int)3);		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(427)
											Float tmp48 = m->GetRowCol((int)1,(int)3);		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(427)
											Float tmp49 = m->GetRowCol((int)2,(int)3);		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(427)
											Float tmp50 = m->GetRowCol((int)3,(int)3);		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(427)
											tmp44 = p_result->Set(tmp47,tmp48,tmp49,tmp50);
										}
										HX_STACK_LINE(427)
										::haxor::math::Vector4 _this = tmp44;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(427)
										tmp43 = ::haxor::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
									}
									HX_STACK_LINE(427)
									position_track->Add(tmp42,tmp43);
									HX_STACK_LINE(428)
									Float tmp44 = kf->time;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(428)
									::haxor::math::Matrix4 tmp45;		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(428)
									{
										HX_STACK_LINE(428)
										::haxor::context::DataContext tmp46 = ::haxor::context::EngineContext_obj::data;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(428)
										::haxor::context::DataContext _this = tmp46;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(428)
										Array< ::Dynamic > tmp47 = _this->m_m4;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(428)
										int tmp48 = (_this->m_nm4 + (int)1);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(428)
										int tmp49 = _this->m_m4->length;		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(428)
										int tmp50 = hx::Mod(tmp48,tmp49);		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(428)
										int tmp51 = _this->m_nq = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(428)
										tmp45 = tmp47->__get(tmp51).StaticCast< ::haxor::math::Matrix4 >();
									}
									HX_STACK_LINE(428)
									::haxor::math::Matrix4 tmp46 = m;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(428)
									::haxor::math::Matrix4 tmp47 = tmp45->SetMatrix4(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(428)
									::haxor::math::Matrix4 tmp48 = tmp47->ToRotation();		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(428)
									::haxor::math::Quaternion tmp49 = ::haxor::math::Quaternion_obj::FromMatrix4(tmp48,null());		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(428)
									rotation_track->Add(tmp44,tmp49);
								}
							}
						}
					}
				}
				HX_STACK_LINE(435)
				::haxor::component::animation::AnimationClip tmp15 = clip;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(435)
				a->Add(tmp15);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ColladaFile_obj,AddAnimations,(void))

::haxor::component::MeshRenderer ColladaFile_obj::CreateMeshRenderer( ::haxor::core::Entity e,::String msh,::haxor::io::file::ColladaPrimitive cp,::hx::Class t,::haxor::io::file::ColladaController cc){
	HX_STACK_FRAME("haxor.io.file.ColladaFile","CreateMeshRenderer",0xe09e0ae2,"haxor.io.file.ColladaFile.CreateMeshRenderer","haxor/io/file/ColladaFile.hx",441,0xa1888587)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(msh,"msh")
	HX_STACK_ARG(cp,"cp")
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(cc,"cc")
	HX_STACK_LINE(442)
	::hx::Class tmp = t;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(442)
	Dynamic tmp1 = e->AddComponent(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(442)
	::haxor::component::MeshRenderer r = ((::haxor::component::MeshRenderer)(tmp1));		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(444)
	::String tmp2 = (msh + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(444)
	int tmp3 = this->m_id;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(444)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(444)
	::String mid = tmp4;		HX_STACK_VAR(mid,"mid");
	HX_STACK_LINE(446)
	::String tmp5 = mid;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(446)
	Dynamic tmp6 = ::haxor::core::Asset_obj::Get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(446)
	::haxor::graphics::mesh::Mesh3 m = tmp6;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(448)
	bool tmp7 = (m != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(448)
	if ((tmp7)){
		HX_STACK_LINE(450)
		::haxor::graphics::mesh::Mesh3 tmp8 = m;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(450)
		r->set_mesh(tmp8);
		HX_STACK_LINE(451)
		::haxor::component::MeshRenderer tmp9 = r;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(451)
		return tmp9;
	}
	HX_STACK_LINE(454)
	Dynamic tmp8 = cp->GetTriangulatedVectorArray(HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1"),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(454)
	Array< ::Dynamic > mv = tmp8;		HX_STACK_VAR(mv,"mv");
	HX_STACK_LINE(455)
	Dynamic tmp9 = cp->GetTriangulatedVectorArray(HX_HCSTRING("normal","\x27","\x72","\x69","\x30"),null(),null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(455)
	Array< ::Dynamic > mn = tmp9;		HX_STACK_VAR(mn,"mn");
	HX_STACK_LINE(456)
	Dynamic tmp10 = cp->GetTriangulatedVectorArray(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),null(),null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(456)
	Array< ::Dynamic > mc = tmp10;		HX_STACK_VAR(mc,"mc");
	HX_STACK_LINE(457)
	Dynamic tmp11 = cp->GetTriangulatedVectorArray(HX_HCSTRING("texcoord","\x6e","\x97","\x05","\x98"),(int)0,null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(457)
	Array< ::Dynamic > muv0 = tmp11;		HX_STACK_VAR(muv0,"muv0");
	HX_STACK_LINE(458)
	Dynamic tmp12 = cp->GetTriangulatedVectorArray(HX_HCSTRING("texcoord","\x6e","\x97","\x05","\x98"),(int)1,null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(458)
	Array< ::Dynamic > muv1 = tmp12;		HX_STACK_VAR(muv1,"muv1");
	HX_STACK_LINE(459)
	Dynamic tmp13 = cp->GetTriangulatedVectorArray(HX_HCSTRING("texbinormal","\x15","\xf4","\x59","\x47"),null(),null());		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(459)
	Array< ::Dynamic > mbn = tmp13;		HX_STACK_VAR(mbn,"mbn");
	HX_STACK_LINE(460)
	Dynamic tmp14 = cp->GetTriangulatedVectorArray(HX_HCSTRING("textangent","\xbe","\xd9","\x6f","\x65"),null(),null());		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(460)
	Array< ::Dynamic > mtg = tmp14;		HX_STACK_VAR(mtg,"mtg");
	HX_STACK_LINE(462)
	::haxor::component::MeshRenderer tmp15 = r;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(462)
	bool tmp16 = ::Std_obj::is(tmp15,hx::ClassOf< ::haxor::component::SkinnedMeshRenderer >());		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(462)
	bool is_skinned = tmp16;		HX_STACK_VAR(is_skinned,"is_skinned");
	HX_STACK_LINE(464)
	bool tmp17 = is_skinned;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(464)
	::haxor::graphics::mesh::Mesh3 tmp18;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(464)
	if ((tmp17)){
		HX_STACK_LINE(464)
		tmp18 = ::haxor::graphics::mesh::SkinnedMesh3_obj::__new(null());
	}
	else{
		HX_STACK_LINE(464)
		tmp18 = ::haxor::graphics::mesh::Mesh3_obj::__new(null());
	}
	HX_STACK_LINE(464)
	m = tmp18;
	HX_STACK_LINE(465)
	::String tmp19 = mid;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(465)
	m->set_name(tmp19);
	HX_STACK_LINE(467)
	::String tmp20 = mid;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(467)
	::haxor::graphics::mesh::Mesh3 tmp21 = m;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(467)
	::haxor::core::Asset_obj::Add(tmp20,tmp21);
	HX_STACK_LINE(469)
	bool tmp22 = (mc->length > (int)0);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(469)
	if ((tmp22)){
		HX_STACK_LINE(469)
		Array< ::Dynamic > tmp23 = mc;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(469)
		m->set_color(tmp23);
	}
	HX_STACK_LINE(470)
	bool tmp23 = (muv0->length > (int)0);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(470)
	if ((tmp23)){
		HX_STACK_LINE(470)
		Array< ::Dynamic > tmp24 = muv0;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(470)
		m->set_uv0(tmp24);
	}
	HX_STACK_LINE(471)
	bool tmp24 = (muv1->length > (int)0);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(471)
	if ((tmp24)){
		HX_STACK_LINE(471)
		Array< ::Dynamic > tmp25 = muv1;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(471)
		m->set_uv1(tmp25);
	}
	HX_STACK_LINE(473)
	bool tmp25 = is_skinned;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(473)
	if ((tmp25)){
		HX_STACK_LINE(475)
		bool tmp26 = (cc != null());		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(475)
		if ((tmp26)){
			HX_STACK_LINE(477)
			cc->GenerateBonesAndWeights();
			HX_STACK_LINE(479)
			::haxor::graphics::mesh::SkinnedMesh3 skm = ((::haxor::graphics::mesh::SkinnedMesh3)(m));		HX_STACK_VAR(skm,"skm");
			HX_STACK_LINE(480)
			::haxor::io::file::ColladaPrimitive tmp27 = cp;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(480)
			Array< ::Dynamic > tmp28 = cc->GetTriangulatedWeights(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(480)
			Array< ::Dynamic > mvw = tmp28;		HX_STACK_VAR(mvw,"mvw");
			HX_STACK_LINE(481)
			::haxor::io::file::ColladaPrimitive tmp29 = cp;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(481)
			Array< ::Dynamic > tmp30 = cc->GetTriangulatedBones(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(481)
			Array< ::Dynamic > mbi = tmp30;		HX_STACK_VAR(mbi,"mbi");
			HX_STACK_LINE(482)
			Array< ::Dynamic > tmp31 = cc->GetBinds();		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(482)
			Array< ::Dynamic > mbm = tmp31;		HX_STACK_VAR(mbm,"mbm");
			HX_STACK_LINE(483)
			Array< ::Dynamic > tmp32 = mbm;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(483)
			skm->set_binds(tmp32);
			HX_STACK_LINE(484)
			Array< ::Dynamic > tmp33 = mvw;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(484)
			skm->set_weight(tmp33);
			HX_STACK_LINE(485)
			Array< ::Dynamic > tmp34 = mbi;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(485)
			skm->set_bone(tmp34);
			HX_STACK_LINE(486)
			::haxor::math::Matrix4 tmp35 = cc->GetBSM();		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(486)
			::haxor::math::Matrix4 bsm = tmp35;		HX_STACK_VAR(bsm,"bsm");
			HX_STACK_LINE(488)
			{
				HX_STACK_LINE(488)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(488)
				int _g = mv->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(488)
				while((true)){
					HX_STACK_LINE(488)
					bool tmp36 = (_g1 < _g);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(488)
					bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(488)
					if ((tmp37)){
						HX_STACK_LINE(488)
						break;
					}
					HX_STACK_LINE(488)
					int tmp38 = (_g1)++;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(488)
					int i = tmp38;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(488)
					::haxor::math::Vector3 tmp39;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(488)
					{
						HX_STACK_LINE(488)
						::haxor::math::Vector3 tmp40;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(488)
						{
							HX_STACK_LINE(488)
							::haxor::math::Vector3 tmp41 = mv->__get(i).StaticCast< ::haxor::math::Vector3 >();		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(488)
							::haxor::math::Vector3 _this = tmp41;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(488)
							tmp40 = ::haxor::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
						}
						HX_STACK_LINE(488)
						::haxor::math::Vector3 p_point = tmp40;		HX_STACK_VAR(p_point,"p_point");
						HX_STACK_LINE(488)
						Float tmp41 = (bsm->m00 * p_point->x);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(488)
						Float tmp42 = (bsm->m01 * p_point->y);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(488)
						Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(488)
						Float tmp44 = (bsm->m02 * p_point->z);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(488)
						Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(488)
						Float tmp46 = bsm->m03;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(488)
						Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(488)
						Float vx = tmp47;		HX_STACK_VAR(vx,"vx");
						HX_STACK_LINE(488)
						Float tmp48 = (bsm->m10 * p_point->x);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(488)
						Float tmp49 = (bsm->m11 * p_point->y);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(488)
						Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(488)
						Float tmp51 = (bsm->m12 * p_point->z);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(488)
						Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(488)
						Float tmp53 = bsm->m13;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(488)
						Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(488)
						Float vy = tmp54;		HX_STACK_VAR(vy,"vy");
						HX_STACK_LINE(488)
						Float tmp55 = (bsm->m20 * p_point->x);		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(488)
						Float tmp56 = (bsm->m21 * p_point->y);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(488)
						Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(488)
						Float tmp58 = (bsm->m22 * p_point->z);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(488)
						Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(488)
						Float tmp60 = bsm->m23;		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(488)
						Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(488)
						Float vz = tmp61;		HX_STACK_VAR(vz,"vz");
						HX_STACK_LINE(488)
						p_point->x = vx;
						HX_STACK_LINE(488)
						p_point->y = vy;
						HX_STACK_LINE(488)
						p_point->z = vz;
						HX_STACK_LINE(488)
						tmp39 = p_point;
					}
					HX_STACK_LINE(488)
					mv[i] = tmp39;
				}
			}
			HX_STACK_LINE(489)
			{
				HX_STACK_LINE(489)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(489)
				int _g = mn->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(489)
				while((true)){
					HX_STACK_LINE(489)
					bool tmp36 = (_g1 < _g);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(489)
					bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(489)
					if ((tmp37)){
						HX_STACK_LINE(489)
						break;
					}
					HX_STACK_LINE(489)
					int tmp38 = (_g1)++;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(489)
					int i = tmp38;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(489)
					::haxor::math::Vector3 tmp39;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(489)
					{
						HX_STACK_LINE(489)
						::haxor::math::Vector3 tmp40;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(489)
						{
							HX_STACK_LINE(489)
							::haxor::math::Vector3 tmp41 = mn->__get(i).StaticCast< ::haxor::math::Vector3 >();		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(489)
							::haxor::math::Vector3 _this = tmp41;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(489)
							tmp40 = ::haxor::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
						}
						HX_STACK_LINE(489)
						::haxor::math::Vector3 p_point = tmp40;		HX_STACK_VAR(p_point,"p_point");
						HX_STACK_LINE(489)
						Float tmp41 = (bsm->m00 * p_point->x);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(489)
						Float tmp42 = (bsm->m01 * p_point->y);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(489)
						Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(489)
						Float tmp44 = (bsm->m02 * p_point->z);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(489)
						Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(489)
						Float vx = tmp45;		HX_STACK_VAR(vx,"vx");
						HX_STACK_LINE(489)
						Float tmp46 = (bsm->m10 * p_point->x);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(489)
						Float tmp47 = (bsm->m11 * p_point->y);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(489)
						Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(489)
						Float tmp49 = (bsm->m12 * p_point->z);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(489)
						Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(489)
						Float vy = tmp50;		HX_STACK_VAR(vy,"vy");
						HX_STACK_LINE(489)
						Float tmp51 = (bsm->m20 * p_point->x);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(489)
						Float tmp52 = (bsm->m21 * p_point->y);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(489)
						Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(489)
						Float tmp54 = (bsm->m22 * p_point->z);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(489)
						Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(489)
						Float vz = tmp55;		HX_STACK_VAR(vz,"vz");
						HX_STACK_LINE(489)
						p_point->x = vx;
						HX_STACK_LINE(489)
						p_point->y = vy;
						HX_STACK_LINE(489)
						p_point->z = vz;
						HX_STACK_LINE(489)
						tmp39 = p_point;
					}
					HX_STACK_LINE(489)
					mn[i] = tmp39;
				}
			}
			HX_STACK_LINE(490)
			{
				HX_STACK_LINE(490)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(490)
				int _g = mbn->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(490)
				while((true)){
					HX_STACK_LINE(490)
					bool tmp36 = (_g1 < _g);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(490)
					bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(490)
					if ((tmp37)){
						HX_STACK_LINE(490)
						break;
					}
					HX_STACK_LINE(490)
					int tmp38 = (_g1)++;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(490)
					int i = tmp38;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(490)
					::haxor::math::Vector3 tmp39;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(490)
					{
						HX_STACK_LINE(490)
						::haxor::math::Vector3 tmp40;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(490)
						{
							HX_STACK_LINE(490)
							::haxor::math::Vector3 tmp41 = mbn->__get(i).StaticCast< ::haxor::math::Vector3 >();		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(490)
							::haxor::math::Vector3 _this = tmp41;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(490)
							tmp40 = ::haxor::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
						}
						HX_STACK_LINE(490)
						::haxor::math::Vector3 p_point = tmp40;		HX_STACK_VAR(p_point,"p_point");
						HX_STACK_LINE(490)
						Float tmp41 = (bsm->m00 * p_point->x);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(490)
						Float tmp42 = (bsm->m01 * p_point->y);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(490)
						Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(490)
						Float tmp44 = (bsm->m02 * p_point->z);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(490)
						Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(490)
						Float vx = tmp45;		HX_STACK_VAR(vx,"vx");
						HX_STACK_LINE(490)
						Float tmp46 = (bsm->m10 * p_point->x);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(490)
						Float tmp47 = (bsm->m11 * p_point->y);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(490)
						Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(490)
						Float tmp49 = (bsm->m12 * p_point->z);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(490)
						Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(490)
						Float vy = tmp50;		HX_STACK_VAR(vy,"vy");
						HX_STACK_LINE(490)
						Float tmp51 = (bsm->m20 * p_point->x);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(490)
						Float tmp52 = (bsm->m21 * p_point->y);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(490)
						Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(490)
						Float tmp54 = (bsm->m22 * p_point->z);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(490)
						Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(490)
						Float vz = tmp55;		HX_STACK_VAR(vz,"vz");
						HX_STACK_LINE(490)
						p_point->x = vx;
						HX_STACK_LINE(490)
						p_point->y = vy;
						HX_STACK_LINE(490)
						p_point->z = vz;
						HX_STACK_LINE(490)
						tmp39 = p_point;
					}
					HX_STACK_LINE(490)
					mbn[i] = tmp39;
				}
			}
			HX_STACK_LINE(491)
			{
				HX_STACK_LINE(491)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(491)
				int _g = mtg->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(491)
				while((true)){
					HX_STACK_LINE(491)
					bool tmp36 = (_g1 < _g);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(491)
					bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(491)
					if ((tmp37)){
						HX_STACK_LINE(491)
						break;
					}
					HX_STACK_LINE(491)
					int tmp38 = (_g1)++;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(491)
					int i = tmp38;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(491)
					::haxor::math::Vector3 tmp39;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(491)
					{
						HX_STACK_LINE(491)
						::haxor::math::Vector3 tmp40;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(491)
						{
							HX_STACK_LINE(491)
							::haxor::math::Vector3 tmp41 = mtg->__get(i).StaticCast< ::haxor::math::Vector3 >();		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(491)
							::haxor::math::Vector3 _this = tmp41;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(491)
							tmp40 = ::haxor::math::Vector3_obj::__new(_this->x,_this->y,_this->z);
						}
						HX_STACK_LINE(491)
						::haxor::math::Vector3 p_point = tmp40;		HX_STACK_VAR(p_point,"p_point");
						HX_STACK_LINE(491)
						Float tmp41 = (bsm->m00 * p_point->x);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(491)
						Float tmp42 = (bsm->m01 * p_point->y);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(491)
						Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(491)
						Float tmp44 = (bsm->m02 * p_point->z);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(491)
						Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(491)
						Float vx = tmp45;		HX_STACK_VAR(vx,"vx");
						HX_STACK_LINE(491)
						Float tmp46 = (bsm->m10 * p_point->x);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(491)
						Float tmp47 = (bsm->m11 * p_point->y);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(491)
						Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(491)
						Float tmp49 = (bsm->m12 * p_point->z);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(491)
						Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(491)
						Float vy = tmp50;		HX_STACK_VAR(vy,"vy");
						HX_STACK_LINE(491)
						Float tmp51 = (bsm->m20 * p_point->x);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(491)
						Float tmp52 = (bsm->m21 * p_point->y);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(491)
						Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(491)
						Float tmp54 = (bsm->m22 * p_point->z);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(491)
						Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(491)
						Float vz = tmp55;		HX_STACK_VAR(vz,"vz");
						HX_STACK_LINE(491)
						p_point->x = vx;
						HX_STACK_LINE(491)
						p_point->y = vy;
						HX_STACK_LINE(491)
						p_point->z = vz;
						HX_STACK_LINE(491)
						tmp39 = p_point;
					}
					HX_STACK_LINE(491)
					mtg[i] = tmp39;
				}
			}
		}
	}
	HX_STACK_LINE(495)
	bool tmp26 = (mv->length > (int)0);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(495)
	if ((tmp26)){
		HX_STACK_LINE(495)
		Array< ::Dynamic > tmp27 = mv;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(495)
		m->set_vertex(tmp27);
	}
	HX_STACK_LINE(496)
	bool tmp27 = (mn->length > (int)0);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(496)
	if ((tmp27)){
		HX_STACK_LINE(496)
		Array< ::Dynamic > tmp28 = mn;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(496)
		m->set_normal(tmp28);
	}
	HX_STACK_LINE(497)
	bool tmp28 = (mbn->length > (int)0);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(497)
	if ((tmp28)){
		HX_STACK_LINE(497)
		Array< ::Dynamic > tmp29 = mbn;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(497)
		m->set_binormal(tmp29);
	}
	HX_STACK_LINE(498)
	bool tmp29 = (mtg->length > (int)0);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(498)
	if ((tmp29)){
		HX_STACK_LINE(498)
		Array< ::Dynamic > tmp30 = mtg;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(498)
		m->set_tangent(tmp30);
	}
	HX_STACK_LINE(502)
	m->GenerateBounds();
	HX_STACK_LINE(503)
	::haxor::graphics::mesh::Mesh3 tmp30 = m;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(503)
	r->set_mesh(tmp30);
	HX_STACK_LINE(504)
	::haxor::component::MeshRenderer tmp31 = r;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(504)
	return tmp31;
}


HX_DEFINE_DYNAMIC_FUNC5(ColladaFile_obj,CreateMeshRenderer,return )

::haxor::io::file::ColladaLight ColladaFile_obj::FindLightById( ::String p_id){
	HX_STACK_FRAME("haxor.io.file.ColladaFile","FindLightById",0x8cc7c059,"haxor.io.file.ColladaFile.FindLightById","haxor/io/file/ColladaFile.hx",507,0xa1888587)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_id,"p_id")
	HX_STACK_LINE(507)
	{
		HX_STACK_LINE(507)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(507)
		Array< ::Dynamic > tmp = this->lights;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(507)
		int _g = tmp->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(507)
		while((true)){
			HX_STACK_LINE(507)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(507)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(507)
			if ((tmp2)){
				HX_STACK_LINE(507)
				break;
			}
			HX_STACK_LINE(507)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(507)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(507)
			Array< ::Dynamic > tmp4 = this->lights;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(507)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(507)
			::haxor::io::file::ColladaLight tmp6 = tmp4->__get(tmp5).StaticCast< ::haxor::io::file::ColladaLight >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(507)
			::String tmp7 = tmp6->id;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(507)
			::String tmp8 = p_id;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(507)
			bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(507)
			if ((tmp9)){
				HX_STACK_LINE(507)
				Array< ::Dynamic > tmp10 = this->lights;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(507)
				int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(507)
				::haxor::io::file::ColladaLight tmp12 = tmp10->__get(tmp11).StaticCast< ::haxor::io::file::ColladaLight >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(507)
				return tmp12;
			}
		}
	}
	HX_STACK_LINE(507)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ColladaFile_obj,FindLightById,return )

::haxor::io::file::ColladaGeometry ColladaFile_obj::FindGeometryById( ::String p_id){
	HX_STACK_FRAME("haxor.io.file.ColladaFile","FindGeometryById",0xe813db33,"haxor.io.file.ColladaFile.FindGeometryById","haxor/io/file/ColladaFile.hx",509,0xa1888587)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_id,"p_id")
	HX_STACK_LINE(509)
	{
		HX_STACK_LINE(509)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(509)
		Array< ::Dynamic > tmp = this->geometries;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(509)
		int _g = tmp->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(509)
		while((true)){
			HX_STACK_LINE(509)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(509)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(509)
			if ((tmp2)){
				HX_STACK_LINE(509)
				break;
			}
			HX_STACK_LINE(509)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(509)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(509)
			Array< ::Dynamic > tmp4 = this->geometries;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(509)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(509)
			::haxor::io::file::ColladaGeometry tmp6 = tmp4->__get(tmp5).StaticCast< ::haxor::io::file::ColladaGeometry >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(509)
			::String tmp7 = tmp6->id;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(509)
			::String tmp8 = p_id;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(509)
			bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(509)
			if ((tmp9)){
				HX_STACK_LINE(509)
				Array< ::Dynamic > tmp10 = this->geometries;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(509)
				int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(509)
				::haxor::io::file::ColladaGeometry tmp12 = tmp10->__get(tmp11).StaticCast< ::haxor::io::file::ColladaGeometry >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(509)
				return tmp12;
			}
		}
	}
	HX_STACK_LINE(509)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ColladaFile_obj,FindGeometryById,return )

::haxor::io::file::ColladaController ColladaFile_obj::FindControllerById( ::String p_id){
	HX_STACK_FRAME("haxor.io.file.ColladaFile","FindControllerById",0x0fb6ffdd,"haxor.io.file.ColladaFile.FindControllerById","haxor/io/file/ColladaFile.hx",511,0xa1888587)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_id,"p_id")
	HX_STACK_LINE(511)
	{
		HX_STACK_LINE(511)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(511)
		Array< ::Dynamic > tmp = this->controllers;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(511)
		int _g = tmp->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(511)
		while((true)){
			HX_STACK_LINE(511)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(511)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(511)
			if ((tmp2)){
				HX_STACK_LINE(511)
				break;
			}
			HX_STACK_LINE(511)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(511)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(511)
			Array< ::Dynamic > tmp4 = this->controllers;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(511)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(511)
			::haxor::io::file::ColladaController tmp6 = tmp4->__get(tmp5).StaticCast< ::haxor::io::file::ColladaController >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(511)
			::String tmp7 = tmp6->id;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(511)
			::String tmp8 = p_id;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(511)
			bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(511)
			if ((tmp9)){
				HX_STACK_LINE(511)
				Array< ::Dynamic > tmp10 = this->controllers;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(511)
				int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(511)
				::haxor::io::file::ColladaController tmp12 = tmp10->__get(tmp11).StaticCast< ::haxor::io::file::ColladaController >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(511)
				return tmp12;
			}
		}
	}
	HX_STACK_LINE(511)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ColladaFile_obj,FindControllerById,return )

::haxor::io::file::ColladaNode ColladaFile_obj::FindNodeById( ::String p_id){
	HX_STACK_FRAME("haxor.io.file.ColladaFile","FindNodeById",0x2743f703,"haxor.io.file.ColladaFile.FindNodeById","haxor/io/file/ColladaFile.hx",514,0xa1888587)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_id,"p_id")
	HX_STACK_LINE(515)
	Array< ::Dynamic > res = Array_obj< ::Dynamic >::__new().Add(null());		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(516)
	::haxor::io::file::ColladaVisualScene tmp = this->scene;		HX_STACK_VAR(tmp,"tmp");

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::String,p_id,Array< ::Dynamic >,res)
	int __ArgCount() const { return 1; }
	Void run(::haxor::io::file::ColladaNode it){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxor/io/file/ColladaFile.hx",517,0xa1888587)
		HX_STACK_ARG(it,"it")
		{
			HX_STACK_LINE(518)
			bool tmp1 = (it->id == p_id);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(518)
			if ((tmp1)){
				HX_STACK_LINE(518)
				res[(int)0] = it;
			}
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(516)
	tmp->Traverse( Dynamic(new _Function_1_1(p_id,res)));
	HX_STACK_LINE(520)
	::haxor::io::file::ColladaNode tmp1 = res->__get((int)0).StaticCast< ::haxor::io::file::ColladaNode >();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(520)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ColladaFile_obj,FindNodeById,return )

::haxor::io::file::ColladaMaterial ColladaFile_obj::FindMaterialById( ::String p_id){
	HX_STACK_FRAME("haxor.io.file.ColladaFile","FindMaterialById",0x6edcd3a8,"haxor.io.file.ColladaFile.FindMaterialById","haxor/io/file/ColladaFile.hx",524,0xa1888587)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p_id,"p_id")
	HX_STACK_LINE(525)
	{
		HX_STACK_LINE(525)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(525)
		Array< ::Dynamic > tmp = this->materials;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(525)
		int _g = tmp->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(525)
		while((true)){
			HX_STACK_LINE(525)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(525)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(525)
			if ((tmp2)){
				HX_STACK_LINE(525)
				break;
			}
			HX_STACK_LINE(525)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(525)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(527)
			Array< ::Dynamic > tmp4 = this->materials;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(527)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(527)
			::haxor::io::file::ColladaMaterial tmp6 = tmp4->__get(tmp5).StaticCast< ::haxor::io::file::ColladaMaterial >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(527)
			::String tmp7 = tmp6->id;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(527)
			::String tmp8 = p_id;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(527)
			bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(527)
			if ((tmp9)){
				HX_STACK_LINE(527)
				Array< ::Dynamic > tmp10 = this->materials;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(527)
				int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(527)
				::haxor::io::file::ColladaMaterial tmp12 = tmp10->__get(tmp11).StaticCast< ::haxor::io::file::ColladaMaterial >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(527)
				return tmp12;
			}
			else{
				HX_STACK_LINE(529)
				Array< ::Dynamic > tmp10 = this->materials;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(529)
				int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(529)
				::haxor::io::file::ColladaMaterial tmp12 = tmp10->__get(tmp11).StaticCast< ::haxor::io::file::ColladaMaterial >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(529)
				::String tmp13 = tmp12->name;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(529)
				::String tmp14 = p_id;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(529)
				bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(529)
				if ((tmp15)){
					HX_STACK_LINE(529)
					Array< ::Dynamic > tmp16 = this->materials;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(529)
					int tmp17 = i;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(529)
					::haxor::io::file::ColladaMaterial tmp18 = tmp16->__get(tmp17).StaticCast< ::haxor::io::file::ColladaMaterial >();		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(529)
					return tmp18;
				}
			}
		}
	}
	HX_STACK_LINE(531)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ColladaFile_obj,FindMaterialById,return )

Void ColladaFile_obj::Parse( ::Xml n){
{
		HX_STACK_FRAME("haxor.io.file.ColladaFile","Parse",0xf5b65c7d,"haxor.io.file.ColladaFile.Parse","haxor/io/file/ColladaFile.hx",536,0xa1888587)
		HX_STACK_THIS(this)
		HX_STACK_ARG(n,"n")
		HX_STACK_LINE(536)
		::String tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(536)
		{
			HX_STACK_LINE(536)
			int tmp1 = n->nodeType;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(536)
			int tmp2 = ::Xml_obj::Element;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(536)
			bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(536)
			if ((tmp3)){
				HX_STACK_LINE(536)
				::String tmp4 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + n->nodeType);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(536)
				HX_STACK_DO_THROW(tmp4);
			}
			HX_STACK_LINE(536)
			tmp = n->nodeName;
		}
		HX_STACK_LINE(536)
		::String _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(536)
		::String tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(536)
		::String _switch_4 = (tmp1);
		if (  ( _switch_4==HX_HCSTRING("COLLADA","\x52","\x71","\x31","\x6d"))){
			HX_STACK_LINE(539)
			::Xml tmp2 = n;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(539)
			::String tmp3 = this->_a(tmp2,HX_HCSTRING("xmlns","\xdc","\x31","\x74","\x60"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(539)
			this->xmlns = tmp3;
			HX_STACK_LINE(540)
			::Xml tmp4 = n;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(540)
			::String tmp5 = this->_a(tmp4,HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"),HX_HCSTRING("0.0","\x72","\x94","\x24","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(540)
			this->version = tmp5;
		}
		else if (  ( _switch_4==HX_HCSTRING("asset","\xf0","\x69","\x39","\x26"))){
			HX_STACK_LINE(543)
			::Xml tmp2 = n;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(543)
			Dynamic tmp3 = this->_p(tmp2,HX_HCSTRING("contributor.author.$text","\x21","\xe9","\xaf","\x10"),HX_HCSTRING("none","\xb8","\x12","\x0a","\x49"),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(543)
			::haxor::io::file::ColladaAssetData tmp4 = this->data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(543)
			tmp4->author = tmp3;
			HX_STACK_LINE(544)
			::Xml tmp5 = n;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(544)
			Dynamic tmp6 = this->_p(tmp5,HX_HCSTRING("contributor.authoring_tool.$text","\xf6","\xcb","\xe4","\x10"),HX_HCSTRING("none","\xb8","\x12","\x0a","\x49"),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(544)
			::haxor::io::file::ColladaAssetData tmp7 = this->data;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(544)
			tmp7->tool = tmp6;
			HX_STACK_LINE(545)
			::Xml tmp8 = n;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(545)
			Dynamic tmp9 = this->_p(tmp8,HX_HCSTRING("contributor.source_data.$text","\x5e","\xc0","\x08","\x49"),HX_HCSTRING("none","\xb8","\x12","\x0a","\x49"),null(),null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(545)
			::haxor::io::file::ColladaAssetData tmp10 = this->data;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(545)
			tmp10->source = tmp9;
			HX_STACK_LINE(546)
			::Xml tmp11 = n;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(546)
			Dynamic tmp12 = this->_p(tmp11,HX_HCSTRING("up_axis.$text","\xe8","\x31","\x4a","\xc4"),HX_HCSTRING("y_up","\xa1","\x4d","\x43","\x50"),null(),null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(546)
			Dynamic tmp13 = tmp12->__Field(HX_HCSTRING("toLowerCase","\x56","\x4c","\x64","\xb8"), hx::paccDynamic )();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(546)
			::haxor::io::file::ColladaAssetData tmp14 = this->data;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(546)
			tmp14->axis = tmp13;
			HX_STACK_LINE(547)
			::Xml tmp15 = n;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(547)
			Dynamic tmp16 = this->_p(tmp15,HX_HCSTRING("created.$text","\xcb","\x5b","\x25","\xc5"),HX_HCSTRING("00/00/00","\x60","\x89","\x5b","\x13"),null(),null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(547)
			::haxor::io::file::ColladaAssetData tmp17 = this->data;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(547)
			tmp17->creation = tmp16;
			HX_STACK_LINE(548)
			::Xml tmp18 = n;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(548)
			Dynamic tmp19 = this->_p(tmp18,HX_HCSTRING("modified.$text","\xec","\x3f","\x0e","\x0a"),HX_HCSTRING("00/00/00","\x60","\x89","\x5b","\x13"),null(),null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(548)
			::haxor::io::file::ColladaAssetData tmp20 = this->data;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(548)
			tmp20->modification = tmp19;
			HX_STACK_LINE(549)
			::Xml tmp21 = n;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(549)
			Dynamic tmp22 = this->_p(tmp21,HX_HCSTRING("unit.@name","\x21","\xb1","\x3d","\x5a"),HX_HCSTRING("none","\xb8","\x12","\x0a","\x49"),null(),null());		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(549)
			::haxor::io::file::ColladaAssetData tmp23 = this->data;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(549)
			tmp23->unitName = tmp22;
			HX_STACK_LINE(550)
			::Xml tmp24 = n;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(550)
			Dynamic tmp25 = this->_p(tmp24,HX_HCSTRING("unit.@meter","\xf3","\xe1","\x00","\x0b"),HX_HCSTRING("0.0","\x72","\x94","\x24","\x00"),null(),null());		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(550)
			Float tmp26 = ::Std_obj::parseFloat(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(550)
			::haxor::io::file::ColladaAssetData tmp27 = this->data;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(550)
			tmp27->unitValue = tmp26;
		}
		else if (  ( _switch_4==HX_HCSTRING("library_effects","\x3e","\x58","\xbc","\x3f"))){
		}
		else if (  ( _switch_4==HX_HCSTRING("library_materials","\x68","\x00","\x1d","\x45"))){
			HX_STACK_LINE(553)
			::Xml tmp2 = n;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(553)
			this->ParseMaterialLibrary(tmp2);
		}
		else if (  ( _switch_4==HX_HCSTRING("scene","\x4c","\xd9","\xd1","\x78"))){
		}
		else if (  ( _switch_4==HX_HCSTRING("library_geometries","\x94","\xa9","\xf8","\x5a"))){
			HX_STACK_LINE(556)
			::Xml tmp2 = n;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(556)
			this->ParseGeometryLibrary(tmp2);
		}
		else if (  ( _switch_4==HX_HCSTRING("library_controllers","\xd3","\xd1","\xdc","\x25"))){
			HX_STACK_LINE(557)
			::Xml tmp2 = n;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(557)
			this->ParseControllerLibrary(tmp2);
		}
		else if (  ( _switch_4==HX_HCSTRING("library_images","\xbc","\xe0","\xff","\x8c"))){
			HX_STACK_LINE(558)
			::Xml tmp2 = n;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(558)
			this->ParseImageLibrary(tmp2);
		}
		else if (  ( _switch_4==HX_HCSTRING("library_visual_scenes","\x02","\x49","\x63","\xae"))){
			HX_STACK_LINE(559)
			::Xml tmp2 = n;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(559)
			this->ParseSceneLibrary(tmp2);
		}
		else if (  ( _switch_4==HX_HCSTRING("library_animations","\xf3","\x16","\x2c","\x4d"))){
			HX_STACK_LINE(560)
			::Xml tmp2 = n;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(560)
			this->ParseAnimationLibrary(tmp2);
		}
		else if (  ( _switch_4==HX_HCSTRING("library_lights","\xe1","\xba","\x6f","\x76"))){
			HX_STACK_LINE(561)
			::Xml tmp2 = n;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(561)
			this->ParseLightLibrary(tmp2);
		}
	}
return null();
}


Void ColladaFile_obj::ParseLightLibrary( ::Xml n){
{
		HX_STACK_FRAME("haxor.io.file.ColladaFile","ParseLightLibrary",0x528214e2,"haxor.io.file.ColladaFile.ParseLightLibrary","haxor/io/file/ColladaFile.hx",567,0xa1888587)
		HX_STACK_THIS(this)
		HX_STACK_ARG(n,"n")
		HX_STACK_LINE(568)
		Dynamic tmp = n->elementsNamed(HX_HCSTRING("light","\xd6","\x90","\xfc","\x74"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(568)
		Dynamic it = tmp;		HX_STACK_VAR(it,"it");
		HX_STACK_LINE(569)
		::haxor::io::file::ColladaLight l;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(570)
		Dynamic lit;		HX_STACK_VAR(lit,"lit");
		HX_STACK_LINE(571)
		::Xml ln;		HX_STACK_VAR(ln,"ln");
		HX_STACK_LINE(572)
		while((true)){
			HX_STACK_LINE(572)
			bool tmp1 = it->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(572)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(572)
			if ((tmp2)){
				HX_STACK_LINE(572)
				break;
			}
			HX_STACK_LINE(574)
			::Xml tmp3 = it->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(574)
			n = tmp3;
			HX_STACK_LINE(575)
			::haxor::io::file::ColladaLight tmp4 = ::haxor::io::file::ColladaLight_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(575)
			l = tmp4;
			HX_STACK_LINE(576)
			::Xml tmp5 = n;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(576)
			Array< ::Dynamic > tmp6 = this->lights;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(576)
			int tmp7 = tmp6->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(576)
			::String tmp8 = (HX_HCSTRING("light","\xd6","\x90","\xfc","\x74") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(576)
			Dynamic tmp9 = this->_p(tmp5,HX_HCSTRING("@id","\x1b","\xec","\x30","\x00"),tmp8,null(),null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(576)
			l->id = tmp9;
			HX_STACK_LINE(577)
			::Xml tmp10 = n;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(577)
			::String tmp11 = l->id;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(577)
			Dynamic tmp12 = this->_p(tmp10,HX_HCSTRING("@name","\x8b","\x92","\xa4","\x22"),tmp11,null(),null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(577)
			l->name = tmp12;
			HX_STACK_LINE(579)
			Array< ::Dynamic > tmp13 = this->lights;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(579)
			::haxor::io::file::ColladaLight tmp14 = l;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(579)
			tmp13->push(tmp14);
			HX_STACK_LINE(581)
			Dynamic tmp15 = n->elementsNamed(HX_HCSTRING("technique_common","\x3a","\x6f","\x8e","\xd3"));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(581)
			lit = tmp15;
			HX_STACK_LINE(582)
			bool tmp16 = lit->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic )();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(582)
			bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(582)
			if ((tmp17)){
				HX_STACK_LINE(582)
				continue;
			}
			HX_STACK_LINE(582)
			::Xml tmp18 = lit->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(582)
			Dynamic tmp19 = tmp18->elements();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(582)
			lit = tmp19;
			HX_STACK_LINE(583)
			bool tmp20 = lit->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic )();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(583)
			bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(583)
			if ((tmp21)){
				HX_STACK_LINE(583)
				continue;
			}
			HX_STACK_LINE(583)
			::Xml tmp22 = lit->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(583)
			ln = tmp22;
			HX_STACK_LINE(585)
			::String tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(585)
			{
				HX_STACK_LINE(585)
				int tmp24 = ln->nodeType;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(585)
				int tmp25 = ::Xml_obj::Element;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(585)
				bool tmp26 = (tmp24 != tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(585)
				if ((tmp26)){
					HX_STACK_LINE(585)
					::String tmp27 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + ln->nodeType);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(585)
					HX_STACK_DO_THROW(tmp27);
				}
				HX_STACK_LINE(585)
				tmp23 = ln->nodeName;
			}
			HX_STACK_LINE(585)
			::String tmp24 = tmp23.toLowerCase();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(585)
			l->type = tmp24;
			HX_STACK_LINE(587)
			Array< Float > tmp25 = Array_obj< Float >::__new().Add((int)1).Add((int)1).Add((int)1).Add((int)1);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(587)
			Array< Float > ca = tmp25;		HX_STACK_VAR(ca,"ca");
			HX_STACK_LINE(588)
			{
				HX_STACK_LINE(588)
				::String _g = l->type;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(588)
				::String tmp26 = _g;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(588)
				::String _switch_5 = (tmp26);
				if (  ( _switch_5==HX_HCSTRING("point","\x50","\xb4","\x8f","\xc6"))){
					HX_STACK_LINE(590)
					::Xml tmp27 = ln;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(590)
					Dynamic tmp28 = this->_p(tmp27,HX_HCSTRING("color.$text","\x86","\x65","\x65","\xf1"),HX_HCSTRING("","\x00","\x00","\x00","\x00"),null(),null());		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(590)
					Array< Float > tmp29 = this->_f32a(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(590)
					ca = tmp29;
				}
				else if (  ( _switch_5==HX_HCSTRING("ambient","\x18","\x98","\x81","\x09"))){
					HX_STACK_LINE(591)
					::Xml tmp27 = ln;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(591)
					Dynamic tmp28 = this->_p(tmp27,HX_HCSTRING("color.$text","\x86","\x65","\x65","\xf1"),HX_HCSTRING("","\x00","\x00","\x00","\x00"),null(),null());		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(591)
					Array< Float > tmp29 = this->_f32a(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(591)
					ca = tmp29;
				}
				else if (  ( _switch_5==HX_HCSTRING("directional","\xea","\x04","\xcd","\xea"))){
					HX_STACK_LINE(592)
					::Xml tmp27 = ln;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(592)
					Dynamic tmp28 = this->_p(tmp27,HX_HCSTRING("color.$text","\x86","\x65","\x65","\xf1"),HX_HCSTRING("","\x00","\x00","\x00","\x00"),null(),null());		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(592)
					Array< Float > tmp29 = this->_f32a(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(592)
					ca = tmp29;
				}
			}
			HX_STACK_LINE(595)
			Float tmp26 = ca->__get((int)0);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(595)
			Float tmp27 = ca->__get((int)1);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(595)
			Float tmp28 = ca->__get((int)2);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(595)
			bool tmp29 = (ca->length >= (int)4);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(595)
			Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(595)
			if ((tmp29)){
				HX_STACK_LINE(595)
				tmp30 = ca->__get((int)3);
			}
			else{
				HX_STACK_LINE(595)
				tmp30 = ((Float)1.0);
			}
			HX_STACK_LINE(595)
			l->color->Set(tmp26,tmp27,tmp28,tmp30);
			HX_STACK_LINE(597)
			Dynamic tmp31 = n->elementsNamed(HX_HCSTRING("extra","\x90","\x9a","\x22","\x77"));		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(597)
			lit = tmp31;
			HX_STACK_LINE(598)
			bool tmp32 = lit->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic )();		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(598)
			bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(598)
			if ((tmp33)){
				HX_STACK_LINE(598)
				continue;
			}
			HX_STACK_LINE(598)
			::Xml tmp34 = lit->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(598)
			Dynamic tmp35 = tmp34->elementsNamed(HX_HCSTRING("technique","\x90","\x69","\x06","\x6c"));		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(598)
			lit = tmp35;
			HX_STACK_LINE(599)
			bool tmp36 = lit->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic )();		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(599)
			bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(599)
			if ((tmp37)){
				HX_STACK_LINE(599)
				continue;
			}
			HX_STACK_LINE(599)
			::Xml tmp38 = lit->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(599)
			Dynamic tmp39 = tmp38->elementsNamed(HX_HCSTRING("max_light","\xbb","\x75","\xda","\x6b"));		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(599)
			lit = tmp39;
			HX_STACK_LINE(600)
			bool tmp40 = lit->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic )();		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(600)
			bool tmp41 = !(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(600)
			if ((tmp41)){
				HX_STACK_LINE(600)
				continue;
			}
			HX_STACK_LINE(600)
			::Xml tmp42 = lit->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(600)
			ln = tmp42;
			HX_STACK_LINE(602)
			{
				HX_STACK_LINE(602)
				::String _g = l->type;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(602)
				::String tmp43 = _g;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(602)
				::String _switch_6 = (tmp43);
				if (  ( _switch_6==HX_HCSTRING("point","\x50","\xb4","\x8f","\xc6"))){
					HX_STACK_LINE(605)
					::Xml tmp44 = ln;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(605)
					Dynamic tmp45 = this->_p(tmp44,HX_HCSTRING("decay_radius.$text","\x1a","\xb5","\x31","\x36"),HX_HCSTRING("1.0","\xb3","\x56","\x25","\x00"),null(),null());		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(605)
					Float tmp46 = ::Std_obj::parseFloat(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(605)
					l->radius = tmp46;
					HX_STACK_LINE(606)
					::Xml tmp47 = ln;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(606)
					Dynamic tmp48 = this->_p(tmp47,HX_HCSTRING("multiplier.$text","\x24","\x46","\x62","\x21"),HX_HCSTRING("1.0","\xb3","\x56","\x25","\x00"),null(),null());		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(606)
					Float tmp49 = ::Std_obj::parseFloat(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(606)
					l->intensity = tmp49;
					HX_STACK_LINE(607)
					::Xml tmp50 = ln;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(607)
					Dynamic tmp51 = this->_p(tmp50,HX_HCSTRING("decay_type.$text","\x42","\x82","\xc5","\xe2"),HX_HCSTRING("1.0","\xb3","\x56","\x25","\x00"),null(),null());		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(607)
					Dynamic tmp52 = ::Std_obj::parseInt(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(607)
					int atten_type = tmp52;		HX_STACK_VAR(atten_type,"atten_type");
					HX_STACK_LINE(608)
					bool tmp53 = (atten_type == (int)0);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(608)
					Float tmp54;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(608)
					if ((tmp53)){
						HX_STACK_LINE(608)
						tmp54 = ((Float)0.0);
					}
					else{
						HX_STACK_LINE(608)
						bool tmp55 = (atten_type == (int)1);		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(608)
						if ((tmp55)){
							HX_STACK_LINE(608)
							tmp54 = ((Float)1.0);
						}
						else{
							HX_STACK_LINE(608)
							tmp54 = ((Float)2.0);
						}
					}
					HX_STACK_LINE(608)
					l->atten = tmp54;
				}
				else if (  ( _switch_6==HX_HCSTRING("ambient","\x18","\x98","\x81","\x09"))){
				}
				else if (  ( _switch_6==HX_HCSTRING("directional","\xea","\x04","\xcd","\xea"))){
					HX_STACK_LINE(612)
					::Xml tmp44 = ln;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(612)
					Dynamic tmp45 = this->_p(tmp44,HX_HCSTRING("multiplier.$text","\x24","\x46","\x62","\x21"),HX_HCSTRING("1.0","\xb3","\x56","\x25","\x00"),null(),null());		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(612)
					Float tmp46 = ::Std_obj::parseFloat(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(612)
					l->intensity = tmp46;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ColladaFile_obj,ParseLightLibrary,(void))

Void ColladaFile_obj::ParseAnimationLibrary( ::Xml n){
{
		HX_STACK_FRAME("haxor.io.file.ColladaFile","ParseAnimationLibrary",0x3998caf4,"haxor.io.file.ColladaFile.ParseAnimationLibrary","haxor/io/file/ColladaFile.hx",620,0xa1888587)
		HX_STACK_THIS(this)
		HX_STACK_ARG(n,"n")
		HX_STACK_LINE(621)
		Dynamic tmp = n->elementsNamed(HX_HCSTRING("animation","\x04","\xef","\x34","\x4b"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(621)
		Dynamic it = tmp;		HX_STACK_VAR(it,"it");
		HX_STACK_LINE(622)
		int anim_id = (int)0;		HX_STACK_VAR(anim_id,"anim_id");
		HX_STACK_LINE(623)
		while((true)){
			HX_STACK_LINE(623)
			bool tmp1 = it->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(623)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(623)
			if ((tmp2)){
				HX_STACK_LINE(623)
				break;
			}
			HX_STACK_LINE(625)
			::Xml tmp3 = it->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(625)
			n = tmp3;
			HX_STACK_LINE(626)
			Dynamic tmp4 = n->elementsNamed(HX_HCSTRING("animation","\x04","\xef","\x34","\x4b"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(626)
			bool tmp5 = tmp4->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic )();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(626)
			if ((tmp5)){
				HX_STACK_LINE(626)
				Dynamic tmp6 = n->elementsNamed(HX_HCSTRING("animation","\x04","\xef","\x34","\x4b"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(626)
				::Xml tmp7 = tmp6->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(626)
				n = tmp7;
			}
			HX_STACK_LINE(628)
			::haxor::io::file::ColladaAnimation tmp6 = ::haxor::io::file::ColladaAnimation_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(628)
			::haxor::io::file::ColladaAnimation ca = tmp6;		HX_STACK_VAR(ca,"ca");
			HX_STACK_LINE(630)
			::Xml tmp7 = n;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(630)
			::String tmp8 = this->_a(tmp7,HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(630)
			ca->id = tmp8;
			HX_STACK_LINE(631)
			bool tmp9 = (ca->id == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(631)
			::String tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(631)
			if ((tmp9)){
				HX_STACK_LINE(631)
				int tmp11 = (anim_id)++;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(631)
				tmp10 = (HX_HCSTRING("Clip","\xf0","\x9a","\x9b","\x2c") + tmp11);
			}
			else{
				HX_STACK_LINE(631)
				tmp10 = ca->id;
			}
			HX_STACK_LINE(631)
			ca->id = tmp10;
			HX_STACK_LINE(632)
			::Xml tmp11 = n;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(632)
			::String tmp12 = ca->id;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(632)
			::String tmp13 = this->_a(tmp11,HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(632)
			ca->name = tmp13;
			HX_STACK_LINE(634)
			Dynamic tmp14 = n->elementsNamed(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(634)
			Dynamic source_iterator = tmp14;		HX_STACK_VAR(source_iterator,"source_iterator");
			HX_STACK_LINE(635)
			Dynamic tmp15 = n->elementsNamed(HX_HCSTRING("sampler","\x08","\xc5","\xc9","\x83"));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(635)
			Dynamic sampler_iterator = tmp15;		HX_STACK_VAR(sampler_iterator,"sampler_iterator");
			HX_STACK_LINE(636)
			Array< ::Dynamic > tmp16 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(636)
			Array< ::Dynamic > source_list = tmp16;		HX_STACK_VAR(source_list,"source_list");
			HX_STACK_LINE(637)
			Array< ::Dynamic > tmp17 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(637)
			Array< ::Dynamic > sampler_list = tmp17;		HX_STACK_VAR(sampler_list,"sampler_list");
			HX_STACK_LINE(639)
			while((true)){
				HX_STACK_LINE(639)
				bool tmp18 = source_iterator->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic )();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(639)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(639)
				if ((tmp19)){
					HX_STACK_LINE(639)
					break;
				}
				HX_STACK_LINE(639)
				::Xml tmp20 = source_iterator->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(639)
				source_list->push(tmp20);
			}
			HX_STACK_LINE(640)
			while((true)){
				HX_STACK_LINE(640)
				bool tmp18 = sampler_iterator->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic )();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(640)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(640)
				if ((tmp19)){
					HX_STACK_LINE(640)
					break;
				}
				HX_STACK_LINE(640)
				::Xml tmp20 = sampler_iterator->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(640)
				sampler_list->push(tmp20);
			}
			HX_STACK_LINE(642)
			Dynamic tmp18 = n->elementsNamed(HX_HCSTRING("channel","\xc3","\x00","\xd2","\xcc"));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(642)
			Dynamic channel_list = tmp18;		HX_STACK_VAR(channel_list,"channel_list");
			HX_STACK_LINE(645)
			while((true)){
				HX_STACK_LINE(645)
				bool tmp19 = channel_list->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic )();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(645)
				bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(645)
				if ((tmp20)){
					HX_STACK_LINE(645)
					break;
				}
				HX_STACK_LINE(647)
				::Xml tmp21 = channel_list->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(647)
				::Xml chn = tmp21;		HX_STACK_VAR(chn,"chn");
				HX_STACK_LINE(648)
				::haxor::io::file::ColladaAnimationChannel tmp22 = ::haxor::io::file::ColladaAnimationChannel_obj::__new();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(648)
				::haxor::io::file::ColladaAnimationChannel cch = tmp22;		HX_STACK_VAR(cch,"cch");
				HX_STACK_LINE(649)
				::Xml tmp23 = chn;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(649)
				::String tmp24 = this->_a(tmp23,HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(649)
				::String tmp25 = tmp24.substr((int)1,null());		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(649)
				cch->source = tmp25;
				HX_STACK_LINE(650)
				::Xml tmp26 = chn;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(650)
				::String tmp27 = this->_a(tmp26,HX_HCSTRING("target","\x51","\xf3","\xec","\x86"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(650)
				cch->target = tmp27;
				HX_STACK_LINE(652)
				{
					HX_STACK_LINE(652)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(652)
					int _g = sampler_list->length;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(652)
					while((true)){
						HX_STACK_LINE(652)
						bool tmp28 = (_g1 < _g);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(652)
						bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(652)
						if ((tmp29)){
							HX_STACK_LINE(652)
							break;
						}
						HX_STACK_LINE(652)
						int tmp30 = (_g1)++;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(652)
						int i = tmp30;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(654)
						::Xml tmp31 = sampler_list->__get(i).StaticCast< ::Xml >();		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(654)
						::String tmp32 = this->_a(tmp31,HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(654)
						::String sampler_id = tmp32;		HX_STACK_VAR(sampler_id,"sampler_id");
						HX_STACK_LINE(655)
						bool tmp33 = (sampler_id != cch->source);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(655)
						if ((tmp33)){
							HX_STACK_LINE(655)
							continue;
						}
						HX_STACK_LINE(656)
						::Xml tmp34 = sampler_list->__get(i).StaticCast< ::Xml >();		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(656)
						Dynamic tmp35 = tmp34->elementsNamed(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"));		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(656)
						Dynamic input_iterator = tmp35;		HX_STACK_VAR(input_iterator,"input_iterator");
						HX_STACK_LINE(657)
						::String keyframe_time_source = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(keyframe_time_source,"keyframe_time_source");
						HX_STACK_LINE(658)
						::String keyframe_value_source = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(keyframe_value_source,"keyframe_value_source");
						HX_STACK_LINE(660)
						while((true)){
							HX_STACK_LINE(660)
							bool tmp36 = input_iterator->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic )();		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(660)
							bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(660)
							if ((tmp37)){
								HX_STACK_LINE(660)
								break;
							}
							HX_STACK_LINE(662)
							::Xml tmp38 = input_iterator->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(662)
							::Xml chsi = tmp38;		HX_STACK_VAR(chsi,"chsi");
							HX_STACK_LINE(663)
							{
								HX_STACK_LINE(663)
								::Xml tmp39 = chsi;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(663)
								::String tmp40 = this->_a(tmp39,HX_HCSTRING("semantic","\x06","\x91","\x73","\xd1"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(663)
								::String tmp41 = tmp40.toLowerCase();		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(663)
								::String _g2 = tmp41;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(663)
								::String tmp42 = _g2;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(663)
								::String _switch_7 = (tmp42);
								if (  ( _switch_7==HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"))){
									HX_STACK_LINE(665)
									::Xml tmp43 = chsi;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(665)
									::String tmp44 = this->_a(tmp43,HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(665)
									::String tmp45 = tmp44.substr((int)1,null());		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(665)
									keyframe_time_source = tmp45;
								}
								else if (  ( _switch_7==HX_HCSTRING("output","\x01","\x0f","\x81","\x0c"))){
									HX_STACK_LINE(666)
									::Xml tmp43 = chsi;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(666)
									::String tmp44 = this->_a(tmp43,HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(666)
									::String tmp45 = tmp44.substr((int)1,null());		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(666)
									keyframe_value_source = tmp45;
								}
							}
						}
						HX_STACK_LINE(670)
						bool tmp36 = (keyframe_time_source == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(670)
						if ((tmp36)){
							HX_STACK_LINE(670)
							continue;
						}
						HX_STACK_LINE(671)
						bool tmp37 = (keyframe_value_source == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(671)
						if ((tmp37)){
							HX_STACK_LINE(671)
							continue;
						}
						HX_STACK_LINE(673)
						::Xml kf_time_node = null();		HX_STACK_VAR(kf_time_node,"kf_time_node");
						HX_STACK_LINE(674)
						::Xml kf_value_node = null();		HX_STACK_VAR(kf_value_node,"kf_value_node");
						HX_STACK_LINE(676)
						{
							HX_STACK_LINE(676)
							int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(676)
							int _g2 = source_list->length;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(676)
							while((true)){
								HX_STACK_LINE(676)
								bool tmp38 = (_g3 < _g2);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(676)
								bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(676)
								if ((tmp39)){
									HX_STACK_LINE(676)
									break;
								}
								HX_STACK_LINE(676)
								int tmp40 = (_g3)++;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(676)
								int j = tmp40;		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(678)
								::Xml tmp41 = source_list->__get(j).StaticCast< ::Xml >();		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(678)
								::Xml sn = tmp41;		HX_STACK_VAR(sn,"sn");
								HX_STACK_LINE(679)
								::Xml tmp42 = sn;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(679)
								::String tmp43 = this->_a(tmp42,HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(679)
								::String tmp44 = keyframe_time_source;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(679)
								bool tmp45 = (tmp43 == tmp44);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(679)
								if ((tmp45)){
									HX_STACK_LINE(679)
									kf_time_node = sn;
								}
								HX_STACK_LINE(680)
								::Xml tmp46 = sn;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(680)
								::String tmp47 = this->_a(tmp46,HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(680)
								::String tmp48 = keyframe_value_source;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(680)
								bool tmp49 = (tmp47 == tmp48);		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(680)
								if ((tmp49)){
									HX_STACK_LINE(680)
									kf_value_node = sn;
								}
							}
						}
						HX_STACK_LINE(683)
						bool tmp38 = (kf_time_node == null());		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(683)
						if ((tmp38)){
							HX_STACK_LINE(683)
							continue;
						}
						HX_STACK_LINE(684)
						bool tmp39 = (kf_value_node == null());		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(684)
						if ((tmp39)){
							HX_STACK_LINE(684)
							continue;
						}
						HX_STACK_LINE(686)
						::Xml tmp40 = kf_time_node;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(686)
						Dynamic tmp41 = this->_p(tmp40,HX_HCSTRING("float_array.$text","\xd9","\xdb","\x04","\xb8"),HX_HCSTRING("","\x00","\x00","\x00","\x00"),null(),null());		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(686)
						Array< Float > tmp42 = this->_f32a(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(686)
						Array< Float > kf_time_buffer = tmp42;		HX_STACK_VAR(kf_time_buffer,"kf_time_buffer");
						HX_STACK_LINE(687)
						::Xml tmp43 = kf_value_node;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(687)
						Dynamic tmp44 = this->_p(tmp43,HX_HCSTRING("float_array.$text","\xd9","\xdb","\x04","\xb8"),HX_HCSTRING("","\x00","\x00","\x00","\x00"),null(),null());		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(687)
						Array< Float > tmp45 = this->_f32a(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(687)
						Array< Float > kf_value_buffer = tmp45;		HX_STACK_VAR(kf_value_buffer,"kf_value_buffer");
						HX_STACK_LINE(688)
						::Xml tmp46 = kf_value_node;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(688)
						Dynamic tmp47 = this->_p(tmp46,HX_HCSTRING("technique_common.accessor.@stride","\x66","\x24","\x91","\xb2"),HX_HCSTRING("0","\x30","\x00","\x00","\x00"),null(),null());		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(688)
						Dynamic tmp48 = ::Std_obj::parseInt(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(688)
						int kf_value_stride = tmp48;		HX_STACK_VAR(kf_value_stride,"kf_value_stride");
						HX_STACK_LINE(690)
						{
							HX_STACK_LINE(690)
							int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(690)
							int _g2 = kf_time_buffer->length;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(690)
							while((true)){
								HX_STACK_LINE(690)
								bool tmp49 = (_g3 < _g2);		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(690)
								bool tmp50 = !(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(690)
								if ((tmp50)){
									HX_STACK_LINE(690)
									break;
								}
								HX_STACK_LINE(690)
								int tmp51 = (_g3)++;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(690)
								int j = tmp51;		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(692)
								::haxor::io::file::ColladaAnimationKeyFrame tmp52 = ::haxor::io::file::ColladaAnimationKeyFrame_obj::__new();		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(692)
								::haxor::io::file::ColladaAnimationKeyFrame kf = tmp52;		HX_STACK_VAR(kf,"kf");
								HX_STACK_LINE(693)
								Float tmp53 = kf_time_buffer->__get(j);		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(693)
								kf->time = tmp53;
								HX_STACK_LINE(694)
								{
									HX_STACK_LINE(694)
									int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
									HX_STACK_LINE(694)
									while((true)){
										HX_STACK_LINE(694)
										bool tmp54 = (_g4 < kf_value_stride);		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(694)
										bool tmp55 = !(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(694)
										if ((tmp55)){
											HX_STACK_LINE(694)
											break;
										}
										HX_STACK_LINE(694)
										int tmp56 = (_g4)++;		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(694)
										int k = tmp56;		HX_STACK_VAR(k,"k");
										HX_STACK_LINE(696)
										Dynamic tmp57 = kf_value_buffer->shift();		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(696)
										kf->values->push(tmp57);
									}
								}
								HX_STACK_LINE(698)
								::haxor::io::file::ColladaAnimationKeyFrame tmp54 = kf;		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(698)
								cch->keyframes->push(tmp54);
							}
						}
					}
				}
				HX_STACK_LINE(701)
				::haxor::io::file::ColladaAnimationChannel tmp28 = cch;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(701)
				ca->channels->push(tmp28);
			}
			HX_STACK_LINE(703)
			Array< ::Dynamic > tmp19 = this->animations;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(703)
			::haxor::io::file::ColladaAnimation tmp20 = ca;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(703)
			tmp19->push(tmp20);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ColladaFile_obj,ParseAnimationLibrary,(void))

Void ColladaFile_obj::ParseMaterialLibrary( ::Xml n){
{
		HX_STACK_FRAME("haxor.io.file.ColladaFile","ParseMaterialLibrary",0xf4892517,"haxor.io.file.ColladaFile.ParseMaterialLibrary","haxor/io/file/ColladaFile.hx",709,0xa1888587)
		HX_STACK_THIS(this)
		HX_STACK_ARG(n,"n")
		HX_STACK_LINE(710)
		Dynamic tmp = n->elements();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(710)
		Dynamic it = tmp;		HX_STACK_VAR(it,"it");
		HX_STACK_LINE(711)
		while((true)){
			HX_STACK_LINE(711)
			bool tmp1 = it->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(711)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(711)
			if ((tmp2)){
				HX_STACK_LINE(711)
				break;
			}
			HX_STACK_LINE(713)
			::Xml tmp3 = it->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(713)
			n = tmp3;
			HX_STACK_LINE(714)
			{
				HX_STACK_LINE(714)
				::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(714)
				{
					HX_STACK_LINE(714)
					int tmp5 = n->nodeType;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(714)
					int tmp6 = ::Xml_obj::Element;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(714)
					bool tmp7 = (tmp5 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(714)
					if ((tmp7)){
						HX_STACK_LINE(714)
						::String tmp8 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + n->nodeType);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(714)
						HX_STACK_DO_THROW(tmp8);
					}
					HX_STACK_LINE(714)
					tmp4 = n->nodeName;
				}
				HX_STACK_LINE(714)
				::String _g = tmp4;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(714)
				::String tmp5 = _g;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(714)
				::String _switch_8 = (tmp5);
				if (  ( _switch_8==HX_HCSTRING("material","\xa7","\x5c","\xa5","\xf0"))){
					HX_STACK_LINE(717)
					::haxor::io::file::ColladaMaterial tmp6 = ::haxor::io::file::ColladaMaterial_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(717)
					::haxor::io::file::ColladaMaterial mat = tmp6;		HX_STACK_VAR(mat,"mat");
					HX_STACK_LINE(718)
					::Xml tmp7 = n;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(718)
					::String tmp8 = this->_a(tmp7,HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(718)
					mat->id = tmp8;
					HX_STACK_LINE(719)
					::Xml tmp9 = n;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(719)
					::String tmp10 = this->_a(tmp9,HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(719)
					mat->name = tmp10;
					HX_STACK_LINE(720)
					bool tmp11 = (mat->id == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(720)
					if ((tmp11)){
						HX_STACK_LINE(720)
						mat->id = mat->name;
					}
					HX_STACK_LINE(721)
					Array< ::Dynamic > tmp12 = this->materials;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(721)
					::haxor::io::file::ColladaMaterial tmp13 = mat;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(721)
					tmp12->push(tmp13);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ColladaFile_obj,ParseMaterialLibrary,(void))

Void ColladaFile_obj::ParseSceneLibrary( ::Xml n){
{
		HX_STACK_FRAME("haxor.io.file.ColladaFile","ParseSceneLibrary",0x30a6672c,"haxor.io.file.ColladaFile.ParseSceneLibrary","haxor/io/file/ColladaFile.hx",727,0xa1888587)
		HX_STACK_THIS(this)
		HX_STACK_ARG(n,"n")
		HX_STACK_LINE(728)
		Dynamic tmp = n->elements();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(728)
		Dynamic it = tmp;		HX_STACK_VAR(it,"it");
		HX_STACK_LINE(729)
		while((true)){
			HX_STACK_LINE(729)
			bool tmp1 = it->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(729)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(729)
			if ((tmp2)){
				HX_STACK_LINE(729)
				break;
			}
			HX_STACK_LINE(731)
			::Xml tmp3 = it->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(731)
			n = tmp3;
			HX_STACK_LINE(732)
			{
				HX_STACK_LINE(732)
				::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(732)
				{
					HX_STACK_LINE(732)
					int tmp5 = n->nodeType;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(732)
					int tmp6 = ::Xml_obj::Element;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(732)
					bool tmp7 = (tmp5 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(732)
					if ((tmp7)){
						HX_STACK_LINE(732)
						::String tmp8 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + n->nodeType);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(732)
						HX_STACK_DO_THROW(tmp8);
					}
					HX_STACK_LINE(732)
					tmp4 = n->nodeName;
				}
				HX_STACK_LINE(732)
				::String _g = tmp4;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(732)
				::String tmp5 = _g;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(732)
				::String _switch_9 = (tmp5);
				if (  ( _switch_9==HX_HCSTRING("visual_scene","\x4d","\xd3","\x23","\x9f"))){
					HX_STACK_LINE(732)
					::Xml tmp6 = n;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(732)
					this->ParseVisualScene(tmp6);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ColladaFile_obj,ParseSceneLibrary,(void))

Void ColladaFile_obj::ParseVisualScene( ::Xml n){
{
		HX_STACK_FRAME("haxor.io.file.ColladaFile","ParseVisualScene",0x0bd770ef,"haxor.io.file.ColladaFile.ParseVisualScene","haxor/io/file/ColladaFile.hx",737,0xa1888587)
		HX_STACK_THIS(this)
		HX_STACK_ARG(n,"n")
		HX_STACK_LINE(738)
		::haxor::io::file::ColladaVisualScene tmp = this->scene;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(738)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(738)
		if ((tmp1)){
			HX_STACK_LINE(738)
			return null();
		}
		HX_STACK_LINE(739)
		::haxor::io::file::ColladaVisualScene tmp2 = ::haxor::io::file::ColladaVisualScene_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(739)
		this->scene = tmp2;
		HX_STACK_LINE(740)
		::Xml tmp3 = n;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(740)
		::String tmp4 = this->_a(tmp3,HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),HX_HCSTRING("collada_scene","\x7f","\x5f","\x39","\x74"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(740)
		::haxor::io::file::ColladaVisualScene tmp5 = this->scene;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(740)
		tmp5->id = tmp4;
		HX_STACK_LINE(741)
		::Xml tmp6 = n;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(741)
		::haxor::io::file::ColladaVisualScene tmp7 = this->scene;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(741)
		::String tmp8 = tmp7->id;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(741)
		::String tmp9 = this->_a(tmp6,HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(741)
		::haxor::io::file::ColladaVisualScene tmp10 = this->scene;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(741)
		tmp10->name = tmp9;
		HX_STACK_LINE(742)
		::String tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(742)
		{
			HX_STACK_LINE(742)
			int tmp12 = n->nodeType;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(742)
			int tmp13 = ::Xml_obj::Element;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(742)
			bool tmp14 = (tmp12 != tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(742)
			if ((tmp14)){
				HX_STACK_LINE(742)
				::String tmp15 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + n->nodeType);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(742)
				HX_STACK_DO_THROW(tmp15);
			}
			HX_STACK_LINE(742)
			tmp11 = n->nodeName;
		}
		HX_STACK_LINE(742)
		::haxor::io::file::ColladaVisualScene tmp12 = this->scene;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(742)
		tmp12->type = tmp11;
		HX_STACK_LINE(743)
		::haxor::io::file::ColladaVisualScene tmp13 = this->scene;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(743)
		::Xml tmp14 = n;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(743)
		this->TraverseVisualSceneNodes(tmp13,null(),tmp14);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ColladaFile_obj,ParseVisualScene,(void))

Void ColladaFile_obj::TraverseVisualSceneNodes( ::haxor::io::file::ColladaVisualScene scn,::haxor::io::file::ColladaNode p,::Xml n){
{
		HX_STACK_FRAME("haxor.io.file.ColladaFile","TraverseVisualSceneNodes",0x5c90d9ed,"haxor.io.file.ColladaFile.TraverseVisualSceneNodes","haxor/io/file/ColladaFile.hx",747,0xa1888587)
		HX_STACK_THIS(this)
		HX_STACK_ARG(scn,"scn")
		HX_STACK_ARG(p,"p")
		HX_STACK_ARG(n,"n")
		HX_STACK_LINE(748)
		::haxor::io::file::ColladaNode cn = null();		HX_STACK_VAR(cn,"cn");
		HX_STACK_LINE(749)
		::String tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(749)
		{
			HX_STACK_LINE(749)
			int tmp1 = n->nodeType;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(749)
			int tmp2 = ::Xml_obj::Element;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(749)
			bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(749)
			if ((tmp3)){
				HX_STACK_LINE(749)
				::String tmp4 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + n->nodeType);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(749)
				HX_STACK_DO_THROW(tmp4);
			}
			HX_STACK_LINE(749)
			tmp = n->nodeName;
		}
		HX_STACK_LINE(749)
		bool tmp1 = (tmp == HX_HCSTRING("node","\x02","\x0a","\x0a","\x49"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(749)
		if ((tmp1)){
			HX_STACK_LINE(749)
			::haxor::io::file::ColladaVisualScene tmp2 = scn;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(749)
			::haxor::io::file::ColladaNode tmp3 = p;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(749)
			::Xml tmp4 = n;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(749)
			::haxor::io::file::ColladaNode tmp5 = this->ParseVisualSceneNode(tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(749)
			cn = tmp5;
		}
		HX_STACK_LINE(750)
		Dynamic tmp2 = n->elementsNamed(HX_HCSTRING("node","\x02","\x0a","\x0a","\x49"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(750)
		Dynamic cn_it = tmp2;		HX_STACK_VAR(cn_it,"cn_it");
		HX_STACK_LINE(751)
		while((true)){
			HX_STACK_LINE(751)
			bool tmp3 = cn_it->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic )();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(751)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(751)
			if ((tmp4)){
				HX_STACK_LINE(751)
				break;
			}
			HX_STACK_LINE(751)
			::haxor::io::file::ColladaVisualScene tmp5 = scn;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(751)
			::haxor::io::file::ColladaNode tmp6 = cn;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(751)
			::Xml tmp7 = cn_it->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(751)
			this->TraverseVisualSceneNodes(tmp5,tmp6,tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ColladaFile_obj,TraverseVisualSceneNodes,(void))

::haxor::io::file::ColladaNode ColladaFile_obj::ParseVisualSceneNode( ::haxor::io::file::ColladaVisualScene scn,::haxor::io::file::ColladaNode p,::Xml n){
	HX_STACK_FRAME("haxor.io.file.ColladaFile","ParseVisualSceneNode",0xf4f74a91,"haxor.io.file.ColladaFile.ParseVisualSceneNode","haxor/io/file/ColladaFile.hx",755,0xa1888587)
	HX_STACK_THIS(this)
	HX_STACK_ARG(scn,"scn")
	HX_STACK_ARG(p,"p")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(756)
	::haxor::io::file::ColladaNode tmp = ::haxor::io::file::ColladaNode_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(756)
	::haxor::io::file::ColladaNode cn = tmp;		HX_STACK_VAR(cn,"cn");
	HX_STACK_LINE(757)
	cn->scene = scn;
	HX_STACK_LINE(759)
	::Xml tmp1 = n;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(759)
	Float tmp2 = ::Math_obj::random();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(759)
	Float tmp3 = (tmp2 * (int)16777215);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(759)
	int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(759)
	::String tmp5 = (HX_HCSTRING("node","\x02","\x0a","\x0a","\x49") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(759)
	::String tmp6 = this->_a(tmp1,HX_HCSTRING("sid","\x0e","\x9f","\x57","\x00"),tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(759)
	cn->sid = tmp6;
	HX_STACK_LINE(760)
	::Xml tmp7 = n;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(760)
	::String tmp8 = cn->sid;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(760)
	::String tmp9 = this->_a(tmp7,HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(760)
	cn->id = tmp9;
	HX_STACK_LINE(761)
	::Xml tmp10 = n;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(761)
	::String tmp11 = cn->sid;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(761)
	::String tmp12 = this->_a(tmp10,HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(761)
	cn->name = tmp12;
	HX_STACK_LINE(762)
	bool tmp13 = (cn->sid == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(762)
	if ((tmp13)){
		HX_STACK_LINE(762)
		cn->sid = cn->id;
	}
	HX_STACK_LINE(763)
	::Xml tmp14 = n;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(763)
	::String tmp15 = this->_a(tmp14,HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),HX_HCSTRING("NODE","\x02","\xd2","\xca","\x33"));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(763)
	::String tmp16 = tmp15.toLowerCase();		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(763)
	cn->type = tmp16;
	HX_STACK_LINE(764)
	::Xml tmp17 = n;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(764)
	Dynamic tmp18 = this->_p(tmp17,HX_HCSTRING("matrix.$text","\xe4","\x24","\x99","\x43"),HX_HCSTRING("1 0 0 0 0 1 0 0 0 0 1 0 0 0 0 1","\xa4","\x80","\x1c","\x3b"),null(),null());		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(764)
	Array< Float > tmp19 = this->_f32a(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(764)
	cn->matrix = tmp19;
	HX_STACK_LINE(765)
	cn->parent = p;
	HX_STACK_LINE(766)
	cn->GenerateTranform();
	HX_STACK_LINE(768)
	Dynamic tmp20 = n->elements();		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(768)
	Dynamic iit = tmp20;		HX_STACK_VAR(iit,"iit");
	HX_STACK_LINE(769)
	while((true)){
		HX_STACK_LINE(769)
		bool tmp21 = iit->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic )();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(769)
		bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(769)
		if ((tmp22)){
			HX_STACK_LINE(769)
			break;
		}
		HX_STACK_LINE(771)
		::Xml tmp23 = iit->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(771)
		::Xml nin = tmp23;		HX_STACK_VAR(nin,"nin");
		HX_STACK_LINE(772)
		::haxor::io::file::ColladaInstance ni = null();		HX_STACK_VAR(ni,"ni");
		HX_STACK_LINE(773)
		{
			HX_STACK_LINE(773)
			::String tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(773)
			{
				HX_STACK_LINE(773)
				int tmp25 = nin->nodeType;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(773)
				int tmp26 = ::Xml_obj::Element;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(773)
				bool tmp27 = (tmp25 != tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(773)
				if ((tmp27)){
					HX_STACK_LINE(773)
					::String tmp28 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + nin->nodeType);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(773)
					HX_STACK_DO_THROW(tmp28);
				}
				HX_STACK_LINE(773)
				tmp24 = nin->nodeName;
			}
			HX_STACK_LINE(773)
			::String _g = tmp24;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(773)
			::String tmp25 = _g;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(773)
			::String _switch_10 = (tmp25);
			if (  ( _switch_10==HX_HCSTRING("instance_geometry","\xdc","\xbf","\x19","\xec"))){
				HX_STACK_LINE(776)
				::haxor::io::file::ColladaInstance tmp26 = ::haxor::io::file::ColladaInstance_obj::__new();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(776)
				ni = tmp26;
				HX_STACK_LINE(777)
				ni->type = HX_HCSTRING("geometry","\xb2","\x02","\xa9","\xd2");
				HX_STACK_LINE(778)
				::Xml tmp27 = nin;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(778)
				::String tmp28 = this->_a(tmp27,HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(778)
				::String tmp29 = tmp28.substr((int)1,null());		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(778)
				ni->target = tmp29;
			}
			else if (  ( _switch_10==HX_HCSTRING("instance_controller","\x46","\x74","\xb8","\xe9"))){
				HX_STACK_LINE(782)
				::haxor::io::file::ColladaInstance tmp26 = ::haxor::io::file::ColladaInstance_obj::__new();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(782)
				ni = tmp26;
				HX_STACK_LINE(783)
				ni->type = HX_HCSTRING("controller","\x9c","\x98","\xbe","\x04");
				HX_STACK_LINE(784)
				::Xml tmp27 = nin;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(784)
				::String tmp28 = this->_a(tmp27,HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(784)
				::String tmp29 = tmp28.substr((int)1,null());		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(784)
				ni->target = tmp29;
			}
			else if (  ( _switch_10==HX_HCSTRING("instance_light","\x6c","\x55","\xe4","\x36"))){
				HX_STACK_LINE(787)
				::haxor::io::file::ColladaInstance tmp26 = ::haxor::io::file::ColladaInstance_obj::__new();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(787)
				ni = tmp26;
				HX_STACK_LINE(788)
				ni->type = HX_HCSTRING("light","\xd6","\x90","\xfc","\x74");
				HX_STACK_LINE(789)
				::Xml tmp27 = nin;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(789)
				::String tmp28 = this->_a(tmp27,HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(789)
				::String tmp29 = tmp28.substr((int)1,null());		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(789)
				ni->target = tmp29;
			}
			else if (  ( _switch_10==HX_HCSTRING("extra","\x90","\x9a","\x22","\x77"))){
				HX_STACK_LINE(792)
				::Xml tmp26 = nin;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(792)
				Dynamic tmp27 = this->_p(tmp26,HX_HCSTRING("technique.user_properties.$text","\x6c","\xc6","\xdd","\xe0"),HX_HCSTRING("","\x00","\x00","\x00","\x00"),null(),null());		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(792)
				cn->data = tmp27;
				HX_STACK_LINE(793)
				int tmp28 = cn->data.indexOf(HX_HCSTRING(";","\x3b","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(793)
				bool tmp29 = (tmp28 < (int)0);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(793)
				if ((tmp29)){
					HX_STACK_LINE(793)
					cn->data = HX_HCSTRING("","\x00","\x00","\x00","\x00");
				}
			}
		}
		HX_STACK_LINE(797)
		bool tmp24 = (ni != null());		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(797)
		if ((tmp24)){
			HX_STACK_LINE(797)
			::haxor::io::file::ColladaInstance tmp25 = ni;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(797)
			cn->instances->push(tmp25);
		}
	}
	HX_STACK_LINE(800)
	bool tmp21 = (p == null());		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(800)
	if ((tmp21)){
		HX_STACK_LINE(800)
		::haxor::io::file::ColladaNode tmp22 = cn;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(800)
		scn->children->push(tmp22);
	}
	else{
		HX_STACK_LINE(800)
		::haxor::io::file::ColladaNode tmp22 = cn;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(800)
		p->children->push(tmp22);
	}
	HX_STACK_LINE(801)
	::haxor::io::file::ColladaNode tmp22 = cn;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(801)
	return tmp22;
}


HX_DEFINE_DYNAMIC_FUNC3(ColladaFile_obj,ParseVisualSceneNode,return )

Void ColladaFile_obj::ParseInstanceMaterials( ::haxor::io::file::ColladaInstance ci,::Xml n){
{
		HX_STACK_FRAME("haxor.io.file.ColladaFile","ParseInstanceMaterials",0xd76ce25a,"haxor.io.file.ColladaFile.ParseInstanceMaterials","haxor/io/file/ColladaFile.hx",805,0xa1888587)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ci,"ci")
		HX_STACK_ARG(n,"n")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ColladaFile_obj,ParseInstanceMaterials,(void))

Void ColladaFile_obj::ParseControllerLibrary( ::Xml n){
{
		HX_STACK_FRAME("haxor.io.file.ColladaFile","ParseControllerLibrary",0xcdf6c882,"haxor.io.file.ColladaFile.ParseControllerLibrary","haxor/io/file/ColladaFile.hx",810,0xa1888587)
		HX_STACK_THIS(this)
		HX_STACK_ARG(n,"n")
		HX_STACK_LINE(811)
		Dynamic tmp = n->elementsNamed(HX_HCSTRING("controller","\x9c","\x98","\xbe","\x04"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(811)
		Dynamic it = tmp;		HX_STACK_VAR(it,"it");
		HX_STACK_LINE(812)
		::haxor::io::file::ColladaController c = null();		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(813)
		while((true)){
			HX_STACK_LINE(813)
			bool tmp1 = it->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(813)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(813)
			if ((tmp2)){
				HX_STACK_LINE(813)
				break;
			}
			HX_STACK_LINE(815)
			::Xml tmp3 = it->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(815)
			n = tmp3;
			HX_STACK_LINE(816)
			::haxor::io::file::ColladaController tmp4 = ::haxor::io::file::ColladaController_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(816)
			c = tmp4;
			HX_STACK_LINE(817)
			::Xml tmp5 = n;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(817)
			::String tmp6 = this->_a(tmp5,HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),HX_HCSTRING("none","\xb8","\x12","\x0a","\x49"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(817)
			c->id = tmp6;
			HX_STACK_LINE(818)
			::Xml tmp7 = n;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(818)
			::String tmp8 = c->id;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(818)
			::String tmp9 = this->_a(tmp7,HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(818)
			c->name = tmp9;
			HX_STACK_LINE(819)
			::haxor::io::file::ColladaController tmp10 = c;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(819)
			::Xml tmp11 = n;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(819)
			this->ParseController(tmp10,tmp11);
			HX_STACK_LINE(820)
			Array< ::Dynamic > tmp12 = this->controllers;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(820)
			::haxor::io::file::ColladaController tmp13 = c;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(820)
			tmp12->push(tmp13);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ColladaFile_obj,ParseControllerLibrary,(void))

Void ColladaFile_obj::ParseController( ::haxor::io::file::ColladaController c,::Xml n){
{
		HX_STACK_FRAME("haxor.io.file.ColladaFile","ParseController",0x4bcb5779,"haxor.io.file.ColladaFile.ParseController","haxor/io/file/ColladaFile.hx",825,0xa1888587)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_ARG(n,"n")
		HX_STACK_LINE(826)
		::Xml tmp = n->firstElement();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(826)
		n = tmp;
		HX_STACK_LINE(827)
		bool tmp1 = (n == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(827)
		if ((tmp1)){
			HX_STACK_LINE(827)
			return null();
		}
		HX_STACK_LINE(828)
		::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(828)
		{
			HX_STACK_LINE(828)
			int tmp3 = n->nodeType;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(828)
			int tmp4 = ::Xml_obj::Element;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(828)
			bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(828)
			if ((tmp5)){
				HX_STACK_LINE(828)
				::String tmp6 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + n->nodeType);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(828)
				HX_STACK_DO_THROW(tmp6);
			}
			HX_STACK_LINE(828)
			tmp2 = n->nodeName;
		}
		HX_STACK_LINE(828)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(828)
		::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(828)
		if ((tmp3)){
			HX_STACK_LINE(828)
			tmp4 = HX_HCSTRING("none","\xb8","\x12","\x0a","\x49");
		}
		else{
			HX_STACK_LINE(828)
			::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(828)
			{
				HX_STACK_LINE(828)
				int tmp6 = n->nodeType;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(828)
				int tmp7 = ::Xml_obj::Element;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(828)
				bool tmp8 = (tmp6 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(828)
				if ((tmp8)){
					HX_STACK_LINE(828)
					::String tmp9 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + n->nodeType);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(828)
					HX_STACK_DO_THROW(tmp9);
				}
				HX_STACK_LINE(828)
				tmp5 = n->nodeName;
			}
			HX_STACK_LINE(828)
			tmp4 = tmp5.toLowerCase();
		}
		HX_STACK_LINE(828)
		c->type = tmp4;
		HX_STACK_LINE(829)
		{
			HX_STACK_LINE(829)
			::String _g = c->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(829)
			::String tmp5 = _g;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(829)
			::String _switch_11 = (tmp5);
			if (  ( _switch_11==HX_HCSTRING("skin","\x7d","\x16","\x55","\x4c"))){
				HX_STACK_LINE(831)
				::haxor::io::file::ColladaController tmp6 = c;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(831)
				::Xml tmp7 = n;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(831)
				this->ParseControllerSkin(tmp6,tmp7);
			}
			else if (  ( _switch_11==HX_HCSTRING("morph","\xc8","\xcc","\x62","\x0c"))){
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ColladaFile_obj,ParseController,(void))

Void ColladaFile_obj::ParseControllerSkin( ::haxor::io::file::ColladaController c,::Xml n){
{
		HX_STACK_FRAME("haxor.io.file.ColladaFile","ParseControllerSkin",0x4c6d4a96,"haxor.io.file.ColladaFile.ParseControllerSkin","haxor/io/file/ColladaFile.hx",837,0xa1888587)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_ARG(n,"n")
		HX_STACK_LINE(838)
		::Xml tmp = n;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(838)
		::String tmp1 = this->_a(tmp,HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(838)
		::String tmp2 = tmp1.substr((int)1,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(838)
		c->source = tmp2;
		HX_STACK_LINE(839)
		::Xml tmp3 = n;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(839)
		Dynamic tmp4 = this->_p(tmp3,HX_HCSTRING("bind_shape_matrix.$text","\x84","\xec","\x0e","\x60"),HX_HCSTRING("","\x00","\x00","\x00","\x00"),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(839)
		Array< Float > tmp5 = this->_f32a(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(839)
		c->matrix = tmp5;
		HX_STACK_LINE(841)
		::String source = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(842)
		::Xml sn = null();		HX_STACK_VAR(sn,"sn");
		HX_STACK_LINE(844)
		::Xml tmp6 = n;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(844)
		Dynamic tmp7 = this->_p(tmp6,HX_HCSTRING("joints","\xe9","\xe7","\x09","\x91"),null(),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(844)
		bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(844)
		::Xml tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(844)
		if ((tmp8)){
			HX_STACK_LINE(844)
			tmp9 = null();
		}
		else{
			HX_STACK_LINE(844)
			::Xml tmp10 = n;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(844)
			Dynamic tmp11 = this->_p(tmp10,HX_HCSTRING("joints","\xe9","\xe7","\x09","\x91"),null(),null(),null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(844)
			tmp9 = tmp11->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();
		}
		HX_STACK_LINE(844)
		::Xml jn = tmp9;		HX_STACK_VAR(jn,"jn");
		HX_STACK_LINE(846)
		bool tmp10 = (jn != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(846)
		if ((tmp10)){
			HX_STACK_LINE(848)
			Dynamic tmp11 = jn->elementsNamed(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(848)
			Dynamic jn_it = tmp11;		HX_STACK_VAR(jn_it,"jn_it");
			HX_STACK_LINE(849)
			while((true)){
				HX_STACK_LINE(849)
				bool tmp12 = jn_it->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic )();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(849)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(849)
				if ((tmp13)){
					HX_STACK_LINE(849)
					break;
				}
				HX_STACK_LINE(851)
				::Xml tmp14 = jn_it->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(851)
				::Xml jni = tmp14;		HX_STACK_VAR(jni,"jni");
				HX_STACK_LINE(852)
				::Xml tmp15 = jni;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(852)
				::String tmp16 = this->_a(tmp15,HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(852)
				::String tmp17 = tmp16.substr((int)1,null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(852)
				source = tmp17;
				HX_STACK_LINE(853)
				bool tmp18 = (source == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(853)
				if ((tmp18)){
					HX_STACK_LINE(853)
					continue;
				}
				HX_STACK_LINE(854)
				::Xml tmp19 = n;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(854)
				::String tmp20 = source;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(854)
				::Xml tmp21 = this->_f(tmp19,HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(854)
				sn = tmp21;
				HX_STACK_LINE(855)
				bool tmp22 = (sn == null());		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(855)
				if ((tmp22)){
					HX_STACK_LINE(855)
					continue;
				}
				HX_STACK_LINE(857)
				{
					HX_STACK_LINE(857)
					::Xml tmp23 = jni;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(857)
					::String tmp24 = this->_a(tmp23,HX_HCSTRING("semantic","\x06","\x91","\x73","\xd1"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(857)
					::String tmp25 = tmp24.toLowerCase();		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(857)
					::String _g = tmp25;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(857)
					::String tmp26 = _g;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(857)
					::String _switch_12 = (tmp26);
					if (  ( _switch_12==HX_HCSTRING("joint","\x4a","\x39","\x28","\x52"))){
						HX_STACK_LINE(859)
						::Xml tmp27 = sn;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(859)
						Dynamic tmp28 = this->_p(tmp27,HX_HCSTRING("Name_array.$text","\x28","\x2f","\x50","\x17"),HX_HCSTRING("","\x00","\x00","\x00","\x00"),null(),null());		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(859)
						::String tmp29 = ::StringTools_obj::replace(tmp28,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"),HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(859)
						::String tmp30 = ::StringTools_obj::trim(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(859)
						Array< ::String > tmp31 = tmp30.split(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(859)
						c->joints = tmp31;
					}
					else if (  ( _switch_12==HX_HCSTRING("inv_bind_matrix","\x35","\x14","\xd1","\xa7"))){
						HX_STACK_LINE(862)
						::Xml tmp27 = sn;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(862)
						Dynamic tmp28 = this->_p(tmp27,HX_HCSTRING("float_array.$text","\xd9","\xdb","\x04","\xb8"),HX_HCSTRING("","\x00","\x00","\x00","\x00"),null(),null());		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(862)
						Array< Float > tmp29 = this->_f32a(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(862)
						Array< Float > ml = tmp29;		HX_STACK_VAR(ml,"ml");
						HX_STACK_LINE(863)
						while((true)){
							HX_STACK_LINE(863)
							bool tmp30 = (ml->length > (int)0);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(863)
							bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(863)
							if ((tmp31)){
								HX_STACK_LINE(863)
								break;
							}
							HX_STACK_LINE(865)
							Array< Float > tmp32 = Array_obj< Float >::__new();		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(865)
							Array< Float > mtx = tmp32;		HX_STACK_VAR(mtx,"mtx");
							HX_STACK_LINE(866)
							{
								HX_STACK_LINE(866)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(866)
								while((true)){
									HX_STACK_LINE(866)
									bool tmp33 = (_g1 < (int)16);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(866)
									bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(866)
									if ((tmp34)){
										HX_STACK_LINE(866)
										break;
									}
									HX_STACK_LINE(866)
									int tmp35 = (_g1)++;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(866)
									int i = tmp35;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(866)
									Dynamic tmp36 = ml->shift();		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(866)
									mtx->push(tmp36);
								}
							}
							HX_STACK_LINE(867)
							Array< Float > tmp33 = mtx;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(867)
							c->binds->push(tmp33);
						}
					}
				}
			}
		}
		HX_STACK_LINE(873)
		::Xml tmp11 = n;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(873)
		Dynamic tmp12 = this->_p(tmp11,HX_HCSTRING("vertex_weights","\xe0","\x10","\x1d","\x55"),null(),null(),null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(873)
		bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(873)
		::Xml tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(873)
		if ((tmp13)){
			HX_STACK_LINE(873)
			tmp14 = null();
		}
		else{
			HX_STACK_LINE(873)
			::Xml tmp15 = n;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(873)
			Dynamic tmp16 = this->_p(tmp15,HX_HCSTRING("vertex_weights","\xe0","\x10","\x1d","\x55"),null(),null(),null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(873)
			tmp14 = tmp16->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();
		}
		HX_STACK_LINE(873)
		::Xml vwn = tmp14;		HX_STACK_VAR(vwn,"vwn");
		HX_STACK_LINE(874)
		bool tmp15 = (vwn != null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(874)
		if ((tmp15)){
			HX_STACK_LINE(876)
			::Xml tmp16 = n;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(876)
			::Xml tmp17 = vwn;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(876)
			Array< ::Dynamic > tmp18 = this->ParseInputList(tmp16,tmp17,null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(876)
			c->inputs = tmp18;
			HX_STACK_LINE(877)
			::Xml tmp19 = vwn;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(877)
			Dynamic tmp20 = this->_p(tmp19,HX_HCSTRING("vcount.$text","\x3c","\x19","\x17","\xc4"),HX_HCSTRING("","\x00","\x00","\x00","\x00"),null(),null());		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(877)
			Array< int > tmp21 = this->_i16a(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(877)
			c->vcount = tmp21;
			HX_STACK_LINE(878)
			::Xml tmp22 = vwn;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(878)
			Dynamic tmp23 = this->_p(tmp22,HX_HCSTRING("v.$text","\xd9","\x04","\xb6","\x96"),HX_HCSTRING("","\x00","\x00","\x00","\x00"),null(),null());		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(878)
			::String vwb = tmp23;		HX_STACK_VAR(vwb,"vwb");
			HX_STACK_LINE(879)
			::String tmp24 = vwb;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(879)
			int tmp25 = c->get_offset();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(879)
			Array< ::Dynamic > tmp26 = this->_i16ta(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(879)
			c->indexes = tmp26;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ColladaFile_obj,ParseControllerSkin,(void))

Void ColladaFile_obj::ParseImageLibrary( ::Xml n){
{
		HX_STACK_FRAME("haxor.io.file.ColladaFile","ParseImageLibrary",0xe21890fd,"haxor.io.file.ColladaFile.ParseImageLibrary","haxor/io/file/ColladaFile.hx",885,0xa1888587)
		HX_STACK_THIS(this)
		HX_STACK_ARG(n,"n")
		HX_STACK_LINE(886)
		Dynamic tmp = n->elementsNamed(HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(886)
		Dynamic it = tmp;		HX_STACK_VAR(it,"it");
		HX_STACK_LINE(887)
		::haxor::io::file::ColladaImage img = null();		HX_STACK_VAR(img,"img");
		HX_STACK_LINE(888)
		while((true)){
			HX_STACK_LINE(888)
			bool tmp1 = it->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(888)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(888)
			if ((tmp2)){
				HX_STACK_LINE(888)
				break;
			}
			HX_STACK_LINE(890)
			::Xml tmp3 = it->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(890)
			n = tmp3;
			HX_STACK_LINE(891)
			::haxor::io::file::ColladaImage tmp4 = ::haxor::io::file::ColladaImage_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(891)
			img = tmp4;
			HX_STACK_LINE(892)
			::Xml tmp5 = n;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(892)
			::String tmp6 = this->_a(tmp5,HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),HX_HCSTRING("none","\xb8","\x12","\x0a","\x49"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(892)
			img->id = tmp6;
			HX_STACK_LINE(893)
			::Xml tmp7 = n;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(893)
			::String tmp8 = img->id;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(893)
			::String tmp9 = this->_a(tmp7,HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(893)
			img->name = tmp9;
			HX_STACK_LINE(894)
			::Xml tmp10 = n;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(894)
			::String tmp11 = this->_a(tmp10,HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(894)
			img->format = tmp11;
			HX_STACK_LINE(895)
			::Xml tmp12 = n;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(895)
			::String tmp13 = this->_a(tmp12,HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),HX_HCSTRING("-1","\x64","\x27","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(895)
			Dynamic tmp14 = ::Std_obj::parseInt(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(895)
			img->width = tmp14;
			HX_STACK_LINE(896)
			::Xml tmp15 = n;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(896)
			::String tmp16 = this->_a(tmp15,HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),HX_HCSTRING("-1","\x64","\x27","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(896)
			Dynamic tmp17 = ::Std_obj::parseInt(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(896)
			img->height = tmp17;
			HX_STACK_LINE(897)
			::Xml tmp18 = n;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(897)
			::String tmp19 = this->_a(tmp18,HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"),HX_HCSTRING("-1","\x64","\x27","\x00","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(897)
			Dynamic tmp20 = ::Std_obj::parseInt(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(897)
			img->depth = tmp20;
			HX_STACK_LINE(899)
			Array< ::Dynamic > tmp21 = this->images;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(899)
			::haxor::io::file::ColladaImage tmp22 = img;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(899)
			tmp21->push(tmp22);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ColladaFile_obj,ParseImageLibrary,(void))

Void ColladaFile_obj::ParseGeometryLibrary( ::Xml n){
{
		HX_STACK_FRAME("haxor.io.file.ColladaFile","ParseGeometryLibrary",0xd411266c,"haxor.io.file.ColladaFile.ParseGeometryLibrary","haxor/io/file/ColladaFile.hx",904,0xa1888587)
		HX_STACK_THIS(this)
		HX_STACK_ARG(n,"n")
		HX_STACK_LINE(905)
		Dynamic tmp = n->elementsNamed(HX_HCSTRING("geometry","\xb2","\x02","\xa9","\xd2"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(905)
		Dynamic it = tmp;		HX_STACK_VAR(it,"it");
		HX_STACK_LINE(906)
		::haxor::io::file::ColladaGeometry g = null();		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(907)
		while((true)){
			HX_STACK_LINE(907)
			bool tmp1 = it->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(907)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(907)
			if ((tmp2)){
				HX_STACK_LINE(907)
				break;
			}
			HX_STACK_LINE(909)
			::Xml tmp3 = it->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(909)
			n = tmp3;
			HX_STACK_LINE(910)
			::haxor::io::file::ColladaGeometry tmp4 = ::haxor::io::file::ColladaGeometry_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(910)
			g = tmp4;
			HX_STACK_LINE(911)
			::Xml tmp5 = n;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(911)
			::String tmp6 = this->_a(tmp5,HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),HX_HCSTRING("none","\xb8","\x12","\x0a","\x49"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(911)
			g->id = tmp6;
			HX_STACK_LINE(912)
			::Xml tmp7 = n;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(912)
			::String tmp8 = this->_a(tmp7,HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),HX_HCSTRING("none","\xb8","\x12","\x0a","\x49"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(912)
			g->name = tmp8;
			HX_STACK_LINE(913)
			::haxor::io::file::ColladaGeometry tmp9 = g;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(913)
			::Xml tmp10 = n;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(913)
			this->ParseGeometry(tmp9,tmp10);
			HX_STACK_LINE(914)
			Array< ::Dynamic > tmp11 = this->geometries;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(914)
			::haxor::io::file::ColladaGeometry tmp12 = g;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(914)
			tmp11->push(tmp12);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ColladaFile_obj,ParseGeometryLibrary,(void))

Void ColladaFile_obj::ParseGeometry( ::haxor::io::file::ColladaGeometry g,::Xml n){
{
		HX_STACK_FRAME("haxor.io.file.ColladaFile","ParseGeometry",0x09ad604f,"haxor.io.file.ColladaFile.ParseGeometry","haxor/io/file/ColladaFile.hx",919,0xa1888587)
		HX_STACK_THIS(this)
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(n,"n")
		HX_STACK_LINE(920)
		::Xml tmp = n->firstElement();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(920)
		n = tmp;
		HX_STACK_LINE(921)
		bool tmp1 = (n == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(921)
		if ((tmp1)){
			HX_STACK_LINE(921)
			return null();
		}
		HX_STACK_LINE(922)
		::haxor::io::file::ColladaMesh tmp2 = ::haxor::io::file::ColladaMesh_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(922)
		g->mesh = tmp2;
		HX_STACK_LINE(923)
		::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(923)
		{
			HX_STACK_LINE(923)
			int tmp4 = n->nodeType;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(923)
			int tmp5 = ::Xml_obj::Element;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(923)
			bool tmp6 = (tmp4 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(923)
			if ((tmp6)){
				HX_STACK_LINE(923)
				::String tmp7 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + n->nodeType);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(923)
				HX_STACK_DO_THROW(tmp7);
			}
			HX_STACK_LINE(923)
			tmp3 = n->nodeName;
		}
		HX_STACK_LINE(923)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(923)
		::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(923)
		if ((tmp4)){
			HX_STACK_LINE(923)
			tmp5 = HX_HCSTRING("none","\xb8","\x12","\x0a","\x49");
		}
		else{
			HX_STACK_LINE(923)
			::String tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(923)
			{
				HX_STACK_LINE(923)
				int tmp7 = n->nodeType;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(923)
				int tmp8 = ::Xml_obj::Element;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(923)
				bool tmp9 = (tmp7 != tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(923)
				if ((tmp9)){
					HX_STACK_LINE(923)
					::String tmp10 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + n->nodeType);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(923)
					HX_STACK_DO_THROW(tmp10);
				}
				HX_STACK_LINE(923)
				tmp6 = n->nodeName;
			}
			HX_STACK_LINE(923)
			tmp5 = tmp6.toLowerCase();
		}
		HX_STACK_LINE(923)
		g->mesh->type = tmp5;
		HX_STACK_LINE(925)
		{
			HX_STACK_LINE(925)
			::String tmp6 = g->mesh->type;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(925)
			::String _g = tmp6;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(925)
			::String tmp7 = _g;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(925)
			::String _switch_13 = (tmp7);
			if (  ( _switch_13==HX_HCSTRING("mesh","\xed","\x49","\x59","\x48"))){
				HX_STACK_LINE(927)
				::haxor::io::file::ColladaMesh tmp8 = g->mesh;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(927)
				::Xml tmp9 = n;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(927)
				this->ParseMesh(tmp8,tmp9);
			}
			else if (  ( _switch_13==HX_HCSTRING("convex_mesh","\x05","\xb9","\x7e","\x95"))){
			}
			else if (  ( _switch_13==HX_HCSTRING("spline","\x11","\x8f","\x9e","\xbf"))){
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ColladaFile_obj,ParseGeometry,(void))

Void ColladaFile_obj::ParseMesh( ::haxor::io::file::ColladaMesh m,::Xml n){
{
		HX_STACK_FRAME("haxor.io.file.ColladaFile","ParseMesh",0x125d550a,"haxor.io.file.ColladaFile.ParseMesh","haxor/io/file/ColladaFile.hx",935,0xa1888587)
		HX_STACK_THIS(this)
		HX_STACK_ARG(m,"m")
		HX_STACK_ARG(n,"n")
		HX_STACK_LINE(936)
		Dynamic tmp = n->elements();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(936)
		Dynamic it = tmp;		HX_STACK_VAR(it,"it");
		HX_STACK_LINE(937)
		::Xml p = n;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(938)
		while((true)){
			HX_STACK_LINE(938)
			bool tmp1 = it->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(938)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(938)
			if ((tmp2)){
				HX_STACK_LINE(938)
				break;
			}
			HX_STACK_LINE(940)
			::Xml tmp3 = it->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(940)
			n = tmp3;
			HX_STACK_LINE(941)
			::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(941)
			{
				HX_STACK_LINE(941)
				int tmp5 = n->nodeType;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(941)
				int tmp6 = ::Xml_obj::Element;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(941)
				bool tmp7 = (tmp5 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(941)
				if ((tmp7)){
					HX_STACK_LINE(941)
					::String tmp8 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + n->nodeType);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(941)
					HX_STACK_DO_THROW(tmp8);
				}
				HX_STACK_LINE(941)
				tmp4 = n->nodeName;
			}
			HX_STACK_LINE(941)
			bool tmp5 = (tmp4 == HX_HCSTRING("vertices","\xf9","\xbf","\x15","\x6a"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(941)
			if ((tmp5)){
				HX_STACK_LINE(941)
				continue;
			}
			HX_STACK_LINE(942)
			::String tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(942)
			{
				HX_STACK_LINE(942)
				int tmp7 = n->nodeType;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(942)
				int tmp8 = ::Xml_obj::Element;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(942)
				bool tmp9 = (tmp7 != tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(942)
				if ((tmp9)){
					HX_STACK_LINE(942)
					::String tmp10 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + n->nodeType);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(942)
					HX_STACK_DO_THROW(tmp10);
				}
				HX_STACK_LINE(942)
				tmp6 = n->nodeName;
			}
			HX_STACK_LINE(942)
			bool tmp7 = (tmp6 == HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(942)
			if ((tmp7)){
				HX_STACK_LINE(942)
				continue;
			}
			HX_STACK_LINE(943)
			::haxor::io::file::ColladaPrimitive tmp8 = ::haxor::io::file::ColladaPrimitive_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(943)
			::haxor::io::file::ColladaPrimitive cp = tmp8;		HX_STACK_VAR(cp,"cp");
			HX_STACK_LINE(945)
			::String tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(945)
			{
				HX_STACK_LINE(945)
				int tmp10 = n->nodeType;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(945)
				int tmp11 = ::Xml_obj::Element;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(945)
				bool tmp12 = (tmp10 != tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(945)
				if ((tmp12)){
					HX_STACK_LINE(945)
					::String tmp13 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + n->nodeType);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(945)
					HX_STACK_DO_THROW(tmp13);
				}
				HX_STACK_LINE(945)
				tmp9 = n->nodeName;
			}
			HX_STACK_LINE(945)
			cp->type = tmp9;
			HX_STACK_LINE(946)
			::Xml tmp10 = n;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(946)
			::String tmp11 = this->_a(tmp10,HX_HCSTRING("material","\xa7","\x5c","\xa5","\xf0"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(946)
			cp->material = tmp11;
			HX_STACK_LINE(948)
			::haxor::io::file::ColladaPrimitive tmp12 = cp;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(948)
			::Xml tmp13 = p;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(948)
			::Xml tmp14 = n;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(948)
			this->ParsePrimitive(tmp12,tmp13,tmp14);
			HX_STACK_LINE(949)
			::haxor::io::file::ColladaPrimitive tmp15 = cp;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(949)
			m->primitives->push(tmp15);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ColladaFile_obj,ParseMesh,(void))

Void ColladaFile_obj::ParsePrimitive( ::haxor::io::file::ColladaPrimitive cp,::Xml p,::Xml n){
{
		HX_STACK_FRAME("haxor.io.file.ColladaFile","ParsePrimitive",0x1426146a,"haxor.io.file.ColladaFile.ParsePrimitive","haxor/io/file/ColladaFile.hx",955,0xa1888587)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cp,"cp")
		HX_STACK_ARG(p,"p")
		HX_STACK_ARG(n,"n")
		HX_STACK_LINE(957)
		::Xml tmp = p;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(957)
		::Xml tmp1 = n;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(957)
		Array< ::Dynamic > tmp2 = this->ParseInputList(tmp,tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(957)
		cp->inputs = tmp2;
		HX_STACK_LINE(959)
		Dynamic tmp3 = n->elementsNamed(HX_HCSTRING("p","\x70","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(959)
		Dynamic p_it = tmp3;		HX_STACK_VAR(p_it,"p_it");
		HX_STACK_LINE(960)
		Dynamic tmp4 = n->elementsNamed(HX_HCSTRING("vcount","\x99","\xd8","\x7f","\x78"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(960)
		Dynamic vc_it = tmp4;		HX_STACK_VAR(vc_it,"vc_it");
		HX_STACK_LINE(963)
		bool tmp5 = vc_it->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic )();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(963)
		if ((tmp5)){
			HX_STACK_LINE(965)
			::Xml tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(965)
			{
				HX_STACK_LINE(965)
				::Xml tmp7 = vc_it->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(965)
				::Xml _this = tmp7;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(965)
				{
					HX_STACK_LINE(965)
					int tmp8 = _this->nodeType;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(965)
					int tmp9 = ::Xml_obj::Document;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(965)
					bool tmp10 = (tmp8 != tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(965)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(965)
					if ((tmp10)){
						HX_STACK_LINE(965)
						int tmp12 = _this->nodeType;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(965)
						int tmp13 = ::Xml_obj::Element;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(965)
						int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(965)
						tmp11 = (tmp12 != tmp14);
					}
					else{
						HX_STACK_LINE(965)
						tmp11 = false;
					}
					HX_STACK_LINE(965)
					if ((tmp11)){
						HX_STACK_LINE(965)
						::String tmp12 = (HX_HCSTRING("Bad node type, expected Element or Document but found ","\xa0","\xd6","\xba","\x79") + _this->nodeType);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(965)
						HX_STACK_DO_THROW(tmp12);
					}
				}
				HX_STACK_LINE(965)
				tmp6 = _this->children->__get((int)0).StaticCast< ::Xml >();
			}
			HX_STACK_LINE(965)
			::Xml ncitn = tmp6;		HX_STACK_VAR(ncitn,"ncitn");
			HX_STACK_LINE(966)
			bool tmp7 = (ncitn == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(966)
			Array< int > tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(966)
			if ((tmp7)){
				HX_STACK_LINE(966)
				tmp8 = Array_obj< int >::__new();
			}
			else{
				HX_STACK_LINE(966)
				::Xml tmp9 = ncitn;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(966)
				::String tmp10 = ::haxe::xml::Printer_obj::print(tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(966)
				tmp8 = this->_i16a(tmp10);
			}
			HX_STACK_LINE(966)
			cp->vcount = tmp8;
		}
		HX_STACK_LINE(969)
		while((true)){
			HX_STACK_LINE(969)
			bool tmp6 = p_it->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic )();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(969)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(969)
			if ((tmp7)){
				HX_STACK_LINE(969)
				break;
			}
			HX_STACK_LINE(971)
			::Xml tmp8 = p_it->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(971)
			::Xml vn = tmp8;		HX_STACK_VAR(vn,"vn");
			HX_STACK_LINE(972)
			::Xml tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(972)
			{
				HX_STACK_LINE(972)
				{
					HX_STACK_LINE(972)
					int tmp10 = vn->nodeType;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(972)
					int tmp11 = ::Xml_obj::Document;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(972)
					bool tmp12 = (tmp10 != tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(972)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(972)
					if ((tmp12)){
						HX_STACK_LINE(972)
						int tmp14 = vn->nodeType;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(972)
						int tmp15 = ::Xml_obj::Element;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(972)
						int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(972)
						tmp13 = (tmp14 != tmp16);
					}
					else{
						HX_STACK_LINE(972)
						tmp13 = false;
					}
					HX_STACK_LINE(972)
					if ((tmp13)){
						HX_STACK_LINE(972)
						::String tmp14 = (HX_HCSTRING("Bad node type, expected Element or Document but found ","\xa0","\xd6","\xba","\x79") + vn->nodeType);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(972)
						HX_STACK_DO_THROW(tmp14);
					}
				}
				HX_STACK_LINE(972)
				tmp9 = vn->children->__get((int)0).StaticCast< ::Xml >();
			}
			HX_STACK_LINE(972)
			bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(972)
			::String tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(972)
			if ((tmp10)){
				HX_STACK_LINE(972)
				::Xml tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(972)
				{
					HX_STACK_LINE(972)
					{
						HX_STACK_LINE(972)
						int tmp13 = vn->nodeType;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(972)
						int tmp14 = ::Xml_obj::Document;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(972)
						bool tmp15 = (tmp13 != tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(972)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(972)
						if ((tmp15)){
							HX_STACK_LINE(972)
							int tmp17 = vn->nodeType;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(972)
							int tmp18 = ::Xml_obj::Element;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(972)
							int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(972)
							tmp16 = (tmp17 != tmp19);
						}
						else{
							HX_STACK_LINE(972)
							tmp16 = false;
						}
						HX_STACK_LINE(972)
						if ((tmp16)){
							HX_STACK_LINE(972)
							::String tmp17 = (HX_HCSTRING("Bad node type, expected Element or Document but found ","\xa0","\xd6","\xba","\x79") + vn->nodeType);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(972)
							HX_STACK_DO_THROW(tmp17);
						}
					}
					HX_STACK_LINE(972)
					tmp12 = vn->children->__get((int)0).StaticCast< ::Xml >();
				}
				HX_STACK_LINE(972)
				::Xml _this = tmp12;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(972)
				::Xml tmp13 = _this;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(972)
				tmp11 = ::haxe::xml::Printer_obj::print(tmp13,null());
			}
			else{
				HX_STACK_LINE(972)
				tmp11 = HX_HCSTRING("0","\x30","\x00","\x00","\x00");
			}
			HX_STACK_LINE(972)
			::String vb = tmp11;		HX_STACK_VAR(vb,"vb");
			HX_STACK_LINE(973)
			int tmp12 = cp->get_offset();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(973)
			int off = tmp12;		HX_STACK_VAR(off,"off");
			HX_STACK_LINE(974)
			bool tmp13 = (off <= (int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(974)
			int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(974)
			if ((tmp13)){
				HX_STACK_LINE(974)
				tmp14 = (int)1;
			}
			else{
				HX_STACK_LINE(974)
				tmp14 = off;
			}
			HX_STACK_LINE(974)
			off = tmp14;
			HX_STACK_LINE(976)
			::String tmp15 = vb;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(976)
			int tmp16 = off;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(976)
			Array< ::Dynamic > tmp17 = this->_i16ta(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(976)
			Array< ::Dynamic > ti = tmp17;		HX_STACK_VAR(ti,"ti");
			HX_STACK_LINE(977)
			Array< ::Dynamic > tmp18 = ti;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(977)
			cp->indexes->push(tmp18);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ColladaFile_obj,ParsePrimitive,(void))

Array< ::Dynamic > ColladaFile_obj::ParseInputList( ::Xml p,::Xml n,hx::Null< bool >  __o_smart){
bool smart = __o_smart.Default(false);
	HX_STACK_FRAME("haxor.io.file.ColladaFile","ParseInputList",0xfbab654b,"haxor.io.file.ColladaFile.ParseInputList","haxor/io/file/ColladaFile.hx",996,0xa1888587)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_ARG(n,"n")
	HX_STACK_ARG(smart,"smart")
{
		HX_STACK_LINE(997)
		Array< ::Dynamic > tmp = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(997)
		Array< ::Dynamic > l = tmp;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(998)
		Dynamic tmp1 = n->elementsNamed(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(998)
		Dynamic it = tmp1;		HX_STACK_VAR(it,"it");
		HX_STACK_LINE(1000)
		bool tmp2 = smart;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1000)
		if ((tmp2)){
			HX_STACK_LINE(1002)
			Array< ::Dynamic > tmp3 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1002)
			Array< ::Dynamic > il = tmp3;		HX_STACK_VAR(il,"il");
			HX_STACK_LINE(1003)
			while((true)){
				HX_STACK_LINE(1003)
				bool tmp4 = it->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic )();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1003)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1003)
				if ((tmp5)){
					HX_STACK_LINE(1003)
					break;
				}
				HX_STACK_LINE(1005)
				::Xml tmp6 = it->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1005)
				::Xml pi = tmp6;		HX_STACK_VAR(pi,"pi");
				HX_STACK_LINE(1007)
				::Xml tmp7 = pi;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1007)
				::String tmp8 = this->_a(tmp7,HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1007)
				::String source = tmp8;		HX_STACK_VAR(source,"source");
				HX_STACK_LINE(1008)
				::Xml tmp9 = pi;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1008)
				::String tmp10 = this->_a(tmp9,HX_HCSTRING("semantic","\x06","\x91","\x73","\xd1"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1008)
				::String tmp11 = tmp10.toLowerCase();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1008)
				::String semantic = tmp11;		HX_STACK_VAR(semantic,"semantic");
				HX_STACK_LINE(1009)
				bool tmp12 = (semantic == HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1009)
				if ((tmp12)){
					HX_STACK_LINE(1011)
					Dynamic tmp13 = p->elementsNamed(HX_HCSTRING("vertices","\xf9","\xbf","\x15","\x6a"));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1011)
					Dynamic vi = tmp13;		HX_STACK_VAR(vi,"vi");
					HX_STACK_LINE(1012)
					bool tmp14 = vi->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic )();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1012)
					if ((tmp14)){
						HX_STACK_LINE(1014)
						::Xml tmp15 = vi->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1014)
						Dynamic tmp16 = tmp15->elementsNamed(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1014)
						vi = tmp16;
						HX_STACK_LINE(1015)
						while((true)){
							HX_STACK_LINE(1015)
							bool tmp17 = vi->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic )();		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1015)
							bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1015)
							if ((tmp18)){
								HX_STACK_LINE(1015)
								break;
							}
							HX_STACK_LINE(1015)
							::Xml tmp19 = vi->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1015)
							il->push(tmp19);
						}
					}
				}
				else{
					HX_STACK_LINE(1021)
					::Xml tmp13 = pi;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1021)
					il->push(tmp13);
				}
			}
			HX_STACK_LINE(1025)
			{
				HX_STACK_LINE(1025)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1025)
				int _g = il->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1025)
				while((true)){
					HX_STACK_LINE(1025)
					bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1025)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1025)
					if ((tmp5)){
						HX_STACK_LINE(1025)
						break;
					}
					HX_STACK_LINE(1025)
					int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1025)
					int i = tmp6;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1027)
					::Xml tmp7 = il->__get(i).StaticCast< ::Xml >();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1027)
					::Xml pi = tmp7;		HX_STACK_VAR(pi,"pi");
					HX_STACK_LINE(1028)
					::haxor::io::file::ColladaInput tmp8 = ::haxor::io::file::ColladaInput_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1028)
					::haxor::io::file::ColladaInput ci = tmp8;		HX_STACK_VAR(ci,"ci");
					HX_STACK_LINE(1029)
					::Xml tmp9 = pi;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1029)
					::String tmp10 = this->_a(tmp9,HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1029)
					::String source = tmp10;		HX_STACK_VAR(source,"source");
					HX_STACK_LINE(1030)
					::Xml tmp11 = pi;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1030)
					::String tmp12 = this->_a(tmp11,HX_HCSTRING("semantic","\x06","\x91","\x73","\xd1"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1030)
					::String tmp13 = tmp12.toLowerCase();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1030)
					ci->semantic = tmp13;
					HX_STACK_LINE(1031)
					::Xml tmp14 = pi;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1031)
					::String tmp15 = this->_a(tmp14,HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"),HX_HCSTRING("-1","\x64","\x27","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1031)
					Dynamic tmp16 = ::Std_obj::parseInt(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1031)
					ci->offset = tmp16;
					HX_STACK_LINE(1032)
					::Xml tmp17 = pi;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1032)
					::String tmp18 = this->_a(tmp17,HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),HX_HCSTRING("-1","\x64","\x27","\x00","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1032)
					Dynamic tmp19 = ::Std_obj::parseInt(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1032)
					ci->set = tmp19;
					HX_STACK_LINE(1034)
					{
						HX_STACK_LINE(1034)
						::String _g2 = ci->semantic;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(1034)
						::String tmp20 = _g2;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1034)
						::String _switch_14 = (tmp20);
						if (  ( _switch_14==HX_HCSTRING("joint","\x4a","\x39","\x28","\x52"))){
							HX_STACK_LINE(1036)
							::haxor::io::file::ColladaInput tmp21 = ci;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1036)
							l->push(tmp21);
						}
						else if (  ( _switch_14==HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1"))){
						}
						else  {
							HX_STACK_LINE(1040)
							bool tmp21 = (source != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1040)
							if ((tmp21)){
								HX_STACK_LINE(1042)
								::String tmp22 = source.substr((int)1,null());		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1042)
								source = tmp22;
								HX_STACK_LINE(1043)
								::Xml tmp23 = p;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1043)
								::String tmp24 = source;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1043)
								::Xml tmp25 = this->_f(tmp23,HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1043)
								::Xml sn = tmp25;		HX_STACK_VAR(sn,"sn");
								HX_STACK_LINE(1044)
								bool tmp26 = (sn != null());		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1044)
								if ((tmp26)){
									HX_STACK_LINE(1046)
									::Xml tmp27 = sn;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(1046)
									Dynamic tmp28 = this->_p(tmp27,HX_HCSTRING("technique_common.accessor.@stride","\x66","\x24","\x91","\xb2"),HX_HCSTRING("0","\x30","\x00","\x00","\x00"),null(),null());		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(1046)
									::String stride_str = tmp28;		HX_STACK_VAR(stride_str,"stride_str");
									HX_STACK_LINE(1047)
									::String tmp29 = stride_str;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(1047)
									Dynamic tmp30 = ::Std_obj::parseInt(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(1047)
									ci->stride = tmp30;
									HX_STACK_LINE(1048)
									::Xml tmp31 = sn;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(1048)
									Dynamic tmp32 = this->_p(tmp31,HX_HCSTRING("float_array.$text","\xd9","\xdb","\x04","\xb8"),HX_HCSTRING("","\x00","\x00","\x00","\x00"),null(),null());		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(1048)
									::String vs = tmp32;		HX_STACK_VAR(vs,"vs");
									HX_STACK_LINE(1049)
									::String tmp33 = vs;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(1049)
									Array< Float > tmp34 = this->_f32a(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(1049)
									ci->values = tmp34;
									HX_STACK_LINE(1051)
									::haxor::io::file::ColladaInput tmp35 = ci;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(1051)
									l->push(tmp35);
								}
							}
						}
;
;
					}
				}
			}
			HX_STACK_LINE(1057)
			Array< ::Dynamic > tmp4 = l;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1057)
			return tmp4;
		}
		HX_STACK_LINE(1062)
		Dynamic tmp3 = n->elementsNamed(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1062)
		it = tmp3;
		HX_STACK_LINE(1064)
		while((true)){
			HX_STACK_LINE(1064)
			bool tmp4 = it->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic )();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1064)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1064)
			if ((tmp5)){
				HX_STACK_LINE(1064)
				break;
			}
			HX_STACK_LINE(1066)
			::Xml tmp6 = it->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1066)
			::Xml pi = tmp6;		HX_STACK_VAR(pi,"pi");
			HX_STACK_LINE(1067)
			::haxor::io::file::ColladaInput tmp7 = ::haxor::io::file::ColladaInput_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1067)
			::haxor::io::file::ColladaInput ci = tmp7;		HX_STACK_VAR(ci,"ci");
			HX_STACK_LINE(1068)
			::Xml tmp8 = pi;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1068)
			::String tmp9 = this->_a(tmp8,HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1068)
			Array< ::String > tmp10 = Array_obj< ::String >::__new().Add(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1068)
			Array< ::String > source = tmp10;		HX_STACK_VAR(source,"source");
			HX_STACK_LINE(1069)
			::Xml tmp11 = pi;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1069)
			::String tmp12 = this->_a(tmp11,HX_HCSTRING("semantic","\x06","\x91","\x73","\xd1"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1069)
			::String tmp13 = tmp12.toLowerCase();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1069)
			Array< ::String > tmp14 = Array_obj< ::String >::__new().Add(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1069)
			Array< ::String > semantics = tmp14;		HX_STACK_VAR(semantics,"semantics");
			HX_STACK_LINE(1070)
			::Xml tmp15 = pi;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1070)
			::String tmp16 = this->_a(tmp15,HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"),HX_HCSTRING("-1","\x64","\x27","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1070)
			Dynamic tmp17 = ::Std_obj::parseInt(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1070)
			int offset = tmp17;		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(1071)
			::Xml tmp18 = pi;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1071)
			::String tmp19 = this->_a(tmp18,HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),HX_HCSTRING("-1","\x64","\x27","\x00","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1071)
			Dynamic tmp20 = ::Std_obj::parseInt(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1071)
			int set = tmp20;		HX_STACK_VAR(set,"set");
			HX_STACK_LINE(1072)
			::String tmp21 = semantics->__get((int)0);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1072)
			ci->semantic = tmp21;
			HX_STACK_LINE(1073)
			ci->offset = offset;
			HX_STACK_LINE(1074)
			ci->set = set;
			HX_STACK_LINE(1075)
			bool tmp22 = (ci->semantic == HX_HCSTRING("joint","\x4a","\x39","\x28","\x52"));		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1075)
			if ((tmp22)){
				HX_STACK_LINE(1075)
				::haxor::io::file::ColladaInput tmp23 = ci;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1075)
				l->push(tmp23);
				HX_STACK_LINE(1075)
				continue;
			}
			HX_STACK_LINE(1076)
			bool tmp23 = (ci->semantic == HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1"));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1076)
			if ((tmp23)){
				HX_STACK_LINE(1080)
				Array< ::String > tmp24 = Array_obj< ::String >::__new();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1080)
				source = tmp24;
				HX_STACK_LINE(1081)
				Array< ::String > tmp25 = Array_obj< ::String >::__new();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1081)
				semantics = tmp25;
				HX_STACK_LINE(1082)
				Dynamic tmp26 = p->elementsNamed(HX_HCSTRING("vertices","\xf9","\xbf","\x15","\x6a"));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1082)
				Dynamic vi = tmp26;		HX_STACK_VAR(vi,"vi");
				HX_STACK_LINE(1083)
				bool tmp27 = vi->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic )();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1083)
				if ((tmp27)){
					HX_STACK_LINE(1085)
					::Xml tmp28 = vi->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1085)
					Dynamic tmp29 = tmp28->elementsNamed(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"));		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1085)
					vi = tmp29;
					HX_STACK_LINE(1086)
					while((true)){
						HX_STACK_LINE(1086)
						bool tmp30 = vi->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic )();		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1086)
						bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(1086)
						if ((tmp31)){
							HX_STACK_LINE(1086)
							break;
						}
						HX_STACK_LINE(1088)
						::Xml tmp32 = vi->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(1088)
						::Xml ni = tmp32;		HX_STACK_VAR(ni,"ni");
						HX_STACK_LINE(1089)
						::Xml tmp33 = ni;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(1089)
						Dynamic tmp34 = this->_p(tmp33,HX_HCSTRING("@source","\x1b","\x61","\x8f","\x97"),HX_HCSTRING("","\x00","\x00","\x00","\x00"),null(),null());		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(1089)
						source->push(tmp34);
						HX_STACK_LINE(1090)
						::Xml tmp35 = ni;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(1090)
						Dynamic tmp36 = this->_p(tmp35,HX_HCSTRING("@semantic","\x46","\xd1","\xcd","\x8d"),HX_HCSTRING("","\x00","\x00","\x00","\x00"),null(),null());		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(1090)
						Dynamic tmp37 = tmp36->__Field(HX_HCSTRING("toLowerCase","\x56","\x4c","\x64","\xb8"), hx::paccDynamic )();		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(1090)
						semantics->push(tmp37);
					}
				}
			}
			HX_STACK_LINE(1095)
			{
				HX_STACK_LINE(1095)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1095)
				int _g = source->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1095)
				while((true)){
					HX_STACK_LINE(1095)
					bool tmp24 = (_g1 < _g);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1095)
					bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1095)
					if ((tmp25)){
						HX_STACK_LINE(1095)
						break;
					}
					HX_STACK_LINE(1095)
					int tmp26 = (_g1)++;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1095)
					int i = tmp26;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1097)
					::haxor::io::file::ColladaInput tmp27 = ::haxor::io::file::ColladaInput_obj::__new();		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1097)
					ci = tmp27;
					HX_STACK_LINE(1099)
					::String tmp28 = source->__get(i);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1099)
					::String src = tmp28;		HX_STACK_VAR(src,"src");
					HX_STACK_LINE(1100)
					bool tmp29 = (src == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1100)
					if ((tmp29)){
						HX_STACK_LINE(1100)
						continue;
					}
					HX_STACK_LINE(1101)
					::String tmp30 = src.substr((int)1,null());		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1101)
					src = tmp30;
					HX_STACK_LINE(1102)
					::Xml tmp31 = p;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1102)
					::String tmp32 = src;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1102)
					::Xml tmp33 = this->_f(tmp31,HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(1102)
					::Xml sn = tmp33;		HX_STACK_VAR(sn,"sn");
					HX_STACK_LINE(1103)
					bool tmp34 = (sn == null());		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(1103)
					if ((tmp34)){
						HX_STACK_LINE(1103)
						continue;
					}
					HX_STACK_LINE(1104)
					::String tmp35 = semantics->__get(i);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(1104)
					ci->semantic = tmp35;
					HX_STACK_LINE(1105)
					bool tmp36 = (ci->semantic == HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(1105)
					if ((tmp36)){
						HX_STACK_LINE(1105)
						ci->semantic = HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1");
					}
					HX_STACK_LINE(1106)
					ci->offset = offset;
					HX_STACK_LINE(1107)
					ci->set = set;
					HX_STACK_LINE(1108)
					bool tmp37 = (ci->semantic == HX_HCSTRING("texcoord","\x6e","\x97","\x05","\x98"));		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(1108)
					if ((tmp37)){
						HX_STACK_LINE(1108)
						bool tmp38 = (set < (int)0);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(1108)
						if ((tmp38)){
							HX_STACK_LINE(1108)
							ci->set = (int)0;
						}
					}
					HX_STACK_LINE(1109)
					::Xml tmp38 = sn;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(1109)
					Dynamic tmp39 = this->_p(tmp38,HX_HCSTRING("technique_common.accessor.@stride","\x66","\x24","\x91","\xb2"),HX_HCSTRING("0","\x30","\x00","\x00","\x00"),null(),null());		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(1109)
					::String stride_str = tmp39;		HX_STACK_VAR(stride_str,"stride_str");
					HX_STACK_LINE(1110)
					::String tmp40 = stride_str;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(1110)
					Dynamic tmp41 = ::Std_obj::parseInt(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(1110)
					ci->stride = tmp41;
					HX_STACK_LINE(1111)
					::Xml tmp42 = sn;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(1111)
					Dynamic tmp43 = this->_p(tmp42,HX_HCSTRING("float_array.$text","\xd9","\xdb","\x04","\xb8"),HX_HCSTRING("","\x00","\x00","\x00","\x00"),null(),null());		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(1111)
					::String vs = tmp43;		HX_STACK_VAR(vs,"vs");
					HX_STACK_LINE(1112)
					::String tmp44 = vs;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(1112)
					Array< Float > tmp45 = this->_f32a(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(1112)
					ci->values = tmp45;
					HX_STACK_LINE(1114)
					::haxor::io::file::ColladaInput tmp46 = ci;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(1114)
					l->push(tmp46);
				}
			}
		}
		HX_STACK_LINE(1118)
		Array< ::Dynamic > tmp4 = l;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1118)
		return tmp4;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(ColladaFile_obj,ParseInputList,return )

Void ColladaFile_obj::TraverseStep( ::Xml n){
{
		HX_STACK_FRAME("haxor.io.file.ColladaFile","TraverseStep",0x039b0314,"haxor.io.file.ColladaFile.TraverseStep","haxor/io/file/ColladaFile.hx",1122,0xa1888587)
		HX_STACK_THIS(this)
		HX_STACK_ARG(n,"n")
		HX_STACK_LINE(1123)
		::Xml tmp = n;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1123)
		this->Parse(tmp);
		HX_STACK_LINE(1124)
		Dynamic tmp1 = n->elements();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1124)
		Dynamic l = tmp1;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1125)
		while((true)){
			HX_STACK_LINE(1125)
			bool tmp2 = l->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic )();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1125)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1125)
			if ((tmp3)){
				HX_STACK_LINE(1125)
				break;
			}
			HX_STACK_LINE(1125)
			::Xml tmp4 = l->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1125)
			this->TraverseStep(tmp4);
		}
	}
return null();
}


Array< Float > ColladaFile_obj::_f32a( ::String v){
	HX_STACK_FRAME("haxor.io.file.ColladaFile","_f32a",0x9bd71a85,"haxor.io.file.ColladaFile._f32a","haxor/io/file/ColladaFile.hx",1129,0xa1888587)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(1130)
	::String tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1130)
	::String tmp1 = ::StringTools_obj::replace(tmp,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"),HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1130)
	::String tmp2 = ::StringTools_obj::trim(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1130)
	Array< ::String > tmp3 = tmp2.split(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1130)
	Array< ::String > l = tmp3;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(1131)
	Array< Float > tmp4 = Array_obj< Float >::__new();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1131)
	Array< Float > a = tmp4;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(1133)
	{
		HX_STACK_LINE(1133)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1133)
		int _g = l->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1133)
		while((true)){
			HX_STACK_LINE(1133)
			bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1133)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1133)
			if ((tmp6)){
				HX_STACK_LINE(1133)
				break;
			}
			HX_STACK_LINE(1133)
			int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1133)
			int i = tmp7;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1133)
			::String tmp8 = l->__get(i);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1133)
			Float tmp9 = ::Std_obj::parseFloat(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1133)
			a->push(tmp9);
		}
	}
	HX_STACK_LINE(1135)
	Array< Float > tmp5 = a;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1135)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(ColladaFile_obj,_f32a,return )

Array< int > ColladaFile_obj::_i16a( ::String v){
	HX_STACK_FRAME("haxor.io.file.ColladaFile","_i16a",0x9dd13d5c,"haxor.io.file.ColladaFile._i16a","haxor/io/file/ColladaFile.hx",1139,0xa1888587)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(1140)
	::String tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1140)
	::String tmp1 = ::StringTools_obj::replace(tmp,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"),HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1140)
	::String tmp2 = ::StringTools_obj::trim(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1140)
	Array< ::String > tmp3 = tmp2.split(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1140)
	Array< ::String > l = tmp3;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(1141)
	Array< int > tmp4 = Array_obj< int >::__new();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1141)
	Array< int > a = tmp4;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(1142)
	{
		HX_STACK_LINE(1142)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1142)
		int _g = l->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1142)
		while((true)){
			HX_STACK_LINE(1142)
			bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1142)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1142)
			if ((tmp6)){
				HX_STACK_LINE(1142)
				break;
			}
			HX_STACK_LINE(1142)
			int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1142)
			int i = tmp7;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1142)
			::String tmp8 = l->__get(i);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1142)
			Dynamic tmp9 = ::Std_obj::parseInt(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1142)
			a->push(tmp9);
		}
	}
	HX_STACK_LINE(1143)
	Array< int > tmp5 = a;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1143)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(ColladaFile_obj,_i16a,return )

Array< ::Dynamic > ColladaFile_obj::_i16ta( ::String v,int s){
	HX_STACK_FRAME("haxor.io.file.ColladaFile","_i16ta",0x79448412,"haxor.io.file.ColladaFile._i16ta","haxor/io/file/ColladaFile.hx",1147,0xa1888587)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(1148)
	::String tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1148)
	::String tmp1 = ::StringTools_obj::replace(tmp,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"),HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1148)
	::String tmp2 = ::StringTools_obj::trim(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1148)
	Array< ::String > tmp3 = tmp2.split(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1148)
	Array< ::String > l = tmp3;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(1149)
	::String tl = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(tl,"tl");
	HX_STACK_LINE(1150)
	Array< ::Dynamic > tmp4 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1150)
	Array< ::Dynamic > a = tmp4;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(1151)
	Array< int > bf;		HX_STACK_VAR(bf,"bf");
	HX_STACK_LINE(1152)
	int k = (int)0;		HX_STACK_VAR(k,"k");
	HX_STACK_LINE(1154)
	while((true)){
		HX_STACK_LINE(1154)
		bool tmp5 = (k < l->length);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1154)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1154)
		if ((tmp6)){
			HX_STACK_LINE(1154)
			break;
		}
		HX_STACK_LINE(1156)
		Array< int > tmp7 = Array_obj< int >::__new();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1156)
		bf = tmp7;
		HX_STACK_LINE(1157)
		{
			HX_STACK_LINE(1157)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1157)
			while((true)){
				HX_STACK_LINE(1157)
				bool tmp8 = (_g < s);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1157)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1157)
				if ((tmp9)){
					HX_STACK_LINE(1157)
					break;
				}
				HX_STACK_LINE(1157)
				int tmp10 = (_g)++;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1157)
				int j = tmp10;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(1157)
				Array< ::String > tmp11 = l;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1157)
				int tmp12 = (k)++;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1157)
				::String tmp13 = tmp11->__get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1157)
				Dynamic tmp14 = ::Std_obj::parseInt(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1157)
				bf->push(tmp14);
			}
		}
		HX_STACK_LINE(1158)
		Array< int > tmp8 = bf;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1158)
		a->push(tmp8);
	}
	HX_STACK_LINE(1160)
	Array< ::Dynamic > tmp5 = a;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1160)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(ColladaFile_obj,_i16ta,return )

Array< ::Dynamic > ColladaFile_obj::GenerateTriangles( ::String p_type,Array< ::Dynamic > p_indexes,Array< int > p_vcount){
	HX_STACK_FRAME("haxor.io.file.ColladaFile","GenerateTriangles",0x4b1fb600,"haxor.io.file.ColladaFile.GenerateTriangles","haxor/io/file/ColladaFile.hx",37,0xa1888587)
	HX_STACK_ARG(p_type,"p_type")
	HX_STACK_ARG(p_indexes,"p_indexes")
	HX_STACK_ARG(p_vcount,"p_vcount")
	HX_STACK_LINE(38)
	Array< ::Dynamic > tmp = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	Array< ::Dynamic > triangles = tmp;		HX_STACK_VAR(triangles,"triangles");
	HX_STACK_LINE(39)
	::String tmp1 = p_type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(39)
	::String _switch_15 = (tmp1);
	if (  ( _switch_15==HX_HCSTRING("triangles","\xab","\x30","\x41","\x7f"))){
		HX_STACK_LINE(41)
		bool tmp2 = (p_indexes->length <= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(41)
		Array< ::Dynamic > tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(41)
		if ((tmp2)){
			HX_STACK_LINE(41)
			tmp3 = Array_obj< ::Dynamic >::__new();
		}
		else{
			HX_STACK_LINE(41)
			tmp3 = p_indexes->__get((int)0).StaticCast< Array< ::Dynamic > >();
		}
		HX_STACK_LINE(41)
		triangles = tmp3;
	}
	else if (  ( _switch_15==HX_HCSTRING("polygons","\xb9","\x28","\x51","\x2c"))){
		HX_STACK_LINE(43)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(43)
		int _g = p_indexes->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(43)
		while((true)){
			HX_STACK_LINE(43)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(43)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(43)
			if ((tmp3)){
				HX_STACK_LINE(43)
				break;
			}
			HX_STACK_LINE(43)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(43)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(45)
			Array< ::Dynamic > tmp5 = p_indexes->__get(i).StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(45)
			Array< ::Dynamic > tmp6 = p_indexes->__get(i).StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(45)
			int tmp7 = tmp6->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(45)
			Array< ::Dynamic > tmp8 = ::haxor::io::file::ColladaFile_obj::TriangulatePolygon(tmp5,tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(45)
			Array< ::Dynamic > tris = tmp8;		HX_STACK_VAR(tris,"tris");
			HX_STACK_LINE(46)
			while((true)){
				HX_STACK_LINE(46)
				bool tmp9 = (tris->length > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(46)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(46)
				if ((tmp10)){
					HX_STACK_LINE(46)
					break;
				}
				HX_STACK_LINE(46)
				Array< int > tmp11 = tris->shift().StaticCast< Array< int > >();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(46)
				triangles->push(tmp11);
			}
		}
	}
	else if (  ( _switch_15==HX_HCSTRING("polylist","\xaa","\xb0","\x9a","\x2f"))){
		HX_STACK_LINE(49)
		int k = (int)0;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(50)
		{
			HX_STACK_LINE(50)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(50)
			int _g = p_vcount->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(50)
			while((true)){
				HX_STACK_LINE(50)
				bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(50)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(50)
				if ((tmp3)){
					HX_STACK_LINE(50)
					break;
				}
				HX_STACK_LINE(50)
				int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(50)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(52)
				int tmp5 = p_vcount->__get(i);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(52)
				int o = tmp5;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(53)
				Array< ::Dynamic > tmp6 = p_indexes->__get((int)0).StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(53)
				int tmp7 = o;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(53)
				int tmp8 = k;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(53)
				Array< ::Dynamic > tmp9 = ::haxor::io::file::ColladaFile_obj::TriangulatePolygon(tmp6,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(53)
				Array< ::Dynamic > tris = tmp9;		HX_STACK_VAR(tris,"tris");
				HX_STACK_LINE(54)
				while((true)){
					HX_STACK_LINE(54)
					bool tmp10 = (tris->length > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(54)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(54)
					if ((tmp11)){
						HX_STACK_LINE(54)
						break;
					}
					HX_STACK_LINE(54)
					Array< int > tmp12 = tris->shift().StaticCast< Array< int > >();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(54)
					triangles->push(tmp12);
				}
				HX_STACK_LINE(55)
				hx::AddEq(k,o);
			}
		}
	}
	HX_STACK_LINE(58)
	Array< ::Dynamic > tmp2 = triangles;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(58)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ColladaFile_obj,GenerateTriangles,return )

Array< ::Dynamic > ColladaFile_obj::TriangulatePolygon( Array< ::Dynamic > t,int c,hx::Null< int >  __o_o){
int o = __o_o.Default(0);
	HX_STACK_FRAME("haxor.io.file.ColladaFile","TriangulatePolygon",0x3fc0d024,"haxor.io.file.ColladaFile.TriangulatePolygon","haxor/io/file/ColladaFile.hx",62,0xa1888587)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(o,"o")
{
		HX_STACK_LINE(63)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(64)
		int i0 = (int)0;		HX_STACK_VAR(i0,"i0");
		HX_STACK_LINE(65)
		int i1 = (int)1;		HX_STACK_VAR(i1,"i1");
		HX_STACK_LINE(66)
		int i2 = (int)2;		HX_STACK_VAR(i2,"i2");
		HX_STACK_LINE(67)
		Array< ::Dynamic > tmp = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(67)
		Array< ::Dynamic > res = tmp;		HX_STACK_VAR(res,"res");
		HX_STACK_LINE(68)
		while((true)){
			HX_STACK_LINE(68)
			bool tmp1 = (i2 < c);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(68)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(68)
			if ((tmp2)){
				HX_STACK_LINE(68)
				break;
			}
			HX_STACK_LINE(70)
			Array< ::Dynamic > tmp3 = t;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(70)
			int tmp4 = (i0 + o);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(70)
			Array< int > tmp5 = tmp3->__get(tmp4).StaticCast< Array< int > >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(70)
			Array< int > tmp6 = tmp5->copy();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(70)
			res->push(tmp6);
			HX_STACK_LINE(70)
			Array< ::Dynamic > tmp7 = t;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(70)
			int tmp8 = (i1 + o);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(70)
			Array< int > tmp9 = tmp7->__get(tmp8).StaticCast< Array< int > >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(70)
			Array< int > tmp10 = tmp9->copy();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(70)
			res->push(tmp10);
			HX_STACK_LINE(70)
			Array< ::Dynamic > tmp11 = t;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(70)
			int tmp12 = (i2 + o);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(70)
			Array< int > tmp13 = tmp11->__get(tmp12).StaticCast< Array< int > >();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(70)
			Array< int > tmp14 = tmp13->copy();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(70)
			res->push(tmp14);
			HX_STACK_LINE(71)
			(i1)++;
			HX_STACK_LINE(71)
			(i2)++;
		}
		HX_STACK_LINE(73)
		Array< ::Dynamic > tmp1 = res;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(73)
		return tmp1;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ColladaFile_obj,TriangulatePolygon,return )


ColladaFile_obj::ColladaFile_obj()
{
}

void ColladaFile_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ColladaFile);
	HX_MARK_MEMBER_NAME(xmlns,"xmlns");
	HX_MARK_MEMBER_NAME(version,"version");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(geometries,"geometries");
	HX_MARK_MEMBER_NAME(images,"images");
	HX_MARK_MEMBER_NAME(controllers,"controllers");
	HX_MARK_MEMBER_NAME(materials,"materials");
	HX_MARK_MEMBER_NAME(lights,"lights");
	HX_MARK_MEMBER_NAME(animations,"animations");
	HX_MARK_MEMBER_NAME(scene,"scene");
	HX_MARK_MEMBER_NAME(m_id,"m_id");
	::haxor::io::file::AssetXML_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ColladaFile_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(xmlns,"xmlns");
	HX_VISIT_MEMBER_NAME(version,"version");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(geometries,"geometries");
	HX_VISIT_MEMBER_NAME(images,"images");
	HX_VISIT_MEMBER_NAME(controllers,"controllers");
	HX_VISIT_MEMBER_NAME(materials,"materials");
	HX_VISIT_MEMBER_NAME(lights,"lights");
	HX_VISIT_MEMBER_NAME(animations,"animations");
	HX_VISIT_MEMBER_NAME(scene,"scene");
	HX_VISIT_MEMBER_NAME(m_id,"m_id");
	::haxor::io::file::AssetXML_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ColladaFile_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"m_id") ) { return m_id; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"xmlns") ) { return xmlns; }
		if (HX_FIELD_EQ(inName,"scene") ) { return scene; }
		if (HX_FIELD_EQ(inName,"Parse") ) { return Parse_dyn(); }
		if (HX_FIELD_EQ(inName,"_f32a") ) { return _f32a_dyn(); }
		if (HX_FIELD_EQ(inName,"_i16a") ) { return _i16a_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"images") ) { return images; }
		if (HX_FIELD_EQ(inName,"lights") ) { return lights; }
		if (HX_FIELD_EQ(inName,"_i16ta") ) { return _i16ta_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { return version; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"materials") ) { return materials; }
		if (HX_FIELD_EQ(inName,"get_asset") ) { return get_asset_dyn(); }
		if (HX_FIELD_EQ(inName,"ParseMesh") ) { return ParseMesh_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"geometries") ) { return geometries; }
		if (HX_FIELD_EQ(inName,"animations") ) { return animations; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"controllers") ) { return controllers; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"FindNodeById") ) { return FindNodeById_dyn(); }
		if (HX_FIELD_EQ(inName,"TraverseStep") ) { return TraverseStep_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"AddAnimations") ) { return AddAnimations_dyn(); }
		if (HX_FIELD_EQ(inName,"FindLightById") ) { return FindLightById_dyn(); }
		if (HX_FIELD_EQ(inName,"ParseGeometry") ) { return ParseGeometry_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ParsePrimitive") ) { return ParsePrimitive_dyn(); }
		if (HX_FIELD_EQ(inName,"ParseInputList") ) { return ParseInputList_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"ParseController") ) { return ParseController_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"FindGeometryById") ) { return FindGeometryById_dyn(); }
		if (HX_FIELD_EQ(inName,"FindMaterialById") ) { return FindMaterialById_dyn(); }
		if (HX_FIELD_EQ(inName,"ParseVisualScene") ) { return ParseVisualScene_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"ParseLightLibrary") ) { return ParseLightLibrary_dyn(); }
		if (HX_FIELD_EQ(inName,"ParseSceneLibrary") ) { return ParseSceneLibrary_dyn(); }
		if (HX_FIELD_EQ(inName,"ParseImageLibrary") ) { return ParseImageLibrary_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"CreateMeshRenderer") ) { return CreateMeshRenderer_dyn(); }
		if (HX_FIELD_EQ(inName,"FindControllerById") ) { return FindControllerById_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"ParseControllerSkin") ) { return ParseControllerSkin_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"ParseMaterialLibrary") ) { return ParseMaterialLibrary_dyn(); }
		if (HX_FIELD_EQ(inName,"ParseVisualSceneNode") ) { return ParseVisualSceneNode_dyn(); }
		if (HX_FIELD_EQ(inName,"ParseGeometryLibrary") ) { return ParseGeometryLibrary_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"ParseAnimationLibrary") ) { return ParseAnimationLibrary_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"ParseInstanceMaterials") ) { return ParseInstanceMaterials_dyn(); }
		if (HX_FIELD_EQ(inName,"ParseControllerLibrary") ) { return ParseControllerLibrary_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"TraverseVisualSceneNodes") ) { return TraverseVisualSceneNodes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ColladaFile_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"GenerateTriangles") ) { outValue = GenerateTriangles_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"TriangulatePolygon") ) { outValue = TriangulatePolygon_dyn(); return true;  }
	}
	return false;
}

Dynamic ColladaFile_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::haxor::io::file::ColladaAssetData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_id") ) { m_id=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"xmlns") ) { xmlns=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scene") ) { scene=inValue.Cast< ::haxor::io::file::ColladaVisualScene >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"images") ) { images=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lights") ) { lights=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"materials") ) { materials=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"geometries") ) { geometries=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"animations") ) { animations=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"controllers") ) { controllers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ColladaFile_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ColladaFile_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("xmlns","\xdc","\x31","\x74","\x60"));
	outFields->push(HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("geometries","\x90","\xc7","\xe8","\x90"));
	outFields->push(HX_HCSTRING("images","\xb8","\x50","\x92","\xfe"));
	outFields->push(HX_HCSTRING("controllers","\x57","\xf0","\x06","\x22"));
	outFields->push(HX_HCSTRING("materials","\xec","\xb5","\x0b","\xa0"));
	outFields->push(HX_HCSTRING("lights","\xdd","\x2a","\x02","\xe8"));
	outFields->push(HX_HCSTRING("animations","\xef","\x34","\x1c","\x83"));
	outFields->push(HX_HCSTRING("scene","\x4c","\xd9","\xd1","\x78"));
	outFields->push(HX_HCSTRING("m_id","\xad","\xb3","\x54","\x48"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(ColladaFile_obj,xmlns),HX_HCSTRING("xmlns","\xdc","\x31","\x74","\x60")},
	{hx::fsString,(int)offsetof(ColladaFile_obj,version),HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c")},
	{hx::fsObject /*::haxor::io::file::ColladaAssetData*/ ,(int)offsetof(ColladaFile_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ColladaFile_obj,geometries),HX_HCSTRING("geometries","\x90","\xc7","\xe8","\x90")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ColladaFile_obj,images),HX_HCSTRING("images","\xb8","\x50","\x92","\xfe")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ColladaFile_obj,controllers),HX_HCSTRING("controllers","\x57","\xf0","\x06","\x22")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ColladaFile_obj,materials),HX_HCSTRING("materials","\xec","\xb5","\x0b","\xa0")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ColladaFile_obj,lights),HX_HCSTRING("lights","\xdd","\x2a","\x02","\xe8")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ColladaFile_obj,animations),HX_HCSTRING("animations","\xef","\x34","\x1c","\x83")},
	{hx::fsObject /*::haxor::io::file::ColladaVisualScene*/ ,(int)offsetof(ColladaFile_obj,scene),HX_HCSTRING("scene","\x4c","\xd9","\xd1","\x78")},
	{hx::fsInt,(int)offsetof(ColladaFile_obj,m_id),HX_HCSTRING("m_id","\xad","\xb3","\x54","\x48")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("xmlns","\xdc","\x31","\x74","\x60"),
	HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("geometries","\x90","\xc7","\xe8","\x90"),
	HX_HCSTRING("images","\xb8","\x50","\x92","\xfe"),
	HX_HCSTRING("controllers","\x57","\xf0","\x06","\x22"),
	HX_HCSTRING("materials","\xec","\xb5","\x0b","\xa0"),
	HX_HCSTRING("lights","\xdd","\x2a","\x02","\xe8"),
	HX_HCSTRING("animations","\xef","\x34","\x1c","\x83"),
	HX_HCSTRING("scene","\x4c","\xd9","\xd1","\x78"),
	HX_HCSTRING("m_id","\xad","\xb3","\x54","\x48"),
	HX_HCSTRING("get_asset","\x47","\xc6","\xe2","\x69"),
	HX_HCSTRING("AddAnimations","\x50","\xce","\x55","\x35"),
	HX_HCSTRING("CreateMeshRenderer","\x8c","\x61","\xf6","\x23"),
	HX_HCSTRING("FindLightById","\xef","\xe9","\xe2","\xe2"),
	HX_HCSTRING("FindGeometryById","\x5d","\x53","\xbe","\x91"),
	HX_HCSTRING("FindControllerById","\x87","\x56","\x0f","\x53"),
	HX_HCSTRING("FindNodeById","\x2d","\x92","\x30","\xa0"),
	HX_HCSTRING("FindMaterialById","\xd2","\x4b","\x87","\x18"),
	HX_HCSTRING("Parse","\x13","\x00","\x83","\x50"),
	HX_HCSTRING("ParseLightLibrary","\x78","\xc1","\x00","\x1e"),
	HX_HCSTRING("ParseAnimationLibrary","\x8a","\x7a","\xf8","\xe5"),
	HX_HCSTRING("ParseMaterialLibrary","\x41","\xfa","\xa3","\xff"),
	HX_HCSTRING("ParseSceneLibrary","\xc2","\x13","\x25","\xfc"),
	HX_HCSTRING("ParseVisualScene","\x19","\xe9","\x81","\xb5"),
	HX_HCSTRING("TraverseVisualSceneNodes","\x17","\x8c","\x0e","\x85"),
	HX_HCSTRING("ParseVisualSceneNode","\xbb","\x1f","\x12","\x00"),
	HX_HCSTRING("ParseInstanceMaterials","\x04","\xd6","\xc6","\xfe"),
	HX_HCSTRING("ParseControllerLibrary","\x2c","\xbc","\x50","\xf5"),
	HX_HCSTRING("ParseController","\x8f","\x92","\x34","\xbe"),
	HX_HCSTRING("ParseControllerSkin","\xac","\xc8","\x60","\xf6"),
	HX_HCSTRING("ParseImageLibrary","\x93","\x3d","\x97","\xad"),
	HX_HCSTRING("ParseGeometryLibrary","\x96","\xfb","\x2b","\xdf"),
	HX_HCSTRING("ParseGeometry","\xe5","\x89","\xc8","\x5f"),
	HX_HCSTRING("ParseMesh","\xa0","\x7b","\xd2","\x71"),
	HX_HCSTRING("ParsePrimitive","\x14","\x4e","\xcf","\x15"),
	HX_HCSTRING("ParseInputList","\xf5","\x9e","\x54","\xfd"),
	HX_HCSTRING("TraverseStep","\x3e","\x9e","\x87","\x7c"),
	HX_HCSTRING("_f32a","\x1b","\xbe","\xa3","\xf6"),
	HX_HCSTRING("_i16a","\xf2","\xe0","\x9d","\xf8"),
	HX_HCSTRING("_i16ta","\xbc","\x03","\x87","\x91"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColladaFile_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColladaFile_obj::__mClass,"__mClass");
};

#endif

hx::Class ColladaFile_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("GenerateTriangles","\x96","\x62","\x9e","\x16"),
	HX_HCSTRING("TriangulatePolygon","\xce","\x26","\x19","\x83"),
	String(null()) };

void ColladaFile_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.io.file.ColladaFile","\x58","\x31","\xed","\xa9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ColladaFile_obj::__GetStatic;
	__mClass->mSetStaticField = &ColladaFile_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ColladaFile_obj >;
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
} // end namespace file
