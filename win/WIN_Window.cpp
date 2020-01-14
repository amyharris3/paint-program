#include "WIN_Window.h"
#include <SDL.h>

using namespace win;

Window::Window(SDL_Window* sdlWindow, SDL_Renderer* renderer, gfx::Rectangle const & rect)
	: layout_(nullptr)
	, rect_(rect)
	, sdlWindow_(sdlWindow)
	, renderer_(renderer)
{
}

void Window::draw()
{
	SDL_Rect sdlRect{ rect_.x, rect_.y, rect_.width, rect_.height };
	SDL_RenderDrawRect(renderer_, &sdlRect);
	auto colourArr = getBackgroundColour().getColour();
	SDL_SetRenderDrawColor(renderer_, colourArr[0], colourArr[1], colourArr[2], colourArr[3]);
	SDL_RenderFillRect(renderer_, &sdlRect);
}
