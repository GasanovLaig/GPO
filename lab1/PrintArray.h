#pragma once
#include <iostream>


template <typename T>
void PrintArray(T* array, int size, char delimiter)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << array[i] << delimiter;
	}
}