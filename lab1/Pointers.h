#pragma once
#include <iostream>


//ex 1.1.4.1
void Pointers1()
{
	int a = 5;
	int b = 4;
	std::cout << "\nAdress of a: " << &a <<
		"\nAdress of b: " << &b;

	double c = 13.5;
	std::cout << "\nAdress of c: " << &c;

	bool d = true;
	std::cout << "\nAdress of d: " << &d << '\n';
}


//ex 1.1.4.2
void Pointers2()
{
	int array1[10] = { 1, 2, 7, -1, 5, 3, -1, 7, 1, 6 };
	std::cout << "\nSize of int type: " << sizeof(int) << '\n';
	for (int i = 0; i < 10; ++i)
	{
		std::cout << "\nAdress of array[" << i << "] = " << &array1[i];
	}

	std::cout << "\nSize of double type: " << sizeof(double) << '\n';
	double array2[10] = { 1.0, 2.0, 7.0, -1.0, 5.0, 3.5, -1.8, 7.2, 1.9, 6.2 };
	for (int i = 0; i < 10; ++i)
	{
		std::cout << "\nAdress of array2[" << i << "] = " << &array2[i];
	}
	std::cout << '\n';
}


//ex 1.1.4.3
void Pointers3()
{
	int a = 5;
	int& b = a;

	std::cout << "\nAddress of a: " << &a <<
		"\nAddress of b: " << &b;

	b = 7;
	std::cout << "\nValue of a: " << a << '\n';
}


//ex 1.1.4.4
void Foo4(double a)
{
	std::cout << "\nAddress of a in Foo(): " << &a <<
		"\nValue of a in Foo(): " << a;

	a = 15.0;
	std::cout << "\nNew value of a in Foo(): " << a << '\n';
}


void Pointers4()
{
	double a = 5.0;
	std::cout << "\nAddress of a in main(): " << &a <<
		"\nValue of a in main(): " << a;

	Foo4(a);

	std::cout << "\nValue of a in main(): " << a << '\n';
}


//ex 1.1.4.5
void Foo5(double& a)
{
	std::cout << "\nAddress of a in Foo(): " << &a <<
		"\nValue of a in Foo(): " << a;

	a = 15.0;
	std::cout << "\nNew value of a in Foo(): " << a << '\n';
}


void Pointers5()
{
	double a = 5.0;
	std::cout << "\nAddress of a in main(): " << &a <<
		"\nValue of a in main(): " << a;

	Foo5(a);

	std::cout << "\nValue of a in main(): " << a << '\n';
}


//ex 1.1.4.6
void Pointers6()
{
	int a = 5;
	int* pointer = &a;

	std::cout << "\nAddress of a: " << &a <<
		"\nAddress in pointer: " << pointer <<
		"\nAddress of a: " << &pointer << '\n';

	*pointer = 7;
	std::cout << "\nValue in a: " << a <<
		"\nValue by pointer address: " << *pointer << '\n';
}


//ex 1.1.4.7
void Pointers7()
{
	std::cout << "\n1)Ïðè îáúÿâëåíèè óêàçûâàåòñÿ òèï ïåðåìåííîé."
		"\n2)Îïåðàöèÿ óìíîæåíèÿ - ýòî áèíàðíîûé îïåðàòîð,"
		"ò.å.ôóíêöèÿ ïðèíèìàþùàÿ äâà îïåðàíäà(ïàðàìåòðà)."
		"\n3)Îïåðàöèÿ ðàçûìåíîâàíèÿ - ýòî óíàðíûé îïåðàòîð,"
		"ò.å.ôóíêöèÿ ïðèíèìàþùàÿ îäèí îïåðàíä(ïàðàìåòð).\n";
}


//ex 1.1.4.8
void Foo8(double* a)
{
	std::cout << "\nAddress in pointer: " << a <<
		"\nAddress of pointer: " << &a <<
		"\nValue in pointer address: " << *a;

	*a = 15.0;
	std::cout << "\nValue in pointer address: " << *a << '\n';
}


void Pointers8()
{
	double value = 5.0;
	double* pointer = &value;
	std::cout << "\nAddress of value in main(): " << &value <<
		"\nAddress in pointer in main(): " << pointer <<
		"\nAddress of pointer in main(): " << &pointer <<
		"\nValue of \'value\' in main(): " << value;

	Foo8(pointer);

	std::cout << "\nValue of \'value\' in main(): " << value << '\n';
}


void PointersMenu()
{
	std::cout << "\nÏÅÐÂÎÅ ÇÀÄÀÍÈÅ\n";
	Pointers2();
	system("pause");
	system("cls");
	std::cout << "\nÂÒÎÐÎÅ ÇÀÄÀÍÈÅ\n";
	Pointers2();
	system("pause");
	system("cls");
	std::cout << "\nÒÐÅÒÜÅ ÇÀÄÀÍÈÅ\n";
	Pointers3();
	system("pause");
	system("cls");
	std::cout << "\n×ÅÒÂÅÐÒÎÅ ÇÀÄÀÍÈÅ\n";
	Pointers4();
	system("pause");
	system("cls");
	std::cout << "\nÏßÒÎÅ ÇÀÄÀÍÈÅ\n";
	Pointers5();
	system("pause");
	system("cls");
	std::cout << "\nØÅÑÒÎÅ ÇÀÄÀÍÈÅ\n";
	Pointers6();
	system("pause");
	system("cls");
	std::cout << "\nÑÅÄÜÌÎÅ ÇÀÄÀÍÈÅ\n";
	Pointers7();
	system("pause");
	system("cls");
	std::cout << "\nÂÎÑÜÌÎÅ ÇÀÄÀÍÈÅ\n";
	Pointers8();
}