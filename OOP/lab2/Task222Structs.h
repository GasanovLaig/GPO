#pragma once
#include <string>
#include "Task228Enums.h"
using namespace std;

//ex 2.2.2.1
namespace Task222
{
	// TODO: каждая структура должна быть в своём файле
	struct Rectangle
	{
		double Length;
		double Width;
		string Color;
	};
}

struct Flight
{
	// TODO: подключи пространство имен, что не писать везде std
	string From;
	string To;
	int Duration;
};

struct Movie
{
	string Name;
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
	string Name;
	string Surname;
	string Number;
};

struct Music
{
	string Name;
	string Author;
	string Genre;
	int Duration;
};

// TODO: грам ошибка в названии?
struct Dicipline
{
	string Name;
	__int8 Term; // TODO: Mark
	int Hours;
};