#include "Flight.h"
#include <iostream>
#include "OutPutFormatting.h"
using namespace std;

void DemoFlight()
{
	Flight film1{ "Tomsk", "Bern", 2147483 };
	cout << "\nFlight is (From, To, Duration) " << film1.From << "; " <<
		film1.To << "; " << film1.Duration << '\n';

	OutPutFormatting();
	cout << "\nВведите пункт отправления: ";
	Flight film2;
	cin >> film2.From;
	cout << "\nВведите пункт прибытия: ";
	cin >> film2.To;
	cout << "\nВремя в полете (в мин): ";
	cin >> film2.Duration;
	cout << "\nВаш рейс: " << film2.From << " - " <<
		film2.To << " в полете " << film2.Duration << '\n';

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
	Flight* pointer1 = &film1;
	cout << "\nПервый рейс: " << pointer1->From << " - " << pointer1->To <<
		" c продолжительностью в " << pointer1->Duration << '\n';

	pointer1->From = "Tomsk";
	pointer1->To = "Krasnodar";
	pointer1->Duration = 512;

	Flight* pointer2 = pointer1;
	cout << "\nАдрес в 1-ом указателе: " << pointer1 <<
		"\nАдрес во 2-ом указателе f5: " << pointer2 << '\n';
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

	// TODO: грам ошибки
	cout << "\nРейс " << flights[index].From << " - " << flights[index].To <<
		" с наименьшей продолжительностью в " << flights[index].Duration <<
		" минут\n";
}

Flight* MakeFlight(const std::string& from, const std::string& to,
	int duration)
{
	Flight* f = new Flight{ from, to, duration };
	return f;
}

Flight* CopyFlight(const Flight* flight)
{
	Flight* f = MakeFlight(flight->From, flight->To, flight->Duration);
	return f;
}