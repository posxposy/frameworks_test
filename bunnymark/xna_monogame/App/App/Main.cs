using System;
using System.Collections.Generic;
using System.Linq;
using Microsoft.Xna.Framework;
using Microsoft.Xna.Framework.Audio;
using Microsoft.Xna.Framework.Content;
using Microsoft.Xna.Framework.Graphics;
using Microsoft.Xna.Framework.Input;
using Microsoft.Xna.Framework.Media;

namespace App
{

    public class Main : Microsoft.Xna.Framework.Game
    {
        GraphicsDeviceManager graphics;
        SpriteBatch spriteBatch;
        MouseState lastMouseState;
        MouseState currentMouseState; 

        private List<Bunny> textures;        
        private float gravity = 0.5f;
        private float maxX;
        private float minX;
        private float maxY;
        private float minY;
        private Random random;
        private Color bgColor;
        private int bunniesCount = 0;
        private DebugText debugText;
       
        public Main()
        {
            graphics = new GraphicsDeviceManager(this);
            graphics.PreferredBackBufferWidth = 800;
            graphics.PreferredBackBufferHeight = 600;
            Content.RootDirectory = "Data";
        }

        protected override void Initialize()
        {
            bgColor = new Color(21, 21, 21);

            textures = new List<Bunny>();            
            random = new Random();
            maxX = graphics.PreferredBackBufferWidth - 26;
            maxY = graphics.PreferredBackBufferHeight - 37;
            minX = 0;
            minY = 0;

            base.Initialize();
        }

        protected override void LoadContent()
        {
            spriteBatch = new SpriteBatch(GraphicsDevice);
            debugText = new DebugText(Content);
        }

        public void AddBunnies(int count = 100)
        {
            for (int i = 0; i < count; i++)
            {
                Bunny bunny = new Bunny(Content);
                bunny.SpeedX = (float)random.NextDouble() * 5;
                bunny.SpeedY = (float)random.NextDouble() * 5;

                textures.Add(bunny);                
            }
            bunniesCount += count;
        }

        protected override void UnloadContent()
        {

        }
        
        protected override void Update(GameTime gameTime)
        {
            if (GamePad.GetState(PlayerIndex.One).Buttons.Back == ButtonState.Pressed)
                this.Exit();            

            //mouse input
            lastMouseState = currentMouseState;
            currentMouseState = Mouse.GetState();
            if (lastMouseState.LeftButton == ButtonState.Released && currentMouseState.LeftButton == ButtonState.Pressed)
            {
                AddBunnies(1000);
            }

            //bunnies movement
            for (int i = 0; i < textures.Count; i++)
            {
                textures[i].X += textures[i].SpeedX;
                textures[i].Y += textures[i].SpeedY;
                textures[i].SpeedY += gravity;

                if (textures[i].X > maxX)
                {
                    textures[i].SpeedX *= -1;
                    textures[i].X = maxX;
                }
                else if (textures[i].X < minX)
                {
                    textures[i].SpeedX *= -1;
                    textures[i].X = minX;                   
                }

                if (textures[i].Y > maxY)
                {
                    textures[i].SpeedY *= -0.9f;
                    textures[i].Y = maxY;
                    if ((float)random.NextDouble() > 0.5)
                    {
                        textures[i].SpeedY -= (float)random.NextDouble();
                    }                    
                }
                else if (textures[i].Y < minY)
                {
                    textures[i].SpeedY = 0;
                    textures[i].Y = minY;
                }
            }

            debugText.Update(gameTime);
            base.Update(gameTime);
        }


        protected override void Draw(GameTime gameTime)
        {
            GraphicsDevice.Clear(bgColor);

            spriteBatch.Begin();            
            for (int i = 0; i < textures.Count; i++)
            {
                spriteBatch.Draw(textures[i].texture, new Vector2(textures[i].X, textures[i].Y), Color.White);                                
            }
            debugText.Draw(spriteBatch, bunniesCount);
            spriteBatch.End();
            
            base.Draw(gameTime);
        }
    }
}

