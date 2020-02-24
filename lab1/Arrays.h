#pragma once
#include "InsertionSort.h"
#include "PrintArray.h"
#include <iostream>


//ex 1.1.2.1
void Arrays1()
{
	int array[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	std::cout << "\nSource array is\n";
	PrintArray(array, 10, ' ');

	InsertionSort(array, 10);

	std::cout << "\nSorted array is\n";
	PrintArray(array, 10, ' ');
}


//ex 1.1.2.2
void Arrays2()
{
	float array[10] = { -1.9, 2.5, -0.5, 6.7, 4.3, 9.9, 3.14, 2.718, -1.6, 8.4 };
	std::cout << "\nSource array is\n";
	PrintArray(array, 10, ' ');

	std::cout << "\nEnter the searchingValue: ";
	float searchingValue;
	std::cin >> searchingValue;
	int count = 0;
	for (int i = 0; i < 10; ++i)
	{
		if (searchingValue >= array[i])
		{
			++count;
		}
	}
	std::cout << "\nElements of array more than " << searchingValue <<
		" is " << count << '\n';
}


//ex 1.1.2.3
void PrintSymbols(char* symbols, int size)
{
	__int8 minAscii = 'a';
	__int8 maxAscii = 'z';
	for (int i = 0; i < 8; ++i)
	{
		if (minAscii <= symbols[i] && symbols[i] <= maxAscii)
		{
			std::cout << symbols[i] << ' ';
		}
	}
}


void Arrays3()
{
	char symbols[8];
	std::cout << "\nEnter array of 8 chars:";
	for (int i = 0; i < 8; ++i)
	{
		std::cout << "\nsymbols[" << i << "] = ";
		std::cin >> symbols[i];
	}
	PrintArray(symbols, 8, ' ');

	std::cout << "\nLetters [a-z]\n";
	PrintSymbols(symbols, 8);
	std::cout << '\n';
}


void ArraysMenu()
{
	std::cout << "\nÏÅÐÂÎÅ ÇÀÄÀÍÈÅ\n";
	Arrays1();
	system("pause");
	system("cls");
	std::cout << "\nÂÒÎÐÎÅ ÇÀÄÀÍÈÅ\n";
	Arrays2();
	system("pause");
	system("cls");
	std::cout << "\nÒÐÅÒÜÅ ÇÀÄÀÍÈÅ\n";
	Arrays3();
}