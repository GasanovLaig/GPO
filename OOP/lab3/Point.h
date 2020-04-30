#pragma once

class Point
{
public:
	Point(float x, float y);

	void SetX(float x);
	void SetY(float y);

private:
	float _x;
	float _y;
};