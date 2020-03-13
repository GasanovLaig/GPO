#include "Task227.h"

#include <string>
#include <iostream>
using namespace std;

struct Circle
{
	double X;
	double Y;
	double Radius;
	string Color;
};

//ex 2.2.7.1 Для структуры Circle создать функцию-конструктор MakeCircle()
Circle* MakeCircle(double x, double y, double radius, const std::string& color)
{
	Circle* circle = new Circle{ x, y, radius, color };
	return circle;
}

Circle* CopyCircle(const Circle* circle)
{
	Circle* copy = new Circle
	{
		circle->X,
		circle->Y,
		circle->Radius,
		circle->Color
	};

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

	delete copiedCircle1;
	delete copiedCircle2;
	delete copiedCircle3;
	delete circle1;
	delete circle2;
	delete circle3;
}

Task::Rectangle* MakeRectangle(double length, double width,
	const std::string& color)
{
	Task::Rectangle* r = new Task::Rectangle{ length, width, color };
	return r;
}

Flight* MakeFlight(const std::string& from, const std::string& to,
	int duration)
{
	Flight* f = new Flight{ from, to, duration };
	return f;
}

Movie* MakeMovie(const std::string& name, int duration, int releaseYear,
	const std::string& genre, double rating)
{
	Movie* m = new Movie{ name, duration, releaseYear, genre, rating };
	return m;
}

Time* MakeTime(int hours, int minutes, int seconds)
{
	Time* t = new Time{ hours, minutes, seconds };
}

Task::Rectangle* CopyRectangle(double length, double width,
	const std::string& color)
{
	Task::Rectangle* r = new Task::Rectangle{ length, width, color };
	return r;
}

Flight* CopyFlight(const std::string& from,
	const std::string& to, int duration)
{
	Flight* f = new Flight{ from, to, duration };
	return f;
}

Movie* CopyMovie(const std::string& name, int duration,
	int releaseYear, const std::string& genre, double rating)
{
	Movie* m = new Movie{ name, duration, releaseYear, genre, rating };
	return m;
}

Time* CopyTime(int hours, int minutes, int seconds)
{
	Time* t = new Time{ hours, minutes, seconds };
	return t;
}