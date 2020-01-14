#include "PAINT_StatusBarWindow.h"

using namespace paint;

StatusBarWindow::StatusBarWindow(SDL_Window* sdlWindow, SDL_Renderer* renderer, gfx::Rectangle const& rect)
	: Window(sdlWindow, renderer, rect)
{
}

void StatusBarWindow::displayMouseCoords(int xMouse, int yMouse)
{

	//The current input text.
	//std::string inputText = "Some Text";
	//gInputTextTexture.loadFromRenderedText(inputText.c_str(), textColour_);

}