#include "Flight.h"
#include <iostream>

Flight* MakeFlight(int number, std::string from, std::string to,
	Time* arrival, Time* departure)
{
	if ((arrival->Year > departure->Year ||
		arrival->Month > departure->Month ||
		arrival->Day > departure->Day) &&
		arrival->Hours > departure->Hours &&
		arrival->Minutes > departure->Minutes &&
		arrival->Seconds > departure->Seconds)
	{
		throw std::exception("Время прибытия не может быть"
			"раньше времени отправления!");
	}

	return new Flight{ number, from, to, arrival, departure };
}

void SetNumber(Flight* flight, int number)
{
	flight->Number = number;
}

void SetFrom(Flight* flight, std::string from)
{
	flight->From = from;
}

void SetTo(Flight* flight, std::string to)
{
	flight->To = to;
}

void SetArrival(Flight* flight, Time* arrival)
{
	flight->Arrival = arrival;
}

void SetDeparture(Flight* flight, Time* departure)
{
	flight->Departure = departure;
}

void DemoFlightWithTime()
{
	Flight** flights = new Flight*[5];
	flights[0] = MakeFlight(0, "Юрга", "Томск",
		MakeTime(2020, 01, 01, 13, 00, 00),
		MakeTime(2020, 01, 01, 13, 30, 00));
	flights[1] = MakeFlight(1, "Томск", "Берн",
		MakeTime(2021, 01, 15, 06, 00, 00),
		MakeTime(2021, 01, 15, 17, 00, 00));
	flights[2] = MakeFlight(2, "Берн", "Амстердам",
		MakeTime(2022, 01, 15, 00, 00, 00),
		MakeTime(2022, 01, 15, 04, 00, 00));
	flights[3] = MakeFlight(3, "Амстердам", "Сидней",
		MakeTime(2023, 01, 01, 05, 00, 00),
		MakeTime(2023, 01, 01, 15, 00, 00));
	flights[4] = MakeFlight(4, "Сидней", "Сан-Франциско",
		MakeTime(2023, 12, 31, 15, 00, 00),
		MakeTime(2024, 01, 01, 00, 00, 00));

	for (int i = 0; i < 5; ++i)
	{
		std::cout << flights[i]->Number << flights[i]->From << '-' <<
			flights[i]->To << " Вылет " << flights[i]->Arrival <<
			" Прилет" << flights[i]->Departure << '\n';
	}

	for (int i = 0; i < 5; ++i)
	{
		delete flights[i]->Arrival;
		delete flights[i]->Departure;
		delete flights[i];
	}

	delete[] flights;
}

Time* GetFlightTimeMinutes(const Flight& flight)
{
	__int8 differenceMinutes = flight.Departure->Minutes - flight.Arrival->Minutes;

	if (differenceMinutes < 0)
	{
		differenceMinutes += 60;
	}

	__int8 differenceHours = flight.Departure->Hours - flight.Arrival->Hours;

	return new Time{ 00, 00, 00, differenceHours, differenceMinutes, 00 };
}