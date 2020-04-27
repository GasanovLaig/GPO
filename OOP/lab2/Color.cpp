#include "Color.h"

#include "WeeksDay.h"
#include "MoviesGenre.h"
#include "SmartphonesManufacturer.h"
#include "EducationsForm.h"
#include "Season.h"

#include <iostream>
#include "OutPutFormatting.h"
using namespace std;

void DemoEnums()
{
	//ex 2.2.8.3
	Color color = Blues;
	WeeksDay weeksDay = Sunday;
	MoviesGenre movieGenre = Drama;
	EducationsForm educationsForm = ParTime;
	SmartphonesManufacturer smartphonesManufacturer = Huawei;
	Season season = Summer;

	//ex 2.2.8.4
	Color colors1[6]{ Red, Red, Blue, Blues, Green, Yellow };
	WeeksDay days[6]{ Monday, Sunday, Monday, Sunday, Monday, Sunday };
	SmartphonesManufacturer manufacturers[6]{ Apple, Meizu, Huawei, Samsung,
		Huawei,	Huawei };
	MoviesGenre genres[6]{ Comedy, Drama, Thriller, Comedy, Horror, Action };
	Season seasons[6]{ Summer, Winter, Summer, Winter, Summer, Winter };

	//ex 2.2.8.6
	WriteColor(ReadColor());

	//ex 2.2.8.7
	FormatOutput();
	Color colors2[6]{ Red, Blues, Yellow, Red, Yellow, Green };
	cout << "\nИсходный массив:\n";
	for (size_t i = 0; i < 6; ++i)
	{
		WriteColor(colors2[i]);
	}

	cout << "\nКол-во красных цветов: " << CountRed(colors2, 6);

	//ex 2.2.8.8
	FormatOutput();
	cout << "\n Исходный массив:\n";
	for (size_t i = 0; i < 6; ++i)
	{
		WriteColor(colors2[i]);
	}

	cout << "\nКол-во красных цветов: " << CountColor(colors2, 6, Red);
	cout << "\nКол-во синих цветов: " << CountColor(colors2, 6, Blues);
	cout << "\nКол-во синих фиолетовых: " << CountColor(colors2, 6, Purple);
}

//ex 2.2.8.5
void WriteColor(Color color)
{
	switch (color)
	{
		case Red:
		{
			cout << "\nКрасный цвет\n";
			break;
		}
		case Orange:
		{
			cout << "\nОранжевый цвет\n";
			break;
		}
		case Yellow:
		{
			cout << "\nЖелтый цвет\n";
			break;
		}
		case Green:
		{
			cout << "\nЗеленый цвет\n";
			break;
		}
		case Blue:
		{
			cout << "\nГолубой цвет\n";
			break;
		}
		case Blues:
		{
			cout << "\nСиний цвет\n";
			break;
		}
		case Purple:
		{
			cout << "\nФиолетовый цвет\n";
			break;
		}
	}
}

//ex 2.2.8.6
Color ReadColor()
{
	cout << "\nВведите число от 0 до 6 (0 – красный, 1 – оранжевый,"
		"2 – желтый, 3 – зеленый, 4 – голубой, 5 – синий, 6 – фиолетовый):\n";
	__int8 color;
	cin >> color;

	switch (color)
	{
		case Red:
		{
			return Red;
		}
		case Orange:
		{
			return Orange;
		}
		case Yellow:
		{
			return Yellow;
		}
		case Green:
		{
			return Green;
		}
		case Blue:
		{
			return Blue;
		}
		case Blues:
		{
			return Blues;
		}
		case Purple:
		{
			return Purple;
		}
		default:
		{
			return Red;
		}
	}
}

//ex 2.2.8.7
size_t CountRed(const Color* colors, size_t size)
{
	size_t count = 0;
	for (size_t i = 0; i < size; ++i)
	{
		if (colors[i] == Red)
		{
			++count;
		}
	}

	return count;
}

//ex 2.2.8.8
size_t CountColor(const Color* colors, size_t size, Color findedColor)
{
	size_t count = 0;
	for (size_t i = 0; i < size; ++i)
	{
		if (colors[i] == findedColor)
		{
			++count;
		}
	}

	return count;
}