#pragma once
#include <string>
#include "Time.h"

struct Flight
{
	int Number;
	std::string From;
	std::string To;
	Time* Arrival;
	Time* Departure;
};

Flight* MakeFlight(Flight* flight, int number, std::string from,
	std::string to,	const Time* arrival, const Time* departure);

void SetNumber(Flight* flight, int number);
void SetFrom(Flight* flight, std::string from);
void SetTo(Flight* flight, std::string to);
void SetArrival(Flight* flight, const Time* arrival);
void SetDeparture(Flight* flight, const Time* departure);

void DemoFlightWithTime();
Time* GetFlightTimeMinutes(const Flight& flight);