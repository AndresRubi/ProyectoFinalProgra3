#ifndef INPUTMANAGER_H
#define INPUTMANAGER_H

#include <allegro5/allegro.h>
#include <allegro5/keyboard.h>
#include <vector>
using namespace std;
class InputManager
{
    private:
    ALLEGRO_KEYBOARD_STATE keyState;

    public:
        InputManager();
        virtual ~InputManager();

        bool isKeyPressed(ALLEGRO_EVENT ev, int key);
        bool isKeyPressed(ALLEGRO_EVENT ev, vector<int> keys);

        bool isKeyRelease(ALLEGRO_EVENT ev, int key);
        bool isKeyRelease(ALLEGRO_EVENT ev, vector<int> keys);
    protected:

};

#endif // INPUTMANAGER_H
