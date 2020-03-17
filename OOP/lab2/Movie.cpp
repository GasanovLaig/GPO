#include "Movie.h"
#include <iostream>
#include "OutPutFormatting.h"
using namespace std;

void DemoMovie()
{
	Movie movie1{ "Çà ïðîïàñòüþ âî ðæè", 106, 2017, Drama, 6.7 };
	cout << "\nMovie is (Name, Duration, ReleaseYear, Genre, Rating) " <<
		movie1.Name << "; " << movie1.Duration << "; " << movie1.ReleaseYear <<
		"; " << movie1.Rating << '\n';

	OutPutFormatting();
	cout << "\nÂâåäèòå íàçâàíèå ôèëüìà:	";
	Movie movie2;
	cin >> movie2.Name;
	cout << "\nÂâåäèòå ïðîäîëæèòåëüíîñòü ôèëüìà: ";
	cin >> movie2.Duration;
	cout << "\nÂâåäèòå ãîä âûïóñêà: ";
	cin >> movie2.ReleaseYear;
	cout << "\nÂâåäèòå æàíð ôèëüìà:\n"
		"0 - Comedy, 1 - Drama, 2 - Thriller, 3 - Action,"
		"4 - Horror, 5 - Blockbuster\n";
	int genre;
	cin >> genre;
	movie2.Genre = static_cast<MovieGenre>(genre);
	cout << "\nÂâåäèòå ðåéòèíã ôèëüìà: ";
	cin >> movie2.Rating;

	cout << "\nÔèëüì: (Name, Duration, ReleaseYear, Genre, Rating) " <<
		movie2.Name << "; " << movie2.Duration << "; " <<
		movie2.ReleaseYear << "; " << movie2.Rating << '\n';

	OutPutFormatting();
	Movie movies[3]
	{
		{"Ê çâåçäàì", 123, 2019, Drama, 6.382},
		{"Ìàðñèàíèí", 200, 2020, Thriller, 5.0},
		{"Âëàñòü", 128, 2021, Action, 8.19}
	};

	for (int i = 0; i < 3; ++i)
	{
		cout << "\nÔèëüì (Name, Duration, ReleaseYear, Genre, Rating) " <<
			i << ' ' << movies[3].Name << "; " << movies[3].Duration <<
			"; " << movies[3].ReleaseYear << "; " <<
			movies[3].Genre << "; " << movies[3].Rating << '\n';
	}

	OutPutFormatting();
	Movie* pointer1 = &movie1;
	cout << "\nÏåðâûé ôèëüì (Name, Duration, ReleaseYear,"
		"Genre, Rating): " << pointer1->Name << "; " << pointer1->Duration <<
		"; " << pointer1->ReleaseYear << "; " << pointer1->Genre << "; " <<
		pointer1->Rating << '\n';

	pointer1->Name = "Ïîåçä â Ïóñàí";
	pointer1->Duration = 128;
	pointer1->ReleaseYear = 2015;
	pointer1->Genre = Horror;
	pointer1->Rating = 7.2;

	Movie* pointer = pointer1;
	cout << "\nÀäðåñ â 1-îì óêàçàòåëå: " << pointer1 <<
		"\nÀäðåñ âî 2-îì óêàçàòåëå m5: " << pointer << '\n';
}

// TODO: почему именно этот файл не в папке Task?
// Это случайно.
size_t CountMoviesByGenre(const Movie* movies, size_t size,
	MovieGenre findedGenre)
{
	size_t count = 0;
	for (size_t i = 0; i < size; ++i)
	{
		if (movies[i].Genre == findedGenre)
		{
			++count;
		}
	}

	return count;
}

void DemoMoviesByGenre()
{
	Movie* movies = new Movie[10]
	{
		{"A", 64, 2000, Drama, 5.0 },
		{"B", 75, 2002, Comedy, 6.25},
		{"C", 128, 2004, Action, 7.2},
		{"D", 135, 2006, Thriller, 4.9},
		{"E", 120, 2008, Blockbuster, 6.9},
		{"F", 140, 2010, Horror, 7.2},
		{"G", 125, 2012, Comedy, 7.1},
		{"H", 110, 2014, Action, 6.67},
		{"I", 105, 2016, Drama, 7.8},
		{"J", 90, 2018, Drama, 7.14}
	};

	cout << "\nÈñõîäíûé ìàññèâ (Name, Duration, ReleaseYear,"
		"Genre, Rating):\n";
	for (int i = 0; i < 10; ++i)
	{
		cout << " (" << movies[i].Name << ", " << movies[i].Duration <<
			", " << movies[i].ReleaseYear << ", " << movies[i].Genre <<
			", " << movies[i].Rating << ");\n";
	}

	cout << "\nÂâåäèòå æàíð ôèëüìà:\n"
		"0 - Comedy, 1 - Drama, 2 - Thriller, 3 - Action,"
		"4 - Horror, 5 - Blockbuster\n";
	int genre;
	cin >> genre;
	cout << "\nÊîë-âî ôèëüìîâ ýòîãî æàíðà: " <<
		CountMoviesByGenre(movies, 10, static_cast<MovieGenre>(genre));

	cout << "\nÍàçâàíèå ôèëüìà ñ íàèáîëüøûì ðåéòèíãîì ýòîãî æàíðà: " <<
		FindBestGenreMovie(movies, 10, static_cast<MovieGenre>(genre))->Name;

	delete[] movies;
}

const Movie* FindBestGenreMovie(const Movie* movies, size_t size,
	MovieGenre findedGenre)
{
	double maxRating = 0.0;
	size_t index = 0;
	for (size_t i = 0; i < size; ++i)
	{
		if (movies[i].Genre == findedGenre &&
			movies[i].Rating > maxRating)
		{
			index = i;
			maxRating = movies[i].Rating;
		}
	}

	if (movies[index].Genre == findedGenre)
	{
		return nullptr;
	}

	return (movies + index);
}