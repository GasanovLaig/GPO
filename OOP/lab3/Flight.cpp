#include "Flight.h"
#include <iostream>

Flight::Flight(int number, std::string from,
	std::string to, Time arrival, Time departure)
{
	if ((arrival.GetYear() > departure.GetYear() ||
		arrival.GetMonth() > departure.GetMonth() ||
		arrival.GetDay() > departure.GetDay()) ||
		(arrival.GetHours() > departure.GetHours() &&
		arrival.GetMinutes() > departure.GetMinutes() &&
		arrival.GetSeconds() > departure.GetSeconds()))
	{
		throw std::exception("Время прибытия не может быть"
			"раньше времени отправления!");
	}

	SetNumber(number);
	SetFrom(from);
	SetTo(to);
	SetArrival(arrival);
	SetDeparture(departure);
}

void Flight::SetNumber(int number)
{
	_number = number;
}

void Flight::SetFrom(std::string from)
{
	_from = from;
}

void Flight::SetTo(std::string to)
{
	_to = to;
}

void Flight::SetArrival(Time arrival)
{
	_arrival.SetYear(arrival.GetYear());
	_arrival.SetMonth(arrival.GetMonth());
	_arrival.SetDay(arrival.GetDay());
	_arrival.SetHours(arrival.GetHours());
	_arrival.SetMinutes(arrival.GetMinutes());
	_arrival.SetSeconds(arrival.GetSeconds());
}

void Flight::SetDeparture(Time departure)
{
	_departure.SetYear(departure.GetYear());
	_departure.SetMonth(departure.GetMonth());
	_departure.SetDay(departure.GetDay());
	_departure.SetHours(departure.GetHours());
	_departure.SetMinutes(departure.GetMinutes());
	_departure.SetSeconds(departure.GetSeconds());
}

int Flight::GetNumber()
{
	return _number;
}

std::string Flight::GetFrom()
{
	return _from;
}

std::string Flight::GetTo()
{
	return _to;
}

Time Flight::GetArrival()
{
	return _arrival;
}

Time Flight::GetDeparture()
{
	return _departure;
}

Time Flight::GetFlightTimeMinutes()
{
	__int8 differenceMinutes = _departure.GetMinutes() - _arrival.GetMinutes();
	
	if (differenceMinutes < 0)
	{
		differenceMinutes += 60;
	}

	__int8 differenceHours = _departure.GetHours() - _arrival.GetHours();

	return { 00i64, 00i8, 00i8, differenceHours, differenceMinutes, 00i8 };
}

void DemoFlightWithTime()
{
	Flight* flights = new Flight[5]
	{
		{0, "Юрга", "Томск", {2020, 01, 01, 13, 00, 00}, {2020, 01, 01, 13, 30, 00}},
		{1, "Томск", "Берн", {2021, 01, 15, 06, 00, 00}, {2021, 01, 15, 17, 00, 00}},
		{2, "Берн", "Амстердам", {2022, 01, 15, 00, 00, 00}, {2022, 01, 15, 04, 00, 00}},
		{3, "Амстердам", "Сидней", {2023, 01, 01, 05, 00, 00}, {2023, 01, 01, 15, 00, 00}},
		{4, "Сидней", "Сан-Франциско", {2023, 12, 31, 15, 00, 00}, {2024, 01, 01, 00, 00, 00}}
	};

	for (int i = 0; i < 5; ++i)
	{
		std::cout << flights[i].GetNumber() << flights[i].GetFrom() << '-' <<
			flights[i].GetTo() << " Вылет " << flights[i].GetArrival() <<
			" Прилет " << flights[i].GetDeparture() << " Время полета: " <<
			flights[i].GetFlightTimeMinutes();
	}

	delete[] flights;
}