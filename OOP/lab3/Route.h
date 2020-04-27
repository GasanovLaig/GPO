#pragma once
#include <string>

struct Route
{
	int Number;
	short DurationMinutes;
	short PeriodicityMinutes;
	std::string Stops[10];
	int StopsCount;
};

void ReadRouteFromConsole(Route& route);
void WriteRouteToConsole(const Route& route);
int FindRouteTo(const Route* routes, int routesCount, std::string stop);
void DemoRoute();