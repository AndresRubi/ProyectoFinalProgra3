#include "splashscreen.h"


SplashScreen::SplashScreen()
{
    //ctor
}

SplashScreen::~SplashScreen()
{
    //dtor
}
void SplashScreen::LoadContent()
{
    font=al_load_font("blade.ttf",30,NULL);
}
void SplashScreen::UnloadContent()
{
    al_destroy_font(font);
}
void SplashScreen::Update(ALLEGRO_EVENT ev)
{
    if(input.isKeyPressed(ev,ALLEGRO_KEY_ENTER))
        ScreenManager::GetInstance().AddScreen(new TitleScreen);
}
void SplashScreen::Draw(ALLEGRO_DISPLAY *display)
{
    al_draw_text(font,al_map_rgb(255,0,255),100,100,NULL,"Splash SCREEN");
}
