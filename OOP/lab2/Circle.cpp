#include "Circle.h"
#include <string>
#include <iostream>
using namespace std;

// TODO: объявление структур должно быть в h-файлах

Circle* MakeCircle(double x, double y, double radius, const std::string& color)
{
	Circle* circle = new Circle{ x, y, radius, color };
	return circle;
}

Circle* CopyCircle(const Circle* circle)
{
	Circle* copy = MakeCircle(circle->X, circle->Y,
		circle->Radius, circle->Color);
	// TODO: заменить на использование функции-конструктора (когда в следующей лабе появятся сеттеры, то этот подход позволит создавать объекты в обход сеттеров - потенциальная ошибка
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
	// TODO: освободить память от копий
}

Task222::Rectangle* MakeRectangle(double length, double width,
	const std::string& color)
{
	Task222::Rectangle* r = new Task222::Rectangle{ length, width, color };
	return r;
}

Flight* MakeFlight(const std::string& from, const std::string& to,
	int duration)
{
	Flight* f = new Flight{ from, to, duration };
	return f;
}

Movie* MakeMovie(const std::string& name, int duration,
 int releaseYear, MovieGenre genre, double rating)
{
	Movie* m = new Movie{ name, duration, releaseYear, genre, rating };
	return m;
}

Time* MakeTime(int hours, int minutes, int seconds)
{
	Time* t = new Time{ hours, minutes, seconds };
	return t;
}

Task222::Rectangle* CopyRectangle(const Task222::Rectangle* rectangle)
{
	// TODO: заменить на вызов функции конструктора
	Task222::Rectangle* r = MakeRectangle(rectangle->Length,
		rectangle->Width, rectangle->Color);
	return r;
}

Flight* CopyFlight(const Flight* flight)
{
	// TODO: заменить на вызов функции-конструктора
	Flight* f = MakeFlight(flight->From, flight->To, flight->Duration);
	return f;
}

Movie* CopyMovie(const Movie* movie)
{
	// TODO: заменить на использование функции-конструктора
	Movie* m = MakeMovie(movie->Name, movie->Duration, 
		movie->ReleaseYear, movie->Genre, movie->Rating);
	return m;
}

Time* CopyTime(const Time* time)
{
	// TODO: заменить на использование функции-конструктора
	Time* t = MakeTime(time->Hours, time->Minutes, time->Seconds);
	return t;
}

void DemoMakeAndCopyFunctions()
{
	Task222::Rectangle* rectangle = MakeRectangle(0.0, 0.0, "black");
	Flight* flight = MakeFlight("A", "B", 3600);
	Movie* movie = MakeMovie("M", 128, 2020, Action, 10.0);
	Time* time = MakeTime(23, 59, 59);

	Task222::Rectangle* copiedRectangle = CopyRectangle(rectangle);
	Flight* copiedFlight = CopyFlight(flight);
	Movie* copiedMovie = CopyMovie(movie);
	Time* copiedTime = CopyTime(time);

	delete time;
	delete movie;
	delete flight;
	delete rectangle;
	delete copiedRectangle;
	delete copiedFlight;
	delete copiedMovie;
	delete copiedTime;
	// TODO: освободить память скопированных объектов
}