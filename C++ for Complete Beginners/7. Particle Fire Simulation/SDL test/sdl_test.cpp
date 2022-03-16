#include <iostream>
#include <SDL.h>
using namespace std;

int main() {
    cout << "Hello World!" << endl;

    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        cout << "SDL init failed." << endl;
        return 1;
    }

    cout << "SDL init succeeded." << endl;

    SDL_Quit();    

    return 0;
}