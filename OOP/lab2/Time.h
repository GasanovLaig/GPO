#pragma once
#include <iostream>

struct Time
{
	int Hours;
	int Minutes;
	int Seconds;
};

void DemoTime();
Time* MakeTime(int hours, int minutes, int seconds);
Time* CopyTime(const Time* time);