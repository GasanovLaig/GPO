#include "Route.h"
#include <iostream>
#include "../Common/GetValue.h"
using namespace std;

void ReadRouteFromConsole(Route& route)
{
	cout << "������� ����� ��������: ";
	route.Number = GetValue(1, INT32_MAX,
		"����� �������� ����� ���� �� 1 �� 2147483647!", IsRange);
	route.DurationMinutes = GetValue(1i16, INT16_MAX,
		"����������������� �������� ����� ���� �� 1 �� 32767 �����!", IsRange);
	route.PeriodicityMinutes = GetValue(1i16, INT16_MAX,
		"������������� �������� ����� ���� �� 1 �� 32767!", IsRange);
	route.StopsCount = GetValue(1, 10,
		"���������� ��������� ����� ���� �� 1 �� 10!", IsRange);
	for (int i = 0; i < route.StopsCount; ++i)
	{
		cin >> route.Stops[i];
	}
}

void WriteRouteToConsole(const Route& route)
{
	cout << route.Number << ". ";
	for (int i = 0; i < route.StopsCount; ++i)
	{
		cout << route.Stops[i] << (route.StopsCount != i ? ", " : ". ");
	}

	cout << "����������������� - " << route.DurationMinutes << "�����. "
		<< "������������� - " << route.PeriodicityMinutes << "�����.";
}

int FindRouteTo(const Route* routes, int routesCount, std::string stop)
{
	for (int i = 0; i < routesCount; ++i)
	{
		for (int j = 0; j < routes[i].StopsCount; ++j)
		{
			if (routes[i].Stops[i] == stop)
			{
				return j;
			}
		}
	}

	return -1;
}

void DemoRoute()
{
	Route routes[3];
	for (int i = 0; i < 3; ++i)
	{
		ReadRouteFromConsole(routes[i]);
		WriteRouteToConsole(routes[i]);
		cout << '\n';
	}

	cout << "\n������� �������� ���������: ";
	string stop;
	cin >> stop;
	int index = FindRouteTo(routes, 3, stop);
	if (index < 0)
	{
		cout << "�������� �� ������.";
	}
	else
	{
		WriteRouteToConsole(routes[index]);
	}
}