#pragma once
#include "Arrays.h"
#include "Functions.h"
#include "Pointers.h"
#include "DynamicMemory.h"

enum Commands
{
	Arrays, //TODO: ��������� ����� �������, ��������� ���������
	Functions, //TODO: ���� �����
	Pointers, //TODO: ���� �����
	DynamicMemory, //TODO: ���� �����, ��� ������� �������������, ������ ����� ����� � ���������
	Exit //TODO: ���� �����
};

//TODO: ����, ��� ������� ���� ���� � main.cpp ���������. � ���� ��� ����� ���� ���������?
//��� Main.h, � Main.cpp ��� ���� �� � ����
void PrintMainMenu()
{
	std::cout << "\n\t0) �������\n"
		"\t1) �������\n"
		"\t2) ��������� � ������\n"
		"\t3) ������������ ������\n";
		"\t4) ����� �� ���������\n";
}