#pragma once
#include <string>
#include "Genre.h"
#include "Time.h"

class Song
{
public:
	Song();
	Song(std::string name, Time duration, Genre genre);

	void SetName(std::string name);
	void SetDuration(Time durationMinutes);
	void SetGenre(Genre genre);

	std::string GetName();
	Time GetDuration();
	Genre GetGenre();

private:
	std::string _name;
	Time _duration;
	Genre _genre;
};