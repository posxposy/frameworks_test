#include <hxcpp.h>

#ifndef INCLUDED_haxor_graphics_CursorMode
#include <haxor/graphics/CursorMode.h>
#endif
#ifndef INCLUDED_haxor_graphics_GraphicAPI
#include <haxor/graphics/GraphicAPI.h>
#endif
#ifndef INCLUDED_haxor_core_ColliderType
#include <haxor/core/ColliderType.h>
#endif
#ifndef INCLUDED_haxor_core_InputState
#include <haxor/core/InputState.h>
#endif
#ifndef INCLUDED_haxor_core_TextureType
#include <haxor/core/TextureType.h>
#endif
#ifndef INCLUDED_haxor_core_EngineState
#include <haxor/core/EngineState.h>
#endif
#ifndef INCLUDED_haxor_core_ApplicationProtocol
#include <haxor/core/ApplicationProtocol.h>
#endif
#ifndef INCLUDED_haxor_core_Platform
#include <haxor/core/Platform.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_sys_net_Socket
#include <sys/net/Socket.h>
#endif
#ifndef INCLUDED_sys_net__Socket_SocketOutput
#include <sys/net/_Socket/SocketOutput.h>
#endif
#ifndef INCLUDED_sys_net__Socket_SocketInput
#include <sys/net/_Socket/SocketInput.h>
#endif
#ifndef INCLUDED_sys_net_Host
#include <sys/net/Host.h>
#endif
#ifndef INCLUDED_haxor_net_Web
#include <haxor/net/Web.h>
#endif
#ifndef INCLUDED_haxor_platform_windows_net_HTTPRequest
#include <haxor/platform/windows/net/HTTPRequest.h>
#endif
#ifndef INCLUDED_haxor_math_Mathf
#include <haxor/math/Mathf.h>
#endif
#ifndef INCLUDED_haxor_input_KeyCode
#include <haxor/input/KeyCode.h>
#endif
#ifndef INCLUDED_haxor_input_Joystick
#include <haxor/input/Joystick.h>
#endif
#ifndef INCLUDED_haxor_input_Input
#include <haxor/input/Input.h>
#endif
#ifndef INCLUDED_haxor_graphics_material_Shader
#include <haxor/graphics/material/Shader.h>
#endif
#ifndef INCLUDED_haxor_graphics_material_MaterialUniform
#include <haxor/graphics/material/MaterialUniform.h>
#endif
#ifndef INCLUDED_haxor_graphics_material_Material
#include <haxor/graphics/material/Material.h>
#endif
#ifndef INCLUDED_haxor_graphics_Graphics
#include <haxor/graphics/Graphics.h>
#endif
#ifndef INCLUDED_haxor_graphics_GL
#include <haxor/graphics/GL.h>
#endif
#ifndef INCLUDED_haxor_graphics_Fog
#include <haxor/graphics/Fog.h>
#endif
#ifndef INCLUDED_haxor_core_ShaderPrecision
#include <haxor/core/ShaderPrecision.h>
#endif
#ifndef INCLUDED_haxor_core_ShaderFeature
#include <haxor/core/ShaderFeature.h>
#endif
#ifndef INCLUDED_haxor_core_BoneQuality
#include <haxor/core/BoneQuality.h>
#endif
#ifndef INCLUDED_haxor_core_ForceMode
#include <haxor/core/ForceMode.h>
#endif
#ifndef INCLUDED_haxor_core_AnimationWrap
#include <haxor/core/AnimationWrap.h>
#endif
#ifndef INCLUDED_haxor_core_ClearFlag
#include <haxor/core/ClearFlag.h>
#endif
#ifndef INCLUDED_haxor_core_TextureWrap
#include <haxor/core/TextureWrap.h>
#endif
#ifndef INCLUDED_haxor_core_TextureFilter
#include <haxor/core/TextureFilter.h>
#endif
#ifndef INCLUDED_haxor_core_PixelFormat
#include <haxor/core/PixelFormat.h>
#endif
#ifndef INCLUDED_haxor_core_CameraMode
#include <haxor/core/CameraMode.h>
#endif
#ifndef INCLUDED_haxor_core_DepthTest
#include <haxor/core/DepthTest.h>
#endif
#ifndef INCLUDED_haxor_core_CullMode
#include <haxor/core/CullMode.h>
#endif
#ifndef INCLUDED_haxor_core_MeshPrimitive
#include <haxor/core/MeshPrimitive.h>
#endif
#ifndef INCLUDED_haxor_core_MeshMode
#include <haxor/core/MeshMode.h>
#endif
#ifndef INCLUDED_haxor_core_BlendMode
#include <haxor/core/BlendMode.h>
#endif
#ifndef INCLUDED_haxor_core_RenderQueue
#include <haxor/core/RenderQueue.h>
#endif
#ifndef INCLUDED_haxor_core_Entity
#include <haxor/core/Entity.h>
#endif
#ifndef INCLUDED_haxor_core_Debug
#include <haxor/core/Debug.h>
#endif
#ifndef INCLUDED_haxor_core_Console
#include <haxor/core/Console.h>
#endif
#ifndef INCLUDED_haxor_core_Asset
#include <haxor/core/Asset.h>
#endif
#ifndef INCLUDED_haxor_context_ShaderContext
#include <haxor/context/ShaderContext.h>
#endif
#ifndef INCLUDED_haxor_context_BaseProcess
#include <haxor/context/BaseProcess.h>
#endif
#ifndef INCLUDED_haxor_context_Gizmo
#include <haxor/context/Gizmo.h>
#endif
#ifndef INCLUDED_haxor_context_EngineContext
#include <haxor/context/EngineContext.h>
#endif
#ifndef INCLUDED_haxor_context_DataContext
#include <haxor/context/DataContext.h>
#endif
#ifndef INCLUDED_haxor_component_light_Light
#include <haxor/component/light/Light.h>
#endif
#ifndef INCLUDED_haxor_component_animation_QuaternionKeyFrame
#include <haxor/component/animation/QuaternionKeyFrame.h>
#endif
#ifndef INCLUDED_haxor_component_animation_Vector3KeyFrame
#include <haxor/component/animation/Vector3KeyFrame.h>
#endif
#ifndef INCLUDED_haxor_component_animation_FloatKeyFrame
#include <haxor/component/animation/FloatKeyFrame.h>
#endif
#ifndef INCLUDED_haxor_component_Transform
#include <haxor/component/Transform.h>
#endif
#ifndef INCLUDED_haxor_component_CameraOrbitInput
#include <haxor/component/CameraOrbitInput.h>
#endif
#ifndef INCLUDED_haxor_component_CameraOrbit
#include <haxor/component/CameraOrbit.h>
#endif
#ifndef INCLUDED_haxor_component_Camera
#include <haxor/component/Camera.h>
#endif
#ifndef INCLUDED_haxe_xml_Parser
#include <haxe/xml/Parser.h>
#endif
#ifndef INCLUDED_haxe_crypto_Base64
#include <haxe/crypto/Base64.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Http
#include <haxe/Http.h>
#endif
#ifndef INCLUDED_bm_Stage
#include <bm/Stage.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_thread_Kernel
#include <haxor/thread/Kernel.h>
#endif
#ifndef INCLUDED_haxor_platform_windows_input_WinInputHandler
#include <haxor/platform/windows/input/WinInputHandler.h>
#endif
#ifndef INCLUDED_haxor_platform_windows_Window
#include <haxor/platform/windows/Window.h>
#endif
#ifndef INCLUDED_haxor_platform_windows_Entry
#include <haxor/platform/windows/Entry.h>
#endif
#ifndef INCLUDED_haxor_platform_html_BrowserAgent
#include <haxor/platform/html/BrowserAgent.h>
#endif
#ifndef INCLUDED_haxor_platform_graphics_OpenGL
#include <haxor/platform/graphics/OpenGL.h>
#endif
#ifndef INCLUDED_haxor_platform_windows_graphics_WinGL
#include <haxor/platform/windows/graphics/WinGL.h>
#endif
#ifndef INCLUDED_haxor_platform_OSWindow
#include <haxor/platform/OSWindow.h>
#endif
#ifndef INCLUDED_haxor_physics_broadphase_SAPBroadPhase
#include <haxor/physics/broadphase/SAPBroadPhase.h>
#endif
#ifndef INCLUDED_haxor_physics_broadphase_BroadPhase
#include <haxor/physics/broadphase/BroadPhase.h>
#endif
#ifndef INCLUDED_haxor_physics_PhysicsMaterial
#include <haxor/physics/PhysicsMaterial.h>
#endif
#ifndef INCLUDED_haxor_physics_Physics
#include <haxor/physics/Physics.h>
#endif
#ifndef INCLUDED_haxor_physics_CollisionSolver
#include <haxor/physics/CollisionSolver.h>
#endif
#ifndef INCLUDED_haxor_physics_Collision
#include <haxor/physics/Collision.h>
#endif
#ifndef INCLUDED_haxor_net_Texture2DLoader
#include <haxor/net/Texture2DLoader.h>
#endif
#ifndef INCLUDED_haxor_platform_windows_net_BitmapLoader
#include <haxor/platform/windows/net/BitmapLoader.h>
#endif
#ifndef INCLUDED_haxor_platform_windows_net_HTTPLoader
#include <haxor/platform/windows/net/HTTPLoader.h>
#endif
#ifndef INCLUDED_haxor_net_HTTPRequestTask
#include <haxor/net/HTTPRequestTask.h>
#endif
#ifndef INCLUDED_haxor_thread_Task
#include <haxor/thread/Task.h>
#endif
#ifndef INCLUDED_haxor_thread_Activity
#include <haxor/thread/Activity.h>
#endif
#ifndef INCLUDED_haxor_math_Vector4
#include <haxor/math/Vector4.h>
#endif
#ifndef INCLUDED_haxor_math_Vector2
#include <haxor/math/Vector2.h>
#endif
#ifndef INCLUDED_haxor_math_Random
#include <haxor/math/Random.h>
#endif
#ifndef INCLUDED_haxor_math_AABB3
#include <haxor/math/AABB3.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_haxor_HaxorFormatter
#include <haxor/io/serialization/haxor/HaxorFormatter.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_SerializedField
#include <haxor/io/serialization/SerializedField.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_SerializedData
#include <haxor/io/serialization/SerializedData.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_Formatter
#include <haxor/io/serialization/Formatter.h>
#endif
#ifndef INCLUDED_haxor_io_file_ColladaLight
#include <haxor/io/file/ColladaLight.h>
#endif
#ifndef INCLUDED_haxor_io_file_ColladaAnimationKeyFrame
#include <haxor/io/file/ColladaAnimationKeyFrame.h>
#endif
#ifndef INCLUDED_haxor_io_file_ColladaAnimationChannel
#include <haxor/io/file/ColladaAnimationChannel.h>
#endif
#ifndef INCLUDED_haxor_io_file_ColladaAnimation
#include <haxor/io/file/ColladaAnimation.h>
#endif
#ifndef INCLUDED_haxor_io_file_ColladaMaterial
#include <haxor/io/file/ColladaMaterial.h>
#endif
#ifndef INCLUDED_haxor_io_file_ColladaInstance
#include <haxor/io/file/ColladaInstance.h>
#endif
#ifndef INCLUDED_haxor_io_file_ColladaNode
#include <haxor/io/file/ColladaNode.h>
#endif
#ifndef INCLUDED_haxor_io_file_ColladaVisualScene
#include <haxor/io/file/ColladaVisualScene.h>
#endif
#ifndef INCLUDED_haxor_io_file_ColladaController
#include <haxor/io/file/ColladaController.h>
#endif
#ifndef INCLUDED_haxor_io_file_ColladaImage
#include <haxor/io/file/ColladaImage.h>
#endif
#ifndef INCLUDED_haxor_io_file_ColladaInput
#include <haxor/io/file/ColladaInput.h>
#endif
#ifndef INCLUDED_haxor_io_file_ColladaPrimitive
#include <haxor/io/file/ColladaPrimitive.h>
#endif
#ifndef INCLUDED_haxor_io_file_ColladaMesh
#include <haxor/io/file/ColladaMesh.h>
#endif
#ifndef INCLUDED_haxor_io_file_ColladaGeometry
#include <haxor/io/file/ColladaGeometry.h>
#endif
#ifndef INCLUDED_haxor_io_file_ColladaAssetData
#include <haxor/io/file/ColladaAssetData.h>
#endif
#ifndef INCLUDED_haxor_io_file_ColladaFile
#include <haxor/io/file/ColladaFile.h>
#endif
#ifndef INCLUDED_haxor_io_file_AssetXML
#include <haxor/io/file/AssetXML.h>
#endif
#ifndef INCLUDED_haxor_io_file_AssetFile
#include <haxor/io/file/AssetFile.h>
#endif
#ifndef INCLUDED_haxor_io_UInt16Array
#include <haxor/io/UInt16Array.h>
#endif
#ifndef INCLUDED_haxor_io_Int32Array
#include <haxor/io/Int32Array.h>
#endif
#ifndef INCLUDED_haxor_io_FloatArray
#include <haxor/io/FloatArray.h>
#endif
#ifndef INCLUDED_haxor_io_Buffer
#include <haxor/io/Buffer.h>
#endif
#ifndef INCLUDED_haxor_input_Touch
#include <haxor/input/Touch.h>
#endif
#ifndef INCLUDED_haxor_input_InputHandler
#include <haxor/input/InputHandler.h>
#endif
#ifndef INCLUDED_haxor_input_InputLog
#include <haxor/input/InputLog.h>
#endif
#ifndef INCLUDED_haxor_graphics_texture_TextureCube
#include <haxor/graphics/texture/TextureCube.h>
#endif
#ifndef INCLUDED_haxor_graphics_texture_RenderTexture
#include <haxor/graphics/texture/RenderTexture.h>
#endif
#ifndef INCLUDED_haxor_graphics_texture_ComputeTexture
#include <haxor/graphics/texture/ComputeTexture.h>
#endif
#ifndef INCLUDED_haxor_graphics_texture_Texture2D
#include <haxor/graphics/texture/Texture2D.h>
#endif
#ifndef INCLUDED_haxor_graphics_texture_Texture
#include <haxor/graphics/texture/Texture.h>
#endif
#ifndef INCLUDED_haxor_graphics_mesh_Model
#include <haxor/graphics/mesh/Model.h>
#endif
#ifndef INCLUDED_haxor_graphics_mesh_Mesh4
#include <haxor/graphics/mesh/Mesh4.h>
#endif
#ifndef INCLUDED_haxor_graphics_mesh_Mesh2
#include <haxor/graphics/mesh/Mesh2.h>
#endif
#ifndef INCLUDED_haxor_graphics_mesh_Mesh23
#include <haxor/graphics/mesh/Mesh23.h>
#endif
#ifndef INCLUDED_haxor_graphics_mesh_Mesh2D
#include <haxor/graphics/mesh/Mesh2D.h>
#endif
#ifndef INCLUDED_haxor_graphics_mesh_SkinnedMesh3
#include <haxor/graphics/mesh/SkinnedMesh3.h>
#endif
#ifndef INCLUDED_haxor_graphics_mesh_Mesh3
#include <haxor/graphics/mesh/Mesh3.h>
#endif
#ifndef INCLUDED_haxor_graphics_mesh_MeshLayout
#include <haxor/graphics/mesh/MeshLayout.h>
#endif
#ifndef INCLUDED_haxor_graphics_mesh_MeshAttrib
#include <haxor/graphics/mesh/MeshAttrib.h>
#endif
#ifndef INCLUDED_haxor_graphics_mesh_Mesh
#include <haxor/graphics/mesh/Mesh.h>
#endif
#ifndef INCLUDED_haxor_graphics_material_shader_FlexShader
#include <haxor/graphics/material/shader/FlexShader.h>
#endif
#ifndef INCLUDED_haxor_graphics_material_UberShader
#include <haxor/graphics/material/UberShader.h>
#endif
#ifndef INCLUDED_haxor_graphics_material_ShaderCompileResult
#include <haxor/graphics/material/ShaderCompileResult.h>
#endif
#ifndef INCLUDED_haxor_graphics_material_ShaderCompilation
#include <haxor/graphics/material/ShaderCompilation.h>
#endif
#ifndef INCLUDED_haxor_graphics_material_ShaderError
#include <haxor/graphics/material/ShaderError.h>
#endif
#ifndef INCLUDED_haxor_graphics_material_UniformInfo
#include <haxor/graphics/material/UniformInfo.h>
#endif
#ifndef INCLUDED_haxor_graphics_Screen
#include <haxor/graphics/Screen.h>
#endif
#ifndef INCLUDED_haxor_math_AABB2
#include <haxor/math/AABB2.h>
#endif
#ifndef INCLUDED_haxor_graphics_GraphicContext
#include <haxor/graphics/GraphicContext.h>
#endif
#ifndef INCLUDED_haxor_graphics_Gizmo
#include <haxor/graphics/Gizmo.h>
#endif
#ifndef INCLUDED_haxor_graphics_Bitmap
#include <haxor/graphics/Bitmap.h>
#endif
#ifndef INCLUDED_haxor_ds_USet
#include <haxor/ds/USet.h>
#endif
#ifndef INCLUDED_haxor_ds_IUSetItem
#include <haxor/ds/IUSetItem.h>
#endif
#ifndef INCLUDED_haxor_ds_SAPInterval
#include <haxor/ds/SAPInterval.h>
#endif
#ifndef INCLUDED_haxor_ds_SAPList
#include <haxor/ds/SAPList.h>
#endif
#ifndef INCLUDED_haxor_ds_SAP
#include <haxor/ds/SAP.h>
#endif
#ifndef INCLUDED_haxor_ds_Pool
#include <haxor/ds/Pool.h>
#endif
#ifndef INCLUDED_haxor_ds_PairTable
#include <haxor/ds/PairTable.h>
#endif
#ifndef INCLUDED_haxor_core_Time
#include <haxor/core/Time.h>
#endif
#ifndef INCLUDED_haxor_core_Scene
#include <haxor/core/Scene.h>
#endif
#ifndef INCLUDED_haxor_core_RenderStats
#include <haxor/core/RenderStats.h>
#endif
#ifndef INCLUDED_haxor_core_RenderEngine
#include <haxor/core/RenderEngine.h>
#endif
#ifndef INCLUDED_haxor_core_ILateUpdateable
#include <haxor/core/ILateUpdateable.h>
#endif
#ifndef INCLUDED_haxor_core_IFixedUpdateable
#include <haxor/core/IFixedUpdateable.h>
#endif
#ifndef INCLUDED_haxor_io_serialization_ISerializable
#include <haxor/io/serialization/ISerializable.h>
#endif
#ifndef INCLUDED_haxor_core_Engine
#include <haxor/core/Engine.h>
#endif
#ifndef INCLUDED_haxor_context_UID
#include <haxor/context/UID.h>
#endif
#ifndef INCLUDED_haxor_context_TransformContext
#include <haxor/context/TransformContext.h>
#endif
#ifndef INCLUDED_haxor_context_TextureContext
#include <haxor/context/TextureContext.h>
#endif
#ifndef INCLUDED_haxor_context_RendererContext
#include <haxor/context/RendererContext.h>
#endif
#ifndef INCLUDED_haxor_context_Process
#include <haxor/context/Process.h>
#endif
#ifndef INCLUDED_haxor_context_PhysicsContext
#include <haxor/context/PhysicsContext.h>
#endif
#ifndef INCLUDED_haxor_context_ParticleContext
#include <haxor/context/ParticleContext.h>
#endif
#ifndef INCLUDED_haxor_context_MeshContext
#include <haxor/context/MeshContext.h>
#endif
#ifndef INCLUDED_haxor_context_MaterialContext
#include <haxor/context/MaterialContext.h>
#endif
#ifndef INCLUDED_haxor_context_KernelContext
#include <haxor/context/KernelContext.h>
#endif
#ifndef INCLUDED_haxor_context_CanvasGizmo
#include <haxor/context/CanvasGizmo.h>
#endif
#ifndef INCLUDED_haxor_context_PointGizmo
#include <haxor/context/PointGizmo.h>
#endif
#ifndef INCLUDED_haxor_context_LineGizmo
#include <haxor/context/LineGizmo.h>
#endif
#ifndef INCLUDED_haxor_context_AxisGizmo
#include <haxor/context/AxisGizmo.h>
#endif
#ifndef INCLUDED_haxor_context_WireCubeGizmo
#include <haxor/context/WireCubeGizmo.h>
#endif
#ifndef INCLUDED_haxor_context_WireSphereGizmo
#include <haxor/context/WireSphereGizmo.h>
#endif
#ifndef INCLUDED_haxor_math_Matrix4
#include <haxor/math/Matrix4.h>
#endif
#ifndef INCLUDED_haxor_context_GizmoContext
#include <haxor/context/GizmoContext.h>
#endif
#ifndef INCLUDED_haxor_context_CameraContext
#include <haxor/context/CameraContext.h>
#endif
#ifndef INCLUDED_haxor_component_physics_SphereCollider
#include <haxor/component/physics/SphereCollider.h>
#endif
#ifndef INCLUDED_haxor_component_physics_RigidBody
#include <haxor/component/physics/RigidBody.h>
#endif
#ifndef INCLUDED_haxor_component_physics_BoxCollider
#include <haxor/component/physics/BoxCollider.h>
#endif
#ifndef INCLUDED_haxor_component_physics_Collider
#include <haxor/component/physics/Collider.h>
#endif
#ifndef INCLUDED_haxor_component_light_PointLight
#include <haxor/component/light/PointLight.h>
#endif
#ifndef INCLUDED_haxor_math_Color
#include <haxor/math/Color.h>
#endif
#ifndef INCLUDED_haxor_math_Quaternion
#include <haxor/math/Quaternion.h>
#endif
#ifndef INCLUDED_haxor_math_Vector3
#include <haxor/math/Vector3.h>
#endif
#ifndef INCLUDED_haxor_component_animation_KeyFrame
#include <haxor/component/animation/KeyFrame.h>
#endif
#ifndef INCLUDED_haxor_component_animation_ClipTrack
#include <haxor/component/animation/ClipTrack.h>
#endif
#ifndef INCLUDED_haxor_component_animation_AnimationEvent
#include <haxor/component/animation/AnimationEvent.h>
#endif
#ifndef INCLUDED_haxor_component_animation_AnimationClip
#include <haxor/component/animation/AnimationClip.h>
#endif
#ifndef INCLUDED_haxor_component_animation_Animation
#include <haxor/component/animation/Animation.h>
#endif
#ifndef INCLUDED_haxor_component_SkinnedMeshRenderer
#include <haxor/component/SkinnedMeshRenderer.h>
#endif
#ifndef INCLUDED_haxor_component_DataComponent
#include <haxor/component/DataComponent.h>
#endif
#ifndef INCLUDED_haxor_core_IUpdateable
#include <haxor/core/IUpdateable.h>
#endif
#ifndef INCLUDED_haxor_core_IResizeable
#include <haxor/core/IResizeable.h>
#endif
#ifndef INCLUDED_haxe_xml_Printer
#include <haxe/xml/Printer.h>
#endif
#ifndef INCLUDED_haxe_rtti_Meta
#include <haxe/rtti/Meta.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_BytesOutput
#include <haxe/io/BytesOutput.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_haxe_format_JsonPrinter
#include <haxe/format/JsonPrinter.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_crypto_BaseCode
#include <haxe/crypto/BaseCode.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_Utf8
#include <haxe/Utf8.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_cpp_vm_Thread
#include <cpp/vm/Thread.h>
#endif
#ifndef INCLUDED_haxor_component_MeshRenderer
#include <haxor/component/MeshRenderer.h>
#endif
#ifndef INCLUDED_haxor_component_Renderer
#include <haxor/component/Renderer.h>
#endif
#ifndef INCLUDED_bm_Sprite
#include <bm/Sprite.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_BunnyMark
#include <BunnyMark.h>
#endif
#ifndef INCLUDED_haxor_core_IRenderable
#include <haxor/core/IRenderable.h>
#endif
#ifndef INCLUDED_haxor_core_Application
#include <haxor/core/Application.h>
#endif
#ifndef INCLUDED_haxor_platform_windows_WinApplication
#include <haxor/platform/windows/WinApplication.h>
#endif
#ifndef INCLUDED_haxor_core_BaseApplication
#include <haxor/core/BaseApplication.h>
#endif
#ifndef INCLUDED_haxor_component_Behaviour
#include <haxor/component/Behaviour.h>
#endif
#ifndef INCLUDED_haxor_component_Component
#include <haxor/component/Component.h>
#endif
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif

void __files__boot();

void __boot_all()
{
__files__boot();
hx::RegisterResources( hx::GetResources() );
::haxor::graphics::CursorMode_obj::__register();
::haxor::graphics::GraphicAPI_obj::__register();
::haxor::core::ColliderType_obj::__register();
::haxor::core::InputState_obj::__register();
::haxor::core::TextureType_obj::__register();
::haxor::core::EngineState_obj::__register();
::haxor::core::ApplicationProtocol_obj::__register();
::haxor::core::Platform_obj::__register();
::haxe::io::Error_obj::__register();
::ValueType_obj::__register();
::sys::net::Socket_obj::__register();
::sys::net::_Socket::SocketOutput_obj::__register();
::sys::net::_Socket::SocketInput_obj::__register();
::sys::net::Host_obj::__register();
::haxor::net::Web_obj::__register();
::haxor::platform::windows::net::HTTPRequest_obj::__register();
::haxor::math::Mathf_obj::__register();
::haxor::input::KeyCode_obj::__register();
::haxor::input::Joystick_obj::__register();
::haxor::input::Input_obj::__register();
::haxor::graphics::material::Shader_obj::__register();
::haxor::graphics::material::MaterialUniform_obj::__register();
::haxor::graphics::material::Material_obj::__register();
::haxor::graphics::Graphics_obj::__register();
::haxor::graphics::GL_obj::__register();
::haxor::graphics::Fog_obj::__register();
::haxor::core::ShaderPrecision_obj::__register();
::haxor::core::ShaderFeature_obj::__register();
::haxor::core::BoneQuality_obj::__register();
::haxor::core::ForceMode_obj::__register();
::haxor::core::AnimationWrap_obj::__register();
::haxor::core::ClearFlag_obj::__register();
::haxor::core::TextureWrap_obj::__register();
::haxor::core::TextureFilter_obj::__register();
::haxor::core::PixelFormat_obj::__register();
::haxor::core::CameraMode_obj::__register();
::haxor::core::DepthTest_obj::__register();
::haxor::core::CullMode_obj::__register();
::haxor::core::MeshPrimitive_obj::__register();
::haxor::core::MeshMode_obj::__register();
::haxor::core::BlendMode_obj::__register();
::haxor::core::RenderQueue_obj::__register();
::haxor::core::Entity_obj::__register();
::haxor::core::Debug_obj::__register();
::haxor::core::Console_obj::__register();
::haxor::core::Asset_obj::__register();
::haxor::context::ShaderContext_obj::__register();
::haxor::context::BaseProcess_obj::__register();
::haxor::context::Gizmo_obj::__register();
::haxor::context::EngineContext_obj::__register();
::haxor::context::DataContext_obj::__register();
::haxor::component::light::Light_obj::__register();
::haxor::component::animation::QuaternionKeyFrame_obj::__register();
::haxor::component::animation::Vector3KeyFrame_obj::__register();
::haxor::component::animation::FloatKeyFrame_obj::__register();
::haxor::component::Transform_obj::__register();
::haxor::component::CameraOrbitInput_obj::__register();
::haxor::component::CameraOrbit_obj::__register();
::haxor::component::Camera_obj::__register();
::haxe::xml::Parser_obj::__register();
::haxe::crypto::Base64_obj::__register();
::haxe::Log_obj::__register();
::haxe::Http_obj::__register();
::bm::Stage_obj::__register();
::Xml_obj::__register();
::Sys_obj::__register();
::EReg_obj::__register();
::haxor::core::Resource_obj::__register();
::haxor::thread::Kernel_obj::__register();
::haxor::platform::windows::input::WinInputHandler_obj::__register();
::haxor::platform::windows::Window_obj::__register();
::haxor::platform::windows::Entry_obj::__register();
::haxor::platform::html::BrowserAgent_obj::__register();
::haxor::platform::graphics::OpenGL_obj::__register();
::haxor::platform::windows::graphics::WinGL_obj::__register();
::haxor::platform::OSWindow_obj::__register();
::haxor::physics::broadphase::SAPBroadPhase_obj::__register();
::haxor::physics::broadphase::BroadPhase_obj::__register();
::haxor::physics::PhysicsMaterial_obj::__register();
::haxor::physics::Physics_obj::__register();
::haxor::physics::CollisionSolver_obj::__register();
::haxor::physics::Collision_obj::__register();
::haxor::net::Texture2DLoader_obj::__register();
::haxor::platform::windows::net::BitmapLoader_obj::__register();
::haxor::platform::windows::net::HTTPLoader_obj::__register();
::haxor::net::HTTPRequestTask_obj::__register();
::haxor::thread::Task_obj::__register();
::haxor::thread::Activity_obj::__register();
::haxor::math::Vector4_obj::__register();
::haxor::math::Vector2_obj::__register();
::haxor::math::Random_obj::__register();
::haxor::math::AABB3_obj::__register();
::haxor::io::serialization::haxor::HaxorFormatter_obj::__register();
::haxor::io::serialization::SerializedField_obj::__register();
::haxor::io::serialization::SerializedData_obj::__register();
::haxor::io::serialization::Formatter_obj::__register();
::haxor::io::file::ColladaLight_obj::__register();
::haxor::io::file::ColladaAnimationKeyFrame_obj::__register();
::haxor::io::file::ColladaAnimationChannel_obj::__register();
::haxor::io::file::ColladaAnimation_obj::__register();
::haxor::io::file::ColladaMaterial_obj::__register();
::haxor::io::file::ColladaInstance_obj::__register();
::haxor::io::file::ColladaNode_obj::__register();
::haxor::io::file::ColladaVisualScene_obj::__register();
::haxor::io::file::ColladaController_obj::__register();
::haxor::io::file::ColladaImage_obj::__register();
::haxor::io::file::ColladaInput_obj::__register();
::haxor::io::file::ColladaPrimitive_obj::__register();
::haxor::io::file::ColladaMesh_obj::__register();
::haxor::io::file::ColladaGeometry_obj::__register();
::haxor::io::file::ColladaAssetData_obj::__register();
::haxor::io::file::ColladaFile_obj::__register();
::haxor::io::file::AssetXML_obj::__register();
::haxor::io::file::AssetFile_obj::__register();
::haxor::io::UInt16Array_obj::__register();
::haxor::io::Int32Array_obj::__register();
::haxor::io::FloatArray_obj::__register();
::haxor::io::Buffer_obj::__register();
::haxor::input::Touch_obj::__register();
::haxor::input::InputHandler_obj::__register();
::haxor::input::InputLog_obj::__register();
::haxor::graphics::texture::TextureCube_obj::__register();
::haxor::graphics::texture::RenderTexture_obj::__register();
::haxor::graphics::texture::ComputeTexture_obj::__register();
::haxor::graphics::texture::Texture2D_obj::__register();
::haxor::graphics::texture::Texture_obj::__register();
::haxor::graphics::mesh::Model_obj::__register();
::haxor::graphics::mesh::Mesh4_obj::__register();
::haxor::graphics::mesh::Mesh2_obj::__register();
::haxor::graphics::mesh::Mesh23_obj::__register();
::haxor::graphics::mesh::Mesh2D_obj::__register();
::haxor::graphics::mesh::SkinnedMesh3_obj::__register();
::haxor::graphics::mesh::Mesh3_obj::__register();
::haxor::graphics::mesh::MeshLayout_obj::__register();
::haxor::graphics::mesh::MeshAttrib_obj::__register();
::haxor::graphics::mesh::Mesh_obj::__register();
::haxor::graphics::material::shader::FlexShader_obj::__register();
::haxor::graphics::material::UberShader_obj::__register();
::haxor::graphics::material::ShaderCompileResult_obj::__register();
::haxor::graphics::material::ShaderCompilation_obj::__register();
::haxor::graphics::material::ShaderError_obj::__register();
::haxor::graphics::material::UniformInfo_obj::__register();
::haxor::graphics::Screen_obj::__register();
::haxor::math::AABB2_obj::__register();
::haxor::graphics::GraphicContext_obj::__register();
::haxor::graphics::Gizmo_obj::__register();
::haxor::graphics::Bitmap_obj::__register();
::haxor::ds::USet_obj::__register();
::haxor::ds::IUSetItem_obj::__register();
::haxor::ds::SAPInterval_obj::__register();
::haxor::ds::SAPList_obj::__register();
::haxor::ds::SAP_obj::__register();
::haxor::ds::Pool_obj::__register();
::haxor::ds::PairTable_obj::__register();
::haxor::core::Time_obj::__register();
::haxor::core::Scene_obj::__register();
::haxor::core::RenderStats_obj::__register();
::haxor::core::RenderEngine_obj::__register();
::haxor::core::ILateUpdateable_obj::__register();
::haxor::core::IFixedUpdateable_obj::__register();
::haxor::io::serialization::ISerializable_obj::__register();
::haxor::core::Engine_obj::__register();
::haxor::context::UID_obj::__register();
::haxor::context::TransformContext_obj::__register();
::haxor::context::TextureContext_obj::__register();
::haxor::context::RendererContext_obj::__register();
::haxor::context::Process_obj::__register();
::haxor::context::PhysicsContext_obj::__register();
::haxor::context::ParticleContext_obj::__register();
::haxor::context::MeshContext_obj::__register();
::haxor::context::MaterialContext_obj::__register();
::haxor::context::KernelContext_obj::__register();
::haxor::context::CanvasGizmo_obj::__register();
::haxor::context::PointGizmo_obj::__register();
::haxor::context::LineGizmo_obj::__register();
::haxor::context::AxisGizmo_obj::__register();
::haxor::context::WireCubeGizmo_obj::__register();
::haxor::context::WireSphereGizmo_obj::__register();
::haxor::math::Matrix4_obj::__register();
::haxor::context::GizmoContext_obj::__register();
::haxor::context::CameraContext_obj::__register();
::haxor::component::physics::SphereCollider_obj::__register();
::haxor::component::physics::RigidBody_obj::__register();
::haxor::component::physics::BoxCollider_obj::__register();
::haxor::component::physics::Collider_obj::__register();
::haxor::component::light::PointLight_obj::__register();
::haxor::math::Color_obj::__register();
::haxor::math::Quaternion_obj::__register();
::haxor::math::Vector3_obj::__register();
::haxor::component::animation::KeyFrame_obj::__register();
::haxor::component::animation::ClipTrack_obj::__register();
::haxor::component::animation::AnimationEvent_obj::__register();
::haxor::component::animation::AnimationClip_obj::__register();
::haxor::component::animation::Animation_obj::__register();
::haxor::component::SkinnedMeshRenderer_obj::__register();
::haxor::component::DataComponent_obj::__register();
::haxor::core::IUpdateable_obj::__register();
::haxor::core::IResizeable_obj::__register();
::haxe::xml::Printer_obj::__register();
::haxe::rtti::Meta_obj::__register();
::haxe::io::Input_obj::__register();
::haxe::io::Eof_obj::__register();
::haxe::io::BytesOutput_obj::__register();
::haxe::io::Output_obj::__register();
::haxe::io::BytesBuffer_obj::__register();
::haxe::format::JsonPrinter_obj::__register();
::haxe::format::JsonParser_obj::__register();
::haxe::ds::StringMap_obj::__register();
::haxe::ds::ObjectMap_obj::__register();
::haxe::ds::IntMap_obj::__register();
::haxe::crypto::BaseCode_obj::__register();
::haxe::io::Bytes_obj::__register();
::haxe::Utf8_obj::__register();
::haxe::Timer_obj::__register();
::haxe::IMap_obj::__register();
::cpp::vm::Thread_obj::__register();
::haxor::component::MeshRenderer_obj::__register();
::haxor::component::Renderer_obj::__register();
::bm::Sprite_obj::__register();
::Type_obj::__register();
::StringTools_obj::__register();
::StringBuf_obj::__register();
::Std_obj::__register();
::Reflect_obj::__register();
::_List::ListIterator_obj::__register();
::List_obj::__register();
::Lambda_obj::__register();
::cpp::Lib_obj::__register();
::Date_obj::__register();
::BunnyMark_obj::__register();
::haxor::core::IRenderable_obj::__register();
::haxor::core::Application_obj::__register();
::haxor::platform::windows::WinApplication_obj::__register();
::haxor::core::BaseApplication_obj::__register();
::haxor::component::Behaviour_obj::__register();
::haxor::component::Component_obj::__register();
::haxor::core::IDisposable_obj::__register();
::haxor::graphics::CursorMode_obj::__boot();
::haxor::graphics::GraphicAPI_obj::__boot();
::haxor::core::ColliderType_obj::__boot();
::haxor::core::InputState_obj::__boot();
::haxor::core::TextureType_obj::__boot();
::haxor::core::EngineState_obj::__boot();
::haxor::core::ApplicationProtocol_obj::__boot();
::haxor::core::Platform_obj::__boot();
::haxe::io::Error_obj::__boot();
::ValueType_obj::__boot();
::sys::net::Host_obj::__init__();
::EReg_obj::__boot();
::haxe::Log_obj::__boot();
::haxor::core::Resource_obj::__boot();
::Sys_obj::__boot();
::Xml_obj::__boot();
::bm::Stage_obj::__boot();
::haxe::Http_obj::__boot();
::haxe::crypto::Base64_obj::__boot();
::haxe::xml::Parser_obj::__boot();
::haxor::component::Camera_obj::__boot();
::haxor::component::CameraOrbit_obj::__boot();
::haxor::component::CameraOrbitInput_obj::__boot();
::haxor::component::Transform_obj::__boot();
::haxor::component::animation::FloatKeyFrame_obj::__boot();
::haxor::component::animation::Vector3KeyFrame_obj::__boot();
::haxor::component::animation::QuaternionKeyFrame_obj::__boot();
::haxor::component::light::Light_obj::__boot();
::haxor::context::DataContext_obj::__boot();
::haxor::context::EngineContext_obj::__boot();
::haxor::context::Gizmo_obj::__boot();
::haxor::context::BaseProcess_obj::__boot();
::haxor::context::ShaderContext_obj::__boot();
::haxor::core::Asset_obj::__boot();
::haxor::core::Console_obj::__boot();
::haxor::core::Debug_obj::__boot();
::haxor::core::Entity_obj::__boot();
::haxor::core::RenderQueue_obj::__boot();
::haxor::core::BlendMode_obj::__boot();
::haxor::core::MeshMode_obj::__boot();
::haxor::core::MeshPrimitive_obj::__boot();
::haxor::core::CullMode_obj::__boot();
::haxor::core::DepthTest_obj::__boot();
::haxor::core::CameraMode_obj::__boot();
::haxor::core::PixelFormat_obj::__boot();
::haxor::core::TextureFilter_obj::__boot();
::haxor::core::TextureWrap_obj::__boot();
::haxor::core::ClearFlag_obj::__boot();
::haxor::core::AnimationWrap_obj::__boot();
::haxor::core::ForceMode_obj::__boot();
::haxor::core::BoneQuality_obj::__boot();
::haxor::core::ShaderFeature_obj::__boot();
::haxor::core::ShaderPrecision_obj::__boot();
::haxor::graphics::Fog_obj::__boot();
::haxor::graphics::GL_obj::__boot();
::haxor::graphics::Graphics_obj::__boot();
::haxor::graphics::material::Material_obj::__boot();
::haxor::graphics::material::MaterialUniform_obj::__boot();
::haxor::graphics::material::Shader_obj::__boot();
::haxor::input::Input_obj::__boot();
::haxor::input::Joystick_obj::__boot();
::haxor::input::KeyCode_obj::__boot();
::haxor::math::Mathf_obj::__boot();
::haxor::platform::windows::net::HTTPRequest_obj::__boot();
::haxor::net::Web_obj::__boot();
::sys::net::Host_obj::__boot();
::sys::net::_Socket::SocketInput_obj::__boot();
::sys::net::_Socket::SocketOutput_obj::__boot();
::sys::net::Socket_obj::__boot();
}

