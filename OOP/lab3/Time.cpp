#include "Time.h"
#include <exception>

Time::Time()
{
	_year = 0;
	_month = _day = _hours = _minutes = _seconds = 0;
}

Time::Time(int year, short month, short day,
	short hours, short minutes, short seconds)
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
	else if (minutes > 59)
	{
		throw std::exception("Минут не может быть > 59!");
	}
	else if (seconds > 59)
	{
		throw std::exception("Секунд не может быть > 59!");
	}
	
	SetYear(year);
	SetMonth(month);
	SetDay(day);
	SetHours(hours);
	SetMinutes(minutes);
	SetSeconds(seconds);
}

void Time::SetYear(int year)
{
	_year = year;
}

void Time::SetMonth(short month)
{
	if (month > 12)
	{
		throw std::exception("Месяцов не может быть > 12!");
	}

	_month = month;
}

void Time::SetDay(short day)
{
	if (day > 30)
	{
		throw std::exception("Дней не может быть > 30!");
	}

	_day = day;
}

void Time::SetHours(short hours)
{
	if (hours > 24)
	{
		throw std::exception("Часов не может быть > 24!");
	}

	_hours = hours;
}

void Time::SetMinutes(short minutes)
{
	if (minutes > 60)
	{
		throw std::exception("Минут не может быть > 59!");
	}

	_minutes = minutes;
}

void Time::SetSeconds(short seconds)
{
	if (seconds > 60)
	{
		throw std::exception("Cекунд не может быть > 59!");
	}

	_seconds = seconds;
}

int Time::GetYear()
{
	return _year;
}

short Time::GetMonth()
{
	return _month;
}

short Time::GetDay()
{
	return _day;
}

short Time::GetHours()
{
	return _hours;
}

short Time::GetMinutes()
{
	return _minutes;
}

short Time::GetSeconds()
{
	return _seconds;
}

std::ostream& operator<<(std::ostream& ostream, Time time)
{
	std::cout << time.GetYear() << '.' << time.GetMonth() << '.' << time.GetDay() <<
		' ' << time.GetHours()<< ':' << time.GetMinutes() << ':' <<  time.GetSeconds();

	return ostream;
}