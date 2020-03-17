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
	// TODO: все русские символы зашакалены - устанавливал Unicode? Пересохранял файлы?
	cout << "\nÂâåäèòå äëèíó ïðÿìîóãîëíèêà: ";
	Task222::Rectangle rectangle2;
	cin >> rectangle2.Length;
	cout << "\nÂâåäèòå øèðèíó ïðÿìîóãîëíèêà: ";
	cin >> rectangle2.Width;
	cout << "\nÂâåäèòå öâåò ïðÿìîóãîëíèêà: ";
	cin >> rectangle2.Color;
	cout << "\nÐàçìåðû ïðÿìîóãîëíèêà: " <<
		rectangle2.Length << 'x' << rectangle2.Width <<
		" öâåò " << rectangle2.Color << '\n';

	OutPutFormatting();
	Task222::Rectangle rectangles[3]
	{
		{1, 2, "red"},
		{3, 4, "black"},
		{5, 6, "green"}
	};

	for (int i = 0; i < 3; ++i)
	{
		cout << "\nÏðÿìîóãîëüíèê " << i << " (Length, Width, Color) " <<
			rectangles[i].Length << "; " <<
			rectangles[i].Width << "; " <<
			rectangles[i].Color << '\n';
	}

	Task222::Rectangle* pointer1 = &rectangle1;
	cout << "\nÏåðâûé ïðÿìîóãîëüíèê äëèíîé - " << pointer1->Length <<
		", øèðèíîé - " << pointer1->Width <<
		", öâåòîì - " << pointer1->Color << '\n';

	pointer1->Length = 3.14;
	pointer1->Width = 21;
	pointer1->Color = "Purple";

	Task222::Rectangle* pointer2 = pointer1;
	cout << "\nÀäðåñ â 1-îì óêàçàòåëå: " << pointer1 <<
		"\nÀäðåñ âî 2-îì óêàçàòåëå r5: " << pointer2 << '\n';

	OutPutFormatting();
	//ex 2.2.5.4
	cout << "\nÇàäàíèå 2.2.5.4 ôóíêöèÿ Exchange(Rectangle& r1, Rectanlge& r2)" <<
		"\nÏåðâûé ïðÿìîóãîëíèê èìååò ðàçìåðíîñòü: " <<
		rectangle1.Length << 'x' << rectangle1.Width <<
		"\nÂòîðîé ïðÿìîóãîëíèê èìååò ðàçìåðíîñòü: " <<
		rectangle2.Length << 'x' << rectangle2.Width << '\n';
	Exchange(rectangle1, rectangle2);
	cout << "\nÏîñëå ïåðåñòàíîâêè ïîëåé 1-ãî è 2-ãî ïðÿìîóãîëüíèêîâ: " <<
		"\n1-ûé èìååò ðàçìåðíîñòü " <<
		rectangle1.Length << 'x' << rectangle1.Width <<
		"\n2-îé èìååò ðàçìåðíîñòü " <<
		rectangle2.Length << 'x' << rectangle2.Width << '\n';

	OutPutFormatting();
	//ex 2.2.5.5
	cout << "\nÇàäàíèå 2.2.5.5 " <<
		"íàïèñàòü ôóíêöèþ void FindRectangle(Rectangle* r, int count)";
	FindRectangle(rectangles, 3);

	OutPutFormatting();
	//ex 2.2.5.6
	cout << "\nÇàäàíèå 2.2.5.6 " << "íàïèñàòü ôóíêöèþ" <<
		"void FindRectangle(Rectangle* rectangles, int count)";
	FindMaxRectangle(rectangles, 3);
}

void DemoFlight()
{
	Flight film1{ "Tomsk", "Bern", 2147483 };
	cout << "\nFlight is (From, To, Duration) " << film1.From << "; " <<
		film1.To << "; " << film1.Duration << '\n';

	OutPutFormatting();
	cout << "\nÂâåäèòå ïóíêò îòïðàâëåíèÿ: ";
	Flight film2;
	cin >> film2.From;
	cout << "\nÂâåäèòå ïóíêò ïðèáûòèÿ: ";
	cin >> film2.To;
	cout << "\nÂðåìÿ â ïîëåòå (â ìèí): ";
	cin >> film2.Duration;
	cout << "\nÂàø ðåéñ: " << film2.From << " - " <<
		film2.To << " â ïîëåòå " << film2.Duration << '\n';

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
			" - " << flights[i].To << " ñ ïðîäîëæèòåëüíîñòüþ " <<
			flights[i].Duration << '\n';
	}

	OutPutFormatting();
	Flight* pointer1 = &film1;
	cout << "\nÏåðâûé ðåéñ: " << pointer1->From << " - " << pointer1->To <<
		" c ïðîäîëæèòåëüíîñòüþ â " << pointer1->Duration << '\n';

	pointer1->From = "Tomsk";
	pointer1->To = "Krasnodar";
	pointer1->Duration = 512;

	Flight* pointer2 = pointer1;
	cout << "\nÀäðåñ â 1-îì óêàçàòåëå: " << pointer1 <<
		"\nÀäðåñ âî 2-îì óêàçàòåëå f5: " << pointer2 << '\n';
}

void DemoMovie()
{
	Movie movie1{ "Çà ïðîïàñòüþ âî ðæè", 106, 2017, Drama, 6.7 };
	cout << "\nMovie is (Name, Duration, ReleaseYear, Genre, Rating) " <<
		movie1.Name << "; " << movie1.Duration << "; " << movie1.ReleaseYear <<
		"; " <<	movie1.Rating << '\n';

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

void DemoTime()
{
	Time time1{ 1, 30, 00 };
	cout << "\nTime is (Hours, Minutes, Seconds) " << time1.Hours <<
		"; " << time1.Minutes << "; " << time1.Seconds << '\n';

	OutPutFormatting();
	cout << "\nÂâåäèòå êîë-âî ÷àñîâ: ";
	Time time2;
	cin >> time2.Hours;
	cout << "\nÂâåäèòå êîë-âî ìèíóò: ";
	cin >> time2.Minutes;
	cout << "\nÂâåäèòå êîë-âî ñåêóíä: ";
	cin >> time2.Seconds;

	cout << "\nÂðåìÿ: " << time2.Hours << ':' << time2.Minutes <<
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
		cout << "\nÂðåìÿ " << i << " (Hours,  Minutes, Seconds) " <<
			times[i].Hours << ':' << times[i].Minutes <<
			':' << times[i].Seconds << '\n';
	}

	OutPutFormatting();
	Time* pointer1 = &time1;
	cout << "\nÂðåìÿ â ïåðâîì çàäàíèè (Hours,  Minutes, Seconds): " <<
		pointer1->Hours << ':' << pointer1->Minutes <<
		':' << pointer1->Seconds << '\n';

	pointer1->Hours = 0;
	pointer1->Minutes = 0;
	pointer1->Seconds = 0;

	Time* pointer2 = pointer1;
	cout << "\nÀäðåñ â 1-îì óêàçàòåëå:" << pointer1 <<
		"\nÀäðåñ âî 2-îì óêàçàòåëå: " << pointer2 << '\n';
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
	cout << "\nÏðÿìîóãîëüíèê ñ äëèíîé - " << rectangle.Length <<
		", øèðèíîé - " << rectangle.Width <<
		", öâåòîì - " << rectangle.Color << '\n';
}

void ReadRectangle(Task222::Rectangle& rectangle)
{
	cout << "\nÂâåäèòå äëèíó, øèðèíó, è öâåò ïðÿìîóãîëüíèêà:";
	cin >> rectangle.Length >>
		rectangle.Width >>
		rectangle.Color;
}

// TODO: грам ошибка в названии функции
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

	cout << "\nÏðÿìîóãîëüíèê ñ íàèáîëüøåé äëèíîé èìååò ðàçìåðíîñòü " <<
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

	cout << "\nÏðÿìîóãîëüíèê ñ íàáèîëüøåé ïëîùàäüþ èìååò ðàçìåðíîñòü " <<
		rectangles[index].Length << 'x' << rectangles[index].Width << '\n';
}

void DemoDynamicFlight()
{
	Flight* flight = new Flight;
	flight->From = "Tomsk";
	flight->To = "Canberra";
	flight->Duration = 2048;

	cout << "\nÐåéñ " << flight->From << " - " << flight->To <<
		" ïðîäîëæèòåëüíîñòüþ " << flight->Duration << '\n';
	delete flight;
}

void DemoDynamicFlights()
{
	Flight* flights = new Flight[4]
	{
		{"Ìîñêâà", "Ñàíêò-Ïåòåðáóðã", 45},
		{"Òîìñê", "Ìîñêâà", 190},
		{"Áåðëèí", "Ëîíäîí", 105},
		{"Ìîñêâà", "Áàðñåëîíà", 180}
	};

	for (int i = 0; i < 4; ++i)
	{
		cout << "\nÐåéñ" << i << ' ' <<
			flights[i].From << " - " << flights[i].To <<
			" ïðîäîëæèòåëüíîñòüþ " << flights[i].Duration << '\n';
	}

	//ex2.2.6.3
	cout << "\nÇàäàíèå 2.2.6.3 íàïèñàòü ôóíêöèþ" <<
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

	cout << "\nÐåéñ " << flights[index].From << " - " << flights[index].To <<
		" ñ íàèìåíøåé ïðîäîëæèòåëüíîñòþ â " << flights[index].Duration <<
		" ìèíóò\n";
}