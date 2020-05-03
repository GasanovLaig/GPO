#pragma once
#include <iostream>
// TODO: порядок
class Time
{
private:
	int _year;
	short _month;
	short _day;
	short _hours;
	short _minutes;
	short _seconds;

public:
	void SetYear(int year);
	void SetMonth(short month);
	void SetDay(short day);
	void SetHours(short hours);
	void SetMinutes(short minutes);
	void SetSeconds(short seconds);

	int GetYear();
	short GetMonth();
	short GetDay();
	short GetHours();
	short GetMinutes();
	short GetSeconds();

	Time();
	Time(int year, short month, short day,
		short hours, short minutes, short seconds);
	Time(const Time& time);
};

std::ostream& operator<<(std::ostream& ostream, Time time);
bool operator>(Time time1, Time time2);