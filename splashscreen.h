#ifndef SPLASHSCREEN_H
#define SPLASHSCREEN_H

#include "screenmanager.h"
#include "inputmanager.h"
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
class SplashScreen : public GameScreen
{
    public:
        SplashScreen();
        virtual ~SplashScreen();

        void LoadContent();
        void UnloadContent();
        void Update(ALLEGRO_EVENT ev);
        void Draw(ALLEGRO_DISPLAY *display);
    protected:
    private:
    ALLEGRO_FONT *font;

};

#endif // SPLASHSCREEN_H
