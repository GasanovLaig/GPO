#pragma once
#include <string>
//ФУНКЦИИ-КОНСТРУКТОРЫ

struct Circle;

//ex 2.2.7.1 Для структуры Circle создать функцию-конструктор MakeCircle()
Circle* MakeCircle(double x, double y, double radius, const std::string& color);
Circle* CopyCircle(const Circle* circle);
void DemoCircle();