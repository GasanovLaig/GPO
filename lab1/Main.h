#pragma once
#include "Arrays.h"
#include "Functions.h"
#include "Pointers.h"
#include "DynamicMemory.h"


enum Commands
{
	ARRAYS,
	FUNCTIONS,
	POINTERS,
	DYNAMIC_MEMORY,
	EXIT
};


void PrintMainMenu()
{
	std::cout << "\n\t0) Массивы\n"
		"\t1) Функции\n"
		"\t2) Указатели и ссылки\n"
		"\t3) Динамическая память\n";
}