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
	
	OutPutFormatting();
	cout << "\nЗадание 2.2.2 СОЗДАНИЕ СТРУКТУР\n";
	DemoRectangle();
	OutPutFormatting();
	DemoFlight();
	OutPutFormatting();
	DemoMovie();
	OutPutFormatting();
	DemoTime();
	
	OutPutFormatting();
	cout << "\nЗадание 2.2.5 СТРУКТУРЫ И ФУНКЦИИ\n";
	DemoReadAndWriteRectangles();

	OutPutFormatting();
	cout << "\nЗадание 2.2.6 СТРУКТУРЫ И ДИНАМИЧЕСКАЯ ПАМЯТЬ\n";
	DemoDynamicFlight();
	OutPutFormatting();
	DemoDynamicFlights();

	OutPutFormatting();
	cout << "\nЗадание 2.2.7 ФУНКЦИИ-КОНСТРУКТОРЫ\n";
	DemoCircle();
	DemoMakeAndCopyFunctions();

	OutPutFormatting();
	cout << "\nЗадание 2.2.8 ПЕРЕЧИСЛЕНИЯ\n";
	DemoEnums();

	OutPutFormatting();
	cout << "\nЗадание 2.2.9 ИСПОЛЬЗОВАНИЕ ПЕРЕЧИСЛЕНИЙ В СТРУКТУРАХ\n";
	DemoMoviesByGenre();

	system("pause");
	return 0;
}