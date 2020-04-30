#pragma once
#include <string>
#include "Album.h"

class Band
{
public:
	Band(std::string name, std::string* structure,
		Album* albums, int albumsCount);

	void SetName(std::string name);
	void SetStructure(std::string* structure);
	void SetAlbums(Album* albums);
	void SetAlbumsCount(int albumsCount);

	Song* FindSong(std::string songTitle);
	Album* FindAlbum(std::string songTitle);
	Song* GetAllSongs(int& allSongsCount);
	Song* GetAllGenreSongs(Genre genre, int& allSongsCount);

private:
	std::string _name;
	std::string* _structure;
	Album* _albums;
	int _albumsCount;
};

void DemoBand();