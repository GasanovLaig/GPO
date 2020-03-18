#include "Rectangle.h"
#include <iostream>
#include "OutPutFormatting.h"
using namespace std;

void DemoRectangle()
{
	Task222::Rectangle rectangle1{ 20.1, 4.25, "Grey" };
	cout << "\nRectangle is (Length, Width, Color) " << rectangle1.Length <<
		"; " << rectangle1.Width << "; " << rectangle1.Color << '\n';
	OutPutFormatting();
	// TODO: все русские символы зашакалены - устанавливал Unicode? Пересохранял файлы?
	cout << "\nВведите длину прямоуголника: ";
	Task222::Rectangle rectangle2;
	cin >> rectangle2.Length;
	cout << "\nВведите ширину прямоуголника: ";
	cin >> rectangle2.Width;
	cout << "\nВведите цвет прямоуголника: ";
	cin >> rectangle2.Color;
	cout << "\nРазмеры прямоуголника: " <<
		rectangle2.Length << 'x' << rectangle2.Width <<
		" öâåò " << rectangle2.Color << '\n';

	OutPutFormatting();
	Task222::Rectangle rectangles[3]
	{
		{1, 2, "red"},
		{3, 4, "black"},
		{5, 6, "green"}
	};

	for (int i = 0; i < 3; ++i)
	{
		cout << "\nПрямоугольник " << i << " (Length, Width, Color) " <<
			rectangles[i].Length << "; " <<
			rectangles[i].Width << "; " <<
			rectangles[i].Color << '\n';
	}

	Task222::Rectangle* pointer1 = &rectangle1;
	cout << "\nПервый прямоугольник длиной - " << pointer1->Length <<
		", шириной - " << pointer1->Width <<
		", цветом - " << pointer1->Color << '\n';

	pointer1->Length = 3.14;
	pointer1->Width = 21;
	pointer1->Color = "Purple";

	Task222::Rectangle* pointer2 = pointer1;
	cout << "\nАдрес в 1-ом указателе: " << pointer1 <<
		"\nАдрес во 2-ом указателе r5: " << pointer2 << '\n';

	OutPutFormatting();
	//ex 2.2.5.4
	cout << "\nЗадание 2.2.5.4 функция Exchange(Rectangle& r1, Rectanlge& r2)" <<
		"\nПервый прямоуголник имеет размерность: " <<
		rectangle1.Length << 'x' << rectangle1.Width <<
		"\nВторой прямоуголник имеет размерность: " <<
		rectangle2.Length << 'x' << rectangle2.Width << '\n';
	Exchange(rectangle1, rectangle2);
	cout << "\nПосле перестановки полей 1-го и 2-го прямоугольников: " <<
		"\n1-ый имеет размерность " <<
		rectangle1.Length << 'x' << rectangle1.Width <<
		"\n2-ой имеет размерность " <<
		rectangle2.Length << 'x' << rectangle2.Width << '\n';

	OutPutFormatting();
	//ex 2.2.5.5
	cout << "\nЗадание 2.2.5.5 " <<
		"написать функцию void FindRectangle(Rectangle* r, int count)";
	FindRectangle(rectangles, 3);

	OutPutFormatting();
	//ex 2.2.5.6
	cout << "\nЗадание 2.2.5.6 " << "написать функцию" <<
		"void FindRectangle(Rectangle* rectangles, int count)";
	FindMaxRectangle(rectangles, 3);
}

void WhriteRectangle(const Task222::Rectangle& rectangle)
{
	cout << "\nПрямоугольник с длиной - " << rectangle.Length <<
		", шириной - " << rectangle.Width <<
		", цветом - " << rectangle.Color << '\n';
}

void ReadRectangle(Task222::Rectangle& rectangle)
{
	cout << "\nВведите длину, ширину, и цвет прямоугольника:";
	cin >> rectangle.Length >>
		rectangle.Width >>
		rectangle.Color;
}

void DemoReadAndWhriteRectangles()
{
	Task222::Rectangle rectangles[5];
	for (int i = 0; i < 5; ++i)
	{
		ReadRectangle(rectangles[i]);
	}

	for (int i = 0; i < 5; ++i)
	{
		WhriteRectangle(rectangles[i]);
	}
}

void Exchange(Task222::Rectangle& rectangle1, Task222::Rectangle& rectangle2)
{
	double temporary = rectangle1.Length;
	rectangle1.Length = rectangle2.Length;
	rectangle2.Length = temporary;

	temporary = rectangle1.Width;
	rectangle1.Width = rectangle2.Width;
	rectangle2.Width = temporary;

	string tempLine = rectangle1.Color;
	rectangle1.Color = rectangle2.Color;
	rectangle2.Color = tempLine;
}

void FindRectangle(const Task222::Rectangle* rectangles, size_t size)
{
	double maxLength = rectangles[0].Length;
	size_t index = 0;
	for (size_t i = 1; i < size; ++i)
	{
		if (rectangles[i].Length > maxLength)
		{
			maxLength = rectangles[i].Length;
			index = i;
		}
	}

	cout << "\nПрямоугольник с наибольшей длиной имеет размерность " <<
		rectangles[index].Length << 'x' << rectangles[index].Width << '\n';
}

void FindMaxRectangle(const Task222::Rectangle* rectangles, size_t size)
{
	long double maxArea = (rectangles[0].Length * rectangles[0].Width);
	size_t index = 0;
	for (size_t i = 1; i < size; ++i)
	{
		long double area = (rectangles[i].Length * rectangles[i].Width);
		if (area > maxArea)
		{
			maxArea = area;
			index = i;
		}
	}

	cout << "\nПрямоугольник с набиольшей площадью имеет размерность " <<
		rectangles[index].Length << 'x' << rectangles[index].Width << '\n';
}