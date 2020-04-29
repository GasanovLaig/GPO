#include "Time.h"
#include <exception>

void Time::MakeTime(__int64 year, __int8 month, __int8 day,
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

	Year = year;
	Month = month;
	Day = day;
	Hours = hours;
	Minutes = minutes;
	Seconds = seconds;
}

void Time::SetYear(__int64 year)
{
	Year = year;
}

void Time::SetMonth(__int8 month)
{
	if (month > 12)
	{
		throw std::exception("Месяцов не может быть > 12!");
	}

	Month = month;
}

void Time::SetDay(__int16 day)
{
	if (day > 30)
	{
		throw std::exception("Дней не может быть > 30!");
	}

	Day = day;
}

void Time::SetHours(__int8 hours)
{
	if (hours > 24)
	{
		throw std::exception("Часов не может быть > 24!");
	}

	Hours = hours;
}

void Time::SetMinutes(__int8 minutes)
{
	if (minutes > 60)
	{
		throw std::exception("Минут не может быть > 60!");
	}

	Minutes = minutes;
}

void Time::SetSeconds(__int8 seconds)
{
	if (seconds > 60)
	{
		throw std::exception("Секунд не может быть > 60!");
	}

	Seconds = seconds;
}