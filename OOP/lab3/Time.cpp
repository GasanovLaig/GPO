#include "Time.h"
#include <exception>
#include <iostream>

Time* MakeTime(__int64 year, __int8 month, __int8 day,
	__int8 hours, __int8 minutes, __int8 seconds)
{
	if (month > 12)
	{
		throw std::exception("Месяцов не может быть > 12!");
	}
	else if (day > 30)
	{
		throw std::exception("Дней не может быть > 30!");
	}
	else if (hours > 24)
	{
		throw std::exception("Часов не может быть > 24!");
	}
	else if (minutes > 60)
	{
		throw std::exception("Минут не может быть > 60!");
	}
	else if (seconds > 60)
	{
		throw std::exception("Секунд не может быть > 60!");
	}

	return new Time{ year, month, day, hours, minutes, seconds };
}

void SetYear(Time& time, __int64 year)
{
	time.Year = year;
}

void SetMonth(Time& time, __int8 month)
{
	if (month > 12)
	{
		throw std::exception("Месяцов не может быть > 12!");
	}

	time.Month = month;
}

void SetDay(Time& time, __int8 day)
{
	if (day > 30)
	{
		throw std::exception("Дней не может быть > 30!");
	}

	time.Day = day;
}

void SetHours(Time& time, __int8 hours)
{
	if (hours > 24)
	{
		throw std::exception("Часов не может быть > 24!");
	}

	time.Hours = hours;
}

void SetMinutes(Time& time, __int8 minutes)
{
	if (minutes > 60)
	{
		throw std::exception("Минут не может быть > 60!");
	}

	time.Minutes = minutes;
}

void SetSeconds(Time& time, __int8 seconds)
{
	if (seconds > 60)
	{
		throw std::exception("Секунд не может быть > 60!");
	}

	time.Seconds = seconds;
}

std::ostream& operator<<(std::ostream& ostream, const Time& time)
{
	std::cout << time.Month << '.' << time.Day << ' ' <<
		time.Hours << ':' << time.Minutes;

	return ostream;
}
