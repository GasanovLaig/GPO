#pragma once
#include "Arrays.h"
#include "Functions.h"
#include "Pointers.h"
#include "DynamicMemory.h"

enum Commands
{
	Arrays,
	Functions,
	Pointers,
	DynamicMemory,
	Exit
};

void PrintMainMenu()
{
	std::cout << "\n\t0) �������\n"
		"\t1) �������\n"
		"\t2) ��������� � ������\n"
		"\t3) ������������ ������\n";
		"\t4) ����� �� ���������\n";
}