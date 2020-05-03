#include "Main.h"

int main()
{
	setlocale(LC_ALL, "ru_RU.UTF-8");
	try
	{
		DemoBook();
		PauseClear();
		DemoRoute();
		PauseClear();
		DemoRectangleWithPoint();
		PauseClear();
		DemoFlightWithTime();
		PauseClear();
		DemoBand();
	}
	catch (const std::exception& exception)
	{
		std::cerr << exception.what() << '\n';
	}

	system("pause");
	return 0;
}