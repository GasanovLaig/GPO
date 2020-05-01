#include "Band.h"
#include <iostream>
using namespace std;

Band::Band(string name, string* structure,
	Album* _albums, int _albumsCount)
{
	SetName(name);
	SetStructure(structure);
	SetAlbums(_albums);
	SetAlbumsCount(_albumsCount);
}

void Band::SetName(string name)
{
	_name = name;
}

void Band::SetStructure(string* structure)
{
	_structure = structure;
}

void Band::SetAlbums(Album* albums)
{
	_albums = albums;
}

void Band::SetAlbumsCount(int albumsCount)
{
	_albumsCount = albumsCount;
}

Band::~Band()
{
	if (_structure != nullptr)
	{
		delete[] _structure;
		_structure = nullptr;
	}

	if (_albums != nullptr)
	{
		delete[] _albums;
		_albums = nullptr;
		_albumsCount;
	}
}

Song* Band::FindSong(string songTitle)
{
	for (int i = 0; i < _albumsCount; ++i)
	{
		for (int j = 0; j < _albums[i].GetSongsCount(); ++j)
		{
			if ((_albums[i].GetSongs() + j)->GetName() == songTitle)
			{
				return _albums[i].GetSongs() + j;
			}
		}
	}

	return nullptr;
}

Album* Band::FindAlbum(string songTitle)
{
	for (int i = 0; i < _albumsCount; ++i)
	{
		for (int j = 0; j < _albums[i].GetSongsCount(); ++j)
		{
			string name = (_albums[i].GetSongs() + j)->GetName();
			if (name == songTitle)
			{
				return _albums + i;
			}
		}
	}

	return nullptr;
}

Song* Band::GetAllSongs(int& allSongsCount)
{
	allSongsCount = 0;
	for (int i = 0; i < _albumsCount; ++i)
	{
		allSongsCount += _albums[i].GetSongsCount();
	}

	Song* songs = new Song[allSongsCount];
	int k = 0;
	for (int i = 0; i < _albumsCount; ++i)
	{
		for (int j = 0; j < _albums[i].GetSongsCount(); ++j)
		{
			songs[k++] = *(_albums[i].GetSongs() + j);
		}
	}

	return songs;
}

Song* Band::GetAllGenreSongs(Genre genre, int& allSongsCount)
{
	allSongsCount = 0;
	for (int i = 0; i < _albumsCount; ++i)
	{
		for (int j = 0; j < _albums[i].GetSongsCount(); ++j)
		{
			if ((_albums[i].GetSongs() + j)->GetGenre() == genre)
			{
				++allSongsCount;
			}
		}
	}

	Song* songs = new Song[allSongsCount];
	int k = 0;
	for (int i = 0; i < _albumsCount; ++i)
	{
		for (int j = 0; j < _albums[i].GetSongsCount(); ++j)
		{
			if ((_albums[i].GetSongs() + j)->GetGenre() == genre)
			{
				songs[k++] = *(_albums[i].GetSongs() + j);
			}
		}
	}

	return songs;
}

void DemoBand()
{
	Song* songs1 = new Song[4]
	{
		{"Death on Two Legs", Time{}, Rock},
		{"Lazing on a Sunday Afternoon", Time{}, Rock},
		{"I’m in Love with My Car", Time{}, Rock},
		{"You’re My Best Friend", Time{}, Rock}
	};

	Song* songs2 = new Song[4]
	{
		{"We Will Rock You", Time{}, Rock},
		{"We Are the Champions", Time{}, Rock},
		{"Sheer Heart Attack", Time{}, Rock},
		{"Spread Your Wings", Time{}, Rock}
	};

	Song* songs3 = new Song[5]
	{
		{"Play the Game", Time{}, Pop},
		{"Dragon Attack", Time{}, Pop},
		{"Another One Bites the Dust", Time{}, Pop},
		{"Crazy Little Thing Called Love", Time{}, Pop},
		{"Need Your Loving Tonight", Time{}, Pop}
	};

	Album* albums = new Album[3]
	{
		{"A Night at the Opera", 1975, songs1, 4 },
		{"News of the World", 1977, songs2, 4},
		{"The Game", 1980, songs3, 5}
	};

	Band* band = new Band{ "Queen", new string[4]{ "Фредди Меркьюри", "Брайан Мей",
		"Роджер Тейлор", "Джон Дикон" }, albums, 3 };

	string song{ "Dragon Attack" };
	Song* findedSongs = band->FindSong(song);
	cout << "\nКомпозиция: "  << song <<
		(findedSongs != nullptr ? " найдена.\n" : " не найдена.\n");

	song = "We Will Rock You";
	Album* album = band->FindAlbum(song);
	cout << "\nАльбом с композицией " << song << 
		(album != nullptr ? " найден, " + album->GetName() + '\n' : " не найден.\n");

	cout << "\nВся музыка группы Gueen:\n";
	int songsCount;
	Song* findedSongsByGenre = band->GetAllSongs(songsCount);
	for (int i = 0; i < songsCount; ++i)
	{
		cout << " - " << findedSongsByGenre[i].GetName() << '\n';
	}

	system("pause");
	system("cls");
	cout << "\nМузыка группы Gueen жанра Pop:\n";
	Song* songs = band->GetAllGenreSongs(Pop, songsCount);
	for (int i = 0; i < songsCount; ++i)
	{
		cout << " - " << songs[i].GetName() << '\n';
	}

	delete band;
}