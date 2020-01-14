#include "WIN_Container.h"
#include "WIN_FreeLayout.h"

using namespace win;

Container::Container()
	: Container(std::make_shared<FreeLayout>())
{
}

Container::Container(std::shared_ptr<Layout> layout)
	: UIelement()
	, layout_(layout)
{

}

void Container::AddChild(std::shared_ptr<UIelement> child)
{
	children_.push_back(child);
}

void Container::ApplyLayout()
{
	// TODO
}

void Container::draw()
{
	// TODO: draw myself.
	for (auto child : children_) {
		child->draw();
	}
}
