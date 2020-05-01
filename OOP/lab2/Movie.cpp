#include "Movie.h"
#include <iostream>
#include "FormatOutput.h"
using namespace std;

void DemoMovie()
{
	Movie movie1{ "За пропастью во ржи", 106, 2017, Drama, 6.7 };
	cout << "\nMovie is (Name, Duration, ReleaseYear, Genre, Rating) " <<
		movie1.Name << "; " << movie1.Duration << "; " << movie1.ReleaseYear << "; " <<
		movie1.Rating << '\n';

	FormatOutput();
	cout << "\nВведите название фильма:	";
	Movie movie2;
	cin >> movie2.Name;
	cout << "\nВведите продолжительность фильма: ";
	cin >> movie2.Duration;
	cout << "\nВведите год выпуска: ";
	cin >> movie2.ReleaseYear;
	cout << "\nВведите жанр фильма: ";
		"0 - Comedy, 1 - Drama, 2 - Thriller, 3 - Action,"
		"4 - Horror, 5 - Blockbuster\n";
	int genre;
	cin >> genre;
	movie2.Genre = static_cast<MoviesGenre>(genre);
	cout << "\nВведите рейтинг фильма: ";
	cin >> movie2.Rating;

	cout << "\nФильм: (Name, Duration, ReleaseYear, Genre, Rating) " <<
		movie2.Name << "; " << movie2.Duration << "; " <<
		movie2.ReleaseYear << "; " << movie2.Rating << '\n';

	FormatOutput();
	Movie movies[3]
	{
		{"К звездам", 123, 2019, Drama, 6.382},
		{"Марсианин", 200, 2020, Thriller, 5.0},
		{"Власть", 128, 2021, Action, 8.19}
	};

	for (int i = 0; i < 3; ++i)
	{
		cout << "\nФильм (Name, Duration, ReleaseYear, Genre, Rating) " <<
			i << ' ' << movies[3].Name << "; " << movies[3].Duration <<
			"; " << movies[3].ReleaseYear << "; " <<
			movies[3].Genre << "; " << movies[3].Rating << '\n';
	}

	FormatOutput();
	Movie* pointer1 = &movie1;
	cout << "\nПервый фильм (Name, Duration, ReleaseYear,"
		"Genre, Rating): " << pointer1->Name << "; " << pointer1->Duration <<
		"; " << pointer1->ReleaseYear << "; " << pointer1->Genre << "; " <<
		pointer1->Rating << '\n';

	pointer1->Name = "Поезд в Пусан";
	pointer1->Duration = 128;
	pointer1->ReleaseYear = 2015;
	pointer1->Genre = Horror;
	pointer1->Rating = 7.2;

	Movie* pointer = pointer1;
	cout << "\nАдрес в 1-ом указателе: " << pointer1 <<
		"\nАдрес во 2-ом указателе m5: " << pointer << '\n';
}

size_t CountMoviesByGenre(const Movie* movies, size_t size,
	MoviesGenre findedGenre)
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

	cout << "\nИсходный массив (Name, Duration, ReleaseYear,"
		"Genre, Rating):\n";
	for (int i = 0; i < 10; ++i)
	{
		cout << " (" << movies[i].Name << ", " << movies[i].Duration <<
			", " << movies[i].ReleaseYear << ", " << movies[i].Genre <<
			", " << movies[i].Rating << ");\n";
	}

	cout << "\nВведите жанр фильма: ";
	int genre;
	cin >> genre;
	cout << "\nКол-во фильмов этого жанра: " <<
		CountMoviesByGenre(movies, 10, static_cast<MoviesGenre>(genre));
	// TODO: грам ошибка
	cout << "\nНазвание фильма с наибольшим рейтингом этого жанра: " <<
		FindBestGenreMovie(movies, 10, static_cast<MoviesGenre>(genre))->Name;

	delete[] movies;
}

const Movie* FindBestGenreMovie(const Movie* movies, size_t size,
	MoviesGenre findedGenre)
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

Movie* MakeMovie(const std::string& name, int duration,
	int releaseYear, MoviesGenre genre, double rating)
{
	Movie* m = new Movie{ name, duration, releaseYear, genre, rating };
	return m;
}

Movie* CopyMovie(const Movie* movie)
{
	Movie* m = MakeMovie(movie->Name, movie->Duration,
		movie->ReleaseYear, movie->Genre, movie->Rating);
	return m;
}