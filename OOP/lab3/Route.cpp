#include "Route.h"
#include <iostream>
#include "../Common/GetValue.h"
using namespace std;

void ReadRouteFromConsole(Route& route)
{
	cout << "������� ����� ��������: ";
	route.Number = GetValue(exception("����� �������� ����� ���� �� 1 �� 2147483647!"),
		1, INT32_MAX, IsRange);
	route.DurationMinutes = GetValue(exception("����������������� ��������"
		"����� ���� �� 1 �� 32767 �����!"), 1i16, INT16_MAX, IsRange);
	route.PeriodicityMinutes = GetValue(exception("������������� �������� ����� ����"
		"�� 1 �� 32767!"), 1i16, INT16_MAX, IsRange);
	route.StopsCount = GetValue(exception("���������� ��������� ����� ����"
		"�� 1 �� 2147483647!"), 1, INT32_MAX, IsRange);
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
		"������������� - " << route.PeriodicityMinutes << "�����.";
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
	Route routes[3]
	{
		{19, 30, 10, 3, new std::string[3]{"������� ������", "�����",
		"������� ������������"}},
		{32, 60, 15, 3, new std::string[3]{"������������ ������",
		"������� ���", "����� �������"}},
		{22, 45, 12, 3, new std::string[3]{"2-� �������", "3-� ���. ��������",
		"������� ��������������� �����������"}}
	};

	for (int i = 0; i < 3; ++i)
	{
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