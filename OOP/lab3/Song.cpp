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
	// TODO: чтобы постоянно не копировать по отдельным полям либо хранят объекты по указателям, либо используют конструктор копирования
	// Обычно подменяют весь объект целиком. С точки зрения памяти это слишком незаметный расход, а вот с точки зрения производительности - не эффективный
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