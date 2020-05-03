#pragma once

class Point
{
private:
	float _x;
	float _y;

public:
	void SetX(float x);
	void SetY(float y);

	float GetX();
	float GetY();

	Point();
	Point(float x, float y);
};