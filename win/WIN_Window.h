#pragma once

#include "GFX_Rectangle.h"
#include "WIN_Container.h"

struct SDL_Window;
struct SDL_Renderer;

namespace win 
{
	class Layout;

	class Window : public Container
	{
	private:
		Layout  * layout_;
		const char* winName_;
		gfx::Rectangle rect_;
		SDL_Window* sdlWindow_;
		SDL_Renderer* renderer_;

		bool quit{ false };

	public:
		Window() = delete;
		virtual ~Window() = default;
		Window(SDL_Window* sdlWindow, SDL_Renderer* renderer, const gfx::Rectangle& rect);
		Window(Window const& that) = delete;
		Window(Window && that) = delete;
		Window & operator=(Window const& that) = delete;
		Window& operator=(Window && that) = delete;

		void draw() override;

	protected:
		SDL_Window * getSDLWindow() { return sdlWindow_; }
		const SDL_Window * getSDLWindow() const { return sdlWindow_; }
	};
}
