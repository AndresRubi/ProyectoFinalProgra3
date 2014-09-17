#ifndef GAMESCREEN_H
#define GAMESCREEN_H
#include <allegro5/allegro.h>
#include "inputmanager.h"
class GameScreen
{
    public:
        GameScreen();
        virtual ~GameScreen();

        virtual void LoadContent();
        virtual void UnloadContent();
        virtual void Update(ALLEGRO_EVENT ev);
        virtual void Draw(ALLEGRO_DISPLAY *display);


    protected:
    InputManager input;
    private:
};

#endif // GAMESCREEN_H
