#include <hxcpp.h>

#ifndef INCLUDED_haxor_context_ShaderContext
#include <haxor/context/ShaderContext.h>
#endif
namespace haxor{
namespace context{

Void ShaderContext_obj::__construct()
{
	return null();
}

//ShaderContext_obj::~ShaderContext_obj() { }

Dynamic ShaderContext_obj::__CreateEmpty() { return  new ShaderContext_obj; }
hx::ObjectPtr< ShaderContext_obj > ShaderContext_obj::__new()
{  hx::ObjectPtr< ShaderContext_obj > _result_ = new ShaderContext_obj();
	_result_->__construct();
	return _result_;}

Dynamic ShaderContext_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ShaderContext_obj > _result_ = new ShaderContext_obj();
	_result_->__construct();
	return _result_;}

::String ShaderContext_obj::vs_flat;

::String ShaderContext_obj::fs_flat;

::String ShaderContext_obj::vs_flat_texture;

::String ShaderContext_obj::fs_flat_texture;

::String ShaderContext_obj::vs_flat_skin_texture;

::String ShaderContext_obj::fs_flat_skin_texture;

::String ShaderContext_obj::vs_gizmo_grid;

::String ShaderContext_obj::vs_gizmo_screen_texture;

::String ShaderContext_obj::vs_gizmo;

::String ShaderContext_obj::vs_flat_particle;

::String ShaderContext_obj::fs_flat_particle;

::String ShaderContext_obj::vs_screen_skybox;

::String ShaderContext_obj::fs_screen_skybox;


ShaderContext_obj::ShaderContext_obj()
{
}

bool ShaderContext_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"vs_flat") ) { outValue = vs_flat; return true;  }
		if (HX_FIELD_EQ(inName,"fs_flat") ) { outValue = fs_flat; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vs_gizmo") ) { outValue = vs_gizmo; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"vs_gizmo_grid") ) { outValue = vs_gizmo_grid; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"vs_flat_texture") ) { outValue = vs_flat_texture; return true;  }
		if (HX_FIELD_EQ(inName,"fs_flat_texture") ) { outValue = fs_flat_texture; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"vs_flat_particle") ) { outValue = vs_flat_particle; return true;  }
		if (HX_FIELD_EQ(inName,"fs_flat_particle") ) { outValue = fs_flat_particle; return true;  }
		if (HX_FIELD_EQ(inName,"vs_screen_skybox") ) { outValue = vs_screen_skybox; return true;  }
		if (HX_FIELD_EQ(inName,"fs_screen_skybox") ) { outValue = fs_screen_skybox; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"vs_flat_skin_texture") ) { outValue = vs_flat_skin_texture; return true;  }
		if (HX_FIELD_EQ(inName,"fs_flat_skin_texture") ) { outValue = fs_flat_skin_texture; return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"vs_gizmo_screen_texture") ) { outValue = vs_gizmo_screen_texture; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &ShaderContext_obj::vs_flat,HX_HCSTRING("vs_flat","\x3b","\x63","\xbe","\x1c")},
	{hx::fsString,(void *) &ShaderContext_obj::fs_flat,HX_HCSTRING("fs_flat","\x2b","\xf7","\x66","\x83")},
	{hx::fsString,(void *) &ShaderContext_obj::vs_flat_texture,HX_HCSTRING("vs_flat_texture","\x97","\xb8","\x95","\xdc")},
	{hx::fsString,(void *) &ShaderContext_obj::fs_flat_texture,HX_HCSTRING("fs_flat_texture","\x87","\xbc","\xdb","\x8c")},
	{hx::fsString,(void *) &ShaderContext_obj::vs_flat_skin_texture,HX_HCSTRING("vs_flat_skin_texture","\x9d","\x04","\xf5","\xcc")},
	{hx::fsString,(void *) &ShaderContext_obj::fs_flat_skin_texture,HX_HCSTRING("fs_flat_skin_texture","\xad","\xba","\xaa","\x66")},
	{hx::fsString,(void *) &ShaderContext_obj::vs_gizmo_grid,HX_HCSTRING("vs_gizmo_grid","\xed","\x23","\x04","\xb5")},
	{hx::fsString,(void *) &ShaderContext_obj::vs_gizmo_screen_texture,HX_HCSTRING("vs_gizmo_screen_texture","\xaf","\x8d","\xbe","\x8c")},
	{hx::fsString,(void *) &ShaderContext_obj::vs_gizmo,HX_HCSTRING("vs_gizmo","\xb8","\x53","\x56","\x9b")},
	{hx::fsString,(void *) &ShaderContext_obj::vs_flat_particle,HX_HCSTRING("vs_flat_particle","\x0a","\x13","\x2e","\x2d")},
	{hx::fsString,(void *) &ShaderContext_obj::fs_flat_particle,HX_HCSTRING("fs_flat_particle","\x1a","\x81","\x2b","\xba")},
	{hx::fsString,(void *) &ShaderContext_obj::vs_screen_skybox,HX_HCSTRING("vs_screen_skybox","\xbb","\x23","\x0d","\x21")},
	{hx::fsString,(void *) &ShaderContext_obj::fs_screen_skybox,HX_HCSTRING("fs_screen_skybox","\xcb","\x91","\x0a","\xae")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShaderContext_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ShaderContext_obj::vs_flat,"vs_flat");
	HX_MARK_MEMBER_NAME(ShaderContext_obj::fs_flat,"fs_flat");
	HX_MARK_MEMBER_NAME(ShaderContext_obj::vs_flat_texture,"vs_flat_texture");
	HX_MARK_MEMBER_NAME(ShaderContext_obj::fs_flat_texture,"fs_flat_texture");
	HX_MARK_MEMBER_NAME(ShaderContext_obj::vs_flat_skin_texture,"vs_flat_skin_texture");
	HX_MARK_MEMBER_NAME(ShaderContext_obj::fs_flat_skin_texture,"fs_flat_skin_texture");
	HX_MARK_MEMBER_NAME(ShaderContext_obj::vs_gizmo_grid,"vs_gizmo_grid");
	HX_MARK_MEMBER_NAME(ShaderContext_obj::vs_gizmo_screen_texture,"vs_gizmo_screen_texture");
	HX_MARK_MEMBER_NAME(ShaderContext_obj::vs_gizmo,"vs_gizmo");
	HX_MARK_MEMBER_NAME(ShaderContext_obj::vs_flat_particle,"vs_flat_particle");
	HX_MARK_MEMBER_NAME(ShaderContext_obj::fs_flat_particle,"fs_flat_particle");
	HX_MARK_MEMBER_NAME(ShaderContext_obj::vs_screen_skybox,"vs_screen_skybox");
	HX_MARK_MEMBER_NAME(ShaderContext_obj::fs_screen_skybox,"fs_screen_skybox");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShaderContext_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ShaderContext_obj::vs_flat,"vs_flat");
	HX_VISIT_MEMBER_NAME(ShaderContext_obj::fs_flat,"fs_flat");
	HX_VISIT_MEMBER_NAME(ShaderContext_obj::vs_flat_texture,"vs_flat_texture");
	HX_VISIT_MEMBER_NAME(ShaderContext_obj::fs_flat_texture,"fs_flat_texture");
	HX_VISIT_MEMBER_NAME(ShaderContext_obj::vs_flat_skin_texture,"vs_flat_skin_texture");
	HX_VISIT_MEMBER_NAME(ShaderContext_obj::fs_flat_skin_texture,"fs_flat_skin_texture");
	HX_VISIT_MEMBER_NAME(ShaderContext_obj::vs_gizmo_grid,"vs_gizmo_grid");
	HX_VISIT_MEMBER_NAME(ShaderContext_obj::vs_gizmo_screen_texture,"vs_gizmo_screen_texture");
	HX_VISIT_MEMBER_NAME(ShaderContext_obj::vs_gizmo,"vs_gizmo");
	HX_VISIT_MEMBER_NAME(ShaderContext_obj::vs_flat_particle,"vs_flat_particle");
	HX_VISIT_MEMBER_NAME(ShaderContext_obj::fs_flat_particle,"fs_flat_particle");
	HX_VISIT_MEMBER_NAME(ShaderContext_obj::vs_screen_skybox,"vs_screen_skybox");
	HX_VISIT_MEMBER_NAME(ShaderContext_obj::fs_screen_skybox,"fs_screen_skybox");
};

#endif

hx::Class ShaderContext_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("vs_flat","\x3b","\x63","\xbe","\x1c"),
	HX_HCSTRING("fs_flat","\x2b","\xf7","\x66","\x83"),
	HX_HCSTRING("vs_flat_texture","\x97","\xb8","\x95","\xdc"),
	HX_HCSTRING("fs_flat_texture","\x87","\xbc","\xdb","\x8c"),
	HX_HCSTRING("vs_flat_skin_texture","\x9d","\x04","\xf5","\xcc"),
	HX_HCSTRING("fs_flat_skin_texture","\xad","\xba","\xaa","\x66"),
	HX_HCSTRING("vs_gizmo_grid","\xed","\x23","\x04","\xb5"),
	HX_HCSTRING("vs_gizmo_screen_texture","\xaf","\x8d","\xbe","\x8c"),
	HX_HCSTRING("vs_gizmo","\xb8","\x53","\x56","\x9b"),
	HX_HCSTRING("vs_flat_particle","\x0a","\x13","\x2e","\x2d"),
	HX_HCSTRING("fs_flat_particle","\x1a","\x81","\x2b","\xba"),
	HX_HCSTRING("vs_screen_skybox","\xbb","\x23","\x0d","\x21"),
	HX_HCSTRING("fs_screen_skybox","\xcb","\x91","\x0a","\xae"),
	String(null()) };

void ShaderContext_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxor.context.ShaderContext","\x3f","\x37","\x61","\xe0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ShaderContext_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ShaderContext_obj >;
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

void ShaderContext_obj::__boot()
{
	vs_flat= HX_HCSTRING("\r\nuniform mat4  WorldMatrix;\r\nuniform mat4  ViewMatrix;\r\nuniform mat4  ProjectionMatrix;\t\t\r\nuniform vec4  Tint;\t\t\t\t\r\nattribute vec3 vertex;\r\nattribute vec4 color;\t\t\r\nvarying vec4 v_color;\t\t\t\r\nvoid main(void) \r\n{\t\t\r\n\tgl_Position = ((vec4(vertex, 1.0) * WorldMatrix) * ViewMatrix) * ProjectionMatrix;\t\t\t\t\r\n\tv_color = color * Tint;\r\n}\t\t\t\r\n","\x08","\x0d","\xce","\xdd");
	fs_flat= HX_HCSTRING("\t\t\t\t\r\nvarying vec4 v_color;\t\t\t\r\nvoid main(void) { gl_FragColor = v_color; }\t\t\t\t\t\r\n","\x01","\xe4","\x01","\xae");
	vs_flat_texture= HX_HCSTRING("\r\nuniform mat4  WorldMatrix;\r\nuniform mat4  ViewMatrix;\r\nuniform mat4  ProjectionMatrix;\t\t\r\nuniform vec4  Tint;\r\n\r\nattribute vec3 vertex;\t\t\t\t\t\r\nattribute vec4 color;\r\nattribute vec3 uv0;\t\t\r\n\r\nvarying vec2 v_uv0;\r\nvarying vec4 v_color;\t\r\n\t\r\nvoid main(void) \r\n{\t\t\r\n\tgl_Position = ((vec4(vertex, 1.0) * WorldMatrix) * ViewMatrix) * ProjectionMatrix;\r\n\tv_uv0   = uv0.xy;\r\n\tv_color = color*Tint;\r\n}\t\t\t\r\n","\x45","\x65","\x33","\xf8");
	fs_flat_texture= HX_HCSTRING("\t\r\nvarying vec2 v_uv0;\r\nvarying vec4 v_color;\t\t\t\r\nuniform sampler2D DiffuseTexture;\r\nvoid main(void) \r\n{\t\r\n\tvec4 tex_diffuse = texture2D(DiffuseTexture, v_uv0.xy);\t\r\n\tgl_FragColor.xyz = (tex_diffuse.xyz * v_color.xyz);\r\n\tgl_FragColor.a \t = tex_diffuse.a * v_color.a;\r\n}\r\n","\xc9","\xdc","\x89","\xd8");
	vs_flat_skin_texture= HX_HCSTRING("\t\r\nuniform mat4  WorldMatrix;\r\nuniform mat4  WorldMatrixIT;\r\nuniform mat4  ViewMatrix;\r\nuniform mat4  ProjectionMatrix;\r\nuniform vec3  WSCameraPosition;\r\nuniform vec4  Tint;\r\n\r\n#ifdef BONE_TEXTURE\r\nuniform sampler2D Joints;\r\nuniform sampler2D Binds;\r\nuniform int\t\t  SkinId;\r\nuniform vec4      SkinTexSize;\r\n#else\t\t\r\nuniform vec4  Joints[MAX_BONES*3];\t\t\r\nuniform vec4   Binds[MAX_BONES*3];\r\n#endif\r\n\r\nuniform int SkinQuality;\r\n\r\nattribute vec3 vertex;\t\t\t\t\t\r\nattribute vec4 color;\r\nattribute vec3 normal;\r\nattribute vec3 uv0;\r\nattribute vec4 bone;\r\nattribute vec4 weight;\r\n\r\nvarying vec3 v_uv0;\r\nvarying vec3 v_normal;\r\nvarying vec4 v_color;\r\nvarying vec4 v_wsVertex;\r\nvarying vec3 v_wsView;\t\r\n\t\r\n\t\r\n\t\r\nmat4 GetJointMatrix(const int b0, const int b1, const int b2) \r\n{ \r\n\t#ifdef BONE_TEXTURE\t\t\t\r\n\tfloat itw = SkinTexSize.z;\r\n\tfloat ith = SkinTexSize.w;\r\n\tfloat fb0x = mod(float(b0), SkinTexSize.x);\r\n\tfloat fb1x = mod(float(b1), SkinTexSize.x);\r\n\tfloat fb2x = mod(float(b2), SkinTexSize.x);\r\n\tfloat fb0y = floor(float(b0) * itw);\r\n\tfloat fb1y = floor(float(b1) * itw);\r\n\tfloat fb2y = floor(float(b2) * itw);\t\t\t\r\n\tvec4 l0 = texture2D(Joints, vec2(fb0x*itw,fb0y*ith));\r\n\tvec4 l1 = texture2D(Joints, vec2(fb1x*itw,fb1y*ith));\r\n\tvec4 l2 = texture2D(Joints, vec2(fb2x*itw,fb2y*ith));\r\n\treturn mat4(l0,l1,l2,vec4(0,0,0,1));\r\n\t#else\r\n\treturn mat4(Joints[b0], Joints[b1], Joints[b2], vec4(0, 0, 0, 1)); \r\n\t#endif\r\n}\r\n\t\r\nmat4 GetBindMatrix (const int b0, const int b1, const int b2) \r\n{ \r\n\t#ifdef BONE_TEXTURE\t\t\t\r\n\tfloat itw = SkinTexSize.z;\r\n\tfloat ith = SkinTexSize.w;\t\t\t\t\t\r\n\tfloat fb0x = mod(float(b0), SkinTexSize.x);\r\n\tfloat fb1x = mod(float(b1), SkinTexSize.x);\r\n\tfloat fb2x = mod(float(b2), SkinTexSize.x);\r\n\tfloat fb0y = floor(float(b0) * itw);\r\n\tfloat fb1y = floor(float(b1) * itw);\r\n\tfloat fb2y = floor(float(b2) * itw);\t\t\t\r\n\tvec4 l0 = texture2D(Binds, vec2(fb0x*itw,fb0y*ith));\r\n\tvec4 l1 = texture2D(Binds, vec2(fb1x*itw,fb1y*ith));\r\n\tvec4 l2 = texture2D(Binds, vec2(fb2x*itw,fb2y*ith));\r\n\treturn mat4(l0,l1,l2,vec4(0,0,0,1));\r\n\t#else\r\n\treturn mat4(Binds[b0] , Binds[b1] , Binds[b2] , vec4(0, 0, 0, 1)); \r\n\t#endif\r\n}\r\n\t\r\nmat4 SkinWorldMatrix()\r\n{\r\n\tvec4 b = bone * 3.0;\t\t\t\r\n\tvec4 w = weight;\t\t\t\r\n\tfloat ivs = 0.0;\r\n\tif (SkinQuality >= 0) ivs += weight.x;\r\n\tif (SkinQuality >= 2) ivs += weight.y;\r\n\tif (SkinQuality >= 3) ivs += weight.z;\r\n\tif (SkinQuality >= 4) ivs += weight.w;\t\t\t\r\n\tw *= 1.0 / ivs;\t\t\t\r\n\tivec4 bi0 = ivec4(b.x, b.y, b.z, b.w);\t\t\t\r\n\tivec4 bi1 = ivec4(b.x + 1.0, b.y + 1.0, b.z + 1.0, b.w + 1.0);\t\t\t\r\n\tivec4 bi2 = ivec4(b.x + 2.0, b.y + 2.0, b.z + 2.0, b.w + 2.0);\t\t\t\r\n\tmat4 res = mat4(0.0),jm,bm;\t\t\t\r\n\tif (SkinQuality >= 0) { jm = GetJointMatrix(bi0.x, bi1.x, bi2.x); bm = GetBindMatrix(bi0.x, bi1.x, bi2.x); res += ((bm * jm) * w.x); }\r\n\tif (SkinQuality >= 2) { jm = GetJointMatrix(bi0.y, bi1.y, bi2.y); bm = GetBindMatrix(bi0.y, bi1.y, bi2.y); res += ((bm * jm) * w.y); }\r\n\tif (SkinQuality >= 3) { jm = GetJointMatrix(bi0.z, bi1.z, bi2.z); bm = GetBindMatrix(bi0.z, bi1.z, bi2.z); res += ((bm * jm) * w.z); }\r\n\tif (SkinQuality >= 4) { jm = GetJointMatrix(bi0.w, bi1.w, bi2.w); bm = GetBindMatrix(bi0.w, bi1.w, bi2.w); res += ((bm * jm) * w.w); }\r\n\t\r\n\treturn res;\r\n}\r\n\t\t\t\t\t\r\nvoid main(void) \r\n{\t\r\n\tvec4 lv = vec4(vertex,1.0);\r\n\tvec3 ln = vec3(normal);\r\n\tmat4 swm = SkinWorldMatrix();\r\n\tmat4 wm;\t\t\t\t\t\r\n\twm = swm;\r\n\t//wm = WorldMatrix;\r\n\t\r\n\tv_uv0   = uv0;\r\n\tv_color = color * Tint;\t\t\t\r\n\tv_normal = ln * mat3(WorldMatrixIT);\t\t\t\r\n\tgl_Position = ((lv * wm) * ViewMatrix) * ProjectionMatrix;\r\n}\t\t\t\r\n","\x54","\x27","\x7f","\x3f");
	fs_flat_skin_texture= HX_HCSTRING("\t\r\nuniform sampler2D DiffuseTexture;\t\t\t\t\t\t\r\nvarying vec3 v_uv0;\r\nvarying vec4 v_color;\r\nvarying vec3 v_normal;\r\n\r\nvoid main(void) \r\n{\t\r\n\tvec4 tex_diffuse = texture2D(DiffuseTexture, v_uv0.xy);\r\n\tgl_FragColor.xyz = tex_diffuse.xyz * v_color.xyz;\r\n\tgl_FragColor.a \t = tex_diffuse.a * v_color.a;\r\n}\t\t\r\n","\x57","\x82","\x33","\xeb");
	vs_gizmo_grid= HX_HCSTRING("\r\nuniform mat4  WorldMatrix;\r\nuniform mat4  ViewMatrix;\r\nuniform mat4  ProjectionMatrix;\t\t\r\nuniform vec4  Tint;\t\t\r\nuniform float Area;\r\nattribute vec3 vertex;\t\t\r\nattribute vec4 color;\t\t\r\nvarying vec4 v_color;\t\t\r\nvoid main(void) \r\n{\t\t\r\n\tgl_Position = ((vec4(vertex*Area, 1.0) * WorldMatrix) * ViewMatrix) * ProjectionMatrix;\t\t\t\t\r\n\tv_color = color * Tint;\t\t\r\n}\r\n","\xbe","\xd1","\xfb","\x45");
	vs_gizmo_screen_texture= HX_HCSTRING("\t\r\nuniform vec2  Screen;\r\nuniform vec4  Rect;\r\nuniform vec4  Tint;\t\t\r\nattribute vec3 vertex;\t\t\t\t\r\nvarying vec4 v_color;\r\nvarying vec2 v_uv0;\r\n\r\nvoid main(void) \r\n{\t\t\r\n\tvec4 p = vec4(vertex, 1);\r\n\tfloat sw = Screen.x * 0.5;\r\n\tfloat sh = Screen.y * 0.5;\r\n\tp.x *= Rect.z / sw;\r\n\tp.y *= Rect.w / sh;\r\n\tp.x += Rect.x / sw;\r\n\tp.y -= Rect.y / sh;\t\t\t\r\n\tp.x -= 1.0;\r\n\tp.y += 1.0;\t\t\t\r\n\tp.z = 0.001;\r\n\tgl_Position = p;\r\n\tv_color = Tint;\t\t\r\n\tv_uv0   = vec2(vertex.x,1.0+vertex.y);\r\n}\r\n","\xc0","\x14","\xf6","\x42");
	vs_gizmo= HX_HCSTRING("\t\r\n#define GIZMO_POINT       0\r\n#define GIZMO_LINE        1\r\n#define GIZMO_AXIS        2\r\n#define GIZMO_WIRE_CUBE   3\r\n#define GIZMO_WIRE_SPHERE 4\r\n#define GIZMO_CANVAS\t  10\r\n\t\r\n\t\r\n\t\r\nmat4         \t\t WorldMatrix;\r\nuniform mat4  \t\t ViewMatrix;\r\nuniform mat4  \t\t ProjectionMatrix;\t\t\t\t\r\nuniform int   \t\t Count;\r\nuniform int   \t\t Type;\t\t\r\nuniform sampler2D \t Data;\r\nuniform int  \t\t DataSize;\t\t\r\nvec4\t\t \t\t DataColor;\r\nvec4\t\t \t\t DataA;\r\nvec4\t\t \t\t DataB;\r\n\t\r\nattribute float id;\r\nattribute vec3 vertex;\t\t\r\nattribute vec4 color;\r\n\r\nvarying vec4 v_color;\r\n\r\nvec4 GetPixel(float p_pix,float p_ds,float p_ids)\r\n{\t\t\t\r\n\tfloat px = mod(p_pix, p_ds) * p_ids;\r\n\tfloat py = (p_pix * p_ids) * p_ids;\r\n\treturn texture2D(Data, vec2(px,py));\r\n}\r\n\t\r\nvoid main(void) \r\n{\t\t\t\t\r\n\tif (id >= float(Count)) \r\n\t{\r\n\t\tgl_Position = vec4( -2.0, 0.0, 0.0, 0.0);\r\n\t\treturn; \r\n\t}\t\t\t\r\n\tfloat p  \t= id * 6.0;\r\n\tfloat ds\t= float(DataSize);\r\n\tfloat ids\t= 1.0 / ds;\t\t\t\r\n\tDataColor \t= GetPixel(p,ds,ids);\r\n\tDataA \t\t= GetPixel(p + 1.0,ds,ids);\r\n\tDataB \t\t= GetPixel(p + 2.0,ds,ids);\t\t\t\r\n\tvec4 l0 \t= GetPixel(p + 3.0,ds,ids);\r\n\tvec4 l1 \t= GetPixel(p + 4.0,ds,ids);\r\n\tvec4 l2 \t= GetPixel(p + 5.0,ds,ids);\t\r\n\tvec4 v\t\t= vec4(vertex, 1.0);\r\n\tWorldMatrix = mat4(l0.x, l0.y, l0.z, l0.w, l1.x, l1.y, l1.z, l1.w, l2.x, l2.y, l2.z, l2.w, 0, 0, 0, 1);\r\n\t\r\n\tif (Type == GIZMO_POINT)\r\n\t{\t\r\n\t\tvec4 ncp = ((vec4(DataB.xyz, 1.0) * WorldMatrix) * ViewMatrix) * ProjectionMatrix;\t\t\t\t\r\n\t\tv.xyz += DataB.xyz;\r\n\t\tfloat pf = (ncp.z / ncp.w);\r\n\t\tgl_PointSize = pf <= 0.0 ? DataA.x : (DataA.x * pf);\r\n\t\tgl_Position = ((v * WorldMatrix) * ViewMatrix) * ProjectionMatrix;\r\n\t}\r\n\telse\r\n\tif (Type == GIZMO_LINE)\r\n\t{\r\n\t\tfloat r = v.x;\r\n\t\tv.xyz = DataA.xyz + (DataB.xyz - DataA.xyz) * r;\r\n\t\tgl_Position = ((v * WorldMatrix) * ViewMatrix) * ProjectionMatrix;\r\n\t}\r\n\telse\r\n\tif (Type == GIZMO_AXIS)\r\n\t{\t\t\r\n\t\tfloat sx   = length(vec3(WorldMatrix[0][0],WorldMatrix[1][0],WorldMatrix[2][0]));\r\n\t\tfloat sy   = length(vec3(WorldMatrix[0][1],WorldMatrix[1][1],WorldMatrix[2][1]));\r\n\t\tfloat sz   = length(vec3(WorldMatrix[0][2],WorldMatrix[1][2],WorldMatrix[2][2]));\t\t\t\t\r\n\t\tvec3 scale = vec3(sx, sy, sz);\t\t\t\t\r\n\t\tvec4 ncp = ((vec4(DataB.xyz, 1.0) * WorldMatrix) * ViewMatrix) * ProjectionMatrix;\t\t\t\t\r\n\t\tv.xyz *= (DataA.xyz / scale.xyz) * ncp.w * 0.025;\r\n\t\tv.xyz += DataB.xyz;\r\n\t\tgl_Position  = ((v * WorldMatrix) * ViewMatrix) * ProjectionMatrix;\t\t\t\t\r\n\t}\r\n\telse\r\n\tif (Type == GIZMO_WIRE_CUBE)\r\n\t{\r\n\t\tv.xyz *= DataA.xyz;\r\n\t\tv.xyz += DataB.xyz;\r\n\t\tgl_Position = ((v * WorldMatrix) * ViewMatrix) * ProjectionMatrix;\r\n\t}\r\n\telse\r\n\tif (Type == GIZMO_WIRE_SPHERE)\r\n\t{\r\n\t\tv.xyz *= DataA.x;\r\n\t\tv.xyz += DataB.xyz;\r\n\t\tgl_Position = ((v * WorldMatrix) * ViewMatrix) * ProjectionMatrix;\r\n\t}\r\n\telse\r\n\tif (Type == GIZMO_CANVAS)\r\n\t{\t\t\t\t\r\n\t\tv.xyz += DataB.xyz;\r\n\t\tgl_Position = ((v * WorldMatrix) * ViewMatrix) * ProjectionMatrix;\r\n\t}\r\n\t\r\n\tv_color = DataColor * color;\r\n}\t\t\t\t\r\n","\xa0","\xa9","\x71","\xfb");
	vs_flat_particle= HX_HCSTRING("\r\n#define IsLocal\t\t\t\t (System[1].z > 0.0)\r\n#define SheetFrameWidth\t \t System[21].x\r\n#define SheetFrameHeight \t System[21].y\r\n#define SheetLength\t\t \t System[22].x\r\n#define SystemEmissionStart\t System[24].x\r\n#define SystemEmissionCount\t System[24].y\r\n\r\n#define PARTICLE_LENGTH\t\t 8.0\r\n\r\n#define PARTICLE_STATUS\t\t 0.0\r\n#define PARTICLE_POSITION\t 1.0\r\n#define PARTICLE_ROTATION\t 2.0\r\n#define PARTICLE_SIZE\t\t 3.0\r\n#define PARTICLE_VELOCITY\t 4.0\r\n#define PARTICLE_COLOR\t\t 5.0\r\n#define PARTICLE_START\t\t 6.0\r\n#define PARTICLE_NULL\t\t 7.0\r\n\r\n#define PARTICLE_DISABLED\t 0\r\n#define PARTICLE_INIT\t\t 1\r\n#define PARTICLE_ENABLED\t 2\r\n#define PARTICLE_DEAD\t\t 3\r\n\r\nattribute vec3 vertex;\r\n\t\t\r\n\r\nuniform mat4  WorldMatrix;\r\nuniform mat4  ViewMatrix;\r\nuniform mat4  ViewMatrixInverse;\r\nuniform mat4  ProjectionMatrix;\t\t\r\n\r\nuniform float Time;\r\n\r\nuniform sampler2D Data;\r\n\r\nuniform float DataWidth;\r\nuniform float DataHeight;\r\n\r\n\r\nuniform float TextureWidth;\r\nuniform float TextureHeight;\r\n\r\nuniform vec4  System[25];\r\n\t\t\r\n\r\nvarying vec2 v_uv0;\r\nvarying vec4 v_color;\r\n\r\n\r\nuniform float RandomSeed;\t\t\r\nuniform sampler2D RandomTexture;\r\n\r\nvec4 Random()\r\n{\r\n\tfloat tw   = 0.001953125;\r\n\tfloat seed = RandomSeed * 262144.0;\r\n\tfloat idx  = mod(seed,512.0) * tw;\r\n\tfloat idy  = floor(seed * tw)  * tw;\r\n\tseed      += tw;\r\n\treturn texture2D(RandomTexture, vec2(idx,idy));\r\n}\r\n//*/\r\nvec4 ParticleData(float p_id,float p_field)\r\n{\r\n\tfloat w   = floor(DataWidth);\r\n\tfloat h   = floor(DataHeight);\r\n\tfloat pid = mod(floor(SystemEmissionStart)+p_id,floor(w*h)/PARTICLE_LENGTH);\r\n\tfloat pix = floor(pid) * PARTICLE_LENGTH;\t\t\t\r\n\tfloat px  = mod(pix+p_field,w) / (w-1.0);\r\n\tfloat py  = floor((pix+p_field)/w) / (h-1.0);\r\n\treturn texture2D(Data,vec2(px,py));\r\n}\r\n\r\nvec4 ParticleStatus()   { return ParticleData(vertex.z,PARTICLE_STATUS); \t}\r\nvec4 ParticlePosition() { return ParticleData(vertex.z,PARTICLE_POSITION); \t}\r\nvec4 ParticleRotation() { return ParticleData(vertex.z,PARTICLE_ROTATION); \t}\r\nvec4 ParticleSize() \t{ return ParticleData(vertex.z,PARTICLE_SIZE); \t\t}\r\nvec4 ParticleColor() \t{ return ParticleData(vertex.z,PARTICLE_COLOR); \t\t}\r\n\r\nvoid main(void) \r\n{\t\t\r\n\t\r\n\tvec4  status   = ParticleStatus();\r\n\t\r\n\tfloat enabled  = int(status.x) == PARTICLE_DEAD ? 0.0 : 1.0;\r\n\t\r\n\tvec4  v   = vec4(vertex.xy,0.0,1.0);\r\n\tv.xyz\t *= enabled;\r\n\t\r\n\tif(enabled <= 0.0) { gl_Position = vec4(0,0,0,-1.0); return; }\r\n\t\r\n\tvec3 size\t   = ParticleSize().xyz;\t\t\t\r\n\tvec3 center    = vec3(0,0,0);\r\n\tvec3 position  = ParticlePosition().xyz;\r\n\t\t\t\t\r\n\tv.xyz  *= size;\r\n\tv.xyz   = v.xyz * mat3(ViewMatrixInverse); //billboard\r\n\t\r\n\tv.xyz  += center + position;\r\n\t\r\n\tmat4 wm     = IsLocal ? WorldMatrix : mat4(1,0,0,0, 0,1,0,0, 0,0,1,0, 0,0,0,1); \r\n\t\r\n\tgl_Position = ((v * wm) * ViewMatrix) * ProjectionMatrix;\r\n\t\r\n\tfloat frame   = floor(status.w);\t\t\r\n\t\r\n\tv_uv0 = (vertex.xy+0.5);\r\n\t\r\n\tif(SheetLength > 0.0)\r\n\t{\t\t\t\r\n\t\tfloat sw\t  = (SheetFrameWidth);\r\n\t\tfloat sh\t  = (SheetFrameHeight);\t\t\t\r\n\t\tfloat tw\t  = floor(TextureWidth);\r\n\t\tfloat th\t  = floor(TextureHeight);\r\n\t\tfloat sheet_uvw = sw/tw;\r\n\t\tfloat sheet_uvh = sh/th;\r\n\t\tv_uv0   \t*= vec2(sheet_uvw,sheet_uvh);\t\t\t\t\t\r\n\t\tfloat cx     = floor(TextureWidth/SheetFrameWidth);\r\n\t\tv_uv0.x\t\t += (mod(frame,cx) * (sheet_uvw));\r\n\t\tv_uv0.y\t\t += 1.0 - (sheet_uvh) - (floor(frame/cx) * (sheet_uvh));\r\n\t}\t\t\t\r\n\t\r\n\tv_color = ParticleColor();\r\n}\r\n","\x3a","\x50","\xa1","\x86");
	fs_flat_particle= HX_HCSTRING("\r\nvarying vec2 v_uv0;\r\nvarying vec4 v_color;\t\r\nuniform sampler2D Color;\t\r\nuniform sampler2D Texture;\t\r\nvoid main(void) \r\n{\t\r\n\tvec4 tex\t\t = texture2D(Texture, v_uv0.xy);\r\n\tgl_FragColor.xyz = tex.xyz * v_color.xyz;\r\n\tgl_FragColor.a \t = tex.a * v_color.a;\r\n}\t\r\n","\x35","\xc9","\xd0","\x0a");
	vs_screen_skybox= HX_HCSTRING("\r\nuniform mat4 ViewMatrixInverse;\r\nuniform mat4 SkyboxProjectionMatrixInverse;\r\nuniform vec3 CameraPosition;\t\t\t\r\nvarying vec3 v_view_dir;\r\nattribute vec3 vertex;\t\t\t\r\nvoid main()\r\n{\r\n\tvec4 wpos = vec4(vertex,1.0) * SkyboxProjectionMatrixInverse;\r\n\twpos /= wpos.w;\r\n\twpos = wpos * ViewMatrixInverse;\r\n\tv_view_dir = wpos.xyz - CameraPosition;      \t\t\r\n\tgl_Position = vec4(vertex,1.0);\r\n}\r\n","\xa0","\xf3","\x17","\x9c");
	fs_screen_skybox= HX_HCSTRING("\t\r\nuniform samplerCube  SkyboxTexture;\r\nvarying vec3 v_view_dir;\r\nvoid main() \r\n{ \r\n\tgl_FragColor = textureCube(SkyboxTexture, normalize(v_view_dir));\r\n}\t\r\n","\xd6","\x48","\x5c","\xdf");
}

} // end namespace haxor
} // end namespace context
