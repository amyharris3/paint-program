#pragma once

#include "WIN_UIelement.h"
#include <memory>
#include <vector>

namespace win
{
	class Layout;

	class Container : public UIelement
	{
	public:
		// Lifecycle
		Container();
		Container(std::shared_ptr<Layout> layout);
		~Container() = default;
		Container(const Container& that) = default;
		Container(Container&& that) = default;
		Container& operator=(const Container& that) = default;
		Container& operator=(Container&& that) = default;

		void AddChild(std::shared_ptr<UIelement> child);
		void ApplyLayout();

		void draw() override;

	private:
		std::vector<std::shared_ptr<UIelement>> children_;
		std::shared_ptr<Layout> layout_;
	};
}
