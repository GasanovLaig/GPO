#pragma once
#include <string>
#include "Album.h"

struct Band
{
	std::string Name;
	std::string* Structure;
	Album* Albums;
	int AlbumsCount;
};

Band* MakeBand(Band* band, std::string name, std::string* structure,
	Album* albums, int albumsCount);

void SetName(Band& band, std::string name);
void SetStructure(Band& band, std::string* structure);
void SetAlbums(Band& band, Album* albums);

const Song* FindSong(const Band& band, std::string songTitle);
const Album* FindAlbum(const Band& band, std::string songTitle);
Song* GetAllSongs(const Band& band, int& allSongsCount);
Song* GetAllGenreSongs(const Band& band, Genre genre, int& allSongsCount);
void DemoBand();