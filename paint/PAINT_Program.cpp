#include "PAINT_Program.h"
#include "PAINT_DrawWindow.h"
#include "PAINT_ToolWindow.h"
#include "PAINT_StatusBarWindow.h"
#include <SDL.h>

using namespace paint;
using namespace gfx;
using namespace win;

void Program::initialize(SDL_Window* sdlWindow, SDL_Renderer* renderer)
{
	renderer_ = renderer;
	window_ = sdlWindow;

	// Create draw window.
	gfx::Rectangle drawRect(200, 40, 1000, 760);
	auto drawWindow = std::make_shared<DrawWindow>(sdlWindow, renderer, drawRect);
	gfx::Colour drawColour{ 255, 255, 255, 255 };
	drawWindow->setBackgroundColour(drawColour);
	screen_.AddChild(drawWindow);

	// Create tool window.
	gfx::Rectangle toolRect(0, 40, 200, 800);
	auto toolWindow = std::make_shared<ToolWindow>(sdlWindow, renderer, toolRect);
	gfx::Colour toolColour{ 59, 156, 141, 120 };
	toolWindow->setBackgroundColour(toolColour);
	screen_.AddChild(toolWindow);

	// Create status bar window.
	gfx::Rectangle statusRect(0, 760, 1200, 40);
	auto statusWindow = std::make_shared<StatusBarWindow>(sdlWindow, renderer, statusRect);
	gfx::Colour statusColour{ 40, 115, 103, 255 };
	statusWindow->setBackgroundColour(statusColour);
	screen_.AddChild(statusWindow);

	// Set active tool to default.

	// Anything else.
}

void Program::run()
{
	SDL_Event e;
	bool quit = false;
	int xMouse;
	int yMouse;
	int xOffset;
	int yOffset;

	//While application is running
	std::shared_ptr<UIelement> activeElement = nullptr;
	while (!quit) {
		//Handle events on queue
		while (SDL_PollEvent(&e) != 0) {
			//User requests quit
			if (e.type == SDL_QUIT) {
				quit = true;
			}

			//If the mouse moved
			if (e.type == SDL_MOUSEMOTION) {
				//Get the mouse offsets
				xOffset = e.motion.x;
				yOffset = e.motion.y;
			}
		}

		// Has mouse moved? No => nothing to do.
		// If so: what is the active UIelement?
		// Is it the same as before? => Nothing to do.
		// Signal to the old active one the mouse has moved out.
		// Signal to the new active one the mouse has moved in.

		// Draw everything.
		SDL_RenderClear(renderer_);
		screen_.draw();
		SDL_RenderPresent(renderer_);
	}

	// TODO: dispose of window_
}
