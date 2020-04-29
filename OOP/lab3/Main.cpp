#include "Main.h"

int main()
{
	setlocale(LC_ALL, "ru");
	try
	{

		DemoBook();
		FormatOutput();
		DemoRoute();
	}
	catch (const std::exception& exception)
	{
		std::cerr << exception.what();
	}

	system("pause");
	return 0;
}