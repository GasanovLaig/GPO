#pragma once
#include "Point.h"
// TODO: порядок
class Rectangle
{
private:
	float _length;
	float _width;
	Point _center;

public:
	void SetLength(float length);
	void SetWidth(float width);
	void SetCenter(Point center);

	float GetLength();
	float GetWidth();
	Point GetCenter();

	Rectangle(float length, float width, Point center);
};

void DemoRectangleWithPoint();