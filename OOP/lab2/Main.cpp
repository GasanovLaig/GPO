#include "Main.h"

int main()
{
	setlocale(LC_ALL, "ru");
	
	cout << "\n������� 2.2.1 ��������� ����������\n";
	try
	{
		DemoSort();
	}
	catch (const std::exception&)
	{
		std::cerr << "Exception catched!\n";
	}
	
	OutPutFormatting();
	cout << "\n������� 2.2.2 �������� ��������\n";
	DemoRectangle();
	OutPutFormatting();
	DemoFlight();
	OutPutFormatting();
	DemoMovie();
	OutPutFormatting();
	DemoTime();
	
	OutPutFormatting();
	cout << "\n������� 2.2.5 ��������� � �������\n";
	DemoReadAndWhriteRectangles();

	OutPutFormatting();
	cout << "\n������� 2.2.6 ��������� � ������������ ������\n";
	DemoDynamicFlight();
	OutPutFormatting();
	DemoDynamicFlights();

	OutPutFormatting();
	cout << "\n������� 2.2.7 �������-������������\n";
	DemoCircle();
	DemoMakeAndCopyFunctions();

	system("pause");
	return 0;
}