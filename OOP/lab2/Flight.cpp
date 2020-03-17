#include "Flight.h"
#include <iostream>
#include "OutPutFormatting.h"
using namespace std;

void DemoFlight()
{
	Flight film1{ "Tomsk", "Bern", 2147483 };
	cout << "\nFlight is (From, To, Duration) " << film1.From << "; " <<
		film1.To << "; " << film1.Duration << '\n';

	OutPutFormatting();
	cout << "\nÂâåäèòå ïóíêò îòïðàâëåíèÿ: ";
	Flight film2;
	cin >> film2.From;
	cout << "\nÂâåäèòå ïóíêò ïðèáûòèÿ: ";
	cin >> film2.To;
	cout << "\nÂðåìÿ â ïîëåòå (â ìèí): ";
	cin >> film2.Duration;
	cout << "\nÂàø ðåéñ: " << film2.From << " - " <<
		film2.To << " â ïîëåòå " << film2.Duration << '\n';

	OutPutFormatting();
	Flight flights[3]
	{
		{"Tomsk", "San-Francisco", 241434},
		{"San-Francisco", "Vancouver", 23434},
		{ "Vancouver", "Madrid", 345345 }
	};

	for (int i = 0; i < 3; ++i)
	{
		cout << "\nFlight " << i << " is " << flights[i].From <<
			" - " << flights[i].To << " ñ ïðîäîëæèòåëüíîñòüþ " <<
			flights[i].Duration << '\n';
	}

	OutPutFormatting();
	Flight* pointer1 = &film1;
	cout << "\nÏåðâûé ðåéñ: " << pointer1->From << " - " << pointer1->To <<
		" c ïðîäîëæèòåëüíîñòüþ â " << pointer1->Duration << '\n';

	pointer1->From = "Tomsk";
	pointer1->To = "Krasnodar";
	pointer1->Duration = 512;

	Flight* pointer2 = pointer1;
	cout << "\nÀäðåñ â 1-îì óêàçàòåëå: " << pointer1 <<
		"\nÀäðåñ âî 2-îì óêàçàòåëå f5: " << pointer2 << '\n';
}

void DemoDynamicFlight()
{
	Flight* flight = new Flight;
	flight->From = "Tomsk";
	flight->To = "Canberra";
	flight->Duration = 2048;

	cout << "\nÐåéñ " << flight->From << " - " << flight->To <<
		" ïðîäîëæèòåëüíîñòüþ " << flight->Duration << '\n';
	delete flight;
}

void DemoDynamicFlights()
{
	Flight* flights = new Flight[4]
	{
		{"Ìîñêâà", "Ñàíêò-Ïåòåðáóðã", 45},
		{"Òîìñê", "Ìîñêâà", 190},
		{"Áåðëèí", "Ëîíäîí", 105},
		{"Ìîñêâà", "Áàðñåëîíà", 180}
	};

	for (int i = 0; i < 4; ++i)
	{
		cout << "\nÐåéñ" << i << ' ' <<
			flights[i].From << " - " << flights[i].To <<
			" ïðîäîëæèòåëüíîñòüþ " << flights[i].Duration << '\n';
	}

	//ex2.2.6.3
	cout << "\nÇàäàíèå 2.2.6.3 íàïèñàòü ôóíêöèþ" <<
		"void FindShortestFlight(Flight* flights, int count):\n";
	FindShortestFlight(flights, 4U);

	delete[] flights;
}

void FindShortestFlight(const Flight* flights, size_t size)
{
	int minDuration = flights[0].Duration;
	size_t index = 0;
	for (size_t i = 0; i < size; ++i)
	{
		if (flights[i].Duration < minDuration)
		{
			minDuration = flights[i].Duration;
			index = i;
		}
	}

	cout << "\nÐåéñ " << flights[index].From << " - " << flights[index].To <<
		" ñ íàèìåíøåé ïðîäîëæèòåëüíîñòþ â " << flights[index].Duration <<
		" ìèíóò\n";
}