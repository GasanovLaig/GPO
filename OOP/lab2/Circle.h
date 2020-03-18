#pragma once
#include <string>

struct Circle
{
	double X;
	double Y;
	double Radius;
	std::string Color;
};

// TODO: раскидать функции по соответствующим файлам структур. Не сделано! Ниже куча функций для других структур
Circle* MakeCircle(double x, double y, double radius, const std::string& color);
Circle* CopyCircle(const Circle* circle);
void DemoCircle();