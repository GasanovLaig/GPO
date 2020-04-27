#include "Rectangle.h"
#include <exception>
#include <ctime>
#include <iostream>

void Rectangle::MakeRectangle(float length, float width, Point center)
{
	Length = length;
	Width = width;
	Center = center;
}

void Rectangle::SetLength(float length)
{
	if (length < 0)
	{
		throw std::exception("Длина не может быть < 0!");
	}

	Length = length;
}

void Rectangle::SetWidth(float width)
{
	if (width < 0)
	{
		throw std::exception("Ширина прямогольника не может быть < 0!");
	}

	Width = width;
}

void Rectangle::SetCenter(Point center)
{
	Center = center;
}

void Rectangle::DemoRectangleWithPoint()
{
	Rectangle rectangles[5];
	float averageX = 0;
	float averageY = 0;
	srand(static_cast<size_t>(time(nullptr)));
	for (int i = 0; i < 5; ++i)
	{
		rectangles[i].MakeRectangle(rand(), rand(), { rand(), rand() });
		std::cout <<
			rectangles[i].Center.X << ", " <<
			rectangles[i].Center.Y << "; " <<
			rectangles[i].Length << ", " <<
			rectangles[i].Width << ".\n";

		averageX += rectangles[i].Center.X;
		averageY += rectangles[i].Center.Y;
	}

	std::cout << "\nСреднее арифметическое"
		"координат центров всех прямоугольников: " <<
		averageX << "; " << averageY << "\n";
}