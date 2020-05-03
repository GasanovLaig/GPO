#include "PauseClearConsole.h"
#include <iostream>

void PauseClear()
{
	system("pause");
	system("cls");

	std::cin.clear();
	std::cin.ignore();
}