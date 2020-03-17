//ÔÓÍÊÖÈÈ-ÊÎÍÑÒÐÓÊÒÎÐÛ
#pragma once
#include <string>
#include "Task222Structs.h"

struct Circle
{
	double X;
	double Y;
	double Radius;
	string Color;
};

// TODO: раскидать функции по соответствующим файлам структур
//ex 2.2.7.1 Äëÿ ñòðóêòóðû Circle ñîçäàòü ôóíêöèþ-êîíñòðóêòîð MakeCircle()
Circle* MakeCircle(double x, double y, double radius, const std::string& color);
Circle* CopyCircle(const Circle* circle);
void DemoCircle();

//ex 2.2.7.2 Äëÿ ñòðóêòóð Rectangle, Flight, Movie, Time ñîçäàòü ôóíêöèè-êîíñòðóêòîðû
Task222::Rectangle* MakeRectangle(double length, double width,
	const std::string& color);
Flight* MakeFlight(const std::string& from,
	const std::string& to, int duration);
Movie* MakeMovie(const std::string& name, int duration,
 int releaseYear, MovieGenre genre, double rating);
Time* MakeTime(int hours, int minutes, int seconds);

//ex 2.2.7.3 Äëÿ ñòðóêòóð Rectangle, Flight, Movie, Time ñîçäàòü ôóíêöèè êîïèðîâàíèÿ
Task222::Rectangle* CopyRectangle(const Task222::Rectangle* rectangle);
Flight* CopyFlight(const Flight* flight);
Movie* CopyMovie(const Movie* movie);
Time* CopyTime(const Time* time);

void DemoMakeAndCopyFunctions();