#pragma once
#include <string>
//�������-������������

struct Circle;

//ex 2.2.7.1 ��� ��������� Circle ������� �������-����������� MakeCircle()
Circle* MakeCircle(double x, double y, double radius, const std::string& color);
Circle* CopyCircle(const Circle* circle);
void DemoCircle();