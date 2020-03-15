#include "Task229.h"
#include <iostream>
using namespace std;

size_t CountMoviesByGenre(const Movie* movies, size_t size,
	MovieGenre findedGenre)
{
	size_t count = 0;
	for (size_t i = 0; i < size; ++i)
	{
		if (movies[i].Genre == findedGenre)
		{
			++count;
		}
	}

	return count;
}

void DemoMoviesByGenre()
{
	Movie* movies = new Movie[10]
	{
		{"A", 64, 2000, Drama, 5.0 },
		{"B", 75, 2002, Comedy, 6.25},
		{"C", 128, 2004, Action, 7.2},
		{"D", 135, 2006, Thriller, 4.9},
		{"E", 120, 2008, Blockbuster, 6.9},
		{"F", 140, 2010, Horror, 7.2},
		{"G", 125, 2012, Comedy, 7.1},
		{"H", 110, 2014, Action, 6.67},
		{"I", 105, 2016, Drama, 7.8},
		{"J", 90, 2018, Drama, 7.14}
	};

	cout << "\nИсходный массив (Name, Duration, ReleaseYear,"
		"Genre, Rating):\n";
	for (int i = 0; i < 10; ++i)
	{
		cout << " (" << movies[i].Name << ", " << movies[i].Duration <<
			", " << movies[i].ReleaseYear << ", " << movies[i].Genre <<
			", " << movies[i].Rating << ");\n";
	}

	cout << "\nВведите жанр фильма: ";
	int genre;
	cin >> genre;
	cout << "\nКол-во фильмов этого жанра: " <<
		CountMoviesByGenre(movies, 10, static_cast<MovieGenre>(genre));

	cout << "\nНазвание фильма с наибольшым рейтингом этого жанра: " <<
		FindBestGenreMovie(movies, 10, static_cast<MovieGenre>(genre))->Name;

	delete[] movies;
}

const Movie* FindBestGenreMovie(const Movie* movies, size_t size,
	MovieGenre findedGenre)
{
	double maxRating = 0.0;
	size_t index = 0;
	for (size_t i = 0; i < size; ++i)
	{
		if (movies[i].Genre == findedGenre &&
			movies[i].Rating > maxRating)
		{
			index = i;
			maxRating = movies[i].Rating;
		}
	}

	if (movies[index].Genre == findedGenre)
	{
		return nullptr;
	}

	return (movies + index);
}