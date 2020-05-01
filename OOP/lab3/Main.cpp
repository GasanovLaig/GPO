#include "Main.h"

int main()
{
	setlocale(LC_ALL, "ru_RU.UTF-8");
	try
	{
		DemoBook();
		FormatOutput();
		DemoRoute();
		FormatOutput();
		DemoRectangleWithPoint();
		FormatOutput();
		DemoFlightWithTime();
		FormatOutput();
		DemoBand();
	}
	catch (const std::exception& exception)
	{
		std::cerr << exception.what() << '\n';
	}

	system("pause");
	return 0;
}