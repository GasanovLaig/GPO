#pragma once
#include <string>
#include "Song.h"
// TODO: не надо создавать подпапки Classes и Structs
class Album
{
	// TODO: для удобства чтения кода рекомендуется следующий порядок: поля, сеттеры, геттеры, конструкторы, поведенческие методы класса, перегрузки операторов, деструктор
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
	// TODO: поля в начало
private:
	std::string _name;
	int _publicationYear;
	Song* _songs;
	int _songsCount;
};