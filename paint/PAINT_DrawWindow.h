#pragma once

#include "WIN_Window.h"

class Colour;
class Tool;

namespace paint 
{
	class DrawWindow :
		public win::Window
	{
	private:
		// TODO What sort of pointer?
		Tool * activeTool_;

	public:
		DrawWindow() = default;
		DrawWindow(SDL_Window* sdlWindow, SDL_Renderer* renderer, const gfx::Rectangle& rect);


		virtual ~DrawWindow() = default;
	};
}