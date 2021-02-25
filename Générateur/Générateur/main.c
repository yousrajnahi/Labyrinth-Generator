#include"fonctions.h"


int main(int argc, char* argv[])
{
    srand(time(NULL));
    isRunning = Initialisation_creation();
    processInput();
    while (isRunning)
    {
        setup();
        Labyrinthe();
        SDL_Delay(1000);
    }
    Quiter_detruire();
    return 0;

}