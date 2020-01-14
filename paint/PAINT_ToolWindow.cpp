#include "PAINT_ToolWindow.h"

using namespace paint;

ToolWindow::ToolWindow(SDL_Window * sdlWindow, SDL_Renderer * renderer, gfx::Rectangle const & rect)
	: Window(sdlWindow, renderer, rect)
{
}


ToolWindow::~ToolWindow()
{
}
