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
	SetYear(year);
	SetMonth(month);
	SetDay(day);
	SetHours(hours);
	SetMinutes(minutes);
	SetSeconds(seconds);
}

Time::Time(const Time& time) :
	_year(time._year),
	_month(time._month),
	_day(time._day),
	_hours(time._hours),
	_minutes(time._minutes),
	_seconds(time._seconds)
{
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

bool operator>(Time time1, Time time2)
{
	if (time1.GetYear() > time2.GetYear() ||
		(time1.GetYear() == time2.GetYear() &&
			time1.GetMonth() > time2.GetMonth()) ||
		(time1.GetMonth() == time2.GetMonth() &&
			time1.GetDay() > time2.GetDay()))
	{
		return true;
	}
	else if ((time1.GetYear() == time2.GetYear() &&
		time1.GetMinutes() == time2.GetMinutes() &&
		time1.GetSeconds() == time2.GetSeconds() &&
		time1.GetHours() > time2.GetHours()) ||
		(time1.GetHours() == time2.GetHours() &&
			time1.GetMinutes() > time2.GetMinutes()) ||
		(time1.GetMinutes() == time2.GetMinutes() &&
			time1.GetSeconds() > time2.GetSeconds()))
	{
		return true;
	}

	return false;
}
