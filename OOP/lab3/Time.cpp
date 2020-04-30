#include "Time.h"
#include <exception>

Time::Time()
{
	_year = 0i64;
	_month = _day = _hours = _minutes = _seconds = 0i8;
}

Time::Time(__int64 year, __int8 month, __int8 day,
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
	
	SetYear(year);
	SetMonth(month);
	SetDay(day);
	SetHours(hours);
	SetMinutes(minutes);
	SetSeconds(seconds);
}

void Time::SetYear(__int64 year)
{
	_year = year;
}

void Time::SetMonth(__int8 month)
{
	if (month > 12)
	{
		throw std::exception("Месяцов не может быть > 12!");
	}

	_month = month;
}

void Time::SetDay(__int8 day)
{
	if (day > 30)
	{
		throw std::exception("Дней не может быть > 30!");
	}

	_day = day;
}

void Time::SetHours(__int8 hours)
{
	if (hours > 24)
	{
		throw std::exception("Часов не может быть > 24!");
	}

	_hours = hours;
}

void Time::SetMinutes(__int8 minutes)
{
	if (minutes > 60)
	{
		throw std::exception("Минут не может быть > 60!");
	}

	_minutes = minutes;
}

void Time::SetSeconds(__int8 seconds)
{
	if (seconds > 60)
	{
		throw std::exception("Секунд не может быть > 60!");
	}

	_seconds = seconds;
}

__int64 Time::GetYear()
{
	return _year;
}

__int8 Time::GetMonth()
{
	return _month;
}

__int8 Time::GetDay()
{
	return _day;
}

__int8 Time::GetHours()
{
	return _hours;
}

__int8 Time::GetMinutes()
{
	return _minutes;
}

__int8 Time::GetSeconds()
{
	return _seconds;
}

std::ostream& operator<<(std::ostream& ostream, Time time)
{
	std::cout << time.GetYear() << '.' << time.GetMonth() << '.' << time.GetDay() <<
		' ' << time.GetHours()<< ':' << time.GetMinutes() << ':' <<  time.GetSeconds();

	return ostream;
}