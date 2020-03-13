#include "Task228Enums.h"
#include <iostream>
#include "OutPutFormatting.h"
using namespace std;

void DemoEnums()
{
	//ex 2.2.8.3
	Color color = Blues;
	DayOfWeek day = Sunday;
	Genre genre = Drama;
	FormOfEducation form = ParTime;
	ManufacturerOfSmartphones manufaturer = Huawei;
	Season season = Summer;

	//ex 2.2.8.4
	Color colors1[6]{ Red, Red, Blue, Blues, Green, Yellow };
	DayOfWeek days[6]{ Monday, Sunday, Monday, Sunday, Monday, Sunday };
	ManufacturerOfSmartphones manufacturers[6]{ Apple, Meizu, Huawei, Samsung,
		Huawei,	Huawei };
	Genre genres[6]{ Comedy, Drama, Thriller, Comedy, Horror, Action };
	Season seasons[6]{ Summer, Winter, Summer, Winter, Summer, Winter };

	//ex 2.2.8.6
	WhriteColor(ReadColor());
	
	//ex 2.2.8.7
	OutPutFormatting();
	Color colors2[6]{ Red, Blues, Yellow, Red, Yellow, Green };
	cout << "\n »сходный массив:\n";
	for (size_t i = 0; i < 6; ++i)
	{
		WhriteColor(colors2[i]);
	}

	cout << "\n ол-во красных цветов: " << CountRed(colors2, 6);

	//ex 2.2.8.8
	OutPutFormatting();
	cout << "\n »сходный массив:\n";
	for (size_t i = 0; i < 6; ++i)
	{
		WhriteColor(colors2[i]);
	}
	cout << "\n ол-во красных цветов: " << CountColor(colors2, 6, Red);
	cout << "\n ол-во синих цветов: " << CountColor(colors2, 6, Blues);
	cout << "\n ол-во синих фиолетовых: " << CountColor(colors2, 6, Purple);
}

//ex 2.2.8.5
void WhriteColor(Color color)
{
	switch (color)
	{
		case Red:
		{
			cout << "\n расный цвет\n";
			break;
		}
		case Orange:
		{
			cout << "\nќранжевый цвет\n";
			break;
		}
		case Yellow:
		{
			cout << "\n∆елтый цвет\n";
			break;
		}
		case Green:
		{
			cout << "\n«еленый цвет\n";
			break;
		}
		case Blue:
		{
			cout << "\n√олубой цвет\n";
			break;
		}
		case Blues:
		{
			cout << "\n—иний цвет\n";
			break;
		}
		case Purple:
		{
			cout << "\n‘иолетовый цвет\n";
			break;
		}
	}
}

//ex 2.2.8.6
Color ReadColor()
{
	cout << "\n¬ведите число от 0 до 6 (0 Ц красный, 1 Ц оранжевый,"
		"2 Ц желтый, 3 Ц зеленый, 4 Ц голубой, 5 Ц синий, 6 Ц фиолетовый):\n";
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