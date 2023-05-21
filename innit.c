#include "main.h"

bool innit(Create* create) {
    create->screenSurface = NULL;
    
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
        return false;
    } else {
        create->window = SDL_CreateWindow("shooter", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, create->SCREEN_WIDTH, create->SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
        if (create->window == NULL) {
            printf("Window creation failed: %s\n", SDL_GetError());
            return false;
        } else {
            // Get window surface
            create->screenSurface = SDL_GetWindowSurface(create->window);

            // Fill the surface white
            SDL_FillRect(create->screenSurface, NULL, SDL_MapRGB(create->screenSurface->format, 0xFF, 0xFF, 0xFF));

            // Update the surface
            SDL_UpdateWindowSurface(create->window);

            // Event loop to keep the window open
            SDL_Event event;
            bool quit = false;
            while (!quit) {
                while (SDL_PollEvent(&event)) {
                    if (event.type == SDL_QUIT) {
                        quit = true;
                    }
                }
            }
        }
    }

    // Additional initialization code for renderer and other components

    return true;
}

