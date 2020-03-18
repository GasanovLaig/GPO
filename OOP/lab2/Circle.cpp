#include "Circle.h"
#include <string>
#include <iostream>
using namespace std;

Circle* MakeCircle(double x, double y, double radius, const std::string& color)
{
	Circle* circle = new Circle{ x, y, radius, color };
	return circle;
}

Circle* CopyCircle(const Circle* circle)
{
	Circle* copy = MakeCircle(circle->X, circle->Y,
		circle->Radius, circle->Color);
	return copy;
}

void DemoCircle()
{
	Circle* circle1 = MakeCircle(5.0, 7.0, 7.5, "Red");
	Circle* circle2 = MakeCircle(2.0, -12.0, 12.75, "Green");
	Circle* circle3 = MakeCircle(-10.0, 10.0, 1.45, "Blue");

	Circle* copiedCircle1 = CopyCircle(circle1);
	Circle* copiedCircle2 = CopyCircle(circle2);
	Circle* copiedCircle3 = CopyCircle(circle3);

	delete circle1;
	delete circle2;
	delete circle3;
	delete copiedCircle1;
	delete copiedCircle2;
	delete copiedCircle3;
}

// TODO: этих функций здесь быть не должно