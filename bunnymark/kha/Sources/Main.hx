package;

import kha.System;

/**
 * ...
 * @author The Mozok Team - Dmitry Hryppa
 */

class Main 
{
    public static inline var SCREEN_W:Int = 800;
    public static inline var SCREEN_H:Int = 600;
    
    public static function main():Void 
    {
        System.init({title:"BynnyMark", width:SCREEN_W, height:SCREEN_H}, function():Void 
        {
            new Empty();
        });
    }
}
