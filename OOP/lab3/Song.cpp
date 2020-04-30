#include "Song.h"

Song::Song() :
	_name(""),
	_duration({00i64, 00i8, 00i8, 00i8, 00i8, 00i8}),
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
	_duration.SetMinutes(duration.GetMinutes());
	_duration.SetSeconds(duration.GetSeconds());

	_duration.SetYear(0i64);
	_duration.SetMonth(0i8);
	_duration.SetDay(0i8);
	_duration.SetHours(0i8);
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