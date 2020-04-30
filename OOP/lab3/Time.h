#pragma once

struct Time
{
	__int32 Year;
	__int8 Month;
	__int16 Day;
	__int8 Hours;
	__int8 Minutes;
	__int8 Seconds;
};

Time* MakeTime(__int64 year, __int8 month, __int8 day,
	__int8 hours, __int8 minutes, __int8 seconds);

void SetYear(Time& time, __int64 year);
void SetMonth(Time& time, __int8 month);
void SetDay(Time& time, __int8 day);
void SetHours(Time& time, __int8 hours);
void SetMinutes(Time& time, __int8 minutes);
void SetSeconds(Time& time, __int8 seconds);

std::ostream& operator<<(std::ostream& ostream, const Time& time);