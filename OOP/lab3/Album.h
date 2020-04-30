#pragma once
#include <string>
#include "Song.h"

struct Album
{
	std::string Name;
	int PublicationYear;
	Song* Songs;
	int SongsCount;
};

Album* MakeAlbum(Album* album, std::string name,
 int publicationYear, Song* songs, int songsCount);

void SetName(Album& album, std::string name);
void SetPublicationYear(Album& album, int publicationYear);
void SetSongs(Album& album, Song* songs);