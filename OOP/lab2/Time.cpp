#include "Time.h"
#include "OutPutFormatting.h"
using namespace std;

void DemoTime()
{
	Time time1{ 1, 30, 00 };
	cout << "\nTime is (Hours, Minutes, Seconds) " << time1.Hours <<
		"; " << time1.Minutes << "; " << time1.Seconds << '\n';

	OutPutFormatting();
	cout << "\nÂâåäèòå êîë-âî ÷àñîâ: ";
	Time time2;
	cin >> time2.Hours;
	cout << "\nÂâåäèòå êîë-âî ìèíóò: ";
	cin >> time2.Minutes;
	cout << "\nÂâåäèòå êîë-âî ñåêóíä: ";
	cin >> time2.Seconds;

	cout << "\nÂðåìÿ: " << time2.Hours << ':' << time2.Minutes <<
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
		cout << "\nÂðåìÿ " << i << " (Hours,  Minutes, Seconds) " <<
			times[i].Hours << ':' << times[i].Minutes <<
			':' << times[i].Seconds << '\n';
	}

	OutPutFormatting();
	Time* pointer1 = &time1;
	cout << "\nÂðåìÿ â ïåðâîì çàäàíèè (Hours,  Minutes, Seconds): " <<
		pointer1->Hours << ':' << pointer1->Minutes <<
		':' << pointer1->Seconds << '\n';

	pointer1->Hours = 0;
	pointer1->Minutes = 0;
	pointer1->Seconds = 0;

	Time* pointer2 = pointer1;
	cout << "\nÀäðåñ â 1-îì óêàçàòåëå:" << pointer1 <<
		"\nÀäðåñ âî 2-îì óêàçàòåëå: " << pointer2 << '\n';
}