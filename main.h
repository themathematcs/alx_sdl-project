#ifndef main_h
#define main_h

#include <SDL2/SDL.h>
#include <stdbool.h>
#include <stdio.h>

typedef struct Create {
    SDL_Window* window;
    SDL_Renderer* renderer;
    SDL_Surface* screenSurface;
     int SCREEN_WIDTH;
     int SCREEN_HEIGHT;
} Create;

bool innit(Create* create);

#endif
