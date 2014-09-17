#include "screenmanager.h"
using namespace std;



ScreenManager &ScreenManager :: GetInstance()
{
    static ScreenManager instance;
    return instance;
}
ScreenManager::ScreenManager()
{
    //ctor
}

ScreenManager::~ScreenManager()
{
    //dtor
}

void ScreenManager::AddScreen(GameScreen *screen)
{
    transition.SetAlpha(0);
    startTransition=true;

    currentScreen->UnloadContent();
    delete currentScreen;
    currentScreen=screen;
    currentScreen->LoadContent();
}

void ScreenManager::Initialize()
{
    currentScreen= new SplashScreen();
}

void ScreenManager::LoadContent()
{
    currentScreen->LoadContent();
    transitionImage =al_load_bitmap("transitionImage.png");
    float position[2]={0,0};
    transition.LoadContent(transitionImage, "",position);
    startTransition=false;
}

void ScreenManager::UnloadContent()
{
    al_destroy_bitmap(transitionImage);
    transition.UnloadContent();
}

void ScreenManager::Update(ALLEGRO_EVENT ev)
{
    if(!startTransition)
        currentScreen->Update(ev);
    else
        Transition();
}

void ScreenManager::Draw(ALLEGRO_DISPLAY *display)
{
    currentScreen->Draw(display);
    if(startTransition)
        transition.Draw(display);
}

void ScreenManager::Transition()
{

}
