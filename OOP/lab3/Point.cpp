#include "Point.h"

Point::Point()
{
	// TODO: это лучше делать значениями полей по умолчанию
	_x = _y = 0.0f;
}

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

float Point::GetX()
{
	return _x;
}

float Point::GetY()
{
	return _y;
}