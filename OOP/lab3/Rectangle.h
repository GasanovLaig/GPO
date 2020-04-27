#pragma once
#include "Point.h"

struct Rectangle
{
	float Length;
	float Width;
	Point Center;

	void MakeRectangle(float length, float width, Point center);

	void SetLength(float length);
	void SetWidth(float width);
	void SetCenter(Point center);
	
	void DemoRectangleWithPoint();
};