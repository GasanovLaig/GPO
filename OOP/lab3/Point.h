#pragma once
// TODO: порядок членов класса
class Point
{
public:
	Point();
	Point(float x, float y);

	void SetX(float x);
	void SetY(float y);

	float GetX();
	float GetY();

private:
	float _x;
	float _y;
};