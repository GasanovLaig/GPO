#pragma once
#include "Task222.h"

size_t CountMoviesByGenre(const Movie* movies, size_t size,
	MovieGenre findGenre);
void DemoMoviesByGenre();
const Movie* FindBestGenreMovie(const Movie* movies, size_t size,
	MovieGenre findedGenre);