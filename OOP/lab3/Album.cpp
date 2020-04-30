#include "Album.h"
#include <exception>

Album* MakeAlbum(Album* album, std::string name, int publicationYear,
	Song* songs, int songsCount)
{
	if (publicationYear > 2020)
	{
		throw std::exception("Год издания не может быть позже текущего!");
	}

	album->Name = name;
	album->PublicationYear = publicationYear;
	album->Songs = songs;
	album->SongsCount = songsCount;

	return album;
}

void SetName(Album& album, std::string name)
{
	album.Name = name;
}

void SetPublicationYear(Album& album, int publicationYear)
{
	album.PublicationYear = publicationYear;
}

void SetSongs(Album& album, Song* songs)
{
	album.Songs = songs;
}