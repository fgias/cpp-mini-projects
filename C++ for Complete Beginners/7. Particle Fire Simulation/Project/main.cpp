#include <iostream>
#include <SDL.h>
using namespace std;

int main() {

    const int SCREEN_WIDTH = 800;
    const int SCREEN_HEIGHT = 600;

    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        cout << "SDL init failed." << endl;
        return 1; // return positive integers when the program fails
    }
    cout << "SDL init succeeded." << endl;

    SDL_Window *window = SDL_CreateWindow(
        "Particle Fire Explosion", 
        SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 
        SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN
    );

    if (window == NULL) {
        SDL_Quit(); 
        return 2; // return positive integers when the program fails
    }

    SDL_Renderer *renderer = SDL_CreateRenderer(
        window, -1, SDL_RENDERER_PRESENTVSYNC
    );

    SDL_Texture *texture = SDL_CreateTexture(
        renderer, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_STATIC,
        SCREEN_WIDTH, SCREEN_HEIGHT
    );

    if (renderer == NULL) {
        cout << "Could not create renderer." << endl;
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 3;
    }

    if (texture == NULL) {
        cout << "Could not create texture." << endl;
        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 4;
    }

    Uint32 *buffer = new Uint32[SCREEN_WIDTH*SCREEN_HEIGHT]; 
    // buffer: a temporary memory area in which data is stored while it is 
    // being processed or transferred, especially one used while streaming 
    // video or downloading audio.

    memset(buffer, 0xFF, SCREEN_WIDTH*SCREEN_HEIGHT*sizeof(Uint32));
    // set all the bytes to the maximum possible value
    // 0x: hexadecimal, FF: 255 (max for 1 byte/ 8 bits)

    SDL_UpdateTexture(texture, NULL, buffer, SCREEN_WIDTH*sizeof(Uint32));
    SDL_RenderClear(renderer); 
    SDL_RenderCopy(renderer, texture, NULL, NULL);
    SDL_RenderPresent(renderer);

    bool quit = false;
    SDL_Event event;

    while (!quit) {
        // update particles
        // draw particles
        // check for events

        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                quit = true;
            };
        };
    };

    delete [] buffer;
    SDL_DestroyRenderer(renderer);
    SDL_DestroyTexture(texture);
    SDL_DestroyWindow(window);
    SDL_Quit();    

    return 0;
}


/* 

to run:

g++ main.cpp -Wall -g -c -I /opt/local/include/SDL2 -D_THREAD_SAFE; 
g++ main.o -o exec -lm -L /opt/local/lib -lSDL2;
./exec

*/