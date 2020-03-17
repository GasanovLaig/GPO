#pragma once
#include <string>

struct Flight
{
	std::string From;
	std::string To;
	int Duration;
};

void DemoFlight();
void DemoDynamicFlight();
void DemoDynamicFlights();
void FindShortestFlight(const Flight* flights, size_t size);