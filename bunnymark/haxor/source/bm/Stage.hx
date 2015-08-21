package bm;

import haxor.component.MeshRenderer;
import haxor.context.Process;
import haxor.context.UID;
import haxor.core.Asset;
import haxor.core.Enums.BlendMode;
import haxor.core.Enums.CullMode;
import haxor.core.Enums.PixelFormat;
import haxor.graphics.material.Material;
import haxor.graphics.material.Shader;
import haxor.graphics.mesh.Mesh;
import haxor.graphics.mesh.MeshLayout.Mesh2D;
import haxor.graphics.texture.ComputeTexture;
import haxor.graphics.texture.Texture;
import haxor.graphics.texture.Texture2D;
import haxor.io.FloatArray;
import haxor.math.AABB3;
import haxor.math.Color;
import haxor.math.Mathf;
import haxor.math.Random;
import haxor.platform.Types.Float32;

/**
 * Class that handles the rendering stage.
 * @author Eduardo Pons - eduardo@thelaborat.org
 */
@:allow(bm)
class Stage extends MeshRenderer
{
	static var instance : Stage;
	static var ids : UID;
	
	/**
	 * Internals
	 */
	private var m_list : Process<Sprite>;		
	private var m_sm : Mesh;
	private var m_sd : ComputeTexture;
	private var m_dirty : Bool;
	private var m_mat : Material;
	
	/**
	 * CTOR.
	 */
	override function OnBuild():Void 
	{
		super.OnBuild();
		ids 	  = new UID();
		instance  = this;	
		m_dirty   = false;
	}
	
	/**
	 * Initializes the stage to handle a given number of sprites.
	 * @param	p_sprite_count
	 */
	public function Initialize(p_sprite_count:Int):Void
	{
		var c : Int = p_sprite_count;
		m_list 	  = new Process<Sprite>("sprites", c);		
		var tw : Int = Std.int(Mathf.Ceil(Mathf.Sqrt(p_sprite_count)));
		m_sd 	  = new ComputeTexture(tw, tw, PixelFormat.Float3);
		
		trace("Data Texture w["+tw+"] h["+tw+"]");
		
		var s1 : Float32 = 0.5;
		var s2 : Float32 = 1.0;
		
		var plane : Array<Float32> =
		[
		-s1,   s2, 0.0,
		-s1,  0.0, 0.0,
		 s1,   s2, 0.0,
		
		 s1,  s2, 0.0,
		-s1, 0.0, 0.0,
		 s1, 0.0, 0.0		
		];
		
		
		var f32 : FloatArray;
		var id  : Float32    = 0.0;
		var k   : Int        = 0;
		
		m_sm   = new Mesh();
		
		f32 = new FloatArray(c * plane.length);
		for (i in 0...c)
		{	
			for (j in 0...plane.length)
			{
				var vid : Int = j % 3;
				var v : Float32 = plane[j];
				if (vid == 2) v = id;
				f32.Set(k++, v);
			}
			id += 1.0;
		}		
		m_sm.Set("vertex", f32, 3);				
		
		f32 = new FloatArray(c * plane.length);
		k = 0;
		for (i in 0...c)
		{	
			var px : Float32 = i * 18;
			var py : Float32 = Random.Range( 0, 5);
			for (j in 0...plane.length)
			{	
				var vid:Int = j % 3;
				if(vid==0) f32.Set(k++, px);
				if(vid==1) f32.Set(k++, py);
				if(vid==2) f32.Set(k++, 0.0);
			}
		}		
		m_sm.Set("position", f32, 3);		
		
		/*
		f32 = cast m_sd.data.buffer;
		k = 0;
		var cl : Array<Color> = [Color.red, Color.yellow, Color.green, Color.cyan, Color.blue, Color.magenta];
		for (i in 0...f32.length)
		{
			var pid:  Int = i % 4;
			var cid: Int  = Std.int((i / 4) % cl.length);
			var c : Color = cl[cid];
			switch(pid)
			{
				case 0: f32.Set(k++, c.r);
				case 1: f32.Set(k++, c.g);
				case 2: f32.Set(k++, c.b);
				case 3: f32.Set(k++, c.a);
			}
		}
		//*/
		
		m_sm.bounds = AABB3.temp.Set( -1000, 1000, -1000, 1000, -1000, 1000);
		mesh = m_sm;		
		m_mat = new Material("StageMaterial");		
		m_mat.SetBlending(BlendMode.SrcAlpha, BlendMode.OneMinusSrcAlpha);
		m_mat.blend = true;
		m_mat.SetTexture("SpriteData", m_sd);
		m_mat.SetFloat("SpriteDataSizeX", m_sd.width);
		m_mat.SetFloat("SpriteDataSizeY", m_sd.height);
		var tex : Texture = Asset.Get("BunnyTexture");
		m_mat.SetTexture("Texture", tex == null ? Texture2D.red : tex);
		m_mat.SetFloat("Count", 0);
		m_mat.cull = CullMode.Back;
		
		var ss : Shader = new Shader(vs_stage, fs_stage);		
		m_mat.shader = ss;
		
		material = m_mat;
	}
	
	/**
	 * Adds a sprite into the rendering queue.
	 * @param	p_sprite
	 */
	public function Add(p_sprite:Sprite):Void
	{
		m_list.Add(p_sprite);
		m_dirty = true;
	}
	
	/**
	 * Removes a sprite into the rendering queue.
	 * @param	p_sprite
	 */
	public function Remove(p_sprite:Sprite):Void
	{
		m_list.Remove(p_sprite);
		m_dirty = true;
	}
	
	/**
	 * Callback called when rendering.
	 */
	override public function OnRender():Void 
	{
		if (m_dirty)
		{	
			m_mat.SetFloat("Count", m_list.length);			
			m_sd.Apply();
			m_dirty = false;
		}
		super.OnRender();
	}
	
	
	private function OnSpriteTransform(s:Sprite):Void
	{
		var t   : ComputeTexture = m_sd;
		var f32 : FloatArray = cast t.data.buffer;
		var p   : Int = s.__sdp;
		f32.Set(p,   s.x);
		f32.Set(p + 1, s.y);
		f32.Set(p + 2, s.size);		
		m_dirty = true;
	}
	
	private function OnSpriteBuild(s:Sprite):Void   
	{ 
		s.__cid = ids.id;
		s.__sdp = s.__cid * m_sd.data.channels;
		OnSpriteTransform(s);		
	}
	private function OnSpriteDestroy(s:Sprite):Void { ids.id = s.__cid; }
	
	
	static var vs_stage : String =
	'
#define SPRITE_W 26.0
#define SPRITE_H 37.0

uniform mat4 ProjectionMatrix;
uniform mat4 ViewMatrix;
uniform sampler2D SpriteData;
uniform float SpriteDataSizeX;
uniform float SpriteDataSizeY;
uniform float Count;
attribute vec3 vertex;
attribute vec3 position;

varying vec2 uv;
varying vec2 d_uv;
varying float v_id;

void main()
{
	vec4 v = vec4(vertex.xyz, 1.0);
	float sid = v.z;
	int count = int(Count);
	if (int(sid) >= count)
	{
		v *= 0.0;
		v += 10000.0;
		gl_Position = v;
		return;	
	}
	v.z = -v.z / 100000.0;
	
	v_id = v.z;
	
	vec2 d = vec2(0.0);
	d.x = mod(sid, SpriteDataSizeX) / (SpriteDataSizeX);
	d.y = (sid / SpriteDataSizeY) / (SpriteDataSizeY);
	
	d_uv = d;
	
	vec4 vd = texture2D(SpriteData,d);	
	
	uv   = v.xy;
	uv.x = uv.x + 0.5;
	
	
	float s 
	//= 1.0;
	= vd.z;
	//= Count / 500000.0;
	//s = max(0.25, 1.0 - s);
	
	v.x = (v.x * SPRITE_W*s) + vd.x;
	v.y = (v.y * SPRITE_H*s) + vd.y;// +d.y;
	
	v = (v * ViewMatrix) * ProjectionMatrix;
	gl_Position = v;
}
	';
	
	static var fs_stage : String =
	'
uniform sampler2D SpriteData;
uniform sampler2D Texture;
uniform float Count;
varying vec2 uv;
varying vec2 d_uv;
varying float v_id;

void main()
{
	vec4 c = texture2D(Texture, uv);	
	gl_FragColor = c;
}
	';
	
}