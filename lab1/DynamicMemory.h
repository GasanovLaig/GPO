#pragma once
#include "InsertionSort.h"
#include "PrintArray.h"
#include "Arrays.h"
#include <iostream>
#include <ctime>


//ex 1.1.5.1
void DynamicMemory1()
{
	double* array = new double[8]{ 1.0, 15.0, -8.2, -3.5, 12.6, 38.4, -0.5, 4.5 };
	std::cout << "\nSource array is\n";
	PrintArray(array, 8, ' ');
	std::cout << '\n';
	delete[] array;
}


//ex 1.1.5.2
void DynamicMemory2()
{
	bool* array = new bool[8]{ true, false, true, true, false, true, false, false };
	std::cout << "\nSource array is\n";
	std::cout << std::boolalpha;
	PrintArray(array, 8, ' ');
	std::cout << '\n';
	delete[] array;
}


//ex 1.1.5.3
void DynamicMemory3()
{
	std::cout << "\nEnter the char array's size: ";
	int n;
	std::cin >> n;
	char* array = new char[n];

	std::cout << "\nEnter the char array.\n";
	for (int i = 0; i < n; ++i)
	{
		std::cout << "array[" << i << "] = ";
		std::cin >> array[i];
	}

	std::cout << "\nYour the char array is\n";
	PrintArray(array, n, ' ');
	std::cout << '\n';
	delete[] array;
}


//ex 1.1.5.4
void DynamicMemory4()
{
	float* array = new float[10]{ 1.0, 15.0, -8.2, -3.5,
		12.6, 38.4, -0.5, 4.5, 16.7, 4.5 };
	std::cout << "\nArray of double is\n";
	PrintArray(array, 10, '\n');

	InsertionSort(array, 10);
	
	std::cout << "\nSorted array of double is\n";
	PrintArray(array, 10, ' ');
	std::cout << '\n';
	delete[] array;
}


//ex 1.1.5.5
int GetIndex(int* array, int size, int searchingValue)
{
	for (int i = 0; i < size; ++i)
	{
		if (array[i] == searchingValue)
		{
			return i;
		}
	}
}


void DynamicMemory5()
{
	int* array = new int[10]{ -5, -4, -3, -2, -1, 0, 1, 2, 3, 4 };
	std::cout << "\nArray of int is\n";
	PrintArray(array, 10, '\n');

	std::cout << "\nEnter the searching value: ";
	int searchingValue;
	std::cin >> searchingValue;
	std::cout << "\nIndex of searching value " << searchingValue <<
		" is " << GetIndex(array, 10, searchingValue) << '\n';
	delete[] array;
}


//1.1.5.6
void DynamicMemory6()
{
	char* symbols = new char[15]{ 'a', '5', 'm', 'i', '%', '!', 's',
		'p', '*', '9', 'f', '^', ';', 'q', 'k' };
	std::cout << "\nArray of int is\n";
	PrintArray(symbols, 15, '\n');

	std::cout << "\nLetters in array:\n";
	PrintSymbols(symbols, 15);
	std::cout << '\n';

	delete[] symbols;
}


//ex 1.1.5.7
int* MakeRandomArray(int arraySize)
{
	int* array = new int[arraySize];
	srand(static_cast<size_t>(time(nullptr)));
	for (int i = 0; i < arraySize; ++i)
	{
		array[i] = rand() % 101;
	}

	return array;
}


void DynamicMemory7()
{
	std::cout << "\nDynamicArray of 5:\n";
	int* array1 = MakeRandomArray(5);
	PrintArray(array1, 5, ' ');

	std::cout << "\nDynamicArray of 8:\n";
	int* array2 = MakeRandomArray(8);
	PrintArray(array1, 8, ' ');

	std::cout << "\nDynamicArray of 13:\n";
	int* array3 = MakeRandomArray(13);
	PrintArray(array1, 13, ' ');
	std::cout << '\n';
}


//ex 1.1.5.8
int* ReadArray(int size)
{
	int* values = new int[size];
	for (int i = 0; i < size; ++i)
	{
		std::cin >> values[i];
	}

	return values;
}


int CountPositivValues(int* values, int size)
{
	int count = 0;
	for (int i = 0; i < size; ++i)
	{
		if (values[i] > 0)
		{
			++count;
		}
	}

	return count;
}


void DynamicMemory8()
{
	int size = 15;
	int* values = ReadArray(size);
	std::cout << "\nCount is " << CountPositivValues(values, size);

	delete[] values;
	size = 20;
	values = ReadArray(size);
	std::cout << "\nCount is " << CountPositivValues(values, size);
	delete[] values;
}


void DynamicMemoryMenu()
{
	std::cout << "\nÏÅÐÂÎÅ ÇÀÄÀÍÈÅ\n";
	DynamicMemory2();
	system("pause");
	system("cls");
	std::cout << "\nÂÒÎÐÎÅ ÇÀÄÀÍÈÅ\n";
	DynamicMemory2();
	system("pause");
	system("cls");
	std::cout << "\nÒÐÅÒÜÅ ÇÀÄÀÍÈÅ\n";
	DynamicMemory3();
	system("pause");
	system("cls");
	std::cout << "\n×ÅÒÂÅÐÒÎÅ ÇÀÄÀÍÈÅ\n";
	DynamicMemory4();
	system("pause");
	system("cls");
	std::cout << "\nÏßÒÎÅ ÇÀÄÀÍÈÅ\n";
	DynamicMemory5();
	system("pause");
	system("cls");
	std::cout << "\nØÅÑÒÎÅ ÇÀÄÀÍÈÅ\n";
	DynamicMemory6();
	system("pause");
	system("cls");
	std::cout << "\nÑÅÄÜÌÎÅ ÇÀÄÀÍÈÅ\n";
	DynamicMemory7();
	system("pause");
	system("cls");
	std::cout << "\nÂÎÑÜÌÎÅ ÇÀÄÀÍÈÅ\n";
	DynamicMemory8();
}