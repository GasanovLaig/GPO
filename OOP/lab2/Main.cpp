#include <iostream>
#include "../lab2/Task221.h"

int main()
{
	try
	{
		DemoSort();
	}
	catch (const std::exception&)
	{
		std::cerr << "Exception catched!";
	}

	system("pause");
	return 0;
}