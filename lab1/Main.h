#pragma once
#include "Arrays.h"
#include "Functions.h"
#include "Pointers.h"
#include "DynamicMemory.h"


enum Commands
{
	ARRAYS, //TODO: Заглавная буква большая, остальные маленькие
	FUNCTIONS, //TODO: тоже самое
	POINTERS, //TODO: тоже самое
	DYNAMIC_MEMORY, //TODO: тоже самое, без нижнего подчеркивания, каждое новое слово с заглавной
	EXIT //TODO: тоже самое
};

//TODO: имхо, эту функцию надо было в main.cpp поместить. К чему она здесь одна болтается?
void PrintMainMenu()
{
	std::cout << "\n\t0) Массивы\n"
		"\t1) Функции\n"
		"\t2) Указатели и ссылки\n"
		"\t3) Динамическая память\n";
}