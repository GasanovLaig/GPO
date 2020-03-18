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
Flight* MakeFlight(const std::string& from, const std::string& to,
	int duration);
Flight* CopyFlight(const Flight* flight);