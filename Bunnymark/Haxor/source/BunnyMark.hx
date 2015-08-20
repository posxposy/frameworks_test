package;
import bm.Sprite;
import bm.Stage;
import haxe.Timer;
import haxor.component.Camera;
import haxor.component.CameraOrbit;
import haxor.component.MeshRenderer;
import haxor.core.Application;
import haxor.core.Asset;
import haxor.core.BaseApplication.EntryPoint;
import haxor.core.Entity;
import haxor.core.Enums.CameraMode;
import haxor.core.IRenderable;
import haxor.core.Time;
import haxor.graphics.Gizmo;
import haxor.graphics.material.Material;
import haxor.graphics.material.Shader;
import haxor.graphics.mesh.Model;
import haxor.graphics.Screen;
import haxor.graphics.texture.Texture2D;
import haxor.math.AABB2;
import haxor.math.Color;
import haxor.math.Mathf;
import haxor.math.Random;
import haxor.math.Vector3;
import haxor.platform.Types.Float32;
import haxor.thread.Activity;



/**
 * Entry point class.
 * @author Eduardo Pons - eduardo@thelaborat.org
 */
class BunnyMark extends Application implements IRenderable
{
	static function main() { EntryPoint.Initialize(); }

	public var cam : Camera;
	
	public var canvas : Stage;
	
	public var rabbits : Array<Sprite>;
	
	public var count : Int = 0;
	
	override public function Load():Bool 
	{
		Asset.LoadTexture2D("BunnyTexture", "img/wabbit.png");
		return false;
	}
	
	
	
	/**
	 * Init.
	 */
	override public function Initialize():Void 
	{
		InitStats();
		
		
		cam = (new Entity("camera")).AddComponent(Camera);		
		cam.mode = CameraMode.Ortho;		
		//cam.transform.position = new Vector3(0, 0, 3);
		cam.background = Color.FromHex("0x222222");
		//*/
		
		count = 200000;
		
		#if html
		
		var hash : String = js.Browser.window.location.hash;
		hash = hash.substr(1);
		
		var c : Int = Std.parseInt(hash);
		if (!Math.isNaN(c)) count = c;
		
		var el : js.html.Element = cast js.Browser.document.querySelector("#field");
		el.textContent = count + " Bunnies";
		#end
		
		
		
		canvas = (new Entity("stage")).AddComponent(Stage);
		canvas.Initialize(count);
		
		rabbits = [];
		
		var sh : Float32 = Screen.height;
		
		for (i in 0...count)
		{
			var s : Sprite = new Sprite("bunny" + i);
			s.x = Random.Range(-Screen.width*0.45, Screen.width*0.45);
			s.y = sh - Random.Range(0, sh * 0.8);
			s.speed.y = Random.Range( -200, 200);
			s.speed.x = Random.Range( -200, 200);
			canvas.Add(s);
			rabbits.push(s);
		}
		
		
		
		Activity.Run(function(t:Float):Bool
		{
			var lw : Float32 = Screen.width * 0.5;
		
			var lh : Float32 = Screen.height;
			
			for (i in 0...rabbits.length)
			{
				var s : Sprite = rabbits[i];
				s.speed.y -= Time.delta * 980.0;
				s.x += s.speed.x * Time.delta;
				s.y += s.speed.y * Time.delta;
				
				if (s.x <= -lw) s.speed.x =  Mathf.Abs(s.speed.x);
				else
				if (s.x >=  lw) s.speed.x = -Mathf.Abs(s.speed.x);
				
				if (s.y < 0.0)
				{
					s.speed.y = Mathf.Abs(s.speed.y);
					s.y = 0.0;
				}
			}
			return true;
		});
		
		
		/*
		var mat : Material = new Material("Flat");
		mat.shader = Shader.FlatTexture;
		mat.SetTexture("DiffuseTexture", Texture2D.green);
		mat.SetColor("Tint", Color.white);
		
		
		var sphere : MeshRenderer = (new Entity("sphere")).AddComponent(MeshRenderer);
		sphere.mesh = Model.screen;
		sphere.material = mat;
		//*/
		/*
		var o : CameraOrbit = CameraOrbit.Create(4.0, 45, 45);				
		o.camera.background = new Color(0.2, 0.2, 0.2);
		var ci : CameraOrbitInput = o.AddComponent(CameraOrbitInput);
		//*/
		
	}
	
	
	/**
	 * Add stats js
	 */
	private function InitStats():Void
	{
		#if html
		var stats = new js.Stats();
		if (stats.domElement != null)
		{
			stats.domElement.style.position = "absolute";
			stats.domElement.style.top = '0px';				
			stats.domElement.style.right = '0px';				
			js.Browser.document.body.appendChild(stats.domElement);		
			Activity.Run(function(t:Float32):Bool { stats.update(); return true; } );		
		}
		Timer.delay(function()
		{
			untyped __js__("$('#container')[0].style.width = '99.9%';");
		},2000);
		#end
	}
	
	override function OnResize():Void 
	{
		super.OnResize();
		ResizeCamera();
	}
	
	private function ResizeCamera():Void
	{
		if (cam != null)
		{
			var sw : Float32 = Screen.width*0.5;
			var sh : Float32 = Screen.height;				
			cam.screen = AABB2.FromMinMax( -sw, sw, 0, sh);		
		}
	}
	
	
	public function OnRender():Void
	{
		//Gizmo.Grid(100.0);
	}
	
}