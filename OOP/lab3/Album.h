#pragma once
#include <string>
#include "Song.h"
// TODO: не надо создавать подпапки Classes и Structs
class Album
{
private:
	std::string _name;
	int _publicationYear;
	Song* _songs;
	int _songsCount;

	// TODO: для удобства чтения кода рекомендуется следующий порядок: поля, сеттеры, геттеры, конструкторы, поведенческие методы класса, перегрузки операторов, деструктор
public:
	void SetName(std::string name);
	void SetPublicationYear(int publicationYear);
	void SetSongs(Song* songs);
	void SetSongsCount(int songsCount);

	std::string GetName();
	int GetPublicationYear();
	Song* GetSongs();
	int GetSongsCount();

	Album();
	Album(std::string name, int publicationYear, Song* songs, int songsCount);

	// TODO: поля в начало
	~Album();
};