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
	
	PauseClear();
	cout << "\nЗадание 2.2.2 СОЗДАНИЕ СТРУКТУР\n";
	DemoRectangle();
	PauseClear();
	DemoFlight();
	PauseClear();
	DemoMovie();
	PauseClear();
	DemoTime();
	
	PauseClear();
	cout << "\nЗадание 2.2.5 СТРУКТУРЫ И ФУНКЦИИ\n";
	DemoReadAndWriteRectangles();

	PauseClear();
	cout << "\nЗадание 2.2.6 СТРУКТУРЫ И ДИНАМИЧЕСКАЯ ПАМЯТЬ\n";
	DemoDynamicFlight();
	PauseClear();
	DemoDynamicFlights();

	PauseClear();
	cout << "\nЗадание 2.2.7 ФУНКЦИИ-КОНСТРУКТОРЫ\n";
	DemoCircle();
	DemoMakeAndCopyFunctions();

	PauseClear();
	cout << "\nЗадание 2.2.8 ПЕРЕЧИСЛЕНИЯ\n";
	DemoEnums();

	PauseClear();
	cout << "\nЗадание 2.2.9 ИСПОЛЬЗОВАНИЕ ПЕРЕЧИСЛЕНИЙ В СТРУКТУРАХ\n";
	DemoMoviesByGenre();

	system("pause");
	return 0;
}