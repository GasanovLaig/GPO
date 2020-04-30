#pragma once
#include "Point.h"

class Rectangle
{
public:
	Rectangle(float length, float width, Point center);

	void SetLength(float length);
	void SetWidth(float width);
	void SetCenter(Point center);

	float GetLength();
	float GetWidth();
	Point GetCenter();

	void DemoRectangleWithPoint();

private:
	float _length;
	float _width;
	Point _center;
};