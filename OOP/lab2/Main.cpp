#include "Main.h"

int main()
{
	setlocale(LC_ALL, "ru");
	
	cout << "\nЗадание 2.2.1 ОБРАБОТКА ИСКЛЮЧЕНИЙ\n";
	try
	{
		DemoSort();
	}
	catch (const std::exception&)
	{
		std::cerr << "Exception catched!\n";
	}
	
	FormatOutput();
	cout << "\nЗадание 2.2.2 СОЗДАНИЕ СТРУКТУР\n";
	DemoRectangle();
	FormatOutput();
	DemoFlight();
	FormatOutput();
	DemoMovie();
	FormatOutput();
	DemoTime();
	
	FormatOutput();
	cout << "\nЗадание 2.2.5 СТРУКТУРЫ И ФУНКЦИИ\n";
	DemoReadAndWriteRectangles();

	FormatOutput();
	cout << "\nЗадание 2.2.6 СТРУКТУРЫ И ДИНАМИЧЕСКАЯ ПАМЯТЬ\n";
	DemoDynamicFlight();
	FormatOutput();
	DemoDynamicFlights();

	FormatOutput();
	cout << "\nЗадание 2.2.7 ФУНКЦИИ-КОНСТРУКТОРЫ\n";
	DemoCircle();
	DemoMakeAndCopyFunctions();

	FormatOutput();
	cout << "\nЗадание 2.2.8 ПЕРЕЧИСЛЕНИЯ\n";
	DemoEnums();

	FormatOutput();
	cout << "\nЗадание 2.2.9 ИСПОЛЬЗОВАНИЕ ПЕРЕЧИСЛЕНИЙ В СТРУКТУРАХ\n";
	DemoMoviesByGenre();

	system("pause");
	return 0;
}