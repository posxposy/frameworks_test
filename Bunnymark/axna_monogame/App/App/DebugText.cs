using Microsoft.Xna.Framework;
using Microsoft.Xna.Framework.Graphics;
using Microsoft.Xna.Framework.Content;

namespace App
{    
    public class DebugText
    {        
        private SpriteFont spriteFont;
        private int totalFrames = 0;
        private float elapsedTime = 0.0f;
        private int fps = 0;
        private Texture2D fill;
        public DebugText(ContentManager content)
        {            
            fill = content.Load<Texture2D>(@"fill");
            spriteFont = content.Load<SpriteFont>(@"default");
        }

        public void Update(GameTime gameTime)
        {
            elapsedTime += (float)gameTime.ElapsedGameTime.TotalMilliseconds;
            
            if (elapsedTime >= 1000.0f)
            {
                fps = totalFrames;
                totalFrames = 0;
                elapsedTime = 0;
            }            
        }

        public void Draw(SpriteBatch spriteBatch, int value)
        {
            totalFrames++;
            var text = string.Format("FPS={0}\nCOUNT={1}", fps, value);
            spriteBatch.Draw(fill, new Rectangle(0, 0, (int)spriteFont.MeasureString(text).X, (int)spriteFont.MeasureString(text).Y), Color.White);
            spriteBatch.DrawString(spriteFont, text, Vector2.Zero, Color.White);            
        }
    }
}
