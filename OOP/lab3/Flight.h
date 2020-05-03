#pragma once
#include <string>
#include "Time.h"

class Flight
{
private:
	int _number;
	std::string _from;
	std::string _to;
	Time _arrival;
	Time _departure;

public:
	Flight(int number, std::string from, std::string to,
		Time arrival, Time departure);

	void SetNumber(int number);
	void SetFrom(std::string from);
	void SetTo(std::string to);
	void SetArrival(Time arrival);
	void SetDeparture(Time departure);

	int GetNumber();
	std::string GetFrom();
	std::string GetTo();
	Time GetArrival();
	Time GetDeparture();

	Time GetFlightTimeMinutes();
};

void DemoFlightWithTime();