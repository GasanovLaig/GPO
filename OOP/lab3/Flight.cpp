#include "Flight.h"
#include <iostream>

Flight* MakeFlight(Flight* flight, int number, std::string from,
	std::string to, Time* arrival, Time* departure)
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

	flight->Number = number;
	flight->From = from;
	flight->To = to;
	flight->Arrival = arrival;
	flight->Departure = departure;

	return flight;
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
	Time* arrivalTimes = new Time[5];
	Time* departureTimes = new Time[5];
	MakeTime(arrivalTimes, 2020, 01, 01, 13, 00, 00);
	MakeTime(departureTimes, 2020, 01, 01, 13, 30, 00);
	MakeFlight(flights[0], 0, "Юрга", "Томск", arrivalTimes, departureTimes);
	
	MakeTime(arrivalTimes + 1, 2021, 01, 15, 06, 00, 00);
	MakeTime(departureTimes + 1, 2021, 01, 15, 17, 00, 00);
	MakeFlight(flights[1], 1, "Томск", "Берн", arrivalTimes + 1,
		departureTimes + 1);

	MakeTime(arrivalTimes + 2, 2022, 01, 15, 00, 00, 00);
	MakeTime(departureTimes + 2, 2022, 01, 15, 04, 00, 00);
	MakeFlight(flights[2], 2, "Берн", "Амстердам", arrivalTimes + 2,
		departureTimes + 2);
	
	MakeTime(arrivalTimes + 3, 2023, 01, 01, 05, 00, 00);
	MakeTime(departureTimes + 3, 2023, 01, 01, 15, 00, 00);
	MakeFlight(flights[4], 3, "Амстердам", "Сидней", arrivalTimes + 3,
		departureTimes + 3);
		
	MakeTime(arrivalTimes + 4, 2023, 12, 31, 15, 00, 00);
	MakeTime(departureTimes +4, 2024, 01, 01, 00, 00, 00);
	MakeFlight(flights[5], 4, "Сидней", "Сан-Франциско", arrivalTimes + 4,
		departureTimes + 4);

	for (int i = 0; i < 5; ++i)
	{
		std::cout << flights[i]->Number << flights[i]->From << '-' <<
			flights[i]->To << " Вылет " << flights[i]->Arrival <<
			" Прилет" << flights[i]->Departure << '\n';
	}

	for (int i = 0; i < 5; ++i)
	{
		delete flights[i];
	}

	delete[] arrivalTimes;
	delete[] departureTimes;
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