#pragma once
#include <string>
#include "Album.h"

class Band
{
private:
	std::string _name;
	std::string* _members;
	int _membersCount;
	Album* _albums;
	int _albumsCount;

public:
	void SetName(std::string name);
	void SetStructure(std::string* structure);
	void SetMembersCount(int membersCount);
	void SetAlbums(Album* albums);
	void SetAlbumsCount(int albumsCount);

	Band(std::string name, std::string* structure,
		Album* albums, int albumsCount);

	Song* FindSong(std::string songTitle);
	Album* FindAlbum(std::string songTitle);
	Song* GetAllSongs(int& allSongsCount);
	Song* GetAllGenreSongs(Genre genre, int& allSongsCount);

	~Band();
};

void DemoBand();