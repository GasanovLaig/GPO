#include "Task223.h"

#include <iostream>
#include "Task228Enums.h"
#include "OutPutFormatting.h"
using namespace std;

void DemoRectangle()
{
	Task222::Rectangle rectangle1{ 20.1, 4.25, "Grey" };
	cout << "\nRectangle is (Length, Width, Color) " << rectangle1.Length <<
		"; " << rectangle1.Width << "; " << rectangle1.Color << '\n';
	OutPutFormatting();

	cout << "\n������� ����� �������������: ";
	Task222::Rectangle rectangle2;
	cin >> rectangle2.Length;
	cout << "\n������� ������ �������������: ";
	cin >> rectangle2.Width;
	cout << "\n������� ���� �������������: ";
	cin >> rectangle2.Color;
	cout << "\n������� �������������: " <<
		rectangle2.Length << 'x' << rectangle2.Width <<
		" ���� " << rectangle2.Color << '\n';

	OutPutFormatting();
	Task222::Rectangle rectangles[3]
	{
		{1, 2, "red"},
		{3, 4, "black"},
		{5, 6, "green"}
	};

	for (int i = 0; i < 3; ++i)
	{
		cout << "\n������������� " << i << " (Length, Width, Color) " <<
			rectangles[i].Length << "; " <<
			rectangles[i].Width << "; " <<
			rectangles[i].Color << '\n';
	}

	Task222::Rectangle* pointer1 = &rectangle1;
	cout << "\n������ ������������� ������ - " << pointer1->Length <<
		", ������� - " << pointer1->Width <<
		", ������ - " << pointer1->Color << '\n';

	pointer1->Length = 3.14;
	pointer1->Width = 21;
	pointer1->Color = "Purple";

	Task222::Rectangle* pointer2 = pointer1;
	cout << "\n����� � 1-�� ���������: " << pointer1 <<
		"\n����� �� 2-�� ��������� r5: " << pointer2 << '\n';

	OutPutFormatting();
	//ex 2.2.5.4
	cout << "\n������� 2.2.5.4 ������� Exchange(Rectangle& r1, Rectanlge& r2)" <<
		"\n������ ������������ ����� �����������: " <<
		rectangle1.Length << 'x' << rectangle1.Width <<
		"\n������ ������������ ����� �����������: " <<
		rectangle2.Length << 'x' << rectangle2.Width << '\n';
	Exchange(rectangle1, rectangle2);
	cout << "\n����� ������������ ����� 1-�� � 2-�� ���������������: " <<
		"\n1-�� ����� ����������� " <<
		rectangle1.Length << 'x' << rectangle1.Width <<
		"\n2-�� ����� ����������� " <<
		rectangle2.Length << 'x' << rectangle2.Width << '\n';

	OutPutFormatting();
	//ex 2.2.5.5
	cout << "\n������� 2.2.5.5 " <<
		"�������� ������� void FindRectangle(Rectangle* r, int count)";
	FindRectangle(rectangles, 3);

	OutPutFormatting();
	//ex 2.2.5.6
	cout << "\n������� 2.2.5.6 " << "�������� �������" <<
		"void FindRectangle(Rectangle* rectangles, int count)";
	FindMaxRectangle(rectangles, 3);
}

void DemoFlight()
{
	Flight film1{ "Tomsk", "Bern", 2147483 };
	cout << "\nFlight is (From, To, Duration) " << film1.From << "; " <<
		film1.To << "; " << film1.Duration << '\n';

	OutPutFormatting();
	cout << "\n������� ����� �����������: ";
	Flight film2;
	cin >> film2.From;
	cout << "\n������� ����� ��������: ";
	cin >> film2.To;
	cout << "\n����� � ������ (� ���): ";
	cin >> film2.Duration;
	cout << "\n��� ����: " << film2.From << " - " <<
		film2.To << " � ������ " << film2.Duration << '\n';

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
			" - " << flights[i].To << " � ������������������ " <<
			flights[i].Duration << '\n';
	}

	OutPutFormatting();
	Flight* pointer1 = &film1;
	cout << "\n������ ����: " << pointer1->From << " - " << pointer1->To <<
		" c ������������������ � " << pointer1->Duration << '\n';

	pointer1->From = "Tomsk";
	pointer1->To = "Krasnodar";
	pointer1->Duration = 512;

	Flight* pointer2 = pointer1;
	cout << "\n����� � 1-�� ���������: " << pointer1 <<
		"\n����� �� 2-�� ��������� f5: " << pointer2 << '\n';
}

void DemoMovie()
{
	Movie movie1{ "�� ��������� �� ���", 106, 2017, Drama, 6.7 };
	cout << "\nMovie is (Name, Duration, ReleaseYear, Genre, Rating) " <<
		movie1.Name << "; " << movie1.Duration << "; " << movie1.ReleaseYear <<
		"; " <<	movie1.Rating << '\n';

	OutPutFormatting();
	cout << "\n������� �������� ������:	";
	Movie movie2;
	cin >> movie2.Name;
	cout << "\n������� ����������������� ������: ";
	cin >> movie2.Duration;
	cout << "\n������� ��� �������: ";
	cin >> movie2.ReleaseYear;
	cout << "\n������� ���� ������: ";
	int genre;
	cin >> genre;
	movie2.Genre = static_cast<MovieGenre>(genre);
	cout << "\n������� ������� ������: ";
	cin >> movie2.Rating;

	cout << "\n�����: (Name, Duration, ReleaseYear, Genre, Rating) " <<
		movie2.Name << "; " << movie2.Duration << "; " <<
		movie2.ReleaseYear << "; " << movie2.Rating << '\n';

	OutPutFormatting();
	Movie movies[3]
	{
		{"� �������", 123, 2019, Drama, 6.382},
		{"���������", 200, 2020, Thriller, 5.0},
		{"������", 128, 2021, Action, 8.19}
	};

	for (int i = 0; i < 3; ++i)
	{
		cout << "\n����� (Name, Duration, ReleaseYear, Genre, Rating) " <<
			i << ' ' << movies[3].Name << "; " << movies[3].Duration <<
			"; " << movies[3].ReleaseYear << "; " <<
			movies[3].Genre << "; " << movies[3].Rating << '\n';
	}

	OutPutFormatting();
	Movie* pointer1 = &movie1;
	cout << "\n������ ����� (Name, Duration, ReleaseYear,"
		"Genre, Rating): " << pointer1->Name << "; " << pointer1->Duration <<
		"; " << pointer1->ReleaseYear << "; " << pointer1->Genre << "; " <<
		pointer1->Rating << '\n';

	pointer1->Name = "����� � �����";
	pointer1->Duration = 128;
	pointer1->ReleaseYear = 2015;
	pointer1->Genre = Horror;
	pointer1->Rating = 7.2;

	Movie* pointer = pointer1;
	cout << "\n����� � 1-�� ���������: " << pointer1 <<
		"\n����� �� 2-�� ��������� m5: " << pointer << '\n';
}

void DemoTime()
{
	Time time1{ 1, 30, 00 };
	cout << "\nTime is (Hours, Minutes, Seconds) " << time1.Hours <<
		"; " << time1.Minutes << "; " << time1.Seconds << '\n';

	OutPutFormatting();
	cout << "\n������� ���-�� �����: ";
	Time time2;
	cin >> time2.Hours;
	cout << "\n������� ���-�� �����: ";
	cin >> time2.Minutes;
	cout << "\n������� ���-�� ������: ";
	cin >> time2.Seconds;

	cout << "\n�����: " << time2.Hours << ':' << time2.Minutes <<
		':' << time2.Seconds << '\n';

	OutPutFormatting();
	Time times[3]
	{
		{0, 0, 0},
		{12, 24, 38},
		{24, 0, 0}
	};

	for (int i = 0; i < 3; ++i)
	{
		cout << "\n����� " << i << " (Hours,  Minutes, Seconds) " <<
			times[i].Hours << ':' << times[i].Minutes <<
			':' << times[i].Seconds << '\n';
	}

	OutPutFormatting();
	Time* pointer1 = &time1;
	cout << "\n����� � ������ ������� (Hours,  Minutes, Seconds): " <<
		pointer1->Hours << ':' << pointer1->Minutes <<
		':' << pointer1->Seconds << '\n';

	pointer1->Hours = 0;
	pointer1->Minutes = 0;
	pointer1->Seconds = 0;

	Time* pointer2 = pointer1;
	cout << "\n����� � 1-�� ���������:" << pointer1 <<
		"\n����� �� 2-�� ���������: " << pointer2 << '\n';
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
	cout << "\n������������� � ������ - " << rectangle.Length <<
		", ������� - " << rectangle.Width <<
		", ������ - " << rectangle.Color << '\n';
}

void ReadRectangle(Task222::Rectangle& rectangle)
{
	cout << "\n������� �����, ������, � ���� ��������������:";
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

	cout << "\n������������� � ���������� ������ ����� ����������� " <<
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

	cout << "\n������������� � ���������� �������� ����� ����������� " <<
		rectangles[index].Length << 'x' << rectangles[index].Width << '\n';
}

void DemoDynamicFlight()
{
	Flight* flight = new Flight;
	flight->From = "Tomsk";
	flight->To = "Canberra";
	flight->Duration = 2048;

	cout << "\n���� " << flight->From << " - " << flight->To <<
		" ������������������ " << flight->Duration << '\n';
	delete flight;
}

void DemoDynamicFlights()
{
	Flight* flights = new Flight[4]
	{
		{"������", "�����-���������", 45},
		{"�����", "������", 190},
		{"������", "������", 105},
		{"������", "���������", 180}
	};

	for (int i = 0; i < 4; ++i)
	{
		cout << "\n����" << i << ' ' <<
			flights[i].From << " - " << flights[i].To <<
			" ������������������ " << flights[i].Duration << '\n';
	}

	//ex2.2.6.3
	cout << "\n������� 2.2.6.3 �������� �������" <<
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

	cout << "\n���� " << flights[index].From << " - " << flights[index].To <<
		" � ��������� ����������������� � " << flights[index].Duration <<
		" �����\n";
}