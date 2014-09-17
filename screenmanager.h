#ifndef SCREENMANAGER_H
#define SCREENMANAGER_H
#include <iostream>
#include <string>
#include "gamescreen.h"
#include "splashscreen.h"
#include "titlescreen.h"
using namespace std;
#include "fadeanimation.h"


//allegro inits

#include <allegro5/allegro.h>
//#include <allegro5/allegro5.h>
//#include <allegro5/allegro_native_dialog.h>
#include <allegro5/allegro_image.h>
//#include <allegro5/allegro_audio.h>
//#include <allegro5/allegro_acodec.h>
//#include <allegro5/allegro_font.h>
//#include <allegro5/allegro_ttf.h>

#define ScreenWidth 800
#define ScreenHeight 600

class ScreenManager
{
    private:
    ScreenManager();
    ScreenManager(ScreenManager const&);
    void operator=(ScreenManager const&);

    string text;
    GameScreen *currentScreen;
    FadeAnimation transition;

    ALLEGRO_BITMAP *transitionImage;
    void Transition();

    bool startTransition;

    public:
        virtual ~ScreenManager();
        static ScreenManager &GetInstance();

        void AddScreen(GameScreen *screen);

        void Initialize();
        void LoadContent();
        void UnloadContent();
        void Update(ALLEGRO_EVENT ev);
        void Draw (ALLEGRO_DISPLAY *display);
    protected:
    private:
};

#endif // SCREENMANAGER_H
