#pragma once
#include <iostream>


//ex 1.1.3.1
double GetPower(double base, int exponent)
{
	double power = 1;
	if (exponent >= 0)
	{
		for (int i = 0; i < exponent; ++i)
		{
			power *= base;
		}
	}
	else
	{
		for (int i = 0; i > exponent; --i)
		{
			power *= (1 / base);
		}
	}

	return power;
}


void Functions1()
{
	std::cout << '\n' << 2.0 << " ^ " << 5 << " = " << GetPower(2.0, 5) <<
		'\n' << 3.0 << " ^ " << 4 << " = " << GetPower(3.0, 4) <<
		'\n' << -2.0 << " ^ " << 5 << " = " << GetPower(-2.0, 5) << '\n';
}


//ex 1.1.3.2
void DemoGetPower(double base, int exponent)
{
	std::cout << '\n' << base << " ^ " << exponent <<
		" = " << GetPower(base, exponent);
}


void Functions2()
{
	std::cout << '\n';
	DemoGetPower(2.0, 5);
	DemoGetPower(3.0, 4);
	DemoGetPower(-2.0, 5);
	std::cout << '\n';
}


//ex 1.1.3.3
void RoundToTens(int& value)
{
	if ((value % 10) < 5)
	{
		value = (value / 10) * 10;
	}
	else
	{
		value += (10 - value % 10);
	}
}


void Functions3()
{
	int num1 = 14;
	std::cout << '\n' << "\nFor " << num1;
	RoundToTens(num1);
	std::cout << " rounded value is " << num1;

	int num2 = 191;
	std::cout << "\nFor " << num2;
	RoundToTens(num2);
	std::cout << " rounded value is " << num2;

	int num3 = 27;
	std::cout << "\nFor " << num3;
	RoundToTens(num3);
	std::cout << " rounded value is " << num3 << '\n';
}


void FunctionsMenu()
{
	std::cout << "\nÏÅÐÂÎÅ ÇÀÄÀÍÈÅ\n";
	Functions1();
	system("pause");
	system("cls");
	std::cout << "\nÂÒÎÐÎÅ ÇÀÄÀÍÈÅ";
	Functions2();
	system("pause");
	system("cls");
	std::cout << "\nÒÐÅÒÜÅ ÇÀÄÀÍÈÅ";
	Functions3();
}