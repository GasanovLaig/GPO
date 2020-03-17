#pragma once
#include <string>
#include "Task228Enums.h"

//ex 2.2.2.1
namespace Task222
{
	// TODO: каждая структура должна быть в своём файле
	struct Rectangle
	{
		double Length;
		double Width;
		std::string Color;
	};
}

struct Flight
{
	// TODO: подключи пространство имен, что не писать везде std
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

// TODO: грам ошибка в названии?
struct Dicipline
{
	std::string Name;
	__int8 Term; // TODO: Mark
	int Hours;
};