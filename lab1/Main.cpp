#include "Main.h"

int main()
{
	setlocale(LC_ALL, "ru");
	int command;
	while (true)
	{
		system("cls");
		PrintMainMenu();
		std::cout << "\n¬ведите номер команды: ";
		std::cin >> command;
		switch (command)
		{
			case ARRAYS:
			{
				ArraysMenu();
				system("pause");
				break;
			}
			case FUNCTIONS:
			{
				FunctionsMenu();
				system("pause");
				break;
			}
			case POINTERS:
			{
				PointersMenu();
				system("pause");
				break;
			}
			case DYNAMIC_MEMORY:
			{
				DynamicMemoryMenu();
				system("pause");
				break;
			}
			case EXIT:
			{
				return 0;
			}
		}
	}
}