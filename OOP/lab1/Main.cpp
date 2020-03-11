#include "Main.h"

int main()
{
	setlocale(LC_ALL, "ru");
	int command;
	while (true)
	{
		system("cls");
		PrintMainMenu();
		std::cout << "\nВведите номер команды: ";
		std::cin >> command;
		switch (command)
		{
			case Arrays:
			{
				ArraysMenu();
				system("pause");
				break;
			}
			case Functions:
			{
				FunctionsMenu();
				system("pause");
				break;
			}
			case Pointers:
			{
				PointersMenu();
				system("pause");
				break;
			}
			case DynamicMemory:
			{
				DynamicMemoryMenu();
				system("pause");
				break;
			}
			case Exit:
			{
				return 0;
			}
		}
	}
}