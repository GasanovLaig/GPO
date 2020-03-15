#include "Task223.h"

#include <iostream>
#include "Task228Enums.h"
#include "OutPutFormatting.h"
using namespace std;

void DemoRectangle()
{
	Task222::Rectangle r1{ 20.1, 4.25, "Grey" };
	cout << "\nRectangle is (Length, Width, Color) " << r1.Length <<
		"; " << r1.Width << "; " << r1.Color << '\n';
	OutPutFormatting();

	cout << "\nВведите длину прямоуголника: ";
	Task222::Rectangle r2;
	cin >> r2.Length;
	cout << "\nВведите ширину прямоуголника: ";
	cin >> r2.Width;
	cout << "\nВведите цвет прямоуголника: ";
	cin >> r2.Color;
	cout << "\nРазмеры прямоуголника: " <<
		r2.Length << 'x' << r2.Width << " цвет " << r2.Color << '\n';

	OutPutFormatting();
	Task222::Rectangle rectangles[3]
	{
		{1, 2, "red"},
		{3, 4, "black"},
		{5, 6, "green"}
	};

	for (int i = 0; i < 3; ++i)
	{
		cout << "\nПрямоугольник " << i << " (Length, Width, Color) " <<
			rectangles[i].Length << "; " <<
			rectangles[i].Width << "; " <<
			rectangles[i].Color << '\n';
	}

	Task222::Rectangle* pointer1 = &r1;
	cout << "\nПервый прямоугольник длиной - " << pointer1->Length <<
		", шириной - " << pointer1->Width <<
		", цветом - " << pointer1->Color << '\n';

	pointer1->Length = 3.14;
	pointer1->Width = 21;
	pointer1->Color = "Purple";

	Task222::Rectangle* pointer2 = pointer1;
	cout << "\nАдрес в 1-ом указателе: " << pointer1 <<
		"\nАдрес во 2-ом указателе r5: " << pointer2 << '\n';

	OutPutFormatting();
	//ex 2.2.5.4
	cout << "\nЗадание 2.2.5.4 функция Exchange(Rectangle& r1, Rectanlge& r2)" <<
		"\nПервый прямоуголник имеет размерность: " <<
		r1.Length << 'x' << r1.Width <<
		"\nВторой прямоуголник имеет размерность: " <<
		r2.Length << 'x' << r2.Width << '\n';
	Exchange(r1, r2);
	cout << "\nПосле перестановки полей 1-го и 2-го прямоугольников: " <<
		"\n1-ый имеет размерность " << r1.Length << 'x' << r1.Width <<
		"\n2-ой имеет размерность " << r2.Length << 'x' << r2.Width << '\n';

	OutPutFormatting();
	//ex 2.2.5.5
	cout << "\nЗадание 2.2.5.5 " <<
		"написать функцию void FindRectangle(Rectangle* r, int count)";
	FindRectangle(rectangles, 3);

	OutPutFormatting();
	//ex 2.2.5.6
	cout << "\nЗадание 2.2.5.6 " << "написать функцию" <<
		"void FindRectangle(Rectangle* rectangles, int count)";
	FindMaxRectangle(rectangles, 3);
}

void DemoFlight()
{
	Flight f1{ "Tomsk", "Bern", 2147483 };
	cout << "\nFlight is (From, To, Duration) " << f1.From << "; " <<
		f1.To << "; " << f1.Duration << '\n';

	OutPutFormatting();
	cout << "\nВведите пункт отправления: ";
	Flight f2;
	cin >> f2.From;
	cout << "\nВведите пункт прибытия: ";
	cin >> f2.To;
	cout << "\nВремя в полете (в мин): ";
	cin >> f2.Duration;
	cout << "\nВаш рейс: " << f2.From << " - " <<
		f2.To << " в полете " << f2.Duration << '\n';

	OutPutFormatting();
	Flight flights[3]
	{
		{"Tomsk", "San-Francisco", 241434},
		{"San-Francisco", "Vancouver", 23434},
		{ "Vancouver", "Madrid", 345345 }
	};

	for (int i = 0; i < 3; ++i)
	{
		cout << "\nFlight " << i << " is " << flights[i].From <<
			" - " << flights[i].To << " с продолжительностью " <<
			flights[i].Duration << '\n';
	}

	OutPutFormatting();
	Flight* pointer1 = &f1;
	cout << "\nПервый рейс: " << pointer1->From << " - " << pointer1->To <<
		" c продолжительностью в " << pointer1->Duration << '\n';

	pointer1->From = "Tomsk";
	pointer1->To = "Krasnodar";
	pointer1->Duration = 512;

	Flight* pointer2 = pointer1;
	cout << "\nАдрес в 1-ом указателе: " << pointer1 <<
		"\nАдрес во 2-ом указателе f5: " << pointer2 << '\n';
}

void DemoMovie()
{
	Movie m1{ "За пропастью во ржи", 106, 2017, Drama, 6.7 };
	cout << "\nMovie is (Name, Duration, ReleaseYear, Genre, Rating) " <<
		m1.Name << "; " << m1.Duration << "; " << m1.ReleaseYear << "; " <<
		m1.Rating << '\n';

	OutPutFormatting();
	cout << "\nВведите название фильма:	";
	Movie m2;
	cin >> m2.Name;
	cout << "\nВведите продолжительность фильма: ";
	cin >> m2.Duration;
	cout << "\nВведите год выпуска: ";
	cin >> m2.ReleaseYear;
	cout << "\nВведите жанр фильма: ";
	int genre;
	cin >> genre;
	m2.Genre = static_cast<MovieGenre>(genre);
	cout << "\nВведите рейтинг фильма: ";
	cin >> m2.Rating;

	cout << "\nФильм: (Name, Duration, ReleaseYear, Genre, Rating) " <<
		m2.Name << "; " << m2.Duration << "; " <<
		m2.ReleaseYear << "; " << m2.Rating << '\n';

	OutPutFormatting();
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

	OutPutFormatting();
	Movie* pointer1 = &m1;
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

void DemoTime()
{
	Time t1{ 1, 30, 00 };
	cout << "\nTime is (Hours, Minutes, Seconds) " << t1.Hours <<
		"; " << t1.Minutes << "; " << t1.Seconds << '\n';

	OutPutFormatting();
	cout << "\nВведите кол-во часов: ";
	Time t2;
	cin >> t2.Hours;
	cout << "\nВведите кол-во минут: ";
	cin >> t2.Minutes;
	cout << "\nВведите кол-во секунд: ";
	cin >> t2.Seconds;

	cout << "\nВремя: " << t2.Hours << ':' << t2.Minutes <<
		':' << t2.Seconds << '\n';

	OutPutFormatting();
	Time times[3]
	{
		{0, 0, 0},
		{12, 24, 38},
		{24, 0, 0}
	};

	for (int i = 0; i < 3; ++i)
	{
		cout << "\nВремя " << i << " (Hours,  Minutes, Seconds) " <<
			times[i].Hours << ':' << times[i].Minutes << ':' << times[i].Seconds << '\n';
	}

	OutPutFormatting();
	Time* pointer1 = &t1;
	cout << "\nВремя в первом задании (Hours,  Minutes, Seconds): " <<
		pointer1->Hours << ':' << pointer1->Minutes << ':' << pointer1->Seconds << '\n';

	pointer1->Hours = 0;
	pointer1->Minutes = 0;
	pointer1->Seconds = 0;

	Time* pointer2 = pointer1;
	cout << "\nАдрес в 1-ом указателе:" << pointer1 <<
		"\nАдрес во 2-ом указателе: " << pointer2 << '\n';
}

//ex 2.2.2.4
void WrongPointers()
{
	Flight flight;
	Flight* toFglight = &flight;
	Movie movie;
	Movie* toMovie = &movie;

	//toF = m;
	//toM = f;
}

void WhriteRectangle(const Task222::Rectangle& rectangle)
{
	cout << "\nПрямоугольник с длиной - " << rectangle.Length <<
		", шириной - " << rectangle.Width <<
		", цветом - " << rectangle.Color << '\n';
}

void ReadRectangle(Task222::Rectangle& rectangle)
{
	cout << "\nВведите длину, ширину, и цвет прямоугольника:";
	cin >> rectangle.Length >>
		rectangle.Width >>
		rectangle.Color;
}

void DemoReadAndWhriteRectangles()
{
	Task222::Rectangle rectangles[5];
	for (int i = 0; i < 5; ++i)
	{
		ReadRectangle(rectangles[i]);
	}

	for (int i = 0; i < 5; ++i)
	{
		WhriteRectangle(rectangles[i]);
	}
}

void Exchange(Task222::Rectangle& rectangle1, Task222::Rectangle& rectangle2)
{
	double temporary = rectangle1.Length;
	rectangle1.Length = rectangle2.Length;
	rectangle2.Length = temporary;

	temporary = rectangle1.Width;
	rectangle1.Width = rectangle2.Width;
	rectangle2.Width = temporary;

	string tempLine = rectangle1.Color;
	rectangle1.Color = rectangle2.Color;
	rectangle2.Color = tempLine;
}

void FindRectangle(const Task222::Rectangle* rectangles, size_t size)
{
	double maxLength = rectangles[0].Length;
	size_t index = 0;
	for (size_t i = 1; i < size; ++i)
	{
		if (rectangles[i].Length > maxLength)
		{
			maxLength = rectangles[i].Length;
			index = i;
		}
	}

	cout << "\nПрямоугольник с наибольшей длиной имеет размерность " <<
		rectangles[index].Length << 'x' << rectangles[index].Width << '\n';
}

void FindMaxRectangle(const Task222::Rectangle* rectangles, size_t size)
{
	long double maxArea = (rectangles[0].Length * rectangles[0].Width);
	size_t index = 0;
	for (size_t i = 1; i < size; ++i)
	{
		long double area = (rectangles[i].Length * rectangles[i].Width);
		if (area > maxArea)
		{
			maxArea = area;
			index = i;
		}
	}

	cout << "\nПрямоугольник с набиольшей площадью имеет размерность " <<
		rectangles[index].Length << 'x' << rectangles[index].Width << '\n';
}

void DemoDynamicFlight()
{
	Flight* flight = new Flight;
	flight->From = "Tomsk";
	flight->To = "Canberra";
	flight->Duration = 2048;

	cout << "\nРейс " << flight->From << " - " << flight->To <<
		" продолжительностью " << flight->Duration << '\n';
	delete flight;
}

void DemoDynamicFlights()
{
	Flight* flights = new Flight[4]
	{
		{"Москва", "Санкт-Петербург", 45},
		{"Томск", "Москва", 190},
		{"Берлин", "Лондон", 105},
		{"Москва", "Барселона", 180}
	};

	for (int i = 0; i < 4; ++i)
	{
		cout << "\nРейс" << i << ' ' <<
			flights[i].From << " - " << flights[i].To <<
			" продолжительностью " << flights[i].Duration << '\n';
	}

	//ex2.2.6.3
	cout << "\nЗадание 2.2.6.3 написать функцию" <<
		"void FindShortestFlight(Flight* flights, int count):\n";
	FindShortestFlight(flights, 4U);

	delete[] flights;
}

void FindShortestFlight(const Flight* flights, size_t size)
{
	int minDuration = flights[0].Duration;
	size_t index = 0;
	for (size_t i = 0; i < size; ++i)
	{
		if (flights[i].Duration < minDuration)
		{
			minDuration = flights[i].Duration;
			index = i;
		}
	}

	cout << "\nРейс " << flights[index].From << " - " << flights[index].To <<
		" с наименшей продолжительностю в " << flights[index].Duration <<
		" минут\n";
}