#include "Time.h"
#include "OutPutFormatting.h"
using namespace std;

void DemoTime()
{
	Time time1{ 1, 30, 00 };
	cout << "\nTime is (Hours, Minutes, Seconds) " << time1.Hours <<
		"; " << time1.Minutes << "; " << time1.Seconds << '\n';

	OutPutFormatting();
	cout << "\nВведите кол-во часов: ";
	Time time2;
	cin >> time2.Hours;
	cout << "\nВведите кол-во минут: ";
	cin >> time2.Minutes;
	cout << "\nВведите кол-во секунд: ";
	cin >> time2.Seconds;

	cout << "\nВремя: " << time2.Hours << ':' << time2.Minutes <<
		':' << time2.Seconds << '\n';

	OutPutFormatting();
	Time times[3]
	{
		{0, 0, 0},
		{12, 24, 38},
		{24, 0, 0}
	};

	for (int i = 0; i < 3; ++i)
	{
		cout << "\nВремя " << i << " (Hours,  Minutes, Seconds) " <<
			times[i].Hours << ':' << times[i].Minutes << ':' << times[i].Seconds << '\n';
	}

	OutPutFormatting();
	Time* pointer1 = &time1;
	cout << "\nВремя в первом задании (Hours,  Minutes, Seconds): " <<
		pointer1->Hours << ':' << pointer1->Minutes << ':' << pointer1->Seconds << '\n';

	pointer1->Hours = 0;
	pointer1->Minutes = 0;
	pointer1->Seconds = 0;

	Time* pointer2 = pointer1;
	cout << "\nАдрес в 1-ом указателе:" << pointer1 <<
		"\nАдрес во 2-ом указателе: " << pointer2 << '\n';
}

Time* MakeTime(int hours, int minutes, int seconds)
{
	Time* t = new Time{ hours, minutes, seconds };
	return t;
}

Time* CopyTime(const Time* time)
{
	Time* t = MakeTime(time->Hours, time->Minutes, time->Seconds);
	return t;
}