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

	~Band();

	Song* FindSong(std::string songTitle);
	Album* FindAlbum(std::string songTitle);
	Song* GetAllSongs(int& allSongsCount);
	Song* GetAllGenreSongs(Genre genre, int& allSongsCount);
	// TODO: поля в начало
private:
	std::string _name;
	std::string* _structure; // TODO: неочевидное название для состава группы.
	// TODO: А где ты хранишь количество музыкантов?
	Album* _albums;
	int _albumsCount;
};

void DemoBand();