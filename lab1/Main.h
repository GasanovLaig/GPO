#pragma once
#include "Arrays.h"
#include "Functions.h"
#include "Pointers.h"
#include "DynamicMemory.h"


enum Commands
{
	ARRAYS, //TODO: ��������� ����� �������, ��������� ���������
	FUNCTIONS, //TODO: ���� �����
	POINTERS, //TODO: ���� �����
	DYNAMIC_MEMORY, //TODO: ���� �����, ��� ������� �������������, ������ ����� ����� � ���������
	EXIT //TODO: ���� �����
};

//TODO: ����, ��� ������� ���� ���� � main.cpp ���������. � ���� ��� ����� ���� ���������?
void PrintMainMenu()
{
	std::cout << "\n\t0) �������\n"
		"\t1) �������\n"
		"\t2) ��������� � ������\n"
		"\t3) ������������ ������\n";
}