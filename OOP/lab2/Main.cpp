#include "Main.h"

int main()
{
	setlocale(LC_ALL, "ru");
	
	cout << "\nÇàäàíèå 2.2.1 ÎÁÐÀÁÎÒÊÀ ÈÑÊËÞ×ÅÍÈÉ\n";
	try
	{
		DemoSort();
	}
	catch (const std::exception&)
	{
		std::cerr << "Exception catched!\n";
	}
	
	OutPutFormatting();
	cout << "\nÇàäàíèå 2.2.2 ÑÎÇÄÀÍÈÅ ÑÒÐÓÊÒÓÐ\n";
	DemoRectangle();
	OutPutFormatting();
	DemoFlight();
	OutPutFormatting();
	DemoMovie();
	OutPutFormatting();
	DemoTime();
	
	OutPutFormatting();
	cout << "\nÇàäàíèå 2.2.5 ÑÒÐÓÊÒÓÐÛ È ÔÓÍÊÖÈÈ\n";
	DemoReadAndWhriteRectangles();

	OutPutFormatting();
	cout << "\nÇàäàíèå 2.2.6 ÑÒÐÓÊÒÓÐÛ È ÄÈÍÀÌÈ×ÅÑÊÀß ÏÀÌßÒÜ\n";
	DemoDynamicFlight();
	OutPutFormatting();
	DemoDynamicFlights();

	OutPutFormatting();
	cout << "\nÇàäàíèå 2.2.7 ÔÓÍÊÖÈÈ-ÊÎÍÑÒÐÓÊÒÎÐÛ\n";
	DemoCircle();
	DemoMakeAndCopyFunctions();

	system("pause");
	return 0;
}