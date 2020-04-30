#include "Song.h"

Song* MakeSong(Song* song, std::string name, int durationMinutes, Genre genre)
{
	song->Name = name;
	song->DurationMinutes = durationMinutes;
	song->Genre = genre;

	return song;
}

void SetName(Song& song, std::string name)
{
	song.Name = name;
}

void SetDurationMinutes(Song& song, int durationMinutes)
{
	song.DurationMinutes = durationMinutes;
}

void SetGenre(Song& song, Genre genre)
{
	song.Genre = genre;
}
