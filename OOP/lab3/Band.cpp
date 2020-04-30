#include "Band.h"

Band::Band(std::string name, std::string* structure,
	Album* _albums, int _albumsCount)
{
	SetName(name);
	SetStructure(structure);
	SetAlbums(_albums);
	SetAlbumsCount(_albumsCount);
}

void Band::SetName(std::string name)
{
	_name = name;
}

void Band::SetStructure(std::string* structure)
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

Song* Band::FindSong(std::string songTitle)
{
	for (int i = 0; i < _albumsCount; ++i)
	{
		for (int j = 0; i < _albums[i].GetSongsCount(); ++j)
		{
			if ((_albums[i].GetSongs() + j)->GetName() == songTitle)
			{
				return (_albums[i].GetSongs() + j);
			}
		}
	}

	return nullptr;
}

Album* Band::FindAlbum(std::string songTitle)
{
	for (int i = 0; i < _albumsCount; ++i)
	{
		for (int j = 0; i < _albums[i].GetSongsCount(); ++j)
		{
			if ((_albums[i].GetSongs() + j)->GetName() == songTitle)
			{
				return (_albums + i);
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
		for (int j = 0; i < _albums[i].GetSongsCount(); ++j)
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
		for (int j = 0; i < _albums[i].GetSongsCount(); ++j)
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
		{"Death on Two Legs", {}, Rock},
		{"Lazing on a Sunday Afternoon", {}, Rock},
		{"I’m in Love with My Car", {}, Rock},
		{"You’re My Best Friend", {}, Rock}
	};

	Song* songs2 = new Song[4]
	{
		{"We Will Rock You", {}, Rock},
		{"We Are the Champions", {}, Rock},
		{"Sheer Heart Attack", {}, Rock},
		{"Spread Your Wings", {}, Rock}
	};

	Song* songs3 = new Song[5]
	{
		{"Play the Game", {}, Pop},
		{"Dragon Attack", {}, Pop},
		{"Another One Bites the Dust", {}, Pop},
		{"Crazy Little Thing Called Love", {}, Pop},
		{"Need Your Loving Tonight", {}, Pop}
	};

	Album* albums = new Album[3]
	{
		{"A Night at the Opera", 1975, songs1, 4 },
		{"News of the World", 1977, songs2, 4},
		{"The Game", 1980, songs3, 4}
	};

	Band* band = new Band
	{
		"Queen", new std::string[4]{ "Фредди Меркьюри",	"Брайан Мей",
		"Роджер Тейлор", "Джон Дикон" }, albums, 3
	};

	Song* findedSongs = band->FindSong("News of the World");
	std::cout << "\nКомпозиция: " << findedSongs->GetName() <<
		(findedSongs != nullptr ? " найдена." : " не найдена.");

	Album* album = band->FindAlbum("A Night at the Opera");
	std::cout << "\nАльбом: " << album->GetName() <<
		(album != nullptr ? " найден." : " не найден.");

	std::cout << "\nВся музыка группы Gueen:\n";
	int songsCount;
	Song* findedSongsByGenre = band->GetAllSongs(songsCount);
	for (int i = 0; i < songsCount; ++i)
	{
		std::cout << findedSongsByGenre[i].GetName() + '\n';
	}

	std::cout << "Музыка группы Gueen жанра Pop:\n";
	Song* songs = band->GetAllGenreSongs(Pop, songsCount);
	for (int i = 0; i < songsCount; ++i)
	{
		std::cout << songs[i].GetName() + '\n';
	}

	delete[] songs3;
	delete[] songs2;
	delete[] songs1;
	delete[] albums;
	delete band;
}