#include "Route.h"
#include <iostream>
#include "../Common/GetValue.h"
using namespace std;

void ReadRouteFromConsole(Route& route)
{
	cout << "Введите номер маршрута: ";
	route.Number = GetValue(exception("Номер маршрута может быть от 1 до 2147483647!"),
		1, INT32_MAX, IsRange);
	route.DurationMinutes = GetValue(exception("Продолжительность маршрута"
		"может быть от 1 до 32767 минут!"), 1i16, INT16_MAX, IsRange);
	route.PeriodicityMinutes = GetValue(exception("Периодичность маршрута может быть"
		"от 1 до 32767!"), 1i16, INT16_MAX, IsRange);
	route.StopsCount = GetValue(exception("Количество остановок может быть"
		"от 1 до 2147483647!"), 1, INT32_MAX, IsRange);
	for (int i = 0; i < route.StopsCount; ++i)
	{
		getline(cin, route.Stops[i]);
	}
}

void WriteRouteToConsole(const Route& route)
{
	cout << route.Number << ". ";
	for (int i = 0; i < route.StopsCount; ++i)
	{
		cout << route.Stops[i] << (route.StopsCount != i ? ", " : ". ");
	}

	cout << "Продолжительность - " << route.DurationMinutes << "минут. "
		"Периодичность - " << route.PeriodicityMinutes << "минут.";
}

int FindRouteTo(const Route* routes, int routesCount, std::string stop)
{
	for (int i = 0; i < routesCount; ++i)
	{
		for (int j = 0; j < routes[i].StopsCount; ++j)
		{
			if (routes[i].Stops[j] == stop)
			{
				return i;
			}
		}
	}

	return -1;
}

void DemoRoute()
{
	Route routes[3]
	{
		{19, 30, 10, 3, new std::string[3]{"Площадь Кукина", "Южная",
		"Площадь Новособорная"}},
		{32, 60, 15, 3, new std::string[3]{"Транспортное Кольцо",
		"Детский мир", "Улица Учебная"}},
		{22, 45, 12, 3, new std::string[3]{"2-Й Переезд", "3-Я Гор. Больница",
		"Томский государственный университет"}}
	};

	for (int i = 0; i < 3; ++i)
	{
		WriteRouteToConsole(routes[i]);
		cout << '\n';
	}

	cout << "\nВведите название остановки: ";
	string stop;
	getline(cin, stop);
	int index = FindRouteTo(routes, 3, stop);
	if (index < 0)
	{
		cout << "Марштрут не найден.";
	}
	else
	{
		WriteRouteToConsole(routes[index]);
	}

	for (int i = 0; i < 3; i++)
	{
		delete[] routes[i].Stops;
	}
}