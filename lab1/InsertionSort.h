#pragma once

template <typename T>
void InsertionSort(T* array, int size)
{//TODO: ��� ������ � ����
	T temporary;
	for (int i = 0; i < size; ++i)
	{
		for (int j = i; j > i; --j)
		{
			if (array[j] < array[j + 1])
			{
				temporary = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temporary;
			}
		}
	}
}