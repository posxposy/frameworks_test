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
import haxor.input.Input;
import haxor.input.KeyCode;
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
		Asset.LoadTexture2D("BunnyTexture", "http://haxor.xyz/demos/bunny-mark/img/wabbit.png");
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
		
		count = 300000;
		
		#if html
		
		if (application.browser.mobile) count = 10000;
		
		var hash : String = js.Browser.window.location.hash;
		hash = hash.substr(1);
		
		var c : Int = Std.parseInt(hash);
		if(c!=null)if (!Math.isNaN(c)) count = c;
				
		#end
		
		
		
		canvas = (new Entity("stage")).AddComponent(Stage);
		canvas.Initialize(count);
		
		rabbits = [];
		
		var sh : Float32 = Screen.height;
		
		
		
		for (i in 0...1000)
		{
			AddBunny();
		}
		
		
		var k : Int = 0;
		
		Activity.Run(function(t:Float):Bool
		{
			var lw : Float32 = Screen.width * 0.5;		
			var lh : Float32 = Screen.height;
			
			var len : Int = Std.int(rabbits.length / 2);
			
			var mx : Float32 = Input.mouse.x;
			var my : Float32 = Input.mouse.y;
			
			for (i in 0...len)
			{
				var dt : Float32 = Time.delta * 2.0;
				dt = Mathf.Min(dt, 1.0 / 30.0);
				var s : Sprite = rabbits[k];
				s.speed.y -= dt * 980.0;
				s.x += s.speed.x * dt;
				s.y += s.speed.y * dt;
				
				if (s.x <= -lw) s.speed.x =  Mathf.Abs(s.speed.x);
				else
				if (s.x >=  lw) s.speed.x = -Mathf.Abs(s.speed.x);
				
				if (s.y < 0.0)
				{
					s.speed.y = Mathf.Abs(s.speed.y);
					if (s.speed.y < 1.0) s.speed.y = Random.Range(100,800);
					s.y = 0.0;
				}	
				k++;
				if (k >= rabbits.length) k = 0;
			}		
			
			var is_insert:Bool = Input.Pressed(KeyCode.Mouse0) || (Input.touches.length == 1);
			
			if (is_insert)
			{
				var ht : Float32 = Input.GetHoldTime(KeyCode.Mouse0)*2.0;
				var insert:Int = Std.int((ht + 1.0) * 100.0);
				for (i in 0...insert)
				{
					AddBunny();
				}
			}
			
			
			return true;
		});
		
	}
	
	/**
	 * Adds a bunny.
	 */
	private function AddBunny():Void
	{
		if (rabbits.length >= count) return;
		var sw : Float32 = Screen.width;
		var sh : Float32 = Screen.height;
		var s : Sprite = new Sprite("bunny"+rabbits.length);
		s.x = Random.Range(-sw*0.45, sw*0.45);
		s.y = sh - Random.Range(0, sh * 0.8);
		s.speed.y = Random.Range( -200, 200);
		s.speed.x = Random.Range( -200, 200);
		canvas.Add(s);
		rabbits.push(s);		
		#if html
		var el : js.html.Element = cast js.Browser.document.querySelector("#field");
		el.textContent = rabbits.length + " Bunnies - Max "+count;
		#end
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
		#if windows
		var w : haxor.platform.windows.Window = application.window;
		if((Time.frame%60)==0)w.title = "BunnyMark Windows - "+Time.fps+"fps - "+rabbits.length+" bunnies";
		#end
		//Gizmo.Grid(100.0);
	}
	
}