#pragma once
#include <string>

namespace Task222
{
	// TODO: каждая структура должна быть в своём файле
	struct Rectangle
	{
		double Length;
		double Width;
		std::string Color;
	};
}

void DemoRectangle();
void WhriteRectangle(const Task222::Rectangle& rectangle);
void ReadRectangle(Task222::Rectangle& rectangle);
void DemoReadAndWhriteRectangles();
void Exchange(Task222::Rectangle& rectangle1, Task222::Rectangle& rectangle2);
void FindRectangle(const Task222::Rectangle* rectangles, size_t size);
void FindMaxRectangle(const Task222::Rectangle* rectangles, size_t size);