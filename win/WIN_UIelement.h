#pragma once

#include "GFX_Colour.h"

namespace win
{
	class UIelement
	{
	private:
		gfx::Colour foregroundColour_;
		gfx::Colour backgroundColour_;

	public:
		UIelement() = default;
		virtual ~UIelement() = default;
		UIelement(UIelement const& that) = default;
		UIelement(UIelement && that) = default;
		UIelement& operator=(UIelement const& that) = default;
		UIelement & operator=(UIelement && that) = default;


		void setForegroundColour(gfx::Colour fgColour);
		void setBackgroundColour(gfx::Colour bgColour);
		gfx::Colour getBackgroundColour() const { return backgroundColour_; }

		virtual void draw() = 0;
		//virtual void mouseMove(int x, int y) {}
		//virtual void mouseEnter() {}
		//virtual void mouseExit() {}
		//virtual void mouseButtonDown(MouseButton button) {}
		//virtual void mouseButtonUp(MouseButton button) {}
	};
}
