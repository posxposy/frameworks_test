#include <Kore/pch.h>
#include <Kore/Graphics4/Graphics.h>
#include <Kore/Graphics2/Graphics.h>
#include <Kore/Input/Mouse.h>
#include <Kore/System.h>
#include <Kore/Log.h>
#include <string> 

const int MAX_BUNNISES = 1000000;
const int width = 800;
const int height = 600;

Kore::Graphics2::Graphics2 *g2 = nullptr;
Kore::Graphics4::Texture *bunnyTexture = nullptr;

struct Bunny {
    float x;
    float y;
    float speedX;
    float speedY;
};

int bunniesCount = 0;
float gravity = 0.5f;
int maxX = 0;
int maxY = 0;
int minX = 0;
int minY = 0;
Bunny bunnies[MAX_BUNNISES];

float deltaTime = 0.0f;
unsigned int totalFrames = 0;
float  elapsedTime = 0.0f;
float  previousTime = 0.0f;
unsigned int fps = 0;

void mainLoop()
{
    unsigned int currentTime = Kore::System::time();
    deltaTime = (currentTime - previousTime);
    elapsedTime += deltaTime;
    if (elapsedTime >= 1.0) {
        fps = totalFrames;
        totalFrames = 0;
        elapsedTime = 0;
    }
    totalFrames++;
    previousTime = currentTime;

    Kore::Graphics4::begin();
    g2->begin(false, width, height, true, 0xFF2A3347);
    g2->setColor(0xFFFFFFFF);
    for (int i = 0; i < bunniesCount; i++) {
        Bunny *bunny = &bunnies[i];

        bunny->x += bunny->speedX;
        bunny->y += bunny->speedY;
        bunny->speedY += gravity;

        if (bunny->x > maxX) {
            bunny->speedX *= -1.0f;
            bunny->x = maxX;
        } else if (bunny->x < minX) {
            bunny->speedX *= -1.0f;
            bunny->x = minX;
        } if (bunny->y > maxY) {
            bunny->speedY *= -0.8f;
            bunny->y = maxY;
            if ((rand() / (RAND_MAX + 1.0f)) > 0.5f) bunny->speedY -= rand() % 4 + 3.0f;
        } else if (bunny->y < minY) {
            bunny->speedY = 0.0f;
            bunny->y = minY;
        }

        g2->drawImage(bunnyTexture, bunny->x, bunny->y);
    }
    
    g2->setColor(0xFF000000);
    g2->fillRect(0, 0, width, 20);
    g2->setFontColor(0xFFFFFFFF);
    std::string a = "bunnies: " + std::to_string(bunniesCount);
    std::string b = ", fps: " + std::to_string(fps);
    g2->drawString((a + b).c_str(), 10, 2);

    g2->end();
    Kore::Graphics4::end();
    Kore::Graphics4::swapBuffers();
}

void mouseDown(int windowId, int button, int x, int y)
{
    int size = (button == 0) ? 10000 : 1000;
    if (size + bunniesCount >= MAX_BUNNISES) return;
    for (int i = 0; i < size; i++) {
        Bunny b = { rand() % maxX, rand() & 10, rand() % 5, rand() % 5 };
        bunnies[bunniesCount + i] = b;
    }
    bunniesCount += size;
    Kore::log(Kore::LogLevel::Info, std::to_string(bunniesCount).c_str());
}

int kore(int argc, char** argv) 
{
    Kore::System::init("BunnyMark", width, height);
    
    bunnyTexture = new Kore::Graphics4::Texture("wabbit_alpha.png");
    g2 = new Kore::Graphics2::Graphics2(width, height, false);
    
    g2->setFont(Kore::Kravur::load("mainfont", FontStyle(), 16));
    
    maxX = width - bunnyTexture->width;
    maxY = height - bunnyTexture->height;
    deltaTime = 0.0f;
    previousTime = Kore::System::time();

    Kore::Mouse::the()->Press = mouseDown;
    Kore::System::setCallback(mainLoop);

    Kore::System::start();

    return 0;
}
