//ÔÓÍÊÖÈÈ-ÊÎÍÑÒÐÓÊÒÎÐÛ
#pragma once
#include <string>
#include "Rectangle.h"
#include "Flight.h"
#include "Movie.h"
#include "Time.h"

struct Circle
{
	double X;
	double Y;
	double Radius;
	std::string Color;
};

// TODO: раскидать функции по соответствующим файлам структур. Не сделано! Ниже куча функций для других структур
Circle* MakeCircle(double x, double y, double radius, const std::string& color);
Circle* CopyCircle(const Circle* circle);
void DemoCircle();

Task222::Rectangle* MakeRectangle(double length, double width,
	const std::string& color);
Flight* MakeFlight(const std::string& from,
	const std::string& to, int duration);
Movie* MakeMovie(const std::string& name, int duration,
 int releaseYear, MovieGenre genre, double rating);
Time* MakeTime(int hours, int minutes, int seconds);

Task222::Rectangle* CopyRectangle(const Task222::Rectangle* rectangle);
Flight* CopyFlight(const Flight* flight);
Movie* CopyMovie(const Movie* movie);
Time* CopyTime(const Time* time);

void DemoMakeAndCopyFunctions();