#pragma once
#include <string>
#include "Time.h"

class Flight
{
public:
	Flight(int number, std::string from, std::string to,
		Time arrival, Time departure);

	void SetNumber(int number);
	void SetFrom(std::string from);
	void SetTo(std::string to);
	void SetArrival(Time arrival);
	void SetDeparture(Time departure);

	void DemoFlightWithTime();
	Time GetFlightTimeMinutes();

private:
	std::string _number;
	std::string _from;
	std::string _to;
	Time _arrival;
	Time _departure;
};
