#pragma once
#include <string>
#include "Genre.h"

struct Song
{
	std::string Name;
	int DurationMinutes;
	Genre Genre;
};

Song* MakeSong(Song* song, std::string name, int durationMinutes, Genre genre);

void SetName(Song& song, std::string name);
void SetDurationMinutes(Song& song, int durationMinutes);
void SetGenre(Song& song, Genre genre);