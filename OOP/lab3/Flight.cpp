#include "Flight.h"
#include <iostream>
using namespace std;

Flight::Flight(int number, string from,
	string to, Time arrival, Time departure)
{
	if (arrival.GetYear() > departure.GetYear() ||
		(arrival.GetYear() == departure.GetYear() &&
			arrival.GetMonth() > departure.GetMonth()) ||
		(arrival.GetMonth() == departure.GetMonth() &&
			arrival.GetDay() > departure.GetDay()))
	{
		throw exception("Время прибытия не может быть"
			"раньше времени отправления!");
	}
	else if ((arrival.GetYear() == departure.GetYear() &&
		arrival.GetMinutes() == departure.GetMinutes() &&
		arrival.GetSeconds() == departure.GetSeconds() &&
		arrival.GetHours() > departure.GetHours()) ||
		(arrival.GetHours() == departure.GetHours() &&
			arrival.GetMinutes() > departure.GetMinutes()) ||
		(arrival.GetMinutes() == departure.GetMinutes() &&
			arrival.GetSeconds() > departure.GetSeconds()))
	{
		throw exception("Время прибытия не может быть"
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

void Flight::SetFrom(string from)
{
	_from = from;
}

void Flight::SetTo(string to)
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

string Flight::GetFrom()
{
	return _from;
}

string Flight::GetTo()
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
	short differenceMinutes = _departure.GetMinutes() - _arrival.GetMinutes();
	short differenceHours = _departure.GetHours() - _arrival.GetHours();

	if (differenceMinutes < 0)
	{
		differenceMinutes += 60;
		differenceHours += -1;
	}

	return Time{ 0, 0, 0, differenceHours, differenceMinutes, 0 };
}

void DemoFlightWithTime()
{
	Flight* flights = new Flight[5]
	{
		{0, "Юрга", "Томск",
		Time{2020, 01, 01, 12, 15, 00},
		Time{2020, 01, 01, 13, 30, 00}},
		{1, "Томск", "Берн",
		Time{2021, 01, 15, 06, 45, 00},
		Time{2021, 01, 15, 17, 00, 00}},
		{2, "Берн", "Амстердам",
		Time{2022, 01, 15, 01, 00, 00},
		Time{2022, 01, 15, 04, 00, 00}},
		{3, "Амстердам", "Сидней",
		Time{2023, 01, 01, 05, 00, 00},
		Time{2023, 01, 01, 15, 00, 00}},
		{4, "Сидней", "Сан-Франциско",
		Time{2024, 01, 01, 02, 30, 00},
		Time{2024, 01, 01, 15, 00, 00}}
	};

	for (int i = 0; i < 5; ++i)
	{
		Time time = flights[i].GetFlightTimeMinutes();
		cout << flights[i].GetNumber() << ' ' << flights[i].GetFrom() << '-' <<
			flights[i].GetTo() << " Вылет " << flights[i].GetArrival() <<
			" Прилет " << flights[i].GetDeparture() << " Время полета: " <<
			time.GetHours() << ':' << time.GetMinutes() << ':' <<
			time.GetSeconds() << '\n';
	}

	delete[] flights;
}