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

Task::Rectangle* CopyRectangle(const Task::Rectangle* rectangle)
{
	Task::Rectangle* r = new Task::Rectangle
	{
		rectangle->Length,
		rectangle->Width,
		rectangle->Color
	};

	return r;
}

Flight* CopyFlight(const Flight* flight)
{
	Flight* f = new Flight
	{
		flight->From,
		flight->To,
		flight->Duration
	};

	return f;
}

Movie* CopyMovie(const Movie* movie)
{
	Movie* m = new Movie
	{
		movie->Name,
		movie->Duration,
		movie->ReleaseYear,
		movie->Genre,
		movie->Rating
	};

	return m;
}

Time* CopyTime(const Time* time)
{
	Time* t = new Time
	{
		time->Hours,
		time->Minutes,
		time->Seconds
	};

	return t;
}

void DemoMakeAndCopyFunctions()
{
	Task::Rectangle* r = MakeRectangle(0.0, 0.0, "black");
	Flight* f = MakeFlight("A", "B", 3600);
	Movie* m = MakeMovie("M", 128, 2020, "fantastic", 10.0);
	Time* t = MakeTime(23, 59, 59);

	Task::Rectangle* copiedRectangle = CopyRectangle(r);
	Flight* copiedFilm = CopyFlight(f);
	Movie* copiedMovie = CopyMovie(m);
	Time* copiedTime = CopyTime(t);

	delete t;
	delete m;
	delete f;
	delete r;
}