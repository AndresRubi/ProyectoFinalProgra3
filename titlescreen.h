#ifndef TITLESCREEN_H
#define TITLESCREEN_H
#include "screenmanager.h"
#include "inputmanager.h"
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>


class TitleScreen: public  GameScreen
{
    public:
        TitleScreen();
        virtual ~TitleScreen();

        void LoadContent();
        void UnloadContent();
        void Update(ALLEGRO_EVENT ev);
        void Draw(ALLEGRO_DISPLAY *display);

    protected:
    private:
     ALLEGRO_FONT *font;
//     InputManager input;
};

#endif // TITLESCREEN_H
