#pragma once
#include "WIN_Window.h"

namespace paint 
{
	class ToolWindow :
		public win::Window
	{
	public:
		ToolWindow(SDL_Window * sdlWindow, SDL_Renderer * renderer, const gfx::Rectangle & rect);
		virtual ~ToolWindow();

	};
}

