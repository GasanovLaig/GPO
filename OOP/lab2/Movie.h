#pragma once
#include <string>
#include "MovieGenre.h"

struct Movie
{
	std::string Name;
	int Duration;
	int ReleaseYear;
	MovieGenre Genre;
	double Rating;
};

void DemoMovie();
//ex 2.2.9
size_t CountMoviesByGenre(const Movie* movies, size_t size,
	MovieGenre findGenre);
void DemoMoviesByGenre();
const Movie* FindBestGenreMovie(const Movie* movies, size_t size,
	MovieGenre findedGenre);