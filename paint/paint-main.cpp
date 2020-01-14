#include "PAINT_Program.h"
#include "SDL.h"
#include "SDL_ttf.h"
#include <iostream>

using namespace paint;
static Program s_program;

int main(int argc, char ** argv)
{
	// Create root window.
	SDL_Window* rootWindow = SDL_CreateWindow("rootWindow", 100, 100, 1200, 800, 0);
	SDL_Renderer* renderer = SDL_CreateRenderer(rootWindow, -1, SDL_RENDERER_ACCELERATED);
	SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);

	if (rootWindow == nullptr) {
		printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
	}

	s_program.initialize(rootWindow, renderer);
	s_program.run();

	return 0;
}