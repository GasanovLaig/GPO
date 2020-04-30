#include "Album.h"
#include <exception>
#include "Album.h"

Album::Album() :
	_name(""),
	_publicationYear(0),
	_songs(nullptr),
	_songsCount(0)
{
}

Album::Album(std::string name, int publicationYear, Song* songs, int songsCount)
{
	if (publicationYear > 2020)
	{
		throw std::exception("Год издания не может быть позже текущего!");
	}

	SetName(name);
	SetPublicationYear(publicationYear);
	SetSongs(songs);
	SetSongsCount(songsCount);
}

void Album::SetName(std::string name)
{
	_name = name;
}

void Album::SetPublicationYear(int publicationYear)
{
	_publicationYear = publicationYear;
}

void Album::SetSongs(Song* songs)
{
	_songs = songs;
}

void Album::SetSongsCount(int songsCount)
{
	_songsCount = songsCount;
}

std::string Album::GetName()
{
	return _name;
}

int Album::GetPublicationYear()
{
	return _publicationYear;
}

Song* Album::GetSongs()
{
	return _songs;
}

int Album::GetSongsCount()
{
	return _songsCount;
}