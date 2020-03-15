#pragma once
#include <string>
#include "Task228Enums.h"

//ex 2.2.2.1
namespace Task
{
	struct Rectangle
	{
		double Length;
		double Width;
		std::string Color;
	};
}

struct Flight
{
	std::string From;
	std::string To;
	int Duration;
};

struct Movie
{
	std::string Name;
	int Duration;
	int ReleaseYear;
	MovieGenre Genre;
	double Rating;
};

struct Time
{
	int Hours;
	int Minutes;
	int Seconds;
};

//ex 2.2.2.2
struct Contact
{
	std::string Name;
	std::string Surname;
	std::string Number;
};

struct Music
{
	std::string Name;
	std::string Author;
	std::string Genre;
	int Duration;
};

struct Dicipline
{
	std::string Name;
	__int8 Term;
	int Hours;
};