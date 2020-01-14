#pragma once

#include "WIN_Window.h"
#include "GFX_Colour.h"

namespace paint
{
	class StatusBarWindow :
		public win::Window
	{
	public:
		StatusBarWindow() = default;
		StatusBarWindow(SDL_Window* sdlWindow, SDL_Renderer* renderer, gfx::Rectangle const& rect);
		void displayMouseCoords(int xMouse, int yMouse);
		virtual ~StatusBarWindow() = default;
	};
}
