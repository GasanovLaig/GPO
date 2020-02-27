#pragma once
#include "Arrays.h"
#include "Functions.h"
#include "Pointers.h"
#include "DynamicMemory.h"

enum Commands
{
	Arrays, //TODO: Заглавная буква большая, остальные маленькие
	Functions, //TODO: тоже самое
	Pointers, //TODO: тоже самое
	DynamicMemory, //TODO: тоже самое, без нижнего подчеркивания, каждое новое слово с заглавной
	Exit //TODO: тоже самое
};

//TODO: имхо, эту функцию надо было в main.cpp поместить. К чему она здесь одна болтается?
//Это Main.h, в Main.cpp она тоже ни к чему
void PrintMainMenu()
{
	std::cout << "\n\t0) Массивы\n"
		"\t1) Функции\n"
		"\t2) Указатели и ссылки\n"
		"\t3) Динамическая память\n";
		"\t4) Выход из программы\n";
}