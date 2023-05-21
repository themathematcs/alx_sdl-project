#include "main.h"

int main() {
    Create create;
    
    create.SCREEN_WIDTH = 480;
    create.SCREEN_HEIGHT = 480;

    if (!innit(&create)) {
        printf("Initialization failed.\n");
        return 1;
    }

    // Your game logic goes here

    SDL_DestroyRenderer(create.renderer);
    SDL_DestroyWindow(create.window);
    SDL_Quit();

    return 0;
}

