#include "Song.h"

Song::Song() :
	_name(""),
	_duration(Time{0, 0, 0, 0, 0, 0}),
	_genre(Classical)
{
}

Song::Song(std::string name, Time duration, Genre genre)
{
	SetName(name);
	SetDuration(duration);
	SetGenre(genre);
}

void Song::SetName(std::string name)
{
	_name = name;
}

void Song::SetDuration(Time duration)
{
	_duration = duration;
}

void Song::SetGenre(Genre genre)
{
	_genre = genre;
}

std::string Song::GetName()
{
	return _name;
}

Time Song::GetDuration()
{
	return _duration;
}

Genre Song::GetGenre()
{
	return _genre;
}