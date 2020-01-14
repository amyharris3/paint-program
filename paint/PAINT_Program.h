#pragma once

#include <WIN_Container.h>

struct SDL_Window;
struct SDL_Renderer;

namespace paint
{
	class DrawWindow;
	class ToolWindow;
	class StatusBarWindow;

	class Program
	{
	private:
		win::Container screen_;
		SDL_Window* window_;
		SDL_Renderer* renderer_;
		//DrawWindow * drawWindow_;
		//ToolWindow * toolWindow_;
		//StatusBarWindow * statusWindow_;

		bool quit;

	public:
		Program() = default;
		~Program() = default;

		void initialize(SDL_Window* sdlWindow, SDL_Renderer* renderer);
		void run();

	};
}
