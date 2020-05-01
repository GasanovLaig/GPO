#include "Rectangle.h"
#include <exception>
#include <iostream>

Rectangle::Rectangle(float length, float width, Point center)
{
	SetLength(length);
	SetWidth(width);
	SetCenter(center);
}

void Rectangle::SetLength(float length)
{
	if (length < 0)
	{
		throw std::exception("Длина не может быть < 0!");
	}

	_length = length;
}

void Rectangle::SetWidth(float width)
{
	if (width < 0)
	{
		throw std::exception("Ширина прямогольника не может быть < 0!");
	}

	_width = width;
}

void Rectangle::SetCenter(Point center)
{
	_center.SetX(center.GetX());
	_center.SetY(center.GetY());
}

float Rectangle::GetLength()
{
	return _length;
}

float Rectangle::GetWidth()
{
	return _width;
}

Point Rectangle::GetCenter()
{
	return _center;
}

void DemoRectangleWithPoint()
{
	Rectangle rectangles[5]
	{
		{25.0f, 1.1f, {5.0f, 10.7f}},
		{50.0f, 7.3f, {12.0f, -10.7f}},
		{4.7f, 43.6f, {-7.0f, 16.2f}},
		{9.2f, 23.9f, {4.0f, 4.0f}},
		{17.9f, 38.0f, {-3.0f, -2.1f}}
	};

	float averageX = 0.0f;
	float averageY = 0.0f;
	for (int i = 0; i < 5; ++i)
	{
		std::cout <<
			rectangles[i].GetCenter().GetX() << ", " <<
			rectangles[i].GetCenter().GetY() << "; " <<
			rectangles[i].GetLength() << ", " <<
			rectangles[i].GetWidth() << ".\n";

		averageX += rectangles[i].GetCenter().GetX();
		averageY += rectangles[i].GetCenter().GetY();
	}

	std::cout << "\nСреднее арифметическое"
		"координат центров всех пр¤моугольников: " <<
		averageX / 5.0f << "; " << averageY / 5.0f << "\n";
}