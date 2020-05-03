#pragma once
#include <string>
#include "Genre.h"
#include "Time.h"

class Song
{
private:
	std::string _name;
	Time _duration;
	Genre _genre;

public:
	void SetName(std::string name);
	void SetDuration(Time durationMinutes);
	void SetGenre(Genre genre);

	std::string GetName();
	Time GetDuration();
	Genre GetGenre();
	
	Song();
	Song(std::string name, Time duration, Genre genre);
};