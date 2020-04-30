#pragma once
#include <iostream>

class Time
{
public:
	Time();
	Time(__int64 year, __int8 month, __int8 day,
		__int8 hours, __int8 minutes, __int8 seconds);

	void SetYear(__int64 year);
	void SetMonth(__int8 month);
	void SetDay(__int8 day);
	void SetHours(__int8 hours);
	void SetMinutes(__int8 minutes);
	void SetSeconds(__int8 seconds);

	__int64 GetYear();
	__int8 GetMonth();
	__int8 GetDay();
	__int8 GetHours();
	__int8 GetMinutes();
	__int8 GetSeconds();

private:
	__int32 _year;
	__int8 _month;
	__int8 _day;
	__int8 _hours;
	__int8 _minutes;
	__int8 _seconds;
};

std::ostream& operator<<(std::ostream& ostream, Time time);