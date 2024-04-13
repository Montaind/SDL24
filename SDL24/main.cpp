#include "SDL.h"
int main(int argc, char** argv)
{
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_Window* window = SDL_CreateWindow("Hi! Niger!",
        100, 100,
        800, 600, SDL_WINDOW_SHOWN);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);

    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 0);
    SDL_RenderClear(renderer);

    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
    SDL_Rect rect = { 100, 100, 50, 40 };
    SDL_RenderDrawRect(renderer, &rect);

    SDL_Rect rect2 = { 200, 100, 50, 60 };
    SDL_RenderFillRect(renderer, &rect2);

    SDL_SetRenderDrawColor(renderer, 200, 200, 0, 0);

    rect.y = 200;
    SDL_RenderDrawRect(renderer, &rect);

    rect2.x = 300;
    rect2.y = 50;
    rect2.w = 10;
    rect2.h = 30;
    SDL_RenderDrawRect(renderer, &rect2);

    SDL_RenderPresent(renderer);
    SDL_Delay(3000);

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}

