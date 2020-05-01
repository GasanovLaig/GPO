#pragma once
#include <string>
#include "Song.h"

class Album
{
public:
	Album();
	Album(std::string name, int publicationYear, Song* songs, int songsCount);

	void SetName(std::string name);
	void SetPublicationYear(int publicationYear);
	void SetSongs(Song* songs);
	void SetSongsCount(int songsCount);

	~Album();

	std::string GetName();
	int GetPublicationYear();
	Song* GetSongs();
	int GetSongsCount();

private:
	std::string _name;
	int _publicationYear;
	Song* _songs;
	int _songsCount;
};