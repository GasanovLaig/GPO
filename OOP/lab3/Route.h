#pragma once
#include <string>

struct Route
{
	int Number;
	short DurationMinutes;
	short PeriodicityMinutes;
	int StopsCount;
	std::string* Stops;
};

void ReadRouteFromConsole(Route& route);
void WriteRouteToConsole(const Route& route);
int FindRouteTo(const Route* routes, int routesCount, std::string stop);
void DemoRoute();