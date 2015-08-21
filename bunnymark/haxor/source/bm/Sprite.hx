package bm;
import haxor.core.Resource;
import haxor.math.Random;
import haxor.math.Vector2;
import haxor.platform.Types.Float32;

/**
 * Class that describes a sprite.
 * @author Eduardo Pons - eduardo@thelaborat.org
 */
@:allow(bm)
class Sprite extends Resource
{
	/**
	 * Reference to the stage.
	 */
	public var stage(get, never):Stage;
	private function get_stage():Stage { return Stage.instance; }
	private var __sdp:Int;
	
	/**
	 * X coord.
	 */
	public var x(get, set):Float32;
	inline private function get_x():Float32 { return m_x; }
	inline private function set_x(v:Float32):Float32 { m_x = v; stage.OnSpriteTransform(this); return v; }
	private var m_x:Float32;
	
	/**
	 * Y coord.
	 */
	public var y(get, set):Float32;
	inline private function get_y():Float32 { return m_y; }
	inline private function set_y(v:Float32):Float32 { m_y = v; stage.OnSpriteTransform(this); return v; }
	private var m_y:Float32;
	
	public var size : Float32;
	
	public var speed:Vector2;
	
	/**
	 * CTOR.
	 * @param	p_name
	 */
	public function new(p_name:String="") 
	{
		super(p_name);		
		m_x = m_y = 0;
		size = Random.Range(1.3, 0.5);
		speed = new Vector2();		
		stage.OnSpriteBuild(this);
	}
	
	override public function OnDestroy():Void { stage.OnSpriteDestroy(this); }
	
}