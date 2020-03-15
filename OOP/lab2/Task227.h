//ФУНКЦИИ-КОНСТРУКТОРЫ
#pragma once
#include <string>
#include "Task222.h"

struct Circle;

//ex 2.2.7.1 Для структуры Circle создать функцию-конструктор MakeCircle()
Circle* MakeCircle(double x, double y, double radius, const std::string& color);
Circle* CopyCircle(const Circle* circle);
void DemoCircle();

//ex 2.2.7.2 Для структур Rectangle, Flight, Movie, Time создать функции-конструкторы
Task::Rectangle* MakeRectangle(double length, double width,
	const std::string& color);
Flight* MakeFlight(const std::string& from,
	const std::string& to, int duration);
Movie* MakeMovie(const std::string& name, int duration,
 int releaseYear, MovieGenre genre, double rating);
Time* MakeTime(int hours, int minutes, int seconds);

//ex 2.2.7.3 Для структур Rectangle, Flight, Movie, Time создать функции копирования
Task::Rectangle* CopyRectangle(const Task::Rectangle* rectangle);
Flight* CopyFlight(const Flight* flight);
Movie* CopyMovie(const Movie* movie);
Time* CopyTime(const Time* time);

void DemoMakeAndCopyFunctions();