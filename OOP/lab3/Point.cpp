#include "Point.h"

Point::Point(float x, float y)
{
	SetX(x);
	SetY(y);
}

void Point::SetX(float x)
{
	_x = x;
}

void Point::SetY(float y)
{
	_y = y;
}