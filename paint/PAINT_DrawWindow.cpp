#include "PAINT_DrawWindow.h"

using namespace paint;

DrawWindow::DrawWindow(SDL_Window* sdlWindow, SDL_Renderer* renderer, gfx::Rectangle const & rect)
	: Window(sdlWindow, renderer, rect)
{
}
