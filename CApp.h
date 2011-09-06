#ifndef _CAPP_H_
    #define _CAPP_H_
#include <SDL/SDL.h>
#ifdef __cplusplus
    #include <cstdlib>
#else
    #include <stdlib.h>
#endif
#ifdef __APPLE__
#include <SDL/SDL.h>
#else
#include <SDL/SDL.h>
#endif



class CApp {
    private:
        bool            Running;

        SDL_Surface*    Surf_Display;

    public:
        CApp();

        int OnExecute();

    public:
        bool OnInit();

        void OnEvent(SDL_Event* Event);

        void OnLoop();

        void OnRender();

        void OnCleanup();
};

#endif
