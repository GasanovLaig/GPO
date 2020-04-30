#include "Band.h"

Band* MakeBand(Band* band, std::string name,
 std::string* structure, Album* albums, int albumsCount)
{
	band->Name = name;
	band->Structure = structure;
	band->Albums = albums;
	band->AlbumsCount = albumsCount;

	return band;
}

void SetName(Band& band, std::string name)
{
	band.Name = name;
}

void SetStructure(Band& band, std::string* structure)
{
	band.Structure = structure;
}

void SetAlbums(Band& band, Album* albums)
{
	band.Albums = albums;
}

const Song* FindSong(const Band& band, std::string songTitle)
{
	for (int i = 0; i < band.AlbumsCount; ++i)
	{
		for (int j = 0; i < band.Albums[i].SongsCount; ++j)
		{
			if (band.Albums[i].Songs[j].Name == songTitle)
			{
				return (band.Albums[i].Songs + j);
			}
		}
	}

	return nullptr;
}

const Album* FindAlbum(const Band& band, std::string songTitle)
{
	for (int i = 0; i < band.AlbumsCount; ++i)
	{
		for (int j = 0; i < band.Albums[i].SongsCount; ++j)
		{
			if (band.Albums[i].Songs[j].Name == songTitle)
			{
				return (band.Albums + i);
			}
		}
	}

	return nullptr;
}

Song* GetAllSongs(const Band& band, int& allSongsCount)
{
	allSongsCount = 0;
	for (int i = 0; i < band.AlbumsCount; ++i)
	{
		allSongsCount += band.Albums[i].SongsCount;
	}

	Song* songs = new Song[allSongsCount];
	int k = 0;
	for (int i = 0; i < band.AlbumsCount; ++i)
	{
		for (int j = 0; i < band.Albums[i].SongsCount; ++j)
		{
			songs[k++] = band.Albums[i].Songs[j];
		}
	}

	return songs;
}

Song* GetAllGenreSongs(const Band& band, Genre genre, int& allSongsCount)
{
	allSongsCount = 0;
	for (int i = 0; i < band.AlbumsCount; ++i)
	{
		for (int j = 0; j < band.Albums[i].SongsCount; ++j)
		{
			if (band.Albums[i].Songs[j].Genre == genre)
			{
				++allSongsCount;
			}
		}
	}

	Song* songs = new Song[allSongsCount];
	int k = 0;
	for (int i = 0; i < band.AlbumsCount; ++i)
	{
		for (int j = 0; i < band.Albums[i].SongsCount; ++j)
		{
			if (band.Albums[i].Songs[j].Genre == genre)
			{
				songs[k++] = band.Albums[i].Songs[j];
			}
		}
	}

	return songs;
}

void DemoBand()
{
	Band* band = new Band;
	Song* songs1 = new Song[4];
	Album* albums = new Album[3];
	MakeSong(songs1, "Death on Two Legs", 4, Rock);
	MakeSong(songs1 + 1, "Lazing on a Sunday Afternoon", 1, Rock);
	MakeSong(songs1 + 2, "I’m in Love with My Car", 3, Rock);
	MakeSong(songs1 + 3, "You’re My Best Friend", 3, Rock);
	MakeAlbum(albums, "A Night at the Opera", 1975, songs1, 4);

	Song* songs2 = new Song[4];
	MakeSong(songs2, "We Will Rock You", 2, Rock);
	MakeSong(songs2 + 1, "We Are the Champions", 3, Rock);
	MakeSong(songs2 + 2, "Sheer Heart Attack", 4, Rock);
	MakeSong(songs2 + 3, "Spread Your Wings", 5, Rock);
	MakeAlbum(albums + 1, "News of the World", 1977, songs2, 4);

	Song* songs3 = new Song[5];
	MakeSong(songs3, "Play the Game", 4, Rock);
	MakeSong(songs3 + 1, "Dragon Attack", 5, Rock);
	MakeSong(songs3 + 2, "Another One Bites the Dust", 4, Rock);
	MakeSong(songs3 + 3, "Need Your Loving Tonight", 3, Rock);
	MakeSong(songs3 + 4, "Crazy Little Thing Called Love", 3, Rock);
	MakeAlbum(albums + 2, "The Game", 1980, songs3, 4);

	MakeBand(band, "Queen", new std::string[4]{ "Ôðåääè Ìåðêüþðè",
		"Áðàéàí Ìåé", "Ðîäæåð Òåéëîð", "Äæîí Äèêîí" }, albums, 3);

	delete[] songs3;
	delete[] songs2;
	delete[] songs1;
	delete[] albums;
	delete band;
}