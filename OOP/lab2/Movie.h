#pragma once
#include <string>
#include "MoviesGenre.h"

struct Movie
{
	std::string Name;
	int Duration;
	int ReleaseYear;
	MoviesGenre Genre;
	double Rating;
};

void DemoMovie();
//ex 2.2.9
size_t CountMoviesByGenre(const Movie* movies, size_t size,
	MoviesGenre findGenre);
void DemoMoviesByGenre();
const Movie* FindBestGenreMovie(const Movie* movies, size_t size,
	MoviesGenre findedGenre);
Movie* MakeMovie(const std::string& name, int duration,
	int releaseYear, MoviesGenre genre, double rating);
Movie* CopyMovie(const Movie* movie);