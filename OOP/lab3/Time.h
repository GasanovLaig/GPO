#pragma once

struct Time
{
	__int32 Year;
	__int8 Month;
	__int8 Day;
	__int8 Hours;
	__int8 Minutes;
	__int8 Seconds;

	void MakeTime(__int64 year, __int8 month, __int8 day,
		__int8 hours, __int8 minutes, __int8 seconds);

	void SetYear(__int64 year);
	void SetMonth(__int8 month);
	void SetDay(__int16 day);
	void SetHours(__int8 hours);
	void SetMinutes(__int8 minutes);
	void SetSeconds(__int8 seconds);
};