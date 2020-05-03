#include "PauseClearConsole.h"
#include <iostream>
// TODO: название не соответствует назначению. Ожидание, что после вызова будет какой-то вывод в определенном формате
void PauseClear()
{
	system("pause");
	system("cls");

	std::cin.clear();
	std::cin.ignore();
}